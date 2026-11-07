// FUN_015ff4f0 @ 015ff4f0 size=1556 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_015ff4f0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined1 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418df9,1);
  if (iVar1 != 0) {
    return 1;
  }
  puVar3 = param_2 + 2;
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = FUN_015eaea4(param_1,param_2);
  }
  else {
    iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950e,1);
    if (iVar1 != 0) {
      return 1;
    }
    local_38 = &local_31;
    local_28 = *puVar3;
    local_24 = param_2[3];
    local_40 = *param_2;
    uStack_3c = param_2[1];
    local_2c = &DAT_01880dc4;
    local_31 = 1;
    local_30 = (undefined1 *)&local_40;
    iVar1 = FUN_015eaea4(param_1,&local_30);
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
      iVar1 = FUN_015eaea4(param_1 + 1,param_2);
    }
    else {
      local_28 = *puVar3;
      local_24 = param_2[3];
      local_40 = *param_2;
      uStack_3c = param_2[1];
      local_38 = &local_31;
      local_31 = 1;
      local_2c = &DAT_01880dc4;
      local_30 = (undefined1 *)&local_40;
      iVar1 = FUN_015eaea4(param_1 + 1,&local_30);
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
        iVar1 = FUN_015eaea4(param_1 + 2,param_2);
      }
      else {
        local_28 = *puVar3;
        local_24 = param_2[3];
        local_40 = *param_2;
        uStack_3c = param_2[1];
        local_38 = &local_31;
        local_31 = 1;
        local_2c = &DAT_01880dc4;
        local_30 = (undefined1 *)&local_40;
        iVar1 = FUN_015eaea4(param_1 + 2,&local_30);
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
          iVar1 = FUN_015eaea4(param_1 + 3,param_2);
        }
        else {
          local_28 = *puVar3;
          local_24 = param_2[3];
          local_40 = *param_2;
          uStack_3c = param_2[1];
          local_38 = &local_31;
          local_31 = 1;
          local_2c = &DAT_01880dc4;
          local_30 = (undefined1 *)&local_40;
          iVar1 = FUN_015eaea4(param_1 + 3,&local_30);
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
            iVar1 = FUN_015eaea4(param_1 + 4,param_2);
          }
          else {
            local_28 = *puVar3;
            local_24 = param_2[3];
            local_40 = *param_2;
            uStack_3c = param_2[1];
            local_38 = &local_31;
            local_31 = 1;
            local_2c = &DAT_01880dc4;
            local_30 = (undefined1 *)&local_40;
            iVar1 = FUN_015eaea4(param_1 + 4,&local_30);
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
              iVar1 = FUN_015eaea4(param_1 + 5,param_2);
            }
            else {
              local_28 = *puVar3;
              local_24 = param_2[3];
              local_40 = *param_2;
              uStack_3c = param_2[1];
              local_38 = &local_31;
              local_31 = 1;
              local_2c = &DAT_01880dc4;
              local_30 = (undefined1 *)&local_40;
              iVar1 = FUN_015eaea4(param_1 + 5,&local_30);
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
                iVar1 = FUN_015eaea4(param_1 + 6,param_2);
              }
              else {
                local_28 = *puVar3;
                local_24 = param_2[3];
                local_40 = *param_2;
                uStack_3c = param_2[1];
                local_38 = &local_31;
                local_31 = 1;
                local_2c = &DAT_01880dc4;
                local_30 = (undefined1 *)&local_40;
                iVar1 = FUN_015eaea4(param_1 + 6,&local_30);
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
                  iVar1 = FUN_015eaea4(param_1 + 7,param_2);
                }
                else {
                  local_28 = *puVar3;
                  local_24 = param_2[3];
                  local_40 = *param_2;
                  uStack_3c = param_2[1];
                  local_38 = &local_31;
                  local_31 = 1;
                  local_2c = &DAT_01880dc4;
                  local_30 = (undefined1 *)&local_40;
                  iVar1 = FUN_015eaea4(param_1 + 7,&local_30);
                  if (iVar1 != 0) {
                    return 1;
                  }
                  iVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2);
                }
                if (iVar1 == 0) {
                  uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418ec5,1);
                  return uVar2;
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}

