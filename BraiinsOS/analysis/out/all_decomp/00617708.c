// FUN_00617708 @ 00617708 size=528 calls_out=0 calls_in=1
// strings: 

void FUN_00617708(int *param_1,int param_2,uint param_3,int param_4,uint param_5,uint param_6,
                 int param_7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  uint local_34;
  int local_30;
  uint local_28;
  
  if (*(int *)(param_7 + 4) == 8) {
    iVar8 = 1;
    uVar13 = 0;
  }
  else {
    uVar5 = *(uint *)(param_7 + 0x10);
    if (((param_3 < uVar5) || (uVar13 = *(uint *)(param_7 + 0x14), param_3 - uVar5 < uVar13)) ||
       ((uVar13 & 0xf) != 0)) {
      iVar8 = 0x1d;
      puVar1 = &DAT_0033dac9;
      goto LAB_00617884;
    }
    iVar8 = param_2 + uVar5;
  }
  uVar5 = *(uint *)(param_7 + 0x18);
  if (uVar5 == 0) {
    local_30 = 0;
    if (param_5 == 0) {
      iVar2 = 1;
      local_34 = 0;
      iVar7 = 0;
      iVar12 = 0;
      uVar6 = 0;
      local_28 = 0;
      goto LAB_006178d8;
    }
    iVar7 = 0;
    local_30 = 0;
    local_28 = 0;
    local_34 = 0;
  }
  else {
    if (param_5 <= uVar5) {
      iVar8 = 0x19;
      puVar1 = &DAT_0033dae6;
LAB_00617884:
      param_1[1] = (int)puVar1;
      *param_1 = 0;
      param_1[2] = iVar8;
      return;
    }
    iVar7 = param_4 + uVar5 * 0x28;
    if (*(int *)(iVar7 + 4) != 3) {
      iVar8 = 0x1f;
      puVar1 = &DAT_0033daff;
      goto LAB_00617884;
    }
    local_34 = *(uint *)(iVar7 + 0x10);
    local_30 = *(uint *)(iVar7 + 0x14) + local_34;
    local_28 = (uint)CARRY4(*(uint *)(iVar7 + 0x14),local_34);
    iVar7 = param_2;
  }
  puVar9 = (uint *)(param_4 + 0x10);
  uVar6 = 0;
  iVar12 = 0;
  iVar11 = param_5 * 0x28;
  iVar2 = 1;
  iVar10 = 0;
  do {
    uVar4 = puVar9[-3];
    bVar14 = uVar4 == 0x12;
    if (bVar14) {
      uVar4 = puVar9[2];
    }
    if (bVar14 && uVar4 == param_6) {
      uVar3 = *puVar9;
      if (param_3 >= uVar3) {
        uVar6 = puVar9[1];
        uVar4 = param_3 - uVar3;
      }
      if ((param_3 < uVar3 || uVar4 < uVar6) || ((uVar6 & 3) != 0)) {
        iVar8 = 0x1d;
        puVar1 = &DAT_0033daac;
        goto LAB_00617884;
      }
      iVar2 = param_2 + uVar3;
      uVar6 = uVar6 >> 2;
      iVar12 = iVar10;
    }
    iVar10 = iVar10 + 1;
    puVar9 = puVar9 + 10;
    iVar11 = iVar11 + -0x28;
  } while (iVar11 != 0);
LAB_006178d8:
  param_1[10] = param_6;
  param_1[0xb] = uVar5;
  param_1[0xc] = iVar12;
  *param_1 = iVar8;
  param_1[1] = uVar13 >> 4;
  param_1[5] = param_3;
  param_1[2] = iVar2;
  param_1[3] = uVar6;
  param_1[4] = iVar7;
  param_1[6] = local_34;
  param_1[7] = 0;
  param_1[8] = local_30;
  param_1[9] = local_28;
  return;
}

