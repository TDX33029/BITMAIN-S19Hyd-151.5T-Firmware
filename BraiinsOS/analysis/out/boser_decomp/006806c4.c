// FUN_006806c4 @ 006806c4 size=108 calls_out=2 calls_in=0
// strings: 

void FUN_006806c4(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_1[3] == 0) {
    return;
  }
  uVar2 = *param_1;
  FUN_0067e4ac(uVar2);
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
  return;
}

