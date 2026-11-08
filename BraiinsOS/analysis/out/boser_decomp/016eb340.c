// FUN_016eb340 @ 016eb340 size=1084 calls_out=3 calls_in=0
// strings: 

void FUN_016eb340(undefined1 *param_1,int *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  byte bVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  byte bVar14;
  byte *pbVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  byte bVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined1 uVar24;
  byte bVar25;
  bool bVar26;
  byte local_32 [2];
  undefined1 local_30 [2];
  undefined1 local_2e [2];
  uint local_2c;
  uint local_28;
  
  iVar16 = param_2[2];
  if (iVar16 == 0) {
LAB_016eb4f0:
    *param_1 = 4;
    return;
  }
  iVar13 = param_2[1];
  do {
    iVar16 = iVar16 + -1;
    puVar4 = (uint *)(iVar13 + iVar16 * 8);
    uVar18 = *puVar4;
    uVar22 = puVar4[1];
    param_2[2] = iVar16;
LAB_016eb380:
    while( true ) {
      while ((uVar18 >> 0xd < 7 && (0xd7ff < uVar22))) {
        if (iVar16 == *param_2) {
          FUN_015f5ab8(param_2);
        }
        iVar13 = param_2[1];
        param_2[2] = iVar16 + 1;
        puVar8 = (undefined4 *)(iVar13 + iVar16 * 8);
        *puVar8 = 0xe000;
        puVar8[1] = uVar22;
        iVar16 = iVar16 + 1;
        uVar22 = 0xd7ff;
      }
      if (uVar22 < uVar18) break;
      iVar5 = 0;
      do {
        if (iVar5 == 3) {
          if (uVar22 < 0x80) {
            param_1[2] = (byte)uVar22;
            param_1[1] = (byte)uVar18;
            *param_1 = 0;
            return;
          }
          uVar20 = 6;
          goto LAB_016eb438;
        }
        uVar20 = (&DAT_00537f08)[iVar5];
        iVar5 = iVar5 + 1;
        bVar26 = uVar20 <= uVar18;
        if (uVar18 <= uVar20) {
          bVar26 = uVar22 <= uVar20;
        }
      } while (bVar26);
      if (iVar16 == *param_2) {
        FUN_015f5ab8(param_2);
        iVar13 = param_2[1];
      }
      piVar6 = (int *)(iVar13 + iVar16 * 8);
      *piVar6 = uVar20 + 1;
      piVar6[1] = uVar22;
      param_2[2] = iVar16 + 1;
      iVar16 = iVar16 + 1;
      uVar22 = uVar20;
    }
    if (iVar16 == 0) goto LAB_016eb4f0;
  } while( true );
LAB_016eb438:
  uVar21 = uVar22 & -1 << (uVar20 & 0xff);
  if ((uVar18 & -1 << (uVar20 & 0xff)) != uVar21) {
    uVar1 = -1 << (uVar20 & 0xff);
    uVar23 = ~uVar1;
    if ((uVar18 & uVar23) != 0) {
      if (iVar16 == *param_2) {
        FUN_015f5ab8(param_2);
      }
      iVar13 = param_2[1];
      uVar23 = uVar18 | uVar23;
      param_2[2] = iVar16 + 1;
      piVar6 = (int *)(iVar13 + iVar16 * 8);
      *piVar6 = uVar23 + 1;
      piVar6[1] = uVar22;
      iVar16 = iVar16 + 1;
      uVar22 = uVar23;
      goto LAB_016eb380;
    }
    if ((uVar1 | uVar22) != 0xffffffff) goto LAB_016eb4b0;
  }
  uVar20 = uVar20 + 6;
  if (uVar20 == 0x18) {
    if ((uVar18 ^ 0xd800) - 0x110000 < 0xffef0800) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d130a0);
    }
    if ((uVar22 ^ 0xd800) - 0x110000 < 0xffef0800) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d130b0);
    }
    if (uVar18 < 0x80) {
      local_2c = 1;
      bVar2 = 0;
      bVar25 = 0;
      bVar10 = 0;
    }
    else {
      bVar19 = (byte)uVar18 & 0x3f | 0x80;
      if (uVar18 < 0x800) {
        uVar18 = uVar18 >> 6 | 0xffffffc0;
        local_2c = 2;
        bVar2 = 0;
        bVar25 = 0;
        bVar10 = bVar19;
      }
      else {
        bVar3 = (byte)(uVar18 >> 6) & 0x3f | 0x80;
        if (uVar18 >> 0x10 == 0) {
          uVar18 = uVar18 >> 0xc | 0xffffffe0;
          local_2c = 3;
          bVar2 = 0;
          bVar25 = bVar19;
          bVar10 = bVar3;
        }
        else {
          bVar10 = (byte)(uVar18 >> 0xc) & 0x3f | 0x80;
          uVar18 = uVar18 >> 0x12 | 0xfffffff0;
          local_2c = 4;
          bVar2 = bVar19;
          bVar25 = bVar3;
        }
      }
    }
    bVar3 = (byte)uVar18;
    bVar11 = (byte)uVar22 & 0x3f | 0x80;
    bVar19 = (byte)(uVar22 >> 6);
    if (uVar22 >> 0xb == 0) {
      bVar19 = bVar19 | 0xc0;
      local_28 = 2;
      bVar12 = 0;
      bVar14 = bVar11;
      bVar11 = 0;
    }
    else {
      bVar7 = bVar19 & 0x3f | 0x80;
      bVar19 = (byte)(uVar22 >> 0xc);
      if (uVar22 >> 0x10 == 0) {
        bVar19 = bVar19 | 0xe0;
        local_28 = 3;
        bVar12 = bVar11;
        bVar14 = bVar7;
        bVar11 = 0;
      }
      else {
        bVar14 = bVar19 & 0x3f | 0x80;
        bVar19 = (byte)(uVar22 >> 0x12) | 0xf0;
        local_28 = 4;
        bVar12 = bVar7;
      }
    }
    if (local_2c != local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_01304210(0,&local_2c,&local_28,0);
    }
    if (local_2c == 2) {
      uVar24 = 1;
      pbVar9 = local_32 + 4;
      pbVar15 = local_32 + 5;
      puVar4 = &local_2c;
      puVar17 = &local_28;
      local_2c._0_1_ = 2;
      bVar2 = bVar10;
      bVar12 = bVar14;
    }
    else {
      local_2c._0_1_ = bVar19;
      if (local_2c == 3) {
        local_28 = uVar18 & 0xff;
        uVar24 = 2;
        pbVar9 = local_32 + 2;
        pbVar15 = local_32 + 3;
        puVar4 = (uint *)(local_32 + 4);
        puVar17 = (uint *)(local_32 + 5);
        bVar2 = bVar25;
        bVar3 = bVar10;
        bVar19 = bVar14;
      }
      else {
        pbVar9 = local_32;
        pbVar15 = local_32 + 1;
        puVar4 = (uint *)(local_32 + 2);
        puVar17 = (uint *)(local_32 + 3);
        uVar24 = 3;
        local_28 = uVar18 & 0xff;
        bVar3 = bVar25;
        bVar19 = bVar12;
        bVar12 = bVar11;
        local_2e[0] = bVar14;
        local_2e[1] = bVar10;
      }
    }
    *pbVar15 = bVar2;
    *(byte *)puVar17 = bVar3;
    *(byte *)puVar4 = bVar19;
    *pbVar9 = bVar12;
    param_1[1] = (undefined1)local_28;
    *param_1 = uVar24;
    param_1[2] = (byte)local_2c;
    param_1[3] = local_2e[1];
    param_1[4] = local_2e[0];
    param_1[5] = local_30[1];
    param_1[6] = local_30[0];
    param_1[7] = local_32[1];
    param_1[8] = local_32[0];
    return;
  }
  goto LAB_016eb438;
LAB_016eb4b0:
  if (iVar16 == *param_2) {
    FUN_015f5ab8(param_2);
  }
  iVar13 = param_2[1];
  param_2[2] = iVar16 + 1;
  puVar4 = (uint *)(iVar13 + iVar16 * 8);
  *puVar4 = uVar21;
  puVar4[1] = uVar22;
  iVar16 = iVar16 + 1;
  uVar22 = uVar21 - 1;
  goto LAB_016eb380;
}

