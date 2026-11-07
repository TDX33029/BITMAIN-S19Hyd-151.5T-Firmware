// FUN_016570d4 @ 016570d4 size=220 calls_out=4 calls_in=0
// strings: failed to wake I/O driver

void FUN_016570d4(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  DataMemoryBarrier(0xb);
  *(undefined1 *)(param_1 + 0xfc) = 1;
  if (*(undefined1 **)(param_1 + 400) != &DAT_3b9aca00) {
    DataMemoryBarrier(0xb);
    *(undefined1 *)(param_1 + 0x181) = 1;
    DataMemoryBarrier(0xb);
  }
  piVar3 = (int *)(param_1 + -0x80);
  if (*(int *)(param_1 + 0x130) == -1) {
    FUN_01639ea4(*(int *)(param_1 + 0x134) + 8);
  }
  else {
    FUN_0126df90(&local_20,*(undefined4 *)(param_1 + 0x134));
    if ((char)local_20 != '\x04') {
      local_14 = local_1c;
      local_18 = local_20;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("failed to wake I/O driver",0x19,&local_18,&DAT_018ad2fc,&DAT_018ad384);
    }
  }
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01659344(piVar3);
    return;
  }
  return;
}

