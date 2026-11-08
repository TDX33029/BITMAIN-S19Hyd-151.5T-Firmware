// FUN_01aae298 @ 01aae298 size=128 calls_out=1 calls_in=4
// strings: 

void FUN_01aae298(uint *param_1,int param_2)

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
        param_1 = param_1 + -0x18;
        puVar3 = puVar4;
      } while ((uVar2 & 0x80808080) == 0x80808080);
      uVar2 = uVar2 & 0x80808080 ^ 0x80808080;
    }
    uVar1 = (uint)LZCOUNT(uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8
                          | uVar2 >> 0x18) >> 3;
    FUN_01139b38(param_1[uVar1 * -6 + -2],param_1[uVar1 * -6 + -1]);
    param_2 = param_2 + -1;
    uVar2 = uVar2 - 1 & uVar2;
  } while (param_2 != 0);
  return;
}

