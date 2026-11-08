// FUN_019b2ca4 @ 019b2ca4 size=2164 calls_out=20 calls_in=0
// strings: /pro | c/se | lf/m | ount | info | cgroup

/* WARNING: Removing unreachable block (ram,0x019b2ec4) */
/* WARNING: Removing unreachable block (ram,0x019b2e98) */

void FUN_019b2ca4(char (*param_1) [4],undefined4 param_2,undefined4 param_3)

{
  char acVar1 [4];
  char acVar2 [4];
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char acVar10 [4];
  code *pcVar11;
  uint *puVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  undefined4 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int local_228;
  int local_224;
  uint local_218;
  uint local_214;
  int local_20c;
  int local_204;
  undefined4 local_200;
  uint local_1fc;
  uint local_1f8;
  uint local_1f4;
  undefined4 *local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  uint local_1e0;
  undefined8 local_1dc;
  undefined4 local_1d4;
  char local_1d0 [4];
  undefined4 local_1cc;
  undefined1 local_1c8;
  char local_1c4 [4];
  char local_1c0 [4];
  undefined2 local_1bc;
  char local_1b8 [4];
  char local_1b4 [4];
  char local_1b0 [4];
  char local_1ac [4];
  char local_1a8 [4];
  uint local_1a4;
  undefined1 local_1a0;
  int local_19c;
  int local_198;
  undefined2 local_194;
  uint local_38;
  undefined4 *local_34;
  int local_30;
  
  iVar4 = thunk_FUN_01be5118(0x2000);
  if (iVar4 != 0) {
    local_1dc._0_4_ = 0x1b6;
    local_1dc._4_4_ = 1;
    local_1e0 = 0;
    local_1d4 = (uint)local_1d4._2_2_ << 0x10;
    local_1b8[0] = '/';
    local_1b8[1] = 'p';
    local_1b8[2] = 'r';
    local_1b8[3] = 'o';
    local_1b4[0] = 'c';
    local_1b4[1] = '/';
    local_1b4[2] = 's';
    local_1b4[3] = 'e';
    local_1b0[0] = 'l';
    local_1b0[1] = 'f';
    local_1b0[2] = '/';
    local_1b0[3] = 'm';
    local_1ac[0] = 'o';
    local_1ac[1] = 'u';
    local_1ac[2] = 'n';
    local_1ac[3] = 't';
    local_1a8[0] = 'i';
    local_1a8[1] = 'n';
    local_1a8[2] = 'f';
    local_1a8[3] = 'o';
    local_1a4 = local_1a4 & 0xffffff00;
    FUN_012fbc58(&local_204,local_1b8,0x15);
    if (local_204 == 1) {
      local_38 = 2;
      local_34 = &DAT_01d27a70;
    }
    else {
      FUN_01980058(&local_38,local_200,&local_1e0);
    }
    puVar3 = local_34;
    if (((local_38 & 0xff) == 4) || (uVar13 = local_38 & 0xff, uVar13 == 4)) {
      local_1f4 = 0;
      local_1f8 = 0;
      local_1fc = 0;
      local_200 = 0x2000;
      local_1f0 = local_34;
      local_204 = iVar4;
      local_20c = thunk_FUN_01be5118(0x100);
      if (local_20c == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0x100);
      }
      uVar13 = 0;
      local_1ec = 0x100;
      local_214 = 0;
      local_218 = 0;
      uVar5 = 0;
      local_1e8 = local_20c;
      do {
        local_1e4 = 0;
        puVar17 = (undefined4 *)0x0;
        uVar18 = uVar5;
        do {
          iVar16 = local_1e4;
          if (uVar5 <= uVar13) {
            while( true ) {
              uVar5 = FUN_01bf0424(puVar3,iVar4,0x2000);
              if (uVar5 != 0xffffffff) break;
              puVar6 = (undefined4 *)FUN_01be3244();
              puVar6 = (undefined4 *)*puVar6;
              if (puVar6 != (undefined4 *)&SUB_00000004) {
                uVar18 = 0;
                local_1f8 = 0;
                local_1fc = 0;
                local_1f4 = local_214;
                local_1e0 = 0;
                goto LAB_019b2f64;
              }
            }
            uVar13 = 0;
            if (local_218 < uVar5) {
              local_218 = uVar5;
            }
            uVar18 = uVar5;
            local_214 = local_218;
          }
          uVar15 = uVar5 - uVar13;
          iVar7 = iVar4 + uVar13;
          if (uVar15 < 8) {
            uVar9 = 0;
            if (uVar15 != 0) {
              do {
                if (*(char *)(iVar7 + uVar9) == '\n') goto LAB_019b32ac;
                uVar9 = uVar9 + 1;
              } while (uVar15 != uVar9);
            }
          }
          else {
            uVar19 = FUN_01307168(10,iVar7,uVar15);
            uVar9 = (uint)(uVar19 >> 0x20);
            if ((uVar19 & 1) != 0) {
LAB_019b32ac:
              local_1f4 = local_214;
              local_1fc = uVar13;
              if (uVar15 <= uVar9) {
                local_1f8 = uVar18;
                    /* WARNING: Subroutine does not return */
                FUN_012faff4(0,uVar9,uVar15,&DAT_01d276a0);
              }
              iVar8 = uVar9 + 1;
              if (uVar9 < (uint)(local_1ec - iVar16)) {
                local_1f8 = uVar18;
              }
              else {
                local_1f8 = uVar18;
                FUN_0197ac30(&local_1ec,iVar16,iVar8,1,1);
                local_20c = local_1e8;
                iVar16 = local_1e4;
              }
              FUN_01bed4e2(local_20c + iVar16,iVar7,iVar8);
              puVar6 = (undefined4 *)(iVar8 + (int)puVar17);
              iVar16 = iVar16 + iVar8;
              local_1fc = iVar8 + uVar13;
              if (uVar5 < iVar8 + uVar13) {
                local_1fc = uVar5;
              }
              goto LAB_019b3318;
            }
          }
          if ((uint)(local_1ec - iVar16) < uVar15) {
            FUN_0197ac30(&local_1ec,iVar16,uVar15,1,1);
            local_20c = local_1e8;
            iVar16 = local_1e4;
          }
          else {
          }
          FUN_01bed4e2(local_20c + iVar16,iVar7,uVar15);
          iVar16 = iVar16 + uVar15;
          puVar6 = (undefined4 *)(uVar15 + (int)puVar17);
          puVar17 = puVar6;
          uVar13 = uVar5;
          local_1e4 = iVar16;
        } while (uVar15 != 0);
        local_1f4 = local_214;
        local_1fc = uVar5;
        local_1f8 = uVar18;
LAB_019b3318:
        local_1e0 = CONCAT31(local_1e0._1_3_,4);
LAB_019b2f64:
        uVar13 = local_1fc;
        FUN_012fbd94(local_1b8,local_20c,iVar16);
        if (local_1b8 == (char  [4])0x0) {
          puVar12 = &local_1e0;
          puVar17 = puVar6;
LAB_019b2fac:
          uVar5 = *puVar12;
          puVar6 = puVar17;
        }
        else {
          uVar5 = local_1e0 & 0xff;
          iVar16 = 0;
          puVar12 = &DAT_01d276bc;
          puVar17 = (undefined4 *)&DAT_01d276b0;
          if (uVar5 == 4) goto LAB_019b2fac;
        }
        local_1e4 = iVar16;
        if ((uVar5 & 0xff) != 4) {
          if ((uVar5 & 0xff) == 3) {
            uVar14 = *puVar6;
            puVar17 = (undefined4 *)puVar6[1];
            pcVar11 = (code *)*puVar17;
            if (pcVar11 != (code *)0x0) {
              (*pcVar11)(uVar14);
            }
            if (puVar17[1] != 0) {
              thunk_FUN_01be4678(uVar14);
            }
            thunk_FUN_01be4678(puVar6);
          }
LAB_019b340c:
          *param_1 = (char  [4])0x80000001;
joined_r0x019b3498:
          if (local_1ec != 0) {
            thunk_FUN_01be4678(local_1e8);
          }
          thunk_FUN_01be4678(iVar4);
          FUN_01bf01d6(puVar3);
          return;
        }
        if (puVar6 == (undefined4 *)0x0) {
          *param_1 = (char  [4])0x80000001;
          goto joined_r0x019b3498;
        }
        local_20c = local_1e8;
        uVar20 = FUN_019b29cc(local_1e8,iVar16);
        local_1d0 = SUB84((ulonglong)uVar20 >> 0x20,0);
        local_1bc = 1;
        local_1c8 = 1;
        local_1c4[0] = '\0';
        local_1c4[1] = '\0';
        local_1c4[2] = '\0';
        local_1c4[3] = '\0';
        local_1cc = 0x20;
        local_1d4 = 0;
        local_1e0 = 0x20;
        local_1c0 = local_1d0;
        local_1dc = uVar20;
        FUN_01980418(local_1b8,&local_1e0);
        if (local_1b8 == (char  [4])0x0) goto LAB_019b340c;
        local_1c4[0] = local_1b0[0];
        local_1c4[1] = local_1b0[1];
        local_1c4[2] = local_1b0[2];
        local_1c4[3] = local_1b0[3];
        if (local_1bc._1_1_ != '\0') goto LAB_019b340c;
        FUN_01980418(local_1b8,&local_1e0);
        if (local_1b8 == (char  [4])0x0) goto LAB_019b340c;
        local_1c4[0] = local_1b0[0];
        local_1c4[1] = local_1b0[1];
        local_1c4[2] = local_1b0[2];
        local_1c4[3] = local_1b0[3];
        if (local_1bc._1_1_ != '\0') goto LAB_019b340c;
        FUN_01980418(local_1b8,&local_1e0);
        iVar16 = (int)local_1dc;
        if (local_1b8 == (char  [4])0x0) goto LAB_019b340c;
        local_1c4[0] = local_1b0[0];
        local_1c4[1] = local_1b0[1];
        local_1c4[2] = local_1b0[2];
        local_1c4[3] = local_1b0[3];
        if (local_1bc._1_1_ != '\0') goto LAB_019b340c;
        FUN_01980418(local_1b8,&local_1e0);
        acVar2 = local_1b4;
        acVar1 = local_1c4;
        local_228 = (int)local_1dc;
        if (local_1b8 == (char  [4])0x0) goto LAB_019b340c;
        local_1c4[0] = local_1b0[0];
        local_1c4[1] = local_1b0[1];
        local_1c4[2] = local_1b0[2];
        local_1c4[3] = local_1b0[3];
        if (local_1bc._1_1_ != '\0') goto LAB_019b340c;
        FUN_01980418(local_1b8,&local_1e0);
        acVar10 = local_1c4;
        if (local_1b8 == (char  [4])0x1) {
          local_1c4[0] = local_1b0[0];
          local_1c4[1] = local_1b0[1];
          local_1c4[2] = local_1b0[2];
          local_1c4[3] = local_1b0[3];
          local_224 = (int)local_1b4 - (int)acVar10;
        }
        else {
          if (local_1bc._1_1_ != '\0') goto LAB_019b340c;
          local_1bc = CONCAT11(1,(char)local_1bc);
          if (((char)local_1bc != '\x01') && (local_1c0 == local_1c4)) goto LAB_019b340c;
          local_224 = (int)local_1c0 - (int)local_1c4;
          local_228 = (int)local_1dc;
        }
        local_228 = local_228 + (int)acVar10;
        uVar20 = FUN_019b3620(&local_1e0);
        acVar10 = SUB84((ulonglong)uVar20 >> 0x20,0);
        if ((int)uVar20 == 0) goto LAB_019b340c;
        iVar7 = FUN_019b3620(&local_1e0);
        if (iVar7 == 0) goto LAB_019b340c;
        uVar21 = FUN_019b3620(&local_1e0);
        if ((int)uVar21 == 0) goto LAB_019b340c;
        if ((int)((ulonglong)uVar21 >> 0x20) == 6) {
          iVar7 = thunk_FUN_01bed842((int)uVar21,"cgroup",6);
          if (iVar7 == 0) {
            local_194 = 1;
            local_1a0 = 1;
            local_19c = 0;
            local_1ac[0] = '\0';
            local_1ac[1] = '\0';
            local_1ac[2] = '\0';
            local_1ac[3] = '\0';
            local_1a4 = 0x2c;
            local_1b8[0] = ',';
            local_1b8[1] = '\0';
            local_1b8[2] = '\0';
            local_1b8[3] = '\0';
            local_1b0 = acVar10;
            local_1a8 = acVar10;
            do {
              local_198 = (int)((ulonglong)uVar20 >> 0x20);
              local_1b4 = SUB84(uVar20,0);
              acVar10 = local_1b4;
              FUN_01980418(&local_38,local_1b8);
              if (local_38 == 1) {
                iVar8 = (int)local_34 - local_19c;
                iVar7 = local_30;
              }
              else {
                if (local_194._1_1_ != '\0') break;
                local_194 = CONCAT11(1,(char)local_194);
                if (((char)local_194 != '\x01') && (local_198 == local_19c)) break;
                iVar8 = local_198 - local_19c;
                acVar10 = local_1b4;
                iVar7 = local_19c;
              }
              if (iVar8 == 3) {
                iVar8 = (int)acVar10 + local_19c;
                local_19c = iVar7;
                iVar8 = thunk_FUN_01bed842(iVar8,"cpu",3);
                iVar7 = local_19c;
                if (iVar8 == 0) {
                  uVar20 = FUN_019830f8(iVar16 + (int)acVar1,(int)acVar2 - (int)acVar1,&DAT_005327c4
                                        ,1);
                  uVar14 = (undefined4)((ulonglong)uVar20 >> 0x20);
                  iVar16 = (int)uVar20;
                  if (iVar16 == 0) goto LAB_019b340c;
                  iVar7 = FUN_019afb44(param_2,param_3,iVar16,uVar14);
                  if (iVar7 != 0) {
                    uVar20 = FUN_019830f8(param_2,param_3,iVar16,uVar14);
                    if ((int)uVar20 == 0) goto LAB_019b340c;
                    FUN_019a13c8(local_1b8,local_228,local_224);
                    *param_1 = local_1b8;
                    param_1[1] = local_1b4;
                    param_1[2] = local_1b0;
                    *(undefined8 *)(param_1 + 3) = uVar20;
                    goto joined_r0x019b3498;
                  }
                  break;
                }
              }
              local_19c = iVar7;
              uVar20 = CONCAT44(local_198,local_1b4);
            } while (local_194._1_1_ != '\x01');
          }
        }
        uVar5 = uVar18;
      } while( true );
    }
    thunk_FUN_01be4678(iVar4);
    if (uVar13 == 3) {
      uVar14 = *puVar3;
      puVar17 = (undefined4 *)puVar3[1];
      pcVar11 = (code *)*puVar17;
      if (pcVar11 != (code *)0x0) {
        (*pcVar11)(uVar14);
      }
      if (puVar17[1] != 0) {
        thunk_FUN_01be4678(uVar14);
      }
      thunk_FUN_01be4678(puVar3);
    }
  }
  *param_1 = (char  [4])0x80000001;
  return;
}

