// FUN_00ea4858 @ 00ea4858 size=160 calls_out=1 calls_in=2
// strings: 

void FUN_00ea4858(undefined1 *param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_3 == 8) {
    iVar2 = thunk_FUN_01bed842(param_2,&DAT_00571120,8);
    if (iVar2 == 0) {
      uVar1 = 2;
      goto LAB_00ea48e0;
    }
  }
  else if (param_3 == 4) {
    if (*param_2 == 0x72657375) {
      uVar1 = 1;
      goto LAB_00ea48e0;
    }
  }
  else if ((param_3 == 3) && (iVar2 = thunk_FUN_01bed842(param_2,"url",3), iVar2 == 0)) {
    uVar1 = 0;
    goto LAB_00ea48e0;
  }
  uVar1 = 3;
LAB_00ea48e0:
  param_1[1] = uVar1;
  *param_1 = 0;
  return;
}

