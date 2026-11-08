// FUN_0095aee4 @ 0095aee4 size=468 calls_out=1 calls_in=1
// strings: enabled | shutdown_duration | min_hashrate_target | power_step | hashrate_step | min_power_target

void FUN_0095aee4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  switch(param_3) {
  case 7:
    iVar1 = thunk_FUN_016dd50a(param_2,"enabled",7);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return;
    }
    break;
  case 8:
    iVar1 = thunk_FUN_016dd50a(param_2,&DAT_0056a270,8);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 1) = 7;
      *param_1 = 2;
      return;
    }
    break;
  case 10:
    iVar1 = thunk_FUN_016dd50a(param_2,"power_step",10);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      return;
    }
    break;
  case 0xd:
    iVar1 = thunk_FUN_016dd50a(param_2,"hashrate_step",0xd);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 1) = 3;
      *param_1 = 2;
      return;
    }
    break;
  case 0x10:
    iVar1 = thunk_FUN_016dd50a(param_2,"min_power_target",0x10);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 1) = 2;
      *param_1 = 2;
      return;
    }
    iVar1 = thunk_FUN_016dd50a(param_2,"shutdown_enabledInvalidComponent",0x10);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 1) = 5;
      *param_1 = 2;
      return;
    }
    break;
  case 0x11:
    iVar1 = thunk_FUN_016dd50a(param_2,"shutdown_duration",0x11);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 1) = 6;
      *param_1 = 2;
      return;
    }
    break;
  case 0x13:
    iVar1 = thunk_FUN_016dd50a(param_2,"min_hashrate_target",0x13);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 1) = 4;
      *param_1 = 2;
      return;
    }
  }
  *(undefined1 *)(param_1 + 1) = 8;
  *param_1 = 2;
  return;
}

