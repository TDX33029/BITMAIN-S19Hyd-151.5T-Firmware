// FUN_01236e54 @ 01236e54 size=168 calls_out=2 calls_in=1
// strings: power_target | hashrate_target

void FUN_01236e54(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_3 == 0xc) {
    iVar2 = thunk_FUN_01bed842(param_2,"power_target",0xc);
    if (iVar2 != 0) {
LAB_01236ed8:
      FUN_0123c0e0(param_1,param_2,param_3,&DAT_01c24bfc,2);
      return;
    }
    *param_1 = 2;
    uVar1 = 0;
  }
  else {
    if ((param_3 != 0xf) || (iVar2 = thunk_FUN_01bed842(param_2,"hashrate_target",0xf), iVar2 != 0))
    goto LAB_01236ed8;
    *param_1 = 2;
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}

