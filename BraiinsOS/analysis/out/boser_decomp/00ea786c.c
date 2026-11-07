// FUN_00ea786c @ 00ea786c size=124 calls_out=1 calls_in=1
// strings: power_target | hashrate_target

void FUN_00ea786c(undefined1 *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_3 == 0xf) {
    iVar2 = thunk_FUN_01bed842(param_2,"hashrate_target",0xf);
    if (iVar2 == 0) {
      uVar1 = 1;
      goto LAB_00ea78d0;
    }
  }
  else if ((param_3 == 0xc) && (iVar2 = thunk_FUN_01bed842(param_2,"power_target",0xc), iVar2 == 0))
  {
    uVar1 = 0;
    goto LAB_00ea78d0;
  }
  uVar1 = 2;
LAB_00ea78d0:
  param_1[1] = uVar1;
  *param_1 = 0;
  return;
}

