// FUN_013f8ac8 @ 013f8ac8 size=316 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_013f8ac8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_38;
  int local_34;
  undefined1 *local_30;
  undefined1 local_29;
  undefined1 *local_28;
  undefined *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar3 = *param_2;
  iVar4 = param_2[1];
  pcVar2 = *(code **)(iVar4 + 0xc);
  iVar1 = (*pcVar2)(uVar3,&DAT_00563d90,0x10);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar2)(uVar3,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00faace8(param_2,&DAT_00415204,2);
  }
  else {
    iVar1 = (*pcVar2)(uVar3,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_30 = &local_29;
    local_20 = param_2[2];
    local_1c = param_2[3];
    local_24 = &DAT_01880dc4;
    local_29 = 1;
    local_38 = uVar3;
    local_34 = iVar4;
    local_28 = (undefined1 *)&local_38;
    iVar1 = FUN_00faace8(&local_28,&DAT_00415204,2);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00fb1f64(&local_38,&DAT_00414a81,2);
  }
  if (iVar1 == 0) {
    uVar3 = (*pcVar2)(uVar3,&DAT_00418e07,1);
    return uVar3;
  }
  return 1;
}

