import gdb

class VlogReader(gdb.Command):
    def __init__(self):
        self.str_length = int(gdb.parse_and_eval("delog_str_length"))
        self.buf_ptr = gdb.parse_and_eval("delog_buf")
        print("VlogReader initialized")
        print(f"delog_str_length: {self.str_length}, delog_buf: {self.buf_ptr}")

    def pop(self):
        print(self.buf_ptr.string(), end="")
        gdb.execute("continue")

if __name__ == "__main__":
    my_delog = VlogReader()
    
    # create breakpoint and set command to execute when breakpoint is hit
    breakpoint = gdb.Breakpoint("dlog_sync")
    breakpoint.silent = True
    breakpoint.commands = "python my_delog.pop()"
    
    # run program
    gdb.execute("r")