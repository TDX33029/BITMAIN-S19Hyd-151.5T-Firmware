// FUN_01416510 @ 01416510 size=1924 calls_out=2 calls_in=3
// strings: internal error: entered unreachable code

void FUN_01416510(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,char *param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  byte bVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  int iVar20;
  uint *puVar21;
  uint uVar22;
  byte *pbVar23;
  byte *pbVar24;
  uint *puVar25;
  int local_5c;
  uint local_2c;
  uint local_28;
  
  puVar15 = (uint *)param_3[1];
  puVar16 = (uint *)param_3[2];
  puVar10 = (undefined4 *)*param_2;
  uVar12 = param_2[1];
  *(undefined1 *)(param_1 + 1) = 5;
  uVar22 = 0;
  *param_1 = 2;
  if (puVar15 <= puVar16) {
LAB_01416b70:
    uVar8 = 1;
LAB_01416b74:
    *param_1 = uVar8;
LAB_01416bac:
    param_2[1] = uVar22;
    return;
  }
  puVar6 = puVar10 + uVar12 * 4;
  cVar1 = *param_4;
  cVar2 = param_4[1];
  cVar3 = param_4[3];
  bVar4 = param_4[2];
  puVar19 = puVar16;
  puVar21 = (uint *)*param_3;
LAB_01416590:
LAB_014165a8:
  puVar11 = (uint *)((int)puVar19 + 1);
  uVar13 = (uint)(byte)*puVar19;
  param_3[2] = puVar11;
  if (uVar13 == 10) {
    iVar7 = (int)puVar11 - (int)puVar16;
LAB_01416bc0:
    *param_1 = 0;
    param_1[1] = iVar7;
  }
  else {
    if (uVar13 != 0xd) {
      if (""[uVar13] != '\0') {
        while (3 < (uint)((int)puVar15 - (int)puVar11)) {
          local_2c = *puVar11;
          uVar13 = 0;
          while (uVar14 = uVar13, uVar14 != 4) {
            uVar13 = uVar14 + 1;
            if (""[*(byte *)((int)&local_2c + uVar14)] == '\0') goto LAB_0141660c;
          }
          puVar11 = puVar11 + 1;
          param_3[2] = puVar11;
        }
        uVar13 = 0;
        do {
          uVar17 = uVar13;
          uVar14 = (int)puVar15 - (int)puVar11;
          if ((uint *)((int)puVar11 + uVar17) == puVar15) goto LAB_0141660c;
          uVar13 = uVar17 + 1;
        } while (""[(byte)*(uint *)((int)puVar11 + uVar17)] != '\0');
        uVar14 = uVar17;
LAB_0141660c:
        puVar11 = (uint *)((int)puVar11 + uVar14);
        param_3[2] = puVar11;
        if (puVar15 <= puVar11) {
LAB_01416ba0:
          *param_1 = 1;
          goto LAB_01416ba8;
        }
        puVar18 = (uint *)((int)puVar11 + 1);
        bVar9 = (byte)*puVar11;
        param_3[2] = puVar18;
        *param_3 = puVar18;
        if (bVar9 != 0x3a) {
          puVar19 = puVar18;
          if (cVar1 == '\0') {
LAB_01416808:
            if (cVar3 == '\0') goto LAB_01416b8c;
            while( true ) {
              if (bVar9 == 0) goto LAB_01416b8c;
              if (bVar9 == 10) goto LAB_014169a0;
              if (bVar9 == 0xd) break;
              if (puVar15 <= puVar19) goto LAB_01416b70;
              bVar9 = (byte)*puVar19;
              param_3[2] = (uint *)((int)puVar19 + 1);
              puVar19 = (uint *)((int)puVar19 + 1);
            }
            if (puVar19 < puVar15) {
              uVar13 = *puVar19;
              param_3[2] = (uint *)((int)puVar19 + 1);
              puVar19 = (uint *)((int)puVar19 + 1);
              if ((byte)uVar13 != 10) goto LAB_01416c2c;
              goto LAB_014169a0;
            }
            goto LAB_01416b70;
          }
          do {
            if (bVar9 != 0x20 && bVar9 != 9) goto LAB_01416808;
            if (puVar15 <= puVar19) goto LAB_01416ba0;
            puVar18 = (uint *)((int)puVar19 + 1);
            bVar9 = (byte)*puVar19;
            param_3[2] = puVar18;
            puVar19 = puVar18;
          } while (bVar9 != 0x3a);
          *param_3 = puVar18;
        }
        puVar25 = puVar18;
        if (puVar18 < puVar15) {
          while( true ) {
            puVar19 = (uint *)((int)puVar18 + 1);
            uVar13 = (uint)(byte)*puVar18;
            param_3[2] = puVar19;
            if (uVar13 != 9 && uVar13 != 0x20) break;
            *param_3 = puVar19;
            puVar18 = puVar19;
            puVar25 = puVar19;
LAB_014166d4:
            if (puVar15 <= puVar18) goto LAB_01416b7c;
          }
          if (""[uVar13] != '\x01') {
            if (uVar13 != 10) {
              if (uVar13 != 0xd) {
                if (cVar3 == '\0') goto LAB_01416c1c;
                goto LAB_014169cc;
              }
              if (puVar15 <= puVar19) goto LAB_01416b7c;
              bVar9 = *(byte *)((int)puVar18 + 1);
              puVar19 = (uint *)((int)puVar18 + 2);
              param_3[2] = puVar19;
              if (bVar9 != 10) goto LAB_01416bfc;
            }
            if (cVar2 != '\0') {
              if (puVar15 <= puVar19) goto LAB_01416b7c;
              puVar18 = puVar19;
              if ((byte)*puVar19 == 9 || (byte)*puVar19 == 0x20) goto LAB_014166d4;
            }
            *param_3 = puVar19;
            if (puVar10 == puVar6) goto LAB_01416c3c;
            iVar7 = (int)puVar11 - (int)puVar21;
            pbVar23 = (byte *)0x0;
            goto LAB_01416aa8;
          }
          puVar18 = puVar19;
LAB_0141686c:
          while (3 < (uint)((int)puVar15 - (int)puVar18)) {
            uVar13 = *puVar18;
            uVar13 = (uVar13 + 0xdfdfdfe0 | uVar13 + 0x1010101 | uVar13) & 0x80808080;
            if (uVar13 != 0) {
              local_28 = uVar13;
              iVar7 = 0;
              do {
                iVar20 = iVar7;
                if (iVar20 == 4) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf4354);
                }
                iVar7 = iVar20 + 1;
              } while (*(char *)((int)&local_28 + iVar20) == '\0');
              puVar18 = (uint *)((int)puVar18 + iVar20);
              param_3[2] = puVar18;
              break;
            }
            puVar19 = puVar18 + 1;
LAB_01416900:
            param_3[2] = puVar19;
            puVar18 = puVar19;
          }
          if (puVar15 <= puVar18) goto LAB_01416b7c;
          puVar19 = (uint *)((int)puVar18 + 1);
          uVar13 = (uint)(byte)*puVar18;
          if (""[uVar13] != '\0') goto LAB_01416900;
          param_3[2] = puVar19;
          if (uVar13 == 10) {
            local_5c = -1;
          }
          else {
            if (uVar13 != 0xd) goto LAB_01416a1c;
            if (puVar15 <= puVar19) goto LAB_01416b7c;
            bVar9 = *(byte *)((int)puVar18 + 1);
            puVar19 = (uint *)((int)puVar18 + 2);
            param_3[2] = puVar19;
            local_5c = -2;
            if (bVar9 != 10) goto LAB_01416bfc;
          }
          if (cVar2 == '\0') goto LAB_01416ad4;
          if (puVar19 < puVar15) goto code_r0x0141696c;
        }
        goto LAB_01416b7c;
      }
      if (((bVar4 & uVar22 == 0) != 0) && (uVar13 == 0x20 || uVar13 == 9)) {
        if (puVar11 < puVar15) {
          pbVar23 = (byte *)((int)puVar15 + (-1 - (int)puVar19));
          puVar19 = puVar11;
          do {
            if ((byte)*puVar19 != 0x20 && (byte)*puVar19 != 9) break;
            puVar19 = (uint *)((int)puVar19 + 1);
            pbVar23 = pbVar23 + -1;
            param_3[2] = puVar19;
          } while (pbVar23 != (byte *)0x0);
        }
        else {
LAB_01416800:
          puVar19 = puVar11;
        }
        goto LAB_014169a0;
      }
      if (cVar3 == '\0') {
LAB_01416b8c:
        *param_1 = 2;
        uVar5 = 0;
        goto LAB_01416b98;
      }
      while( true ) {
        if (uVar13 == 0) goto LAB_01416b8c;
        if (uVar13 == 10) goto LAB_01416800;
        if (uVar13 == 0xd) break;
        if (puVar15 <= puVar11) goto LAB_01416b70;
        uVar13 = (uint)(byte)*puVar11;
        param_3[2] = (uint *)((int)puVar11 + 1);
        puVar11 = (uint *)((int)puVar11 + 1);
      }
      if (puVar11 < puVar15) {
        puVar19 = (uint *)((int)puVar11 + 1);
        uVar13 = *puVar11;
        param_3[2] = puVar19;
        if ((byte)uVar13 == 10) goto LAB_014169a0;
LAB_01416c2c:
        uVar5 = 0;
        goto LAB_01416c30;
      }
      goto LAB_01416b70;
    }
    uVar8 = 1;
    if (puVar11 < puVar15) {
      bVar4 = *(byte *)((int)puVar19 + 1);
      param_3[2] = (byte *)((int)puVar19 + 2);
      if (bVar4 == 10) {
        iVar7 = ((int)puVar19 + 2) - (int)puVar16;
        goto LAB_01416bc0;
      }
      uVar8 = 2;
      *(undefined1 *)(param_1 + 1) = 2;
    }
    *param_1 = uVar8;
  }
  goto LAB_01416bac;
