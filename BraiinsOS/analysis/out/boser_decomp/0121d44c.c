// FUN_0121d44c @ 0121d44c size=2492 calls_out=12 calls_in=1
// strings: 

void FUN_0121d44c(int *param_1,int param_2)

{
  char cVar1;
  char cVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  uint unaff_r10;
  uint uVar24;
  ulonglong uVar25;
  int local_10c;
  int local_108;
  uint local_ec;
  uint local_e0;
  uint local_dc;
  undefined1 auStack_d8 [64];
  undefined4 local_98;
  int local_94;
  undefined2 local_90;
  undefined4 local_84;
  undefined4 *local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  
  iVar4 = 2;
  if ((*(byte *)(param_2 + 0x25) & 1) != 0) goto LAB_0121d6ac;
  puVar3 = *(uint **)(param_2 + 0x28);
  iVar22 = *(int *)(param_2 + 4);
  uVar17 = *(uint *)(param_2 + 8);
  uVar23 = *(uint *)(param_2 + 0x10);
  local_dc = *(uint *)(param_2 + 0x20);
  cVar1 = *(char *)(param_2 + 0x24);
  if ((uVar23 <= uVar17) && (uVar24 = *(uint *)(param_2 + 0xc), uVar24 <= uVar23)) {
    uVar19 = (uint)*(byte *)(param_2 + 0x18);
    unaff_r10 = param_2 + 0x14;
    cVar2 = *(char *)(unaff_r10 + uVar19 + -1);
    do {
      uVar12 = uVar23 - uVar24;
      if (uVar12 < 8) {
        uVar9 = 0;
        if (uVar12 == 0) {
          uVar25 = 0;
        }
        else {
          do {
            if (*(char *)(iVar22 + uVar24 + uVar9) == cVar2) {
              uVar25 = CONCAT44(uVar9,1);
              goto LAB_0121d514;
            }
            uVar9 = uVar9 + 1;
          } while (uVar12 != uVar9);
          uVar25 = (ulonglong)uVar12 << 0x20;
        }
      }
      else {
        uVar25 = FUN_01307168(cVar2,iVar22 + uVar24);
      }
LAB_0121d514:
      if ((uVar25 & 1) == 0) {
        *(uint *)(param_2 + 0xc) = uVar23;
        break;
      }
      uVar24 = uVar24 + (int)(uVar25 >> 0x20) + 1;
      *(uint *)(param_2 + 0xc) = uVar24;
      if ((uVar19 <= uVar24) && (uVar24 <= uVar17)) {
        if (4 < uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar19,4,&DAT_01d2fe40);
        }
        iVar4 = thunk_FUN_01bed842(iVar22 + (uVar24 - uVar19),unaff_r10,uVar19);
        if (iVar4 == 0) {
          uVar17 = *(uint *)(param_2 + 0x1c);
          *(uint *)(param_2 + 0x1c) = uVar24;
          iVar5 = uVar24 - uVar17;
          local_ec = unaff_r10;
          goto LAB_0121d590;
        }
      }
    } while (uVar24 <= uVar23);
  }
  uVar17 = *(uint *)(param_2 + 0x1c);
  *(undefined1 *)(param_2 + 0x25) = 1;
  if (cVar1 == '\0' && local_dc == uVar17) {
    iVar4 = 2;
    goto LAB_0121d6ac;
  }
  iVar5 = local_dc - uVar17;
  local_ec = unaff_r10;
