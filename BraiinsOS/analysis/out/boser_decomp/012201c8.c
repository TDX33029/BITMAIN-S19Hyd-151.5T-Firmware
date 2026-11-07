// FUN_012201c8 @ 012201c8 size=712 calls_out=0 calls_in=0
// strings: 

void FUN_012201c8(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  uVar10 = param_2[7];
  if (uVar10 == 2) {
    if (*param_2 != 0) {
      uVar10 = 0;
      uVar9 = 1;
      uVar8 = 0;
      if (param_2[3] != 0) {
        (**(code **)(param_2[4] + 0x10))(&local_30);
        uVar10 = local_30;
        uVar9 = local_2c;
        uVar8 = local_28;
      }
      uVar2 = 0;
      uVar6 = 1;
      uVar5 = 0;
      if (param_2[5] != 0) {
        (**(code **)(param_2[6] + 0x10))(&local_30);
        uVar2 = local_30;
        uVar6 = local_2c;
        uVar5 = local_28;
      }
      iVar4 = param_2[1];
      iVar1 = uVar10 + uVar2;
      if (CARRY4(uVar10,uVar2)) {
        iVar1 = -1;
      }
      if (iVar4 == 0) {
        uVar6 = uVar6 & uVar9;
joined_r0x0122040c:
        if (uVar6 != 0) {
          uVar5 = uVar5 + uVar8;
          uVar10 = (uint)(uVar8 <= uVar5);
          goto LAB_0122047c;
        }
      }
      else if (((param_2[2] == iVar4) && (uVar9 != 0)) && (param_2[2] == iVar4))
      goto joined_r0x0122040c;
      *param_1 = iVar1;
      uVar5 = 0;
LAB_01220418:
      iVar4 = 4;
      goto LAB_01220484;
    }
    uVar5 = 0;
    *param_1 = 0;
    param_1[1] = 1;
  }
  else {
    if (*param_2 == 0) {
      uVar5 = param_2[0xb];
      iVar4 = 0;
      if (param_2[9] != 0) {
        iVar4 = ((uint)(param_2[10] - param_2[9]) >> 4) * -0x55555555;
      }
      uVar9 = param_2[0xc] - uVar5 >> 4;
      if (uVar5 != 0) {
        iVar4 = uVar9 * -0x55555555 + iVar4;
      }
      bVar13 = (uVar10 & 1) != 0;
      if (bVar13) {
        uVar9 = param_2[8];
        uVar5 = 0;
      }
      if (!bVar13 || uVar9 == 0) {
        param_1[2] = iVar4;
        uVar5 = 1;
      }
      *param_1 = iVar4;
      goto LAB_01220418;
    }
    iVar4 = param_2[8];
    uVar9 = 0;
    if (param_2[9] != 0) {
      uVar9 = ((uint)(param_2[10] - param_2[9]) >> 4) * -0x55555555;
    }
    if (param_2[0xb] != 0) {
      uVar9 = ((uint)(param_2[0xc] - param_2[0xb]) >> 4) * -0x55555555 + uVar9;
    }
    uVar5 = 1;
    uVar8 = 0;
    uVar6 = 0;
    if (param_2[3] != 0) {
      (**(code **)(param_2[4] + 0x10))(&local_30);
      uVar5 = local_2c;
      uVar8 = local_28;
      uVar6 = local_30;
    }
    uVar2 = 0;
    uVar11 = 0;
    uVar12 = 1;
    if (param_2[5] != 0) {
      (**(code **)(param_2[6] + 0x10))(&local_30);
      uVar2 = local_30;
      uVar11 = local_28;
      uVar12 = local_2c;
    }
    iVar1 = param_2[1];
    uVar3 = uVar6 + uVar2;
    if (CARRY4(uVar6,uVar2)) {
      uVar3 = 0xffffffff;
    }
    if (iVar1 == 0) {
      if ((uVar12 & uVar5) != 0) goto LAB_0122042c;
      puVar7 = &local_30;
      uVar6 = 0;
    }
    else {
      puVar7 = &local_30;
      uVar6 = 0;
      if ((((param_2[2] == iVar1) && (uVar5 != 0)) && (param_2[2] == iVar1)) && (uVar12 != 0)) {
LAB_0122042c:
        uVar6 = uVar11 + uVar8;
        local_30 = (uint)(uVar8 <= uVar6);
        puVar7 = &local_34;
      }
    }
    *puVar7 = uVar6;
    uVar5 = local_34 + uVar9;
    iVar1 = uVar9 + uVar3;
    uVar10 = (uVar10 ^ 1 | (uint)(iVar4 == 0)) & local_30 & (uint)(uVar9 <= uVar5);
    if (CARRY4(uVar9,uVar3)) {
      iVar1 = -1;
    }
LAB_0122047c:
    *param_1 = iVar1;
    param_1[1] = uVar10;
  }
  iVar4 = 8;
LAB_01220484:
  *(uint *)((int)param_1 + iVar4) = uVar5;
  return;
}

