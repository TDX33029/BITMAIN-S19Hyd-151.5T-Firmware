// FUN_01647770 @ 01647770 size=160 calls_out=3 calls_in=16
// strings: failed to wake I/O driver

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01647770(int param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(undefined1 **)(param_1 + 0x90) != &DAT_3b9aca00) {
    DataMemoryBarrier(0xb);
    *(undefined1 *)(param_1 + 0x81) = 1;
    DataMemoryBarrier(0xb);
  }
  if (*(int *)(param_1 + 0x30) == -1) {
    FUN_01639ea4(*(int *)(param_1 + 0x34) + 8);
    return;
  }
  FUN_0126df90(&local_18,*(undefined4 *)(param_1 + 0x34));
  if ((char)local_18 != '\x04') {
    uStack_c = uStack_14;
    uStack_10 = local_18;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("failed to wake I/O driver",0x19,&uStack_10,&DAT_018ad2fc);
  }
  return;
}

