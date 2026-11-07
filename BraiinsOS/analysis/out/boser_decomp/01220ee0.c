// FUN_01220ee0 @ 01220ee0 size=568 calls_out=0 calls_in=4
// strings: 

void FUN_01220ee0(uint *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uStack_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  if (*param_2 == 1) {
    if (param_2[2] == 0) {
      uVar5 = (uint)(param_2[1] != 0);
LAB_01221094:
      *param_1 = uVar5;
      param_1[1] = 1;
    }
    else {
      uVar9 = (uint)(param_2[1] != 0);
      uVar5 = 0;
      uVar6 = 0;
      uVar10 = 1;
      if (param_2[5] != 0) {
        (**(code **)(param_2[6] + 0x10))(&local_30);
        uVar5 = local_30;
        uVar6 = local_28;
        uVar10 = local_2c;
      }
      uVar1 = 0;
      uVar3 = 0;
      uVar4 = 1;
      if (param_2[7] != 0) {
        (**(code **)(param_2[8] + 0x10))(&local_30);
        uVar1 = local_30;
        uVar3 = local_28;
        uVar4 = local_2c;
      }
      iVar8 = param_2[3];
      uVar2 = uVar5 + uVar1;
      if (CARRY4(uVar5,uVar1)) {
        uVar2 = 0xffffffff;
      }
      if (iVar8 == 0) {
        if ((uVar4 & uVar10) != 0) goto LAB_012210a4;
        puVar7 = &local_30;
        uVar5 = 0;
      }
      else {
        puVar7 = &local_30;
        uVar5 = 0;
        if (((param_2[4] == iVar8) && (uVar10 != 0)) && ((param_2[4] == iVar8 && (uVar4 != 0)))) {
LAB_012210a4:
          uVar5 = uVar3 + uVar6;
          local_30 = (uint)(uVar6 <= uVar5);
          puVar7 = &uStack_34;
        }
      }
      *puVar7 = uVar5;
      uVar5 = uStack_34 + uVar9;
      uVar4 = uVar9 + uVar2;
      uVar6 = local_30 & uVar9 <= uVar5;
      if (CARRY4(uVar9,uVar2)) {
        uVar4 = 0xffffffff;
      }
LAB_01221104:
      *param_1 = uVar4;
      param_1[1] = uVar6;
    }
    iVar8 = 8;
  }
  else {
    if (param_2[2] == 0) {
      uVar5 = 0;
      goto LAB_01221094;
    }
    uVar6 = 0;
    uVar10 = 1;
    uVar9 = 0;
    if (param_2[5] != 0) {
      (**(code **)(param_2[6] + 0x10))(&local_30);
      uVar6 = local_30;
      uVar10 = local_2c;
      uVar9 = local_28;
    }
    uVar3 = 0;
    uVar5 = 0;
    uVar1 = 1;
    if (param_2[7] != 0) {
      (**(code **)(param_2[8] + 0x10))(&local_30);
      uVar3 = local_30;
      uVar5 = local_28;
      uVar1 = local_2c;
    }
    iVar8 = param_2[3];
    uVar4 = uVar6 + uVar3;
    if (CARRY4(uVar6,uVar3)) {
      uVar4 = 0xffffffff;
    }
    if (iVar8 == 0) {
      uVar1 = uVar1 & uVar10;
joined_r0x012210c4:
      if (uVar1 != 0) {
        uVar5 = uVar5 + uVar9;
        uVar6 = (uint)(uVar9 <= uVar5);
        goto LAB_01221104;
      }
    }
    else if (((param_2[4] == iVar8) && (uVar10 != 0)) && (param_2[4] == iVar8))
    goto joined_r0x012210c4;
    *param_1 = uVar4;
    uVar5 = 0;
    iVar8 = 4;
  }
  *(uint *)((int)param_1 + iVar8) = uVar5;
  return;
}

