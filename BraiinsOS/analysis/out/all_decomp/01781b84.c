// FUN_01781b84 @ 01781b84 size=376 calls_out=3 calls_in=1
// strings: /aws-lc/crypto/stack/stack.c

uint FUN_01781b84(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *param_1;
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  uVar1 = *param_1;
  if (0x7ffffffe < uVar1) {
    FUN_016e9cd0(0xe,0,0x45,"/aws-lc/crypto/stack/stack.c",0x7e);
    return 0;
  }
  uVar4 = param_1[3];
  if (uVar1 + 1 < uVar4) {
    uVar4 = param_1[1];
  }
  else {
    uVar2 = uVar4 * 2;
    if (((uVar4 * 2 < uVar4) || (uVar2 != (uVar4 & 0x1fffffff) * 2)) &&
       (uVar2 = uVar4 + 1, uVar2 != (uVar2 & 0x3fffffff))) {
      return 0;
    }
    uVar4 = FUN_0177ad5c(param_1[1]);
    if (uVar4 == 0) {
      return 0;
    }
    uVar1 = *param_1;
    param_1[1] = uVar4;
    param_1[3] = uVar2;
  }
  if (uVar3 < uVar1) {
    if ((uVar1 - uVar3 & 0x3fffffff) != 0) {
      FUN_016dd52c(uVar4 + uVar3 * 4 + 4);
      uVar1 = *param_1;
      uVar4 = param_1[1];
    }
    *(undefined4 *)(uVar4 + uVar3 * 4) = param_2;
  }
  else {
    *(undefined4 *)(uVar4 + uVar1 * 4) = param_2;
  }
  *param_1 = uVar1 + 1;
  param_1[2] = 0;
  return uVar1 + 1;
}

