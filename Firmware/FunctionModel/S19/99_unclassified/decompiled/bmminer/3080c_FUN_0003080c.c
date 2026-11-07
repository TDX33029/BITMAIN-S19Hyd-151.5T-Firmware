// FUN_0003080c @ 0003080c  size=200  callers=2
// program: bmminer


int FUN_0003080c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  
  uVar1 = FUN_0002005c();
  uVar2 = FUN_0002008c();
  iVar3 = FUN_00067408(uVar1,uVar2);
  uVar1 = FUN_0002008c();
  iVar4 = FUN_00067190(param_2,uVar1);
  iVar5 = FUN_0002003c();
  uVar8 = iVar4 * iVar5;
  uVar1 = FUN_0002008c();
  FUN_000673ec(param_2,uVar1);
  uVar9 = iVar3 * extraout_r1;
  iVar4 = FUN_0002003c();
  uVar6 = iVar4 + uVar8;
  if (uVar6 <= uVar8) {
    return 0;
  }
  iVar4 = 0;
  piVar10 = &DAT_0008a9b0 + uVar9 + 0x404 + (uVar8 + param_1 * 0x100) * 0x400;
  do {
    if (uVar9 < iVar3 + uVar9) {
      piVar7 = piVar10;
      do {
        piVar7 = piVar7 + 1;
        iVar4 = iVar4 + *piVar7;
      } while (piVar7 != piVar10 + iVar3);
    }
    uVar8 = uVar8 + 1;
    piVar10 = piVar10 + 0x400;
  } while (uVar6 != uVar8);
  return iVar4;
}

