// FUN_00679908 @ 00679908 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_00679908(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_006794bc(param_2);
  if (iVar1 == 0) {
    FUN_0069c298(param_1,param_2);
    return;
  }
  *param_1 = 0;
  param_1[1] = iVar1;
  return;
}

