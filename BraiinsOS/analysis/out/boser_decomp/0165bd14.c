// FUN_0165bd14 @ 0165bd14 size=348 calls_out=2 calls_in=2
// strings: 

void FUN_0165bd14(int *param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  bool bVar14;
  
  piVar12 = param_1 + param_2 * 2 + -2;
  piVar5 = param_3 + param_2 * 2 + -2;
  uVar3 = param_2 >> 1;
  piVar13 = param_1 + uVar3 * 2;
  piVar9 = piVar13 + -2;
  do {
    piVar7 = param_3;
    uVar10 = *(uint *)(*param_1 + 8);
    uVar8 = *(uint *)(*piVar13 + 8);
    uVar1 = uVar10;
    if (uVar8 < uVar10) {
      uVar1 = uVar8;
    }
    uVar1 = FUN_01bed842(*(undefined4 *)(*piVar13 + 4),*(undefined4 *)(*param_1 + 4),uVar1);
    if (uVar1 == 0) {
      uVar1 = uVar8 - uVar10;
    }
    iVar2 = *piVar9;
    piVar4 = piVar13;
    if (uVar1 < 0x80000000) {
      piVar4 = param_1;
    }
    iVar6 = piVar4[1];
    *piVar7 = *piVar4;
    piVar7[1] = iVar6;
    uVar10 = *(uint *)(iVar2 + 8);
    uVar11 = *(uint *)(*piVar12 + 8);
    uVar8 = uVar10;
    if (uVar11 < uVar10) {
      uVar8 = uVar11;
    }
    uVar8 = FUN_01bed842(*(undefined4 *)(*piVar12 + 4),*(undefined4 *)(iVar2 + 4),uVar8);
    if (uVar8 == 0) {
      uVar8 = uVar11 - uVar10;
    }
    piVar4 = piVar9;
    if (uVar8 < 0x80000000) {
      piVar4 = piVar12;
    }
    iVar2 = piVar4[1];
    *piVar5 = *piVar4;
    piVar5[1] = iVar2;
    piVar13 = piVar13 + ((int)uVar1 >> 0x1f) * -2;
    param_1 = param_1 + (uVar1 >> 0x1f ^ 1) * 2;
    piVar9 = piVar9 + ((int)uVar8 >> 0x1f) * 2;
    piVar12 = piVar12 + ~((int)uVar8 >> 0x1f) * 2;
    piVar5 = piVar5 + -2;
    uVar3 = uVar3 - 1;
    param_3 = piVar7 + 2;
  } while (uVar3 != 0);
  piVar9 = piVar9 + 2;
  if ((param_2 & 1) != 0) {
    bVar14 = piVar9 <= param_1;
    piVar5 = piVar13;
    if (!bVar14) {
      piVar5 = param_1;
    }
    iVar2 = piVar5[1];
    piVar7[2] = *piVar5;
    piVar7[3] = iVar2;
    piVar13 = piVar13 + (uint)bVar14 * 2;
    param_1 = param_1 + (uint)!bVar14 * 2;
  }
  bVar14 = param_1 == piVar9;
  if (bVar14) {
    piVar9 = piVar12 + 2;
  }
  if (!bVar14 || piVar13 != piVar9) {
    FUN_01307140();
  }
  return;
}

