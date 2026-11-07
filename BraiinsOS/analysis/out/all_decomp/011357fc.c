// FUN_011357fc @ 011357fc size=556 calls_out=3 calls_in=2
// strings: OddLengthString | InvalidChar

undefined4 FUN_011357fc(char *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *local_3c;
  undefined4 local_38;
  int local_34;
  undefined1 *local_30;
  undefined1 local_29;
  undefined4 *local_28;
  undefined *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*param_1 == '\x01') {
    uVar3 = *param_2;
    iVar4 = param_2[1];
    local_3c = param_1 + 4;
    pcVar2 = *(code **)(iVar4 + 0xc);
    iVar1 = (*pcVar2)(uVar3,"OddLengthString",0xf);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) != 0) {
      iVar1 = (*pcVar2)(uVar3,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_30 = &local_29;
      local_20 = param_2[2];
      local_1c = param_2[3];
      local_24 = &DAT_01880dc4;
      local_28 = &local_38;
      local_29 = 1;
      local_38 = uVar3;
      local_34 = iVar4;
      iVar1 = FUN_00d47d08(&local_3c,&local_28);
joined_r0x011359dc:
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (**(code **)(local_24 + 0xc))(local_28,&DAT_00414a81,2);
      if (iVar1 != 0) {
        return 1;
      }
      goto LAB_01135a04;
    }
    iVar1 = (*pcVar2)(uVar3,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00d47d08(&local_3c,param_2);
  }
  else {
    uVar3 = *param_2;
    iVar4 = param_2[1];
    local_3c = param_1 + 1;
    pcVar2 = *(code **)(iVar4 + 0xc);
    iVar1 = (*pcVar2)(uVar3,"InvalidChar",0xb);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) != 0) {
      iVar1 = (*pcVar2)(uVar3,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_30 = &local_29;
      local_20 = param_2[2];
      local_1c = param_2[3];
      local_24 = &DAT_01880dc4;
      local_28 = &local_38;
      local_29 = 1;
      local_38 = uVar3;
      local_34 = iVar4;
      iVar1 = FUN_01135a50(&local_3c,&local_28);
      goto joined_r0x011359dc;
    }
    iVar1 = (*pcVar2)(uVar3,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_01135a50(&local_3c,param_2);
  }
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *param_2;
  pcVar2 = *(code **)(param_2[1] + 0xc);
LAB_01135a04:
  uVar3 = (*pcVar2)(uVar3,&DAT_00418e07,1);
  return uVar3;
}

