// FUN_0169fd44 @ 0169fd44 size=1396 calls_out=10 calls_in=0
// strings: invalid match span

/* WARNING: Type propagation algorithm not settling */

void FUN_0169fd44(int *****param_1,int *param_2,int param_3,int *param_4)

{
  byte bVar1;
  int *****pppppiVar2;
  int *****pppppiVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *****pppppiVar7;
  uint uVar8;
  uint uVar9;
  int ****ppppiVar10;
  int *****pppppiVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *****pppppiVar15;
  int *****pppppiVar16;
  code *pcVar17;
  int *****pppppiVar18;
  int *****pppppiVar19;
  int *****pppppiVar20;
  int *****pppppiVar21;
  int *****unaff_r9;
  int *****pppppiVar22;
  bool bVar23;
  bool bVar24;
  int local_d0;
  uint local_9c;
  undefined4 local_78 [2];
  int *****local_70;
  int *****local_6c;
  int *****pppppiStack_68;
  int *****pppppiStack_64;
  uint local_60;
  int *****local_5c;
  int *****local_58;
  int *****local_54;
  int *****local_50;
  int *****local_4c;
  int *****local_48;
  uint local_44;
  int *****local_40;
  int *****local_3c;
  int *****local_38;
  int *****local_34;
  int *****local_30;
  int *****local_2c;
  code *local_28;
  
  if (1 < *param_4 - 1U) {
    pppppiVar19 = (int *****)param_4[5];
    pcVar17 = *(code **)(param_2[0x455] + 0x10);
    pppppiVar11 = (int *****)param_4[2];
    pppppiVar21 = (int *****)param_4[3];
    pppppiVar22 = (int *****)param_4[4];
    iVar4 = param_2[0x454] + (*(int *)(param_2[0x455] + 8) - 1U & 0xfffffff8) + 8;
    (*pcVar17)(&local_5c,iVar4,pppppiVar11,pppppiVar21,pppppiVar22,pppppiVar19);
    pppppiVar20 = local_5c;
    pppppiVar7 = pppppiVar19;
    if (local_5c == (int *****)&DAT_00000001) {
      pppppiVar18 = (int *****)0x0;
      iVar12 = param_2[1];
      iVar5 = param_2[0x254];
      iVar14 = *param_2;
      iVar6 = param_2[0x304];
      uVar8 = param_2[0x305];
      iVar13 = param_2[0x408];
      bVar1 = *(byte *)(param_4 + 6);
      uVar9 = uVar8;
      pppppiVar15 = (int *****)0x0;
      pppppiVar16 = param_1;
      pppppiVar7 = pppppiVar22;
      do {
        pppppiVar3 = local_54;
        pppppiVar2 = local_58;
        local_d0 = param_3 + 0xd8;
        if (local_58 < pppppiVar18) {
LAB_016a0184:
          if (iVar5 != 2) {
            FUN_0169e238(&local_5c,param_2 + 0x144,param_4);
            goto joined_r0x016a01f8;
          }
          if (iVar14 == 2 && iVar12 == 0) goto LAB_016a00d8;
          iVar4 = *(int *)(param_3 + 0x248);
          goto joined_r0x016a01bc;
        }
        bVar24 = pppppiVar21 <= local_58;
        bVar23 = local_58 == pppppiVar21;
        if (!bVar24 || bVar23) {
          pppppiVar16 = (int *****)((int)local_58 + 1);
        }
        local_30 = local_58;
        if (!bVar24 || bVar23) {
          bVar24 = pppppiVar16 <= pppppiVar22;
          bVar23 = pppppiVar22 == pppppiVar16;
        }
        local_34 = pppppiVar22;
        if (bVar24 && !bVar23) {
          local_58 = (int *****)FUN_0065fd28;
          local_5c = (int *****)&local_34;
          local_50 = (int *****)FUN_012fd02c;
          local_54 = (int *****)&local_40;
          local_40 = pppppiVar21;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005a4e9e,&local_5c,&DAT_01d08154);
        }
        uVar9 = uVar9 & 0xffffff00 | (uint)bVar1;
        pppppiStack_64 = local_58;
        local_78[0] = 1;
        local_70 = pppppiVar11;
        local_6c = pppppiVar21;
        pppppiStack_68 = pppppiVar22;
        local_60 = uVar9;
        if (iVar13 == 2) {
          if (iVar6 == 2 && uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_004ce41d,0x8f,&DAT_01d07f24);
          }
          if (*(int *)(param_3 + 200) == 2) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d08104);
          }
          FUN_016ab87c(&local_5c,param_2 + 0x304,param_3 + 0x18,local_78,pppppiVar15);
        }
        else {
          FUN_016ab12c(&local_5c,param_2 + 0x3a6,local_78);
        }
        pppppiVar20 = local_54;
        unaff_r9 = local_58;
        if (local_5c == (int *****)0x2) {
          if (((uint)local_58 & 1) == 0) goto LAB_016a0184;
          goto LAB_016a00d8;
        }
        if (((uint)local_5c & 1) == 0) {
          pppppiVar20 = pppppiVar19;
          if (pppppiVar19 <= pppppiVar7) break;
          if (pppppiVar2 == (int *****)&DAT_ffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d07ef4);
          }
        }
        else {
          bVar24 = pppppiVar21 <= pppppiVar19;
          bVar23 = pppppiVar19 == pppppiVar21;
          pppppiVar7 = pppppiVar19;
          if (!bVar24 || bVar23) {
            pppppiVar7 = (int *****)((int)pppppiVar19 + 1);
          }
          local_40 = local_54;
          if (!bVar24 || bVar23) {
            bVar24 = pppppiVar7 <= local_54;
            bVar23 = local_54 == pppppiVar7;
          }
          local_3c = pppppiVar19;
          if (bVar24 && !bVar23) {
            local_30 = (int *****)FUN_0065fd28;
            local_34 = (int *****)&local_40;
            local_28 = FUN_012fd02c;
            local_2c = (int *****)&local_38;
            local_38 = pppppiVar21;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005a4e9e,&local_34,&DAT_01d08154);
          }
          local_4c = local_54;
          local_9c = local_9c & 0xffffff00 | (uint)bVar1;
          local_5c = (int *****)0x2;
          local_54 = pppppiVar11;
          local_50 = pppppiVar21;
          local_48 = pppppiVar19;
          local_44 = local_9c;
          if (iVar5 == 2) {
            if (iVar14 == 2 && iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb100(&DAT_004ce41d,0x8f,&DAT_01d07f14);
            }
            if (*(int *)(param_3 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01d08084);
            }
            FUN_016aaa2c(&local_34,param_2,local_d0,&local_5c);
          }
          else {
            FUN_016a9b88(&local_34,param_2 + 0x144,&local_5c);
          }
          if (local_34 == (int *****)0x2) goto LAB_016a00d8;
          if (((uint)local_34 & 1) == 0) {
            if (local_2c < pppppiVar20) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb100("invalid match span",0x25,&DAT_01d08164);
            }
            ppppiVar10 = (int ****)0x1;
            goto LAB_016a0090;
          }
          if (pppppiVar2 == (int *****)&DAT_ffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d07f04);
          }
          pppppiVar18 = local_30;
        }
        (*pcVar17)(&local_5c,iVar4,pppppiVar11,pppppiVar21,pppppiVar16,pppppiVar19);
        pppppiVar20 = (int *****)0x0;
        pppppiVar15 = pppppiVar3;
        pppppiVar7 = pppppiVar16;
      } while (local_5c != (int *****)0x0);
    }
    local_2c = pppppiVar20;
    ppppiVar10 = (int ****)0x0;
    pppppiVar20 = pppppiVar7;
LAB_016a0090:
    *param_1 = ppppiVar10;
    param_1[1] = (int ****)pppppiVar20;
    param_1[2] = (int ****)local_2c;
    param_1[3] = (int ****)unaff_r9;
    return;
  }
  if (param_2[0x254] == 2) {
    if (*param_2 == 2 && param_2[1] == 0) goto LAB_016a00d8;
    iVar4 = *(int *)(param_3 + 0x248);
joined_r0x016a01bc:
    if (iVar4 == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d08054);
    }
    FUN_0169e7e8(&local_5c,param_2,param_3 + 0xd8,param_4);
  }
  else {
    FUN_0169e238(&local_5c,param_2 + 0x144,param_4);
  }
joined_r0x016a01f8:
  if (local_5c != (int *****)0x2) {
    param_1[2] = (int ****)local_54;
    *param_1 = (int ****)local_5c;
    param_1[1] = (int ****)local_58;
    param_1[3] = (int ****)local_50;
    return;
  }
  FUN_016c2dec(local_58);
LAB_016a00d8:
  FUN_0169e4e0(param_1,param_2,param_3,param_4);
  return;
}

