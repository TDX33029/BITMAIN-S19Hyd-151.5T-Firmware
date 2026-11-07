// FUN_01691e04 @ 01691e04 size=48 calls_out=1 calls_in=1
// strings: 

void FUN_01691e04(int *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 - 6U < 2) {
    uVar1 = 4;
  }
  else {
    uVar1 = 8;
    if (*param_1 != 2) {
      return;
    }
  }
  FUN_0134aee0(param_1[1],param_1[2],4,uVar1);
  return;
}

