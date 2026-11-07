// FUN_000473b4 @ 000473b4  size=212  callers=2
// program: bmminer


int FUN_000473b4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  
  uVar1 = FUN_0002a544();
  uVar2 = FUN_0002a574();
  iVar3 = FUN_00098658(uVar1,uVar2);
  uVar1 = FUN_0002a574();
  iVar4 = FUN_000983e0(param_2,uVar1);
  iVar5 = FUN_0002a524();
  uVar7 = iVar4 * iVar5;
  uVar1 = FUN_0002a574();
  FUN_0009863c(param_2,uVar1);
  uVar8 = iVar3 * extraout_r1;
  iVar4 = FUN_0002a524();
  uVar9 = iVar4 + uVar7;
  if (uVar9 <= uVar7) {
    return 0;
  }
  iVar4 = 0;
  piVar10 = (int *)(param_1 * 0x1fe000 + uVar7 * 0x1fe0 + uVar8 * 4 + 0xcc684);
  do {
    if (uVar8 < iVar3 + uVar8) {
      piVar6 = piVar10;
      do {
        piVar6 = piVar6 + 1;
        iVar4 = iVar4 + *piVar6;
      } while (piVar6 != piVar10 + iVar3);
    }
    uVar7 = uVar7 + 1;
    piVar10 = piVar10 + 0x7f8;
  } while (uVar9 != uVar7);
  return iVar4;
}

