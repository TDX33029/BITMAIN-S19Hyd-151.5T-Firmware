// FUN_014becf8 @ 014becf8 size=372 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_014becf8(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if (*param_1 == -0x80000000) {
                    /* WARNING: Could not recover jumptable at 0x014bed2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00568af8,4);
    return uVar1;
  }
  uVar1 = *param_2;
  iVar4 = param_2[1];
  pcVar3 = *(code **)(iVar4 + 0xc);
  iVar2 = (*pcVar3)(uVar1,&DAT_00569804,4);
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar3)(uVar1,"(",1);
      if ((iVar2 == 0) && (iVar2 = FUN_013fa438(param_1[1],param_1[2],param_2), iVar2 == 0)) {
        uVar1 = *param_2;
        pcVar3 = *(code **)(param_2[1] + 0xc);
LAB_014bee48:
        uVar1 = (*pcVar3)(uVar1,&DAT_00418e07,1);
        return uVar1;
      }
    }
    else {
      iVar2 = (*pcVar3)(uVar1,"(\n",2);
      if (iVar2 == 0) {
        local_3c = &local_35;
        local_2c = param_2[2];
        local_28 = param_2[3];
        local_30 = &DAT_01880dc4;
        local_34 = &local_44;
        local_35 = 1;
        local_44 = uVar1;
        local_40 = iVar4;
        iVar2 = FUN_013fa438(param_1[1],param_1[2],&local_34);
        if ((iVar2 == 0) &&
           (iVar2 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2), iVar2 == 0))
        goto LAB_014bee48;
      }
    }
  }
  return 1;
}

