// FUN_00a068b4 @ 00a068b4 size=408 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_00a068b4(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined1 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  piVar3 = (int *)*param_1;
  iVar1 = *piVar3;
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00a06914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&UNK_0056857c,4);
    return uVar2;
  }
  if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00a068f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0034da9e,7);
    return uVar2;
  }
  uVar2 = *param_2;
  iVar5 = param_2[1];
  pcVar4 = *(code **)(iVar5 + 0xc);
  iVar1 = (*pcVar4)(uVar2,&DAT_00569ee0,8);
  if (iVar1 == 0) {
    piVar3 = piVar3 + 2;
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar4)(uVar2,"(",1);
      if ((iVar1 == 0) && (iVar1 = FUN_00a03654(piVar3,param_2), iVar1 == 0)) {
        uVar2 = *param_2;
        pcVar4 = *(code **)(param_2[1] + 0xc);
LAB_00a06a28:
        uVar2 = (*pcVar4)(uVar2,&DAT_00418e07,1);
        return uVar2;
      }
    }
    else {
      iVar1 = (*pcVar4)(uVar2,"(\n",2);
      if (iVar1 == 0) {
        local_38 = &local_31;
        local_2c = &DAT_01880dc4;
        local_28 = param_2[2];
        local_24 = param_2[3];
        local_31 = 1;
        local_40 = uVar2;
        local_3c = iVar5;
        local_30 = (undefined1 *)&local_40;
        iVar1 = FUN_00a03654(piVar3,&local_30);
        if ((iVar1 == 0) &&
           (iVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2), iVar1 == 0))
        goto LAB_00a06a28;
      }
    }
  }
  return 1;
}

