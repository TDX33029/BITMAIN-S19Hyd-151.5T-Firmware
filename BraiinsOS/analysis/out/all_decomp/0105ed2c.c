// FUN_0105ed2c @ 0105ed2c size=372 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_0105ed2c(undefined4 *param_1,undefined4 *param_2)

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
  
  if (*(char *)*param_1 != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0105eda0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00568af8,4);
    return uVar3;
  }
  uVar3 = *param_2;
  iVar4 = param_2[1];
  local_3c = (char *)*param_1 + 1;
  pcVar2 = *(code **)(iVar4 + 0xc);
  iVar1 = (*pcVar2)(uVar3,&DAT_00569804,4);
  if (iVar1 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar2)(uVar3,"(",1);
      if ((iVar1 == 0) && (iVar1 = FUN_01135a50(&local_3c,param_2), iVar1 == 0)) {
        uVar3 = *param_2;
        pcVar2 = *(code **)(param_2[1] + 0xc);
LAB_0105ee7c:
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
        iVar1 = FUN_01135a50(&local_3c,&local_28);
        if ((iVar1 == 0) &&
           (iVar1 = (**(code **)(local_24 + 0xc))(local_28,&DAT_00414a81,2), iVar1 == 0))
        goto LAB_0105ee7c;
      }
    }
  }
  return 1;
}

