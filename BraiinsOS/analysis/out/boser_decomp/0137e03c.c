// FUN_0137e03c @ 0137e03c size=304 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_0137e03c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 local_30;
  int iStack_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  piVar5 = (int *)*param_1;
  if (*piVar5 == -0x80000000) {
                    /* WARNING: Could not recover jumptable at 0x0137e074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0056eb34,4);
    return uVar1;
  }
  uVar1 = *param_2;
  iVar6 = param_2[1];
  pcVar4 = *(code **)(iVar6 + 0xc);
  iVar2 = (*pcVar4)(uVar1,&DAT_0056f9dc,4);
  if (iVar2 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar2 = (*pcVar4)(uVar1,"(",1);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_012fb170(piVar5[1],piVar5[2],uVar1,iVar6);
  }
  else {
    iVar2 = (*pcVar4)(uVar1,"(\n",2);
    if (iVar2 != 0) {
      return 1;
    }
    local_28 = &local_21;
    local_21 = 1;
    local_30 = uVar1;
    iStack_2c = iVar6;
    iVar2 = FUN_012fb170(piVar5[1],piVar5[2],&local_30,&DAT_01ce45f8);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_01302620(&local_30,&DAT_005312e2,2);
  }
  uVar3 = 1;
  if (iVar2 == 0) {
    uVar3 = (*pcVar4)(uVar1,&DAT_0053341b,1);
  }
  return uVar3;
}

