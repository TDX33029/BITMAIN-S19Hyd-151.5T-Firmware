// FUN_019bf3ac @ 019bf3ac size=1028 calls_out=1 calls_in=1
// strings: 

void FUN_019bf3ac(undefined4 *param_1,byte *param_2,byte *param_3,int *param_4)

{
  ulonglong uVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  uint extraout_r3;
  byte *pbVar8;
  undefined4 uVar9;
  uint uVar10;
  char cVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  undefined1 uVar16;
  bool bVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  byte *local_44;
  byte *local_40;
  byte *local_3c;
  byte *local_38;
  byte *local_34;
  byte *local_30;
  byte *local_2c;
  undefined1 local_28;
  undefined1 uStack_27;
  
  if ((param_3 < (byte *)0x4) || (*param_4 != *(int *)param_2)) {
    param_1[2] = 0;
    *param_1 = 0;
    return;
  }
  local_30 = param_2 + (int)param_3;
  uVar16 = 0;
  local_44 = (byte *)0x0;
  local_2c = (byte *)0x0;
  uVar10 = 0;
  local_34 = param_2;
  pbVar8 = param_2;
  pbVar12 = (byte *)0x0;
  do {
    local_40 = param_3;
    local_3c = param_2;
    local_38 = param_3;
    if (uVar10 != 0) {
      pcVar6 = "0";
      _local_28 = CONCAT11(uVar16,1);
      goto LAB_019bf5f0;
    }
    pbVar7 = local_2c;
    if (pbVar8 != local_30) {
      do {
        local_34 = pbVar8 + 1;
        uVar4 = (uint)*pbVar8;
        if (0x7fffffff < (uint)(int)(char)*pbVar8) {
          if (uVar4 < 0xe0) {
            uVar4 = pbVar8[1] & 0x3f | (uVar4 & 0x1f) << 6;
            local_34 = pbVar8 + 2;
          }
          else {
            uVar10 = pbVar8[2] & 0x3f | (pbVar8[1] & 0x3f) << 6;
            if (uVar4 < 0xf0) {
              uVar4 = uVar10 | (uVar4 & 0x1f) << 0xc;
              local_34 = pbVar8 + 3;
            }
            else {
              local_34 = pbVar8 + 4;
              uVar4 = pbVar8[3] & 0x3f | uVar10 << 6 | (uVar4 & 7) << 0x12;
            }
          }
        }
        local_2c = local_34 + ((int)pbVar7 - (int)pbVar8);
        uVar10 = 0;
        pbVar8 = local_34;
        if ((uVar4 - 9 < 0x18) && ((1 << (uVar4 - 9 & 0xff) & 0x80001fU) != 0)) {
LAB_019bf564:
          pbVar13 = local_2c;
          local_44 = local_2c;
          goto LAB_019bf588;
        }
        if (0x7f < uVar4) {
          uVar15 = uVar4 >> 8;
          if (uVar15 < 0x20) {
            if (uVar15 == 0) {
              bVar2 = (&DAT_00533bcd)[uVar4 & 0xff] & 1;
joined_r0x019bf54c:
              if (bVar2 != 0) goto LAB_019bf564;
            }
            else if ((uVar15 == 0x16) && (uVar4 == 0x1680)) goto LAB_019bf564;
          }
          else {
            if (uVar15 == 0x20) {
              bVar2 = (&DAT_00533bcd)[uVar4 & 0xff] & 2;
              goto joined_r0x019bf54c;
            }
            if ((uVar15 == 0x30) && (uVar4 == 0x3000)) goto LAB_019bf564;
          }
        }
        pbVar7 = local_2c;
      } while (local_34 != local_30);
      local_34 = local_30;
    }
    uVar16 = 1;
    uVar10 = 1;
    pbVar8 = local_30;
    pbVar7 = param_3;
    pbVar13 = pbVar12;
LAB_019bf588:
    bVar17 = pbVar7 == pbVar12;
    pbVar12 = pbVar13;
  } while (bVar17);
  _local_28 = CONCAT11(uVar16,1);
  uVar18 = FUN_013182f8(&local_44);
  uVar4 = (uint)((ulonglong)uVar18 >> 0x20);
  if ((int)uVar18 == 0) {
    uVar18 = 0x10052ecc3;
  }
  iVar5 = (int)((ulonglong)uVar18 >> 0x20);
  pcVar6 = (char *)uVar18;
  uVar9 = 0;
  if (iVar5 != 0) {
    if (iVar5 == 1) {
LAB_019bf5f0:
      bVar2 = *pcVar6;
      uVar9 = 0;
      if ((bVar2 == 0x2b) || (bVar2 == 0x2d)) goto LAB_019bf6a4;
      uVar4 = 1;
    }
    else {
      bVar2 = *pcVar6;
    }
    if (bVar2 == 0x2b) {
      pcVar6 = pcVar6 + 1;
      uVar4 = uVar4 - 1;
    }
    if (uVar4 < 9) {
      uVar9 = 1;
      uVar10 = 0;
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        bVar2 = *pcVar6;
        if (9 < bVar2 - 0x30) goto LAB_019bf6a0;
        pcVar6 = pcVar6 + 1;
        uVar10 = (bVar2 - 0x30) + uVar10 * 10;
      }
    }
    else {
      uVar10 = 0;
      uVar9 = 0;
      while (uVar4 != 0) {
        uVar15 = (uint)((ulonglong)uVar10 * 10);
        if ((int)((ulonglong)uVar10 * 10 >> 0x20) != 0) goto LAB_019bf6a0;
        uVar14 = (byte)*pcVar6 - 0x30;
        uVar10 = uVar14 + uVar15;
        if ((9 < uVar14) || (uVar4 = uVar4 - 1, pcVar6 = pcVar6 + 1, CARRY4(uVar14,uVar15)))
        goto LAB_019bf6a4;
      }
      uVar9 = 1;
    }
  }
