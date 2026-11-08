// FUN_012840cc @ 012840cc size=44 calls_out=2 calls_in=122
// strings: 

void FUN_012840cc(int *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[3];
  if ((uVar1 & 1) == 0) {
    FUN_01283c54();
    return;
  }
  FUN_0134bd64(param_1[2] + (uVar1 >> 5),*param_1 - (uVar1 >> 5));
  return;
}

