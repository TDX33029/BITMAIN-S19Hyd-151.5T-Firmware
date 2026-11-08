// FUN_0067e4ac @ 0067e4ac size=136 calls_out=2 calls_in=2
// strings: 

void FUN_0067e4ac(uint *param_1,int param_2)

{
  uint uVar1;
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
        param_1 = param_1 + -0x48;
        puVar3 = puVar4;
      } while ((uVar2 & 0x80808080) == 0x80808080);
      uVar2 = uVar2 & 0x80808080 ^ 0x80808080;
    }
    uVar1 = (uint)LZCOUNT(uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8
                          | uVar2 >> 0x18) >> 3;
    FUN_019bb7e0(param_1[uVar1 * -0x12 + -0x12],param_1[uVar1 * -0x12 + -0x11]);
    FUN_0067e1d0(param_1 + uVar1 * -0x12 + -0xe);
    param_2 = param_2 + -1;
    uVar2 = uVar2 - 1 & uVar2;
  } while (param_2 != 0);
  return;
}

