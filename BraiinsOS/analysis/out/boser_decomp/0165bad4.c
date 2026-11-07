// FUN_0165bad4 @ 0165bad4 size=520 calls_out=1 calls_in=2
// strings: 

void FUN_0165bad4(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  
  uVar12 = *(uint *)(*param_1 + 8);
  uVar7 = *(uint *)(param_1[2] + 8);
  uVar1 = uVar12;
  if (uVar7 < uVar12) {
    uVar1 = uVar7;
  }
  uVar1 = FUN_01bed842(*(undefined4 *)(param_1[2] + 4),*(undefined4 *)(*param_1 + 4),uVar1);
  if (uVar1 == 0) {
    uVar1 = uVar7 - uVar12;
  }
  uVar12 = *(uint *)(param_1[4] + 8);
  uVar16 = *(uint *)(param_1[6] + 8);
  uVar7 = uVar12;
  if (uVar16 < uVar12) {
    uVar7 = uVar16;
  }
  iVar2 = FUN_01bed842(*(undefined4 *)(param_1[6] + 4),*(undefined4 *)(param_1[4] + 4),uVar7);
  if (iVar2 == 0) {
    iVar2 = uVar16 - uVar12;
  }
  uVar7 = 2;
  piVar10 = param_1 + ((int)uVar1 >> 0x1f) * -2;
  if (iVar2 < 0) {
    uVar7 = 3;
  }
  piVar9 = param_1 + uVar7 * 2;
  uVar12 = 3;
  uVar16 = *(uint *)(*piVar10 + 8);
  if (iVar2 < 0) {
    uVar12 = 2;
  }
  uVar15 = *(uint *)(*piVar9 + 8);
  uVar13 = uVar16;
  if (uVar15 < uVar16) {
    uVar13 = uVar15;
  }
  iVar2 = FUN_01bed842(*(undefined4 *)(*piVar9 + 4),*(undefined4 *)(*piVar10 + 4),uVar13);
  piVar5 = param_1 + uVar12 * 2;
  if (iVar2 == 0) {
    iVar2 = uVar15 - uVar16;
  }
  iVar6 = (int)~uVar1 >> 0x1f;
  piVar8 = param_1 + iVar6 * -2;
  piVar11 = piVar10;
  if (iVar2 < 0) {
    piVar11 = piVar9;
  }
  uVar15 = *(uint *)(*piVar8 + 8);
  uVar13 = *(uint *)(*piVar5 + 8);
  piVar14 = piVar9;
  uVar16 = uVar7;
  if (iVar2 < 0) {
    uVar16 = ~uVar1 >> 0x1f;
    piVar14 = piVar8;
  }
  uVar4 = uVar15;
  if (uVar13 < uVar15) {
    uVar4 = uVar13;
  }
  iVar3 = FUN_01bed842(*(undefined4 *)(*piVar5 + 4),*(undefined4 *)(*piVar8 + 4),uVar4);
  if (iVar3 == 0) {
    iVar3 = uVar13 - uVar15;
  }
  if (-1 < iVar3) {
    uVar7 = -iVar6;
    piVar9 = piVar8;
    piVar8 = piVar5;
    piVar5 = piVar14;
    uVar12 = uVar16;
  }
  if (iVar2 < 0) {
    uVar7 = uVar1 >> 0x1f;
  }
  uVar1 = *(uint *)(param_1[uVar12 * 2] + 8);
  uVar16 = *(uint *)(param_1[uVar7 * 2] + 8);
  if (iVar2 < 0) {
    piVar9 = piVar10;
  }
  uVar13 = uVar16;
  if (uVar1 < uVar16) {
    uVar13 = uVar1;
  }
  iVar2 = FUN_01bed842(*(undefined4 *)(param_1[uVar12 * 2] + 4),
                       *(undefined4 *)(param_1[uVar7 * 2] + 4),uVar13);
  if (iVar2 == 0) {
    iVar2 = uVar1 - uVar16;
  }
  iVar6 = piVar11[1];
  if (iVar2 < 0) {
    piVar10 = piVar9;
    piVar9 = piVar5;
  }
  else {
    piVar10 = piVar5;
  }
  *param_2 = *piVar11;
  param_2[1] = iVar6;
  iVar2 = piVar9[1];
  param_2[2] = *piVar9;
  param_2[3] = iVar2;
  iVar2 = piVar10[1];
  param_2[4] = *piVar10;
  param_2[5] = iVar2;
  iVar2 = piVar8[1];
  param_2[6] = *piVar8;
  param_2[7] = iVar2;
  return;
}

