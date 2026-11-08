// FUN_018a2c68 @ 018a2c68 size=1144 calls_out=4 calls_in=3
// strings: punycode{

int FUN_018a2c68(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  byte *pbVar4;
  char *pcVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  byte *pbVar14;
  byte *pbVar13;
  uint uVar15;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar16;
  undefined4 uVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  uint uVar25;
  int iVar26;
  bool bVar27;
  undefined4 local_24c;
  int local_248;
  uint *local_244;
  uint local_240;
  uint local_228 [128];
  uint local_28;
  
  puVar24 = local_228;
  uVar23 = 0;
  FUN_01bed93e(puVar24,0,0x200);
  iVar26 = param_1[3];
  if (iVar26 == 0) {
                    /* WARNING: Could not recover jumptable at 0x018a306c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar26 = (**(code **)(param_2[1] + 0xc))(*param_2,*param_1,param_1[1]);
    return iVar26;
  }
  pbVar4 = (byte *)*param_1;
  pcVar5 = (char *)param_1[2];
  iVar9 = param_1[1];
  cVar1 = *pcVar5;
  if (iVar9 != 0) {
    uVar23 = 0;
    pbVar14 = pbVar4;
    do {
      pbVar13 = pbVar14 + 1;
      puVar11 = (undefined1 *)(uint)*pbVar14;
      if (0x7fffffff < (uint)(int)(char)*pbVar14) {
        if (puVar11 < (undefined1 *)0xe0) {
          puVar11 = (undefined1 *)(pbVar14[1] & 0x3f | ((uint)puVar11 & 0x1f) << 6);
          pbVar13 = pbVar14 + 2;
        }
        else {
          uVar22 = pbVar14[2] & 0x3f | (pbVar14[1] & 0x3f) << 6;
          if (puVar11 < (undefined1 *)0xf0) {
            puVar11 = (undefined1 *)(uVar22 | ((uint)puVar11 & 0x1f) << 0xc);
            pbVar13 = pbVar14 + 3;
          }
          else {
            puVar11 = (undefined1 *)(pbVar14[3] & 0x3f | uVar22 << 6 | ((uint)puVar11 & 7) << 0x12);
            if (puVar11 == &DAT_00110000) break;
            pbVar13 = pbVar14 + 4;
          }
        }
      }
      if (uVar23 == 0x80) goto LAB_018a2fac;
      puVar24[uVar23] = (uint)puVar11;
      uVar23 = uVar23 + 1;
      pbVar14 = pbVar13;
    } while (pbVar13 != pbVar4 + iVar9);
  }
  uVar25 = 0x48;
  uVar22 = 0;
  local_244 = puVar24 + uVar23;
  local_248 = uVar23 * 4;
  local_24c = 700;
  local_240 = 0x80;
  pcVar16 = pcVar5;
  while( true ) {
    local_248 = local_248 + 4;
    pcVar16 = pcVar16 + 1;
    uVar10 = 0x24;
    bVar21 = false;
    bVar27 = true;
    uVar20 = 0;
    uVar12 = 1;
    while( true ) {
      uVar15 = uVar10 - uVar25;
      if (uVar10 < uVar25) {
        uVar15 = 0;
      }
      if (uVar15 < 2) {
        uVar15 = 1;
      }
      if (0x19 < uVar15) {
        uVar15 = 0x1a;
      }
      if (bVar21) {
        if (pcVar16 == pcVar5 + iVar26) goto LAB_018a2fac;
        cVar2 = *pcVar16;
        pcVar16 = pcVar16 + 1;
      }
      else {
        cVar2 = cVar1;
        if (!bVar27) goto LAB_018a2fac;
      }
      bVar18 = cVar2 + 0x9f;
      if (0x19 < (byte)(cVar2 + 0x9fU)) {
        if (9 < (byte)(cVar2 - 0x30U)) goto LAB_018a2fac;
        bVar18 = cVar2 - 0x16;
      }
      lVar3 = (ulonglong)uVar12 * (ulonglong)(uint)bVar18;
      uVar19 = (uint)lVar3;
      if (((int)((ulonglong)lVar3 >> 0x20) != 0) ||
         (bVar27 = CARRY4(uVar19,uVar20), uVar20 = uVar19 + uVar20, bVar27)) goto LAB_018a2fac;
      if (bVar18 < uVar15) break;
      uVar10 = uVar10 + 0x24;
      bVar27 = false;
      bVar21 = true;
      lVar3 = (ulonglong)(0x24 - uVar15) * (ulonglong)uVar12;
      uVar12 = (uint)lVar3;
      if ((int)((ulonglong)lVar3 >> 0x20) != 0) goto LAB_018a2fac;
    }
    if (CARRY4(uVar20,uVar22)) break;
    uVar10 = uVar23 + 1;
    uVar25 = FUN_01bf1250(uVar20 + uVar22,uVar10);
    bVar27 = CARRY4(uVar25,local_240);
    local_240 = uVar25 + local_240;
    if (((bVar27) || ((local_240 ^ 0xd800) - 0x110000 < 0xffef0800)) || (0x7f < uVar23)) break;
    uVar22 = (uVar20 + uVar22) - uVar25 * uVar10;
    puVar6 = local_244;
    if (uVar22 < uVar23) {
      do {
        uVar23 = uVar23 - 1;
        *puVar6 = puVar6[-1];
        puVar6 = puVar6 + -1;
      } while (uVar22 < uVar23);
    }
    else if (0x7f < uVar22) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar22,0x80,&DAT_01d222a4);
    }
    puVar24[uVar22] = local_240;
    if (pcVar16 == pcVar5 + iVar26) {
      do {
        local_28 = *puVar24;
        iVar26 = FUN_012fbb84(&local_28,param_2);
        if (iVar26 != 0) {
          return iVar26;
        }
        puVar24 = puVar24 + 1;
        local_248 = local_248 + -4;
      } while (local_248 != 0);
      return 0;
    }
    iVar8 = FUN_01bf1250(uVar20,local_24c);
    iVar7 = FUN_01bf1250(iVar8,uVar10);
    cVar1 = *pcVar16;
    uVar23 = iVar7 + iVar8;
    iVar8 = 0;
    if (uVar23 < 0x1c8) {
      uVar25 = uVar23;
    }
    else {
      do {
        iVar8 = iVar8 + 0x24;
        uVar25 = uVar23 / 0x23;
        bVar27 = 0x3e57 < uVar23;
        uVar23 = uVar25;
      } while (bVar27);
    }
    uVar22 = uVar22 + 1;
    iVar7 = FUN_01bf1250(uVar25 * 0x24 & 0xffff,uVar25 + 0x26 & 0xffff);
    uVar25 = iVar8 + iVar7;
    local_244 = local_244 + 1;
    local_24c = 2;
    uVar23 = uVar10;
  }
LAB_018a2fac:
  uVar17 = *param_2;
  UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
  iVar8 = (*UNRECOVERED_JUMPTABLE)(uVar17,"punycode{",9);
  if (iVar8 != 0) {
    return 1;
  }
  if (iVar9 != 0) {
    iVar9 = (*UNRECOVERED_JUMPTABLE)(uVar17,pbVar4);
    if (iVar9 != 0) {
      return 1;
    }
    iVar9 = (*UNRECOVERED_JUMPTABLE)(uVar17,"-",1);
    if (iVar9 != 0) {
      return 1;
    }
  }
  iVar26 = (*UNRECOVERED_JUMPTABLE)(uVar17,pcVar5,iVar26);
  if (iVar26 == 0) {
                    /* WARNING: Could not recover jumptable at 0x018a308c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar26 = (*UNRECOVERED_JUMPTABLE)(uVar17,"}",1);
    return iVar26;
  }
  return 1;
}