LAB_014169cc:
  if (uVar13 == 0) goto LAB_01416c1c;
  if (uVar13 == 10) goto LAB_014169a0;
  if (uVar13 == 0xd) goto LAB_014169fc;
  if (puVar15 <= puVar19) goto LAB_01416b70;
  uVar13 = (uint)(byte)*puVar19;
  param_3[2] = (uint *)((int)puVar19 + 1);
  puVar19 = (uint *)((int)puVar19 + 1);
  goto LAB_014169cc;
LAB_014169fc:
  if (puVar15 <= puVar19) goto LAB_01416b70;
  uVar13 = *puVar19;
  param_3[2] = (uint *)((int)puVar19 + 1);
  puVar19 = (uint *)((int)puVar19 + 1);
  if ((byte)uVar13 != 10) {
    uVar5 = 1;
LAB_01416c30:
    *(undefined1 *)(param_1 + 1) = uVar5;
    uVar8 = 2;
    goto LAB_01416b74;
  }
LAB_014169a0:
  *param_3 = puVar19;
  puVar21 = puVar19;
  if (puVar15 <= puVar19) goto LAB_01416b70;
  goto LAB_014165a8;
LAB_01416c1c:
  *param_1 = 2;
  uVar5 = 1;
LAB_01416b98:
  *(undefined1 *)(param_1 + 1) = uVar5;
  goto LAB_01416bac;
