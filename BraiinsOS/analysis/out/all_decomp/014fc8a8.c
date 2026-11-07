// FUN_014fc8a8 @ 014fc8a8 size=1184 calls_out=5 calls_in=3
// strings: punycode{SizeLimitExhausted

int FUN_014fc8a8(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  byte *pbVar14;
  byte *pbVar13;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  code *UNRECOVERED_JUMPTABLE;
  byte bVar18;
  uint uVar19;
  undefined4 uVar20;
  bool bVar21;
  uint uVar22;
  char *pcVar23;
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  bool bVar27;
  undefined4 local_254;
  int local_250;
  uint *local_24c;
  uint local_238;
  uint local_230 [129];
  uint local_2c [2];
  
  uVar25 = 0;
  FUN_016dd606(local_230,0,0x200);
  iVar4 = param_1[3];
  if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x014fccb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,*param_1,param_1[1]);
    return iVar4;
  }
  pbVar5 = (byte *)*param_1;
  pcVar6 = (char *)param_1[2];
  iVar10 = param_1[1];
  cVar1 = *pcVar6;
  if (iVar10 != 0) {
    pbVar14 = pbVar5;
    do {
      pbVar13 = pbVar14 + 1;
      uVar16 = (uint)*pbVar14;
      if (0x7fffffff < (uint)(int)(char)*pbVar14) {
        if (uVar16 < 0xe0) {
          uVar16 = pbVar14[1] & 0x3f | (uVar16 & 0x1f) << 6;
          pbVar13 = pbVar14 + 2;
        }
        else {
          uVar22 = pbVar14[2] & 0x3f | (pbVar14[1] & 0x3f) << 6;
          if (uVar16 < 0xf0) {
            uVar16 = uVar22 | (uVar16 & 0x1f) << 0xc;
            pbVar13 = pbVar14 + 3;
          }
          else {
            uVar16 = pbVar14[3] & 0x3f | uVar22 << 6 | (uVar16 & 7) << 0x12;
            pbVar13 = pbVar14 + 4;
          }
        }
      }
      if (uVar25 == 0x80) goto LAB_014fcc00;
      local_230[uVar25] = uVar16;
      uVar25 = uVar25 + 1;
      pbVar14 = pbVar13;
    } while (pbVar13 != pbVar5 + iVar10);
  }
  uVar22 = 0;
  local_238 = 0x80;
  uVar16 = 0x80;
  if (0x80 < uVar25) {
    uVar16 = uVar25;
  }
  local_24c = local_230 + uVar25;
  local_250 = uVar25 * 4;
  local_254 = 700;
  uVar7 = 0x48;
  pcVar23 = pcVar6;
  while( true ) {
    local_250 = local_250 + 4;
    pcVar23 = pcVar23 + 1;
    uVar11 = 0x24;
    bVar27 = false;
    bVar21 = true;
    uVar15 = 1;
    uVar26 = 0;
    while( true ) {
      uVar17 = uVar11 - uVar7;
      if (uVar11 < uVar7) {
        uVar17 = 0;
      }
      if (uVar17 < 2) {
        uVar17 = 1;
      }
      if (0x19 < uVar17) {
        uVar17 = 0x1a;
      }
      if (bVar27) {
        if (pcVar23 == pcVar6 + iVar4) goto LAB_014fcc00;
        cVar2 = *pcVar23;
        pcVar23 = pcVar23 + 1;
      }
      else {
        cVar2 = cVar1;
        if (!bVar21) goto LAB_014fcc00;
      }
      bVar18 = cVar2 + 0x9f;
      if (0x19 < (byte)(cVar2 + 0x9fU)) {
        if (9 < (byte)(cVar2 - 0x30U)) goto LAB_014fcc00;
        bVar18 = cVar2 - 0x16;
      }
      lVar3 = (ulonglong)uVar15 * (ulonglong)(uint)bVar18;
      uVar19 = (uint)lVar3;
      if (((int)((ulonglong)lVar3 >> 0x20) != 0) ||
         (bVar27 = CARRY4(uVar19,uVar26), uVar26 = uVar19 + uVar26, bVar27)) goto LAB_014fcc00;
      if (bVar18 < uVar17) break;
      lVar3 = (ulonglong)(0x24 - uVar17) * (ulonglong)uVar15;
      uVar15 = (uint)lVar3;
      if ((int)((ulonglong)lVar3 >> 0x20) != 0) goto LAB_014fcc00;
      uVar11 = uVar11 + 0x24;
      bVar21 = false;
      bVar27 = true;
    }
    if (CARRY4(uVar26,uVar22)) break;
    uVar11 = uVar25 + 1;
    uVar7 = FUN_018462e8(uVar26 + uVar22,uVar11);
    puVar24 = local_230;
    bVar27 = CARRY4(uVar7,local_238);
    local_238 = uVar7 + local_238;
    if (((bVar27) || ((local_238 ^ 0xd800) - 0x110000 < 0xffef0800)) || (uVar25 == uVar16)) break;
    uVar22 = (uVar26 + uVar22) - uVar7 * uVar11;
    uVar7 = uVar25;
    puVar12 = local_24c;
    if (uVar22 < uVar25) {
      do {
        uVar7 = uVar7 - 1;
        *puVar12 = puVar12[-1];
        puVar12 = puVar12 + -1;
      } while (uVar22 < uVar7);
    }
    else if (0x7f < uVar22) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar22,0x80,&DAT_018a7258);
    }
    puVar24[uVar22] = local_238;
    if (pcVar23 == pcVar6 + iVar4) {
      if (0x7f < uVar25) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar11,0x80,&DAT_018a7248);
      }
      do {
        local_2c[0] = *puVar24;
        iVar4 = FUN_00faaf34(local_2c,param_2);
        if (iVar4 != 0) {
          return iVar4;
        }
        puVar24 = puVar24 + 1;
        local_250 = local_250 + -4;
      } while (local_250 != 0);
      return 0;
    }
    iVar9 = FUN_018462e8(uVar26,local_254);
    iVar8 = FUN_018462e8(iVar9,uVar11);
    cVar1 = *pcVar23;
    uVar25 = iVar8 + iVar9;
    iVar9 = 0;
    if (uVar25 < 0x1c8) {
      uVar7 = uVar25;
    }
    else {
      do {
        iVar9 = iVar9 + 0x24;
        uVar7 = uVar25 / 0x23;
        bVar27 = 0x3e57 < uVar25;
        uVar25 = uVar7;
      } while (bVar27);
    }
    uVar22 = uVar22 + 1;
    iVar8 = FUN_018462e8(uVar7 * 0x24 & 0xffff,uVar7 + 0x26 & 0xffff);
    uVar7 = iVar9 + iVar8;
    local_24c = local_24c + 1;
    local_254 = 2;
    uVar25 = uVar11;
  }
LAB_014fcc00:
  uVar20 = *param_2;
  UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
  iVar9 = (*UNRECOVERED_JUMPTABLE)(uVar20,"punycode{SizeLimitExhausted",9);
  if (iVar9 != 0) {
    return 1;
  }
  if (iVar10 != 0) {
    iVar10 = (*UNRECOVERED_JUMPTABLE)(uVar20,pbVar5);
    if (iVar10 != 0) {
      return 1;
    }
    iVar10 = (*UNRECOVERED_JUMPTABLE)(uVar20,&DAT_00410f51,1);
    if (iVar10 != 0) {
      return 1;
    }
  }
  iVar4 = (*UNRECOVERED_JUMPTABLE)(uVar20,pcVar6,iVar4);
  if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x014fccd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar4 = (*UNRECOVERED_JUMPTABLE)(uVar20,"}",1);
    return iVar4;
  }
  return 1;
}

