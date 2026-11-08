// FUN_0139ef14 @ 0139ef14 size=316 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_0139ef14(int *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_30;
  int iStack_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  iVar3 = *param_1;
  if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0139ef7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00568af8,4);
    return uVar4;
  }
  uVar4 = *param_2;
  iVar5 = param_2[1];
  pcVar2 = *(code **)(iVar5 + 0xc);
  iVar1 = (*pcVar2)(uVar4,&DAT_00569804,4);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar2)(uVar4,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar3 = FUN_013c767c(iVar3 + 8,uVar4,iVar5);
  }
  else {
    iVar1 = (*pcVar2)(uVar4,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_28 = &local_21;
    local_21 = 1;
    local_30 = uVar4;
    iStack_2c = iVar5;
    iVar3 = FUN_013c767c(iVar3 + 8,&local_30,&DAT_01880dc4);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
  }
  if (iVar3 == 0) {
    uVar4 = (*pcVar2)(uVar4,&DAT_00418e07,1);
    return uVar4;
  }
  return 1;
}

