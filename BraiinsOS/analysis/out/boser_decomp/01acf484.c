// FUN_01acf484 @ 01acf484 size=924 calls_out=1 calls_in=2
// strings: 

void FUN_01acf484(undefined1 *param_1,char *param_2,uint param_3)

{
  undefined1 uVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  ushort *puVar11;
  uint uVar12;
  ushort *unaff_r11;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  ushort local_38 [10];
  
  uVar14 = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  if (1 < param_3) {
    uVar12 = 0;
    if (*param_2 == ':') {
      if (param_2[1] != ':') goto LAB_01acf4ac;
      uVar12 = 2;
      uVar14 = 1;
    }
    uVar6 = 1;
    uVar15 = uVar14;
    if (param_3 <= uVar12) goto LAB_01acf6f4;
    uVar6 = 1;
    do {
      uVar13 = uVar14;
      if (uVar14 < 9) {
        uVar13 = 8;
      }
      while( true ) {
        if (uVar14 == 8) goto LAB_01acf4ac;
        if (param_2[uVar12] == ':') break;
        uVar10 = 0;
        uVar9 = 0;
        uVar3 = uVar12 + 4;
        if (param_3 <= uVar12 + 4) {
          uVar3 = param_3;
        }
        uVar5 = uVar12;
        if (uVar12 < uVar3) {
          do {
            uVar9 = (ushort)uVar10;
            uVar8 = (uint)(byte)param_2[uVar5];
            uVar4 = uVar8 - 0x30;
            if (0x39 < uVar8) {
              uVar4 = (uVar8 - 0x41 & 0xffffffdf) + 10;
            }
            if (0xf < uVar4) goto LAB_01acf580;
            uVar5 = uVar5 + 1;
            uVar10 = uVar4 | uVar10 << 4;
            uVar9 = (ushort)uVar10;
          } while (uVar3 != uVar5);
          uVar5 = uVar3;
LAB_01acf580:
          unaff_r11 = local_38;
        }
        if (uVar5 < param_3) {
          if (param_2[uVar5] != ':') {
            if ((param_2[uVar5] != '.') || (uVar5 == uVar12)) goto LAB_01acf4ac;
            bVar16 = 5 < uVar14;
            if (uVar14 < 7) {
              bVar16 = param_3 <= uVar12;
            }
            if (bVar16) goto LAB_01acf4ac;
            uVar13 = 0;
            goto LAB_01acf620;
          }
          uVar5 = uVar5 + 1;
          if (uVar5 == param_3) goto LAB_01acf4ac;
        }
        if (uVar14 == uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar13,8,&DAT_01d2fd28);
        }
        puVar11 = local_38 + uVar14;
        uVar14 = uVar14 + 1;
        *puVar11 = uVar9;
        uVar12 = uVar5;
        if (param_3 <= uVar5) {
          goto LAB_01acf6f4;
        }
      }
      if (uVar15 != 0) goto LAB_01acf4ac;
      uVar14 = uVar14 + 1;
      uVar12 = uVar12 + 1;
      uVar15 = 1;
      uVar6 = uVar14;
    } while (uVar12 < param_3);
LAB_01acf700:
    if (uVar14 != uVar6) {
      puVar11 = local_38;
      iVar7 = 0;
      do {
        if (7 < iVar7 + 7U) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(0xffffffff,8,&DAT_01d2fd38);
        }
        uVar12 = (uVar14 - 1) + iVar7;
        if (7 < uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar12,8,&DAT_01d2fd38);
        }
        puVar2 = puVar11 + (uVar14 - 1);
        iVar7 = iVar7 + -1;
        uVar9 = puVar11[7];
        puVar11[7] = *puVar2;
        puVar11 = puVar11 + -1;
        *puVar2 = uVar9;
      } while (uVar6 - uVar14 != iVar7);
    }
LAB_01acf76c:
    *(ushort *)(param_1 + 0xf) = local_38[7] << 8 | local_38[7] >> 8;
    *(ushort *)(param_1 + 0xd) = local_38[6] << 8 | local_38[6] >> 8;
    *(ushort *)(param_1 + 0xb) = local_38[5] << 8 | local_38[5] >> 8;
    *(ushort *)(param_1 + 9) = local_38[4] << 8 | local_38[4] >> 8;
    *(ushort *)(param_1 + 7) = local_38[3] << 8 | local_38[3] >> 8;
    *(ushort *)(param_1 + 5) = local_38[2] << 8 | local_38[2] >> 8;
    *(ushort *)(param_1 + 3) = local_38[1] << 8 | local_38[1] >> 8;
    *(ushort *)(param_1 + 1) = local_38[0] << 8 | local_38[0] >> 8;
    uVar1 = 0;
    goto LAB_01acf4b8;
  }
  goto LAB_01acf4ac;
LAB_01acf620:
  do {
    if (0 < (int)uVar13) {
      if ((3 < uVar13) || (param_2[uVar12] != '.')) goto LAB_01acf4ac;
      uVar12 = uVar12 + 1;
    }
    if (param_3 <= uVar12) goto LAB_01acf4ac;
    bVar16 = false;
    do {
      puVar11 = (ushort *)((byte)param_2[uVar12] - 0x30 & 0xff);
      if (&DAT_00000009 < puVar11) {
        if (bVar16) goto LAB_01acf6b0;
        goto LAB_01acf4ac;
      }
      if ((bVar16) &&
         ((((uint)unaff_r11 & 0xffff) == 0 ||
          (puVar11 = (ushort *)((int)unaff_r11 * 10 + ((byte)param_2[uVar12] - 0x30 & 0xff)),
          0xff < ((uint)puVar11 & 0xffff))))) goto LAB_01acf4ac;
      uVar12 = uVar12 + 1;
      bVar16 = true;
      unaff_r11 = puVar11;
    } while (param_3 != uVar12);
    uVar12 = param_3;
LAB_01acf6b0:
    if (7 < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar14,8,&DAT_01d2fd48);
    }
    puVar11 = local_38 + uVar14;
    *puVar11 = (short)unaff_r11 + *puVar11 * 0x100;
    uVar3 = uVar13 | 2;
    uVar13 = uVar13 + 1;
    if (uVar3 == 3) {
      uVar14 = uVar14 + 1;
    }
  } while (uVar12 < param_3);
  if (uVar13 == 4) {
LAB_01acf6f4:
    if (uVar15 != 0) {
      goto LAB_01acf700;
    }
    if (uVar14 == 8) goto LAB_01acf76c;
  }
LAB_01acf4ac:
  param_1[1] = 4;
  uVar1 = 1;
LAB_01acf4b8:
  *param_1 = uVar1;
  return;
}

