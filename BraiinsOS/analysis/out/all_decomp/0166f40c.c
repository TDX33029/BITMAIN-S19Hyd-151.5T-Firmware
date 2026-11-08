// FUN_0166f40c @ 0166f40c size=1900 calls_out=9 calls_in=1
// strings: 2DIGIT should match u8

void FUN_0166f40c(uint *param_1,int param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  undefined4 *extraout_r3;
  uint uVar7;
  byte *pbVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  byte *local_64;
  uint local_60;
  uint local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  byte *local_38;
  uint local_34;
  uint local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  
  FUN_0166fbe0(&local_50);
  uVar2 = (undefined1)local_4c;
  if (local_50 != 3) {
    uVar12 = local_48 & 0xff;
    goto LAB_0166f5b0;
  }
  uVar12 = 4;
  if ((*(int *)(param_2 + 0xc) == 0) || (**(char **)(param_2 + 8) != ':')) {
    local_4c._2_1_ = 0;
    local_4c._3_1_ = 0;
    local_40 = (undefined4 *)0x0;
    local_3c = (undefined4 *)0x0;
    local_44 = 0;
    local_48._3_1_ = 0;
    local_48._2_1_ = 0;
    local_48._1_1_ = 0;
    local_4c._1_1_ = 0;
    local_4c._0_1_ = 0;
    local_50 = 1;
    goto LAB_0166f5b0;
  }
  *(char **)(param_2 + 8) = *(char **)(param_2 + 8) + 1;
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
  FUN_0166f028(&local_50,param_2);
  pbVar3 = local_4c;
  pbVar8 = (byte *)((uint)local_4c & 0xff);
  if (local_50 == 3) {
    if ((*(int *)(param_2 + 0xc) != 0) && (**(char **)(param_2 + 8) == ':')) {
      iVar11 = *(int *)(param_2 + 0xc) + -1;
      pcVar9 = *(char **)(param_2 + 8) + 1;
      *(char **)(param_2 + 8) = pcVar9;
      *(int *)(param_2 + 0xc) = iVar11;
      FUN_01669030(&local_50,param_2,2,2);
      if (local_50 != 3) {
LAB_0166f6d4:
        uVar12 = (uint)local_4c >> 0x10;
        uVar13 = (uint)local_4c >> 8;
        pbVar8 = local_4c;
        local_4c._3_1_ = (char)((uint)local_4c >> 0x18);
        local_4c._2_1_ = (char)uVar12;
        local_4c._1_1_ = (char)uVar13;
        goto LAB_0166f57c;
      }
      if (local_48 == 1) {
        bVar6 = *local_4c;
        bVar4 = 1;
        if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) goto LAB_0166fb24;
      }
      else {
        if (local_48 == 0) {
          bVar4 = 0;
          goto LAB_0166fb24;
        }
        bVar6 = *local_4c;
      }
      uVar12 = local_48;
      pbVar8 = local_4c;
      if (bVar6 == 0x2b) {
        pbVar8 = local_4c + 1;
        uVar12 = local_48 - 1;
      }
      local_54 = extraout_r3;
      if (2 < uVar12) {
        uVar13 = 0;
        do {
          if (uVar12 == 0) goto LAB_0166f664;
          uVar13 = (uVar13 & 0xff) * 4 + (uVar13 & 0xff);
          if (uVar13 >> 7 != 0) {
            bVar4 = 1;
            if (*pbVar8 - 0x30 < 10) {
              bVar4 = 2;
            }
            goto LAB_0166fb24;
          }
          uVar5 = *pbVar8 - 0x30;
          if (9 < uVar5) {
            bVar4 = 1;
            goto LAB_0166fb24;
          }
          local_54 = (undefined4 *)(uVar13 * 2 & 0xff);
          uVar13 = (int)local_54 + (uVar5 & 0xff);
          uVar12 = uVar12 - 1;
          pbVar8 = pbVar8 + 1;
        } while ((uVar13 & 0xffffff00) == 0);
        bVar4 = 2;
LAB_0166fb24:
        local_50 = (uint)bVar4;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("2DIGIT should match u8",0x16,&local_50,&DAT_018ad7a8,&DAT_018ad7f8);
      }
      if (uVar12 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *pbVar8 - 0x30;
        bVar4 = 1;
        if (9 < uVar13) goto LAB_0166fb24;
        if (uVar12 != 1) {
          if (9 < pbVar8[1] - 0x30) goto LAB_0166fb24;
          uVar13 = (pbVar8[1] - 0x30) + uVar13 * 10;
LAB_0166f664:
          if (0x3c < (uVar13 & 0xff)) {
            *(char **)(param_2 + 8) = pcVar9;
            *(int *)(param_2 + 0xc) = iVar11;
            local_50 = 0x80000001;
            local_5c = 0;
            local_60 = 0;
            local_64 = (byte *)0x4;
            local_40 = (undefined4 *)thunk_FUN_016d4a50(0x18);
            if (local_40 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0x18);
            }
            local_4c = (byte *)0x0;
            local_3c = &DAT_018ad77c;
            local_50 = 1;
            *local_40 = 0x80000001;
            local_44 = 0;
            local_48 = 4;
            goto LAB_0166f6d4;
          }
        }
      }
      iVar11 = *(int *)(param_2 + 0xc);
      local_60 = 4;
      pcVar9 = *(char **)(param_2 + 8);
      uVar12 = 1;
      if ((iVar11 == 0) || (*pcVar9 != '.')) {
        local_44 = 0;
        local_40 = (undefined4 *)0x0;
        local_4c = (byte *)0x0;
LAB_0166f7d8:
        local_64 = local_4c;
        local_5c = local_44;
        local_58 = local_40;
        if (uVar12 != 1) {
          uVar13 = (uint)local_4c >> 0x10;
          uVar5 = (uint)local_4c >> 8;
          local_50 = uVar12;
          pbVar8 = local_4c;
          local_48 = local_60;
          local_3c = local_54;
          local_4c._3_1_ = (char)((uint)local_4c >> 0x18);
          local_4c._2_1_ = (char)uVar13;
          local_4c._1_1_ = (char)uVar5;
          goto LAB_0166f57c;
        }
      }
      else {
        *(char **)(param_2 + 8) = pcVar9 + 1;
        *(int *)(param_2 + 0xc) = iVar11 + -1;
        FUN_01669030(&local_50,param_2,1,0xffffffff);
        if (local_50 != 3) {
          uVar12 = local_50;
          local_54 = local_3c;
          local_60 = local_48;
          goto LAB_0166f7d8;
        }
        if (local_48 < 10) {
          if (local_48 != 0) {
            uVar12 = local_48;
            if (local_48 != 1) goto LAB_0166f850;
            bVar6 = *local_4c;
            if (bVar6 == 0x2b || bVar6 == 0x2d) goto LAB_0166f8e4;
            uVar12 = 1;
            goto LAB_0166f854;
          }
        }
        else {
          uVar12 = 9;
          if ((char)local_4c[9] < -0x40) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(local_4c,local_48,0,9,&DAT_018ad808);
          }
LAB_0166f850:
          bVar6 = *local_4c;
LAB_0166f854:
          uVar5 = uVar12;
          if (bVar6 == 0x2b) {
            local_4c = local_4c + 1;
            uVar5 = uVar12 - 1;
          }
          if (uVar5 < 9) {
            uVar10 = 0;
            for (; uVar5 != 0; uVar5 = uVar5 - 1) {
              bVar6 = *local_4c;
              if (9 < bVar6 - 0x30) goto LAB_0166f8e4;
              local_4c = local_4c + 1;
              uVar10 = (bVar6 - 0x30) + uVar10 * 10;
            }
LAB_0166f89c:
            local_50 = 0x80000001;
            FUN_0166f26c(&local_50);
            uVar5 = (uint)((ulonglong)*(uint *)(&UNK_00414348 + uVar12 * 4) * (ulonglong)uVar10);
            if ((int)((ulonglong)*(uint *)(&UNK_00414348 + uVar12 * 4) * (ulonglong)uVar10 >> 0x20)
                == 0) {
              local_50 = 0x80000001;
              FUN_0166f26c(&local_50);
              goto LAB_0166f974;
            }
          }
          else if (*local_4c - 0x30 < 10) {
            uVar10 = local_4c[1] - 0x30;
            uVar5 = (*local_4c - 0x30) * 10;
            if ((uVar10 < 10) && (!CARRY4(uVar10,uVar5))) {
              uVar7 = local_4c[2] - 0x30;
              uVar5 = (uVar10 + uVar5) * 10;
              if ((uVar7 < 10) && (!CARRY4(uVar7,uVar5))) {
                uVar10 = local_4c[3] - 0x30;
                uVar5 = (uVar7 + uVar5) * 10;
                if (((uVar10 < 10) && (!CARRY4(uVar10,uVar5))) &&
                   (lVar1 = (ulonglong)(uVar10 + uVar5) * 10, uVar5 = (uint)lVar1,
                   (int)((ulonglong)lVar1 >> 0x20) == 0)) {
                  uVar10 = local_4c[4] - 0x30;
                  if (((uVar10 < 10) && (!CARRY4(uVar10,uVar5))) &&
                     (lVar1 = (ulonglong)(uVar10 + uVar5) * 10, uVar5 = (uint)lVar1,
                     (int)((ulonglong)lVar1 >> 0x20) == 0)) {
                    uVar10 = local_4c[5] - 0x30;
                    if (((uVar10 < 10) && (!CARRY4(uVar10,uVar5))) &&
                       (lVar1 = (ulonglong)(uVar10 + uVar5) * 10, uVar5 = (uint)lVar1,
                       (int)((ulonglong)lVar1 >> 0x20) == 0)) {
                      uVar10 = local_4c[6] - 0x30;
                      if (((uVar10 < 10) && (!CARRY4(uVar10,uVar5))) &&
                         (lVar1 = (ulonglong)(uVar10 + uVar5) * 10, uVar5 = (uint)lVar1,
                         (int)((ulonglong)lVar1 >> 0x20) == 0)) {
                        uVar10 = local_4c[7] - 0x30;
                        if (((uVar10 < 10) && (!CARRY4(uVar10,uVar5))) &&
                           (lVar1 = (ulonglong)(uVar10 + uVar5) * 10, uVar5 = (uint)lVar1,
                           (int)((ulonglong)lVar1 >> 0x20) == 0)) {
                          uVar7 = local_4c[8] - 0x30;
                          uVar10 = uVar7 + uVar5;
                          if ((uVar7 < 10) && (!CARRY4(uVar7,uVar5))) goto LAB_0166f89c;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_0166f8e4:
        *(char **)(param_2 + 8) = pcVar9;
        *(int *)(param_2 + 0xc) = iVar11;
        local_2c = (undefined4 *)0x0;
        local_30 = 0;
        local_38 = (byte *)0x0;
        local_50 = 0x80000001;
        local_34 = 4;
        local_58 = (undefined4 *)thunk_FUN_016d4a50(0x18);
        if (local_58 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x18);
        }
        *local_58 = 0x80000001;
        local_28 = &DAT_018ad77c;
        local_64 = local_38;
        local_60 = local_34;
        local_5c = local_30;
        local_54 = &DAT_018ad77c;
        local_2c = local_58;
      }
      *(char **)(param_2 + 8) = pcVar9;
      *(int *)(param_2 + 0xc) = iVar11;
      FUN_0166ec34(&local_64);
      uVar5 = 0;
LAB_0166f974:
      *(undefined1 *)(param_1 + 2) = uVar2;
      *(char *)((int)param_1 + 10) = (char)uVar13;
      *(char *)((int)param_1 + 9) = (char)pbVar3;
      *param_1 = 3;
      param_1[1] = uVar5;
      return;
    }
    local_44 = 0;
    local_40 = (undefined4 *)0x0;
    local_3c = (undefined4 *)0x0;
    local_4c._0_1_ = 0;
    local_4c._1_1_ = 0;
    local_4c._2_1_ = 0;
    local_4c._3_1_ = 0;
    local_50 = 2;
    local_48 = 4;
  }
  else {
    uVar12 = (uint)local_4c >> 8;
    local_4c._2_1_ = (undefined1)((uint)local_4c >> 0x10);
    local_4c._1_1_ = (char)uVar12;
LAB_0166f57c:
    local_4c._0_1_ = SUB41(pbVar8,0);
    if (local_50 == 1) {
      local_50 = 2;
    }
  }
  uVar13 = local_48 >> 0x10;
  uVar5 = local_48 >> 8;
  uVar12 = local_48;
  local_48._3_1_ = (char)(local_48 >> 0x18);
  local_48._2_1_ = (char)uVar13;
  local_48._1_1_ = (char)uVar5;
LAB_0166f5b0:
  *(undefined1 *)((int)param_1 + 0xb) = local_48._3_1_;
  *(undefined1 *)((int)param_1 + 10) = local_48._2_1_;
  *(undefined1 *)((int)param_1 + 9) = local_48._1_1_;
  *(char *)(param_1 + 2) = (char)uVar12;
  *(undefined1 *)((int)param_1 + 7) = local_4c._3_1_;
  *(undefined1 *)((int)param_1 + 6) = local_4c._2_1_;
  *(undefined1 *)((int)param_1 + 5) = local_4c._1_1_;
  *(undefined1 *)(param_1 + 1) = (undefined1)local_4c;
  *param_1 = local_50;
  param_1[3] = local_44;
  param_1[4] = (uint)local_40;
  param_1[5] = (uint)local_3c;
  return;
}

