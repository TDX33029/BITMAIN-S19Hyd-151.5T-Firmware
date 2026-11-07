// FUN_01177f34 @ 01177f34 size=80 calls_out=1 calls_in=1
// strings: 

void FUN_01177f34(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != -0x80000000) {
    if (iVar1 == -0x7fffffff) {
      return;
    }
    FUN_019bb7e0(iVar1,param_1[1]);
  }
  if (param_1[3] != -0x80000000) {
    FUN_019bb7e0(param_1[3],param_1[4]);
  }
  if (param_1[6] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[6],param_1[7]);
  return;
}

