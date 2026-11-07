// FUN_0067e1d0 @ 0067e1d0 size=212 calls_out=3 calls_in=6
// strings: 

void FUN_0067e1d0(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  
  iVar2 = param_1[1];
  if (iVar2 != 0) {
    iVar7 = param_1[3];
    if (iVar7 != 0) {
      puVar6 = (uint *)*param_1;
      puVar4 = puVar6 + 1;
      uVar5 = ~*puVar6 & 0x80808080;
      do {
        puVar3 = puVar4;
        if (uVar5 == 0) {
          do {
            puVar4 = puVar3 + 1;
            uVar5 = *puVar3;
            puVar6 = puVar6 + -0x30;
            puVar3 = puVar4;
          } while ((uVar5 & 0x80808080) == 0x80808080);
          uVar5 = uVar5 & 0x80808080 ^ 0x80808080;
        }
        uVar1 = (uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                              (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3;
        FUN_019bb7e0(puVar6[uVar1 * -0xc + -0xc],puVar6[uVar1 * -0xc + -0xb]);
        FUN_0160eb30(puVar6 + uVar1 * -0xc + -8);
        iVar7 = iVar7 + -1;
        uVar5 = uVar5 - 1 & uVar5;
      } while (iVar7 != 0);
    }
    iVar7 = iVar2 * 0x30 + 0x30;
    if (iVar2 + iVar7 != -5) {
      thunk_FUN_01be4678(*param_1 - iVar7);
      return;
    }
  }
  return;
}

