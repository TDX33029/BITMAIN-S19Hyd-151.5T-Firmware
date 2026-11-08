// FUN_016a4014 @ 016a4014 size=552 calls_out=3 calls_in=0
// strings: Translate | Parse

undefined4 FUN_016a4014(int *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined1 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*param_1 == 0x22) {
    uVar3 = *param_2;
    iVar4 = param_2[1];
    pcVar2 = *(code **)(iVar4 + 0xc);
    iVar1 = (*pcVar2)(uVar3,"Translate",9);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar2)(uVar3,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_016adad0(param_1 + 1,param_2);
    }
    else {
      iVar1 = (*pcVar2)(uVar3,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_38 = &local_31;
      local_2c = &DAT_01880dc4;
      local_28 = param_2[2];
      local_24 = param_2[3];
      local_31 = 1;
      local_40 = uVar3;
      local_3c = iVar4;
      local_30 = (undefined1 *)&local_40;
      iVar1 = FUN_016adad0(param_1 + 1,&local_30);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00fb1f64(&local_40,&DAT_00414a81,2);
    }
  }
  else {
    uVar3 = *param_2;
    iVar4 = param_2[1];
    pcVar2 = *(code **)(iVar4 + 0xc);
    iVar1 = (*pcVar2)(uVar3,"Parse",5);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar2)(uVar3,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_013c235c(param_1,param_2);
      if (iVar1 != 0) {
        return 1;
      }
      uVar3 = *param_2;
      pcVar2 = *(code **)(param_2[1] + 0xc);
      goto LAB_016a4218;
    }
    iVar1 = (*pcVar2)(uVar3,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_38 = &local_31;
    local_2c = &DAT_01880dc4;
    local_28 = param_2[2];
    local_24 = param_2[3];
    local_31 = 1;
    local_40 = uVar3;
    local_3c = iVar4;
    local_30 = (undefined1 *)&local_40;
    iVar1 = FUN_013c235c(param_1,&local_30);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2);
  }
  if (iVar1 != 0) {
    return 1;
  }
LAB_016a4218:
  uVar3 = (*pcVar2)(uVar3,&DAT_00418e07,1);
  return uVar3;
}

