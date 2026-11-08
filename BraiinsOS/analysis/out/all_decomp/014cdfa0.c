// FUN_014cdfa0 @ 014cdfa0 size=160 calls_out=1 calls_in=2
// strings: 

void FUN_014cdfa0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  if (*(char *)(param_1 + 0x24) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x014ce03c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&LAB_014ce040 + *(int *)(&LAB_014ce040 + *param_2 * 4)))();
    return;
  }
  iVar2 = *param_2;
  iVar5 = param_2[1];
  iVar9 = param_2[2];
  iVar11 = param_2[3];
  iVar13 = param_2[4];
  iVar3 = param_2[5];
  iVar6 = param_2[6];
  iVar10 = param_2[7];
  iVar12 = param_2[8];
  iVar14 = param_2[9];
  uVar4 = *(uint *)(param_1 + 0x10);
  uVar7 = *(uint *)(param_1 + 0x1c);
  if (uVar7 == uVar4) {
    FUN_014ef894();
    uVar4 = *(uint *)(param_1 + 0x10);
    uVar7 = *(uint *)(param_1 + 0x1c);
  }
  uVar8 = *(int *)(param_1 + 0x18) + uVar7;
  *(uint *)(param_1 + 0x1c) = uVar7 + 1;
  uVar7 = uVar8 - uVar4;
  if (uVar8 < uVar4) {
    uVar7 = uVar8;
  }
  piVar1 = (int *)(*(int *)(param_1 + 0x14) + uVar7 * 0x28);
  *piVar1 = iVar2;
  piVar1[1] = iVar5;
  piVar1[2] = iVar9;
  piVar1[3] = iVar11;
  piVar1[4] = iVar13;
  piVar1[5] = iVar3;
  piVar1[6] = iVar6;
  piVar1[7] = iVar10;
  piVar1[8] = iVar12;
  piVar1[9] = iVar14;
  return;
}

