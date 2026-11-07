// FUN_0004e520 @ 0004e520  size=200  callers=1
// program: bmminer


void FUN_0004e520(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar4;
  undefined4 *puVar3;
  int iVar5;
  
  if (DAT_000be8e8 != 2) {
    return;
  }
  iVar5 = 0;
  do {
    iVar2 = FUN_0002a6f0(iVar5);
    if ((iVar2 != 0) && (iVar2 = FUN_0002a514(), uVar1 = DAT_008c7040, 0 < iVar2)) {
      puVar3 = &DAT_00943ae0 + iVar5 * 0x100;
      do {
        puVar4 = puVar3 + 1;
        *puVar3 = uVar1;
        puVar3 = puVar4;
      } while (puVar4 != &DAT_00943ae0 + iVar2 + iVar5 * 0x100);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 4);
  if (0.0 < DAT_000be614) {
    FUN_000261a8(DAT_008c7044,param_1,DAT_008c7040,3000,0,0,0);
  }
  return;
}

