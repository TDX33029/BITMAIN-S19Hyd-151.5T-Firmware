// FUN_00788d4c @ 00788d4c size=4668 calls_out=26 calls_in=0
// strings: hick | InvalidParamSegmentInvalidParamInvalidCatchAll | hick | InvalidParamSegmentInvalidParamInvalidCatchAll | hick | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00788d4c(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined2 uVar3;
  undefined4 ******ppppppuVar4;
  undefined4 ******ppppppuVar5;
  char cVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 ******ppppppuVar12;
  int *piVar13;
  undefined4 ******ppppppuVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  int iVar19;
  int iVar20;
  undefined4 ******ppppppuVar21;
  undefined4 *local_4d0;
  undefined4 *****local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined4 ******local_4a8;
  undefined4 ******local_4a4;
  undefined1 *local_4a0;
  undefined4 local_3e8;
  undefined4 ******local_3e0;
  undefined4 ******local_3dc;
  undefined4 *local_3d8;
  int local_3a4;
  ushort local_394;
  undefined2 local_38a;
  undefined4 ******local_320;
  undefined4 ******local_31c;
  undefined4 *local_318;
  undefined4 ******local_314;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 ******local_2f0;
  undefined4 ******local_2ec;
  undefined4 *local_2e8;
  undefined4 ******local_2e0;
  undefined4 *****local_2dc;
  undefined4 *local_2d8;
  undefined4 ******local_2d0;
  undefined4 ******local_2cc;
  undefined4 *local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 *****local_2b8;
  undefined4 ******local_2b4;
  undefined4 ******local_2b0;
  undefined4 ******local_2ac;
  undefined4 *local_2a8;
  undefined1 local_2a4;
  undefined4 ******local_248;
  code *local_244;
  undefined4 ******local_240;
  undefined4 ******local_23c;
  undefined4 *local_238;
  undefined4 local_234;
  int local_230;
  undefined *local_22c;
  undefined4 uStack_228;
  undefined4 local_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined1 auStack_214 [68];
  undefined1 local_1d0;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  int *local_114;
  int *local_110;
  undefined4 ******local_10c;
  undefined4 *local_108;
  uint local_104;
  undefined2 local_100;
  undefined1 local_fe;
  undefined1 local_fc;
  undefined4 ******local_38;
  undefined4 ******local_34;
  undefined4 *local_30;
  
  while( true ) {
    ppppppuVar14 = &local_3e0;
    if (*(char *)(param_1 + 0x18) == '\x01') break;
    FUN_00783694(&local_4a8,param_1 + 0x1a,param_2);
    if (local_4a8 == (undefined4 ******)0x80000000) {
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
    else {
      if (local_4a8 == (undefined4 ******)0x80000001) {
        return 1;
      }
      FUN_01bed4e2(ppppppuVar14,&local_4a8,0xc0);
      uVar15 = local_3e8;
      if (*(char *)(param_1 + 0x18) != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_003e0eff,0x5d,&DAT_01c08830);
      }
      piVar7 = (int *)FUN_01664fc4();
      uVar16 = piVar7[0x52];
      if (0x3f < uVar16) {
        uVar16 = 0;
        FUN_007a4e44(piVar7 + 0x42,piVar7 + 2);
      }
      iVar19 = (piVar7 + 2)[uVar16];
      piVar8 = (int *)(*piVar7 + -1);
      *piVar7 = (int)piVar8;
      piVar13 = piVar8;
      if (piVar8 == (int *)0x0) {
        piVar13 = piVar7;
      }
      piVar7[0x52] = uVar16 + 1;
      if (piVar8 == (int *)0x0) {
        FUN_01663bac(piVar13);
      }
      local_38a = (undefined2)iVar19;
      FUN_019ac130(&local_240,0);
      local_2ac = (undefined4 ******)0x0;
      local_2b0 = (undefined4 ******)0x0;
      local_2d0 = local_240;
      local_2cc = local_23c;
      local_2c8 = local_238;
      local_2a8 = (undefined4 *)0x0;
      FUN_019ac248(&local_240,&local_2d0,&local_2b0);
      puVar10 = local_238;
      if (((uint)local_240 & 1) == 0) {
        if (param_1[0x14] == 0) {
          ppppppuVar12 = (undefined4 ******)0x0;
        }
        else {
          iVar9 = param_1[0x15];
          iVar20 = param_1[0x14] + (*(int *)(iVar9 + 8) - 1U & 0xfffffff8) + 8;
          iVar19 = (**(code **)(iVar9 + 0x10))(iVar20,ppppppuVar14);
          ppppppuVar12 = (undefined4 ******)0x0;
          if (iVar19 != 0) {
            FUN_013e403c(&local_2f0,ppppppuVar14,iVar20,iVar9,puVar10);
            if (local_2f0 != (undefined4 ******)0x0) {
              local_314 = local_2ec;
              if (((DAT_01d50f88 < 2) &&
                  ((DAT_01d4e0fc - 1 < 2 ||
                   ((DAT_01d4e0fc != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4e0f4), cVar6 != '\0'))))))
                 && (iVar19 = FUN_01aaa278(DAT_01d4e0f4), iVar19 != 0)) {
                if (*(undefined4 *******)(DAT_01d4e0f4 + 0x20) == (undefined4 ******)0x0) {
LAB_00789f74:
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c087f0);
                }
                local_34 = &local_2b8;
                local_2e0 = &local_38;
                local_2d8 = (undefined4 *)(DAT_01d4e0f4 + 0x1c);
                local_240 = (undefined4 ******)*local_2d8;
                local_238 = *(undefined4 **)(DAT_01d4e0f4 + 0x24);
                local_234 = *(undefined4 *)(DAT_01d4e0f4 + 0x28);
                local_230 = 0;
                local_2dc = (undefined4 *****)&DAT_00000001;
                local_30 = (undefined4 *)&DAT_01d2ea4c;
                local_2b4 = &local_248;
                local_2b8 = (undefined4 *****)&DAT_005bb967;
                local_244 = FUN_013e818c;
                local_248 = &local_314;
                local_23c = *(undefined4 *******)(DAT_01d4e0f4 + 0x20);
                local_38 = &local_240;
                FUN_01aaaecc(DAT_01d4e0f4,&local_2e0);
                iVar19 = DAT_01d4e0f4;
                if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
                  local_2cc = *(undefined4 *******)(DAT_01d4e0f4 + 0x14);
                  local_2c8 = *(undefined4 **)(DAT_01d4e0f4 + 0x18);
                  local_2d0 = (undefined4 ******)&SUB_00000004;
                  DataMemoryBarrier(0xb);
                  pcVar11 = DAT_01d4edc4;
                  if (DAT_01d51174 != 2) {
                    pcVar11 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                  }
                  puVar10 = DAT_01d4edc8;
                  if (DAT_01d51174 != 2) {
                    puVar10 = &DAT_01cfc5e0;
                  }
                  iVar9 = (*(code *)puVar10[3])(pcVar11,&local_2d0);
                  if (iVar9 != 0) {
                    local_2b0 = local_2d0;
                    local_2ac = local_2cc;
                    local_2a8 = local_2c8;
                    FUN_01aaa328(iVar19,pcVar11,puVar10[4],&local_2b0,&local_2e0);
                  }
                }
              }
              else {
                iVar19 = DAT_01d4e0f4;
                if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
                  local_2dc = *(undefined4 ******)(DAT_01d4e0f4 + 0x14);
                  local_2d8 = *(undefined4 **)(DAT_01d4e0f4 + 0x18);
                  local_2e0 = (undefined4 ******)&SUB_00000004;
                  DataMemoryBarrier(0xb);
                  pcVar11 = DAT_01d4edc4;
                  if (DAT_01d51174 != 2) {
                    pcVar11 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                  }
                  puVar10 = DAT_01d4edc8;
                  if (DAT_01d51174 != 2) {
                    puVar10 = &DAT_01cfc5e0;
                  }
                  iVar9 = (*(code *)puVar10[3])(pcVar11,&local_2e0);
                  if (iVar9 != 0) {
                    if (*(undefined4 *******)(DAT_01d4e0f4 + 0x20) == (undefined4 ******)0x0)
                    goto LAB_00789f74;
                    local_2cc = &local_2b8;
                    local_2d0 = &local_240;
                    local_238 = *(undefined4 **)(DAT_01d4e0f4 + 0x24);
                    local_234 = *(undefined4 *)(DAT_01d4e0f4 + 0x28);
                    local_38 = &local_2d0;
                    local_230 = 0;
                    local_34 = (undefined4 ******)&DAT_00000001;
                    local_2c8 = (undefined4 *)&DAT_01d2ea4c;
                    local_2b4 = &local_248;
                    local_2b8 = (undefined4 *****)&DAT_005bb967;
                    local_244 = FUN_013e818c;
                    local_248 = &local_314;
                    local_2b0 = local_2e0;
                    local_2ac = (undefined4 ******)local_2dc;
                    local_2a8 = local_2d8;
                    local_240 = *(undefined4 *******)(DAT_01d4e0f4 + 0x1c);
                    local_23c = *(undefined4 *******)(DAT_01d4e0f4 + 0x20);
                    local_30 = (undefined4 *)(DAT_01d4e0f4 + 0x1c);
                    FUN_01aaa328(iVar19,pcVar11,puVar10[4],&local_2b0,&local_38);
                  }
                }
              }
              local_2ac = local_314;
              goto LAB_00788ef0;
            }
            local_4d0 = local_2e8;
            ppppppuVar12 = local_2ec;
          }
        }
        uVar16 = (uint)local_394;
        if (uVar16 < 0x201) {
          uVar16 = 0x200;
        }
        if (0xfff < uVar16) {
          uVar16 = 0x1000;
        }
        if (local_3a4 == -0x80000000) {
          uVar16 = 0x200;
        }
        FUN_013e3290(&local_240,ppppppuVar14);
        puVar10 = local_238;
        ppppppuVar5 = local_23c;
        ppppppuVar4 = local_240;
        uVar3 = local_38a;
        if (local_240 == (undefined4 ******)&DAT_80000000) {
          local_2ac = local_23c;
          local_2a4 = 0;
          local_2b0 = (undefined4 ******)0x2;
          if (ppppppuVar12 != (undefined4 ******)0x0) {
            FUN_01443048(ppppppuVar12,local_4d0);
          }
          goto LAB_00788ef4;
        }
        local_310 = param_1[4];
        uStack_30c = param_1[5];
        uStack_308 = param_1[6];
        uStack_304 = param_1[7];
        local_300 = param_1[8];
        uStack_2fc = param_1[9];
        uStack_2f8 = param_1[10];
        uStack_2f4 = param_1[0xb];
        if (((DAT_01d50f88 < 2) &&
            ((DAT_01d4e108 - 1 < 2 ||
             ((DAT_01d4e108 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4e100), cVar6 != '\0')))))) &&
           (iVar19 = FUN_01aaa278(DAT_01d4e100), iVar19 != 0)) {
          puVar17 = (undefined4 *)(DAT_01d4e100 + 0x1c);
          if (*(undefined4 *******)(DAT_01d4e100 + 0x20) == (undefined4 ******)0x0) {
LAB_00789f58:
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c08800);
          }
          local_2c8 = *(undefined4 **)(DAT_01d4e100 + 0x24);
          local_2c4 = *(undefined4 *)(DAT_01d4e100 + 0x28);
          local_2c0 = 0;
          local_2d0 = (undefined4 ******)*puVar17;
          local_2cc = *(undefined4 *******)(DAT_01d4e100 + 0x20);
          FUN_013e4770(&local_240,ppppppuVar5,puVar10);
          if (local_240 == (undefined4 ******)&DAT_80000000) {
            local_2b0 = local_23c;
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_003e0eab,0x21,&local_2b0,&DAT_01c088e0,&DAT_01c08810);
          }
          FUN_01bed4e2(&local_2b0,&local_240,0x68);
          local_2b4 = &local_248;
          local_2b8 = (undefined4 *****)&DAT_005b9477;
          local_2d8 = (undefined4 *)&DAT_01d2ea4c;
          local_2dc = &local_2b8;
          local_2e0 = &local_2d0;
          local_2ec = (undefined4 ******)&DAT_00000001;
          local_2f0 = &local_2e0;
          local_244 = FUN_013e5ad0;
          local_2e8 = puVar17;
          local_248 = &local_2b0;
          FUN_01aaaecc(DAT_01d4e100,&local_2f0);
          iVar19 = DAT_01d4e100;
          if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
            local_34 = *(undefined4 *******)(DAT_01d4e100 + 0x14);
            local_30 = *(undefined4 **)(DAT_01d4e100 + 0x18);
            local_38 = (undefined4 ******)&SUB_00000004;
            DataMemoryBarrier(0xb);
            pcVar11 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar11 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            puVar17 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar17 = &DAT_01cfc5e0;
            }
            iVar9 = (*(code *)puVar17[3])(pcVar11,&local_38);
            if (iVar9 != 0) {
              local_240 = local_38;
              local_23c = local_34;
              local_238 = local_30;
              FUN_01aaa328(iVar19,pcVar11,puVar17[4],&local_240,&local_2f0);
            }
          }
          FUN_013e1148(&local_2b0);
        }
        else {
          iVar19 = DAT_01d4e100;
          if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
            local_2ec = *(undefined4 *******)(DAT_01d4e100 + 0x14);
            local_2e8 = *(undefined4 **)(DAT_01d4e100 + 0x18);
            local_2f0 = (undefined4 ******)&SUB_00000004;
            DataMemoryBarrier(0xb);
            pcVar11 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar11 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            puVar17 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar17 = &DAT_01cfc5e0;
            }
            iVar9 = (*(code *)puVar17[3])(pcVar11,&local_2f0);
            if (iVar9 != 0) {
              puVar18 = (undefined4 *)(DAT_01d4e100 + 0x1c);
              if (*(undefined4 *******)(DAT_01d4e100 + 0x20) == (undefined4 ******)0x0)
              goto LAB_00789f58;
              local_2c8 = *(undefined4 **)(DAT_01d4e100 + 0x24);
              local_2c4 = *(undefined4 *)(DAT_01d4e100 + 0x28);
              local_2c0 = 0;
              local_2d0 = (undefined4 ******)*puVar18;
              local_2cc = *(undefined4 *******)(DAT_01d4e100 + 0x20);
              FUN_013e4770(&local_240,ppppppuVar5,puVar10);
              if (local_240 == (undefined4 ******)&DAT_80000000) {
                local_2b0 = local_23c;
                    /* WARNING: Subroutine does not return */
                FUN_013073dc(&DAT_003e0eab,0x21,&local_2b0,&DAT_01c088e0,&DAT_01c08810);
              }
              FUN_01bed4e2(&local_2b0,&local_240,0x68);
              local_2b4 = &local_248;
              local_2b8 = (undefined4 *****)&DAT_005b9477;
              local_30 = (undefined4 *)&DAT_01d2ea4c;
              local_34 = &local_2b8;
              local_38 = &local_2d0;
              local_2dc = (undefined4 *****)&DAT_00000001;
              local_2e0 = &local_38;
              local_244 = FUN_013e5ad0;
              local_240 = local_2f0;
              local_23c = local_2ec;
              local_238 = local_2e8;
              local_2d8 = puVar18;
              local_248 = &local_2b0;
              FUN_01aaa328(iVar19,pcVar11,puVar17[4],&local_240,&local_2e0);
              FUN_013e1148(&local_2b0);
            }
          }
        }
        piVar7 = (int *)param_1[0x17];
        do {
          iVar19 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar19 + 1;
        if (iVar19 < 0) {
LAB_00789f8c:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x789f8c);
          (*pcVar1)();
        }
        piVar13 = (int *)param_1[0x16];
        do {
          iVar19 = *piVar13;
          bVar2 = (bool)hasExclusiveAccess(piVar13);
        } while (!bVar2);
        *piVar13 = iVar19 + 1;
        if (iVar19 < 0) goto LAB_00789f8c;
        ppppppuVar14 = (undefined4 ******)*param_1;
        puVar17 = (undefined4 *)param_1[2];
        ppppppuVar21 = (undefined4 ******)param_1[1];
        local_fe = *(undefined1 *)((int)param_1 + 0x61);
        local_154 = local_310;
        uStack_150 = uStack_30c;
        uStack_14c = uStack_308;
        uStack_148 = uStack_304;
        local_144 = local_300;
        uStack_140 = uStack_2fc;
        uStack_13c = uStack_2f8;
        uStack_138 = uStack_2f4;
        local_134 = param_1[0xc];
        uStack_130 = param_1[0xd];
        uStack_12c = param_1[0xe];
        uStack_128 = param_1[0xf];
        local_124 = param_1[0x10];
        uStack_120 = param_1[0x11];
        uStack_11c = param_1[0x12];
        uStack_118 = param_1[0x13];
        local_234 = local_310;
        local_230 = uStack_30c;
        local_22c = (undefined *)uStack_308;
        uStack_228 = uStack_304;
        local_224 = local_300;
        uStack_220 = uStack_2fc;
        uStack_21c = uStack_2f8;
        uStack_218 = uStack_2f4;
        local_100 = uVar3;
        local_108 = local_4d0;
        local_240 = ppppppuVar4;
        local_23c = ppppppuVar5;
        local_238 = puVar10;
        local_114 = piVar13;
        local_110 = piVar7;
        local_10c = ppppppuVar12;
        local_104 = uVar16;
        FUN_01bed4e2(auStack_214,&local_3e0,0xc0);
        local_fc = 0;
        iVar19 = thunk_FUN_01be5118(0x204);
        if (iVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x204);
        }
        FUN_01bed4e2(iVar19,&local_240,0x204);
        local_1d0 = 0;
        local_22c = &DAT_01c08820;
        local_240 = ppppppuVar14;
        local_23c = ppppppuVar21;
        local_238 = puVar17;
        local_230 = iVar19;
        ppppppuVar14 = (undefined4 ******)thunk_FUN_01be5118(0x78);
        if (ppppppuVar14 == (undefined4 ******)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0x78);
        }
        FUN_01bed4e2(ppppppuVar14,&local_240,0x78);
        local_2a4 = 0;
        local_2a8 = (undefined4 *)&DAT_01c08648;
        local_2b0 = (undefined4 ******)0x0;
        local_2ac = ppppppuVar14;
      }
      else {
        local_238 = (undefined4 *)&DAT_00000026;
        local_240 = (undefined4 ******)CONCAT22(local_240._2_2_,0x10);
        local_23c = (undefined4 ******)&DAT_003e0ed9;
        local_2ac = (undefined4 ******)FUN_013e649c(&local_240);
LAB_00788ef0:
        local_2a4 = 0;
        local_2b0 = (undefined4 ******)0x2;
LAB_00788ef4:
        FUN_013e19bc(ppppppuVar14);
      }
      FUN_013e1a5c(&local_3e0,uVar15,&local_2b0);
      if (local_3e0 != (undefined4 ******)0x4) {
        if ((DAT_01d50f88 < 2) &&
           (((DAT_01d4e608 - 1 < 2 ||
             ((DAT_01d4e608 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4e600), cVar6 != '\0')))) &&
            (iVar19 = FUN_01aaa278(DAT_01d4e600), iVar19 != 0)))) {
          if (*(undefined4 *******)(DAT_01d4e600 + 0x20) == (undefined4 ******)0x0) {
LAB_00789f3c:
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c08d80);
          }
          local_34 = &local_2f0;
          local_2e0 = &local_38;
          local_2d8 = (undefined4 *)(DAT_01d4e600 + 0x1c);
          local_240 = (undefined4 ******)*local_2d8;
          local_238 = *(undefined4 **)(DAT_01d4e600 + 0x24);
          local_234 = *(undefined4 *)(DAT_01d4e600 + 0x28);
          local_230 = 0;
          local_2dc = (undefined4 *****)&DAT_00000001;
          local_30 = (undefined4 *)&DAT_01d2ea4c;
          local_2ec = (undefined4 ******)0x6f;
          local_2f0 = (undefined4 ******)&DAT_003e0fae;
          local_23c = *(undefined4 *******)(DAT_01d4e600 + 0x20);
          local_38 = &local_240;
          FUN_01aaaecc(DAT_01d4e600,&local_2e0);
          iVar19 = DAT_01d4e600;
          if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
            local_2cc = *(undefined4 *******)(DAT_01d4e600 + 0x14);
            local_2c8 = *(undefined4 **)(DAT_01d4e600 + 0x18);
            local_2d0 = (undefined4 ******)&SUB_00000004;
            DataMemoryBarrier(0xb);
            pcVar11 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar11 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            puVar10 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar10 = &DAT_01cfc5e0;
            }
            iVar9 = (*(code *)puVar10[3])(pcVar11,&local_2d0);
            if (iVar9 != 0) {
              local_2b0 = local_2d0;
              local_2ac = local_2cc;
              local_2a8 = local_2c8;
              FUN_01aaa328(iVar19,pcVar11,puVar10[4],&local_2b0,&local_2e0);
            }
          }
        }
        else {
          iVar19 = DAT_01d4e600;
          if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
            local_31c = *(undefined4 *******)(DAT_01d4e600 + 0x14);
            local_318 = *(undefined4 **)(DAT_01d4e600 + 0x18);
            local_320 = (undefined4 ******)&SUB_00000004;
            DataMemoryBarrier(0xb);
            pcVar11 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar11 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            puVar10 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar10 = &DAT_01cfc5e0;
            }
            iVar9 = (*(code *)puVar10[3])(pcVar11,&local_320);
            if (iVar9 != 0) {
              if (*(undefined4 *******)(DAT_01d4e600 + 0x20) == (undefined4 ******)0x0)
              goto LAB_00789f3c;
              local_2cc = &local_2e0;
              local_238 = *(undefined4 **)(DAT_01d4e600 + 0x24);
              local_234 = *(undefined4 *)(DAT_01d4e600 + 0x28);
              local_2d0 = &local_240;
              local_230 = 0;
              local_34 = (undefined4 ******)&DAT_00000001;
              local_2c8 = (undefined4 *)&DAT_01d2ea4c;
              local_2dc = (undefined4 *****)0x6f;
              local_2e0 = (undefined4 ******)&DAT_003e0fae;
              local_2b0 = local_320;
              local_2ac = local_31c;
              local_2a8 = local_318;
              local_240 = *(undefined4 *******)(DAT_01d4e600 + 0x1c);
              local_23c = *(undefined4 *******)(DAT_01d4e600 + 0x20);
              local_38 = &local_2d0;
              local_30 = (undefined4 *)(DAT_01d4e600 + 0x1c);
              FUN_01aaa328(iVar19,pcVar11,puVar10[4],&local_2b0,&local_38);
            }
          }
        }
        if (local_3e0 != (undefined4 ******)0x4) {
          FUN_007843f0(&local_3e0);
        }
      }
    }
  }
  if ((DAT_01d50f88 < 2) &&
     (((DAT_01d4e5fc - 1 < 2 ||
       ((DAT_01d4e5fc != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4e5f4), cVar6 != '\0')))) &&
      (iVar19 = FUN_01aaa278(DAT_01d4e5f4), iVar19 != 0)))) {
    if (*(int *)(DAT_01d4e5f4 + 0x20) == 0) {
LAB_00789f94:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c08d60);
    }
    local_238 = *(undefined4 **)(DAT_01d4e5f4 + 0x24);
    local_234 = *(undefined4 *)(DAT_01d4e5f4 + 0x28);
    local_2a8 = (undefined4 *)(DAT_01d4e5f4 + 0x1c);
    local_240 = (undefined4 ******)*local_2a8;
    local_230 = 0;
    local_2ac = (undefined4 ******)0x1;
    local_2d0 = (undefined4 ******)&DAT_0056c788;
    local_3d8 = (undefined4 *)&DAT_01d2ea4c;
    local_2cc = (undefined4 ******)&DAT_00000041;
    local_3e0 = &local_240;
    local_3dc = &local_2d0;
    local_2b0 = ppppppuVar14;
    local_23c = (undefined4 ******)*(int *)(DAT_01d4e5f4 + 0x20);
    FUN_01aaaecc(DAT_01d4e5f4,&local_2b0);
    iVar19 = DAT_01d4e5f4;
    if (DAT_01d51ae9 != '\0') {
      return 0;
    }
    if (DAT_01d51b00 < 4) {
      return 0;
    }
    local_4a4 = *(undefined4 *******)(DAT_01d4e5f4 + 0x14);
    local_4a0 = *(undefined1 **)(DAT_01d4e5f4 + 0x18);
    local_4a8 = (undefined4 ******)&SUB_00000004;
    DataMemoryBarrier(0xb);
    puVar10 = &DAT_01cfc5e0;
    if (DAT_01d51174 == 2) {
      puVar10 = DAT_01d4edc8;
    }
    pcVar11 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    if (DAT_01d51174 == 2) {
      pcVar11 = DAT_01d4edc4;
    }
    iVar9 = (*(code *)puVar10[3])(pcVar11,&local_4a8);
    if (iVar9 == 0) {
      return 0;
    }
    uVar15 = puVar10[4];
    ppppppuVar12 = &local_4a8;
    ppppppuVar14 = &local_2b0;
  }
  else {
    iVar19 = DAT_01d4e5f4;
    if (DAT_01d51ae9 != '\0') {
      return 0;
    }
    if (DAT_01d51b00 < 4) {
      return 0;
    }
    local_4b0 = *(undefined4 *)(DAT_01d4e5f4 + 0x14);
    local_4ac = *(undefined4 *)(DAT_01d4e5f4 + 0x18);
    local_4b4 = (undefined4 *****)0x4;
    DataMemoryBarrier(0xb);
    puVar10 = &DAT_01cfc5e0;
    if (DAT_01d51174 == 2) {
      puVar10 = DAT_01d4edc8;
    }
    pcVar11 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    if (DAT_01d51174 == 2) {
      pcVar11 = DAT_01d4edc4;
    }
    iVar9 = (*(code *)puVar10[3])(pcVar11,&local_4b4);
    if (iVar9 == 0) {
      return 0;
    }
    local_3d8 = (undefined4 *)(DAT_01d4e5f4 + 0x1c);
    if (*(int *)(DAT_01d4e5f4 + 0x20) == 0) goto LAB_00789f94;
    local_4a4 = &local_2b0;
    local_238 = *(undefined4 **)(DAT_01d4e5f4 + 0x24);
    local_234 = *(undefined4 *)(DAT_01d4e5f4 + 0x28);
    local_4a8 = &local_240;
    local_3e0 = &local_4a8;
    local_230 = 0;
    local_3dc = (undefined4 ******)&DAT_00000001;
    local_2b0 = (undefined4 ******)&DAT_0056c788;
    ppppppuVar12 = &local_4b4;
    local_4a0 = &DAT_01d2ea4c;
    local_2ac = (undefined4 ******)0x41;
    uVar15 = puVar10[4];
    local_240 = (undefined4 ******)*local_3d8;
    local_23c = (undefined4 ******)*(int *)(DAT_01d4e5f4 + 0x20);
  }
  FUN_01aaa328(iVar19,pcVar11,uVar15,ppppppuVar12,ppppppuVar14);
  return 0;
}

