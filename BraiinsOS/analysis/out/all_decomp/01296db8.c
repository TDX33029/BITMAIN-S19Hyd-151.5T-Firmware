// FUN_01296db8 @ 01296db8 size=324 calls_out=4 calls_in=8
// strings: 

void FUN_01296db8(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  undefined4 uVar9;
  uint *puVar10;
  undefined4 uVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x18);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x18);
  }
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar9 = param_2[4];
  uVar11 = param_2[5];
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  puVar1[4] = uVar9;
  puVar1[5] = uVar11;
  iVar6 = *(int *)(param_1 + 0x28);
  if (iVar6 != 0) {
    piVar12 = *(int **)(iVar6 + 0x10);
    if (piVar12 != (int *)0x0) {
      iVar2 = piVar12[1];
      if (iVar2 != 0) {
        iVar13 = piVar12[3];
        if (iVar13 != 0) {
          puVar10 = (uint *)*piVar12;
          puVar7 = puVar10 + 1;
          uVar14 = ~*puVar10 & 0x80808080;
          do {
            puVar8 = puVar7;
            if (uVar14 == 0) {
              do {
                puVar7 = puVar8 + 1;
                uVar14 = *puVar8;
                puVar10 = puVar10 + -0x34;
                puVar8 = puVar7;
              } while ((uVar14 & 0x80808080) == 0x80808080);
              uVar14 = uVar14 & 0x80808080 ^ 0x80808080;
            }
            FUN_00a64f9c(puVar10 + (short)-(short)((uint)LZCOUNT(uVar14 << 0x18 |
                                                                 (uVar14 >> 8 & 0xff) << 0x10 |
                                                                 (uVar14 >> 0x10 & 0xff) << 8 |
                                                                 uVar14 >> 0x18) >> 3) * 0xd + -0xd)
            ;
            iVar13 = iVar13 + -1;
            uVar14 = uVar14 - 1 & uVar14;
          } while (iVar13 != 0);
        }
        if (iVar2 * 0x35 != -0x39) {
          thunk_FUN_016d3fb4(*piVar12 + iVar2 * -0x34 + -0x34);
        }
      }
      thunk_FUN_016d3fb4(piVar12);
    }
    thunk_FUN_016d3fb4(iVar6);
  }
  *(undefined4 **)(param_1 + 0x28) = puVar1;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  return;
}