LAB_0121d590:
  iVar22 = iVar22 + uVar17;
  iVar4 = 2;
  iVar15 = iVar5;
  if ((iVar5 != 0) && (*(char *)(iVar22 + iVar5 + -1) == '\n')) {
    iVar15 = iVar5 + -1;
    if ((iVar15 != 0) && (*(char *)(iVar22 + iVar15 + -1) == '\r')) {
      iVar15 = iVar5 + -2;
    }
  }
  if (iVar22 == 0) goto LAB_0121d6ac;
  FUN_01306b30(auStack_d8,iVar22,iVar15,":",1);
  local_90 = 1;
  uVar16 = 0;
  local_98 = 0;
  local_94 = iVar15;
  FUN_01bed4e2(&local_78,auStack_d8,0x50);
  FUN_007a6bf4(&local_84,&local_78);
  if (local_7c < 9) {
    FUN_01af9864(&local_78,&DAT_0056b368,0x20);
    FUN_0134aee0(local_84,local_80,4,8);
    uVar24 = 0x80000002;
    local_e0 = local_78;
    uVar9 = local_74;
  }
  else {
    uVar17 = local_80[1];
    if ((int)uVar17 < 0) {
LAB_0121d6c8:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar16,uVar17);
    }
    uVar20 = *local_80;
    uVar24 = 0;
    if (uVar17 == 0) {
      uVar12 = 1;
      uVar19 = 0;
    }
    else {
      uVar16 = 1;
      uVar12 = FUN_01298504(uVar17,1);
      uVar19 = uVar17;
      if (uVar12 == 0) goto LAB_0121d6c8;
    }
    FUN_01bed4e2(uVar12,uVar20,uVar17);
    iVar22 = local_80[3];
    if (iVar22 < 0) {
LAB_0121d73c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar24,iVar22);
    }
    uVar16 = local_80[2];
    if (iVar22 == 0) {
      local_108 = 1;
      FUN_01bed4e2(1,uVar16,0);
      FUN_019bb7e0(0,1);
      local_10c = -0x80000000;
    }
    else {
      uVar24 = 1;
      local_108 = FUN_01298504(iVar22,1);
      if (local_108 == 0) goto LAB_0121d73c;
      FUN_01bed4e2(local_108,uVar16,iVar22);
      local_10c = iVar22;
    }
    uVar23 = local_80[5];
    if (uVar23 == 0) {
      iVar5 = 0;
    }
    else {
      pbVar10 = (byte *)local_80[4];
      if (uVar23 == 1) {
        bVar11 = *pbVar10;
        iVar5 = 0;
        if ((bVar11 == 0x2b) || (bVar11 == 0x2d)) goto LAB_0121d7e8;
      }
      else {
        bVar11 = *pbVar10;
      }
      if (bVar11 == 0x2b) {
        pbVar10 = pbVar10 + 1;
        uVar23 = uVar23 - 1;
      }
      if (uVar23 < 9) {
        iVar5 = 1;
        uVar24 = 0;
        for (; uVar23 != 0; uVar23 = uVar23 - 1) {
          bVar11 = *pbVar10;
          if (9 < bVar11 - 0x30) goto LAB_0121d964;
          pbVar10 = pbVar10 + 1;
          uVar24 = (bVar11 - 0x30) + uVar24 * 10;
        }
      }
      else {
        uVar24 = 0;
        iVar5 = 0;
        do {
          if (uVar23 == 0) {
            iVar5 = 1;
            break;
          }
          uVar9 = (uint)((ulonglong)uVar24 * 10);
          if ((int)((ulonglong)uVar24 * 10 >> 0x20) != 0) goto LAB_0121d964;
          uVar6 = *pbVar10 - 0x30;
          uVar24 = uVar6 + uVar9;
          if (9 < uVar6) break;
          uVar23 = uVar23 - 1;
          pbVar10 = pbVar10 + 1;
        } while (!CARRY4(uVar6,uVar9));
      }
    }
LAB_0121d7e8:
    uVar23 = local_80[7];
    uVar9 = uVar12;
    if (uVar23 == 0) {
LAB_0121d970:
      local_e0 = 0;
    }
    else {
      pbVar10 = (byte *)local_80[6];
      if (uVar23 == 1) {
        bVar11 = *pbVar10;
        local_e0 = 0;
        if ((bVar11 == 0x2b) || (bVar11 == 0x2d)) goto LAB_0121d974;
      }
      else {
        bVar11 = *pbVar10;
      }
      if (bVar11 == 0x2b) {
        pbVar10 = pbVar10 + 1;
        uVar23 = uVar23 - 1;
      }
      if (uVar23 < 9) {
        uVar9 = 0;
        local_e0 = 1;
        for (; uVar23 != 0; uVar23 = uVar23 - 1) {
          bVar11 = *pbVar10;
          if (9 < bVar11 - 0x30) goto LAB_0121d970;
          pbVar10 = pbVar10 + 1;
          uVar9 = (bVar11 - 0x30) + uVar9 * 10;
        }
      }
      else {
        uVar9 = 0;
        do {
          if (uVar23 == 0) {
            local_e0 = 1;
            break;
          }
          uVar6 = (uint)((ulonglong)uVar9 * 10);
          if ((int)((ulonglong)uVar9 * 10 >> 0x20) != 0) goto LAB_0121d970;
          uVar18 = *pbVar10 - 0x30;
          uVar9 = uVar18 + uVar6;
          local_e0 = 0;
          if (9 < uVar18) break;
          uVar23 = uVar23 - 1;
          pbVar10 = pbVar10 + 1;
        } while (!CARRY4(uVar18,uVar6));
      }
    }
