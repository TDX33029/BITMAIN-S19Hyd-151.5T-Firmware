// FUN_01a55128 @ 01a55128 size=72 calls_out=1 calls_in=3
// strings: 

void FUN_01a55128(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 != -0x7ffffffd) && (-1 < iVar1)) {
    FUN_0134bd64(iVar1,param_1[1]);
  }
  iVar1 = param_1[3];
  *param_1 = -0x7ffffffd;
  if ((iVar1 != -0x7ffffffd) && (-1 < iVar1)) {
    FUN_0134bd64(iVar1,param_1[4]);
  }
  param_1[3] = -0x7ffffffd;
  return;
}

