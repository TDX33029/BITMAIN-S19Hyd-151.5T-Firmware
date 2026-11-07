// FUN_01318fe0 @ 01318fe0 size=1864 calls_out=9 calls_in=3
// strings: `NaiveDate - TimeDelta` overflowed | `NaiveDate + TimeDelta` overflowed

void FUN_01318fe0(int *param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 extraout_r1;
  uint extraout_r1_00;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  uint uVar16;
  bool bVar17;
  int local_34;
  byte local_30;
  undefined1 auStack_2f [11];
  
  if (((param_4 - 0xd < 0xfffffff4) || (param_5 == 0)) ||
     (uVar3 = FUN_01291b34(param_3,param_4,param_5), uVar3 == 0)) {
    *param_1 = 1;
    return;
  }
  FUN_013160c4(&local_34,param_2 + 0x54,param_5,1);
  if (local_34 != 7) {
    FUN_01bed4e2((int)param_1 + 5,auStack_2f,0xb);
    *(byte *)(param_1 + 1) = local_30;
    *param_1 = local_34;
    return;
  }
  bVar2 = true;
  if ((local_30 & 1) == 0) {
    if ((*(byte *)(param_2 + 0x6a) & 0x40) == 0) {
LAB_01319434:
      uVar6 = 1;
      do {
        FUN_013160c4(&local_34,param_2 + 0x54,uVar6,0x80);
        uVar5 = uVar6 & 0xffff;
        uVar11 = uVar5;
        if (uVar5 != 0x1f) {
          uVar11 = uVar6 + 1;
        }
        uVar6 = uVar11;
        if (local_34 != 7) goto LAB_013195d0;
        if (((local_30 & 1) != 0) && (uVar16 = FUN_01291b34(param_3,param_4,uVar5), uVar16 != 0)) {
          iVar4 = ((uVar16 & 0x1fff) >> 4) + (uVar16 & 7);
          uVar11 = iVar4 + ((uint)((short)iVar4 * 0x2493) >> 0x10) * -7;
          if (uVar11 < 5) {
            uVar7 = uVar16;
          }
          else if ((uVar11 & 0xffff) == 5) {
            uVar7 = FUN_01291bd0(uVar16,0xffffffff);
            if (uVar7 == 0) {
LAB_013195ac:
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("`NaiveDate - TimeDelta` overflowed",0x22,&DAT_01ce4c84);
            }
            uVar11 = (uVar7 & 0x1fff) >> 3;
            if (0x2dc < uVar11) goto LAB_013196d0;
            if ((param_4 != uVar11 + (byte)""[uVar11] >> 6) &&
               (uVar7 = FUN_01291bd0(uVar16,2), uVar7 == 0)) goto LAB_01319710;
          }
          else {
            uVar7 = FUN_01291bd0(uVar16,1);
            if (uVar7 == 0) {
LAB_01319710:
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("`NaiveDate + TimeDelta` overflowed",0x22,&DAT_01ce4c74);
            }
            uVar11 = (uVar7 & 0x1fff) >> 3;
            if (0x2dc < uVar11) goto LAB_013196d0;
            if ((param_4 != uVar11 + (byte)""[uVar11] >> 6) &&
               (uVar7 = FUN_01291bd0(uVar16,0xfffffffe), uVar7 == 0)) goto LAB_013195ac;
          }
          uVar11 = (uVar7 & 0x1fff) >> 3;
          if (0x2dc < uVar11) goto LAB_013196d0;
          if ((((uVar7 >> 3) + (uint)(byte)""[uVar11] & 0x3f) >> 1 == param_5) &&
             (uVar11 + (byte)""[uVar11] >> 6 == param_4)) {
            bVar2 = true;
            goto LAB_01319074;
          }
        }
        bVar2 = false;
        if ((uVar5 == 0x1f) || (0x1f < (uVar6 & 0xffff))) goto LAB_01319074;
      } while( true );
    }
    iVar10 = param_4 + 1;
    iVar4 = param_3;
    if (param_4 == 0xc) {
      iVar4 = param_3 + 1;
      iVar10 = 1;
    }
    uVar6 = FUN_01291b34(iVar4,iVar10,1);
    if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01ce4ca4);
    }
    if ((uVar6 & 0x1ff0) < 0x11) {
      uVar6 = FUN_01291b34(((int)uVar6 >> 0xd) + -1,0xc,0x1f);
      if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01ce4cb4);
      }
    }
    else {
      uVar6 = (uVar6 & 0x1ff0) - 0x10 | uVar6 & 0xffffe00f;
    }
    uVar11 = (uVar6 & 0x1fff) >> 3;
    if (0x2dc < uVar11) {
LAB_013196d0:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar11,0x2dd,&DAT_01d2a928);
    }
    bVar2 = true;
    if (param_5 != ((uVar6 >> 3) + (uint)(byte)""[uVar11] & 0x3f) >> 1) goto LAB_01319434;
  }
