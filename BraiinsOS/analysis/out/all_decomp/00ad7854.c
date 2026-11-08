// FUN_00ad7854 @ 00ad7854 size=460 calls_out=4 calls_in=5
// strings: 

void FUN_00ad7854(int param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  
  if (*(char *)(param_1 + 0x114) == '\0') {
    if (*(char *)(param_1 + 0xf0) == '\x03') {
      FUN_00a07b4c(param_1 + 0xa0);
      iVar6 = *(int *)(param_1 + 100);
      if (iVar6 != 0) {
        iVar7 = *(int *)(param_1 + 0x6c);
        if (iVar7 != 0) {
          puVar5 = *(uint **)(param_1 + 0x60);
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
            if (puVar5[uVar1 * -6 + -6] != 0) {
              thunk_FUN_016d3fb4(puVar5[uVar1 * -6 + -5]);
            }
            iVar7 = iVar7 + -1;
            uVar4 = uVar4 - 1 & uVar4;
          } while (iVar7 != 0);
        }
        if (iVar6 * 0x19 != -0x1d) {
          thunk_FUN_016d3fb4(*(int *)(param_1 + 0x60) + iVar6 * -0x18 + -0x18);
        }
      }
      iVar6 = *(int *)(param_1 + 0x84);
      if (iVar6 != 0) {
        iVar7 = *(int *)(param_1 + 0x8c);
        if (iVar7 != 0) {
          puVar5 = *(uint **)(param_1 + 0x80);
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
            if (puVar5[uVar1 * -6 + -6] != 0) {
              thunk_FUN_016d3fb4(puVar5[uVar1 * -6 + -5]);
            }
            iVar7 = iVar7 + -1;
            uVar4 = uVar4 - 1 & uVar4;
          } while (iVar7 != 0);
        }
        if (iVar6 * 0x19 != -0x1d) {
          thunk_FUN_016d3fb4(*(int *)(param_1 + 0x80) + iVar6 * -0x18 + -0x18);
        }
      }
    }
    FUN_00ac9c30(param_1 + 0x108);
    return;
  }
  if (*(char *)(param_1 + 0x114) == '\x03') {
    FUN_00887914(param_1 + 0xf8);
    return;
  }
  return;
}

