// FUN_01236f08 @ 01236f08 size=156 calls_out=2 calls_in=1
// strings: power_target | hashrate_target

void FUN_01236f08(undefined1 *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_3 == 0xc) {
    iVar2 = thunk_FUN_01bed842(param_2,"power_target",0xc);
    if (iVar2 == 0) {
      uVar1 = 0;
      param_1[1] = 0;
      goto LAB_01236f78;
    }
  }
  else if ((param_3 == 0xf) &&
          (iVar2 = thunk_FUN_01bed842(param_2,"hashrate_target",0xf), iVar2 == 0)) {
    param_1[1] = 1;
    uVar1 = 0;
    goto LAB_01236f78;
  }
  uVar3 = FUN_01265080(param_2,param_3,&DAT_01c24bfc,2);
  *(undefined4 *)(param_1 + 4) = uVar3;
  uVar1 = 1;
LAB_01236f78:
  *param_1 = uVar1;
  return;
}

