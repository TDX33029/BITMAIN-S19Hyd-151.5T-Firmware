// FUN_00ef0b28 @ 00ef0b28 size=172 calls_out=1 calls_in=1
// strings: hot_temperature | target_temperature | dangerous_temperature

void FUN_00ef0b28(undefined1 *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_3 == 0x15) {
    iVar2 = thunk_FUN_01bed842(param_2,"dangerous_temperature",0x15);
    if (iVar2 == 0) {
      uVar1 = 1;
      goto LAB_00ef0bbc;
    }
  }
  else if (param_3 == 0x12) {
    iVar2 = thunk_FUN_01bed842(param_2,"target_temperature",0x12);
    if (iVar2 == 0) {
      uVar1 = 2;
      goto LAB_00ef0bbc;
    }
  }
  else if ((param_3 == 0xf) &&
          (iVar2 = thunk_FUN_01bed842(param_2,"hot_temperature",0xf), iVar2 == 0)) {
    uVar1 = 0;
    goto LAB_00ef0bbc;
  }
  uVar1 = 3;
LAB_00ef0bbc:
  param_1[1] = uVar1;
  *param_1 = 0;
  return;
}

