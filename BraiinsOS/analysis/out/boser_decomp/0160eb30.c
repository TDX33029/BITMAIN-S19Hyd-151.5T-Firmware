// FUN_0160eb30 @ 0160eb30 size=196 calls_out=2 calls_in=3
// strings: 

void FUN_0160eb30(int *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = param_1[1];
  if (iVar6 != 0) {
    iVar7 = param_1[3];
    if (iVar7 != 0) {
      puVar5 = (uint *)*param_1;
      puVar3 = puVar5 + 1;
      uVar4 = ~*puVar5 & 0x80808080;
      do {
        puVar2 = puVar3;
        if (uVar4 == 0) {
          do {
            puVar3 = puVar2 + 1;
            uVar4 = *puVar2;
            puVar5 = puVar5 + -0x18;
            puVar2 = puVar3;
          } while ((uVar4 & 0x80808080) == 0x80808080);
          uVar4 = uVar4 & 0x80808080 ^ 0x80808080;
        }
        uVar1 = (uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                              (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3;
        FUN_019bb7e0(puVar5[uVar1 * -6 + -6],puVar5[uVar1 * -6 + -5]);
        iVar7 = iVar7 + -1;
        uVar4 = uVar4 - 1 & uVar4;
      } while (iVar7 != 0);
    }
    iVar7 = iVar6 * 0x18 + 0x18;
    if (iVar6 + iVar7 != -5) {
      thunk_FUN_01be4678(*param_1 - iVar7);
      return;
    }
  }
  return;
}

