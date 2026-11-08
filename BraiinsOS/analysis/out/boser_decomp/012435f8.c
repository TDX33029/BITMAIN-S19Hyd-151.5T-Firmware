// FUN_012435f8 @ 012435f8 size=360 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_012435f8(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined1 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  piVar2 = (int *)*param_1;
  if (*piVar2 != 1) {
                    /* WARNING: Could not recover jumptable at 0x01243664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0056eb34,4);
    return uVar4;
  }
  uVar4 = *param_2;
  iVar5 = param_2[1];
  pcVar3 = *(code **)(iVar5 + 0xc);
  iVar1 = (*pcVar3)(uVar4,&DAT_0056f9dc,4);
  if (iVar1 != 0) {
    return 1;
  }
  piVar2 = piVar2 + 1;
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar3)(uVar4,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_01a5ffa0(piVar2,param_2);
    if (iVar1 != 0) {
      return 1;
    }
    uVar4 = *param_2;
    pcVar3 = *(code **)(param_2[1] + 0xc);
  }
  else {
    iVar1 = (*pcVar3)(uVar4,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_38 = &local_31;
    local_2c = &DAT_01ce45f8;
    local_28 = param_2[2];
    local_24 = param_2[3];
    local_31 = 1;
    local_40 = uVar4;
    local_3c = iVar5;
    local_30 = (undefined1 *)&local_40;
    iVar1 = FUN_01a5ffa0(piVar2,&local_30);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_005312e2,2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  uVar4 = (*pcVar3)(uVar4,&DAT_0053341b,1);
  return uVar4;
}

