// FUN_010c58d4 @ 010c58d4 size=1692 calls_out=16 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010c58d4(int *param_1,int *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  int iVar13;
  int extraout_r1;
  int iVar14;
  int iVar15;
  uint uVar16;
  int unaff_r4;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined1 uVar21;
  int iVar22;
  uint *puVar23;
  longlong lVar24;
  int local_208;
  int local_204;
  int local_1fc;
  int local_1f8 [18];
  undefined4 local_1b0 [18];
  undefined1 auStack_168 [72];
  undefined4 local_120;
  undefined4 local_11c;
  int local_118;
  int iStack_114;
  int iStack_110;
  int local_10c;
  uint local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8 [2];
  undefined1 local_c0 [4];
  int local_bc;
  int local_b8;
  undefined2 local_b4;
  int local_90;
  int local_8c;
  int local_88;
  int local_80;
  int local_7c;
  int local_78;
  int local_70;
  undefined *puStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined1 local_60;
  undefined8 local_5c;
  int local_54;
  int local_50;
  undefined *local_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined1 local_40;
  int local_38;
  undefined *local_34;
  int local_30;
  undefined *local_2c;
  undefined4 uStack_28;
  
  if ((char)param_2[0xc] == '\0') {
    iVar17 = param_2[1];
    FUN_010c6058(local_1f8,iVar17,param_2[2]);
    puVar4 = local_11c;
    iVar15 = param_2[4];
    FUN_010c6058(&local_d8,iVar15,param_2[5]);
    local_11c = puVar4;
    puVar4 = local_11c;
    if (local_d8 == 0x80000002) {
      if (local_1f8[0] == -0x7ffffffe) {
        local_1b0[0] = 0x80000002;
      }
      else {
        FUN_010c72ac(local_1b0,local_1f8);
        local_11c = puVar4;
        puVar4 = local_11c;
      }
    }
    else {
      FUN_016dd1aa(local_1b0,&local_d8,0x44);
      local_11c = puVar4;
      puVar4 = local_11c;
    }
    local_11c = puVar4;
    uVar6 = local_11c._2_2_;
    uVar21 = local_11c._1_1_;
    iVar10 = param_2[7];
    puVar4 = local_11c;
    local_11c._1_1_ = uVar21;
    local_11c._2_2_ = uVar6;
    FUN_010c6058(&local_120,iVar10,param_2[8]);
    puVar4 = local_11c;
    FUN_016dd1aa(&local_d8,local_1f8,0x44);
    local_11c = puVar4;
    puVar4 = local_11c;
    if (local_120 == -0x7ffffffe) {
      FUN_016dd1aa(auStack_168,local_1f8,0x44);
      local_11c = puVar4;
      puVar4 = local_11c;
      uVar21 = local_11c._1_1_;
      uVar6 = local_11c._2_2_;
    }
    else {
      FUN_016dd1aa(auStack_168,&local_120,0x44);
      local_11c = puVar4;
      puVar4 = local_11c;
      uVar21 = local_11c._1_1_;
      uVar6 = local_11c._2_2_;
      if (local_d8 != 0x80000002) {
        FUN_0145d5e0(local_c0);
        local_11c = puVar4;
        puVar4 = local_11c;
        uVar11 = 2;
        if ((int)local_d8 < 0) {
          uVar11 = local_d8 ^ 0x80000000;
        }
        uVar21 = local_11c._1_1_;
        uVar6 = local_11c._2_2_;
        if (uVar11 != 0) {
          if (uVar11 == 1) {
            (**(code **)(local_d4 + 0x10))(local_c8,local_d0,local_cc);
            local_11c = puVar4;
            puVar4 = local_11c;
            uVar21 = local_11c._1_1_;
            uVar6 = local_11c._2_2_;
          }
          else {
            if (local_d8 != 0) {
              thunk_FUN_016d3fb4(local_d4);
              local_11c = puVar4;
              puVar4 = local_11c;
            }
            local_11c = puVar4;
            uVar6 = local_11c._2_2_;
            uVar21 = local_11c._1_1_;
            puVar4 = local_11c;
            if (local_cc != 0) {
              local_11c._1_1_ = uVar21;
              local_11c._2_2_ = uVar6;
              thunk_FUN_016d3fb4(local_c8[0]);
              puVar4 = local_11c;
              uVar21 = local_11c._1_1_;
              uVar6 = local_11c._2_2_;
            }
          }
        }
      }
    }
    local_11c._2_2_ = uVar6;
    local_11c._1_1_ = uVar21;
    local_11c = puVar4;
    uVar6 = local_11c._2_2_;
    uVar21 = local_11c._1_1_;
    iVar14 = param_2[10];
    local_7c = 4;
    local_c8[1] = 0x2c;
    local_d8 = 0x2c;
    local_d0 = param_2[0xb];
    local_204 = 1;
    local_88 = 0;
    local_1fc = 0;
    local_8c = 1;
    local_90 = 0;
    local_78 = 0;
    local_80 = 0;
    local_b4 = 1;
    local_bc = 0;
    local_c0[0] = 1;
    local_cc = 0;
    local_d4 = iVar14;
    local_c8[0] = local_d0;
    local_b8 = local_d0;
    do {
      local_11c._2_2_ = uVar6;
      local_11c._1_1_ = uVar21;
      iVar20 = local_d4;
      uVar6 = local_11c._2_2_;
      uVar21 = local_11c._1_1_;
      puVar4 = local_11c;
      local_11c._1_1_ = uVar21;
      local_11c._2_2_ = uVar6;
      FUN_0062a644(&local_120,&local_d8);
      iVar22 = local_bc;
      puVar4 = local_11c;
      if (local_120 == 1) {
        local_bc = local_118;
        iVar13 = (int)puVar4 - iVar22;
      }
      else {
        if (local_b4._1_1_ != '\0') break;
        local_b4 = CONCAT11(1,(char)local_b4);
        if (((char)local_b4 != '\x01') && (local_b8 == local_bc)) break;
        iVar13 = local_b8 - local_bc;
        iVar20 = local_d4;
      }
      uVar21 = local_11c._1_1_;
      uVar6 = local_11c._2_2_;
      local_11c = puVar4;
      puVar4 = local_11c;
      local_11c._1_1_ = uVar21;
      local_11c._2_2_ = uVar6;
      lVar24 = FUN_010ceb84(iVar20 + iVar22,iVar13);
      puVar4 = local_11c;
      iVar20 = (int)((ulonglong)lVar24 >> 0x20);
      local_54 = 0;
      local_2c = &DAT_01888cb8;
      local_30 = 1;
      local_38 = 1;
      local_34 = &DAT_01888ca4;
      uVar21 = local_11c._1_1_;
      uVar6 = local_11c._2_2_;
      local_11c = puVar4;
      puVar4 = local_11c;
      local_11c._1_1_ = uVar21;
      local_11c._2_2_ = uVar6;
      local_5c = lVar24;
      FUN_01154fdc(&local_120,&local_5c);
      puVar4 = local_11c;
      if ((char)local_120 == '\x01') {
        bVar3 = false;
        uVar21 = 0;
        local_50 = CONCAT43(puVar4,local_120._1_3_);
        local_4c = (undefined *)CONCAT31(local_4c._1_3_,local_11c._1_1_);
      }
      else {
        local_54 = 0;
        uVar21 = local_11c._1_1_;
        uVar6 = local_11c._2_2_;
        local_11c = puVar4;
        puVar4 = local_11c;
        local_11c._1_1_ = uVar21;
        local_11c._2_2_ = uVar6;
        FUN_011551e4(&local_120,&local_5c);
        puVar4 = local_11c;
        if ((char)local_120 == '\x01') {
          uVar21 = local_11c._1_1_;
          uVar6 = local_11c._2_2_;
          local_11c = puVar4;
          puVar4 = local_11c;
          local_11c._1_1_ = uVar21;
          local_11c._2_2_ = uVar6;
          FUN_016dd1aa(&local_50,(int)&local_120 + 1,0x11);
          puVar4 = local_11c;
          uVar21 = 1;
          bVar3 = false;
        }
        else {
          uVar21 = 2;
          bVar3 = true;
          local_54 = 0;
        }
      }
      local_11c = puVar4;
      uVar6 = local_11c._2_2_;
      uVar5 = local_11c._1_1_;
      puVar4 = local_11c;
      local_11c._1_1_ = uVar5;
      local_11c._2_2_ = uVar6;
      FUN_011556b4(&local_38);
      puVar4 = local_11c;
      local_11c = puVar4;
      if ((bVar3) || (local_54 != local_5c._4_4_)) {
        uVar21 = local_11c._1_1_;
        uVar6 = local_11c._2_2_;
        puVar4 = local_11c;
        local_11c._1_1_ = uVar21;
        local_11c._2_2_ = uVar6;
        local_5c = lVar24;
        FUN_00fb3af4(&local_120,&local_5c);
        puVar4 = local_11c;
        if ((char)local_120 == '\0') {
          uVar21 = local_11c._1_1_;
          uVar6 = local_11c._2_2_;
          local_11c = puVar4;
          puVar4 = local_11c;
          local_11c._1_1_ = uVar21;
          local_11c._2_2_ = uVar6;
          FUN_00fb3f68(&local_120,&local_5c);
          puVar4 = local_11c;
          if ((char)local_120 == '\x01') {
            local_11c._0_1_ = SUB41(puVar4,0);
            uVar7 = CONCAT13((undefined1)local_11c,local_120._1_3_);
            local_50 = CONCAT13((undefined1)local_118,CONCAT21(local_11c._2_2_,local_11c._1_1_));
            local_4c = (undefined *)CONCAT13((undefined1)iStack_114,local_118._1_3_);
            iStack_48 = CONCAT13((undefined1)iStack_110,iStack_114._1_3_);
            if (local_5c._4_4_ == 0) {
              uVar21 = 1;
              local_11c._1_1_ = (undefined1)((uint)local_118 >> 0x10);
              local_11c._2_2_ = (undefined2)((uint)local_4c >> 0x10);
              local_120 = local_50;
              puVar4 = local_4c;
              local_118 = iStack_48;
              goto LAB_010c5df0;
            }
          }
        }
        else if (local_5c._4_4_ == 0) {
          local_11c._0_1_ = SUB41(puVar4,0);
          uVar7 = CONCAT13((undefined1)local_11c,local_120._1_3_);
          uVar21 = 0;
LAB_010c5df0:
          local_11c = puVar4;
          uVar6 = local_11c._2_2_;
          uVar5 = local_11c._1_1_;
          local_38 = local_120;
          local_34 = local_11c;
          local_30 = local_118;
          puVar4 = local_11c;
          if (local_1fc == local_90) {
            local_11c._1_1_ = uVar5;
            local_11c._2_2_ = uVar6;
            FUN_010cda7c(&local_90);
            puVar4 = local_11c;
            uVar5 = local_11c._1_1_;
            uVar6 = local_11c._2_2_;
          }
          local_11c._2_2_ = uVar6;
          local_11c._1_1_ = uVar5;
          local_11c = puVar4;
          uVar6 = local_11c._2_2_;
          uVar5 = local_11c._1_1_;
          local_204 = local_8c;
          local_88 = local_1fc + 1;
          puVar12 = (undefined1 *)(local_8c + local_1fc * 0x12);
          *puVar12 = 2;
          *(undefined4 *)(puVar12 + 2) = uVar7;
          puVar12[1] = uVar21;
          *(int *)(puVar12 + 6) = local_38;
          *(undefined **)(puVar12 + 10) = local_34;
          *(int *)(puVar12 + 0xe) = local_30;
          local_1fc = local_88;
          puVar4 = local_11c;
          local_11c._1_1_ = uVar5;
          local_11c._2_2_ = uVar6;
          goto LAB_010c5b84;
        }
        local_11c = puVar4;
        uVar6 = local_11c._2_2_;
        uVar21 = local_11c._1_1_;
        puVar4 = local_11c;
        local_11c._1_1_ = uVar21;
        local_11c._2_2_ = uVar6;
        FUN_010ceb84((int)lVar24,iVar20);
        puVar4 = local_11c;
        if (extraout_r1 != 0) {
          uVar7 = 0;
          if (lVar24 < 0) {
LAB_010c5f68:
            local_11c = puVar4;
            uVar6 = local_11c._2_2_;
            uVar21 = local_11c._1_1_;
            puVar4 = local_11c;
            local_11c._1_1_ = uVar21;
            local_11c._2_2_ = uVar6;
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar7,local_208);
          }
          if (iVar20 == 0) {
            iVar22 = 0;
            local_208 = 1;
          }
          else {
            uVar21 = local_11c._1_1_;
            uVar6 = local_11c._2_2_;
            local_11c = puVar4;
            puVar4 = local_11c;
            local_11c._1_1_ = uVar21;
            local_11c._2_2_ = uVar6;
            local_208 = thunk_FUN_016d4a50(iVar20);
            puVar4 = local_11c;
            if (local_208 == 0) {
              uVar7 = 1;
              local_208 = iVar20;
              goto LAB_010c5f68;
            }
            iVar22 = iVar20;
          }
          local_11c = puVar4;
          uVar6 = local_11c._2_2_;
          uVar21 = local_11c._1_1_;
          puVar4 = local_11c;
          local_11c._1_1_ = uVar21;
          local_11c._2_2_ = uVar6;
          FUN_016dd1aa(local_208,(int)lVar24,iVar20);
          iVar13 = local_78;
          puVar4 = local_11c;
          if (local_78 == local_80) {
            uVar21 = local_11c._1_1_;
            uVar6 = local_11c._2_2_;
            local_11c = puVar4;
            puVar4 = local_11c;
            local_11c._1_1_ = uVar21;
            local_11c._2_2_ = uVar6;
            FUN_015f37b0(&local_80);
            puVar4 = local_11c;
          }
          local_11c = puVar4;
          uVar6 = local_11c._2_2_;
          uVar21 = local_11c._1_1_;
          piVar8 = (int *)(local_7c + iVar13 * 0xc);
          *piVar8 = iVar22;
          piVar8[1] = local_208;
          piVar8[2] = iVar20;
          local_78 = iVar13 + 1;
          puVar4 = local_11c;
          local_11c._1_1_ = uVar21;
          local_11c._2_2_ = uVar6;
        }
      }
      else {
        local_70 = local_50;
        puStack_6c = local_4c;
        iStack_68 = iStack_48;
        uStack_64 = uStack_44;
        local_60 = local_40;
        if (local_1fc == local_90) {
          uVar5 = local_11c._1_1_;
          uVar6 = local_11c._2_2_;
          puVar4 = local_11c;
          local_11c._1_1_ = uVar5;
          local_11c._2_2_ = uVar6;
          FUN_010cda7c(&local_90);
          puVar4 = local_11c;
          local_204 = local_8c;
        }
        local_11c = puVar4;
        uVar6 = local_11c._2_2_;
        uVar5 = local_11c._1_1_;
        puVar12 = (undefined1 *)(local_204 + local_1fc * 0x12);
        *puVar12 = uVar21;
        puVar4 = local_11c;
        local_11c._1_1_ = uVar5;
        local_11c._2_2_ = uVar6;
        FUN_016dd1aa(puVar12 + 1,&local_70,0x11);
        puVar4 = local_11c;
        local_88 = local_1fc + 1;
        local_1fc = local_88;
      }
LAB_010c5b84:
      local_11c = puVar4;
      uVar6 = local_11c._2_2_;
      uVar21 = local_11c._1_1_;
    } while (local_b4._1_1_ == '\0');
    local_120 = local_90;
    local_11c._1_1_ = (undefined1)((uint)local_8c >> 8);
    local_11c._2_2_ = (undefined2)((uint)local_8c >> 0x10);
    local_118 = local_88;
    iStack_114 = local_80;
    iStack_110 = local_7c;
    local_10c = local_78;
    uVar21 = local_11c._1_1_;
    uVar6 = local_11c._2_2_;
    local_11c = (undefined *)local_8c;
    iVar20 = (int)local_11c;
    local_11c._1_1_ = uVar21;
    local_11c._2_2_ = uVar6;
    FUN_016dd1aa(param_1 + 6,local_1b0,0x44);
    iVar20 = (int)local_11c;
    uVar21 = local_11c._1_1_;
    uVar6 = local_11c._2_2_;
    local_11c = (undefined *)iVar20;
    iVar20 = (int)local_11c;
    local_11c._1_1_ = uVar21;
    local_11c._2_2_ = uVar6;
    FUN_016dd1aa(param_1 + 0x17,auStack_168,0x44);
    iVar20 = (int)local_11c;
    *param_1 = local_120;
    param_1[1] = iVar20;
    param_1[2] = local_118;
    param_1[3] = iStack_114;
    param_1[4] = iStack_110;
    param_1[5] = local_10c;
    if (*param_2 != 0) {
      uVar21 = local_11c._1_1_;
      uVar6 = local_11c._2_2_;
      local_11c = (undefined *)iVar20;
      iVar20 = (int)local_11c;
      local_11c._1_1_ = uVar21;
      local_11c._2_2_ = uVar6;
      thunk_FUN_016d3fb4(iVar17);
      iVar20 = (int)local_11c;
    }
    local_11c = (undefined *)iVar20;
    uVar6 = local_11c._2_2_;
    uVar21 = local_11c._1_1_;
    iVar17 = (int)local_11c;
    if (param_2[3] != 0) {
      local_11c._1_1_ = uVar21;
      local_11c._2_2_ = uVar6;
      thunk_FUN_016d3fb4(iVar15);
      iVar17 = (int)local_11c;
      uVar21 = local_11c._1_1_;
      uVar6 = local_11c._2_2_;
    }
    local_11c._2_2_ = uVar6;
    local_11c._1_1_ = uVar21;
    local_11c = (undefined *)iVar17;
    uVar6 = local_11c._2_2_;
    uVar21 = local_11c._1_1_;
    iVar15 = (int)local_11c;
    if (param_2[6] != 0) {
      local_11c._1_1_ = uVar21;
      local_11c._2_2_ = uVar6;
      thunk_FUN_016d3fb4(iVar10);
      iVar15 = (int)local_11c;
      uVar21 = local_11c._1_1_;
      uVar6 = local_11c._2_2_;
    }
    local_11c._2_2_ = uVar6;
    local_11c._1_1_ = uVar21;
    local_11c = (undefined *)iVar15;
    uVar6 = local_11c._2_2_;
    uVar21 = local_11c._1_1_;
    if (param_2[9] != 0) {
      iVar15 = (int)local_11c;
      local_11c._1_1_ = uVar21;
      local_11c._2_2_ = uVar6;
      thunk_FUN_016d3fb4(iVar14);
    }
  }
  else {
    iVar15 = *param_2;
    param_1[0x17] = -0x7ffffffe;
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 4;
    param_1[5] = 0;
    param_1[6] = -0x7ffffffe;
    if (iVar15 != 0) {
      thunk_FUN_016d3fb4(param_2[1]);
    }
    if (param_2[3] != 0) {
      thunk_FUN_016d3fb4(param_2[4]);
    }
    if (param_2[6] != 0) {
      thunk_FUN_016d3fb4(param_2[7]);
    }
    if (param_2[9] != 0) {
      iVar15 = param_2[10];
      if (iVar15 == 0) {
        return;
      }
      iVar17 = FUN_016d3bc8();
      uVar11 = *(byte *)(iVar15 + -3) & 0x1f;
      if (((*(byte *)(iVar17 + 0x14) & 0x1f) != 0) ||
         (uVar18 = *(uint *)(iVar17 + 0x14) & 0xfffff000, iVar10 = uVar18 - 0x10, uVar18 == 0)) {
        iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar17 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar18 = (uint)(*(byte *)(iVar15 + -3) >> 5);
      iVar20 = *(int *)(iVar17 + 8) + 0x10;
      iVar14 = iVar10 * uVar11 + iVar10 + -4;
      iVar10 = iVar20 + iVar14;
      if (4 < uVar18) {
        if (uVar18 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar18 = *(uint *)(iVar10 + -4);
        if (uVar18 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar10 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar10 - iVar15) < uVar18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar10 - uVar18) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar20 + iVar14) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar17 + 0x14);
      uVar18 = 1 << uVar11;
      *(undefined1 *)(iVar15 + -3) = 0xff;
      *(undefined2 *)(iVar15 + -2) = 0;
      do {
        uVar19 = *(uint *)(iVar17 + 0x10);
        uVar16 = *(uint *)(iVar17 + 0xc) | uVar19;
        if ((uVar18 & uVar16) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar19 == 0) || (uVar16 + uVar18 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar17,uVar11);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar9 = (undefined4 *)FUN_016d2bc8();
          uVar7 = *puVar9;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar9 = uVar7;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar17 + 0x10) = uVar18 + uVar19;
          return;
        }
        puVar23 = (uint *)(iVar17 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar23);
          uVar16 = *puVar23;
          if (uVar19 != uVar16) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar23);
        } while (!bVar3);
        *puVar23 = uVar18 + uVar19;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar19 == uVar16) {
          return;
        }
      } while( true );
    }
  }
  return;
}

