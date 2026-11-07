// FUN_013bad4c @ 013bad4c size=612 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_013bad4c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if (*param_1 == 1) {
    uVar3 = *param_2;
    iVar4 = param_2[1];
    pcVar2 = *(code **)(iVar4 + 0xc);
    iVar1 = (*pcVar2)(uVar3,&DAT_004091fd,5);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar2)(uVar3,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_0110eb30(param_1[1],param_1[2],param_2);
      if (iVar1 != 0) {
        return 1;
      }
      uVar3 = *param_2;
      pcVar2 = *(code **)(param_2[1] + 0xc);
    }
    else {
      iVar1 = (*pcVar2)(uVar3,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_3c = &local_35;
      local_2c = param_2[2];
      local_28 = param_2[3];
      local_30 = &DAT_01880dc4;
      local_34 = &local_44;
      local_35 = 1;
      local_44 = uVar3;
      local_40 = iVar4;
      iVar1 = FUN_0110eb30(param_1[1],param_1[2],&local_34);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
      if (iVar1 != 0) {
        return 1;
      }
    }
    uVar3 = (*pcVar2)(uVar3,&DAT_00418e07,1);
  }
  else {
    uVar3 = *param_2;
    iVar4 = param_2[1];
    pcVar2 = *(code **)(iVar4 + 0xc);
    iVar1 = (*pcVar2)(uVar3,&DAT_0056a600,8);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar2)(uVar3,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_013cca14(param_1 + 1,param_2);
      if (iVar1 != 0) {
        return 1;
      }
      uVar3 = *param_2;
      pcVar2 = *(code **)(param_2[1] + 0xc);
    }
    else {
      iVar1 = (*pcVar2)(uVar3,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_3c = &local_35;
      local_30 = &DAT_01880dc4;
      local_34 = &local_44;
      local_2c = param_2[2];
      local_28 = param_2[3];
      local_35 = 1;
      local_44 = uVar3;
      local_40 = iVar4;
      iVar1 = FUN_013cca14(param_1 + 1,&local_34);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
      if (iVar1 != 0) {
        return 1;
      }
    }
    uVar3 = (*pcVar2)(uVar3,&DAT_00418e07,1);
  }
  return uVar3;
}

