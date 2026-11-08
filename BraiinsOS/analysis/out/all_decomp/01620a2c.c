// FUN_01620a2c @ 01620a2c size=320 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_01620a2c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_30;
  int iStack_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  piVar4 = (int *)*param_1;
  if (*piVar4 == -0x80000000) {
                    /* WARNING: Could not recover jumptable at 0x01620a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00568af8,4);
    return uVar1;
  }
  uVar1 = *param_2;
  iVar5 = param_2[1];
  pcVar3 = *(code **)(iVar5 + 0xc);
  iVar2 = (*pcVar3)(uVar1,&DAT_00569804,4);
  if (iVar2 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar2 = (*pcVar3)(uVar1,"(",1);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00faa4e8(piVar4[1],piVar4[2],uVar1,iVar5);
  }
  else {
    iVar2 = (*pcVar3)(uVar1,"(\n",2);
    if (iVar2 != 0) {
      return 1;
    }
    local_28 = &local_21;
    local_21 = 1;
    local_30 = uVar1;
    iStack_2c = iVar5;
    iVar2 = FUN_00faa4e8(piVar4[1],piVar4[2],&local_30,&DAT_01880dc4);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
  }
  if (iVar2 == 0) {
    uVar1 = (*pcVar3)(uVar1,&DAT_00418e07,1);
    return uVar1;
  }
  return 1;
}

