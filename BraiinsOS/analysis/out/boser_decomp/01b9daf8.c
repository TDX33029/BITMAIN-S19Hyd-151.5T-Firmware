// FUN_01b9daf8 @ 01b9daf8 size=532 calls_out=1 calls_in=3
// strings: 

uint FUN_01b9daf8(int param_1,uint *param_2,int param_3,int *param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint unaff_r4;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int local_2c;
  
  iVar5 = *(int *)(param_1 + 100);
  iVar9 = *(int *)(param_1 + 4);
  uVar1 = 1 << (*(uint *)(param_1 + 0xbc) & 0xff);
  uVar4 = (int)param_2 - iVar9;
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar6 = 1 << (*(uint *)(param_1 + 0xb8) & 0xff);
  iVar10 = *(int *)(param_1 + 0x5c);
  if (uVar6 < uVar4 - uVar3) {
    unaff_r4 = uVar4 - (1 << (*(uint *)(param_1 + 0xb8) & 0xff));
  }
  if (uVar4 - uVar3 <= uVar6) {
    unaff_r4 = uVar3;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    unaff_r4 = uVar3;
  }
  if (uVar1 < uVar4) {
    uVar6 = uVar4 - uVar1;
  }
  else {
    uVar6 = 0;
  }
  local_2c = 1 << (*(uint *)(param_1 + 0xc4) & 0xff);
  iVar7 = *(int *)(param_1 + 0xdc);
  uVar3 = *(uint *)(param_1 + 0x1c);
  iVar8 = *(int *)(param_1 + 0xc0);
  uVar12 = -iVar8 + 0x40;
  do {
    if (uVar4 <= uVar3) break;
    lVar2 = (ulonglong)*(uint *)(iVar9 + uVar3) * 0xbb000000;
    uVar11 = *(int *)(iVar9 + uVar3 + 4) * -0x45000000 + *(uint *)(iVar9 + uVar3) * -0x30e44324 +
             (int)((ulonglong)lVar2 >> 0x20);
    uVar11 = (uint)lVar2 >> (uVar12 & 0xff) | uVar11 << (iVar8 - 0x20U & 0xff) |
             uVar11 >> (0x20U - iVar8 & 0xff);
    *(undefined4 *)(iVar5 + (uVar1 - 1 & uVar3) * 4) = *(undefined4 *)(iVar10 + uVar11 * 4);
    *(uint *)(iVar10 + uVar11 * 4) = uVar3;
    uVar3 = uVar3 + 1;
  } while (iVar7 == 0);
  uVar3 = *param_2;
  *(uint *)(param_1 + 0x1c) = uVar4;
  lVar2 = (ulonglong)uVar3 * 0xbb000000;
  uVar3 = param_2[1] * -0x45000000 + uVar3 * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20);
  uVar12 = *(uint *)(iVar10 + ((uint)lVar2 >> (uVar12 & 0xff) | uVar3 << (0x20 - uVar12 & 0xff) |
                              uVar3 >> (-iVar8 + 0x20U & 0xff)) * 4);
  uVar3 = 3;
  for (; ((uVar11 = uVar3, local_2c != 0 && unaff_r4 <= uVar12 &&
          (((*(int *)(iVar9 + uVar12 + (uVar3 - 3)) != *(int *)((int)param_2 + (uVar3 - 3)) ||
            (uVar11 = FUN_01b9b884(param_2,iVar9 + uVar12,param_3), uVar11 <= uVar3)) ||
           (*param_4 = (uVar4 + 3) - uVar12, uVar3 = uVar11, param_3 != (int)param_2 + uVar11)))) &&
         (uVar11 = uVar3, uVar6 < uVar12)); uVar12 = *(uint *)(iVar5 + (uVar12 & uVar1 - 1) * 4)) {
    local_2c = local_2c + -1;
    uVar3 = uVar11;
  }
  return uVar11;
}

