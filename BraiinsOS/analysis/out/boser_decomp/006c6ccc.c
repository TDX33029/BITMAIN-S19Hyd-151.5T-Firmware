// FUN_006c6ccc @ 006c6ccc size=336 calls_out=2 calls_in=4
// strings: 

void FUN_006c6ccc(int *param_1,uint param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  bool bVar13;
  
  piVar8 = param_1 + (param_2 - 1);
  uVar2 = param_2 >> 1;
  piVar5 = param_3 + (param_2 - 1);
  piVar9 = param_1 + uVar2 + -1;
  piVar12 = param_1 + uVar2;
  do {
    uVar10 = *(uint *)(*param_1 + 8);
    uVar6 = *(uint *)(*piVar12 + 8);
    uVar1 = uVar10;
    if (uVar6 < uVar10) {
      uVar1 = uVar6;
    }
    uVar1 = FUN_01bed842(*(undefined4 *)(*piVar12 + 4),*(undefined4 *)(*param_1 + 4),uVar1);
    iVar3 = *piVar9;
    if (uVar1 == 0) {
      uVar1 = uVar6 - uVar10;
    }
    piVar11 = piVar12 + -((int)uVar1 >> 0x1f);
    if (uVar1 < 0x80000000) {
      piVar12 = param_1;
    }
    piVar7 = param_3 + 1;
    *param_3 = *piVar12;
    uVar10 = *(uint *)(iVar3 + 8);
    param_1 = param_1 + (uVar1 >> 0x1f ^ 1);
    uVar6 = *(uint *)(*piVar8 + 8);
    uVar1 = uVar10;
    if (uVar6 < uVar10) {
      uVar1 = uVar6;
    }
    uVar1 = FUN_01bed842(*(undefined4 *)(*piVar8 + 4),*(undefined4 *)(iVar3 + 4),uVar1);
    if (uVar1 == 0) {
      uVar1 = uVar6 - uVar10;
    }
    piVar4 = piVar9 + ((int)uVar1 >> 0x1f);
    if (uVar1 < 0x80000000) {
      piVar9 = piVar8;
    }
    *piVar5 = *piVar9;
    piVar8 = piVar8 + ~((int)uVar1 >> 0x1f);
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + -1;
    param_3 = piVar7;
    piVar9 = piVar4;
    piVar12 = piVar11;
  } while (uVar2 != 0);
  piVar4 = piVar4 + 1;
  if ((param_2 & 1) != 0) {
    bVar13 = piVar4 <= param_1;
    piVar5 = piVar11;
    if (!bVar13) {
      piVar5 = param_1;
    }
    *piVar7 = *piVar5;
    piVar11 = piVar11 + bVar13;
    param_1 = param_1 + !bVar13;
  }
  bVar13 = param_1 == piVar4;
  if (bVar13) {
    piVar4 = piVar8 + 1;
  }
  if (!bVar13 || piVar11 != piVar4) {
    FUN_01307140();
  }
  return;
}

