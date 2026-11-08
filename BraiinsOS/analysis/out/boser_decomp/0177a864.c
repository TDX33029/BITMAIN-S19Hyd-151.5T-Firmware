// FUN_0177a864 @ 0177a864 size=196 calls_out=2 calls_in=2
// strings: 

void FUN_0177a864(int *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_1[1];
  if (iVar5 != 0) {
    iVar6 = param_1[3];
    if (iVar6 != 0) {
      puVar4 = (uint *)*param_1;
      puVar2 = puVar4 + 1;
      uVar3 = ~*puVar4 & 0x80808080;
      do {
        puVar1 = puVar2;
        if (uVar3 == 0) {
          do {
            puVar2 = puVar1 + 1;
            uVar3 = *puVar1;
            puVar4 = puVar4 + -0x24;
            puVar1 = puVar2;
          } while ((uVar3 & 0x80808080) == 0x80808080);
          uVar3 = uVar3 & 0x80808080 ^ 0x80808080;
        }
        FUN_0177a928(puVar4 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                             (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) * -9
                              + -9);
        iVar6 = iVar6 + -1;
        uVar3 = uVar3 - 1 & uVar3;
      } while (iVar6 != 0);
    }
    iVar6 = iVar5 * 0x24 + 0x24;
    if (iVar5 + iVar6 != -5) {
      thunk_FUN_01be4678(*param_1 - iVar6);
      return;
    }
  }
  return;
}

