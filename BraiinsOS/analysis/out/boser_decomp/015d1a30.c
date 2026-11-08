// FUN_015d1a30 @ 015d1a30 size=144 calls_out=2 calls_in=2
// strings: 

void FUN_015d1a30(uint *param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  if (param_2 == 0) {
    return;
  }
  puVar4 = param_1 + 1;
  uVar2 = ~*param_1 & 0x80808080;
  do {
    puVar3 = puVar4;
    if (uVar2 == 0) {
      do {
        puVar4 = puVar3 + 1;
        uVar2 = *puVar3;
        param_1 = param_1 + -0xb0;
        puVar3 = puVar4;
      } while ((uVar2 & 0x80808080) == 0x80808080);
      uVar2 = uVar2 & 0x80808080 ^ 0x80808080;
    }
    sVar1 = (short)((uint)LZCOUNT(uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 |
                                  (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18) >> 3);
    FUN_0134bd64(param_1[-sVar1 * 0x2c + -0x2c],param_1[-sVar1 * 0x2c + -0x2b]);
    FUN_015d1ac0(param_1 + -sVar1 * 0x2c + -0x28);
    param_2 = param_2 + -1;
    uVar2 = uVar2 - 1 & uVar2;
  } while (param_2 != 0);
  return;
}

