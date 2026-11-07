// FUN_014eed90 @ 014eed90 size=252 calls_out=1 calls_in=1
// strings: file_type | mime_type | size_bytes_unpacked | size_bytes

void FUN_014eed90(undefined1 *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_3 < 10) {
    if (param_3 == 8) {
      iVar2 = thunk_FUN_01bed842(param_2,&DAT_00571158,8);
      if (iVar2 == 0) {
        uVar1 = 0;
        goto LAB_014eee6c;
      }
    }
    else if (param_3 == 9) {
      iVar2 = thunk_FUN_01bed842(param_2,"file_type",9);
      if (iVar2 == 0) {
        uVar1 = 3;
        goto LAB_014eee6c;
      }
      iVar2 = thunk_FUN_01bed842(param_2,"mime_type",9);
      if (iVar2 == 0) {
        uVar1 = 4;
        goto LAB_014eee6c;
      }
    }
  }
  else if (param_3 == 10) {
    iVar2 = thunk_FUN_01bed842(param_2,"size_bytes",10);
    if (iVar2 == 0) {
      uVar1 = 1;
      goto LAB_014eee6c;
    }
  }
  else if ((param_3 == 0x13) &&
          (iVar2 = thunk_FUN_01bed842(param_2,"size_bytes_unpacked",0x13), iVar2 == 0)) {
    uVar1 = 2;
    goto LAB_014eee6c;
  }
  uVar1 = 5;
LAB_014eee6c:
  param_1[1] = uVar1;
  *param_1 = 0;
  return;
}

