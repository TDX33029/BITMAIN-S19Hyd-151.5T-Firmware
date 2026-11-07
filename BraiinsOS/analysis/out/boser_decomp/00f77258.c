// FUN_00f77258 @ 00f77258 size=1828 calls_out=27 calls_in=0
// strings: boser::button_manageropen/boser/boser/src/button_manager.rsevent open/boser/boser/src/button_manager.rs:118event open/boser/boser/src/button_manager.rs:133event open/boser/boser/src/button_manager.rs:122event open/boser/boser/src/button_manager.rs:135event open/boser/boser/src/button_manager.rs:193event open/boser/boser/src/button_manager.rs:171event open/boser/boser/src/button_manager.rs:173event open/boser/boser/src/button_manager.rs:176event open/boser/boser/src/button_manager.rs:184event open/boser/boser/src/button_manager.rs:228event open/boser/boser/src/button_manager.rs:247event open/boser/boser/src/button_manager.rs:211event open/boser/boser/src/metrics_scraper/metrics_datatypes/utils.rs:41event open/boser/boser/src/metrics_scraper/metrics_datatypes/utils.rs:44 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::button_manageropen/boser/boser/src/button_manager.rsevent open/boser/boser/src/button_manager.rs:118event open/boser/boser/src/button_manager.rs:133event open/boser/boser/src/button_manager.rs:122event open/boser/boser/src/button_manager.rs:135event open/boser/boser/src/button_manager.rs:193event open/boser/boser/src/button_manager.rs:171event open/boser/boser/src/button_manager.rs:173event open/boser/boser/src/button_manager.rs:176event open/boser/boser/src/button_manager.rs:184event open/boser/boser/src/button_manager.rs:228event open/boser/boser/src/button_manager.rs:247event open/boser/boser/src/button_manager.rs:211event open/boser/boser/src/metrics_scraper/metrics_datatypes/utils.rs:41event open/boser/boser/src/metrics_scraper/metrics_datatypes/utils.rs:44 | InvalidParamSegmentInvalidParamInvalidCatchAll

