// FUN_000182d4 @ 000182d4  size=144  callers=2
// program: bmminer


undefined4 FUN_000182d4(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  do {
    uVar1 = FUN_000201d8(uVar4);
    if (uVar1 != 0) {
      for (iVar3 = 0; iVar2 = FUN_00017028(uVar1), iVar3 < iVar2; iVar3 = iVar3 + 1) {
        iVar2 = FUN_000200ac();
        uVar1 = 0;
        if ((iVar2 != 0) && (iVar2 = thunk_FUN_00036ad8(), uVar1 = uVar4 & 0xff, iVar2 != 0)) {
          FUN_00058988(uVar4 & 0xff,
                       (int)(short)*(undefined4 *)(DAT_00088824 + iVar3 * 4) *
                       (int)(short)DAT_00088820 & 0xff);
          uVar1 = usleep(10000);
        }
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 != 4);
  return 0;
}

