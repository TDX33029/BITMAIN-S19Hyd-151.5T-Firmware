// FUN_013a8d40 @ 013a8d40 size=304 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_013a8d40(undefined4 param_1,undefined4 *param_2)

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
  
  uVar3 = *param_2;
  iVar4 = param_2[1];
  pcVar2 = *(code **)(iVar4 + 0xc);
  iVar1 = (*pcVar2)(uVar3,&DAT_003cebe9,7);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar2)(uVar3,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_013cc33c(param_1,param_2);
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
    iVar1 = FUN_013cc33c(param_1,&local_30);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00fb1f64(&local_40,&DAT_00414a81,2);
  }
  if (iVar1 == 0) {
    uVar3 = (*pcVar2)(uVar3,&DAT_00418e07,1);
    return uVar3;
  }
  return 1;
}

