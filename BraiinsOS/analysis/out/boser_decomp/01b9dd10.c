// FUN_01b9dd10 @ 01b9dd10 size=424 calls_out=1 calls_in=3
// strings: 

uint FUN_01b9dd10(int param_1,int *param_2,int param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint unaff_r4;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  iVar9 = *(int *)(param_1 + 4);
  uVar1 = 1 << (*(uint *)(param_1 + 0xbc) & 0xff);
  iVar6 = *(int *)(param_1 + 100);
  uVar7 = (int)param_2 - iVar9;
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar4 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  if (uVar4 < uVar7 - uVar3) {
    unaff_r4 = uVar7 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  if (uVar7 - uVar3 <= uVar4) {
    unaff_r4 = uVar3;
  }
  iVar11 = *(int *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x18) != 0) {
    unaff_r4 = uVar3;
  }
  if (uVar1 < uVar7) {
    uVar4 = uVar7 - uVar1;
  }
  else {
    uVar4 = 0;
  }
  uVar10 = 0x20 - *(int *)(param_1 + 0xc0);
  iVar8 = 1 << (*(uint *)(param_1 + 0xc4) & 0xff);
  iVar5 = *(int *)(param_1 + 0xdc);
  uVar3 = *(uint *)(param_1 + 0x1c);
  do {
    if (uVar7 <= uVar3) break;
    uVar2 = (uint)(*(int *)(iVar9 + uVar3) * -0x61c8864f) >> (uVar10 & 0xff);
    *(undefined4 *)(iVar6 + (uVar1 - 1 & uVar3) * 4) = *(undefined4 *)(iVar11 + uVar2 * 4);
    *(uint *)(iVar11 + uVar2 * 4) = uVar3;
    uVar3 = uVar3 + 1;
  } while (iVar5 == 0);
  *(uint *)(param_1 + 0x1c) = uVar7;
  uVar3 = 3;
  for (uVar10 = *(uint *)(iVar11 + ((uint)(*param_2 * -0x61c8864f) >> (uVar10 & 0xff)) * 4);
      ((uVar2 = uVar3, iVar8 != 0 && unaff_r4 <= uVar10 &&
       (((*(int *)(iVar9 + uVar10 + (uVar3 - 3)) != *(int *)((int)param_2 + (uVar3 - 3)) ||
         (uVar2 = FUN_01b9b884(param_2,iVar9 + uVar10,param_3), uVar2 <= uVar3)) ||
        (*param_4 = (uVar7 + 3) - uVar10, uVar3 = uVar2, param_3 != (int)param_2 + uVar2)))) &&
      (uVar2 = uVar3, uVar4 < uVar10)); uVar10 = *(uint *)(iVar6 + (uVar10 & uVar1 - 1) * 4)) {
    iVar8 = iVar8 + -1;
    uVar3 = uVar2;
  }
  return uVar2;
}