LAB_01416a1c:
  puVar21 = puVar19;
  if (cVar3 == '\0') {
LAB_01416c48:
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    while( true ) {
      if (uVar13 == 0) goto LAB_01416c48;
      if (uVar13 == 10) {
        puVar19 = puVar21;
        goto LAB_014169a0;
      }
      if (uVar13 == 0xd) break;
      if (puVar15 <= puVar21) goto LAB_01416b7c;
      uVar13 = (uint)(byte)*puVar21;
      param_3[2] = (uint *)((int)puVar21 + 1);
      puVar21 = (uint *)((int)puVar21 + 1);
    }
    if (puVar21 < puVar15) {
      puVar19 = (uint *)((int)puVar21 + 1);
      uVar13 = *puVar21;
      param_3[2] = puVar19;
      if ((byte)uVar13 == 10) goto LAB_014169a0;
LAB_01416bfc:
      *(undefined1 *)(param_1 + 1) = 1;
      uVar8 = 2;
    }
    else {
LAB_01416b7c:
      uVar8 = 1;
    }
    *param_1 = uVar8;
  }
LAB_01416ba8:
  goto LAB_01416bac;
code_r0x0141696c:
  puVar18 = puVar19;
  if (((byte)*puVar19 != 9) && ((byte)*puVar19 != 0x20)) {
LAB_01416ad4:
    *param_3 = puVar19;
    if (puVar10 == puVar6) goto LAB_01416c3c;
    iVar7 = (int)puVar11 - (int)puVar21;
    pbVar23 = (byte *)((int)puVar19 + (local_5c - (int)puVar25));
    pbVar24 = pbVar23;
    if (pbVar23 != (byte *)0x0) goto LAB_01416b0c;
    pbVar24 = (byte *)0x0;
    goto LAB_01416b60;
  }
  goto LAB_0141686c;
LAB_01416c3c:
  uVar22 = uVar12 & 0xfffffff;
  goto LAB_01416bac;
LAB_01416b0c:
  uVar13 = *(byte *)((int)puVar25 + (int)(pbVar24 + -1)) - 9;
  if ((uVar13 < 0x18) && ((1 << (uVar13 & 0xff) & 0x800013U) != 0)) goto code_r0x01416b34;
  if (pbVar23 < pbVar24) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,pbVar24,pbVar23,&DAT_01cf4344);
  }
LAB_01416b60:
  pbVar23 = pbVar24;
LAB_01416aa8:
  puVar10[3] = pbVar23;
  puVar10[1] = iVar7;
  puVar10[2] = puVar25;
  uVar22 = uVar22 + 1;
  *puVar10 = puVar21;
  puVar10 = puVar10 + 4;
  puVar21 = puVar19;
  if (puVar15 <= puVar19) goto LAB_01416b70;
  goto LAB_01416590;
code_r0x01416b34:
  pbVar24 = pbVar24 + -1;
  if (pbVar24 == (byte *)0x0) goto LAB_01416aa8;
  goto LAB_01416b0c;
}

