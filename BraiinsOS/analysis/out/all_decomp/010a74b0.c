// FUN_010a74b0 @ 010a74b0 size=2228 calls_out=1 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_010a74b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,char *param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  byte *pbVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  byte *pbVar17;
  undefined4 uVar18;
  int iVar19;
  uint *puVar20;
  undefined4 *puVar21;
  uint *puVar22;
  uint *puVar23;
  undefined4 *puVar24;
  bool bVar25;
  uint *local_30;
  
  puVar13 = (uint *)param_3[1];
  puVar23 = (uint *)param_3[2];
  puVar24 = (undefined4 *)*param_2;
  iVar19 = 0;
  uVar11 = param_2[1];
  *(undefined1 *)(param_1 + 1) = 5;
  *param_1 = 2;
  if (puVar13 <= puVar23) {
LAB_010a7c74:
    *param_1 = 1;
    param_2[1] = iVar19;
    return;
  }
  cVar1 = *param_4;
  puVar21 = puVar24 + uVar11 * 4;
  bVar2 = param_4[1];
  bVar3 = param_4[2];
  cVar4 = param_4[3];
  puVar6 = puVar23;
  local_30 = (uint *)*param_3;
LAB_010a7534:
  puVar7 = puVar6;
  do {
    puVar6 = (uint *)((int)puVar7 + 1);
    uVar12 = (uint)(byte)*puVar7;
    param_3[2] = puVar6;
    if (uVar12 == 10) {
LAB_010a7cc4:
      *param_1 = 0;
      param_1[1] = (int)puVar6 - (int)puVar23;
      param_2[1] = iVar19;
      return;
    }
    if (uVar12 == 0xd) {
      uVar18 = 1;
      if (puVar6 < puVar13) {
        bVar2 = *(byte *)((int)puVar7 + 1);
        puVar6 = (uint *)((int)puVar7 + 2);
        param_3[2] = puVar6;
        if (bVar2 == 10) goto LAB_010a7cc4;
        uVar18 = 2;
        *(undefined1 *)(param_1 + 1) = 2;
      }
      *param_1 = uVar18;
      param_2[1] = iVar19;
      return;
    }
    if (""[uVar12] == '\0') {
      if (((bVar3 & iVar19 == 0) == 0) || (!(uVar12 == 0x20 || uVar12 == 9))) {
        if (cVar4 == '\0') {
LAB_010a7c88:
          *param_1 = 2;
          *(undefined1 *)(param_1 + 1) = 0;
          param_2[1] = iVar19;
          return;
        }
        while( true ) {
          if (uVar12 == 0) goto LAB_010a7c88;
          if (uVar12 == 10) goto LAB_010a7a6c;
          if (uVar12 == 0xd) break;
          if (puVar13 <= puVar6) goto LAB_010a7c74;
          uVar12 = (uint)(byte)*puVar6;
          param_3[2] = (uint *)((int)puVar6 + 1);
          puVar6 = (uint *)((int)puVar6 + 1);
        }
        if (puVar13 <= puVar6) goto LAB_010a7c74;
        bVar10 = (byte)*puVar6;
        param_3[2] = (uint *)((int)puVar6 + 1);
        puVar6 = (uint *)((int)puVar6 + 1);
joined_r0x010a7a68:
        if (bVar10 != 10) {
          uVar5 = 0;
          goto LAB_010a7ce4;
        }
      }
      else if (puVar6 < puVar13) {
        pbVar9 = (byte *)((int)puVar13 + (-1 - (int)puVar7));
        do {
          if ((byte)*puVar6 != 0x20 && (byte)*puVar6 != 9) break;
          puVar6 = (uint *)((int)puVar6 + 1);
          pbVar9 = pbVar9 + -1;
          param_3[2] = puVar6;
        } while (pbVar9 != (byte *)0x0);
      }
    }
    else {
      uVar12 = (int)puVar13 - (int)puVar6;
      if (3 < uVar12) {
        puVar7 = (uint *)((int)puVar7 + 5);
        do {
          puVar6 = puVar7;
          uVar14 = puVar6[-1];
          if (""[uVar14 & 0xff] != '\x01') {
            iVar16 = 0;
LAB_010a76ec:
            puVar7 = (uint *)((int)puVar6 + iVar16 + -4);
            param_3[2] = puVar7;
            goto joined_r0x010a7718;
          }
          if (""[(uVar14 & 0xffff) >> 8] != '\x01') {
            iVar16 = 1;
            goto LAB_010a76ec;
          }
          if (""[uVar14 >> 0x10 & 0xff] != '\x01') {
            iVar16 = 2;
            goto LAB_010a76ec;
          }
          if (""[uVar14 >> 0x18] == '\0') {
            puVar7 = (uint *)((int)puVar6 + -1);
            param_3[2] = puVar7;
            goto joined_r0x010a7718;
          }
          param_3[2] = puVar6;
          uVar12 = uVar12 - 4;
          puVar7 = puVar6 + 1;
        } while (3 < uVar12);
      }
      uVar14 = 0;
      do {
        uVar15 = uVar14;
        if ((uint *)((int)puVar6 + uVar15) == puVar13) goto LAB_010a7604;
        uVar14 = uVar15 + 1;
      } while (""[(byte)*(uint *)((int)puVar6 + uVar15)] != '\0');
      uVar12 = uVar15;
LAB_010a7604:
      puVar7 = (uint *)((int)puVar6 + uVar12);
      param_3[2] = puVar7;
joined_r0x010a7718:
      if (puVar13 <= puVar7) goto LAB_010a7c74;
      puVar6 = (uint *)((int)puVar7 + 1);
      bVar10 = (byte)*puVar7;
      *param_3 = puVar6;
      param_3[2] = puVar6;
      puVar20 = puVar6;
      puVar22 = puVar6;
      if (bVar10 == 0x3a) goto joined_r0x010a7744;
      if (cVar1 == '\0') {
LAB_010a7834:
        if (cVar4 == '\0') goto LAB_010a7c88;
        while( true ) {
          if (bVar10 == 0) goto LAB_010a7c88;
          if (bVar10 == 10) goto LAB_010a7a6c;
          if (bVar10 == 0xd) break;
          if (puVar13 <= puVar6) goto LAB_010a7c74;
          bVar10 = (byte)*puVar6;
          param_3[2] = (uint *)((int)puVar6 + 1);
          puVar6 = (uint *)((int)puVar6 + 1);
        }
        if (puVar6 < puVar13) {
          bVar10 = (byte)*puVar6;
          param_3[2] = (uint *)((int)puVar6 + 1);
          puVar6 = (uint *)((int)puVar6 + 1);
          goto joined_r0x010a7a68;
        }
        goto LAB_010a7c74;
      }
      do {
        if (bVar10 != 0x20 && bVar10 != 9) goto LAB_010a7834;
        if (puVar13 <= puVar6) goto LAB_010a7c74;
        puVar20 = (uint *)((int)puVar6 + 1);
        bVar10 = (byte)*puVar6;
        param_3[2] = puVar20;
        puVar6 = puVar20;
      } while (bVar10 != 0x3a);
      *param_3 = puVar20;
      puVar22 = puVar20;
      if (puVar13 <= puVar20) goto LAB_010a7c74;
      while( true ) {
        puVar6 = (uint *)((int)puVar20 + 1);
        uVar12 = (uint)(byte)*puVar20;
        param_3[2] = puVar6;
        if (uVar12 != 0x20 && uVar12 != 9) break;
        *param_3 = puVar6;
        puVar20 = puVar6;
        puVar22 = puVar6;
joined_r0x010a7744:
        if (puVar13 <= puVar20) goto LAB_010a7c74;
      }
      if ((&DAT_003863b5)[uVar12] != '\x01') {
        if (uVar12 != 10) {
          if (uVar12 != 0xd) {
            if (cVar4 != '\0') goto joined_r0x010a7a98;
            goto LAB_010a7d14;
          }
          if (puVar13 <= puVar6) goto LAB_010a7c74;
          bVar10 = *(byte *)((int)puVar20 + 1);
          puVar6 = (uint *)((int)puVar20 + 2);
          param_3[2] = puVar6;
          if (bVar10 != 10) goto LAB_010a7ce0;
        }
        if ((bVar2 & 1) != 0) {
          if (puVar13 <= puVar6) goto LAB_010a7c74;
          puVar20 = puVar6;
          if ((byte)*puVar6 == 9 || (byte)*puVar6 == 0x20) goto joined_r0x010a7744;
        }
        *param_3 = puVar6;
        if (puVar24 == puVar21) goto LAB_010a7d38;
        pbVar17 = (byte *)0x0;
        iVar8 = (int)puVar7 - (int)local_30;
        goto LAB_010a7b70;
      }
      puVar20 = puVar6;
      if ((bVar2 & 1) != 0) {
LAB_010a788c:
        do {
          puVar20 = puVar6;
          if (3 < (uint)((int)puVar13 - (int)puVar6)) {
            uVar12 = *puVar6;
            uVar12 = uVar12 + 0x1010101 | uVar12 + 0xdfdfdfe0 | uVar12;
            if ((uVar12 & 0x80808080) == 0) {
              puVar6 = puVar6 + 1;
              param_3[2] = puVar6;
              goto LAB_010a788c;
            }
            bVar25 = (uVar12 & 0x80) == 0;
            uVar14 = (uint)bVar25;
            if ((bVar25 && (uVar12 & 0x8000) == 0) && (uVar14 = 2, (uVar12 & 0x800000) == 0)) {
              uVar14 = 3;
            }
            puVar20 = (uint *)((int)puVar6 + uVar14);
            param_3[2] = puVar20;
          }
          if (puVar13 <= puVar20) goto LAB_010a7c74;
          puVar6 = (uint *)((int)puVar20 + 1);
          uVar12 = (uint)(byte)*puVar20;
          if ((&DAT_003863b5)[uVar12] == '\0') {
            iVar16 = -1;
            param_3[2] = puVar6;
            if (uVar12 != 10) {
              if (uVar12 != 0xd) goto LAB_010a7ae0;
              if (puVar13 <= puVar6) goto LAB_010a7c74;
              bVar10 = *(byte *)((int)puVar20 + 1);
              puVar6 = (uint *)((int)puVar20 + 2);
              iVar16 = -2;
              param_3[2] = puVar6;
              if (bVar10 != 10) goto LAB_010a7ce0;
            }
            if (puVar13 <= puVar6) goto LAB_010a7c74;
            if (((byte)*puVar6 != 9) && ((byte)*puVar6 != 0x20)) goto LAB_010a7bd8;
            goto LAB_010a788c;
          }
          param_3[2] = puVar6;
        } while( true );
      }
joined_r0x010a7998:
      while (3 < (uint)((int)puVar13 - (int)puVar20)) {
        uVar12 = *puVar20;
        uVar12 = uVar12 + 0x1010101 | uVar12 + 0xdfdfdfe0 | uVar12;
        if ((uVar12 & 0x80808080) != 0) {
          bVar25 = (uVar12 & 0x80) == 0;
          if (bVar25 && (uVar12 & 0x8000) == 0) {
            iVar16 = 2;
            if ((uVar12 & 0x800000) == 0) {
              iVar16 = 3;
            }
            puVar20 = (uint *)((int)puVar20 + iVar16);
            param_3[2] = puVar20;
          }
          else {
            puVar20 = (uint *)((int)puVar20 + (uint)bVar25);
            param_3[2] = puVar20;
          }
          break;
        }
        puVar20 = (uint *)((int)puVar20 + 4);
        param_3[2] = puVar20;
      }
      if (puVar13 <= puVar20) goto LAB_010a7c74;
      puVar6 = (uint *)((int)puVar20 + 1);
      uVar12 = (uint)(byte)*puVar20;
      if ((&DAT_003863b5)[uVar12] != '\0') {
        param_3[2] = puVar6;
        puVar20 = puVar6;
        goto joined_r0x010a7998;
      }
      param_3[2] = puVar6;
      if (uVar12 == 10) {
        iVar16 = -1;
        goto LAB_010a7bd8;
      }
      if (uVar12 == 0xd) break;
LAB_010a7ae0:
      if (cVar4 == '\0') {
LAB_010a7d14:
        *param_1 = 2;
        *(undefined1 *)(param_1 + 1) = 1;
        param_2[1] = iVar19;
        return;
      }
      while( true ) {
        if (uVar12 == 0) goto LAB_010a7d14;
        if (uVar12 == 10) goto LAB_010a7a6c;
        puVar7 = puVar6;
        if (uVar12 == 0xd) break;
        if (puVar13 <= puVar6) goto LAB_010a7c74;
        uVar12 = (uint)(byte)*puVar6;
        param_3[2] = (uint *)((int)puVar6 + 1);
        puVar6 = (uint *)((int)puVar6 + 1);
      }
LAB_010a7b30:
      if (puVar13 <= puVar7) goto LAB_010a7c74;
      puVar6 = (uint *)((int)puVar7 + 1);
      uVar12 = *puVar7;
      param_3[2] = puVar6;
      if ((byte)uVar12 != 10) goto LAB_010a7ce0;
    }
LAB_010a7a6c:
    *param_3 = puVar6;
    puVar7 = puVar6;
    local_30 = puVar6;
    if (puVar13 <= puVar6) goto LAB_010a7c74;
  } while( true );
  if (puVar13 <= puVar6) goto LAB_010a7c74;
  bVar10 = *(byte *)((int)puVar20 + 1);
  puVar6 = (uint *)((int)puVar20 + 2);
  param_3[2] = puVar6;
  if (bVar10 != 10) {
LAB_010a7ce0:
    uVar5 = 1;
LAB_010a7ce4:
    *(undefined1 *)(param_1 + 1) = uVar5;
    *param_1 = 2;
    param_2[1] = iVar19;
    return;
  }
  iVar16 = -2;
