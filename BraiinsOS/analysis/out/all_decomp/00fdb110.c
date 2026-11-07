// FUN_00fdb110 @ 00fdb110 size=7892 calls_out=17 calls_in=10
// strings: explicit panic

/* WARNING: Removing unreachable block (ram,0x00fdcfe4) */

void FUN_00fdb110(uint *param_1,int param_2,int param_3,uint param_4)

{
  code *pcVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  int unaff_r4;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  byte bVar17;
  uint unaff_r7;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  bool bVar22;
  bool bVar23;
  undefined *local_78;
  uint local_74;
  uint local_68;
  uint local_64;
  uint local_5c;
  uint local_54;
  uint local_50;
  uint local_4c;
  char local_48;
  uint local_44;
  int local_40;
  char local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  
  FUN_00fd9128(&local_34,param_2,param_4);
  uVar19 = local_34;
  if ((char)local_30 != '\x04') {
    *(char *)(param_1 + 2) = (char)local_30;
    *param_1 = 0x80000000;
    param_1[1] = local_34;
    return;
  }
  uVar14 = 0;
  if ((int)local_34 < 0) {
LAB_00fdb154:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar14,uVar19);
  }
  if (local_34 == 0) {
    pbVar3 = &DAT_00000001;
    local_74 = 0;
  }
  else {
    uVar14 = 1;
    pbVar3 = (byte *)FUN_016d38c8(local_34,1);
    local_74 = uVar19;
    if (pbVar3 == (byte *)0x0) goto LAB_00fdb154;
  }
  local_44 = uVar19;
  local_40 = CONCAT31(local_40._1_3_,4);
  FUN_00fd9128(&local_34,param_2,param_4);
  uVar4 = local_30 & 0xff;
  uVar7 = uVar4;
  if (uVar4 == 4) {
    uVar7 = local_34;
  }
  if (uVar4 != 4 || uVar19 != uVar7) {
    FUN_00fdd2b8(&local_44,&local_34);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xfdd02c);
    (*pcVar1)();
  }
  bVar17 = *(byte *)(param_2 + 0x201);
  uVar4 = (uint)bVar17;
  uVar7 = uVar19;
  local_64 = param_4;
  switch(uVar4 & 7) {
  case 1:
    iVar12 = param_2 + 0x100;
    if ((bVar17 & 8) == 0) {
      if (*(char *)(param_2 + 0x200) < '\0') {
        FUN_00fd929c(&local_54,iVar12,param_3,param_4,pbVar3,uVar19);
        goto LAB_00fdcd88;
      }
      if (param_4 != 0) {
        uVar15 = 0;
        local_5c = 0;
        do {
          local_78 = &DAT_0188158c;
          local_64 = uVar19;
          if ((uVar19 < uVar7) || (uVar7 < local_5c)) {
            local_68 = local_5c;
            local_5c = uVar7;
            goto LAB_00fdca4c;
          }
          FUN_00fd929c(&local_44,iVar12,param_3 + uVar15,param_4 - uVar15,pbVar3 + local_5c,
                       uVar7 - local_5c);
          if (local_38 == '\x04') goto LAB_00fdca90;
          local_68 = local_44 + uVar15;
          uVar15 = local_68 + 8;
          bVar23 = 0xfffffff6 < local_68;
          bVar22 = local_68 == 0xfffffff7;
          if (local_68 < 0xfffffff8) {
            bVar23 = param_4 <= uVar15;
            bVar22 = uVar15 == param_4;
          }
          if (bVar23 && !bVar22) {
            local_78 = &DAT_0188157c;
            local_64 = param_4;
            local_5c = uVar15;
            goto LAB_00fdca48;
          }
          pbVar11 = (byte *)(param_3 + local_68);
          iVar10 = 0;
          if ((((*(char *)(iVar12 + (uint)pbVar11[7]) == -0x7e) &&
               (iVar10 = 1, *(char *)(iVar12 + (uint)pbVar11[6]) == -0x7e)) &&
              (iVar10 = 2, *(char *)(iVar12 + (uint)pbVar11[5]) == -0x7e)) &&
             (((iVar10 = 3, *(char *)(iVar12 + (uint)pbVar11[4]) == -0x7e &&
               (iVar10 = 4, *(char *)(iVar12 + (uint)pbVar11[3]) == -0x7e)) &&
              ((iVar10 = 5, *(char *)(iVar12 + (uint)pbVar11[2]) == -0x7e &&
               ((iVar10 = 6, *(char *)(iVar12 + (uint)pbVar11[1]) == -0x7e &&
                (iVar10 = 7, *(char *)(iVar12 + (uint)*pbVar11) == -0x7e)))))))) {
            iVar10 = 8;
          }
          uVar4 = 8 - iVar10;
          if ((iVar10 == 8) || ((uVar4 & 7) != 0)) goto LAB_00fdcaf8;
          if ((CARRY4(uVar4,local_68)) || (param_4 < uVar4 + local_68)) {
            local_78 = &DAT_0188156c;
            local_64 = param_4;
            local_5c = uVar4 + local_68;
            goto LAB_00fdca48;
          }
          unaff_r7 = local_40 + local_5c;
          uVar20 = uVar4 >> 3;
          local_5c = uVar20 + unaff_r7;
          if ((CARRY4(uVar20,unaff_r7)) || (uVar19 < local_5c)) {
            local_68 = unaff_r7;
            goto LAB_00fdcdf4;
          }
          FUN_00fd929c(&local_34,iVar12,pbVar11,uVar4,pbVar3 + unaff_r7,uVar20);
          local_48 = (char)local_28;
          if ((char)local_28 != '\x04') goto LAB_00fdcac0;
          uVar7 = (uVar7 + uVar20) - 1;
        } while (uVar15 < param_4);
      }
    }
    else {
      if (*(char *)(param_2 + 0x200) < '\0') {
        FUN_00fd9580(&local_54,iVar12,param_3,param_4,pbVar3,uVar19);
        goto LAB_00fdcd88;
      }
      if (param_4 != 0) {
        local_5c = 0;
        uVar15 = 0;
        do {
          if ((uVar19 < uVar7) || (uVar7 < uVar15)) goto LAB_00fdce08;
          FUN_00fd9580(&local_44,iVar12,param_3 + local_5c,param_4 - local_5c,pbVar3 + uVar15,
                       uVar7 - uVar15);
          if (local_38 == '\x04') goto LAB_00fdca90;
          local_68 = local_44 + local_5c;
          local_5c = local_68 + 8;
          bVar23 = 0xfffffff6 < local_68;
          bVar22 = local_68 == 0xfffffff7;
          if (local_68 < 0xfffffff8) {
            bVar23 = param_4 <= local_5c;
            bVar22 = local_5c == param_4;
          }
          if (bVar23 && !bVar22) {
            local_78 = &DAT_0188157c;
            goto LAB_00fdca48;
          }
          pbVar11 = (byte *)(param_3 + local_68);
          iVar10 = 0;
          if ((((((*(char *)(iVar12 + (uint)pbVar11[7]) == -0x7e) &&
                 (iVar10 = 1, *(char *)(iVar12 + (uint)pbVar11[6]) == -0x7e)) &&
                (iVar10 = 2, *(char *)(iVar12 + (uint)pbVar11[5]) == -0x7e)) &&
               ((iVar10 = 3, *(char *)(iVar12 + (uint)pbVar11[4]) == -0x7e &&
                (iVar10 = 4, *(char *)(iVar12 + (uint)pbVar11[3]) == -0x7e)))) &&
              (iVar10 = 5, *(char *)(iVar12 + (uint)pbVar11[2]) == -0x7e)) &&
             ((iVar10 = 6, *(char *)(iVar12 + (uint)pbVar11[1]) == -0x7e &&
              (iVar10 = 7, *(char *)(iVar12 + (uint)*pbVar11) == -0x7e)))) {
            iVar10 = 8;
          }
          uVar4 = 8 - iVar10;
          if ((iVar10 == 8) || ((uVar4 & 7) != 0)) goto LAB_00fdcaf8;
          uVar20 = uVar4 + local_68;
          if ((CARRY4(uVar4,local_68)) || (param_4 < uVar20)) goto LAB_00fdce14;
          unaff_r7 = local_40 + uVar15;
          uVar20 = uVar4 >> 3;
          uVar15 = uVar20 + unaff_r7;
          if ((CARRY4(uVar20,unaff_r7)) || (uVar19 < uVar15)) goto LAB_00fdcdec;
          FUN_00fd9580(&local_34,iVar12,pbVar11,uVar4,pbVar3 + unaff_r7,uVar20);
          local_48 = (char)local_28;
          if ((char)local_28 != '\x04') goto LAB_00fdcac0;
          uVar7 = (uVar7 + uVar20) - 1;
        } while (local_5c < param_4);
      }
    }
    break;
  case 2:
    iVar12 = param_2 + 0x100;
    if ((bVar17 & 8) == 0) {
      if (*(char *)(param_2 + 0x200) < '\0') {
        FUN_00fd9860(&local_54,iVar12,param_3,param_4,pbVar3,uVar19);
        goto LAB_00fdcd88;
      }
      if (param_4 != 0) {
        local_5c = 0;
        uVar15 = 0;
        do {
          if ((uVar19 < uVar7) || (uVar7 < uVar15)) goto LAB_00fdce08;
          FUN_00fd9860(&local_44,iVar12,param_3 + local_5c,param_4 - local_5c,pbVar3 + uVar15,
                       uVar7 - uVar15);
          if (local_38 == '\x04') goto LAB_00fdca84;
          local_68 = local_44 + local_5c;
          local_5c = local_68 + 4;
          bVar23 = 0xfffffffa < local_68;
          bVar22 = local_68 == 0xfffffffb;
          if (local_68 < 0xfffffffc) {
            bVar23 = param_4 <= local_5c;
            bVar22 = local_5c == param_4;
          }
          if (bVar23 && !bVar22) goto LAB_00fdca38;
          pbVar11 = (byte *)(param_3 + local_68);
          iVar10 = 0;
          if ((((*(char *)(iVar12 + (uint)pbVar11[3]) == -0x7e) &&
               (iVar10 = 1, *(char *)(iVar12 + (uint)pbVar11[2]) == -0x7e)) &&
              (iVar10 = 2, *(char *)(iVar12 + (uint)pbVar11[1]) == -0x7e)) &&
             (iVar10 = 3, *(char *)(iVar12 + (uint)*pbVar11) == -0x7e)) {
            iVar10 = 4;
          }
          uVar4 = 4 - iVar10;
          if ((iVar10 == 4) || ((uVar4 & 3) != 0)) goto LAB_00fdcc34;
          uVar20 = uVar4 + local_68;
          if ((CARRY4(uVar4,local_68)) || (param_4 < uVar20)) goto LAB_00fdce14;
          uVar6 = local_40 + uVar15;
          uVar20 = uVar4 >> 2;
          uVar15 = uVar20 + uVar6;
          if ((CARRY4(uVar20,uVar6)) || (uVar19 < uVar15)) goto LAB_00fdce60;
          FUN_00fd9860(&local_34,iVar12,pbVar11,uVar4,pbVar3 + uVar6,uVar20);
          local_48 = (char)local_28;
          if ((char)local_28 != '\x04') goto LAB_00fdcc4c;
          uVar7 = (uVar7 + uVar20) - 1;
        } while (local_5c < param_4);
      }
    }
    else {
      if (*(char *)(param_2 + 0x200) < '\0') {
        FUN_00fd9a10(&local_54,iVar12,param_3,param_4,pbVar3,uVar19);
        goto LAB_00fdcd88;
      }
      if (param_4 != 0) {
        local_5c = 0;
        uVar15 = 0;
        do {
          if ((uVar19 < uVar7) || (uVar7 < uVar15)) goto LAB_00fdce08;
          FUN_00fd9a10(&local_44,iVar12,param_3 + local_5c,param_4 - local_5c,pbVar3 + uVar15,
                       uVar7 - uVar15);
          if (local_38 == '\x04') goto LAB_00fdca84;
          local_68 = local_44 + local_5c;
          local_5c = local_68 + 4;
          bVar23 = 0xfffffffa < local_68;
          bVar22 = local_68 == 0xfffffffb;
          if (local_68 < 0xfffffffc) {
            bVar23 = param_4 <= local_5c;
            bVar22 = local_5c == param_4;
          }
          if (bVar23 && !bVar22) goto LAB_00fdca38;
          pbVar11 = (byte *)(param_3 + local_68);
          iVar10 = 0;
          if ((((*(char *)(iVar12 + (uint)pbVar11[3]) == -0x7e) &&
               (iVar10 = 1, *(char *)(iVar12 + (uint)pbVar11[2]) == -0x7e)) &&
              (iVar10 = 2, *(char *)(iVar12 + (uint)pbVar11[1]) == -0x7e)) &&
             (iVar10 = 3, *(char *)(iVar12 + (uint)*pbVar11) == -0x7e)) {
            iVar10 = 4;
          }
          uVar4 = 4 - iVar10;
          if ((iVar10 == 4) || ((uVar4 & 3) != 0)) goto LAB_00fdcc34;
          uVar20 = uVar4 + local_68;
          if ((CARRY4(uVar4,local_68)) || (param_4 < uVar20)) goto LAB_00fdce14;
          uVar6 = local_40 + uVar15;
          uVar20 = uVar4 >> 2;
          uVar15 = uVar20 + uVar6;
          if ((CARRY4(uVar20,uVar6)) || (uVar19 < uVar15)) goto LAB_00fdce60;
          FUN_00fd9a10(&local_34,iVar12,pbVar11,uVar4,pbVar3 + uVar6,uVar20);
          local_48 = (char)local_28;
          if ((char)local_28 != '\x04') goto LAB_00fdcc4c;
          uVar7 = (uVar7 + uVar20) - 1;
        } while (local_5c < param_4);
      }
    }
    break;
  case 3:
    iVar12 = param_2 + 0x100;
    if ((bVar17 & 8) == 0) {
      if (*(char *)(param_2 + 0x200) < '\0') {
        FUN_00fd9bc4(&local_54,(uVar4 & 0x1f) >> 4,iVar12,param_3,param_4,pbVar3,uVar19);
        goto LAB_00fdcd88;
      }
      if (param_4 != 0) {
        uVar20 = 0;
        uVar15 = 0;
        do {
          if ((uVar19 < uVar7) || (uVar7 < uVar15)) goto LAB_00fdce00;
          FUN_00fd9bc4(&local_44,(uVar4 & 0x1f) >> 4,iVar12,param_3 + uVar20,param_4 - uVar20,
                       pbVar3 + uVar15,uVar7 - uVar15);
          if (local_38 == '\x04') goto LAB_00fdcaa8;
          local_68 = local_44 + uVar20;
          uVar20 = local_68 + 8;
          if ((0xfffffff7 < local_68) || (param_4 < uVar20)) goto LAB_00fdce30;
          pbVar11 = (byte *)(param_3 + local_68);
          iVar10 = 0;
          if ((((*(char *)(iVar12 + (uint)pbVar11[7]) == -0x7e) &&
               (((iVar10 = 1, *(char *)(iVar12 + (uint)pbVar11[6]) == -0x7e &&
                 (iVar10 = 2, *(char *)(iVar12 + (uint)pbVar11[5]) == -0x7e)) &&
                (iVar10 = 3, *(char *)(iVar12 + (uint)pbVar11[4]) == -0x7e)))) &&
              (((iVar10 = 4, *(char *)(iVar12 + (uint)pbVar11[3]) == -0x7e &&
                (iVar10 = 5, *(char *)(iVar12 + (uint)pbVar11[2]) == -0x7e)) &&
               (iVar10 = 6, *(char *)(iVar12 + (uint)pbVar11[1]) == -0x7e)))) &&
             (iVar10 = 7, *(char *)(iVar12 + (uint)*pbVar11) == -0x7e)) {
            iVar10 = 8;
          }
          uVar6 = 8 - iVar10;
          if ((iVar10 == 8) || (2 < (uVar6 * 3 & 7))) goto LAB_00fdcb08;
          local_5c = uVar6 + local_68;
          if ((CARRY4(uVar6,local_68)) || (param_4 < local_5c)) goto LAB_00fdcef8;
          unaff_r7 = local_40 + uVar15;
          uVar9 = uVar6 * 3 >> 3;
          uVar15 = uVar9 + unaff_r7;
          if ((CARRY4(uVar9,unaff_r7)) || (uVar19 < uVar15)) goto LAB_00fdcdec;
          FUN_00fd9bc4(&local_34,(uVar4 & 0x1f) >> 4,iVar12,pbVar11,uVar6,pbVar3 + unaff_r7,uVar9);
          local_48 = (char)local_28;
          if ((char)local_28 != '\x04') goto LAB_00fdcb40;
          uVar7 = (uVar7 + uVar9) - 3;
        } while (uVar20 < param_4);
      }
    }
    else {
      if (*(char *)(param_2 + 0x200) < '\0') {
        FUN_00fd9f70(&local_54,(uVar4 & 0x1f) >> 4,iVar12,param_3,param_4,pbVar3,uVar19);
        goto LAB_00fdcd88;
      }
      if (param_4 != 0) {
        uVar20 = 0;
        uVar15 = 0;
        do {
          if ((uVar19 < uVar7) || (uVar7 < uVar15)) goto LAB_00fdce00;
          FUN_00fd9f70(&local_44,(uVar4 & 0x1f) >> 4,iVar12,param_3 + uVar20,param_4 - uVar20,
                       pbVar3 + uVar15,uVar7 - uVar15);
          if (local_38 == '\x04') goto LAB_00fdcaa8;
          local_68 = local_44 + uVar20;
          uVar20 = local_68 + 8;
          if ((0xfffffff7 < local_68) || (param_4 < uVar20)) goto LAB_00fdce30;
          pbVar11 = (byte *)(param_3 + local_68);
          iVar10 = 0;
          if ((((*(char *)(iVar12 + (uint)pbVar11[7]) == -0x7e) &&
               (iVar10 = 1, *(char *)(iVar12 + (uint)pbVar11[6]) == -0x7e)) &&
              (iVar10 = 2, *(char *)(iVar12 + (uint)pbVar11[5]) == -0x7e)) &&
             (((iVar10 = 3, *(char *)(iVar12 + (uint)pbVar11[4]) == -0x7e &&
               (iVar10 = 4, *(char *)(iVar12 + (uint)pbVar11[3]) == -0x7e)) &&
              ((iVar10 = 5, *(char *)(iVar12 + (uint)pbVar11[2]) == -0x7e &&
               ((iVar10 = 6, *(char *)(iVar12 + (uint)pbVar11[1]) == -0x7e &&
                (iVar10 = 7, *(char *)(iVar12 + (uint)*pbVar11) == -0x7e)))))))) {
            iVar10 = 8;
          }
          uVar6 = 8 - iVar10;
          if ((iVar10 == 8) || (2 < (uVar6 * 3 & 7))) goto LAB_00fdcb08;
          local_5c = uVar6 + local_68;
          if ((CARRY4(uVar6,local_68)) || (param_4 < local_5c)) goto LAB_00fdcef8;
          unaff_r7 = local_40 + uVar15;
          uVar9 = uVar6 * 3 >> 3;
          uVar15 = uVar9 + unaff_r7;
          if ((CARRY4(uVar9,unaff_r7)) || (uVar19 < uVar15)) goto LAB_00fdcdec;
          FUN_00fd9f70(&local_34,(uVar4 & 0x1f) >> 4,iVar12,pbVar11,uVar6,pbVar3 + unaff_r7,uVar9);
          local_48 = (char)local_28;
          if ((char)local_28 != '\x04') goto LAB_00fdcb40;
          uVar7 = (uVar7 + uVar9) - 3;
        } while (uVar20 < param_4);
      }
    }
    goto LAB_00fdcaac;
  case 4:
    iVar12 = param_2 + 0x100;
    local_5c = uVar19;
    if ((bVar17 & 8) == 0) {
      if (*(char *)(param_2 + 0x200) < '\0') {
        uVar7 = param_4 >> 1;
        if (uVar7 != 0) {
          uVar4 = 0;
          uVar15 = 0;
          pbVar11 = pbVar3;
          do {
            bVar17 = *(byte *)(iVar12 + (uint)*(byte *)(param_3 + uVar15));
            if (0xf < bVar17) goto LAB_00fdcb68;
            bVar2 = *(byte *)(iVar12 + (uint)*(byte *)(param_3 + uVar15 + 1));
            if (0xf < bVar2) goto LAB_00fdcb64;
            *pbVar11 = bVar17 | bVar2 << 4;
            uVar15 = uVar15 + 2;
            pbVar11 = pbVar11 + 1;
          } while (uVar7 * 2 != uVar15);
        }
        if (uVar19 < uVar7) goto LAB_00fdcfcc;
        if ((param_4 & 1) == 0) {
          uVar4 = 0;
        }
        else {
          param_4 = param_4 & 0x7ffffffe;
          uVar4 = (uint)*(byte *)(iVar12 + (uint)*(byte *)(param_3 + param_4));
          if (0xf < uVar4) goto LAB_00fdcb6c;
        }
        if (uVar19 != uVar7) {
          iVar12 = uVar19 - uVar7;
          uVar15 = 0;
          pbVar11 = pbVar3 + uVar7;
          do {
            uVar7 = uVar15 & 0x38;
            uVar15 = uVar15 + 8;
            bVar17 = (byte)(uVar4 >> uVar7) | (byte)(0 << (0x20 - uVar7 & 0xff));
            if (-1 < (int)(uVar7 - 0x20)) {
              bVar17 = (byte)(0 >> (uVar7 - 0x20 & 0xff));
            }
            iVar12 = iVar12 + -1;
            *pbVar11 = bVar17;
            pbVar11 = pbVar11 + 1;
          } while (iVar12 != 0);
        }
        goto LAB_00fdcc2c;
      }
      if (param_4 != 0) {
        uVar4 = 0;
        uVar7 = 0;
LAB_00fdc630:
        if ((uVar19 < local_5c) || (local_5c < uVar7)) goto LAB_00fdcf20;
        uVar15 = param_4 - uVar4;
        iVar10 = param_3 + uVar4;
        local_68 = uVar15 >> 1;
        if (local_68 != 0) {
          uVar6 = 0;
          pbVar11 = pbVar3 + uVar7;
          uVar20 = local_68;
          do {
            bVar17 = *(byte *)(iVar12 + (uint)*(byte *)(iVar10 + uVar6));
            if ((0xf < bVar17) ||
               (bVar2 = *(byte *)(iVar12 + (uint)*(byte *)(iVar10 + uVar6 + 1)), 0xf < bVar2))
            goto LAB_00fdc6e8;
            *pbVar11 = bVar17 | bVar2 << 4;
            uVar6 = uVar6 + 2;
            uVar20 = uVar20 - 1;
            pbVar11 = pbVar11 + 1;
          } while (uVar20 != 0);
        }
        local_64 = local_5c - uVar7;
        if (local_64 < local_68) goto LAB_00fdcfac;
        if ((uVar15 & 1) != 0) {
          uVar6 = uVar15 & 0x7ffffffe;
          uVar15 = (uint)*(byte *)(iVar12 + (uint)*(byte *)(iVar10 + uVar6));
          if (uVar15 < 0x10) goto LAB_00fdccd8;
LAB_00fdc6e8:
          local_54 = uVar6 + uVar4;
          uVar4 = local_54 + 2;
          if (local_54 < 0xfffffffe) {
            if (uVar4 <= param_4) {
              iVar10 = 0;
              pbVar11 = (byte *)(param_3 + local_54);
              if ((*(char *)(iVar12 + (uint)pbVar11[1]) == -0x7e) &&
                 (iVar10 = 1, *(char *)(iVar12 + (uint)*pbVar11) == -0x7e)) {
                iVar10 = 2;
              }
              uVar15 = 2 - iVar10;
              if ((iVar10 != 2) && ((uVar15 & 1) == 0)) {
                uVar20 = uVar15 + local_54;
                if ((!CARRY4(uVar15,local_54)) && (uVar20 <= param_4)) {
                  local_68 = uVar7 + (uVar6 >> 1);
                  uVar15 = uVar15 >> 1;
                  uVar7 = uVar15 + local_68;
                  if ((!CARRY4(uVar15,local_68)) && (uVar7 <= uVar19)) goto code_r0x00fdc77c;
                  goto LAB_00fdcf40;
                }
                goto LAB_00fdcf28;
              }
              goto LAB_00fdcc9c;
            }
            goto LAB_00fdcf68;
          }
          goto LAB_00fdcf50;
        }
        uVar15 = 0;
LAB_00fdccd8:
        if (local_64 != local_68) {
          uVar4 = 0;
          pbVar11 = pbVar3 + uVar7 + local_68;
          do {
            uVar7 = uVar4 & 0x38;
            uVar4 = uVar4 + 8;
            bVar17 = (byte)(uVar15 >> uVar7) | (byte)(0 << (0x20 - uVar7 & 0xff));
            if (-1 < (int)(uVar7 - 0x20)) {
              bVar17 = (byte)(0 >> (uVar7 - 0x20 & 0xff));
            }
            pbVar8 = pbVar11 + 1;
            *pbVar11 = bVar17;
            pbVar11 = pbVar8;
          } while (pbVar8 != pbVar3 + local_5c);
          goto LAB_00fdcd74;
        }
        goto LAB_00fdcd34;
      }
    }
    else {
      if (*(char *)(param_2 + 0x200) < '\0') {
        uVar7 = param_4 >> 1;
        if (uVar7 != 0) {
          uVar4 = 0;
          uVar15 = 0;
          pbVar11 = pbVar3;
          do {
            bVar17 = *(byte *)(iVar12 + (uint)*(byte *)(param_3 + uVar15));
            if (0xf < bVar17) goto LAB_00fdcb68;
            bVar2 = *(byte *)(iVar12 + (uint)*(byte *)(param_3 + uVar15 + 1));
            if (0xf < bVar2) goto LAB_00fdcb64;
            *pbVar11 = bVar2 | bVar17 << 4;
            uVar15 = uVar15 + 2;
            pbVar11 = pbVar11 + 1;
          } while (uVar7 * 2 != uVar15);
        }
        if (uVar19 < uVar7) {
LAB_00fdcfcc:
          local_68 = param_4 >> 1;
          local_78 = &DAT_018814ec;
          local_64 = uVar19;
          goto LAB_00fdca4c;
        }
        if ((param_4 & 1) == 0) {
          uVar4 = 0;
        }
        else {
          param_4 = param_4 & 0x7ffffffe;
          uVar4 = (uint)*(byte *)(iVar12 + (uint)*(byte *)(param_3 + param_4));
          if (0xf < uVar4) goto LAB_00fdcb6c;
          uVar4 = uVar4 << 4;
        }
        if (uVar19 != uVar7) {
          iVar12 = uVar19 - uVar7;
          uVar15 = 0;
          pbVar11 = pbVar3 + uVar7;
          do {
            uVar7 = uVar15 & 0x38;
            uVar15 = uVar15 + 0x38;
            bVar17 = (byte)(uVar4 >> uVar7) | (byte)(0 << (0x20 - uVar7 & 0xff));
            if (-1 < (int)(uVar7 - 0x20)) {
              bVar17 = (byte)(0 >> (uVar7 - 0x20 & 0xff));
            }
            iVar12 = iVar12 + -1;
            *pbVar11 = bVar17;
            pbVar11 = pbVar11 + 1;
          } while (iVar12 != 0);
        }
LAB_00fdcc2c:
        local_54 = uVar19;
        goto LAB_00fdcd80;
      }
      if (param_4 != 0) {
        uVar4 = 0;
        uVar7 = 0;
LAB_00fdc464:
        if ((uVar19 < local_5c) || (local_5c < uVar7)) goto LAB_00fdcf20;
        uVar15 = param_4 - uVar4;
        iVar10 = param_3 + uVar4;
        local_68 = uVar15 >> 1;
        if (local_68 != 0) {
          uVar6 = 0;
          pbVar11 = pbVar3 + uVar7;
          uVar20 = local_68;
          do {
            bVar17 = *(byte *)(iVar12 + (uint)*(byte *)(iVar10 + uVar6));
            if ((0xf < bVar17) ||
               (bVar2 = *(byte *)(iVar12 + (uint)*(byte *)(iVar10 + uVar6 + 1)), 0xf < bVar2))
            goto LAB_00fdc51c;
            *pbVar11 = bVar2 | bVar17 << 4;
            uVar6 = uVar6 + 2;
            uVar20 = uVar20 - 1;
            pbVar11 = pbVar11 + 1;
          } while (uVar20 != 0);
        }
        local_64 = local_5c - uVar7;
        if (local_64 < local_68) goto LAB_00fdcfac;
        if ((uVar15 & 1) == 0) {
          uVar15 = 0;
LAB_00fdcd28:
          if (local_64 == local_68) {
LAB_00fdcd34:
          }
          else {
            uVar4 = 0;
            pbVar11 = pbVar3 + uVar7 + local_68;
            do {
              uVar7 = uVar4 & 0x38;
              uVar4 = uVar4 + 0x38;
              bVar17 = (byte)(uVar15 >> uVar7) | (byte)(0 << (0x20 - uVar7 & 0xff));
              if (-1 < (int)(uVar7 - 0x20)) {
                bVar17 = (byte)(0 >> (uVar7 - 0x20 & 0xff));
              }
              pbVar8 = pbVar11 + 1;
              *pbVar11 = bVar17;
              pbVar11 = pbVar8;
            } while (pbVar8 != pbVar3 + local_5c);
LAB_00fdcd74:
          }
          goto LAB_00fdcd7c;
        }
        uVar6 = uVar15 & 0x7ffffffe;
        uVar15 = (uint)*(byte *)(iVar12 + (uint)*(byte *)(iVar10 + uVar6));
        if (uVar15 < 0x10) {
          uVar15 = uVar15 << 4;
          goto LAB_00fdcd28;
        }
LAB_00fdc51c:
        local_54 = uVar6 + uVar4;
        uVar4 = local_54 + 2;
        if (0xfffffffd < local_54) goto LAB_00fdcf50;
        if (param_4 < uVar4) goto LAB_00fdcf68;
        iVar10 = 0;
        pbVar11 = (byte *)(param_3 + local_54);
        if ((*(char *)(iVar12 + (uint)pbVar11[1]) == -0x7e) &&
           (iVar10 = 1, *(char *)(iVar12 + (uint)*pbVar11) == -0x7e)) {
          iVar10 = 2;
        }
        uVar15 = 2 - iVar10;
        if ((iVar10 == 2) || ((uVar15 & 1) != 0)) goto LAB_00fdcc9c;
        uVar20 = uVar15 + local_54;
        if ((CARRY4(uVar15,local_54)) || (param_4 < uVar20)) goto LAB_00fdcf28;
        local_68 = uVar7 + (uVar6 >> 1);
        uVar15 = uVar15 >> 1;
        uVar7 = uVar15 + local_68;
        if ((!CARRY4(uVar15,local_68)) && (uVar7 <= uVar19)) goto code_r0x00fdc5b0;
LAB_00fdcf40:
        local_5c = uVar7;
        goto LAB_00fdcdf4;
      }
    }
LAB_00fdcd7c:
    local_54 = local_5c;
    goto LAB_00fdcd80;
  case 5:
    iVar12 = param_2 + 0x100;
    if ((bVar17 & 8) == 0) {
      if (*(char *)(param_2 + 0x200) < '\0') {
        FUN_00fda318(&local_54,(uVar4 & 0x1f) >> 4,iVar12,param_3,param_4,pbVar3,uVar19);
        goto LAB_00fdcd88;
      }
      if (param_4 != 0) {
        local_5c = 0;
        uVar15 = 0;
        do {
          if ((uVar19 < uVar7) || (uVar7 < uVar15)) goto LAB_00fdce00;
          FUN_00fda318(&local_44,(uVar4 & 0x1f) >> 4,iVar12,param_3 + local_5c,param_4 - local_5c,
                       pbVar3 + uVar15,uVar7 - uVar15);
          if (local_38 == '\x04') {
            local_54 = uVar7;
            goto LAB_00fdcd80;
          }
          local_68 = local_44 + local_5c;
          bVar23 = 0xfffffff6 < local_68;
          bVar22 = local_68 == 0xfffffff7;
          local_5c = local_68 + 8;
          if (local_68 < 0xfffffff8) {
            bVar23 = param_4 <= local_5c;
            bVar22 = local_5c == param_4;
          }
          if (bVar23 && !bVar22) goto LAB_00fdcea4;
          pbVar11 = (byte *)(param_3 + local_68);
          iVar10 = 0;
          if ((((*(char *)(iVar12 + (uint)pbVar11[7]) == -0x7e) &&
               (iVar10 = 1, *(char *)(iVar12 + (uint)pbVar11[6]) == -0x7e)) &&
              (iVar10 = 2, *(char *)(iVar12 + (uint)pbVar11[5]) == -0x7e)) &&
             (((iVar10 = 3, *(char *)(iVar12 + (uint)pbVar11[4]) == -0x7e &&
               (iVar10 = 4, *(char *)(iVar12 + (uint)pbVar11[3]) == -0x7e)) &&
              ((iVar10 = 5, *(char *)(iVar12 + (uint)pbVar11[2]) == -0x7e &&
               ((iVar10 = 6, *(char *)(iVar12 + (uint)pbVar11[1]) == -0x7e &&
                (iVar10 = 7, *(char *)(iVar12 + (uint)*pbVar11) == -0x7e)))))))) {
            iVar10 = 8;
          }
          uVar20 = 8 - iVar10;
          if ((iVar10 == 8) || (4 < (uVar20 * 5 & 7))) goto LAB_00fdcae4;
          uVar6 = uVar20 + local_68;
          if ((CARRY4(uVar20,local_68)) || (param_4 < uVar6)) goto LAB_00fdce48;
          unaff_r7 = local_40 + uVar15;
          uVar6 = uVar20 * 5 >> 3;
          uVar15 = uVar6 + unaff_r7;
          if ((CARRY4(uVar6,unaff_r7)) || (uVar19 < uVar15)) goto LAB_00fdcdec;
          FUN_00fda318(&local_34,(uVar4 & 0x1f) >> 4,iVar12,pbVar11,uVar20,pbVar3 + unaff_r7,uVar6);
          local_48 = (char)local_28;
          if ((char)local_28 != '\x04') goto LAB_00fdcb1c;
          uVar7 = (uVar7 + uVar6) - 5;
        } while (local_5c < param_4);
      }
      local_54 = uVar7;
    }
    else {
      if (*(char *)(param_2 + 0x200) < '\0') {
        FUN_00fda6fc(&local_54,(uVar4 & 0x1f) >> 4,iVar12,param_3,param_4,pbVar3,uVar19);
        goto LAB_00fdcd88;
      }
      uVar7 = uVar19;
      if (param_4 != 0) {
        local_5c = 0;
        uVar15 = 0;
        do {
          if ((uVar19 < uVar7) || (uVar7 < uVar15)) {
            local_5c = uVar7;
            goto LAB_00fdce80;
          }
          FUN_00fda6fc(&local_44,(uVar4 & 0x1f) >> 4,iVar12,param_3 + local_5c,param_4 - local_5c,
                       pbVar3 + uVar15,uVar7 - uVar15);
          if (local_38 == '\x04') {
            local_54 = uVar7;
            goto LAB_00fdcd80;
          }
          local_68 = local_44 + local_5c;
          bVar23 = 0xfffffff6 < local_68;
          bVar22 = local_68 == 0xfffffff7;
          local_5c = local_68 + 8;
          if (local_68 < 0xfffffff8) {
            bVar23 = param_4 <= local_5c;
            bVar22 = local_5c == param_4;
          }
          if (bVar23 && !bVar22) goto LAB_00fdcea4;
          pbVar11 = (byte *)(param_3 + local_68);
          iVar10 = 0;
          if (((((*(char *)(iVar12 + (uint)pbVar11[7]) == -0x7e) &&
                (iVar10 = 1, *(char *)(iVar12 + (uint)pbVar11[6]) == -0x7e)) &&
               (iVar10 = 2, *(char *)(iVar12 + (uint)pbVar11[5]) == -0x7e)) &&
              ((iVar10 = 3, *(char *)(iVar12 + (uint)pbVar11[4]) == -0x7e &&
               (iVar10 = 4, *(char *)(iVar12 + (uint)pbVar11[3]) == -0x7e)))) &&
             ((iVar10 = 5, *(char *)(iVar12 + (uint)pbVar11[2]) == -0x7e &&
              ((iVar10 = 6, *(char *)(iVar12 + (uint)pbVar11[1]) == -0x7e &&
               (iVar10 = 7, *(char *)(iVar12 + (uint)*pbVar11) == -0x7e)))))) {
            iVar10 = 8;
          }
          uVar20 = 8 - iVar10;
          if ((iVar10 == 8) || (4 < (uVar20 * 5 & 7))) goto LAB_00fdcae4;
          uVar6 = uVar20 + local_68;
          if ((CARRY4(uVar20,local_68)) || (param_4 < uVar6)) goto LAB_00fdce48;
          unaff_r7 = local_40 + uVar15;
          uVar6 = uVar20 * 5 >> 3;
          uVar15 = uVar6 + unaff_r7;
          if ((CARRY4(uVar6,unaff_r7)) || (uVar19 < uVar15)) goto LAB_00fdcdec;
          FUN_00fda6fc(&local_34,(uVar4 & 0x1f) >> 4,iVar12,pbVar11,uVar20,pbVar3 + unaff_r7,uVar6);
          local_48 = (char)local_28;
          if ((char)local_28 != '\x04') goto LAB_00fdcb1c;
          uVar7 = (uVar7 + uVar6) - 5;
        } while (local_5c < param_4);
      }
      local_54 = uVar7;
    }
LAB_00fdcd80:
    local_48 = '\x04';
    goto LAB_00fdcd88;
  case 6:
    iVar12 = param_2 + 0x100;
    if ((bVar17 & 8) == 0) {
      if (*(char *)(param_2 + 0x200) < '\0') {
        FUN_00fdaaec(&local_54,(uVar4 & 0x1f) >> 4,iVar12,param_3,param_4,pbVar3,uVar19);
        goto LAB_00fdcd88;
      }
      if (param_4 != 0) {
        uVar15 = 0;
        uVar20 = 0;
        do {
          local_78 = &DAT_0188158c;
          local_64 = uVar19;
          if ((uVar19 < uVar7) || (uVar7 < uVar20)) {
            local_68 = uVar20;
            local_5c = uVar7;
            goto LAB_00fdca4c;
          }
          FUN_00fdaaec(&local_44,(uVar4 & 0x1f) >> 4,iVar12,param_3 + uVar15,param_4 - uVar15,
                       pbVar3 + uVar20,uVar7 - uVar20);
          if (local_38 == '\x04') {
            break;
          }
          local_68 = local_44 + uVar15;
          uVar15 = local_68 + 4;
          bVar23 = 0xfffffffa < local_68;
          bVar22 = local_68 == 0xfffffffb;
          if (local_68 < 0xfffffffc) {
            bVar23 = param_4 <= uVar15;
            bVar22 = uVar15 == param_4;
          }
          if (bVar23 && !bVar22) goto LAB_00fdca24;
          uVar9 = 0;
          pbVar11 = (byte *)(param_3 + local_68);
          if ((((*(char *)(iVar12 + (uint)pbVar11[3]) == -0x7e) &&
               (uVar9 = 1, *(char *)(iVar12 + (uint)pbVar11[2]) == -0x7e)) &&
              (uVar9 = 2, *(char *)(iVar12 + (uint)pbVar11[1]) == -0x7e)) &&
             (uVar9 = 3, *(char *)(iVar12 + (uint)*pbVar11) == -0x7e)) {
            uVar9 = 4;
          }
          uVar6 = 4 - uVar9;
          bVar22 = uVar9 == 4;
          if (!bVar22) {
            uVar9 = uVar6 * 3;
            unaff_r7 = uVar6 * 6 & 6;
          }
          if (bVar22 || unaff_r7 == 6) goto LAB_00fdcc3c;
          local_5c = uVar6 + local_68;
          if ((CARRY4(uVar6,local_68)) || (param_4 < local_5c)) goto LAB_00fdcef8;
          unaff_r7 = local_40 + uVar20;
          uVar9 = (uVar9 & 0x7fffffff) >> 2;
          uVar20 = uVar9 + unaff_r7;
          if ((CARRY4(uVar9,unaff_r7)) || (uVar19 < uVar20)) {
            local_68 = unaff_r7;
            local_5c = uVar20;
            goto LAB_00fdcdf4;
          }
          FUN_00fdaaec(&local_34,(uVar4 & 0x1f) >> 4,iVar12,pbVar11,uVar6,pbVar3 + unaff_r7,uVar9);
          local_48 = (char)local_28;
          if ((char)local_28 != '\x04') goto LAB_00fdcac0;
          uVar7 = (uVar7 + uVar9) - 3;
        } while (uVar15 < param_4);
      }
    }
    else {
      if (*(char *)(param_2 + 0x200) < '\0') {
        FUN_00fdad54(&local_54,(uVar4 & 0x1f) >> 4,iVar12,param_3,param_4,pbVar3,uVar19);
        goto LAB_00fdcd88;
      }
      if (param_4 != 0) {
        uVar15 = 0;
        uVar20 = 0;
        do {
          local_78 = &DAT_0188158c;
          local_64 = uVar19;
          if ((uVar19 < uVar7) || (uVar7 < uVar20)) {
            local_68 = uVar20;
            local_5c = uVar7;
            goto LAB_00fdca4c;
          }
          FUN_00fdad54(&local_44,(uVar4 & 0x1f) >> 4,iVar12,param_3 + uVar15,param_4 - uVar15,
                       pbVar3 + uVar20,uVar7 - uVar20);
          if (local_38 == '\x04') goto LAB_00fdca84;
          local_68 = local_44 + uVar15;
          uVar15 = local_68 + 4;
          bVar23 = 0xfffffffa < local_68;
          bVar22 = local_68 == 0xfffffffb;
          if (local_68 < 0xfffffffc) {
            bVar23 = param_4 <= uVar15;
            bVar22 = uVar15 == param_4;
          }
          if (bVar23 && !bVar22) goto LAB_00fdca24;
          iVar10 = 0;
          pbVar11 = (byte *)(param_3 + local_68);
          if ((((*(char *)(iVar12 + (uint)pbVar11[3]) == -0x7e) &&
               (iVar10 = 1, *(char *)(iVar12 + (uint)pbVar11[2]) == -0x7e)) &&
              (iVar10 = 2, *(char *)(iVar12 + (uint)pbVar11[1]) == -0x7e)) &&
             (iVar10 = 3, *(char *)(iVar12 + (uint)*pbVar11) == -0x7e)) {
            iVar10 = 4;
          }
          uVar6 = 4 - iVar10;
          if ((iVar10 == 4) || ((uVar6 * 6 & 6) == 6)) goto LAB_00fdcc3c;
          local_5c = uVar6 + local_68;
          if ((CARRY4(uVar6,local_68)) || (param_4 < local_5c)) goto LAB_00fdcef8;
          uVar18 = local_40 + uVar20;
          uVar9 = uVar6 * 6 >> 3;
          uVar20 = uVar9 + uVar18;
          if ((CARRY4(uVar9,uVar18)) || (uVar19 < uVar20)) {
            local_68 = uVar18;
            local_5c = uVar20;
            goto LAB_00fdcdf4;
          }
          FUN_00fdad54(&local_34,(uVar4 & 0x1f) >> 4,iVar12,pbVar11,uVar6,pbVar3 + uVar18,uVar9);
          if ((char)local_28 != '\x04') {
            local_48 = (char)local_28;
            local_30 = uVar18;
            goto LAB_00fdcc78;
          }
          uVar7 = (uVar7 + uVar9) - 3;
        } while (uVar15 < param_4);
      }
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("explicit panic",0xe,&DAT_0188160c);
  }
LAB_00fdca94:
  local_48 = '\x04';
  local_54 = uVar7;
  goto LAB_00fdcd88;
LAB_00fdca24:
  local_5c = uVar15;
  goto LAB_00fdca28;
LAB_00fdcc3c:
  local_4c = uVar6 + local_68;
  goto LAB_00fdcc40;
LAB_00fdcea4:
  local_78 = &DAT_0188157c;
  goto LAB_00fdca48;
LAB_00fdcae4:
  local_48 = '\x03';
  local_54 = local_68;
  local_4c = uVar20 + local_68;
  goto LAB_00fdcd88;
LAB_00fdce48:
  local_78 = &DAT_0188156c;
  local_5c = uVar6;
  goto LAB_00fdca48;
LAB_00fdcb1c:
  local_2c = local_2c + local_68;
  local_54 = local_68;
  local_50 = unaff_r7;
  local_4c = local_2c;
  local_30 = unaff_r7;
  goto LAB_00fdcd88;
code_r0x00fdc77c:
  if (iVar10 == 0) {
    uVar6 = 0;
    uVar20 = 0;
    iVar10 = 1;
    pbVar8 = pbVar3 + local_68;
    do {
      if (0xf < *(byte *)(iVar12 + (uint)pbVar11[uVar20])) goto LAB_00fdca68;
      if (0xf < *(byte *)(iVar12 + (uint)pbVar11[uVar20 + 1])) goto LAB_00fdca64;
      *pbVar8 = *(byte *)(iVar12 + (uint)pbVar11[uVar20]) |
                *(byte *)(iVar12 + (uint)pbVar11[uVar20 + 1]) << 4;
      uVar20 = uVar20 + 2;
      iVar10 = iVar10 + -1;
      pbVar8 = pbVar8 + 1;
    } while (iVar10 != 0);
  }
  local_5c = (local_5c + uVar15) - 1;
  if (param_4 <= uVar4) goto LAB_00fdcd7c;
  goto LAB_00fdc630;
LAB_00fdcf20:
  local_64 = uVar19;
  local_78 = &DAT_0188158c;
  local_68 = uVar7;
  goto LAB_00fdca4c;
LAB_00fdcfac:
  local_78 = &DAT_018814ec;
  local_5c = local_64;
  goto LAB_00fdca48;
code_r0x00fdc5b0:
  if (iVar10 == 0) {
    uVar6 = 0;
    uVar20 = 0;
    iVar10 = 1;
    pbVar8 = pbVar3 + local_68;
    do {
      if (0xf < *(byte *)(iVar12 + (uint)pbVar11[uVar20])) goto LAB_00fdca68;
      if (0xf < *(byte *)(iVar12 + (uint)pbVar11[uVar20 + 1])) goto LAB_00fdca64;
      *pbVar8 = *(byte *)(iVar12 + (uint)pbVar11[uVar20 + 1]) |
                *(byte *)(iVar12 + (uint)pbVar11[uVar20]) << 4;
      uVar20 = uVar20 + 2;
      iVar10 = iVar10 + -1;
      pbVar8 = pbVar8 + 1;
    } while (iVar10 != 0);
  }
  local_5c = (local_5c + uVar15) - 1;
  if (param_4 <= uVar4) goto LAB_00fdcd7c;
  goto LAB_00fdc464;
LAB_00fdca64:
  uVar6 = 1;
LAB_00fdca68:
  local_4c = (uVar6 | uVar20) + local_54;
  local_48 = '\x01';
  local_50 = local_68;
  goto LAB_00fdcd88;
LAB_00fdcf28:
  local_78 = &DAT_0188156c;
  local_68 = local_54;
  local_64 = param_4;
  local_5c = uVar20;
  goto LAB_00fdca48;
LAB_00fdcc9c:
  local_4c = uVar15 + local_54;
  goto LAB_00fdcca8;
LAB_00fdcf68:
  local_78 = &DAT_0188157c;
  local_68 = local_54;
  local_64 = param_4;
  local_5c = uVar4;
  goto LAB_00fdca48;
LAB_00fdcf50:
  local_78 = &DAT_0188157c;
  local_68 = local_54;
  local_64 = param_4;
  local_5c = uVar4;
  goto LAB_00fdca48;
LAB_00fdce00:
  local_5c = uVar7;
LAB_00fdce80:
  local_78 = &DAT_0188158c;
  local_64 = uVar19;
  local_68 = uVar15;
  goto LAB_00fdca4c;
LAB_00fdcaa8:
LAB_00fdcaac:
  local_48 = '\x04';
  local_54 = uVar7;
  goto LAB_00fdcd88;
LAB_00fdce30:
  local_5c = uVar20;
LAB_00fdca28:
  local_78 = &DAT_0188157c;
  local_64 = param_4;
  goto LAB_00fdca48;
LAB_00fdcb08:
  local_4c = uVar6 + local_68;
  local_48 = '\x03';
  local_54 = local_68;
  goto LAB_00fdcd88;
LAB_00fdcef8:
  local_78 = &DAT_0188156c;
  local_64 = param_4;
  goto LAB_00fdca48;
LAB_00fdcb40:
  local_4c = local_2c + local_68;
  local_54 = local_68;
  local_50 = unaff_r7;
  local_30 = unaff_r7;
  local_2c = local_4c;
  goto LAB_00fdcd88;
LAB_00fdca84:
  goto LAB_00fdca94;
LAB_00fdca38:
  local_78 = &DAT_0188157c;
  goto LAB_00fdca48;
LAB_00fdcc34:
  local_4c = uVar4 + local_68;
LAB_00fdcc40:
  local_54 = local_68;
  goto LAB_00fdcca8;
LAB_00fdce60:
  local_64 = uVar19;
  local_78 = &DAT_0188155c;
  local_68 = uVar6;
  local_5c = uVar15;
  goto LAB_00fdca4c;
LAB_00fdcc4c:
  local_30 = uVar6;
LAB_00fdcc78:
  local_54 = local_68;
  local_4c = local_2c + local_68;
  local_50 = local_30;
  local_2c = local_4c;
  goto LAB_00fdcd88;
LAB_00fdce08:
  local_64 = uVar19;
  local_78 = &DAT_0188158c;
  local_68 = uVar15;
  local_5c = uVar7;
  goto LAB_00fdca4c;
LAB_00fdca90:
  goto LAB_00fdca94;
LAB_00fdcaf8:
  local_4c = uVar4 + local_68;
  local_54 = local_68;
LAB_00fdcca8:
  local_48 = '\x03';
  goto LAB_00fdcd88;
LAB_00fdce14:
  local_78 = &DAT_0188156c;
  local_5c = uVar20;
  goto LAB_00fdca48;
LAB_00fdcac0:
  local_4c = local_2c + local_68;
  local_54 = local_68;
  local_50 = unaff_r7;
  local_30 = unaff_r7;
  local_2c = local_4c;
  goto LAB_00fdcd88;
LAB_00fdcb64:
  uVar4 = 1;
LAB_00fdcb68:
  param_4 = uVar4 | uVar15;
LAB_00fdcb6c:
  local_54 = param_4 & 0xfffffffe;
  local_48 = '\x01';
  local_4c = param_4;
LAB_00fdcd88:
  if (local_48 == '\x04') {
    if (local_54 < uVar19) {
      uVar19 = local_54;
    }
    *param_1 = local_74;
    param_1[1] = (uint)pbVar3;
    param_1[2] = uVar19;
  }
  else {
    *(char *)(param_1 + 2) = local_48;
    *param_1 = 0x80000000;
    param_1[1] = local_4c;
    if (local_74 != 0) {
      if (pbVar3 == (byte *)0x0) {
        return;
      }
      iVar12 = FUN_016d3bc8();
      uVar19 = pbVar3[-3] & 0x1f;
      if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
         (uVar7 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar10 = uVar7 - 0x10, uVar7 == 0)) {
        iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar7 = (uint)(pbVar3[-3] >> 5);
      iVar16 = *(int *)(iVar12 + 8) + 0x10;
      iVar13 = iVar10 * uVar19 + iVar10 + -4;
      iVar10 = iVar16 + iVar13;
      if (4 < uVar7) {
        if (uVar7 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar7 = *(uint *)(iVar10 + -4);
        if (uVar7 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar10 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar10 - (int)pbVar3) < uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar10 - uVar7) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar16 + iVar13) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar17 = *(byte *)(iVar12 + 0x14);
      uVar7 = 1 << uVar19;
      pbVar3[-3] = 0xff;
      pbVar3[-0xffffffff00000002] = 0;
      pbVar3[-0xffffffff00000001] = 0;
      do {
        uVar15 = *(uint *)(iVar12 + 0x10);
        uVar4 = *(uint *)(iVar12 + 0xc) | uVar15;
        if ((uVar7 & uVar4) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar15 == 0) || (uVar4 + uVar7 == (2 << (bVar17 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar12,uVar19);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar14 = *puVar5;
          FUN_016d6ac4(local_28,unaff_r4);
          *puVar5 = uVar14;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar12 + 0x10) = uVar7 + uVar15;
          return;
        }
        puVar21 = (uint *)(iVar12 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar21);
          uVar4 = *puVar21;
          if (uVar15 != uVar4) goto LAB_016d409c;
          bVar22 = (bool)hasExclusiveAccess(puVar21);
        } while (!bVar22);
        *puVar21 = uVar7 + uVar15;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar15 == uVar4) {
          return;
        }
      } while( true );
    }
  }
  return;
LAB_00fdcdec:
  local_68 = unaff_r7;
  local_5c = uVar15;
LAB_00fdcdf4:
  local_64 = uVar19;
  local_78 = &DAT_0188155c;
LAB_00fdca48:
LAB_00fdca4c:
                    /* WARNING: Subroutine does not return */
  FUN_00faa36c(local_68,local_5c,local_64,local_78);
}

