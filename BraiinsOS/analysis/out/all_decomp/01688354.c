// FUN_01688354 @ 01688354 size=364 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_01688354(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined1 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  piVar4 = (int *)*param_1;
  if (*piVar4 == -0x80000000) {
                    /* WARNING: Could not recover jumptable at 0x0168838c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00568af8,4);
    return uVar1;
  }
  uVar1 = *param_2;
  iVar5 = param_2[1];
  pcVar3 = *(code **)(iVar5 + 0xc);
  iVar2 = (*pcVar3)(uVar1,&DAT_00569804,4);
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar3)(uVar1,"(",1);
      if ((iVar2 == 0) && (iVar2 = FUN_01674e7c(piVar4[1],piVar4[2],param_2), iVar2 == 0)) {
        uVar1 = *param_2;
        pcVar3 = *(code **)(param_2[1] + 0xc);
LAB_0168849c:
        uVar1 = (*pcVar3)(uVar1,&DAT_00418e07,1);
        return uVar1;
      }
    }
    else {
      iVar2 = (*pcVar3)(uVar1,"(\n",2);
      if (iVar2 == 0) {
        local_38 = &local_31;
        local_28 = param_2[2];
        local_24 = param_2[3];
        local_2c = &DAT_01880dc4;
        local_31 = 1;
        local_40 = uVar1;
        local_3c = iVar5;
        local_30 = (undefined1 *)&local_40;
        iVar2 = FUN_01674e7c(piVar4[1],piVar4[2],&local_30);
        if ((iVar2 == 0) &&
           (iVar2 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2), iVar2 == 0))
        goto LAB_0168849c;
      }
    }
  }
  return 1;
}

