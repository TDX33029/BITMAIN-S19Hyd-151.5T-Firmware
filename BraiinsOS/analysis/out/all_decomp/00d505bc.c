// FUN_00d505bc @ 00d505bc size=452 calls_out=4 calls_in=1
// strings: 

undefined4 FUN_00d505bc(int param_1,code *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  uint in_fpscr;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  int local_3c;
  undefined4 *local_38;
  int local_34;
  
  puVar10 = *(uint **)(param_1 + 0xa0);
  iVar7 = *(int *)(param_1 + 0xac);
  puVar9 = puVar10 + 1;
  uVar11 = ~*puVar10 & 0x80808080;
  do {
    if (iVar7 == 0) {
      return 0;
    }
    puVar8 = puVar9;
    if (uVar11 == 0) {
      do {
        puVar9 = puVar8 + 1;
        uVar11 = *puVar8;
        puVar10 = puVar10 + -8;
        puVar8 = puVar9;
      } while ((uVar11 & 0x80808080) == 0x80808080);
      uVar11 = uVar11 & 0x80808080 ^ 0x80808080;
    }
    uVar4 = uVar11 >> 8;
    uVar1 = uVar11 >> 0x10;
    uVar2 = uVar11 >> 0x18;
    uVar3 = uVar11 << 0x18;
    uVar11 = uVar11 - 1 & uVar11;
    uVar4 = (*param_2)(*(int *)((int)puVar10 +
                               (-4 - (LZCOUNT(uVar3 | (uVar4 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 |
                                              uVar2) & 0x38U))) + 8);
    iVar7 = iVar7 + -1;
  } while ((uVar4 & 1) == 0);
  puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x10);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,0x10);
  }
  iVar12 = 1;
  *puVar5 = extraout_s0;
  local_3c = 4;
  local_38 = puVar5;
  do {
    local_34 = iVar12;
    do {
      if (iVar7 == 0) {
        iVar7 = iVar12;
        do {
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        VectorUnsignedToFloat(iVar12,(byte)(in_fpscr >> 0x16) & 3);
        if (local_3c == 0) {
          return 1;
        }
        thunk_FUN_016d3fb4(puVar5);
        return 1;
      }
      puVar8 = puVar9;
      if (uVar11 == 0) {
        do {
          puVar9 = puVar8 + 1;
          uVar11 = *puVar8;
          puVar10 = puVar10 + -8;
          puVar8 = puVar9;
        } while ((uVar11 & 0x80808080) == 0x80808080);
        uVar11 = uVar11 & 0x80808080 ^ 0x80808080;
      }
      uVar4 = (*param_2)(*(int *)((int)puVar10 +
                                 (-4 - (LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                                (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) &
                                       0x38U))) + 8);
      iVar7 = iVar7 + -1;
      uVar11 = uVar11 - 1 & uVar11;
    } while ((uVar4 & 1) == 0);
    if (iVar12 == local_3c) {
      FUN_00d653ec(&local_3c,iVar12,1,4,4);
      puVar5 = local_38;
    }
    puVar6 = puVar5 + iVar12;
    iVar12 = iVar12 + 1;
    *puVar6 = extraout_s0_00;
  } while( true );
}