LAB_019bf6a4:
  uVar19 = FUN_013182f8(&local_44);
  if ((int)uVar19 == 0) {
    uVar19 = 0x10052ecc3;
  }
  iVar5 = (int)(uVar19 >> 0x20);
  pcVar6 = (char *)uVar19;
  uVar4 = extraout_r3;
  if (iVar5 == 0) {
    uVar3 = 0;
  }
  else {
    if (iVar5 == 1) {
      cVar11 = *pcVar6;
      uVar3 = 0;
      if ((cVar11 == '+') || (cVar11 == '-')) goto LAB_019bf6f0;
    }
    else {
      cVar11 = *pcVar6;
    }
    if (cVar11 == '+') {
      uVar19 = CONCAT44(iVar5 + -1,pcVar6 + 1);
    }
    iVar5 = (int)(uVar19 >> 0x20);
    if (uVar19 < 0x900000000) {
      uVar3 = 1;
      uVar4 = 0;
      while (iVar5 != 0) {
        uVar15 = *(byte *)uVar19 - 0x30;
        if (9 < uVar15) goto LAB_019bf798;
        iVar5 = (int)(uVar19 >> 0x20) + -1;
        uVar19 = CONCAT44(iVar5,(byte *)uVar19 + 1);
        uVar4 = uVar15 + uVar4 * 10;
      }
    }
    else {
      uVar4 = 0;
      while( true ) {
        iVar5 = (int)(uVar19 >> 0x20);
        if (iVar5 == 0) break;
        uVar1 = (ulonglong)uVar4;
        uVar4 = (uint)(uVar1 * 10);
        if ((int)(uVar1 * 10 >> 0x20) != 0) goto LAB_019bf798;
        uVar15 = *(byte *)uVar19 - 0x30;
        uVar3 = 0;
        bVar17 = CARRY4(uVar15,uVar4);
        uVar4 = uVar15 + uVar4;
        if ((9 < uVar15) || (uVar19 = CONCAT44(iVar5 + -1,(byte *)uVar19 + 1), bVar17))
        goto LAB_019bf6f0;
      }
      uVar3 = 1;
    }
  }
LAB_019bf6f0:
  *param_1 = uVar9;
  param_1[1] = uVar10;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  return;
LAB_019bf6a0:
  uVar9 = 0;
  goto LAB_019bf6a4;
LAB_019bf798:
  uVar3 = 0;
  goto LAB_019bf6f0;
}

