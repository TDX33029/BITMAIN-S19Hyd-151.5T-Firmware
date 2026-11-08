// FUN_01231f84 @ 01231f84 size=272 calls_out=1 calls_in=1
// strings: speed | pause | min_fan_rpm | min_fan_speed | max_fan_speed

void FUN_01231f84(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  
  switch(param_3) {
  case 5:
    uVar2 = 5;
    iVar1 = thunk_FUN_01bed842(param_2,"speed",5);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = thunk_FUN_01bed842(param_2,"pause",5);
      if (iVar1 != 0) {
        uVar2 = 6;
      }
    }
    goto LAB_01232090;
  case 8:
    iVar1 = thunk_FUN_01bed842(param_2,&DAT_00570be0,8);
    if (iVar1 == 0) {
      uVar2 = 1;
      goto LAB_01232090;
    }
    break;
  case 0xb:
    iVar1 = thunk_FUN_01bed842(param_2,"min_fan_rpm",0xb);
    if (iVar1 == 0) {
      uVar2 = 2;
      goto LAB_01232090;
    }
    break;
  case 0xd:
    iVar1 = thunk_FUN_01bed842(param_2,"min_fan_speed",0xd);
    if (iVar1 == 0) {
      uVar2 = 3;
      goto LAB_01232090;
    }
    iVar1 = thunk_FUN_01bed842(param_2,"max_fan_speed",0xd);
    if (iVar1 == 0) {
      uVar2 = 4;
      goto LAB_01232090;
    }
  }
  uVar2 = 6;
LAB_01232090:
  *(undefined1 *)(param_1 + 1) = uVar2;
  *param_1 = 2;
  return;
}

