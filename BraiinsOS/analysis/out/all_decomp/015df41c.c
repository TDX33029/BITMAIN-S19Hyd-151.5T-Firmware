// FUN_015df41c @ 015df41c size=928 calls_out=4 calls_in=1
// strings: 

void FUN_015df41c(undefined1 *param_1,undefined4 *param_2)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  byte bVar7;
  undefined2 *puVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  undefined2 uVar17;
  uint uVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar22;
  byte *pbVar21;
  uint uVar23;
  ushort local_5c;
  uint local_58;
  byte *local_54;
  uint local_30;
  int local_2c;
  uint local_28;
  
  pbVar19 = (byte *)*param_2;
  if (param_2[1] == 0) {
    *(byte **)(param_1 + 4) = pbVar19;
    *(undefined4 *)(param_1 + 0xc) = 0;
    uVar6 = 0x13;
    *(byte **)(param_1 + 8) = pbVar19;
LAB_015df6ac:
    *param_1 = uVar6;
    return;
  }
  pbVar20 = pbVar19 + 1;
  uVar11 = (uint)*pbVar19;
  pbVar19 = (byte *)(param_2[1] + -1);
  *param_2 = pbVar20;
  param_2[1] = pbVar19;
  if (uVar11 == 0) {
    local_28 = 0;
    local_2c = 2;
    local_30 = 0;
  }
  else {
    iVar3 = thunk_FUN_016d4a50(uVar11 << 2);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(2,uVar11 << 2);
    }
    local_28 = 0;
    iVar9 = 0;
    local_30 = uVar11;
    local_2c = iVar3;
    do {
      uVar1 = local_28;
      if (pbVar19 == (byte *)0x0) {
        bVar7 = 0;
LAB_015df720:
        local_58 = 0;
        uVar6 = 0x13;
        local_54 = pbVar20;
LAB_015df72c:
        param_1[1] = bVar7;
        *param_1 = uVar6;
        *(byte **)(param_1 + 4) = local_54;
        *(byte **)(param_1 + 8) = local_54;
        *(uint *)(param_1 + 0xc) = local_58;
        goto joined_r0x015df7a4;
      }
      pbVar14 = (byte *)0x0;
      uVar16 = 0;
      uVar15 = 0;
      uVar4 = local_28 + 1;
      pbVar13 = pbVar19;
      pbVar22 = pbVar20;
      while( true ) {
        pbVar21 = pbVar22 + 1;
        bVar7 = *pbVar22;
        pbVar10 = pbVar13 + -1;
        if ((uVar15 == 0x3f) && (1 < bVar7)) {
          bVar7 = 0;
          *param_2 = pbVar21;
          param_2[1] = pbVar10;
          uVar6 = 6;
          goto LAB_015df72c;
        }
        uVar12 = uVar15 & 0x3f;
        uVar5 = bVar7 & 0x7f;
        uVar23 = uVar12 - 0x20;
        uVar18 = uVar5 << uVar12;
        if (-1 < (int)uVar23) {
          uVar18 = 0;
        }
        pbVar14 = (byte *)(uVar18 | (uint)pbVar14);
        uVar18 = uVar5 >> (0x20 - uVar12 & 0xff);
        if (-1 < (int)uVar23) {
          uVar18 = uVar5 << (uVar23 & 0xff);
        }
        uVar16 = uVar18 | uVar16;
        if ((uint)(int)(char)bVar7 < 0x80000000) break;
        uVar15 = uVar15 + 7;
        pbVar13 = pbVar10;
        pbVar22 = pbVar21;
        if (pbVar10 == (byte *)0x0) {
          pbVar20 = pbVar20 + (int)pbVar19;
          *param_2 = pbVar20;
          param_2[1] = 0;
          goto LAB_015df720;
        }
      }
      pbVar19 = &DAT_0000ffff;
      if (pbVar14 < &DAT_0000ffff) {
        pbVar19 = pbVar14;
      }
      uVar17 = SUB42(pbVar19,0);
      if (uVar16 != 0) {
        uVar17 = 0xffff;
      }
      *param_2 = pbVar21;
      param_2[1] = pbVar10;
      if (pbVar10 == (byte *)0x0) {
        uVar6 = 0x13;
LAB_015df780:
        *(byte **)(param_1 + 4) = pbVar21;
        *(byte **)(param_1 + 8) = pbVar21;
        *(undefined4 *)(param_1 + 0xc) = 0;
        *(ushort *)(param_1 + 2) = local_5c;
        *param_1 = uVar6;
        goto joined_r0x015df7a4;
      }
      bVar7 = pbVar22[1];
      pbVar20 = pbVar22 + 2;
      pbVar19 = pbVar13 + -2;
      *param_2 = pbVar20;
      uVar2 = bVar7 & 0x7f;
      param_2[1] = pbVar19;
      if ((char)bVar7 < '\0') {
        if (pbVar19 == (byte *)0x0) {
LAB_015df770:
          uVar6 = 0x13;
          pbVar21 = pbVar20;
          goto LAB_015df780;
        }
        bVar7 = pbVar22[2];
        pbVar20 = pbVar22 + 3;
        pbVar21 = pbVar13 + -3;
        *param_2 = pbVar20;
        param_2[1] = pbVar21;
        uVar2 = uVar2 | (bVar7 & 0x7f) << 7;
        if ((char)bVar7 < '\0') {
          if (pbVar21 == (byte *)0x0) goto LAB_015df770;
          bVar7 = pbVar22[3];
          pbVar19 = pbVar13 + -4;
          pbVar20 = pbVar22 + 4;
          param_2[1] = pbVar19;
          *param_2 = pbVar20;
          if (3 < bVar7) {
            uVar6 = 6;
            goto LAB_015df780;
          }
          local_5c = uVar2 | (ushort)bVar7 << 0xe;
        }
        else {
          pbVar19 = pbVar21;
          local_5c = uVar2;
        }
      }
      else {
        local_5c = uVar2;
      }
      if (local_28 == local_30) {
        FUN_015e08e0(&local_30);
        iVar3 = local_2c;
      }
      iVar9 = iVar9 + (uint)((uVar16 == 0 && (&DAT_0000ffff < pbVar14) <= uVar16) &&
                            ((uint)pbVar14 & 0xffff) == 1);
      puVar8 = (undefined2 *)(iVar3 + uVar1 * 4);
      *puVar8 = uVar17;
      puVar8[1] = local_5c;
      local_58 = uVar16;
      local_54 = pbVar14;
      local_28 = uVar4;
    } while (uVar4 != uVar11);
    if (iVar9 == 1) {
      *(int *)(param_1 + 8) = local_2c;
      uVar6 = 0x52;
      *(uint *)(param_1 + 4) = local_30;
      *(uint *)(param_1 + 0xc) = uVar4;
      goto LAB_015df6ac;
    }
  }
  *param_1 = 0x47;
joined_r0x015df7a4:
  if (local_30 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(local_2c);
  return;
}