undefined4 FUN_00f77258(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  undefined4 uVar10;
  byte *pbVar11;
  uint uVar12;
  undefined4 *puVar13;
  bool bVar14;
  undefined8 uVar15;
  int *******local_170;
  int ******local_16c;
  undefined1 *local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  uint uStack_150;
  undefined1 auStack_148 [112];
  int *******local_d8;
  int ******local_d4;
  undefined1 *local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  uint local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_60;
  undefined3 uStack_5c;
  undefined1 local_58;
  undefined4 local_57;
  undefined3 uStack_53;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int *******local_40;
  undefined4 local_3c;
  int *local_38;
  int *****local_34;
  undefined1 **local_30;
  undefined1 *local_2c;
  code *local_28;
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
  }
  uVar15 = FUN_019ec558(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  uVar10 = (undefined4)((ulonglong)uVar15 >> 0x20);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x25)) {
  case 0:
    local_d8 = (int *******)(param_1 + 0x1c);
    pbVar11 = (byte *)(param_1 + 0x24);
    *pbVar11 = 0;
    local_d4 = *local_d8 + 2;
    DataMemoryBarrier(0xb);
    local_d0 = (undefined1 *)((uint)(*local_d8)[2] >> 2);
    local_bc = 0;
    local_c4 = 0;
    local_c8 = 0;
    local_cc = 0;
    local_b8 = local_b8 & 0xffffff00;
    FUN_019e6e74(&local_b0,local_d0,5,0,0,&DAT_01c194d4);
    local_170 = local_d8;
    local_16c = local_d4;
    local_168 = local_d0;
    local_164 = local_cc;
    local_160 = local_c8;
    uStack_15c = local_c4;
    uStack_158 = uStack_c0;
    uStack_154 = local_bc;
    uStack_150 = local_b8;
    FUN_01bed4e2(auStack_148,&local_b0,0x50);
    piVar8 = (int *)(param_1 + 0x28);
    *piVar8 = (int)local_170;
    *(int *******)(param_1 + 0x2c) = local_16c;
    *(undefined1 **)(param_1 + 0x30) = local_168;
    *(undefined4 *)(param_1 + 0x34) = local_164;
    *(undefined4 *)(param_1 + 0x38) = local_160;
    *(undefined4 *)(param_1 + 0x3c) = uStack_15c;
    *(undefined4 *)(param_1 + 0x40) = uStack_158;
    *(undefined4 *)(param_1 + 0x44) = uStack_154;
    *(uint *)(param_1 + 0x48) = uStack_150;
    FUN_01bed4e2(param_1 + 0x50,auStack_148,0x50);
    *(byte **)(param_1 + 0xa0) = pbVar11;
    *(int **)(param_1 + 0xa4) = piVar8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c194e4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c194e4);
  case 3:
    pbVar11 = *(byte **)(param_1 + 0xa0);
    piVar8 = *(int **)(param_1 + 0xa4);
    break;
  case 4:
    goto switchD_00f77290_caseD_4;
  case 5:
    goto switchD_00f77290_caseD_5;
  }
  puVar13 = (undefined4 *)*param_2;
  bVar2 = FUN_019ec70c();
  if ((bVar2 == 2) || ((bVar2 & 1) != 0)) {
    iVar6 = FUN_019f8914(2);
    bVar9 = false;
    iVar7 = 0;
    bVar14 = true;
    do {
      bVar3 = bVar14;
      if ((iVar7 + iVar6 & 1U) == 0) {
        if ((*pbVar11 & 1) == 0) {
          iVar7 = FUN_01a3be00(piVar8,puVar13);
          bVar9 = true;
          if (iVar7 == 0) {
            iVar6 = 0;
            bVar2 = 1;
            goto LAB_00f77464;
          }
        }
      }
      else if ((*pbVar11 & 2) == 0) {
        iVar7 = FUN_019e84a0(piVar8 + 10,puVar13);
        bVar9 = true;
        if (iVar7 == 0) {
          bVar2 = 2;
          iVar6 = 1;
LAB_00f77464:
          *pbVar11 = *pbVar11 | bVar2;
          goto LAB_00f77474;
        }
      }
      iVar7 = 1;
      bVar14 = false;
    } while (bVar3);
    iVar6 = 2;
    if (!bVar9) {
LAB_00f77474:
      FUN_00f29a0c(param_1 + 0x28);
      if (iVar6 == 0) {
LAB_00f77880:
        FUN_005faf6c(param_1 + 0x1c);
        piVar8 = *(int **)(param_1 + 0x20);
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar8;
          bVar14 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar14);
        *piVar8 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0121d018(*(undefined4 *)(param_1 + 0x20));
        }
        *(undefined1 *)(param_1 + 0x25) = 1;
        FUN_019ec558((int)uVar15,uVar10);
        local_170 = (int *******)0x2;
        FUN_00f32080(param_1,&local_170);
        return 0;
      }
      if (iVar6 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("all branches are disabled and there is no else branch",0x6b,&DAT_01c194f4);
      }
      *(undefined1 *)(param_1 + 0x60) = 0;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x20) + 8;
