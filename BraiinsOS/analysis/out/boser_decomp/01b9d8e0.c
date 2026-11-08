// FUN_01b9d8e0 @ 01b9d8e0 size=528 calls_out=1 calls_in=3
// strings: 

uint FUN_01b9d8e0(int param_1,uint *param_2,int param_3,int *param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint unaff_r4;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int local_2c;
  
  iVar6 = *(int *)(param_1 + 100);
  iVar8 = *(int *)(param_1 + 4);
  uVar1 = 1 << (*(uint *)(param_1 + 0xbc) & 0xff);
  uVar4 = *(uint *)(param_1 + 0x10);
  uVar3 = (int)param_2 - iVar8;
  iVar10 = *(int *)(param_1 + 0x5c);
  uVar12 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  if (uVar12 < uVar3 - uVar4) {
    unaff_r4 = uVar3 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  if (uVar3 - uVar4 <= uVar12) {
    unaff_r4 = uVar4;
  }
  uVar12 = *(uint *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x18) != 0) {
    unaff_r4 = uVar4;
  }
  if (uVar1 < uVar3) {
    uVar4 = uVar3 - uVar1;
  }
  else {
    uVar4 = 0;
  }
  local_2c = 1 << (*(uint *)(param_1 + 0xc4) & 0xff);
  iVar7 = *(int *)(param_1 + 0xdc);
  iVar5 = *(int *)(param_1 + 0xc0);
  uVar9 = -iVar5 + 0x40;
  do {
    if (uVar3 <= uVar12) break;
    lVar2 = (ulonglong)*(uint *)(iVar8 + uVar12) * 0xbf9b0000;
    uVar11 = *(int *)(iVar8 + uVar12 + 4) * -0x40650000 + *(uint *)(iVar8 + uVar12) * -0x30e44324 +
             (int)((ulonglong)lVar2 >> 0x20);
    uVar11 = (uint)lVar2 >> (uVar9 & 0xff) | uVar11 << (iVar5 - 0x20U & 0xff) |
             uVar11 >> (0x20U - iVar5 & 0xff);
    *(undefined4 *)(iVar6 + (uVar1 - 1 & uVar12) * 4) = *(undefined4 *)(iVar10 + uVar11 * 4);
    *(uint *)(iVar10 + uVar11 * 4) = uVar12;
    uVar12 = uVar12 + 1;
  } while (iVar7 == 0);
  uVar12 = *param_2;
  *(uint *)(param_1 + 0x1c) = uVar3;
  lVar2 = (ulonglong)uVar12 * 0xbf9b0000;
  uVar12 = param_2[1] * -0x40650000 + uVar12 * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20);
  uVar9 = *(uint *)(iVar10 + ((uint)lVar2 >> (uVar9 & 0xff) | uVar12 << (0x20 - uVar9 & 0xff) |
                             uVar12 >> (-iVar5 + 0x20U & 0xff)) * 4);
  uVar12 = 3;
  for (; ((uVar11 = uVar12, local_2c != 0 && unaff_r4 <= uVar9 &&
          (((*(int *)(iVar8 + uVar9 + (uVar12 - 3)) != *(int *)((int)param_2 + (uVar12 - 3)) ||
            (uVar11 = FUN_01b9b884(param_2,iVar8 + uVar9,param_3), uVar11 <= uVar12)) ||
           (*param_4 = (uVar3 + 3) - uVar9, uVar12 = uVar11, param_3 != (int)param_2 + uVar11)))) &&
         (uVar11 = uVar12, uVar4 < uVar9)); uVar9 = *(uint *)(iVar6 + (uVar9 & uVar1 - 1) * 4)) {
    local_2c = local_2c + -1;
    uVar12 = uVar11;
  }
  return uVar11;
}

