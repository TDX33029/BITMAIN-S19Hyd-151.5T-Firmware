// FUN_00756144 @ 00756144 size=72 calls_out=2 calls_in=4
// strings: 

void FUN_00756144(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if (*param_1 == 0 && param_1[1] == 0) {
    if (iVar1 != 0) {
      FUN_013f476c(param_1 + 2);
      return;
    }
  }
  else if (iVar1 != 0) {
    FUN_01443048(iVar1,param_1[3]);
    return;
  }
  return;
}

