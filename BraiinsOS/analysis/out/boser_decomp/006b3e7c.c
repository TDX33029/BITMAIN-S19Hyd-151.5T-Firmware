// FUN_006b3e7c @ 006b3e7c size=244 calls_out=2 calls_in=1
// strings: 

void FUN_006b3e7c(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  
  iVar2 = param_1[1];
  if (iVar2 != 0) {
    iVar7 = param_1[3];
    if (iVar7 != 0) {
      puVar8 = (uint *)*param_1;
      puVar6 = puVar8 + 1;
      uVar9 = ~*puVar8 & 0x80808080;
      do {
        puVar5 = puVar6;
        if (uVar9 == 0) {
          do {
            puVar6 = puVar5 + 1;
            uVar9 = *puVar5;
            puVar8 = puVar8 + -0x30;
            puVar5 = puVar6;
          } while ((uVar9 & 0x80808080) == 0x80808080);
          uVar9 = uVar9 & 0x80808080 ^ 0x80808080;
        }
        uVar1 = (uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                              (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3;
        uVar3 = puVar8[uVar1 * -0xc + -7];
        if (uVar3 != 0) {
          iVar4 = uVar3 * 8 + 8;
          if (uVar3 + iVar4 != -5) {
            thunk_FUN_01be4678(puVar8[uVar1 * -0xc + -8] - iVar4);
          }
        }
        iVar7 = iVar7 + -1;
        uVar9 = uVar9 - 1 & uVar9;
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

