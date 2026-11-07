// FUN_00d489e0 @ 00d489e0 size=356 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_00d489e0(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
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
  
  iVar3 = *param_1;
  if (*(undefined1 **)(iVar3 + 8) == &DAT_3b9aca00) {
                    /* WARNING: Could not recover jumptable at 0x00d48a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00568af8,4);
    return uVar1;
  }
  uVar1 = *param_2;
  iVar5 = param_2[1];
  pcVar4 = *(code **)(iVar5 + 0xc);
  iVar2 = (*pcVar4)(uVar1,&DAT_00569804,4);
  if (iVar2 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar2 = (*pcVar4)(uVar1,"(",1);
    if (iVar2 != 0) {
      return 1;
    }
    iVar3 = FUN_00fb8184(iVar3,param_2);
  }
  else {
    iVar2 = (*pcVar4)(uVar1,"(\n",2);
    if (iVar2 != 0) {
      return 1;
    }
    local_38 = &local_31;
    local_2c = &DAT_01880dc4;
    local_28 = param_2[2];
    local_24 = param_2[3];
    local_31 = 1;
    local_40 = uVar1;
    local_3c = iVar5;
    local_30 = (undefined1 *)&local_40;
    iVar3 = FUN_00fb8184(iVar3,&local_30);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = FUN_00fb1f64(&local_40,&DAT_00414a81,2);
  }
  if (iVar3 == 0) {
    uVar1 = (*pcVar4)(uVar1,&DAT_00418e07,1);
    return uVar1;
  }
  return 1;
}

