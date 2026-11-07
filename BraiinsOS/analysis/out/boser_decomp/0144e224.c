// FUN_0144e224 @ 0144e224 size=948 calls_out=6 calls_in=1
// strings: 

void FUN_0144e224(undefined4 *param_1,int param_2,char *param_3,uint param_4)

{
  char cVar1;
  longlong lVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  char *pcVar17;
  char *pcVar19;
  char *pcVar18;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  uint local_2c;
  
  puVar20 = (uint *)(param_2 + 0x1dc);
  uVar8 = *puVar20;
  pcVar17 = param_3 + param_4;
  puVar3 = puVar20;
  if (0x3b < uVar8) {
    puVar3 = (uint *)(param_2 + 4);
    uVar8 = *puVar3;
  }
  uVar16 = param_4;
  if (uVar8 != 0) {
    *puVar3 = 0;
  }
  do {
    uVar8 = uVar16;
    pcVar18 = param_3;
    if (uVar8 == 0) {
      uVar16 = 0;
      goto LAB_0144e2a8;
    }
    uVar16 = uVar8 - 1;
  } while (param_3[uVar8 - 1] != '-');
  if (uVar16 == 0) {
    uVar16 = 0;
  }
  else {
    if (param_4 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar8,param_4,param_4,&DAT_01cf92dc);
    }
    param_4 = param_4 - uVar8;
    pcVar18 = param_3 + uVar8;
LAB_0144e2a8:
    if (param_4 == 0) goto LAB_0144e53c;
    pcVar17 = pcVar18 + param_4;
  }
  uVar21 = 0;
  uVar22 = 0x48;
  uVar8 = 0x80;
  puVar3 = (uint *)(param_2 + 4);
  local_2c = uVar16;
  do {
    uVar11 = 0x24;
    uVar13 = 1;
    uVar15 = uVar21;
    pcVar19 = pcVar18;
    while( true ) {
      pcVar18 = pcVar19 + 1;
      cVar1 = *pcVar19;
      if ((byte)(cVar1 - 0x30U) < 10) {
        bVar7 = cVar1 - 0x16;
      }
      else {
        bVar7 = cVar1 + 0xbf;
        if ((0x19 < (byte)(cVar1 + 0xbfU)) && (bVar7 = cVar1 + 0x9f, 0x19 < (byte)(cVar1 + 0x9fU)))
        goto LAB_0144e524;
      }
      lVar2 = (ulonglong)uVar13 * (ulonglong)(uint)bVar7;
      uVar12 = (uint)lVar2;
      if (((int)((ulonglong)lVar2 >> 0x20) != 0) ||
         (bVar23 = CARRY4(uVar12,uVar15), uVar15 = uVar12 + uVar15, bVar23)) goto LAB_0144e524;
      uVar12 = 0x1a;
      if (uVar11 < uVar22 + 0x1a) {
        uVar12 = uVar11 - uVar22;
      }
      if (uVar11 <= uVar22) {
        uVar12 = 1;
      }
      if (bVar7 < uVar12) break;
      lVar2 = (ulonglong)(0x24 - uVar12) * (ulonglong)uVar13;
      uVar13 = (uint)lVar2;
      if ((int)((ulonglong)lVar2 >> 0x20) != 0) goto LAB_0144e524;
      uVar11 = uVar11 + 0x24;
      pcVar19 = pcVar18;
      if (pcVar18 == pcVar17) goto LAB_0144e524;
    }
    bVar23 = 0xfffffffe < local_2c;
    local_2c = local_2c + 1;
    if (bVar23) {
                    /* WARNING: Subroutine does not return */
      FUN_012ffdf4(&DAT_01cf92cc);
    }
    uVar9 = 2;
    if (uVar21 == 0) {
      uVar9 = 700;
    }
    iVar4 = FUN_01bf1250(uVar15 - uVar21,uVar9);
    iVar5 = FUN_01bf1250(iVar4,local_2c);
    uVar21 = iVar5 + iVar4;
    iVar4 = 0;
    uVar22 = uVar21;
    if (0x1c7 < uVar21) {
      do {
        iVar4 = iVar4 + 0x24;
        uVar21 = uVar22 / 0x23;
        bVar23 = 0x3e57 < uVar22;
        uVar22 = uVar21;
      } while (bVar23);
    }
    iVar5 = FUN_01bf1250(uVar21 * 0x24 & 0xffff,uVar21 + 0x26 & 0xffff);
    uVar21 = FUN_01bf1250(uVar15,local_2c);
    bVar23 = CARRY4(uVar21,uVar8);
    uVar8 = uVar21 + uVar8;
    if ((bVar23) || ((uVar8 ^ 0xd800) - 0x110000 < 0xffef0800)) {
LAB_0144e524:
      *param_1 = 0;
      return;
    }
    uVar11 = *puVar20;
    uVar15 = uVar15 - uVar21 * local_2c;
    uVar21 = uVar11;
    puVar10 = puVar3;
    if (0x3b < uVar11) {
      uVar21 = *(uint *)(param_2 + 4);
      puVar10 = *(uint **)(param_2 + 8);
    }
    if (uVar21 != 0) {
      iVar6 = uVar21 << 3;
      do {
        if (uVar15 <= *puVar10) {
          *puVar10 = *puVar10 + 1;
        }
        iVar6 = iVar6 + -8;
        puVar10 = puVar10 + 2;
      } while (iVar6 != 0);
      uVar11 = *puVar20;
    }
    if (uVar11 < 0x3c) {
      uVar21 = 0x3b;
      puVar10 = puVar3;
      puVar14 = puVar20;
    }
    else {
      uVar21 = uVar11;
      uVar11 = *(uint *)(param_2 + 4);
      puVar10 = *(uint **)(param_2 + 8);
      puVar14 = puVar3;
    }
    if (uVar11 == uVar21) {
      FUN_0144f06c(param_2);
      uVar11 = *(uint *)(param_2 + 4);
      puVar10 = *(uint **)(param_2 + 8);
      puVar14 = puVar3;
    }
    uVar21 = uVar15 + 1;
    puVar10[uVar11 * 2] = uVar15;
    uVar22 = iVar4 + iVar5;
    (puVar10 + uVar11 * 2)[1] = uVar8;
    *puVar14 = *puVar14 + 1;
  } while (pcVar18 != pcVar17);
LAB_0144e53c:
  uVar8 = *puVar20;
  if (uVar8 < 0x3c) {
    iVar4 = param_2 + 4;
  }
  else {
    uVar8 = *(uint *)(param_2 + 4);
    iVar4 = *(int *)(param_2 + 8);
  }
  if (1 < uVar8) {
    if (uVar8 < 0x15) {
      FUN_01451640();
    }
    else {
      FUN_01452a20(iVar4,uVar8);
    }
  }
  uVar8 = *puVar20;
  *param_1 = param_3;
  param_1[4] = 0;
  if (uVar8 < 0x3c) {
    param_2 = param_2 + 4;
  }
  else {
    uVar8 = *(uint *)(param_2 + 4);
    param_2 = *(int *)(param_2 + 8);
  }
  param_1[1] = param_3 + uVar16;
  param_1[2] = param_2;
  param_1[3] = uVar8;
  param_1[5] = 0;
  param_1[6] = uVar8 + uVar16;
  return;
}

