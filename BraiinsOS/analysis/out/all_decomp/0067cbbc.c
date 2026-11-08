// FUN_0067cbbc @ 0067cbbc size=540 calls_out=3 calls_in=0
// strings: Request

undefined4 FUN_0067cbbc(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
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
  
  puVar2 = param_1 + 2;
  if ((*param_1 & 1) == 0) {
    uVar4 = *param_2;
    iVar5 = param_2[1];
    pcVar3 = *(code **)(iVar5 + 0xc);
    iVar1 = (*pcVar3)(uVar4,"Request",7);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar3)(uVar4,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00728198(puVar2,param_2);
      goto joined_r0x0067cc38;
    }
    iVar1 = (*pcVar3)(uVar4,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_38 = &local_31;
    local_2c = &DAT_01880dc4;
    local_28 = param_2[2];
    local_24 = param_2[3];
    local_31 = 1;
    local_40 = uVar4;
    local_3c = iVar5;
    local_30 = (undefined1 *)&local_40;
    iVar1 = FUN_00728198(puVar2,&local_30);
  }
  else {
    uVar4 = *param_2;
    iVar5 = param_2[1];
    pcVar3 = *(code **)(iVar5 + 0xc);
    iVar1 = (*pcVar3)(uVar4,&DAT_00569f28,8);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar3)(uVar4,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00726880(puVar2,param_2);
      goto joined_r0x0067cc38;
    }
    iVar1 = (*pcVar3)(uVar4,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_38 = &local_31;
    local_2c = &DAT_01880dc4;
    local_28 = param_2[2];
    local_24 = param_2[3];
    local_31 = 1;
    local_40 = uVar4;
    local_3c = iVar5;
    local_30 = (undefined1 *)&local_40;
    iVar1 = FUN_00726880(puVar2,&local_30);
  }
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2);
joined_r0x0067cc38:
  if (iVar1 == 0) {
    uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
    return uVar4;
  }
  return 1;
}

