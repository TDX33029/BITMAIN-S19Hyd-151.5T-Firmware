// FUN_015ffe98 @ 015ffe98 size=844 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_015ffe98(int *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar3 = *param_2;
  iVar5 = param_2[1];
  iVar6 = *param_1;
  pcVar2 = *(code **)(iVar5 + 0xc);
  iVar1 = (*pcVar2)(uVar3,&DAT_00418df9,1);
  if (iVar1 != 0) {
    return 1;
  }
  puVar4 = param_2 + 2;
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = FUN_015eaea4(iVar6,param_2);
  }
  else {
    iVar1 = (*pcVar2)(uVar3,&DAT_0041950e,1);
    if (iVar1 != 0) {
      return 1;
    }
    local_3c = &local_35;
    local_2c = *puVar4;
    local_28 = param_2[3];
    local_30 = &DAT_01880dc4;
    local_34 = &local_44;
    local_35 = 1;
    local_44 = uVar3;
    local_40 = iVar5;
    iVar1 = FUN_015eaea4(iVar6,&local_34);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
  }
  if (iVar1 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_015eaea4(iVar6 + 1,param_2);
    }
    else {
      local_44 = *param_2;
      local_40 = param_2[1];
      local_3c = &local_35;
      local_34 = &local_44;
      local_2c = *puVar4;
      local_28 = param_2[3];
      local_35 = 1;
      local_30 = &DAT_01880dc4;
      iVar1 = FUN_015eaea4(iVar6 + 1,&local_34);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
    }
    if (iVar1 == 0) {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = FUN_015eaea4(iVar6 + 2,param_2);
      }
      else {
        local_44 = *param_2;
        local_40 = param_2[1];
        local_3c = &local_35;
        local_34 = &local_44;
        local_2c = *puVar4;
        local_28 = param_2[3];
        local_35 = 1;
        local_30 = &DAT_01880dc4;
        iVar1 = FUN_015eaea4(iVar6 + 2,&local_34);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
      }
      if (iVar1 == 0) {
        if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
          iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
          if ((iVar1 == 0) && (iVar1 = FUN_015eaea4(iVar6 + 3,param_2), iVar1 == 0)) {
            uVar3 = *param_2;
            iVar5 = param_2[1];
LAB_016001bc:
            uVar3 = (**(code **)(iVar5 + 0xc))(uVar3,&DAT_00418ec5,1);
            return uVar3;
          }
        }
        else {
          uVar3 = *param_2;
          iVar5 = param_2[1];
          local_3c = &local_35;
          local_2c = *puVar4;
          local_28 = param_2[3];
          local_30 = &DAT_01880dc4;
          local_34 = &local_44;
          local_35 = 1;
          local_44 = uVar3;
          local_40 = iVar5;
          iVar1 = FUN_015eaea4(iVar6 + 3,&local_34);
          if ((iVar1 == 0) &&
             (iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2), iVar1 == 0))
          goto LAB_016001bc;
        }
      }
    }
  }
  return 1;
}

