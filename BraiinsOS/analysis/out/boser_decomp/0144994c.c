// FUN_0144994c @ 0144994c size=1932 calls_out=8 calls_in=2
// strings: internal error: entered unreachable code

void FUN_0144994c(int *param_1,undefined4 param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  byte bVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  undefined *puVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  byte *pbVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  bool bVar23;
  uint *local_4a4;
  int local_4a0;
  int local_49c;
  int local_498;
  undefined4 local_490;
  uint local_48c;
  uint *local_488;
  uint local_98;
  undefined4 local_94;
  uint local_90;
  uint *local_8c;
  uint local_30;
  uint local_2c;
  char local_27;
  
  uVar5 = 0;
  local_498 = 0;
  local_49c = 1;
  local_4a0 = 0;
  local_490 = 0;
  local_98 = 0;
  local_94 = 0;
  local_30 = 0;
  if (param_4 == 0) {
LAB_014499c8:
    bVar23 = false;
LAB_014499cc:
    bVar7 = false;
LAB_014499d4:
    if (8 < local_30) {
      FUN_01af7af8(local_30,local_8c,4,0xc);
    }
    if (0xfd < local_98) {
      FUN_01af7af8(local_98,local_488,4,4);
    }
    if (bVar23) {
      if (bVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf921c);
      }
      uVar4 = 1;
    }
    else {
      if (!bVar7) {
        *(undefined1 *)(param_1 + 3) = 0;
        *param_1 = -0x80000000;
        param_1[1] = (int)param_3;
        param_1[2] = param_4;
        FUN_019bb7e0(local_4a0,local_49c);
        return;
      }
      uVar4 = 0;
    }
    *param_1 = local_4a0;
    param_1[1] = local_49c;
    param_1[2] = local_498;
    *(undefined1 *)(param_1 + 3) = uVar4;
    return;
  }
  pbVar19 = param_3;
LAB_0144999c:
  uVar17 = (uint)param_3[uVar5];
  if (uVar17 - 0x61 < 0x1a) goto LAB_014499bc;
  if (uVar17 == 0x2e) {
    pbVar19 = param_3 + uVar5 + 1;
    goto LAB_014499bc;
  }
  bVar23 = false;
  FUN_0144a160(&local_2c,param_2,param_4,param_3 + (param_4 - (int)pbVar19),0,0,0x7fffffe,0,0,0,
               &local_490,&local_94,pbVar19,param_3 + (param_4 - (int)pbVar19));
  if (local_2c == param_4) goto LAB_014499cc;
  if (local_98 < 0xfe) {
    puVar9 = &local_48c;
    uVar5 = local_98;
  }
  else {
    puVar9 = local_488;
    uVar5 = local_48c;
  }
  if ((uVar5 == 0) || (uVar17 = uVar5 - 1, puVar9[uVar5 - 1] != 0x2e)) {
    if (local_98 < 0xfe) {
      puVar9 = &local_48c;
      uVar17 = local_98;
    }
    else {
      puVar9 = local_488;
      uVar17 = local_48c;
    }
  }
  iVar14 = 0;
  iVar11 = uVar17 * -4;
  do {
    bVar23 = iVar11 != 0;
    if (bVar23) {
      iVar14 = *(int *)((int)puVar9 + (-4 - iVar11));
      iVar11 = iVar11 + 4;
    }
  } while (bVar23 && iVar14 != 0x2e);
  iVar11 = 0;
  iVar14 = 1;
  bVar23 = false;
  if (local_30 < 9) {
    local_4a4 = &local_90;
    local_90 = local_30;
  }
  else {
    local_4a4 = local_8c;
  }
  if (local_98 < 0xfe) {
    puVar9 = &local_48c;
    uVar5 = local_98;
  }
  else {
    puVar9 = local_488;
    uVar5 = local_48c;
  }
  puVar10 = local_4a4 + local_90 * 3;
  bVar7 = false;
  uVar17 = local_2c;
  do {
    uVar22 = 0;
    bVar3 = true;
    puVar13 = puVar9;
    uVar16 = 0;
    if (uVar5 != 0) {
      iVar12 = uVar5 << 2;
      do {
        if (puVar9[uVar22] == 0x2e) {
          bVar3 = false;
          puVar13 = puVar9 + uVar22 + 1;
          uVar16 = uVar5 - (uVar22 + 1);
          goto LAB_01449c04;
        }
        uVar22 = uVar22 + 1;
        iVar12 = iVar12 + -4;
      } while (iVar12 != 0);
      bVar3 = true;
      uVar16 = uVar5;
      uVar22 = uVar5;
    }
LAB_01449c04:
    uVar5 = uVar16;
    if (local_4a4 == puVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01cf923c);
    }
    uVar16 = *local_4a4;
    pbVar19 = (byte *)local_4a4[1];
    uVar20 = local_4a4[2];
    if (bVar7) {
      if (bVar23) {
        iVar12 = iVar11;
        if (local_4a0 == iVar11) {
          FUN_01af7b44(&local_4a0,iVar11,1,1,1);
          iVar12 = local_498;
          iVar14 = local_49c;
        }
        iVar11 = iVar11 + 1;
        *(undefined1 *)(iVar14 + iVar12) = 0x2e;
        local_498 = iVar11;
        goto LAB_01449c70;
      }
      uVar17 = uVar17 + 1;
      if (uVar17 != param_4) goto LAB_01449c70;
      goto LAB_014499c8;
    }
