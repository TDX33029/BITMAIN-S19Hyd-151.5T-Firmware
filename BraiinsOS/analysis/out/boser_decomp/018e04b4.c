// FUN_018e04b4 @ 018e04b4 size=84 calls_out=2 calls_in=2
// strings: 

void FUN_018e04b4(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = 1;
  if ((int)uVar2 < 0) {
    uVar1 = uVar2 ^ 0x80000000;
  }
  if (uVar1 == 0) {
    return;
  }
  if (uVar1 == 1) {
    FUN_018e0520(param_1 + 3);
  }
  else {
    if (uVar1 == 2) {
      return;
    }
    param_1 = param_1 + 1;
    uVar2 = *param_1;
  }
  FUN_0134bd64(uVar2,param_1[1]);
  return;
}

