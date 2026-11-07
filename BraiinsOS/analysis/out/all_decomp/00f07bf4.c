// FUN_00f07bf4 @ 00f07bf4 size=408 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_00f07bf4(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
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
  
  if (*param_1 != '\0') {
    if (*param_1 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00f07c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&UNK_0035b643,0x17);
      return uVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00f07c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&UNK_0035b65a,0x1a);
    return uVar1;
  }
  uVar1 = *param_2;
  iVar4 = param_2[1];
  local_3c = param_1 + 1;
  pcVar3 = *(code **)(iVar4 + 0xc);
  iVar2 = (*pcVar3)(uVar1,&DAT_0035b62c,0x17);
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar3)(uVar1,"(",1);
      if ((iVar2 == 0) && (iVar2 = FUN_01135a50(&local_3c,param_2), iVar2 == 0)) {
        uVar1 = *param_2;
        pcVar3 = *(code **)(param_2[1] + 0xc);
LAB_00f07d68:
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
        iVar2 = FUN_01135a50(&local_3c,&local_28);
        if ((iVar2 == 0) &&
           (iVar2 = (**(code **)(local_24 + 0xc))(local_28,&DAT_00414a81,2), iVar2 == 0))
        goto LAB_00f07d68;
      }
    }
  }
  return 1;
}