LAB_01449c70:
    local_4a4 = local_4a4 + 3;
    if (uVar16 == 0) {
      if (uVar20 != 0) {
        uVar22 = 0;
        uVar16 = uVar20;
LAB_01449cc4:
        if (0x19 < pbVar19[uVar22] - 0x41) goto code_r0x01449cd4;
        if (bVar23) {
          uVar20 = uVar22;
          pbVar6 = pbVar19;
        }
        else {
          uVar17 = uVar22 + uVar17;
          uVar20 = uVar17;
          pbVar6 = param_3;
          if (param_4 < uVar17) {
            puVar15 = &DAT_01cf924c;
            goto LAB_0144a094;
          }
        }
        if ((uint)(local_4a0 - iVar11) < uVar20) {
          FUN_01af7b44(&local_4a0,iVar11,uVar20,1,1);
          iVar11 = local_498;
          iVar14 = local_49c;
        }
        FUN_01bed4e2(iVar14 + iVar11,pbVar6,uVar20);
        local_498 = iVar11 + uVar20;
        pbVar19 = pbVar19 + uVar22;
        do {
          iVar11 = local_498;
          bVar1 = *pbVar19;
          uVar22 = 2;
          bVar8 = bVar1;
          if (bVar1 - 0x41 < 0x1a) {
            bVar8 = bVar1 | 0x20;
          }
          if ((uint)(int)(char)bVar1 < 0x80000000) {
            uVar22 = 1;
          }
          if ((uint)(local_4a0 - local_498) < uVar22) {
            FUN_01af7b44(&local_4a0,local_498,uVar22,1,1);
            iVar14 = local_49c;
          }
          pbVar6 = (byte *)(iVar14 + local_498);
          if (0x7fffffff < (uint)(int)(char)bVar1) {
            pbVar6[1] = bVar8 & 0xbf;
            bVar8 = bVar1 >> 6 | 0xc0;
          }
          local_498 = uVar22 + iVar11;
          uVar16 = uVar16 - 1;
          *pbVar6 = bVar8;
          pbVar19 = pbVar19 + 1;
        } while (uVar16 != 0);
        bVar23 = true;
        iVar11 = local_498;
        goto joined_r0x01449f6c;
      }
LAB_01449ce4:
      if (bVar23) {
        if ((uint)(local_4a0 - iVar11) < uVar20) {
          FUN_01af7b44(&local_4a0,iVar11,uVar20,1,1);
          iVar11 = local_498;
          iVar14 = local_49c;
        }
        FUN_01bed4e2(iVar14 + iVar11,pbVar19,uVar20);
        local_498 = iVar11 + uVar20;
        bVar23 = true;
        iVar11 = local_498;
        goto joined_r0x01449f6c;
      }
      uVar17 = uVar17 + uVar20;
      bVar23 = false;
      if (uVar17 != param_4) goto joined_r0x01449f6c;
      goto LAB_014499cc;
    }
    puVar21 = puVar9 + uVar22;
    iVar12 = 0;
    do {
      if (uVar22 * 4 == iVar12) break;
      puVar18 = (uint *)((int)puVar9 + iVar12);
      iVar12 = iVar12 + 4;
    } while (*puVar18 < 0x80);
    puVar18 = puVar9;
    if (!bVar23) {
      if (uVar17 <= param_4) {
        if ((uint)(local_4a0 - iVar11) < uVar17) {
          FUN_01af7b44(&local_4a0,iVar11,uVar17,1,1);
          iVar11 = local_498;
          iVar14 = local_49c;
        }
        FUN_01bed4e2(iVar14 + iVar11,param_3,uVar17);
        iVar11 = iVar11 + uVar17;
        goto LAB_01449f74;
      }
      puVar15 = &DAT_01cf927c;
LAB_0144a094:
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar17,param_4,puVar15);
    }
    while (puVar18 != puVar21) {
      puVar9 = puVar18 + 1;
      uVar22 = *puVar18;
      uVar16 = 1;
      if (0x7f < uVar22) {
        uVar16 = 2;
      }
      if ((0x7ff < uVar22) && (uVar16 = 4, uVar22 < 0x10000)) {
        uVar16 = 3;
      }
      iVar12 = iVar11;
      if ((uint)(local_4a0 - iVar11) < uVar16) {
        FUN_01af7b44(&local_4a0,iVar11,uVar16,1,1);
        iVar12 = local_498;
        iVar14 = local_49c;
      }
      pbVar19 = (byte *)(iVar14 + iVar12);
      if (uVar22 < 0x80) {
        *pbVar19 = (byte)uVar22;
      }
      else {
        bVar1 = (byte)uVar22 & 0x3f | 0x80;
        bVar8 = (byte)(uVar22 >> 6);
        if (uVar22 < 0x800) {
          bVar8 = bVar8 | 0xc0;
          pbVar19[1] = bVar1;
        }
        else {
          bVar2 = bVar8 & 0x3f | 0x80;
          bVar8 = (byte)(uVar22 >> 0xc);
          if (uVar22 >> 0x10 != 0) {
            *pbVar19 = (byte)(uVar22 >> 0x12) | 0xf0;
            pbVar19[3] = bVar1;
            pbVar19[2] = bVar2;
            pbVar19[1] = bVar8 & 0x3f | 0x80;
            goto LAB_0144a03c;
          }
          pbVar19[1] = bVar2;
          bVar8 = bVar8 | 0xe0;
          pbVar19[2] = bVar1;
        }
        *pbVar19 = bVar8;
      }
LAB_0144a03c:
      iVar11 = uVar16 + iVar11;
LAB_01449f74:
      puVar18 = puVar9;
      local_498 = iVar11;
    }
    bVar23 = true;
joined_r0x01449f6c:
    bVar7 = true;
    puVar9 = puVar13;
    if (bVar3) {
      bVar23 = true;
      if (local_27 == '\0') {
        bVar23 = false;
        bVar7 = true;
        goto LAB_014499d4;
      }
      goto LAB_014499cc;
    }
  } while( true );
LAB_014499bc:
  uVar5 = uVar5 + 1;
  if (param_4 == uVar5) goto LAB_014499c8;
  goto LAB_0144999c;
code_r0x01449cd4:
  uVar22 = uVar22 + 1;
  uVar16 = uVar16 - 1;
  if (uVar20 == uVar22) goto LAB_01449ce4;
  goto LAB_01449cc4;
}

