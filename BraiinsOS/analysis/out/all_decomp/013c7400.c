// FUN_013c7400 @ 013c7400 size=412 calls_out=2 calls_in=0
// strings: Pattern

undefined4 FUN_013c7400(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int *local_3c;
  undefined4 local_38;
  int local_34;
  undefined1 *local_30;
  undefined1 local_29;
  undefined4 *local_28;
  undefined *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar2 = *(int *)*param_1;
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x013c7460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,"NoYes",2);
    return uVar1;
  }
  if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x013c7440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,"Yes",3);
    return uVar1;
  }
  uVar1 = *param_2;
  iVar4 = param_2[1];
  local_3c = (int *)*param_1 + 1;
  pcVar3 = *(code **)(iVar4 + 0xc);
  iVar2 = (*pcVar3)(uVar1,"Pattern",7);
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar3)(uVar1,"(",1);
      if ((iVar2 == 0) && (iVar2 = FUN_013bbb84(&local_3c,param_2), iVar2 == 0)) {
        uVar1 = *param_2;
        pcVar3 = *(code **)(param_2[1] + 0xc);
LAB_013c7578:
        uVar1 = (*pcVar3)(uVar1,&DAT_00418e07,1);
        return uVar1;
      }
    }
    else {
      iVar2 = (*pcVar3)(uVar1,"(\n",2);
      if (iVar2 == 0) {
        local_30 = &local_29;
        local_20 = param_2[2];
        local_1c = param_2[3];
        local_24 = &DAT_01880dc4;
        local_28 = &local_38;
        local_29 = 1;
        local_38 = uVar1;
        local_34 = iVar4;
        iVar2 = FUN_013bbb84(&local_3c,&local_28);
        if ((iVar2 == 0) &&
           (iVar2 = (**(code **)(local_24 + 0xc))(local_28,&DAT_00414a81,2), iVar2 == 0))
        goto LAB_013c7578;
      }
    }
  }
  return 1;
}

