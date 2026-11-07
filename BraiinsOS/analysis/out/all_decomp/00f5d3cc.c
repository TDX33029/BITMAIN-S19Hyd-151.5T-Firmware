// FUN_00f5d3cc @ 00f5d3cc size=844 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_00f5d3cc(int param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined1 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar4 = *param_2;
  iVar5 = param_2[1];
  pcVar2 = *(code **)(iVar5 + 0xc);
  iVar1 = (*pcVar2)(uVar4,&DAT_00418df9,1);
  if (iVar1 != 0) {
    return 1;
  }
  puVar3 = param_2 + 2;
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = FUN_01402444(param_1,param_2);
  }
  else {
    iVar1 = (*pcVar2)(uVar4,&DAT_0041950e,1);
    if (iVar1 != 0) {
      return 1;
    }
    local_38 = &local_31;
    local_28 = *puVar3;
    local_24 = param_2[3];
    local_2c = &DAT_01880dc4;
    local_31 = 1;
    local_40 = uVar4;
    local_3c = iVar5;
    local_30 = (undefined1 *)&local_40;
    iVar1 = FUN_01402444(param_1,&local_30);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2);
  }
  if (iVar1 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_01402444(param_1 + 1,param_2);
    }
    else {
      local_40 = *param_2;
      local_3c = param_2[1];
      local_38 = &local_31;
      local_28 = *puVar3;
      local_24 = param_2[3];
      local_31 = 1;
      local_2c = &DAT_01880dc4;
      local_30 = (undefined1 *)&local_40;
      iVar1 = FUN_01402444(param_1 + 1,&local_30);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2);
    }
    if (iVar1 == 0) {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = FUN_01402444(param_1 + 2,param_2);
      }
      else {
        local_40 = *param_2;
        local_3c = param_2[1];
        local_38 = &local_31;
        local_28 = *puVar3;
        local_24 = param_2[3];
        local_31 = 1;
        local_2c = &DAT_01880dc4;
        local_30 = (undefined1 *)&local_40;
        iVar1 = FUN_01402444(param_1 + 2,&local_30);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2);
      }
      if (iVar1 == 0) {
        if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
          iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
          if ((iVar1 == 0) && (iVar1 = FUN_01402444(param_1 + 3,param_2), iVar1 == 0)) {
            uVar4 = *param_2;
            iVar5 = param_2[1];
LAB_00f5d6f0:
            uVar4 = (**(code **)(iVar5 + 0xc))(uVar4,&DAT_00418ec5,1);
            return uVar4;
          }
        }
        else {
          uVar4 = *param_2;
          iVar5 = param_2[1];
          local_38 = &local_31;
          local_28 = *puVar3;
          local_24 = param_2[3];
          local_2c = &DAT_01880dc4;
          local_31 = 1;
          local_40 = uVar4;
          local_3c = iVar5;
          local_30 = (undefined1 *)&local_40;
          iVar1 = FUN_01402444(param_1 + 3,&local_30);
          if ((iVar1 == 0) &&
             (iVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2), iVar1 == 0))
          goto LAB_00f5d6f0;
        }
      }
    }
  }
  return 1;
}

