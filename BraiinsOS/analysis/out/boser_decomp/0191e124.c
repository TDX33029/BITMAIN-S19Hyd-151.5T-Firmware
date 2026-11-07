// FUN_0191e124 @ 0191e124 size=64 calls_out=1 calls_in=19
// strings: 

void FUN_0191e124(undefined4 param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (0x80000000 < *param_2) {
    iVar1 = *param_2 + 0x7fffffff;
  }
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    param_2 = param_2 + 1;
  }
  FUN_0191e164(param_1,param_2[1],param_2[2]);
  return;
}

