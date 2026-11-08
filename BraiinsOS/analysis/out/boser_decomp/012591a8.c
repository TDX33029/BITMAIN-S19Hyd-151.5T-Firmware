// FUN_012591a8 @ 012591a8 size=344 calls_out=1 calls_in=0
// strings: enabled | shutdown_duration | min_hashrate_target | power_step | hashrate_step

void FUN_012591a8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  switch(param_3) {
  case 7:
    iVar2 = thunk_FUN_01bed842(param_2,"enabled",7);
    if (iVar2 == 0) {
      uVar1 = 0;
      goto LAB_01259314;
    }
    break;
  case 8:
    iVar2 = thunk_FUN_01bed842(param_2,&DAT_00570768,8);
    if (iVar2 == 0) {
      uVar1 = 7;
      goto LAB_01259314;
    }
    break;
  case 10:
    iVar2 = thunk_FUN_01bed842(param_2,"power_step",10);
    if (iVar2 == 0) {
      uVar1 = 1;
      goto LAB_01259314;
    }
    break;
  case 0xd:
    iVar2 = thunk_FUN_01bed842(param_2,"hashrate_step",0xd);
    if (iVar2 == 0) {
      uVar1 = 3;
      goto LAB_01259314;
    }
    break;
  case 0x10:
    iVar2 = thunk_FUN_01bed842(param_2,&DAT_00569e48,0x10);
    if (iVar2 == 0) {
      uVar1 = 2;
      goto LAB_01259314;
    }
    iVar2 = thunk_FUN_01bed842(param_2,&DAT_00569528,0x10);
    if (iVar2 == 0) {
      uVar1 = 5;
      goto LAB_01259314;
    }
    break;
  case 0x11:
    iVar2 = thunk_FUN_01bed842(param_2,"shutdown_duration",0x11);
    if (iVar2 == 0) {
      uVar1 = 6;
      goto LAB_01259314;
    }
    break;
  case 0x13:
    iVar2 = thunk_FUN_01bed842(param_2,"min_hashrate_target",0x13);
    if (iVar2 == 0) {
      uVar1 = 4;
      goto LAB_01259314;
    }
  }
  uVar1 = 8;
LAB_01259314:
  *(undefined1 *)(param_1 + 1) = uVar1;
  *param_1 = 2;
  return;
}

