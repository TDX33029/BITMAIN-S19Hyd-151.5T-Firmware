// FUN_01a6915c @ 01a6915c size=104 calls_out=2 calls_in=2
// strings: 

void FUN_01a6915c(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_1[3] != 0) {
    uVar2 = *param_1;
    FUN_01aae298(uVar2);
    uVar3 = param_1[1];
    uVar1 = 0;
    if (uVar3 != 0) {
      FUN_01bed93e(uVar2,0xff,uVar3 + 5);
      uVar1 = uVar3;
      if (7 < uVar3) {
        uVar1 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
      }
    }
    param_1[2] = uVar1;
    param_1[3] = 0;
  }
  return;
}