LAB_010a7bd8:
  iVar8 = (int)puVar7 - (int)local_30;
  *param_3 = puVar6;
  if (puVar24 == puVar21) {
LAB_010a7d38:
    param_2[1] = uVar11 & 0xfffffff;
    return;
  }
  pbVar17 = (byte *)((int)puVar6 + (iVar16 - (int)puVar22));
  pbVar9 = pbVar17;
  if (pbVar17 == (byte *)0x0) {
    pbVar17 = (byte *)0x0;
  }
  else {
    do {
      uVar12 = *(byte *)((int)puVar22 + (int)(pbVar9 + -1)) - 9;
      if ((0x17 < uVar12) || ((1 << (uVar12 & 0xff) & 0x800013U) == 0)) {
        if (pbVar17 < pbVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,pbVar9,pbVar17,&DAT_018845bc);
        }
        pbVar17 = pbVar9;
        break;
      }
      pbVar9 = pbVar9 + -1;
    } while (pbVar9 != (byte *)0x0);
  }
LAB_010a7b70:
  iVar19 = iVar19 + 1;
  *puVar24 = local_30;
  puVar24[1] = iVar8;
  puVar24[2] = puVar22;
  puVar24[3] = pbVar17;
  puVar24 = puVar24 + 4;
  local_30 = puVar6;
  if (puVar13 <= puVar6) goto LAB_010a7c74;
  goto LAB_010a7534;
joined_r0x010a7a98:
  if (uVar12 == 0) goto LAB_010a7d14;
  if (uVar12 == 10) goto LAB_010a7a6c;
  puVar7 = puVar6;
  if (uVar12 == 0xd) goto LAB_010a7b30;
  if (puVar13 <= puVar6) goto LAB_010a7c74;
  uVar12 = (uint)(byte)*puVar6;
  param_3[2] = (uint *)((int)puVar6 + 1);
  puVar6 = (uint *)((int)puVar6 + 1);
  goto joined_r0x010a7a98;
}

