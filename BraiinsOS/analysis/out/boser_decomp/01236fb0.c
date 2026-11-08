// FUN_01236fb0 @ 01236fb0 size=216 calls_out=1 calls_in=1
// strings: enabled | hashrate_target | power_target

void FUN_01236fb0(undefined4 *param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_3 < 0xc) {
    if (param_3 == 4) {
      if (*param_2 == 0x65646f6d) {
        uVar1 = 1;
        goto LAB_01237070;
      }
    }
    else if ((param_3 == 7) && (iVar2 = thunk_FUN_01bed842(param_2,"enabled",7), iVar2 == 0)) {
      uVar1 = 0;
      goto LAB_01237070;
    }
  }
  else if (param_3 == 0xc) {
    iVar2 = thunk_FUN_01bed842(param_2,"power_target",0xc);
    if (iVar2 == 0) {
      uVar1 = 2;
      goto LAB_01237070;
    }
  }
  else if ((param_3 == 0xf) &&
          (iVar2 = thunk_FUN_01bed842(param_2,"hashrate_target",0xf), iVar2 == 0)) {
    uVar1 = 3;
    goto LAB_01237070;
  }
  uVar1 = 4;
LAB_01237070:
  *(undefined1 *)(param_1 + 1) = uVar1;
  *param_1 = 2;
  return;
}

