// FUN_01811910 @ 01811910 size=3608 calls_out=19 calls_in=1
// strings: cannot clone `Sender` -- too many outstanding senders

void FUN_01811910(int param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined1 uVar10;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  uint uVar18;
  int *piVar19;
  uint uVar20;
  uint *puVar21;
  int iVar22;
  int *local_35c;
  int local_340;
  int iStack_33c;
  int *piStack_338;
  int local_334;
  int local_330;
  int *piStack_32c;
  int *piStack_328;
  undefined4 *local_324;
  int local_320;
  uint local_318;
  int local_314;
  uint *local_310;
  undefined1 *local_30c;
  int local_308;
  int *local_304;
  int *piStack_300;
  undefined4 *local_2fc;
  int local_2f8;
  int iStack_2f4;
  int *piStack_2f0;
  int *local_2ec;
  int local_2e8;
  int iStack_2e4;
  int iStack_2e0;
  int iStack_2dc;
  undefined1 local_2a8;
  uint *local_2a0;
  undefined1 *puStack_29c;
  int iStack_298;
  int *local_294;
  int *piStack_290;
  undefined4 *puStack_28c;
  int iStack_288;
  uint *local_230;
  undefined1 *puStack_22c;
  int iStack_228;
  int *local_224;
  int *piStack_220;
  undefined4 *puStack_21c;
  int iStack_218;
  int *local_1c0;
  uint local_1bc;
  int **local_1b8;
  undefined4 *local_1b4;
  int local_1b0;
  int iStack_1ac;
  int *local_1a8;
  int *local_1a4;
  int *local_1a0;
  int iStack_19c;
  int local_198;
  int *local_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  int *local_168;
  int local_164;
  undefined1 local_160;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  int *local_118;
  int *local_114;
  int *local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int *local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 uStack_25;
  
  piVar13 = *(int **)(param_1 + 0x6c);
  if (piVar13 != (int *)0x0) {
    do {
      iVar6 = *piVar13;
      bVar2 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar2);
    *piVar13 = iVar6 + 1;
    if (iVar6 < 0) goto LAB_01812714;
  }
  puVar11 = (undefined4 *)((uint)&local_1c0 | 0x10);
  if ((char)param_2[0xf] == '\0') {
    if (*(char *)((int)param_2 + 0x3d) == '\0') {
      local_1b0 = param_2[0xb];
      iStack_1ac = param_2[0xc];
      local_1a8 = (int *)param_2[0xd];
      local_1a4 = (int *)param_2[0xe];
      local_1c0 = (int *)param_2[7];
      local_1bc = param_2[8];
      local_1b8 = (int **)param_2[9];
      local_1b4 = (undefined4 *)param_2[10];
      local_1a0 = (int *)((uint)local_1a0 & 0xffffff00);
      local_334 = thunk_FUN_01be5118(0x24);
      piVar9 = local_1a0;
      if (local_334 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x24);
      }
      *(int **)local_334 = local_1c0;
      *(uint *)(local_334 + 4) = local_1bc;
      *(int ***)(local_334 + 8) = local_1b8;
      *(undefined4 **)(local_334 + 0xc) = local_1b4;
      *(int *)(local_334 + 0x10) = local_1b0;
      *(int *)(local_334 + 0x14) = iStack_1ac;
      *(int **)(local_334 + 0x18) = local_1a8;
      *(int **)(local_334 + 0x1c) = local_1a4;
      *(int **)(local_334 + 0x20) = local_1a0;
      iVar6 = FUN_017fd53c(&local_334,param_3);
      if (iVar6 == 0) {
        FUN_01812c74(local_334);
      }
      else {
        if (*(char *)(param_1 + 0x48) == '\x02') {
          uVar10 = 2;
          puVar14 = (undefined4 *)0x2;
        }
        else {
          piVar9 = *(int **)(param_1 + 0x40);
          puVar21 = (uint *)(piVar9 + 8);
          uVar18 = piVar9[8];
          DataMemoryBarrier(0xb);
          do {
            if (uVar18 == (piVar9[6] ^ 0x7fffffffU)) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec("cannot clone `Sender` -- too many outstanding senders",0x35,
                           &DAT_01d2df0c);
            }
            uVar20 = *puVar21;
            if (uVar20 == uVar18) {
              DataMemoryBarrier(0xb);
              do {
                bVar2 = (bool)hasExclusiveAccess(puVar21);
                if (bVar2) {
                  *puVar21 = uVar18 + 1;
                  bVar2 = true;
                  uVar18 = uVar20;
                  goto LAB_01811ab0;
                }
                uVar20 = *puVar21;
              } while (uVar20 == uVar18);
            }
            bVar2 = false;
            ClearExclusiveLocal();
            uVar18 = uVar20;
LAB_01811ab0:
            DataMemoryBarrier(0xb);
          } while (!bVar2);
          do {
            iVar6 = *piVar9;
            bVar2 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar2);
          *piVar9 = iVar6 + 1;
          if (iVar6 < 0) goto LAB_01812714;
          puVar14 = (undefined4 *)thunk_FUN_01be5118(0x1c);
          if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x1c);
          }
          uVar10 = 0;
          puVar14[6] = 0;
          *puVar14 = 1;
          puVar14[1] = 1;
          puVar14[2] = 0;
          puVar14[3] = 0;
          puVar14[4] = 0;
        }
        if (piVar13 != (int *)0x0) {
          do {
            iVar6 = *piVar13;
            bVar2 = (bool)hasExclusiveAccess(piVar13);
          } while (!bVar2);
          *piVar13 = iVar6 + 1;
          if (iVar6 < 0) goto LAB_01812714;
        }
        iVar6 = *(int *)(param_1 + 0x70);
        iVar7 = *(int *)(param_1 + 0x74);
        local_320 = CONCAT31(local_320._1_3_,uVar10);
        local_330 = local_334;
        piStack_32c = piVar13;
        piStack_328 = piVar9;
        local_324 = puVar14;
        if (iVar6 == 0) {
          do {
            do {
              local_318 = DAT_01d50470;
              local_314 = DAT_01d50474;
              uVar18 = DAT_01d50470 + 1;
              iVar6 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
              bVar2 = (bool)hasExclusiveAccess(0x1d50470);
            } while (!bVar2);
            bVar2 = DAT_01d50470 == 0;
            bVar5 = DAT_01d50474 == 0;
            DAT_01d50470 = uVar18;
            DAT_01d50474 = iVar6;
          } while (bVar2 && bVar5);
          local_308 = local_334;
          local_2f8 = local_320;
          local_304 = piVar13;
          piStack_300 = piVar9;
          local_2fc = puVar14;
          iVar6 = thunk_FUN_01bee35a();
          puVar21 = (uint *)(iVar6 + 0x20);
          local_30c = &uStack_25;
          local_310 = &local_318;
          if (*(char *)(iVar6 + 0x58) != '\x01') {
            if (*(char *)(iVar6 + 0x58) == '\x02') {
              uVar10 = 1;
              FUN_017ca028(&local_308);
              goto LAB_01811e34;
            }
            FUN_019a2bcc(puVar21,&LAB_019efb68);
            *(undefined1 *)(iVar6 + 0x58) = 1;
          }
          local_2a0 = local_310;
          puStack_29c = local_30c;
          iStack_298 = local_308;
          local_294 = local_304;
          piStack_290 = piStack_300;
          puStack_28c = local_2fc;
          iStack_288 = local_2f8;
          if (0x7ffffffe < *puVar21) {
                    /* WARNING: Subroutine does not return */
            FUN_0130701c(&DAT_01d2e14c);
          }
          *puVar21 = *puVar21 + 1;
          local_230 = local_310;
          puStack_22c = local_30c;
          iStack_228 = local_308;
          local_224 = local_304;
          piStack_220 = piStack_300;
          puStack_21c = local_2fc;
          iStack_218 = local_2f8;
          if (*(uint *)(iVar6 + 0x24) == 2) {
            FUN_017ca028(&iStack_228);
            uVar10 = 0;
            *puVar21 = *puVar21 - 1;
LAB_01811e34:
            local_1c0 = (int *)CONCAT31(local_1c0._1_3_,uVar10);
                    /* WARNING: Subroutine does not return */
            FUN_0068d4ec(&local_1c0,&DAT_01d1ce18);
          }
          piVar9 = (int *)*local_310;
          uVar18 = local_310[1];
          if ((*(uint *)(iVar6 + 0x24) & 1) == 0) {
            piVar8 = *(int **)(iVar6 + 0x28);
            do {
              iVar7 = *piVar8;
              bVar2 = (bool)hasExclusiveAccess(piVar8);
            } while (!bVar2);
            *piVar8 = iVar7 + 1;
            if (iVar7 < 0) goto LAB_01812714;
            piVar19 = (int *)piVar8[0x82];
            if (piVar19 != (int *)0x0) {
              do {
                iVar7 = *piVar19;
                bVar2 = (bool)hasExclusiveAccess(piVar19);
              } while (!bVar2);
              *piVar19 = iVar7 + 1;
              if (iVar7 < 0) goto LAB_01812714;
              local_35c = (int *)piVar8[0x83];
            }
            piVar17 = (int *)((uint)&local_90 | 4);
            *piVar17 = local_330;
            piVar17[1] = (int)piStack_32c;
            piVar17[2] = (int)piStack_328;
            piVar17[3] = (int)local_324;
            piVar17[4] = local_320;
            local_f8 = local_90;
            uStack_f4 = uStack_8c;
            uStack_f0 = uStack_88;
            uStack_ec = uStack_84;
            uStack_e8 = uStack_80;
            uStack_e4 = uStack_7c;
            local_198 = 0;
            local_194 = local_90;
            uStack_190 = uStack_8c;
            uStack_18c = uStack_88;
            uStack_188 = uStack_84;
            uStack_184 = uStack_80;
            uStack_180 = uStack_7c;
            puVar11[4] = piVar9;
            puVar11[5] = uVar18;
            *puVar11 = 0;
            puVar11[1] = 0;
            local_1bc = 0;
            local_1b8 = (int **)&PTR_LAB_01d1c468;
            local_1c0 = (int *)0xcc;
            local_164 = (int)local_35c;
            local_170 = 0;
            local_174 = 0;
            local_178 = 0;
            local_90 = (int *)0x0;
            local_1a8 = piVar8;
            local_168 = piVar19;
            iVar7 = FUN_01be5878(&local_90,0x20,0x60);
            local_35c = local_90;
            if ((iVar7 != 0) || (local_90 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(0x20,0x60);
            }
            FUN_01bed4e2(local_90,&local_1c0,0x60);
            iVar7 = FUN_01816510(piVar8 + 0x40,local_35c,local_35c);
            local_1c0 = piVar9;
            local_1bc = uVar18;
            if (piVar8[0x80] != 0) {
              (**(code **)(piVar8[0x81] + 0x14))
                        (piVar8[0x80] + (*(int *)(piVar8[0x81] + 8) - 1U & 0xfffffff8) + 8,
                         &local_1c0);
            }
            if (iVar7 != 0) {
              FUN_019dc904(*(undefined4 *)(iVar6 + 0x28),iVar7);
            }
          }
          else {
            piVar8 = *(int **)(iVar6 + 0x28);
            do {
              iVar6 = *piVar8;
              bVar2 = (bool)hasExclusiveAccess(piVar8);
            } while (!bVar2);
            *piVar8 = iVar6 + 1;
            if (iVar6 < 0) goto LAB_01812714;
            piVar19 = (int *)piVar8[0x50];
            if (piVar19 != (int *)0x0) {
              do {
                iVar6 = *piVar19;
                bVar2 = (bool)hasExclusiveAccess(piVar19);
              } while (!bVar2);
              *piVar19 = iVar6 + 1;
              if (iVar6 < 0) goto LAB_01812714;
              local_35c = (int *)piVar8[0x51];
            }
            piVar17 = (int *)((uint)&local_90 | 4);
            *piVar17 = local_330;
            piVar17[1] = (int)piStack_32c;
            piVar17[2] = (int)piStack_328;
            piVar17[3] = (int)local_324;
            piVar17[4] = local_320;
            local_f8 = local_90;
            uStack_f4 = uStack_8c;
            uStack_f0 = uStack_88;
            uStack_ec = uStack_84;
            uStack_e8 = uStack_80;
            uStack_e4 = uStack_7c;
            local_198 = 0;
            local_194 = local_90;
            uStack_190 = uStack_8c;
            uStack_18c = uStack_88;
            uStack_188 = uStack_84;
            uStack_184 = uStack_80;
            uStack_180 = uStack_7c;
            puVar11[4] = piVar9;
            puVar11[5] = uVar18;
            *puVar11 = 0;
            puVar11[1] = 0;
            local_1bc = 0;
            local_1b8 = (int **)&PTR_LAB_01d1c288;
            local_1c0 = (int *)0xcc;
            local_164 = (int)local_35c;
            local_170 = 0;
            local_174 = 0;
            local_178 = 0;
            local_90 = (int *)0x0;
            local_1a8 = piVar8;
            local_168 = piVar19;
            iVar6 = FUN_01be5878(&local_90,0x20,0x60);
            local_35c = local_90;
            if ((iVar6 != 0) || (local_90 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(0x20,0x60);
            }
            FUN_01bed4e2(local_90,&local_1c0,0x60);
            uVar20 = FUN_0181628c(piVar8 + 0x14,local_35c,local_35c);
            local_1c0 = piVar9;
            local_1bc = uVar18;
            if (piVar8[0x4e] != 0) {
              (**(code **)(piVar8[0x4f] + 0x14))
                        (piVar8[0x4e] + (*(int *)(piVar8[0x4f] + 8) - 1U & 0xfffffff8) + 8,
                         &local_1c0);
            }
            if (uVar20 != 0) {
              local_90 = (int *)((uint)local_90 & 0xffffff00);
              local_1b8 = &local_90;
              local_1c0 = piVar8 + 2;
              local_1bc = uVar20;
              FUN_019ee860(&local_1c0);
            }
          }
          *puVar21 = *puVar21 - 1;
          if (*local_35c == 0xcc) {
            DataMemoryBarrier(0xb);
            bVar2 = (bool)hasExclusiveAccess(local_35c);
            if (bVar2) {
              *local_35c = 0x84;
              goto LAB_01811bb8;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          (**(code **)(local_35c[2] + 0x10))();
        }
        else {
          piVar9 = (int *)thunk_FUN_01be5118(0x14);
          if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x14);
          }
          iVar12 = *(int *)(iVar7 + 8);
          *piVar9 = local_330;
          piVar9[1] = (int)piStack_32c;
          piVar9[2] = (int)piStack_328;
          piVar9[3] = (int)local_324;
          piVar9[4] = local_320;
          (**(code **)(iVar7 + 0xc))(iVar6 + (iVar12 - 1U & 0xfffffff8) + 8,piVar9,&DAT_01d1ce58);
        }
      }
LAB_01811bb8:
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    puVar14 = (undefined4 *)0x0;
    bVar5 = bVar2;
  }
  else {
    puVar14 = (undefined4 *)param_2[7];
    local_340 = param_2[8];
    iStack_33c = param_2[9];
    piStack_338 = (int *)param_2[10];
    bVar2 = false;
    bVar5 = true;
  }
  iVar6 = *(int *)(param_1 + 0x70);
  piVar9 = param_2 + 3;
  if (iVar6 == 0) {
    do {
      do {
        local_318 = DAT_01d50470;
        local_314 = DAT_01d50474;
        uVar18 = DAT_01d50470 + 1;
        iVar6 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
        bVar3 = (bool)hasExclusiveAccess(0x1d50470);
      } while (!bVar3);
      bVar3 = DAT_01d50470 == 0;
      bVar4 = DAT_01d50474 == 0;
      DAT_01d50470 = uVar18;
      DAT_01d50474 = iVar6;
    } while (bVar3 && bVar4);
    local_308 = *param_2;
    local_304 = (int *)param_2[1];
    piStack_300 = (int *)param_2[2];
    piVar8 = (int *)&DAT_00000020;
    local_2f8 = local_340;
    iStack_2f4 = iStack_33c;
    piStack_2f0 = piStack_338;
    local_2e8 = *piVar9;
    iStack_2e4 = param_2[4];
    iStack_2e0 = param_2[5];
    iStack_2dc = param_2[6];
    local_2a8 = 0;
    local_2fc = puVar14;
    local_2ec = piVar13;
    iVar6 = thunk_FUN_01bee35a();
    puVar21 = (uint *)(iVar6 + 0x20);
    local_30c = &uStack_25;
    local_310 = &local_318;
    if (*(char *)(iVar6 + 0x58) != '\x01') {
      if (*(char *)(iVar6 + 0x58) == '\x02') {
        uVar10 = 1;
        FUN_017ca454(&local_308);
        goto LAB_01811d8c;
      }
      FUN_019a2bcc(puVar21,&LAB_019efb68);
      *(undefined1 *)(iVar6 + 0x58) = 1;
    }
    FUN_01bed4e2(&local_2a0,&local_310,0x6c);
    if (0x7ffffffe < *puVar21) {
                    /* WARNING: Subroutine does not return */
      FUN_0130701c(&DAT_01d2e14c);
    }
    *puVar21 = *puVar21 + 1;
    uVar18 = *(uint *)(iVar6 + 0x24);
    FUN_01bed4e2(&local_230,&local_310,0x6c);
    if (uVar18 == 2) {
      FUN_017ca454(&iStack_228);
      uVar10 = 0;
      *puVar21 = *puVar21 - 1;
LAB_01811d8c:
      local_1c0 = (int *)CONCAT31(local_1c0._1_3_,uVar10);
                    /* WARNING: Subroutine does not return */
      FUN_0068d4ec(&local_1c0,&DAT_01d1ce18);
    }
    piVar9 = (int *)*local_230;
    uVar20 = local_230[1];
    if ((uVar18 & 1) == 0) {
      piVar13 = *(int **)(iVar6 + 0x28);
      do {
        iVar7 = *piVar13;
        bVar3 = (bool)hasExclusiveAccess(piVar13);
      } while (!bVar3);
      *piVar13 = iVar7 + 1;
      if (iVar7 < 0) goto LAB_01812714;
      piVar19 = (int *)piVar13[0x82];
      if (piVar19 != (int *)0x0) {
        do {
          iVar7 = *piVar19;
          bVar3 = (bool)hasExclusiveAccess(piVar19);
        } while (!bVar3);
        *piVar19 = iVar7 + 1;
        if (iVar7 < 0) goto LAB_01812714;
        piVar8 = (int *)piVar13[0x83];
      }
      FUN_01bed4e2((uint)&local_90 | 4,&local_308,100);
      FUN_01bed4e2(&local_f8,&local_90,0x68);
      local_198 = 0;
      FUN_01bed4e2(&local_194,&local_f8,0x68);
      local_1b8 = (int **)&PTR_LAB_01d1c418;
      local_1c0 = (int *)0xcc;
      puVar11[4] = piVar9;
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[5] = uVar20;
      local_1bc = 0;
      local_120 = 0;
      local_124 = 0;
      local_128 = 0;
      local_90 = (int *)0x0;
      local_1a8 = piVar13;
      local_118 = piVar19;
      local_114 = piVar8;
      iVar7 = FUN_01be5878(&local_90,0x20,0xc0);
      piVar8 = local_90;
      if ((iVar7 != 0) || (local_90 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(0x20,0xc0);
      }
      FUN_01bed4e2(local_90,&local_1c0,0xc0);
      iVar7 = FUN_01816510(piVar13 + 0x40,piVar8,piVar8);
      local_1c0 = piVar9;
      local_1bc = uVar20;
      if (piVar13[0x80] != 0) {
        (**(code **)(piVar13[0x81] + 0x14))
                  (piVar13[0x80] + (*(int *)(piVar13[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_1c0);
      }
      if (iVar7 != 0) {
        FUN_019dc904(*(undefined4 *)(iVar6 + 0x28),iVar7);
      }
    }
    else {
      piVar19 = *(int **)(iVar6 + 0x28);
      do {
        iVar6 = *piVar19;
        bVar3 = (bool)hasExclusiveAccess(piVar19);
      } while (!bVar3);
      *piVar19 = iVar6 + 1;
      if (iVar6 < 0) {
LAB_01812714:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1812714);
        (*pcVar1)();
      }
      piVar8 = (int *)piVar19[0x50];
      if (piVar8 != (int *)0x0) {
        do {
          iVar6 = *piVar8;
          bVar3 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar3);
        *piVar8 = iVar6 + 1;
        if (iVar6 < 0) goto LAB_01812714;
        piVar13 = (int *)piVar19[0x51];
      }
      FUN_01bed4e2((uint)&local_90 | 4,&local_308,100);
      FUN_01bed4e2(&local_f8,&local_90,0x68);
      local_198 = 0;
      FUN_01bed4e2(&local_194,&local_f8,0x68);
      local_1b8 = (int **)&PTR_LAB_01d1c210;
      puVar11[4] = piVar9;
      local_1c0 = (int *)0xcc;
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[5] = uVar20;
      local_1bc = 0;
      local_120 = 0;
      local_124 = 0;
      local_128 = 0;
      local_90 = (int *)0x0;
      local_1a8 = piVar19;
      local_118 = piVar8;
      local_114 = piVar13;
      iVar6 = FUN_01be5878(&local_90,0x20,0xc0);
      piVar8 = local_90;
      if ((iVar6 != 0) || (local_90 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(0x20,0xc0);
      }
      FUN_01bed4e2(local_90,&local_1c0,0xc0);
      uVar18 = FUN_0181628c(piVar19 + 0x14,piVar8,piVar8);
      local_1c0 = piVar9;
      local_1bc = uVar20;
      if (piVar19[0x4e] != 0) {
        (**(code **)(piVar19[0x4f] + 0x14))
                  (piVar19[0x4e] + (*(int *)(piVar19[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_1c0);
      }
      if (uVar18 != 0) {
        local_90 = (int *)((uint)local_90 & 0xffffff00);
        local_1c0 = piVar19 + 2;
        local_1bc = uVar18;
        local_1b8 = &local_90;
        FUN_019ee860(&local_1c0);
      }
    }
    *puVar21 = *puVar21 - 1;
    if (*piVar8 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar3 = (bool)hasExclusiveAccess(piVar8);
      if (bVar3) {
        *piVar8 = 0x84;
        goto LAB_01811ca4;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar8[2] + 0x10))(piVar8);
  }
  else {
    iVar7 = *(int *)(param_1 + 0x74);
    local_1c0 = (int *)*param_2;
    local_1bc = param_2[1];
    local_1b8 = (int **)param_2[2];
    local_1b0 = local_340;
    iStack_1ac = iStack_33c;
    local_1a8 = piStack_338;
    local_1a0 = (int *)*piVar9;
    iStack_19c = param_2[4];
    local_198 = param_2[5];
    local_194 = (int *)param_2[6];
    local_160 = 0;
    local_1b4 = puVar14;
    local_1a4 = piVar13;
    piVar8 = (int *)thunk_FUN_01be5118(100);
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,100);
    }
    iVar22 = *(int *)(iVar7 + 8);
    iVar12 = param_2[1];
    iVar15 = param_2[2];
    *piVar8 = *param_2;
    piVar8[1] = iVar12;
    piVar8[2] = iVar15;
    piVar8[3] = (int)puVar14;
    piVar8[4] = local_340;
    piVar8[5] = iStack_33c;
    piVar8[6] = (int)piStack_338;
    piVar8[7] = (int)piVar13;
    iVar12 = param_2[4];
    iVar15 = param_2[5];
    iVar16 = param_2[6];
    piVar8[8] = *piVar9;
    piVar8[9] = iVar12;
    piVar8[10] = iVar15;
    piVar8[0xb] = iVar16;
    *(undefined1 *)(piVar8 + 0x18) = 0;
    (**(code **)(iVar7 + 0xc))(iVar6 + (iVar22 - 1U & 0xfffffff8) + 8,piVar8,&DAT_01d1ce98);
  }
LAB_01811ca4:
  if (bVar2) {
    FUN_01771f3c(param_2 + 7);
  }
  if (bVar5) {
    FUN_017c30a4(param_2 + 0xb);
  }
  return;
}

