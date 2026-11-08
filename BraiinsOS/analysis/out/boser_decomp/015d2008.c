// FUN_015d2008 @ 015d2008 size=204 calls_out=2 calls_in=1
// strings: 

void FUN_015d2008(int *param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    iVar4 = param_1[3];
    if (iVar4 != 0) {
      puVar5 = (uint *)*param_1;
      puVar3 = puVar5 + 1;
      uVar6 = ~*puVar5 & 0x80808080;
      do {
        puVar2 = puVar3;
        if (uVar6 == 0) {
          do {
            puVar3 = puVar2 + 1;
            uVar6 = *puVar2;
            puVar5 = puVar5 + -0xb8;
            puVar2 = puVar3;
          } while ((uVar6 & 0x80808080) == 0x80808080);
          uVar6 = uVar6 & 0x80808080 ^ 0x80808080;
        }
        FUN_015d20d4(puVar5 + (short)-(short)((uint)LZCOUNT(uVar6 << 0x18 |
                                                            (uVar6 >> 8 & 0xff) << 0x10 |
                                                            (uVar6 >> 0x10 & 0xff) << 8 |
                                                            uVar6 >> 0x18) >> 3) * 0x2e + -0x2e);
        iVar4 = iVar4 + -1;
        uVar6 = uVar6 - 1 & uVar6;
      } while (iVar4 != 0);
    }
    iVar4 = iVar1 * 0xb8 + 0xb8;
    if (iVar1 + iVar4 != -5) {
      thunk_FUN_01be4678(*param_1 - iVar4);
      return;
    }
  }
  return;
}

