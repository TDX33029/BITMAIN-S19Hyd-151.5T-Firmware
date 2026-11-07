// FUN_00018c98 @ 00018c98  size=132  callers=2
// program: bmminer


undefined4 FUN_00018c98(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  do {
    uVar1 = FUN_0002a6f0(uVar4);
    if (uVar1 != 0) {
      for (iVar3 = 0; iVar2 = FUN_00017ec4(uVar1), iVar3 < iVar2; iVar3 = iVar3 + 1) {
        iVar2 = FUN_0002a594();
        uVar1 = uVar4 & 0xff;
        if (iVar2 != 0) {
          FUN_000830c8(uVar4 & 0xff,
                       (int)(short)*(undefined4 *)(DAT_000bfb44 + iVar3 * 4) *
                       (int)(short)DAT_000bfb40 & 0xff);
          uVar1 = usleep(10000);
        }
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 != 4);
  return 0;
}

