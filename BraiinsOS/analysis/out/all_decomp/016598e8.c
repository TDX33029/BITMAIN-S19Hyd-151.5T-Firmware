// FUN_016598e8 @ 016598e8 size=320 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_016598e8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined1 *local_30;
  undefined1 local_29;
  undefined4 *local_28;
  undefined *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar3 = *param_2;
  iVar4 = param_2[1];
  pcVar2 = *(code **)(iVar4 + 0xc);
  local_3c = param_1;
  iVar1 = (*pcVar2)(uVar3,&DAT_00414f05,2);
  if (iVar1 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar2)(uVar3,"(",1);
      if ((iVar1 == 0) && (iVar1 = FUN_01650cd4(&local_3c,param_2), iVar1 == 0)) {
        uVar3 = *param_2;
        pcVar2 = *(code **)(param_2[1] + 0xc);
LAB_01659a04:
        uVar3 = (*pcVar2)(uVar3,&DAT_00418e07,1);
        return uVar3;
      }
    }
    else {
      iVar1 = (*pcVar2)(uVar3,"(\n",2);
      if (iVar1 == 0) {
        local_30 = &local_29;
        local_20 = param_2[2];
        local_1c = param_2[3];
        local_24 = &DAT_01880dc4;
        local_28 = &local_38;
        local_29 = 1;
        local_38 = uVar3;
        local_34 = iVar4;
        iVar1 = FUN_01650cd4(&local_3c,&local_28);
        if ((iVar1 == 0) &&
           (iVar1 = (**(code **)(local_24 + 0xc))(local_28,&DAT_00414a81,2), iVar1 == 0))
        goto LAB_01659a04;
      }
    }
  }
  return 1;
}

