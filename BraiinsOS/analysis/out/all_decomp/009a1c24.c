// FUN_009a1c24 @ 009a1c24 size=440 calls_out=1 calls_in=1
// strings: 

void FUN_009a1c24(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  
  if (param_2 == 0) {
    return;
  }
  iVar6 = 0;
  do {
    piVar3 = *(int **)(param_1 + iVar6 * 0x28 + 0x20);
    if (piVar3 != (int *)0x0) {
      iVar2 = piVar3[1];
      if (iVar2 != 0) {
        iVar4 = piVar3[3];
        if (iVar4 != 0) {
          puVar9 = (uint *)*piVar3;
          puVar12 = puVar9 + 1;
          uVar10 = ~*puVar9 & 0x80808080;
          do {
            puVar11 = puVar12;
            if (uVar10 == 0) {
              do {
                puVar12 = puVar11 + 1;
                uVar10 = *puVar11;
                puVar9 = puVar9 + -0x34;
                puVar11 = puVar12;
              } while ((uVar10 & 0x80808080) == 0x80808080);
              uVar10 = uVar10 & 0x80808080 ^ 0x80808080;
            }
            sVar1 = (short)((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                          (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3);
            if (puVar9[-sVar1 * 0xd + -0xc] != 0) {
              thunk_FUN_016d3fb4(puVar9[-sVar1 * 0xd + -0xb]);
            }
            if (puVar9[-sVar1 * 0xd + -9] != 0) {
              thunk_FUN_016d3fb4(puVar9[-sVar1 * 0xd + -8]);
            }
            if (puVar9[-sVar1 * 0xd + -6] != 0) {
              thunk_FUN_016d3fb4(puVar9[-sVar1 * 0xd + -5]);
            }
            iVar4 = iVar4 + -1;
            uVar5 = puVar9[-sVar1 * 0xd + -2];
            uVar10 = uVar10 - 1 & uVar10;
            puVar8 = (undefined4 *)(uVar5 + 4);
            for (uVar7 = puVar9[-sVar1 * 0xd + -1]; uVar7 != 0; uVar7 = uVar7 - 1) {
              if (puVar8[-1] != 0) {
                thunk_FUN_016d3fb4(*puVar8);
              }
              puVar8 = puVar8 + 3;
            }
            if (puVar9[-sVar1 * 0xd + -3] != 0) {
              thunk_FUN_016d3fb4(uVar5);
            }
          } while (iVar4 != 0);
        }
        if (iVar2 * 0x35 != -0x39) {
          thunk_FUN_016d3fb4(*piVar3 + iVar2 * -0x34 + -0x34);
        }
      }
      thunk_FUN_016d3fb4(piVar3);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != param_2);
  return;
}

