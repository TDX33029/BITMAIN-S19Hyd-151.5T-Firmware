// FUN_01715760 @ 01715760 size=196 calls_out=1 calls_in=22
// strings: 

uint FUN_01715760(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0 || param_1 == 0) {
    if (param_1 == 0) {
      return (uint)(param_2 != 0);
    }
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc)) {
    uVar1 = FUN_01715744();
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar1 = -uVar1;
    }
    return uVar1;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

