// FUN_009e380c @ 009e380c size=48 calls_out=3 calls_in=0
// strings: fatal runtime error: thread local panicked on drop; aborting 

void FUN_009e380c(void)

{
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined1 uStack_9;
  
  FUN_009f46fc(local_14,&uStack_9,"fatal runtime error: thread local panicked on drop, aborting\n",
               0x7b);
  FUN_008d3668(local_14[0],local_10);
                    /* WARNING: Subroutine does not return */
  FUN_015bef44();
}