LAB_0121d974:
    uVar6 = local_80[9];
    uVar18 = uVar17;
    uVar23 = uVar19;
    if (uVar6 == 0) {
LAB_0121d9b4:
      local_ec = 0;
    }
    else {
      pbVar10 = (byte *)local_80[8];
      if (uVar6 == 1) {
        bVar11 = *pbVar10;
        local_ec = 0;
        if ((bVar11 == 0x2b) || (bVar11 == 0x2d)) goto LAB_0121d9b8;
      }
      else {
        bVar11 = *pbVar10;
      }
      if (bVar11 == 0x2b) {
        pbVar10 = pbVar10 + 1;
        uVar6 = uVar6 - 1;
      }
      if (uVar6 < 9) {
        uVar23 = 0;
        local_ec = 1;
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          bVar11 = *pbVar10;
          if (9 < bVar11 - 0x30) goto LAB_0121d9b4;
          pbVar10 = pbVar10 + 1;
          uVar23 = (bVar11 - 0x30) + uVar23 * 10;
        }
      }
      else {
        uVar23 = 0;
        do {
          if (uVar6 == 0) {
            local_ec = 1;
            break;
          }
          uVar7 = (uint)((ulonglong)uVar23 * 10);
          if ((int)((ulonglong)uVar23 * 10 >> 0x20) != 0) goto LAB_0121d9b4;
          uVar18 = *pbVar10 - 0x30;
          uVar23 = uVar18 + uVar7;
          local_ec = 0;
          if (9 < uVar18) break;
          uVar6 = uVar6 - 1;
          pbVar10 = pbVar10 + 1;
        } while (!CARRY4(uVar18,uVar7));
      }
    }
LAB_0121d9b8:
    uVar7 = local_80[0xb];
    uVar6 = uVar24;
    if (uVar7 == 0) {
      local_dc = 0;
    }
    else {
      pbVar10 = (byte *)local_80[10];
      if (uVar7 == 1) {
        bVar11 = *pbVar10;
        local_dc = 0;
        if ((bVar11 == 0x2b) || (bVar11 == 0x2d)) goto LAB_0121d9f4;
      }
      else {
        bVar11 = *pbVar10;
      }
      if (bVar11 == 0x2b) {
        pbVar10 = pbVar10 + 1;
        uVar7 = uVar7 - 1;
      }
      if (uVar7 < 9) {
        local_dc = 1;
        uVar6 = 0;
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          bVar11 = *pbVar10;
          if (9 < bVar11 - 0x30) goto LAB_0121dcec;
          pbVar10 = pbVar10 + 1;
          uVar6 = (bVar11 - 0x30) + uVar6 * 10;
        }
      }
      else {
        uVar6 = 0;
        local_dc = 0;
        do {
          if (uVar7 == 0) {
            local_dc = 1;
            break;
          }
          uVar8 = (uint)((ulonglong)uVar6 * 10);
          uVar18 = (uint)((ulonglong)uVar6 * 10 >> 0x20);
          if (uVar18 != 0) goto LAB_0121dcec;
          uVar18 = *pbVar10 - 0x30;
          uVar6 = uVar18 + uVar8;
          if (9 < uVar18) break;
          uVar7 = uVar7 - 1;
          pbVar10 = pbVar10 + 1;
        } while (!CARRY4(uVar18,uVar8));
      }
    }
