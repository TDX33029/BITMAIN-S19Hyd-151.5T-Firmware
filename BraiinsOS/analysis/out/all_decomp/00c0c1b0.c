// FUN_00c0c1b0 @ 00c0c1b0 size=984 calls_out=3 calls_in=0
// strings: SensorSwitchConfig | channel | offset_slave_address | offset_slave_address | local_availability | local_availability

undefined4 FUN_00c0c1b0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int *local_48;
  char local_44;
  char local_43;
  int local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  int *local_30;
  undefined *local_2c;
  int *local_28;
  int local_24;
  
  local_44 = (**(code **)(param_2[1] + 0xc))(*param_2,"SensorSwitchConfig",0x12);
  local_43 = '\0';
  local_48 = param_2;
  FUN_00fb2258(&local_48,"channel",7,param_1,FUN_007883b8);
  piVar1 = local_48;
  if (local_44 != '\0') {
    return 1;
  }
  piVar6 = local_48 + 2;
  if ((*(byte *)((int)local_48 + 10) & 0x80) == 0) {
    puVar3 = &DAT_0041950f;
    if (local_43 == '\0') {
      puVar3 = &DAT_00414a79;
    }
    uVar5 = 3;
    if (local_43 != '\0') {
      uVar5 = 2;
    }
    iVar2 = (**(code **)(local_48[1] + 0xc))(*local_48,puVar3,uVar5);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (**(code **)(piVar1[1] + 0xc))(*piVar1,"offset_slave_address",0x14);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (**(code **)(piVar1[1] + 0xc))(*piVar1,&DAT_00414a7c,2);
    if (iVar2 != 0) {
      return 1;
    }
    if (*(char *)(param_1 + 5) == '\x01') {
      uVar5 = 4;
      puVar4 = &DAT_00568b2c;
    }
    else {
      uVar5 = 5;
      puVar4 = &DAT_00414fdc;
    }
    iVar2 = FUN_00faace8(piVar1,puVar4,uVar5);
    if (iVar2 != 0) {
      return 1;
    }
  }
  else {
    if ((local_43 == '\0') &&
       (iVar2 = (**(code **)(local_48[1] + 0xc))(*local_48,&DAT_00414a7e,3), iVar2 != 0)) {
      return 1;
    }
    local_38 = &local_31;
    local_28 = (int *)*piVar6;
    local_24 = piVar1[3];
    local_31 = 1;
    local_40 = *piVar1;
    local_3c = piVar1[1];
    local_2c = &DAT_01880dc4;
    local_30 = &local_40;
    iVar2 = FUN_00fb1f64(local_30,"offset_slave_address",0x14);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00fb1f64(&local_40,&DAT_00414a7c,2);
    if (iVar2 != 0) {
      return 1;
    }
    if (*(char *)(param_1 + 5) == '\x01') {
      uVar5 = 4;
      puVar4 = &DAT_00568b2c;
    }
    else {
      uVar5 = 5;
      puVar4 = &DAT_00414fdc;
    }
    iVar2 = FUN_00faace8(&local_30,puVar4,uVar5);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00fb1f64(&local_40,&DAT_00414a81,2);
    if (iVar2 != 0) {
      return 1;
    }
  }
  if ((*(byte *)((int)piVar1 + 10) & 0x80) == 0) {
    iVar2 = (**(code **)(piVar1[1] + 0xc))(*piVar1,&DAT_0041950f,2);
    if (((iVar2 != 0) ||
        (iVar2 = (**(code **)(piVar1[1] + 0xc))(*piVar1,"local_availability",0x12), iVar2 != 0)) ||
       (iVar2 = (**(code **)(piVar1[1] + 0xc))(*piVar1,&DAT_00414a7c,2), iVar2 != 0)) {
      return 1;
    }
    iVar2 = (**(code **)(piVar1[1] + 0xc))
                      (*piVar1,*(undefined4 *)(&DAT_018b0d88 + (uint)*(byte *)(param_1 + 4) * 4),
                       *(undefined4 *)(&DAT_0041efb8 + (uint)*(byte *)(param_1 + 4) * 4));
  }
  else {
    local_30 = (int *)*piVar1;
    local_2c = (undefined *)piVar1[1];
    local_28 = &local_40;
    local_40 = CONCAT31(local_40._1_3_,1);
    iVar2 = FUN_00fb1f64(&local_30,"local_availability",0x12);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00fb1f64(&local_30,*(undefined4 *)(&DAT_018b0d94 + (uint)*(byte *)(param_1 + 4) * 4)
                         ,*(undefined4 *)(&DAT_0041efc4 + (uint)*(byte *)(param_1 + 4) * 4));
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
  }
  if (iVar2 != 0) {
    return 1;
  }
  if ((*(byte *)((int)piVar1 + 10) & 0x80) == 0) {
    uVar5 = (**(code **)(piVar1[1] + 0xc))(*piVar1," }",2);
    return uVar5;
  }
  uVar5 = (**(code **)(piVar1[1] + 0xc))(*piVar1,"}",1);
  return uVar5;
}

