// FUN_01655e90 @ 01655e90 size=48 calls_out=3 calls_in=0
// strings: fatal runtime error: thread local panicked on drop; aborting 

void FUN_01655e90(void)

{
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined1 uStack_9;
  
  FUN_01655cac(local_14,&uStack_9,"fatal runtime error: thread local panicked on drop, aborting\n",
               0x7b);
  FUN_00643398(local_14[0],local_10);
                    /* WARNING: Subroutine does not return */
  FUN_015bef44();
}

