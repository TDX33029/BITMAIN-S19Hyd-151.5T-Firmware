// FUN_018a85a4 @ 018a85a4 size=60 calls_out=1 calls_in=1
// strings: 

void FUN_018a85a4(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = 3;
  if ((int)uVar2 < 0) {
    uVar1 = uVar2 ^ 0x80000000;
  }
  if (uVar1 == 0) {
    return;
  }
  if (uVar1 == 1) {
    param_1 = param_1 + 1;
    uVar2 = *param_1;
  }
  else if (uVar1 == 2) {
    return;
  }
  FUN_0134bd64(uVar2,param_1[1]);
  return;
}

