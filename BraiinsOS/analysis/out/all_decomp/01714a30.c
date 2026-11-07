// FUN_01714a30 @ 01714a30 size=128 calls_out=2 calls_in=8
// strings: 

undefined4 FUN_01714a30(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    FUN_01714350();
  }
  else {
    iVar1 = FUN_0171464c(param_1,1);
    if (iVar1 == 0) {
      return 0;
    }
    param_1[3] = 0;
    *(int *)*param_1 = param_2;
    param_1[1] = 1;
  }
  return 1;
}