LAB_01319074:
  iVar4 = ((uVar3 & 0x1fff) >> 4) + (uVar3 & 7);
  uVar16 = iVar4 + ((uint)((short)iVar4 * 0x2493) >> 0x10) * -7;
  uVar5 = uVar16 + 1 & 0xff;
  uVar6 = uVar5;
  if (5 < uVar16) {
    uVar6 = 0;
  }
  uVar7 = (uVar3 & 0x1fff) >> 3;
  iVar4 = param_2 + 0x84;
  bVar14 = 1;
  do {
    if (bVar14 == 5) {
      uVar11 = 0x20;
      bVar15 = 5;
LAB_01319128:
      FUN_013160c4(&local_34,iVar4,uVar6,uVar11);
      if (local_34 != 7) {
        FUN_01bed4e2((int)param_1 + 5,auStack_2f,0xb);
        *(byte *)(param_1 + 1) = local_30;
        goto LAB_013195e0;
      }
      if ((local_30 & 1) != 0) {
        if (0x2dc < uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar7,0x2dd,&DAT_01d2a928);
        }
        bVar1 = ""[uVar7];
        uVar12 = uVar7 + bVar1;
        uVar11 = (uVar12 * 8 & 0x3e08 | uVar3 & 8) >> 3 | 2;
        if (0x33f < uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar11,0x340,&DAT_01ce4c94);
        }
        if ((byte)""[uVar11] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01ce4cc4);
        }
        bVar13 = 0;
        uVar8 = (uVar11 - (byte)""[uVar11]) * 8 & 0xfffffff7 | uVar3 & 0xffffe00f;
        while( true ) {
          uVar11 = (uVar8 & 0x1fff) >> 3;
          if (0x2dc < uVar11) goto LAB_013196d0;
          if (0x3f < (uVar11 + (byte)""[uVar11] ^ uVar12)) goto LAB_01319250;
          iVar10 = ((uVar8 & 0x1fff) >> 4) + (uVar8 & 7);
          if (((iVar10 + ((uint)((short)iVar10 * 0x2493) >> 0x10) * -7 & 0xffff) ==
               (uVar16 & 0xffff)) && (bVar13 = bVar13 + 1, bVar13 == bVar14)) break;
          uVar8 = FUN_01291bd0(uVar8,1);
          if (uVar8 == 0) goto LAB_01319710;
        }
        if ((((uVar8 >> 3) + (uint)(byte)""[uVar11] ^ (uVar3 >> 3) + (uint)bVar1) & 0x3e) == 0)
        goto LAB_013195e8;
      }
    }
    else {
      if ((byte)(bVar14 - 1) < 4) {
        bVar15 = bVar14 + 1;
        uVar11 = 0x10080402 >> (bVar14 - 1) * '\b';
        goto LAB_01319128;
      }
      bVar15 = bVar14 + 1;
    }
LAB_01319250:
  } while ((bVar14 != 5) && (bVar14 = bVar15, bVar15 < 6));
  uVar6 = uVar5;
  if (5 < (uVar16 & 0xffff)) {
    uVar6 = 0;
  }
  FUN_013160c4(&local_34,iVar4,uVar6,0x40);
  if (local_34 != 7) {
LAB_013195d0:
    FUN_01bed4e2((int)param_1 + 5,auStack_2f,0xb);
    *(byte *)(param_1 + 1) = local_30;
LAB_013195e0:
    *param_1 = local_34;
    return;
  }
  if ((local_30 & 1) == 0) {
LAB_013192dc:
    if (5 < (uVar16 & 0xffff)) {
      uVar5 = 0;
    }
    FUN_013160c4(&local_34,iVar4,uVar5,1);
    if (local_34 != 7) {
      FUN_01bed4e2((int)param_1 + 5,auStack_2f,0xb);
      *(byte *)(param_1 + 1) = local_30;
      *param_1 = local_34;
      return;
    }
    if (bVar2) {
      bVar14 = *(byte *)(param_2 + 0xb5);
      bVar17 = bVar14 == 0;
      uVar3 = extraout_r1_00;
      if (bVar17) {
        bVar14 = *(byte *)(param_2 + 0xb4);
        uVar3 = (uint)(local_30 & bVar14);
      }
      if (bVar17 && (uVar3 & 1) == 0) {
LAB_01319674:
        bVar17 = (bVar14 & 1) == 0;
        if (bVar17) {
          bVar14 = *(byte *)(param_2 + 0xb5);
        }
        if (bVar17 && (bVar14 & 1) == 0) {
          if (*(char *)(param_2 + 0xb6) == '\0') {
            local_30 = bVar2 | local_30 & 1;
          }
          else {
            local_30 = bVar2 & local_30;
          }
        }
        else {
          local_30 = 0;
        }
        goto LAB_013196a8;
      }
    }
    else {
      bVar14 = *(byte *)(param_2 + 0xb4);
      if ((local_30 & 1) == 0 || (bVar14 & 1) == 0) goto LAB_01319674;
    }
  }
  else {
    FUN_01319758(uVar3,extraout_r1,0x93a80,0,0);
    iVar10 = FUN_013197e0();
    iVar9 = FUN_013197e0(uVar3);
    if (iVar10 == iVar9) goto LAB_013192dc;
LAB_013195e8:
    if (bVar2) {
      if ((*(char *)(param_2 + 0xb5) != '\0') || ((*(byte *)(param_2 + 0xb4) & 1) != 0))
      goto LAB_0131968c;
LAB_0131964c:
      local_30 = 1;
      bVar14 = 0;
      goto LAB_01319674;
    }
    if (*(char *)(param_2 + 0xb4) == '\0') goto LAB_0131964c;
  }
LAB_0131968c:
  local_30 = 1;
LAB_013196a8:
  *(byte *)(param_1 + 1) = local_30;
  *param_1 = 7;
  return;
}

