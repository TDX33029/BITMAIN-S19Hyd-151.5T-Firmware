// FUN_013dd3c0 @ 013dd3c0 size=1324 calls_out=11 calls_in=1
// strings: 

void FUN_013dd3c0(int *param_1,int *param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  undefined4 local_d4;
  int local_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int local_98;
  int iStack_94;
  int iStack_90;
  int local_8c;
  int local_88;
  int local_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40 [7];
  
  local_cc = FUN_013d2518(param_2);
  if (local_cc != 0x7b) {
    FUN_013ff7ac(&local_cc,&DAT_005694b0,&DAT_01894e38);
LAB_013dd8f8:
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_01894e28);
  }
  iVar14 = *param_2;
  iStack_c4 = *(int *)(iVar14 + 0x54);
  iStack_c0 = *(int *)(iVar14 + 0x58);
  piVar12 = (int *)(iVar14 + 0x50);
  local_c8 = *piVar12;
  iVar4 = FUN_013d2d20(param_2);
  if (iVar4 == 0) {
    iVar4 = param_2[2];
LAB_013dd5e8:
    local_98 = *param_3;
    iStack_94 = param_3[1];
    iStack_90 = param_3[2];
    local_8c = *piVar12;
    local_88 = *(int *)(iVar14 + 0x54);
    local_84 = *(int *)(iVar14 + 0x58);
    iVar14 = param_2[1];
    if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,iVar4);
    }
    if (iVar4 == 0) {
      iVar11 = 0;
      iVar13 = 1;
    }
    else {
      iVar13 = thunk_FUN_016d4a50(iVar4);
      iVar11 = iVar4;
      if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar4);
      }
    }
    FUN_016dd1aa(iVar13,iVar14,iVar4);
    param_1[10] = local_98;
    param_1[0xb] = iStack_94;
    param_1[0xc] = iStack_90;
    param_1[0xd] = local_8c;
    param_1[0xe] = local_88;
    param_1[0xf] = local_84;
    param_1[7] = iVar11;
    param_1[8] = iVar13;
    param_1[9] = iVar4;
    *param_1 = 0x1e;
    return;
  }
  FUN_013d2168(param_2);
  iVar11 = param_2[2];
  iVar4 = *piVar12;
  if (iVar4 == iVar11) goto LAB_013dd5e8;
  local_b8 = *piVar12;
  local_b4 = *(undefined4 *)(iVar14 + 0x54);
  local_b0 = *(undefined4 *)(iVar14 + 0x58);
  uVar5 = FUN_013d2518(param_2);
  if (0x19 < uVar5 - 0x41) {
    if (uVar5 < 0x61) {
      if (uVar5 != 0x2d) goto LAB_013dd798;
    }
    else if (0x7a < uVar5) {
LAB_013dd798:
      *piVar12 = local_c8;
      *(int *)(iVar14 + 0x54) = iStack_c4;
      *(int *)(iVar14 + 0x58) = iStack_c0;
      *(undefined1 *)(param_1 + 1) = 0xc;
      *param_1 = 0x22;
      return;
    }
  }
  if (*(int *)(iVar14 + 0x40) != 0) goto LAB_013dd8f8;
  local_d4 = 0;
  *(undefined4 *)(iVar14 + 0x40) = 0xffffffff;
  *(undefined4 *)(iVar14 + 0x4c) = 0;
  if (*(int *)(iVar14 + 0x50) == iVar11) {
LAB_013dd72c:
    iVar4 = param_2[1];
    local_8c = *piVar12;
    local_88 = *(int *)(iVar14 + 0x54);
    local_84 = *(int *)(iVar14 + 0x58);
    local_98 = local_c8;
    iStack_94 = iStack_c4;
    iStack_90 = iStack_c0;
    if (iVar11 < 0) {
LAB_013dd760:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(local_d4,iVar11);
    }
    if (iVar11 == 0) {
      iVar9 = 1;
      iVar13 = 0;
    }
    else {
      iVar9 = thunk_FUN_016d4a50(iVar11);
      if (iVar9 == 0) {
        local_d4 = 1;
        goto LAB_013dd760;
      }
      iVar13 = iVar11;
    }
    FUN_016dd1aa(iVar9,iVar4,iVar11);
    param_1[10] = local_98;
    param_1[0xb] = iStack_94;
    param_1[0xc] = iStack_90;
    param_1[0xd] = local_8c;
    param_1[0xe] = local_88;
    param_1[0xf] = local_84;
    param_1[7] = iVar13;
    param_1[8] = iVar9;
    param_1[9] = iVar11;
    iVar4 = 0x1c;
LAB_013dd7f4:
    *param_1 = iVar4;
  }
  else {
    do {
      uVar5 = FUN_013d2518(param_2);
      if (0x19 < uVar5 - 0x41) {
        if (uVar5 < 0x61) {
          if (uVar5 != 0x2d) break;
        }
        else if (0x7a < uVar5) break;
      }
      uVar6 = FUN_013d2518(param_2);
      iVar4 = *(int *)(iVar14 + 0x4c);
      uVar5 = 1;
      if (0x7f < uVar6) {
        uVar5 = 2;
      }
      if ((0x7ff < uVar6) && (uVar5 = 4, uVar6 < 0x10000)) {
        uVar5 = 3;
      }
      if ((uint)(*(int *)(iVar14 + 0x44) - iVar4) < uVar5) {
        FUN_01401968((int *)(iVar14 + 0x44),iVar4,uVar5,1,1);
        pbVar7 = (byte *)(*(int *)(iVar14 + 0x48) + *(int *)(iVar14 + 0x4c));
        if (0x7f < uVar6) goto LAB_013dd554;
LAB_013dd50c:
        *pbVar7 = (byte)uVar6;
      }
      else {
        pbVar7 = (byte *)(*(int *)(iVar14 + 0x48) + iVar4);
        if (uVar6 < 0x80) goto LAB_013dd50c;
LAB_013dd554:
        bVar1 = (byte)uVar6 & 0x3f | 0x80;
        bVar2 = (byte)(uVar6 >> 6);
        if (uVar6 < 0x800) {
          pbVar7[1] = bVar1;
          *pbVar7 = bVar2 | 0xc0;
        }
        else {
          bVar2 = bVar2 & 0x3f | 0x80;
          bVar3 = (byte)(uVar6 >> 0xc);
          if (uVar6 >> 0x10 == 0) {
            pbVar7[1] = bVar2;
            pbVar7[2] = bVar1;
            *pbVar7 = bVar3 | 0xe0;
          }
          else {
            pbVar7[3] = bVar1;
            pbVar7[2] = bVar2;
            pbVar7[1] = bVar3 & 0x3f | 0x80;
            *pbVar7 = (byte)(uVar6 >> 0x12) | 0xf0;
          }
        }
      }
      *(uint *)(iVar14 + 0x4c) = uVar5 + iVar4;
      iVar4 = FUN_013d2d20(param_2);
      if (iVar4 != 0) {
        FUN_013d2168(param_2);
      }
    } while (*piVar12 != iVar11);
    if ((*piVar12 == iVar11) || (iVar4 = FUN_013d2518(param_2), iVar4 != 0x7d)) goto LAB_013dd72c;
    local_a8 = *piVar12;
    uStack_a4 = *(undefined4 *)(iVar14 + 0x54);
    uStack_a0 = *(undefined4 *)(iVar14 + 0x58);
    FUN_013d2d20(param_2);
    if (7 < *(int *)(iVar14 + 0x4c) - 3U) goto switchD_013dd6e8_caseD_4;
    uVar8 = *(undefined4 *)(iVar14 + 0x48);
    switch(*(int *)(iVar14 + 0x4c)) {
    case 3:
      iVar4 = thunk_FUN_016dd50a(uVar8,&DAT_003cf225,3);
      if (iVar4 != 0) break;
      uVar10 = 7;
LAB_013dd8d4:
      iVar4 = 0x22;
      *(undefined1 *)(param_1 + 1) = uVar10;
      goto LAB_013dd7f4;
    case 5:
      iVar4 = thunk_FUN_016dd50a(uVar8,&DAT_003cf220,5);
      if (iVar4 == 0) {
        uVar10 = 6;
        goto LAB_013dd8d4;
      }
      break;
    case 8:
      iVar4 = thunk_FUN_016dd50a(uVar8,&DAT_0056aa68,8);
      if (iVar4 == 0) {
        uVar10 = 0xb;
        goto LAB_013dd8d4;
      }
      break;
    case 10:
      uVar10 = 10;
      iVar4 = thunk_FUN_016dd50a(uVar8,&DAT_003cef44,10);
      if (iVar4 == 0) goto LAB_013dd8d4;
    }
switchD_013dd6e8_caseD_4:
    local_58 = local_b8;
    local_4c = local_a8;
    uStack_48 = uStack_a4;
    uStack_44 = uStack_a0;
    local_50 = local_b0;
    local_54 = local_b4;
    local_40[0] = 0x1d;
    FUN_013d1ce4(&local_98,param_2[1],iVar11,&local_58,local_40);
    *param_1 = local_98;
    param_1[1] = iStack_94;
    param_1[2] = iStack_90;
    param_1[3] = local_8c;
    param_1[4] = local_88;
    param_1[5] = local_84;
    param_1[6] = iStack_80;
    param_1[7] = iStack_7c;
    param_1[8] = iStack_78;
    param_1[9] = iStack_74;
    param_1[10] = local_70;
    param_1[0xb] = iStack_6c;
    param_1[0xc] = iStack_68;
    param_1[0xd] = iStack_64;
    param_1[0xe] = iStack_60;
    param_1[0xf] = iStack_5c;
  }
  *(int *)(iVar14 + 0x40) = *(int *)(iVar14 + 0x40) + 1;
  return;
}

