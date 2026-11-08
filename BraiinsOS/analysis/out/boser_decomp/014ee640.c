// FUN_014ee640 @ 014ee640 size=236 calls_out=2 calls_in=1
// strings: linux_armv7 | linux_aarch64 | linux_x86_64 | windows_x86_64

void FUN_014ee640(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  switch(param_3) {
  case 0xb:
    iVar2 = thunk_FUN_01bed842(param_2,"linux_armv7",0xb);
    if (iVar2 == 0) {
      uVar1 = 2;
LAB_014ee708:
      param_1[1] = uVar1;
      uVar1 = 0;
      goto LAB_014ee710;
    }
    break;
  case 0xc:
    iVar2 = thunk_FUN_01bed842(param_2,"linux_x86_64",0xc);
    if (iVar2 == 0) {
      uVar1 = 0;
      param_1[1] = 0;
      goto LAB_014ee710;
    }
    break;
  case 0xd:
    iVar2 = thunk_FUN_01bed842(param_2,"linux_aarch64",0xd);
    if (iVar2 == 0) {
      uVar1 = 1;
      goto LAB_014ee708;
    }
    break;
  case 0xe:
    iVar2 = thunk_FUN_01bed842(param_2,"windows_x86_64",0xe);
    if (iVar2 == 0) {
      uVar1 = 3;
      goto LAB_014ee708;
    }
  }
  uVar3 = FUN_014dedb0(param_2,param_3,&DAT_01cfa1f4,4);
  *(undefined4 *)(param_1 + 4) = uVar3;
  uVar1 = 1;
LAB_014ee710:
  *param_1 = uVar1;
  return;
}

