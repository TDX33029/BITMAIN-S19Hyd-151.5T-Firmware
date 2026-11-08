// FUN_015fae70 @ 015fae70 size=2604 calls_out=18 calls_in=0
// strings: /pro | c/se | lf/m | ount | info | cgroup

/* WARNING: Removing unreachable block (ram,0x015faee4) */
/* WARNING: Removing unreachable block (ram,0x015faeec) */
/* WARNING: Removing unreachable block (ram,0x015fafe0) */
/* WARNING: Removing unreachable block (ram,0x015faef8) */

void FUN_015fae70(char (*param_1) [4],undefined4 param_2,undefined4 param_3)

{
  char acVar1 [4];
  char acVar2 [4];
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char acVar8 [4];
  code *pcVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  bool bVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  int local_22c;
  uint local_224;
  int local_220;
  uint local_21c;
  int local_214;
  uint local_208;
  undefined4 *local_204;
  uint local_200;
  uint local_1fc;
  uint local_1f8;
  undefined4 *local_1f4;
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
  int local_34;
  int local_30;
  int local_2c;
  
  uVar3 = thunk_FUN_016d4a50(0x2000);
  if (uVar3 != 0) {
    local_1dc._0_4_ = 0x1b6;
    local_1e0 = 0;
    local_1d4 = (uint)local_1d4._2_2_ << 0x10;
    local_1dc._4_4_ = 1;
    builtin_strncpy(local_1b8,"/pro",4);
    builtin_strncpy(local_1b4,"c/se",4);
    builtin_strncpy(local_1b0,"lf/m",4);
    builtin_strncpy(local_1ac,"ount",4);
    builtin_strncpy(local_1a8,"info",4);
    local_1a4 = local_1a4 & 0xffffff00;
    iVar10 = 0;
    do {
      if (local_1a8[iVar10] == '\0') {
        if (iVar10 == 4) {
          FUN_015c49ac(&local_208,local_1b8,&local_1e0);
          if ((char)local_208 != '\x04') goto LAB_015fb00c;
          puVar13 = local_204;
          goto LAB_015fb01c;
        }
        break;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != 5);
    local_208 = 2;
    local_204 = &DAT_018aae48;
LAB_015fb00c:
    puVar13 = local_204;
    uVar14 = local_208 & 0xff;
    if (uVar14 == 4) {
LAB_015fb01c:
      local_1f8 = 0;
      local_1fc = 0;
      local_200 = 0;
      local_204 = (undefined4 *)0x2000;
      local_208 = uVar3;
      local_1f4 = puVar13;
      local_214 = thunk_FUN_016d4a50(0x100);
      if (local_214 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,0x100);
      }
      uVar14 = 0;
      local_1ec = 0x100;
      local_21c = 0;
      local_224 = 0;
      uVar5 = 0;
      local_1e8 = local_214;
      do {
        local_1e4 = 0;
        puVar17 = (undefined4 *)0x0;
        uVar20 = uVar5;
        do {
          iVar10 = local_1e4;
          if (uVar14 < uVar5) {
          }
          else {
            while( true ) {
              uVar5 = FUN_016e0250(puVar13,uVar3,0x2000);
              if (uVar5 != 0xffffffff) break;
              puVar16 = (undefined4 *)FUN_016d2bc8();
              puVar16 = (undefined4 *)*puVar16;
              if (puVar16 != (undefined4 *)&DAT_00000004) {
                uVar20 = 0;
                local_1fc = 0;
                local_200 = 0;
                local_1f8 = local_21c;
                local_1e0 = 0;
                goto LAB_015fb344;
              }
            }
            uVar14 = 0;
            if (local_224 < uVar5) {
              local_224 = uVar5;
            }
            uVar20 = uVar5;
            local_21c = local_224;
          }
          uVar18 = uVar5 - uVar14;
          iVar19 = uVar3 + uVar14;
          if (uVar18 < 8) {
            if (uVar5 != uVar14) {
              uVar7 = 0;
              do {
                if (*(char *)(iVar19 + uVar7) == '\n') goto LAB_015fb2c4;
                uVar7 = uVar7 + 1;
              } while (uVar18 != uVar7);
            }
          }
          else {
            uVar4 = (iVar19 + 3U & 0xfffffffc) - iVar19;
            if (uVar4 == 0) {
              uVar4 = 0;
              goto LAB_015fb184;
            }
            uVar7 = 0;
            do {
              if (*(char *)(iVar19 + uVar7) == '\n') goto LAB_015fb2c4;
              uVar7 = uVar7 + 1;
            } while (uVar4 != uVar7);
            for (; uVar4 <= uVar18 - 8; uVar4 = uVar4 + 8) {
LAB_015fb184:
              uVar12 = *(uint *)(iVar19 + uVar4);
              uVar7 = ((uint *)(iVar19 + uVar4))[1] ^ 0xa0a0a0a;
              if (((0x1010100 - (uVar12 ^ 0xa0a0a0a) | uVar12) & 0x80808080 &
                  (0x1010100 - uVar7 | uVar7)) != 0x80808080) break;
            }
            if (uVar18 != uVar4) {
              iVar6 = 0;
LAB_015fb204:
              if (*(char *)(iVar19 + uVar4 + iVar6) != '\n') goto code_r0x015fb210;
              uVar7 = iVar6 + uVar4;
LAB_015fb2c4:
              local_1f8 = local_21c;
              local_200 = uVar14;
              if (uVar18 <= uVar7) {
                local_1fc = uVar20;
                    /* WARNING: Subroutine does not return */
                FUN_00faa36c(0,uVar7,uVar18,&DAT_018aaa8c);
              }
              iVar6 = uVar7 + 1;
              if (uVar7 < (uint)(local_1ec - iVar10)) {
                local_1fc = uVar20;
              }
              else {
                local_1fc = uVar20;
                FUN_015bf41c(&local_1ec,iVar10,iVar6,1,1);
                local_214 = local_1e8;
                iVar10 = local_1e4;
              }
              FUN_016dd1aa(local_214 + iVar10,iVar19,iVar6);
              local_1e4 = iVar10 + iVar6;
              puVar16 = (undefined4 *)(iVar6 + (int)puVar17);
              local_200 = iVar6 + uVar14;
              if (uVar5 < iVar6 + uVar14) {
                local_200 = uVar5;
              }
              goto LAB_015fb33c;
            }
          }
LAB_015fb220:
          if ((uint)(local_1ec - iVar10) < uVar18) {
            FUN_015bf41c(&local_1ec,iVar10,uVar18,1,1);
            local_214 = local_1e8;
            iVar10 = local_1e4;
          }
          else {
          }
          FUN_016dd1aa(local_214 + iVar10,iVar19,uVar18);
          local_1e4 = iVar10 + uVar18;
          puVar16 = (undefined4 *)(uVar18 + (int)puVar17);
          bVar21 = uVar5 != uVar14;
          uVar14 = uVar5;
          puVar17 = puVar16;
        } while (bVar21);
        local_1f8 = local_21c;
        local_200 = uVar5;
        local_1fc = uVar20;
LAB_015fb33c:
        local_1e0 = CONCAT31(local_1e0._1_3_,4);
        iVar10 = local_1e4;
LAB_015fb344:
        uVar14 = local_200;
        FUN_00fab1e0(local_1b8,local_214,iVar10);
        if (local_1b8 == (char  [4])0x0) {
          puVar11 = &local_1e0;
          puVar17 = puVar16;
LAB_015fb38c:
          uVar5 = *puVar11;
          puVar16 = puVar17;
        }
        else {
          uVar5 = local_1e0 & 0xff;
          iVar10 = 0;
          puVar11 = &DAT_018aaaa8;
          puVar17 = &DAT_018aaa9c;
          if (uVar5 == 4) goto LAB_015fb38c;
        }
        local_1e4 = iVar10;
        if ((uVar5 & 0xff) != 4) {
          if ((uVar5 & 0xff) == 3) {
            uVar15 = *puVar16;
            puVar17 = (undefined4 *)puVar16[1];
            pcVar9 = (code *)*puVar17;
            if (pcVar9 != (code *)0x0) {
              (*pcVar9)(uVar15);
            }
            if (puVar17[1] != 0) {
              thunk_FUN_016d3fb4(uVar15);
            }
            thunk_FUN_016d3fb4(puVar16);
          }
LAB_015fb780:
          *param_1 = (char  [4])0x80000001;
joined_r0x015fb810:
          if (local_1ec != 0) {
            thunk_FUN_016d3fb4(local_1e8);
          }
          thunk_FUN_016d3fb4(uVar3);
          FUN_016dffb2(puVar13);
          return;
        }
        if (puVar16 == (undefined4 *)0x0) {
          *param_1 = (char  [4])0x80000001;
          goto joined_r0x015fb810;
        }
        local_214 = local_1e8;
        uVar22 = FUN_015fab18(local_1e8,iVar10);
        local_1d0 = SUB84((ulonglong)uVar22 >> 0x20,0);
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
        local_1dc = uVar22;
        FUN_015c4d94(local_1b8,&local_1e0);
        if (local_1b8 == (char  [4])0x0) goto LAB_015fb780;
        local_1c4[0] = local_1b0[0];
        local_1c4[1] = local_1b0[1];
        local_1c4[2] = local_1b0[2];
        local_1c4[3] = local_1b0[3];
        if (local_1bc._1_1_ != '\0') goto LAB_015fb780;
        FUN_015c4d94(local_1b8,&local_1e0);
        if (local_1b8 == (char  [4])0x0) goto LAB_015fb780;
        local_1c4[0] = local_1b0[0];
        local_1c4[1] = local_1b0[1];
        local_1c4[2] = local_1b0[2];
        local_1c4[3] = local_1b0[3];
        if (local_1bc._1_1_ != '\0') goto LAB_015fb780;
        FUN_015c4d94(local_1b8,&local_1e0);
        iVar10 = (int)local_1dc;
        if (local_1b8 == (char  [4])0x0) goto LAB_015fb780;
        local_1c4[0] = local_1b0[0];
        local_1c4[1] = local_1b0[1];
        local_1c4[2] = local_1b0[2];
        local_1c4[3] = local_1b0[3];
        if (local_1bc._1_1_ != '\0') goto LAB_015fb780;
        FUN_015c4d94(local_1b8,&local_1e0);
        acVar2 = local_1b4;
        acVar1 = local_1c4;
        local_22c = (int)local_1dc;
        if (local_1b8 == (char  [4])0x0) goto LAB_015fb780;
        local_1c4[0] = local_1b0[0];
        local_1c4[1] = local_1b0[1];
        local_1c4[2] = local_1b0[2];
        local_1c4[3] = local_1b0[3];
        if (local_1bc._1_1_ != '\0') goto LAB_015fb780;
        FUN_015c4d94(local_1b8,&local_1e0);
        acVar8 = local_1c4;
        if (local_1b8 == (char  [4])0x1) {
          local_1c4[0] = local_1b0[0];
          local_1c4[1] = local_1b0[1];
          local_1c4[2] = local_1b0[2];
          local_1c4[3] = local_1b0[3];
          local_220 = (int)local_1b4 - (int)acVar8;
        }
        else {
          if (local_1bc._1_1_ != '\0') goto LAB_015fb780;
          local_1bc = CONCAT11(1,(char)local_1bc);
          if (((char)local_1bc != '\x01') && (local_1c0 == local_1c4)) goto LAB_015fb780;
          local_220 = (int)local_1c0 - (int)local_1c4;
          local_22c = (int)local_1dc;
        }
        local_22c = local_22c + (int)acVar8;
        uVar22 = FUN_015fb9bc(&local_1e0);
        acVar8 = SUB84((ulonglong)uVar22 >> 0x20,0);
        if ((int)uVar22 == 0) goto LAB_015fb780;
        iVar19 = FUN_015fb9bc(&local_1e0);
        if (iVar19 == 0) goto LAB_015fb780;
        uVar23 = FUN_015fb9bc(&local_1e0);
        if ((int)uVar23 == 0) goto LAB_015fb780;
        if ((int)((ulonglong)uVar23 >> 0x20) == 6) {
          iVar19 = thunk_FUN_016dd50a((int)uVar23,"cgroup",6);
          if (iVar19 == 0) {
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
            local_1b0 = acVar8;
            local_1a8 = acVar8;
            do {
              local_198 = (int)((ulonglong)uVar22 >> 0x20);
              local_1b4 = SUB84(uVar22,0);
              acVar8 = local_1b4;
              FUN_015c4d94(&local_34,local_1b8);
              if (local_34 == 1) {
                iVar6 = local_30 - local_19c;
                iVar19 = local_2c;
              }
              else {
                if (local_194._1_1_ != '\0') break;
                local_194 = CONCAT11(1,(char)local_194);
                if (((char)local_194 != '\x01') && (local_198 == local_19c)) break;
                iVar6 = local_198 - local_19c;
                acVar8 = local_1b4;
                iVar19 = local_19c;
              }
              if (iVar6 == 3) {
                iVar6 = (int)acVar8 + local_19c;
                local_19c = iVar19;
                iVar6 = thunk_FUN_016dd50a(iVar6,"cpu",3);
                iVar19 = local_19c;
                if (iVar6 == 0) {
                  uVar22 = FUN_015c8118(iVar10 + (int)acVar1,(int)acVar2 - (int)acVar1,&DAT_00418645
                                        ,1);
                  uVar15 = (undefined4)((ulonglong)uVar22 >> 0x20);
                  iVar10 = (int)uVar22;
                  if (iVar10 == 0) goto LAB_015fb780;
                  iVar19 = FUN_015f7aa0(param_2,param_3,iVar10,uVar15);
                  if (iVar19 != 0) {
                    uVar22 = FUN_015c8118(param_2,param_3,iVar10,uVar15);
                    if ((int)uVar22 == 0) goto LAB_015fb780;
                    FUN_015e74e4(local_1b8,local_22c,local_220);
                    *param_1 = local_1b8;
                    param_1[1] = local_1b4;
                    param_1[2] = local_1b0;
                    *(undefined8 *)(param_1 + 3) = uVar22;
                    goto joined_r0x015fb810;
                  }
                  break;
                }
              }
              local_19c = iVar19;
              uVar22 = CONCAT44(local_198,local_1b4);
            } while (local_194._1_1_ != '\x01');
          }
        }
        uVar5 = uVar20;
      } while( true );
    }
    thunk_FUN_016d3fb4(uVar3);
    if (uVar14 == 3) {
      uVar15 = *puVar13;
      puVar17 = (undefined4 *)puVar13[1];
      pcVar9 = (code *)*puVar17;
      if (pcVar9 != (code *)0x0) {
        (*pcVar9)(uVar15);
      }
      if (puVar17[1] != 0) {
        thunk_FUN_016d3fb4(uVar15);
      }
      thunk_FUN_016d3fb4(puVar13);
    }
  }
  *param_1 = (char  [4])0x80000001;
  return;
code_r0x015fb210:
  iVar6 = iVar6 + 1;
  if ((uVar5 - uVar4) - uVar14 == iVar6) goto LAB_015fb220;
  goto LAB_015fb204;
}

