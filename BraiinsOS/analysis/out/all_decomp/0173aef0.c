// FUN_0173aef0 @ 0173aef0 size=168 calls_out=5 calls_in=4
// strings: 

uint FUN_0173aef0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0x74) {
    uVar1 = FUN_0173a954(param_1,param_3);
    return uVar1;
  }
  if (param_2 < 0x75) {
    if (param_2 == 6) {
      uVar1 = FUN_0173a7a8(param_1,param_3);
      return uVar1;
    }
    if (param_2 == 0x1c) {
      uVar1 = FUN_016eb26c(param_1,param_3);
      return uVar1;
    }
  }
  else if (param_2 == 0x198) {
    uVar1 = FUN_0173aa7c(param_1,param_3);
    return uVar1;
  }
  iVar2 = FUN_0173ad40(param_1);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = (uint)(param_3 != 0);
    *(int *)(param_1 + 8) = param_3;
  }
  return uVar1;
}

