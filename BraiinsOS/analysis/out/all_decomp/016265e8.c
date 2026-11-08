// FUN_016265e8 @ 016265e8 size=468 calls_out=3 calls_in=2
// strings: 

void FUN_016265e8(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                 undefined4 param_6,uint param_7,uint param_8)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint extraout_r2;
  uint uVar11;
  int extraout_r3;
  int iVar12;
  uint uVar13;
  uint uVar14;
  
  if (param_3 == 0 && param_4 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if (param_5 == 0) {
    iVar10 = 1;
  }
  else {
    iVar8 = 0x40;
    iVar10 = 1;
    for (uVar13 = param_5; ((uVar13 & 1) == 0 || (iVar10 = iVar8 * iVar10, uVar13 != 1));
        uVar13 = uVar13 >> 1) {
      iVar8 = iVar8 * iVar8;
    }
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faf2a4(&DAT_018abd88);
    }
    if (param_5 != 0) {
      iVar8 = 0x40;
      uVar9 = 1;
      for (uVar13 = param_5; ((uVar13 & 1) == 0 || (uVar9 = iVar8 * uVar9, uVar13 != 1));
          uVar13 = uVar13 >> 1) {
        iVar8 = iVar8 * iVar8;
      }
      uVar13 = uVar9 >> 0x1a;
      iVar8 = uVar9 * 0x40;
      iVar12 = 0x40;
      uVar14 = 1;
      for (uVar7 = param_5; ((uVar7 & 1) == 0 || (uVar14 = iVar12 * uVar14, uVar7 != 1));
          uVar7 = uVar7 >> 1) {
        iVar12 = iVar12 * iVar12;
      }
      if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb7c58(&DAT_018abd78);
      }
      goto LAB_016266f4;
    }
  }
  iVar8 = 0x40;
  uVar14 = 1;
  uVar13 = 0;
LAB_016266f4:
  param_1[4] = param_5;
  uVar7 = FUN_01846088(param_7,param_8,iVar10,0);
  uVar9 = param_3;
  if ((uVar7 & 0x20) == 0) {
    uVar9 = param_4;
    param_4 = param_3;
  }
  uVar11 = (param_4 << 1) << (~uVar7 & 0x1f) | uVar9 >> (uVar7 & 0x1f);
  bVar3 = (byte)uVar11;
  bVar4 = (byte)(uVar11 >> 8);
  bVar5 = (byte)(uVar11 >> 0x10);
  bVar1 = (byte)(uVar11 >> 0x18);
  uVar9 = (uVar9 << 1) << (~uVar7 & 0x1f) | param_4 >> (uVar7 & 0x1f);
  iVar10 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1) << 1
                                   | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1)
                                 << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x18 |
                   (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1) << 1
                                   | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1)
                                 << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                   (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1) << 1
                                   | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1)
                                 << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8 |
                   (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) << 1
                                   | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1)
                                 << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7)) + 0x20;
  bVar3 = (byte)uVar9;
  bVar4 = (byte)(uVar9 >> 8);
  bVar5 = (byte)(uVar9 >> 0x10);
  bVar1 = (byte)(uVar9 >> 0x18);
  if (uVar9 != 0) {
    iVar10 = LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1) <<
                                      1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                   bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x18
                     | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1)
                                        << 1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                     bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                       0x10 | (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 |
                                               bVar5 >> 2 & 1) << 1 | bVar5 >> 3 & 1) << 1 |
                                             bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                                           bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8 |
                     (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) <<
                                      1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                   bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
  }
  uVar9 = iVar10 + uVar7 & 0x3f;
  FUN_01846088(param_7,param_8,iVar8,uVar13);
  param_1[5] = uVar9;
  lVar2 = (ulonglong)uVar9 * (ulonglong)uVar14 +
          CONCAT44(param_8 - (extraout_r3 + (uint)(param_7 < extraout_r2)),param_7 - extraout_r2);
  uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
  lVar6 = lVar2 + CONCAT44(uVar13,iVar8);
  if (param_8 < uVar9 || uVar9 - param_8 < (uint)(param_7 <= (uint)lVar2)) {
    lVar6 = lVar2;
  }
  *(longlong *)(param_1 + 2) = lVar6;
  *param_1 = 1;
  param_1[1] = 0;
  return;
}

