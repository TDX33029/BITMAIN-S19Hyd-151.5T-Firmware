// FUN_012320d0 @ 012320d0 size=252 calls_out=2 calls_in=1
// strings: enabled

void FUN_012320d0(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  switch(param_3) {
  case 3:
    iVar2 = thunk_FUN_01bed842(param_2,"url",3);
    if (iVar2 == 0) {
      *param_1 = 2;
      uVar1 = 1;
LAB_012321b4:
      *(undefined1 *)(param_1 + 1) = uVar1;
      return;
    }
    break;
  case 4:
    if (*param_2 == 0x72657375) {
      uVar1 = 2;
      *param_1 = 2;
      goto LAB_012321b4;
    }
    break;
  case 7:
    iVar2 = thunk_FUN_01bed842(param_2,"enabled",7);
    if (iVar2 == 0) {
      *param_1 = 2;
      uVar1 = 0;
      goto LAB_012321b4;
    }
    break;
  case 8:
    iVar2 = thunk_FUN_01bed842(param_2,&DAT_00571120,8);
    if (iVar2 == 0) {
      *param_1 = 2;
      uVar1 = 3;
      goto LAB_012321b4;
    }
  }
  FUN_0123bfbc(param_1,param_2,param_3,&DAT_01c24b84,4);
  return;
}

