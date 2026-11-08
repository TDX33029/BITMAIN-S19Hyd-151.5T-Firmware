// FUN_0161ed28 @ 0161ed28 size=128 calls_out=4 calls_in=1
// strings: 

void FUN_0161ed28(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *param_1;
  uVar2 = 2;
  if ((int)uVar1 < 0) {
    uVar2 = uVar1 ^ 0x80000000;
  }
  if (uVar2 == 0) {
    uVar2 = param_1[2];
    FUN_016313a8(uVar2,param_1[3]);
    uVar1 = param_1[1];
    uVar3 = 4;
    uVar4 = 0x88;
  }
  else {
    if (uVar2 != 1) {
      FUN_0134bd64(uVar1,param_1[1]);
      return;
    }
    uVar2 = param_1[2];
    FUN_016313e0(uVar2,param_1[3]);
    uVar1 = param_1[1];
    uVar3 = 8;
    uVar4 = 0x138;
  }
  FUN_0134aee0(uVar1,uVar2,uVar3,uVar4);
  return;
}

