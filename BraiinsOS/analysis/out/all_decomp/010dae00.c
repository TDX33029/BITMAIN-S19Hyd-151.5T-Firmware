// FUN_010dae00 @ 010dae00 size=960 calls_out=5 calls_in=1
// strings: 

void FUN_010dae00(undefined4 *param_1,int param_2,char *param_3,uint param_4)

{
  char cVar1;
  longlong lVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  undefined4 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint *puVar17;
  char *pcVar18;
  char *pcVar20;
  char *pcVar19;
  uint uVar21;
  bool bVar22;
  uint local_2c;
  uint local_28;
  
  puVar15 = (uint *)(param_2 + 0x1dc);
  uVar9 = *puVar15;
  pcVar18 = param_3 + param_4;
  puVar3 = puVar15;
  if (0x3b < uVar9) {
    puVar3 = (uint *)(param_2 + 4);
    uVar9 = *puVar3;
  }
  uVar21 = param_4;
  if (uVar9 != 0) {
    *puVar3 = 0;
  }
  do {
    uVar9 = uVar21;
    pcVar19 = param_3;
    if (uVar9 == 0) {
      uVar21 = 0;
      if (param_4 == 0) goto LAB_010db12c;
      goto LAB_010dae88;
    }
    uVar21 = uVar9 - 1;
  } while (param_3[uVar9 - 1] != '-');
  if (uVar21 == 0) {
    uVar21 = 0;
  }
  else {
    param_4 = param_4 - uVar9;
    pcVar19 = param_3 + uVar9;
    if (param_4 == 0) goto LAB_010db12c;
LAB_010dae88:
    pcVar18 = pcVar19 + param_4;
  }
  puVar3 = (uint *)(param_2 + 4);
  uVar9 = 0;
  uVar12 = 0x48;
  local_2c = 0x80;
  local_28 = uVar21;
  do {
    uVar14 = 0x24;
    uVar16 = 1;
    uVar13 = uVar9;
    pcVar20 = pcVar19;
    while( true ) {
      pcVar19 = pcVar20 + 1;
      cVar1 = *pcVar20;
      if ((byte)(cVar1 - 0x30U) < 10) {
        bVar7 = cVar1 - 0x16;
      }
      else {
        bVar7 = cVar1 + 0xbf;
        if ((0x19 < (byte)(cVar1 + 0xbfU)) && (bVar7 = cVar1 + 0x9f, 0x19 < (byte)(cVar1 + 0x9fU)))
        goto LAB_010db100;
      }
      lVar2 = (ulonglong)uVar16 * (ulonglong)(uint)bVar7;
      uVar4 = (uint)lVar2;
      if (((int)((ulonglong)lVar2 >> 0x20) != 0) ||
         (bVar22 = CARRY4(uVar4,uVar13), uVar13 = uVar4 + uVar13, bVar22)) goto LAB_010db100;
      uVar4 = 0x1a;
      if (uVar14 < uVar12 + 0x1a) {
        uVar4 = uVar14 - uVar12;
      }
      if (uVar14 <= uVar12) {
        uVar4 = 1;
      }
      if (bVar7 < uVar4) break;
      lVar2 = (ulonglong)(0x24 - uVar4) * (ulonglong)uVar16;
      uVar16 = (uint)lVar2;
      if ((int)((ulonglong)lVar2 >> 0x20) != 0) goto LAB_010db100;
      uVar14 = uVar14 + 0x24;
      pcVar20 = pcVar19;
      if (pcVar19 == pcVar18) {
LAB_010db100:
        *param_1 = 0;
        return;
      }
    }
    bVar22 = 0xfffffffe < local_28;
    local_28 = local_28 + 1;
    if (bVar22) {
                    /* WARNING: Subroutine does not return */
      FUN_00faf2a4(&DAT_0188a318);
    }
    uVar8 = 2;
    if (uVar9 == 0) {
      uVar8 = 700;
    }
    iVar11 = FUN_018462e8(uVar13 - uVar9,uVar8);
    iVar5 = FUN_018462e8(iVar11,local_28);
    uVar9 = iVar5 + iVar11;
    iVar11 = 0;
    uVar12 = uVar9;
    if (0x1c7 < uVar9) {
      do {
        iVar11 = iVar11 + 0x24;
        uVar9 = uVar12 / 0x23;
        bVar22 = 0x3e57 < uVar12;
        uVar12 = uVar9;
      } while (bVar22);
    }
    iVar5 = FUN_018462e8(uVar9 * 0x24 & 0xffff,uVar9 + 0x26 & 0xffff);
    uVar9 = FUN_018462e8(uVar13,local_28);
    bVar22 = CARRY4(uVar9,local_2c);
    local_2c = uVar9 + local_2c;
    if ((bVar22) || ((local_2c ^ 0xd800) - 0x110000 < 0xffef0800)) {
      *param_1 = 0;
      return;
    }
    uVar14 = *puVar15;
    uVar13 = uVar13 - uVar9 * local_28;
    uVar9 = uVar14;
    puVar10 = puVar3;
    if (0x3b < uVar14) {
      uVar9 = *(uint *)(param_2 + 4);
      puVar10 = *(uint **)(param_2 + 8);
    }
    if (uVar9 != 0) {
      iVar6 = uVar9 << 3;
      do {
        if (uVar13 <= *puVar10) {
          *puVar10 = *puVar10 + 1;
        }
        iVar6 = iVar6 + -8;
        puVar10 = puVar10 + 2;
      } while (iVar6 != 0);
      uVar14 = *puVar15;
    }
    if (uVar14 < 0x3c) {
      uVar9 = 0x3b;
      puVar10 = puVar3;
      puVar17 = puVar15;
    }
    else {
      uVar9 = uVar14;
      uVar14 = *(uint *)(param_2 + 4);
      puVar10 = *(uint **)(param_2 + 8);
      puVar17 = puVar3;
    }
    if (uVar14 == uVar9) {
      FUN_010da924(param_2);
      uVar14 = *(uint *)(param_2 + 4);
      puVar10 = *(uint **)(param_2 + 8);
      puVar17 = puVar3;
    }
    puVar10[uVar14 * 2] = uVar13;
    uVar12 = iVar11 + iVar5;
    uVar9 = uVar13 + 1;
    (puVar10 + uVar14 * 2)[1] = local_2c;
    *puVar17 = *puVar17 + 1;
  } while (pcVar19 != pcVar18);
LAB_010db12c:
  uVar9 = *(uint *)(param_2 + 0x1dc);
  iVar11 = param_2 + 4;
  if (0x3b < uVar9) {
    uVar9 = *(uint *)(param_2 + 4);
    iVar11 = *(int *)(param_2 + 8);
  }
  if (1 < uVar9) {
    if (uVar9 < 0x15) {
      FUN_010dcef0();
    }
    else {
      FUN_010e0418(iVar11,uVar9);
    }
  }
  uVar12 = *(uint *)(param_2 + 0x1dc);
  uVar9 = *(uint *)(param_2 + 4);
  if (uVar12 < 0x3c) {
    uVar9 = uVar12;
  }
  iVar11 = param_2 + 4;
  if (0x3b < uVar12) {
    iVar11 = *(int *)(param_2 + 8);
  }
  *param_1 = param_3;
  param_1[1] = param_3 + uVar21;
  param_1[2] = iVar11;
  param_1[3] = uVar9;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = uVar9 + uVar21;
  return;
}

