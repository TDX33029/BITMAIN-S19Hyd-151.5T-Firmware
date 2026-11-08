// FUN_01243c90 @ 01243c90 size=168 calls_out=2 calls_in=1
// strings: quota | fixed_share_ratio

void FUN_01243c90(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_3 == 5) {
    iVar2 = thunk_FUN_01bed842(param_2,"quota",5);
    if (iVar2 != 0) {
LAB_01243d14:
      FUN_0123c0e0(param_1,param_2,param_3,&DAT_01c24ccc,2);
      return;
    }
    *param_1 = 2;
    uVar1 = 0;
  }
  else {
    if ((param_3 != 0x11) ||
       (iVar2 = thunk_FUN_01bed842(param_2,"fixed_share_ratio",0x11), iVar2 != 0))
    goto LAB_01243d14;
    *param_1 = 2;
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}

