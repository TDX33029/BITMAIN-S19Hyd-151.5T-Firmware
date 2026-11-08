// FUN_00ea78f0 @ 00ea78f0 size=124 calls_out=1 calls_in=1
// strings: immersion

void FUN_00ea78f0(undefined1 *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_3 == 9) {
    iVar2 = thunk_FUN_01bed842(param_2,"immersion",9);
    if (iVar2 == 0) {
      uVar1 = 1;
      goto LAB_00ea7954;
    }
  }
  else if ((param_3 == 8) && (iVar2 = thunk_FUN_01bed842(param_2,&DAT_00570e00,8), iVar2 == 0)) {
    uVar1 = 0;
    goto LAB_00ea7954;
  }
  uVar1 = 2;
LAB_00ea7954:
  param_1[1] = uVar1;
  *param_1 = 0;
  return;
}