switchD_00f77290_caseD_4:
      iVar6 = FUN_00ba6b7c(param_1 + 0x28,param_2);
      if (iVar6 == 0) {
        uVar4 = 4;
      }
      else {
        *(int *)(param_1 + 0x18) = iVar6;
        if (*(char *)(param_1 + 0x60) == '\x03') {
          cVar5 = *(char *)(param_1 + 0x5c);
          bVar14 = cVar5 == '\x03';
          if (bVar14) {
            cVar5 = *(char *)(param_1 + 0x38);
          }
          if (bVar14 && cVar5 == '\x04') {
            FUN_0193c3cc(param_1 + 0x3c);
            iVar6 = *(int *)(param_1 + 0x18);
          }
        }
        *(undefined2 *)(param_1 + 0x95) = 3;
        *(int *)(param_1 + 0x90) = iVar6 + 0x14;
switchD_00f77290_caseD_5:
        FUN_00f3ba8c(&local_170,param_1 + 0x28,param_2);
        uVar4 = local_170._0_1_;
        uVar12 = (uint)local_170 & 0xff;
        if (uVar12 != 5) {
          uStack_60 = CONCAT13(local_16c._0_1_,local_170._1_3_);
          uStack_5c = (undefined3)((uint)local_16c >> 8);
          if (*(char *)(param_1 + 0x96) == '\x03') {
            FUN_00ba6dc4(param_1 + 0x2c);
          }
          if (uVar12 != 4) {
            local_58 = uVar4;
            local_57 = uStack_60;
            uStack_53 = uStack_5c;
            if ((DAT_01d50f88 < 4) &&
               (((DAT_01d4c5cc - 1 < 2 ||
                 ((DAT_01d4c5cc != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4c5c4), cVar5 != '\0')))) &&
                (iVar6 = FUN_01aaa278(DAT_01d4c5c4), iVar6 != 0)))) {
              if (*(int *******)(DAT_01d4c5c4 + 0x20) == (int ******)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19504);
              }
              local_168 = *(undefined1 **)(DAT_01d4c5c4 + 0x24);
              local_164 = *(undefined4 *)(DAT_01d4c5c4 + 0x28);
              local_d4 = &local_34;
              local_38 = (int *)(DAT_01d4c5c4 + 0x1c);
              local_170 = (int *******)*local_38;
              local_3c = 1;
              local_30 = &local_2c;
              local_40 = (int *******)&local_d8;
              local_2c = &local_58;
              local_160 = 0;
              local_d0 = &DAT_01d2ea4c;
              local_34 = (int *****)&DAT_00572361;
              local_28 = FUN_019a7d7c;
              local_16c = *(int *******)(DAT_01d4c5c4 + 0x20);
              local_d8 = (int *******)&local_170;
              FUN_01aaaecc(DAT_01d4c5c4,&local_40);
              iVar6 = DAT_01d4c5c4;
              if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
                local_ac = *(undefined4 *)(DAT_01d4c5c4 + 0x14);
                local_a8 = *(undefined4 *)(DAT_01d4c5c4 + 0x18);
                local_b0 = 2;
                DataMemoryBarrier(0xb);
                puVar13 = DAT_01d4edc8;
                pcVar1 = DAT_01d4edc4;
                if (DAT_01d51174 != 2) {
                  puVar13 = &DAT_01cfc5e0;
                  pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                }
                iVar7 = (*(code *)puVar13[3])(pcVar1,&local_b0);
                if (iVar7 != 0) {
                  FUN_01aaa328(iVar6,pcVar1,puVar13[4],&local_b0,&local_40);
                }
              }
            }
            else {
              iVar6 = DAT_01d4c5c4;
              if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
                local_4c = *(undefined4 *)(DAT_01d4c5c4 + 0x14);
                local_48 = *(undefined4 *)(DAT_01d4c5c4 + 0x18);
                local_50 = 2;
                DataMemoryBarrier(0xb);
                puVar13 = DAT_01d4edc8;
                pcVar1 = DAT_01d4edc4;
                if (DAT_01d51174 != 2) {
                  puVar13 = &DAT_01cfc5e0;
                  pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                }
                iVar7 = (*(code *)puVar13[3])(pcVar1,&local_50);
                if (iVar7 != 0) {
                  local_38 = (int *)(DAT_01d4c5c4 + 0x1c);
                  if (*(int *******)(DAT_01d4c5c4 + 0x20) == (int ******)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19504);
                  }
                  local_168 = *(undefined1 **)(DAT_01d4c5c4 + 0x24);
                  local_d4 = &local_34;
                  local_164 = *(undefined4 *)(DAT_01d4c5c4 + 0x28);
                  local_40 = (int *******)&local_d8;
                  local_3c = 1;
                  local_30 = &local_2c;
                  local_160 = 0;
                  local_d0 = &DAT_01d2ea4c;
                  local_34 = (int *****)&DAT_00572361;
                  local_28 = FUN_019a7d7c;
                  local_2c = &local_58;
                  local_b0 = local_50;
                  local_ac = local_4c;
                  local_a8 = local_48;
                  local_170 = (int *******)*local_38;
                  local_16c = *(int *******)(DAT_01d4c5c4 + 0x20);
                  local_d8 = (int *******)&local_170;
                  FUN_01aaa328(iVar6,pcVar1,puVar13[4],&local_b0,&local_40);
                }
              }
            }
            FUN_0183a528(&local_58);
          }
          FUN_019f8c54(*(undefined4 *)(param_1 + 0x18),1);
          goto LAB_00f77880;
        }
        uVar4 = 5;
      }
      goto LAB_00f776ec;
    }
  }
  else {
    FUN_019ece98(*puVar13,puVar13[1]);
  }
  uVar4 = 3;
LAB_00f776ec:
  *(undefined1 *)(param_1 + 0x25) = uVar4;
  FUN_019ec558((int)uVar15,uVar10);
  return 1;
}

