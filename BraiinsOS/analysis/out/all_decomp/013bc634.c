// FUN_013bc634 @ 013bc634 size=544 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_013bc634(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  uint local_2c;
  undefined4 local_28;
  
  uVar4 = *param_2;
  iVar5 = param_2[1];
  pcVar3 = *(code **)(iVar5 + 0xc);
  iVar1 = (*pcVar3)(uVar4,1,0);
  local_48 = param_1 + 4;
  if (iVar1 == 0) {
    puVar2 = param_2 + 2;
    local_4c = param_1;
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar3)(uVar4,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_013bc1e0(&local_4c,param_2);
      if (iVar1 != 0) {
        return 1;
      }
      uVar6 = *puVar2;
    }
    else {
      iVar1 = (*pcVar3)(uVar4,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_3c = &local_35;
      uVar6 = *puVar2;
      local_28 = param_2[3];
      local_30 = &DAT_01880dc4;
      local_34 = &local_44;
      local_35 = 1;
      local_44 = uVar4;
      local_40 = iVar5;
      local_2c = uVar6;
      iVar1 = FUN_013bc1e0(&local_4c,&local_34);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
      if (iVar1 != 0) {
        return 1;
      }
    }
    if ((uVar6 & 0x800000) == 0) {
      iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_013bc1e0(&local_48,param_2);
    }
    else {
      local_44 = *param_2;
      local_40 = param_2[1];
      local_3c = &local_35;
      local_34 = &local_44;
      local_2c = *puVar2;
      local_28 = param_2[3];
      local_35 = 1;
      local_30 = &DAT_01880dc4;
      iVar1 = FUN_013bc1e0(&local_48,&local_34);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
    }
    if (iVar1 == 0) {
      uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
      return uVar4;
    }
  }
  return 1;
}

