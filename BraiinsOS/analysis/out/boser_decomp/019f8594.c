// FUN_019f8594 @ 019f8594 size=92 calls_out=2 calls_in=6
// strings: failed to wake I/O driverthe timer is shutdown; must be called from the context of Tokio runtimetimer is at capacity and cannot create a new entrytimer duration exceeds maximum durationdeadline has elapsed

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_019f8594(undefined4 param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_01609950(&local_18,param_1);
  if ((char)local_18 != '\x04') {
    uStack_c = uStack_14;
    uStack_10 = local_18;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("failed to wake I/O driverthe timer is shutdown, must be called from the context of Tokio runtimetimer is at capacity and cannot create a new entrytimer duration exceeds maximum durationdeadline has elapsed"
                 ,0x19,&uStack_10,&DAT_01d29970);
  }
  return;
}

