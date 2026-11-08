// FUN_01258b0c @ 01258b0c size=392 calls_out=2 calls_in=1
// strings: enabled | min_hashrate_target | power_step | hashrate_step | shutdown_duration

void FUN_01258b0c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  switch(param_3) {
  case 7:
    iVar2 = thunk_FUN_01bed842(param_2,"enabled",7);
    if (iVar2 != 0) goto switchD_01258b34_caseD_8;
    *param_1 = 2;
    uVar1 = 0;
    break;
  default:
switchD_01258b34_caseD_8:
    FUN_0123bfbc(param_1,param_2,param_3,&DAT_01c24f18,7);
    return;
  case 10:
    iVar2 = thunk_FUN_01bed842(param_2,"power_step",10);
    if (iVar2 != 0) goto switchD_01258b34_caseD_8;
    *param_1 = 2;
    uVar1 = 1;
    break;
  case 0xd:
    iVar2 = thunk_FUN_01bed842(param_2,"hashrate_step",0xd);
    if (iVar2 != 0) goto switchD_01258b34_caseD_8;
    *param_1 = 2;
    uVar1 = 3;
    break;
  case 0x10:
    iVar2 = thunk_FUN_01bed842(param_2,&DAT_00569e48,0x10);
    if (iVar2 == 0) {
      uVar1 = 2;
      *param_1 = 2;
    }
    else {
      iVar2 = thunk_FUN_01bed842(param_2,&DAT_00569528,0x10);
      if (iVar2 != 0) goto switchD_01258b34_caseD_8;
      *param_1 = 2;
      uVar1 = 5;
    }
    break;
  case 0x11:
    iVar2 = thunk_FUN_01bed842(param_2,"shutdown_duration",0x11);
    if (iVar2 != 0) goto switchD_01258b34_caseD_8;
    *param_1 = 2;
    uVar1 = 6;
    break;
  case 0x13:
    iVar2 = thunk_FUN_01bed842(param_2,"min_hashrate_target",0x13);
    if (iVar2 != 0) goto switchD_01258b34_caseD_8;
    *param_1 = 2;
    uVar1 = 4;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}

