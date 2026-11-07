// FUN_00f9d520 @ 00f9d520 size=108 calls_out=1 calls_in=0
// strings: luci_username | luci_password

void FUN_00f9d520(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = 2;
  if (param_3 == 0xd) {
    iVar1 = thunk_FUN_01bed842(param_2,"luci_username",0xd);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = thunk_FUN_01bed842(param_2,"luci_password",0xd);
      uVar2 = 2;
      if (iVar1 == 0) {
        uVar2 = 1;
      }
    }
  }
  *(undefined1 *)(param_1 + 1) = uVar2;
  *param_1 = 0;
  return;
}

