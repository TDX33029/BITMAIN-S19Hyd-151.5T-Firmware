// FUN_0118c560 @ 0118c560 size=208 calls_out=3 calls_in=3
// strings: 

void FUN_0118c560(int *param_1)

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
            puVar5 = puVar5 + -0x14;
            puVar2 = puVar3;
          } while ((uVar4 & 0x80808080) == 0x80808080);
          uVar4 = uVar4 & 0x80808080 ^ 0x80808080;
        }
        uVar1 = (uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                              (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3;
        FUN_019bb7e0(puVar5[uVar1 * -5 + -5],puVar5[uVar1 * -5 + -4]);
        FUN_01139b38(puVar5[uVar1 * -5 + -2],puVar5[uVar1 * -5 + -1]);
        iVar7 = iVar7 + -1;
        uVar4 = uVar4 - 1 & uVar4;
      } while (iVar7 != 0);
    }
    if (iVar6 * 0x15 != -0x19) {
      thunk_FUN_01be4678(*param_1 + iVar6 * -0x14 + -0x14);
      return;
    }
  }
  return;
}

