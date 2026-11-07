// FUN_01007e5c @ 01007e5c size=332 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_01007e5c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_30;
  int iStack_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  iVar2 = *(int *)*param_1;
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01007ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00568af8,4);
    return uVar5;
  }
  uVar5 = *param_2;
  iVar6 = param_2[1];
  iVar4 = ((int *)*param_1)[1];
  pcVar3 = *(code **)(iVar6 + 0xc);
  iVar1 = (*pcVar3)(uVar5,&DAT_00569804,4);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar3)(uVar5,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar2 = FUN_00faa4e8(iVar2,iVar4,uVar5,iVar6);
  }
  else {
    iVar1 = (*pcVar3)(uVar5,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_28 = &local_21;
    local_21 = 1;
    local_30 = uVar5;
    iStack_2c = iVar6;
    iVar2 = FUN_00faa4e8(iVar2,iVar4,&local_30,&DAT_01880dc4);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
  }
  if (iVar2 == 0) {
    uVar5 = (*pcVar3)(uVar5,&DAT_00418e07,1);
    return uVar5;
  }
  return 1;
}

