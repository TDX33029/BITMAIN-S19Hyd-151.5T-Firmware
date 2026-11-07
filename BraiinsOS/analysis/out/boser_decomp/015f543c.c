// FUN_015f543c @ 015f543c size=336 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_015f543c(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined1 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  pcVar3 = (char *)*param_1;
  if (*pcVar3 != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x015f54a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0056eb34,4);
    return uVar5;
  }
  uVar5 = *param_2;
  iVar6 = param_2[1];
  pcVar4 = *(code **)(iVar6 + 0xc);
  iVar1 = (*pcVar4)(uVar5,&DAT_0056f9dc,4);
  if (iVar1 != 0) {
    return 1;
  }
  pcVar3 = pcVar3 + 1;
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar4)(uVar5,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_013095bc(pcVar3,param_2);
  }
  else {
    iVar1 = (*pcVar4)(uVar5,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_38 = &local_31;
    local_2c = &DAT_01ce45f8;
    local_28 = param_2[2];
    local_24 = param_2[3];
    local_31 = 1;
    local_40 = uVar5;
    local_3c = iVar6;
    local_30 = (undefined1 *)&local_40;
    iVar1 = FUN_013095bc(pcVar3,&local_30);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_01302620(&local_40,&DAT_005312e2,2);
  }
  uVar2 = 1;
  if (iVar1 == 0) {
    uVar2 = (*pcVar4)(uVar5,&DAT_0053341b,1);
  }
  return uVar2;
}

