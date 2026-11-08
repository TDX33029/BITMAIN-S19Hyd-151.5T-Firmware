// FUN_014f6a3c @ 014f6a3c size=1584 calls_out=5 calls_in=3
// strings: punycode{SizeLimitExhausted

undefined4 FUN_014f6a3c(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte *pbVar6;
  byte bVar7;
  int iVar8;
  byte *pbVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  byte *pbVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar21;
  char *pcVar22;
  uint *puVar23;
  undefined4 uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  char *pcVar28;
  uint uVar29;
  char *pcVar30;
  bool bVar31;
  undefined4 local_240;
  uint local_238;
  int local_234;
  uint *local_230;
  uint local_22c;
  uint local_228 [128];
  uint local_28;
  
  uVar26 = 0;
  FUN_016dd606(local_228,0,0x200);
  iVar8 = param_1[3];
  if (iVar8 == 0) {
                    /* WARNING: Could not recover jumptable at 0x014f6f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar24 = (**(code **)(param_2[1] + 0xc))(*param_2,*param_1,param_1[1]);
    return uVar24;
  }
  pbVar9 = (byte *)*param_1;
  pcVar10 = (char *)param_1[2];
  iVar14 = param_1[1];
  cVar1 = *pcVar10;
  if (iVar14 != 0) {
    uVar26 = 0;
    pbVar17 = pbVar9;
    do {
      uVar20 = (uint)*pbVar17;
      pbVar6 = pbVar17 + 1;
      if ((char)*pbVar17 < '\0') {
        if (uVar20 < 0xe0) {
          uVar20 = pbVar17[1] & 0x3f | (uVar20 & 0x1f) << 6;
          pbVar6 = pbVar17 + 2;
        }
        else {
          uVar29 = pbVar17[2] & 0x3f | (pbVar17[1] & 0x3f) << 6;
          if (uVar20 < 0xf0) {
            uVar20 = uVar29 | (uVar20 & 0x1f) << 0xc;
            pbVar6 = pbVar17 + 3;
          }
          else {
            uVar20 = pbVar17[3] & 0x3f | uVar29 << 6 | (uVar20 & 7) << 0x12;
            pbVar6 = pbVar17 + 4;
          }
        }
      }
      pbVar17 = pbVar6;
      if (uVar26 == 0x80) goto LAB_014f6b50;
      local_228[uVar26] = uVar20;
      uVar26 = uVar26 + 1;
    } while (pbVar17 != pbVar9 + iVar14);
  }
  pcVar30 = pcVar10 + iVar8;
  local_22c = 0x80;
  uVar20 = 0x80;
  if (0x80 < uVar26) {
    uVar20 = uVar26;
  }
  local_230 = local_228 + uVar26;
  local_234 = uVar26 * 4;
  local_240 = 700;
  local_238 = 0;
  uVar29 = 0x48;
  pcVar28 = pcVar10;
  do {
    local_234 = local_234 + 4;
    uVar15 = 0x24 - uVar29;
    if (0x24 < uVar29) {
      uVar15 = 0;
    }
    if (uVar15 < 2) {
      uVar15 = 1;
    }
    bVar7 = cVar1 + 0x9f;
    if (0x19 < uVar15) {
      uVar15 = 0x1a;
    }
    if (0x19 < (byte)(cVar1 + 0x9fU)) {
      if (9 < (byte)(cVar1 - 0x30U)) goto LAB_014f6b50;
      bVar7 = cVar1 - 0x16;
    }
    pcVar28 = pcVar28 + 1;
    uVar27 = (uint)bVar7;
    if (uVar15 <= uVar27) {
      if (pcVar28 == pcVar30) {
LAB_014f6b50:
        uVar24 = *param_2;
        UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
        iVar11 = (*UNRECOVERED_JUMPTABLE)(uVar24,"punycode{SizeLimitExhausted",9);
        if ((iVar11 == 0) &&
           (((iVar14 == 0 ||
             ((iVar14 = (*UNRECOVERED_JUMPTABLE)(uVar24,pbVar9), iVar14 == 0 &&
              (iVar14 = (*UNRECOVERED_JUMPTABLE)(uVar24,&DAT_00410f51,1), iVar14 == 0)))) &&
            (iVar8 = (*UNRECOVERED_JUMPTABLE)(uVar24,pcVar10,iVar8), iVar8 == 0)))) {
                    /* WARNING: Could not recover jumptable at 0x014f6f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar24 = (*UNRECOVERED_JUMPTABLE)(uVar24,"}",1);
          return uVar24;
        }
        return 1;
      }
      uVar25 = 0x48 - uVar29;
      if (0x48 < uVar29) {
        uVar25 = 0;
      }
      uVar15 = 0x24 - uVar15;
      if (uVar25 < 2) {
        uVar25 = 1;
      }
      if (0x19 < uVar25) {
        uVar25 = 0x1a;
      }
      uVar18 = 0x6c;
      while( true ) {
        pcVar22 = pcVar28 + 1;
        cVar1 = *pcVar28;
        uVar21 = uVar18 - uVar29;
        if (uVar18 < uVar29) {
          uVar21 = 0;
        }
        bVar7 = cVar1 + 0x9f;
        if (0x19 < (byte)(cVar1 + 0x9fU)) {
          if (9 < (byte)(cVar1 - 0x30U)) goto LAB_014f6b50;
          bVar7 = cVar1 - 0x16;
        }
        lVar3 = (ulonglong)uVar15 * (ulonglong)(uint)bVar7;
        uVar12 = (uint)lVar3;
        if (((int)((ulonglong)lVar3 >> 0x20) != 0) ||
           (bVar31 = CARRY4(uVar12,uVar27), uVar27 = uVar12 + uVar27, bVar31)) goto LAB_014f6b50;
        if (bVar7 < uVar25) break;
        lVar3 = (ulonglong)(0x24 - uVar25) * (ulonglong)uVar15;
        uVar15 = (uint)lVar3;
        if ((int)((ulonglong)lVar3 >> 0x20) != 0) goto LAB_014f6b50;
        if (uVar21 < 2) {
          uVar21 = 1;
        }
        if (0x19 < uVar21) {
          uVar21 = 0x1a;
        }
        uVar18 = uVar18 + 0x24;
        uVar25 = uVar21;
        pcVar28 = pcVar22;
        if (pcVar22 == pcVar30) goto LAB_014f6b50;
      }
      pcVar28 = pcVar28 + 1;
    }
    if (CARRY4(uVar27,local_238)) goto LAB_014f6b50;
    uVar15 = uVar26 + 1;
    uVar29 = FUN_018462e8(uVar27 + local_238,uVar15);
    puVar23 = local_228;
    bVar31 = CARRY4(uVar29,local_22c);
    local_22c = uVar29 + local_22c;
    if (((bVar31) || ((local_22c ^ 0xd800) - 0x110000 < 0xffef0800)) || (uVar26 == uVar20))
    goto LAB_014f6b50;
    local_238 = (uVar27 + local_238) - uVar29 * uVar15;
    uVar29 = uVar26;
    puVar16 = local_230;
    if (local_238 < uVar26) {
      do {
        uVar29 = uVar29 - 1;
        *puVar16 = puVar16[-1];
        puVar16 = puVar16 + -1;
      } while (local_238 < uVar29);
    }
    else if (0x7f < local_238) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(local_238,0x80,&DAT_018a70b8);
    }
    puVar23[local_238] = local_22c;
    if (pcVar28 == pcVar30) {
      if (0x7f < uVar26) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar15,0x80,&DAT_018a70a8);
      }
      uVar26 = param_2[2];
      uVar24 = *param_2;
      iVar8 = param_2[1];
      while( true ) {
        uVar20 = *puVar23;
        if ((uVar26 & 0x18000000) == 0) {
          iVar14 = (**(code **)(iVar8 + 0x10))(uVar24);
        }
        else {
          uVar2 = (undefined1)uVar20;
          if (uVar20 < 0x80) {
            local_28 = uVar20 & 0xff;
            uVar19 = 1;
          }
          else {
            uVar4 = (undefined1)(uVar20 >> 6);
            if (uVar20 < 0x800) {
              local_28 = (CONCAT11(uVar2,uVar4) & 0x3fff | 0x8000) | 0xc0;
              uVar19 = 2;
            }
            else {
              uVar5 = (undefined1)(uVar20 >> 0xc);
              if (uVar20 >> 0x10 == 0) {
                uVar19 = 3;
                local_28 = (CONCAT21(CONCAT11(uVar2,uVar4),uVar5) & 0x3fffff | 0x800000) &
                           0xffff3fff | 0x80e0;
              }
              else {
                uVar19 = 4;
                local_28 = CONCAT31(CONCAT21(CONCAT11(uVar2,uVar4),uVar5),(char)(uVar20 >> 0x12)) &
                           0x3f3f3fff | 0x808080f0;
              }
            }
          }
          iVar14 = FUN_00faace8(param_2,&local_28,uVar19);
        }
        if (iVar14 != 0) break;
        puVar23 = puVar23 + 1;
        local_234 = local_234 + -4;
        if (local_234 == 0) {
          return 0;
        }
      }
      return 1;
    }
    iVar11 = FUN_018462e8(uVar27,local_240);
    iVar13 = FUN_018462e8(iVar11,uVar15);
    uVar26 = iVar13 + iVar11;
    cVar1 = *pcVar28;
    iVar11 = 0;
    if (uVar26 < 0x1c8) {
      uVar29 = uVar26;
    }
    else {
      do {
        iVar11 = iVar11 + 0x24;
        uVar29 = uVar26 / 0x23;
        bVar31 = 0x3e57 < uVar26;
        uVar26 = uVar29;
      } while (bVar31);
    }
    local_238 = local_238 + 1;
    iVar13 = FUN_018462e8(uVar29 * 0x24 & 0xffff,uVar29 + 0x26 & 0xffff);
    uVar29 = iVar11 + iVar13;
    local_230 = local_230 + 1;
    local_240 = 2;
    uVar26 = uVar15;
  } while( true );
}

