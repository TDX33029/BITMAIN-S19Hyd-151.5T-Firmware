// FUN_014949e0 @ 014949e0 size=388 calls_out=3 calls_in=1
// strings: LimitAbort

undefined4 FUN_014949e0(int param_1,undefined4 param_2,undefined4 *param_3)

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
  
  if (param_1 == 0) {
    uVar3 = FUN_00faace8(param_3,&DAT_0041481a,6);
    return uVar3;
  }
  if (param_1 != 1) {
    uVar3 = FUN_00faace8(param_3,&DAT_00568af8,4);
    return uVar3;
  }
  uVar3 = *param_3;
  iVar4 = param_3[1];
  pcVar2 = *(code **)(iVar4 + 0xc);
  iVar1 = (*pcVar2)(uVar3,"LimitAbort",5);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_3 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar2)(uVar3,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_005ff634(param_2,param_3);
  }
  else {
    iVar1 = (*pcVar2)(uVar3,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_38 = &local_31;
    local_2c = &DAT_01880dc4;
    local_28 = param_3[2];
    local_24 = param_3[3];
    local_31 = 1;
    local_40 = uVar3;
    local_3c = iVar4;
    local_30 = (undefined1 *)&local_40;
    iVar1 = FUN_005ff634(param_2,&local_30);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2);
  }
  if (iVar1 == 0) {
    uVar3 = (**(code **)(param_3[1] + 0xc))(*param_3,&DAT_00418e07,1);
    return uVar3;
  }
  return 1;
}

