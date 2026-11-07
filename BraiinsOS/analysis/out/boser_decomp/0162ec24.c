// FUN_0162ec24 @ 0162ec24 size=64 calls_out=2 calls_in=1
// strings: 

void FUN_0162ec24(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = 5;
  if ((int)uVar2 < 0) {
    uVar1 = uVar2 ^ 0x80000000;
  }
  if (uVar1 - 1 < 3) {
    return;
  }
  if (uVar1 == 0) {
    FUN_0161cfb8(param_1 + 1);
    return;
  }
  if (uVar1 == 4) {
    uVar2 = param_1[1];
    uVar1 = param_1[2];
  }
  else {
    uVar1 = param_1[1];
  }
  FUN_0134bd64(uVar2,uVar1);
  return;
}

