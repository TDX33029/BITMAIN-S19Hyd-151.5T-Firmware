// FUN_013bbe34 @ 013bbe34 size=320 calls_out=2 calls_in=0
// strings: StateID

undefined4 FUN_013bbe34(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
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
  
  uVar4 = *param_2;
  iVar5 = param_2[1];
  param_1 = (undefined4 *)*param_1;
  pcVar3 = *(code **)(iVar5 + 0xc);
  iVar1 = (*pcVar3)(uVar4,"StateID",7);
  if (iVar1 != 0) {
    return 1;
  }
  uVar2 = *param_1;
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar3)(uVar4,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_005ff634(uVar2,param_2);
  }
  else {
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
    iVar1 = FUN_005ff634(uVar2,&local_30);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2);
  }
  if (iVar1 == 0) {
    uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
    return uVar4;
  }
  return 1;
}

