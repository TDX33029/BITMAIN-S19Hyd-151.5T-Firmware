// FUN_01431e90 @ 01431e90 size=56 calls_out=1 calls_in=0
// strings: 

uint FUN_01431e90(int *param_1)

{
  uint uVar1;
  
  if (*param_1 == 0) {
    uVar1 = param_1[1];
  }
  else {
    if (*param_1 != 1) {
      uVar1 = FUN_013b8c94(param_1 + 2);
      return uVar1;
    }
    uVar1 = param_1[4] | param_1[5];
  }
  return (uint)(uVar1 == 0);
}

