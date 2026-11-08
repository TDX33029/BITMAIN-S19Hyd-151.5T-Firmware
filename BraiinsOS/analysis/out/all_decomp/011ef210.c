// FUN_011ef210 @ 011ef210 size=1020 calls_out=5 calls_in=1
// strings: 

void FUN_011ef210(undefined4 *param_1,int param_2,char *param_3,uint param_4)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint uVar10;
  byte bVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  char *pcVar21;
  char *pcVar20;
  uint uVar22;
  bool bVar23;
  uint local_2c;
  
  puVar9 = (uint *)(param_2 + 0x1dc);
  uVar17 = *puVar9;
  uVar14 = 0;
  puVar5 = puVar9;
  if (0x3b < uVar17) {
    puVar5 = (uint *)(param_2 + 4);
    uVar17 = *puVar5;
  }
  uVar18 = param_4;
  if (uVar17 != 0) {
    *puVar5 = 0;
  }
  do {
    uVar17 = uVar18;
    if (uVar17 == 0) goto LAB_011ef27c;
    uVar18 = uVar17 - 1;
  } while (param_3[uVar17 - 1] != '-');
  if (uVar18 == 0) {
LAB_011ef27c:
    uVar18 = 0;
    pcVar20 = param_3;
  }
  else {
    param_4 = param_4 - uVar17;
    pcVar20 = param_3 + uVar17;
  }
  while (uVar18 != uVar14) {
    pcVar6 = param_3 + uVar14;
    uVar14 = uVar14 + 1;
    if (0x7fffffff < (uint)(int)*pcVar6) goto LAB_011ef2a4;
  }
  if (param_4 == 0) goto LAB_011ef558;
  pcVar6 = pcVar20 + param_4;
  uVar14 = 0;
  uVar22 = 0x48;
  uVar17 = 0x80;
  puVar5 = (uint *)(param_2 + 4);
  local_2c = uVar18;
  while( true ) {
    uVar10 = 0x24;
    uVar15 = 1;
    uVar19 = uVar14;
    pcVar21 = pcVar20;
    while( true ) {
      pcVar20 = pcVar21 + 1;
      cVar1 = *pcVar21;
      if ((byte)(cVar1 - 0x30U) < 10) {
        bVar11 = cVar1 - 0x16;
      }
      else {
        bVar11 = cVar1 + 0xbf;
        if ((0x19 < (byte)(cVar1 + 0xbfU)) && (bVar11 = cVar1 + 0x9f, 0x19 < (byte)(cVar1 + 0x9fU)))
        goto LAB_011ef2a4;
      }
      lVar2 = (ulonglong)uVar15 * (ulonglong)(uint)bVar11;
      uVar7 = (uint)lVar2;
      if (((int)((ulonglong)lVar2 >> 0x20) != 0) ||
         (bVar23 = CARRY4(uVar7,uVar19), uVar19 = uVar7 + uVar19, bVar23)) goto LAB_011ef2a4;
      uVar7 = 0x1a;
      if (uVar10 < uVar22 + 0x1a) {
        uVar7 = uVar10 - uVar22;
      }
      if (uVar10 <= uVar22) {
        uVar7 = 1;
      }
      if (bVar11 < uVar7) break;
      lVar2 = (ulonglong)(0x24 - uVar7) * (ulonglong)uVar15;
      uVar15 = (uint)lVar2;
      if ((int)((ulonglong)lVar2 >> 0x20) != 0) goto LAB_011ef2a4;
      uVar10 = uVar10 + 0x24;
      pcVar21 = pcVar20;
      if (pcVar20 == pcVar6) goto LAB_011ef2a4;
    }
    bVar23 = 0xfffffffe < local_2c;
    local_2c = local_2c + 1;
    if (bVar23) {
                    /* WARNING: Subroutine does not return */
      FUN_00faf2a4(&DAT_0188a318);
    }
    uVar8 = 2;
    if (uVar14 == 0) {
      uVar8 = 700;
    }
    iVar3 = FUN_018462e8(uVar19 - uVar14,uVar8);
    iVar4 = FUN_018462e8(iVar3,local_2c);
    uVar14 = iVar4 + iVar3;
    iVar3 = 0;
    uVar22 = uVar14;
    if (0x1c7 < uVar14) {
      do {
        iVar3 = iVar3 + 0x24;
        uVar14 = uVar22 / 0x23;
        bVar23 = 0x3e57 < uVar22;
        uVar22 = uVar14;
      } while (bVar23);
    }
    iVar4 = FUN_018462e8(uVar14 * 0x24 & 0xffff,uVar14 + 0x26 & 0xffff);
    uVar14 = FUN_018462e8(uVar19,local_2c);
    bVar23 = CARRY4(uVar14,uVar17);
    uVar17 = uVar14 + uVar17;
    if (bVar23) {
      *param_1 = 0;
      return;
    }
    if ((uVar17 ^ 0xd800) - 0x110000 < 0xffef0800) break;
    uVar10 = *puVar9;
    uVar19 = uVar19 - uVar14 * local_2c;
    uVar14 = uVar10;
    puVar12 = puVar5;
    if (0x3b < uVar10) {
      puVar12 = *(uint **)(param_2 + 8);
      uVar14 = *(uint *)(param_2 + 4);
    }
    if (uVar14 != 0) {
      iVar16 = uVar14 << 3;
      do {
        if (uVar19 <= *puVar12) {
          *puVar12 = *puVar12 + 1;
        }
        iVar16 = iVar16 + -8;
        puVar12 = puVar12 + 2;
      } while (iVar16 != 0);
      uVar10 = *puVar9;
    }
    if (uVar10 < 0x3c) {
      uVar14 = 0x3b;
      puVar12 = puVar5;
      puVar13 = puVar9;
    }
    else {
      puVar12 = *(uint **)(param_2 + 8);
      puVar13 = puVar5;
      uVar14 = uVar10;
      uVar10 = *(uint *)(param_2 + 4);
    }
    if (uVar10 == uVar14) {
      FUN_011f5b78(param_2);
      uVar10 = *(uint *)(param_2 + 4);
      puVar12 = *(uint **)(param_2 + 8);
      puVar13 = puVar5;
    }
    uVar14 = uVar19 + 1;
    puVar12[uVar10 * 2] = uVar19;
    uVar22 = iVar3 + iVar4;
    (puVar12 + uVar10 * 2)[1] = uVar17;
    *puVar13 = *puVar13 + 1;
    if (pcVar20 == pcVar6) {
LAB_011ef558:
      uVar14 = *(uint *)(param_2 + 0x1dc);
      iVar3 = param_2 + 4;
      if (0x3b < uVar14) {
        uVar14 = *(uint *)(param_2 + 4);
        iVar3 = *(int *)(param_2 + 8);
      }
      if (1 < uVar14) {
        if (uVar14 < 0x15) {
          FUN_010dcef0();
        }
        else {
          FUN_010e0324(iVar3,uVar14);
        }
      }
      uVar17 = *(uint *)(param_2 + 0x1dc);
      iVar3 = *(int *)(param_2 + 8);
      uVar14 = *(uint *)(param_2 + 4);
      if (uVar17 < 0x3c) {
        uVar14 = uVar17;
      }
      *param_1 = param_3;
      param_1[1] = param_3 + uVar18;
      iVar4 = param_2 + 4;
      if (0x3b < uVar17) {
        iVar4 = iVar3;
      }
      param_1[2] = iVar4;
      param_1[3] = uVar14;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = uVar14 + uVar18;
      return;
    }
  }
LAB_011ef2a4:
  *param_1 = 0;
  return;
}

