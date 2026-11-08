// FUN_00d9237c @ 00d9237c size=52 calls_out=0 calls_in=0
// strings: 

void FUN_00d9237c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_2 == -0x7fffffff) {
    *param_1 = -0x80000000;
    return;
  }
  iVar2 = param_2[1];
  iVar1 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = iVar2;
  param_1[2] = iVar1;
  return;
}

