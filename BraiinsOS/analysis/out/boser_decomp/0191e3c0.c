// FUN_0191e3c0 @ 0191e3c0 size=56 calls_out=1 calls_in=3
// strings: 

void FUN_0191e3c0(undefined4 param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (0x80000000 < *param_2) {
    iVar1 = *param_2 + 0x7fffffff;
  }
  if (iVar1 == 2) {
    param_2 = param_2 + 1;
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_01ac6cbc(param_1,param_2[1],param_2[2]);
  return;
}

