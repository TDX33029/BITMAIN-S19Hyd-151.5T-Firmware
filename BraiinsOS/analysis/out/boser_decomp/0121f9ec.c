// FUN_0121f9ec @ 0121f9ec size=576 calls_out=0 calls_in=0
// strings: 

void FUN_0121f9ec(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uStack_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  uVar7 = param_2[7];
  if (uVar7 == 2) {
    if (*param_2 != 0) {
      uVar7 = 0;
      uVar8 = 1;
      uVar9 = 0;
      if (param_2[3] != 0) {
        (**(code **)(param_2[4] + 0x10))(&local_30);
        uVar7 = local_30;
        uVar8 = local_2c;
        uVar9 = local_28;
      }
      uVar1 = 0;
      uVar5 = 0;
      uVar3 = 1;
      if (param_2[5] != 0) {
        (**(code **)(param_2[6] + 0x10))(&local_30);
        uVar1 = local_30;
        uVar5 = local_28;
        uVar3 = local_2c;
      }
      iVar4 = param_2[1];
      iVar2 = uVar7 + uVar1;
      if (CARRY4(uVar7,uVar1)) {
        iVar2 = -1;
      }
      if (iVar4 == 0) {
        uVar3 = uVar3 & uVar8;
joined_r0x0121fbbc:
        if (uVar3 != 0) {
          uVar5 = uVar5 + uVar9;
          uVar7 = (uint)(uVar9 <= uVar5);
          goto LAB_0121fc18;
        }
      }
      else if (((param_2[2] == iVar4) && (uVar8 != 0)) && (param_2[2] == iVar4))
      goto joined_r0x0121fbbc;
      *param_1 = iVar2;
      uVar5 = 0;
      iVar2 = 4;
      goto LAB_0121fc20;
    }
    uVar5 = 0;
    *param_1 = 0;
    param_1[1] = 1;
  }
  else {
    if (*param_2 == 0) {
      iVar2 = param_2[8];
      *param_1 = 0;
      param_1[1] = 1;
      uVar5 = uVar7 & iVar2 != 0;
      goto LAB_0121fc1c;
    }
    iVar2 = param_2[8];
    uVar5 = 0;
    uVar8 = 0;
    uVar9 = 1;
    if (param_2[3] != 0) {
      (**(code **)(param_2[4] + 0x10))(&local_30);
      uVar5 = local_30;
      uVar8 = local_28;
      uVar9 = local_2c;
    }
    uVar3 = 0;
    uVar1 = 1;
    uVar10 = 0;
    if (param_2[5] != 0) {
      (**(code **)(param_2[6] + 0x10))(&local_30);
      uVar3 = local_30;
      uVar1 = local_2c;
      uVar10 = local_28;
    }
    uVar7 = uVar7 & iVar2 != 0;
    iVar4 = param_2[1];
    iVar2 = uVar5 + uVar3;
    if (CARRY4(uVar5,uVar3)) {
      iVar2 = -1;
    }
    if (iVar4 == 0) {
      if ((uVar1 & uVar9) != 0) goto LAB_0121fbd8;
      puVar6 = &local_30;
      uVar5 = 0;
    }
    else {
      puVar6 = &local_30;
      uVar5 = 0;
      if ((((param_2[2] == iVar4) && (uVar9 != 0)) && (param_2[2] == iVar4)) && (uVar1 != 0)) {
LAB_0121fbd8:
        uVar5 = uVar10 + uVar8;
        local_30 = (uint)(uVar8 <= uVar5);
        puVar6 = &uStack_34;
      }
    }
    *puVar6 = uVar5;
    uVar5 = uStack_34 + uVar7;
    uVar7 = local_30 & uVar7 <= uVar5;
LAB_0121fc18:
    *param_1 = iVar2;
    param_1[1] = uVar7;
  }
LAB_0121fc1c:
  iVar2 = 8;
LAB_0121fc20:
  *(uint *)((int)param_1 + iVar2) = uVar5;
  return;
}

