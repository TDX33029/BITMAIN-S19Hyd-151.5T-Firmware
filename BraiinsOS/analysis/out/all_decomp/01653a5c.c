// FUN_01653a5c @ 01653a5c size=424 calls_out=2 calls_in=1
// strings: 

void FUN_01653a5c(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                 undefined4 param_6,uint param_7,uint param_8)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  if (param_3 == 0 && param_4 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  uVar12 = 1;
  iVar10 = 1;
  if (param_5 != 0) {
    iVar7 = 0x40;
    for (uVar9 = param_5; ((uVar9 & 1) == 0 || (iVar10 = iVar7 * iVar10, uVar9 != 1));
        uVar9 = uVar9 >> 1) {
      iVar7 = iVar7 * iVar7;
    }
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faf2a4(&DAT_018acf2c);
    }
  }
  uVar8 = FUN_01846088(param_7,param_8,iVar10,0);
  uVar9 = param_3;
  if ((uVar8 & 0x20) == 0) {
    uVar9 = param_4;
    param_4 = param_3;
  }
  uVar11 = (param_4 << 1) << (~uVar8 & 0x1f) | uVar9 >> (uVar8 & 0x1f);
  bVar3 = (byte)uVar11;
  bVar4 = (byte)(uVar11 >> 8);
  bVar5 = (byte)(uVar11 >> 0x10);
  bVar1 = (byte)(uVar11 >> 0x18);
  uVar9 = (uVar9 << 1) << (~uVar8 & 0x1f) | param_4 >> (uVar8 & 0x1f);
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
  uVar9 = iVar10 + uVar8 & 0x3f;
  if (param_5 == 0) {
    iVar10 = 0x40;
    uVar8 = 0;
  }
  else {
    iVar10 = 0x40;
    uVar11 = 1;
    for (uVar12 = param_5; ((uVar12 & 1) == 0 || (uVar11 = iVar10 * uVar11, uVar12 != 1));
        uVar12 = uVar12 >> 1) {
      iVar10 = iVar10 * iVar10;
    }
    uVar8 = uVar11 >> 0x1a;
    iVar10 = uVar11 * 0x40;
    iVar7 = 0x40;
    uVar12 = 1;
    for (uVar11 = param_5; ((uVar11 & 1) == 0 || (uVar12 = iVar7 * uVar12, uVar11 != 1));
        uVar11 = uVar11 >> 1) {
      iVar7 = iVar7 * iVar7;
    }
  }
  param_1[5] = uVar9;
  lVar2 = (ulonglong)uVar9 * (ulonglong)uVar12 +
          CONCAT44(param_8 & -(uVar8 + (iVar10 != 0)),param_7 & -iVar10);
  uVar12 = (uint)((ulonglong)lVar2 >> 0x20);
  lVar6 = lVar2 + CONCAT44(uVar8,iVar10);
  if (param_8 <= uVar12 && (uint)((uint)lVar2 <= param_7) <= param_8 - uVar12) {
    lVar6 = lVar2;
  }
  *(longlong *)(param_1 + 2) = lVar6;
  param_1[4] = param_5;
  *param_1 = 1;
  param_1[1] = 0;
  return;
}

