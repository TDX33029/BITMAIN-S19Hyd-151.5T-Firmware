// FUN_00fd6bbc @ 00fd6bbc size=72 calls_out=3 calls_in=2
// strings: 

void FUN_00fd6bbc(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1[0x2b] == -0x80000000) {
    uVar1 = param_1[1];
    FUN_006d0a68(uVar1,param_1[2]);
    FUN_0132b958(*param_1,uVar1,8,0xc0);
    return;
  }
  FUN_00f86328(param_1);
  return;
}