LAB_0121d9f4:
    uVar8 = local_80[0xd];
    uVar7 = local_dc;
    if (uVar8 == 0) {
      iVar15 = 0;
    }
    else {
      pbVar10 = (byte *)local_80[0xc];
      if (uVar8 == 1) {
        bVar11 = *pbVar10;
        iVar15 = 0;
        if ((bVar11 == 0x2b) || (bVar11 == 0x2d)) goto LAB_0121da30;
      }
      else {
        bVar11 = *pbVar10;
      }
      if (bVar11 == 0x2b) {
        pbVar10 = pbVar10 + 1;
        uVar8 = uVar8 - 1;
      }
      if (uVar8 < 9) {
        iVar15 = 1;
        uVar7 = 0;
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          bVar11 = *pbVar10;
          if (9 < bVar11 - 0x30) goto LAB_0121dcf4;
          pbVar10 = pbVar10 + 1;
          uVar7 = (bVar11 - 0x30) + uVar7 * 10;
        }
      }
      else {
        uVar7 = 0;
        iVar15 = 0;
        do {
          if (uVar8 == 0) {
            iVar15 = 1;
            break;
          }
          uVar14 = (uint)((ulonglong)uVar7 * 10);
          uVar18 = (uint)((ulonglong)uVar7 * 10 >> 0x20);
          if (uVar18 != 0) goto LAB_0121dcf4;
          uVar18 = *pbVar10 - 0x30;
          uVar7 = uVar18 + uVar14;
          if (9 < uVar18) break;
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
        } while (!CARRY4(uVar18,uVar14));
      }
    }
LAB_0121da30:
    uVar8 = local_80[0xf];
    if (uVar8 == 0) {
      iVar21 = 0;
    }
    else {
      pbVar10 = (byte *)local_80[0xe];
      if (uVar8 == 1) {
        bVar11 = *pbVar10;
        iVar21 = 0;
        if ((bVar11 == 0x2b) || (bVar11 == 0x2d)) goto LAB_0121dd58;
      }
      else {
        bVar11 = *pbVar10;
      }
      if (bVar11 == 0x2b) {
        pbVar10 = pbVar10 + 1;
        uVar8 = uVar8 - 1;
      }
      if (uVar8 < 9) {
        iVar21 = 1;
        uVar18 = 0;
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          bVar11 = *pbVar10;
          if (9 < bVar11 - 0x30) {
            iVar21 = 0;
            break;
          }
          pbVar10 = pbVar10 + 1;
          uVar18 = (bVar11 - 0x30) + uVar18 * 10;
        }
      }
      else {
        uVar18 = 0;
        iVar21 = 0;
        do {
          if (uVar8 == 0) {
            iVar21 = 1;
            break;
          }
          uVar14 = (uint)((ulonglong)uVar18 * 10);
          uVar18 = (uint)((ulonglong)uVar18 * 10 >> 0x20);
          if (uVar18 != 0) {
            iVar21 = 0;
            break;
          }
          uVar13 = *pbVar10 - 0x30;
          uVar18 = uVar13 + uVar14;
          if (9 < uVar13) break;
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
        } while (!CARRY4(uVar13,uVar14));
      }
    }
LAB_0121dd58:
    FUN_0134aee0(local_84,local_80,4,8);
    if (iVar5 != 2) {
      param_1[9] = uVar7;
      param_1[0x11] = iVar22;
      param_1[10] = iVar21;
      param_1[0xb] = uVar18;
      param_1[0xc] = uVar19;
      param_1[0xd] = uVar12;
      param_1[0xe] = uVar17;
      param_1[0xf] = local_10c;
      param_1[0x10] = local_108;
      param_1[1] = uVar24;
      param_1[2] = local_e0;
      param_1[4] = local_ec;
      param_1[6] = local_dc;
      param_1[3] = uVar9;
      param_1[5] = uVar23;
      param_1[7] = uVar6;
      param_1[8] = iVar15;
      iVar4 = iVar5;
      goto LAB_0121d6ac;
    }
  }
  if ((undefined1 *)*puVar3 != &DAT_80000016) {
    FUN_0121d330(puVar3);
  }
  *puVar3 = uVar24;
  puVar3[1] = local_e0;
  puVar3[2] = uVar9;
  puVar3[3] = local_ec;
  puVar3[4] = uVar23;
  puVar3[5] = local_dc;
LAB_0121d6ac:
  *param_1 = iVar4;
  return;
LAB_0121d964:
  iVar5 = 0;
  goto LAB_0121d7e8;
LAB_0121dcec:
  local_dc = 0;
  goto LAB_0121d9f4;
LAB_0121dcf4:
  iVar15 = 0;
  goto LAB_0121da30;
}

