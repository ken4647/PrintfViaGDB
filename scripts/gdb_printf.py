import gdb

class VlogReader(gdb.Breakpoint):
    def __init__(self, func_name:str):
        print("VlogReader initializing...")
        super(VlogReader, self).__init__(func_name, gdb.BP_BREAKPOINT, internal=False)
        # set breakpoint as silent to avoid printing the log message
        self.silent = True
        self.enabled = True
        
        print("VlogReader initialized!")
    
    def stop(self):
        # print the log message and continue execution
        print(gdb.parse_and_eval("delog_buf").string(), end="")
        return False

if __name__ == "__main__":
    my_delog = VlogReader("dlog_sync")
    
    # run program
    gdb.execute("r")