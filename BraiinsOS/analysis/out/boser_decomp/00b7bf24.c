// FUN_00b7bf24 @ 00b7bf24 size=124 calls_out=2 calls_in=1
// strings: 

void FUN_00b7bf24(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = 2;
  if ((int)uVar2 < 0) {
    uVar1 = uVar2 ^ 0x80000000;
  }
  if (uVar1 == 0) {
    if (param_1[1] == 0x80000000) {
      return;
    }
    FUN_0134aee0(param_1[1],param_1[2],1,4);
    return;
  }
  if (uVar1 == 1) {
    uVar2 = param_1[1];
    uVar1 = param_1[2];
  }
  else {
    if (param_1[3] != 0x80000000) {
      FUN_0134aee0(param_1[3],param_1[4],1,4);
    }
    uVar1 = param_1[1];
  }
  FUN_019bb7e0(uVar2,uVar1);
  return;
}

