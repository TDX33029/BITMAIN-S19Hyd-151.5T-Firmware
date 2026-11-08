// FUN_01070dec @ 01070dec size=2256 calls_out=15 calls_in=1
// strings: grpc-timeout | tonic::transport::service::grpc_timeout/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/transport/service/grpc_timeout.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | tonic::transport::service::grpc_timeout/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/transport/service/grpc_timeout.rs | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_01070dec(int param_1,ulonglong *param_2,undefined4 param_3)

{
  code *pcVar1;
  byte bVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  int *piVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  int *piVar15;
  byte *pbVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  bool bVar22;
  ulonglong uVar23;
  undefined4 local_248;
  undefined1 *local_244;
  undefined4 *****pppppuStack_228;
  undefined **ppuStack_224;
  undefined4 *puStack_220;
  int local_194;
  undefined *local_190;
  int **local_18c;
  int *local_188;
  undefined1 *local_184;
  undefined4 *****local_180;
  undefined **local_17c;
  undefined4 *local_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 *****local_158;
  undefined **local_154;
  undefined4 *local_150;
  undefined4 *****local_148;
  undefined **local_144;
  undefined4 *local_140;
  undefined4 ****local_138;
  int local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 *****pppppuStack_90;
  undefined **ppuStack_8c;
  undefined4 *puStack_88;
  undefined4 *****pppppuStack_84;
  undefined **ppuStack_80;
  undefined4 *puStack_7c;
  undefined4 *****local_78;
  undefined **ppuStack_74;
  undefined4 *puStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int *local_54;
  undefined1 local_44;
  
  iVar5 = FUN_01ac3400(param_3,"grpc-timeout",0xc);
  if (iVar5 != 0) {
    pbVar10 = *(byte **)(iVar5 + 4);
    uVar12 = 0;
    uVar8 = *(uint *)(iVar5 + 8);
    do {
      if (uVar8 == uVar12) {
        bVar22 = uVar8 == 0;
        if (!bVar22) {
          uVar12 = uVar8 - 1;
          bVar22 = uVar12 == 0;
        }
        if (!bVar22) {
          if ((char)pbVar10[uVar12] < -0x40) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb514(pbVar10,uVar8,0,uVar12,&DAT_01d2e668);
          }
          if ((uVar12 < 9) && ((bVar2 = *pbVar10, uVar12 != 1 || (bVar2 != 0x2b && bVar2 != 0x2d))))
          {
            uVar8 = uVar12;
            if (bVar2 == 0x2b) {
              uVar8 = uVar12 - 1;
            }
            local_244 = (undefined1 *)0x0;
            if (uVar8 == 0) {
              uVar23 = 0;
              goto LAB_01071510;
            }
            pbVar16 = pbVar10;
            if (bVar2 == 0x2b) {
              pbVar16 = pbVar10 + 1;
            }
            uVar23 = 0;
            goto LAB_010714b4;
          }
        }
        break;
      }
      pbVar16 = pbVar10 + uVar12;
      uVar12 = uVar12 + 1;
    } while ((*pbVar16 == 9) || (*pbVar16 - 0x20 < 0x5f));
LAB_01070e5c:
    local_194 = iVar5;
    if ((DAT_01d50f88 == 0) &&
       ((DAT_01d50804 - 1 < 2 ||
        ((DAT_01d50804 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d507fc), cVar4 != '\0')))))) {
      iVar5 = FUN_01aaa278(DAT_01d507fc);
      if (iVar5 != 0) {
        local_134 = *(int *)(DAT_01d507fc + 0x20);
        if (local_134 == 0) goto LAB_0107168c;
        local_144 = &local_190;
        uStack_130 = *(undefined4 *)(DAT_01d507fc + 0x24);
        uStack_12c = *(undefined4 *)(DAT_01d507fc + 0x28);
        local_150 = (undefined4 *)(DAT_01d507fc + 0x1c);
        local_138 = (undefined4 ****)*local_150;
        local_148 = &local_138;
        local_158 = &local_148;
        local_128 = 0;
        local_154 = (undefined **)&DAT_00000001;
        local_18c = &local_188;
        local_188 = &local_194;
        local_140 = (undefined4 *)&DAT_01d2ea4c;
        local_190 = &DAT_005b7931;
        local_184 = &LAB_014140ec;
        FUN_01aaaecc(DAT_01d507fc,&local_158);
        iVar5 = DAT_01d507fc;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_17c = *(undefined ***)(DAT_01d507fc + 0x14);
          local_178 = *(undefined4 **)(DAT_01d507fc + 0x18);
          local_180 = (undefined4 *****)&DAT_00000005;
          DataMemoryBarrier(0xb);
          puVar14 = DAT_01d4edc8;
          pcVar3 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar14 = &DAT_01cfc5e0;
            pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar6 = (*(code *)puVar14[3])(pcVar3,&local_180);
          if (iVar6 != 0) {
            pppppuStack_228 = local_180;
            ppuStack_224 = local_17c;
            puStack_220 = local_178;
            FUN_01aaa328(iVar5,pcVar3,puVar14[4],&pppppuStack_228,&local_158);
          }
        }
        goto LAB_01071148;
      }
    }
    iVar5 = DAT_01d507fc;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_154 = *(undefined ***)(DAT_01d507fc + 0x14);
      local_150 = *(undefined4 **)(DAT_01d507fc + 0x18);
      local_158 = (undefined4 *****)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar14 = DAT_01d4edc8;
      pcVar3 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar14 = &DAT_01cfc5e0;
        pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar6 = (*(code *)puVar14[3])(pcVar3,&local_158);
      if (iVar6 != 0) {
        local_140 = (undefined4 *)(DAT_01d507fc + 0x1c);
        local_138 = (undefined4 ****)*local_140;
        local_134 = *(int *)(DAT_01d507fc + 0x20);
        if (local_134 == 0) {
LAB_0107168c:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1d85c);
        }
        local_17c = &local_190;
        uStack_130 = *(undefined4 *)(DAT_01d507fc + 0x24);
        uStack_12c = *(undefined4 *)(DAT_01d507fc + 0x28);
        local_180 = &local_138;
        local_148 = &local_180;
        local_128 = 0;
        local_144 = (undefined **)&DAT_00000001;
        local_18c = &local_188;
        local_188 = &local_194;
        local_178 = (undefined4 *)&DAT_01d2ea4c;
        local_190 = &DAT_005b7931;
        local_184 = &LAB_014140ec;
        pppppuStack_228 = local_158;
        ppuStack_224 = local_154;
        puStack_220 = local_150;
        FUN_01aaa328(iVar5,pcVar3,puVar14[4],&pppppuStack_228,&local_148);
      }
    }
  }
LAB_01071148:
  local_244 = *(undefined1 **)(param_2 + 1);
  uVar23 = *param_2;
LAB_01071160:
  local_248 = (undefined4)uVar23;
  FUN_01bed4e2(&pppppuStack_228,param_3,0x90);
  piVar19 = *(int **)((int)param_2 + 0x1c);
  piVar9 = piVar19 + 0x26;
  do {
    bVar22 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar22);
  *piVar9 = *piVar9 + 1;
  do {
    iVar5 = *piVar19;
    bVar22 = (bool)hasExclusiveAccess(piVar19);
  } while (!bVar22);
  *piVar19 = iVar5 + 1;
  if (-1 < iVar5) {
    piVar9 = *(int **)(param_2 + 4);
    do {
      iVar5 = *piVar9;
      bVar22 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar22);
    *piVar9 = iVar5 + 1;
    if (-1 < iVar5) {
      piVar21 = *(int **)((int)param_2 + 0x24);
      piVar18 = piVar21 + 0x26;
      do {
        bVar22 = (bool)hasExclusiveAccess(piVar18);
      } while (!bVar22);
      *piVar18 = *piVar18 + 1;
      do {
        iVar5 = *piVar21;
        bVar22 = (bool)hasExclusiveAccess(piVar21);
      } while (!bVar22);
      *piVar21 = iVar5 + 1;
      if (-1 < iVar5) {
        piVar18 = *(int **)(param_2 + 5);
        uVar13 = *(undefined4 *)((int)param_2 + 0x2c);
        do {
          iVar5 = *piVar18;
          bVar22 = (bool)hasExclusiveAccess(piVar18);
        } while (!bVar22);
        *piVar18 = iVar5 + 1;
        if (-1 < iVar5) {
          piVar20 = piVar18 + 0x29;
          do {
            bVar22 = (bool)hasExclusiveAccess(piVar20);
          } while (!bVar22);
          *piVar20 = *piVar20 + 1;
          piVar20 = *(int **)(param_2 + 6);
          do {
            iVar5 = *piVar20;
            bVar22 = (bool)hasExclusiveAccess(piVar20);
          } while (!bVar22);
          *piVar20 = iVar5 + 1;
          if (-1 < iVar5) {
            piVar15 = *(int **)((int)param_2 + 0x34);
            piVar17 = piVar15 + 0x26;
            do {
              bVar22 = (bool)hasExclusiveAccess(piVar17);
            } while (!bVar22);
            *piVar17 = *piVar17 + 1;
            do {
              iVar5 = *piVar15;
              bVar22 = (bool)hasExclusiveAccess(piVar15);
            } while (!bVar22);
            *piVar15 = iVar5 + 1;
            if (-1 < iVar5) {
              piVar17 = *(int **)(param_2 + 7);
              do {
                iVar5 = *piVar17;
                bVar22 = (bool)hasExclusiveAccess(piVar17);
              } while (!bVar22);
              *piVar17 = iVar5 + 1;
              if (-1 < iVar5) {
                local_180 = *(undefined4 ******)((int)param_2 + 0x1c);
                local_17c = *(undefined ***)(param_2 + 4);
                local_178 = *(undefined4 **)((int)param_2 + 0x24);
                uStack_174 = (undefined4)param_2[5];
                local_170 = *(undefined4 *)((int)param_2 + 0x2c);
                uStack_16c = (undefined4)param_2[6];
                uStack_168 = *(undefined4 *)((int)param_2 + 0x34);
                uStack_164 = (undefined4)param_2[7];
                uStack_160 = *(undefined4 *)((int)param_2 + 0x3c);
                *(int **)((int)param_2 + 0x1c) = piVar19;
                *(int **)(param_2 + 4) = piVar9;
                *(int **)((int)param_2 + 0x24) = piVar21;
                *(int **)(param_2 + 5) = piVar18;
                *(undefined4 *)((int)param_2 + 0x2c) = uVar13;
                *(int **)(param_2 + 6) = piVar20;
                *(int **)((int)param_2 + 0x34) = piVar15;
                *(int **)(param_2 + 7) = piVar17;
                FUN_00ec9a00(&local_158,param_3);
                piVar9 = *(int **)(param_2 + 8);
                do {
                  iVar5 = *piVar9;
                  bVar22 = (bool)hasExclusiveAccess(piVar9);
                } while (!bVar22);
                *piVar9 = iVar5 + 1;
                if (-1 < iVar5) {
                  if ((int)param_2[2] == -0x80000000) {
                    local_148 = (undefined4 *****)&DAT_80000000;
                  }
                  else {
                    FUN_006666fc(&local_148,*(undefined4 *)((int)param_2 + 0x14),(int)param_2[3]);
                  }
                  pppppuStack_90 = local_148;
                  ppuStack_8c = local_144;
                  puStack_88 = local_140;
                  pppppuStack_84 = local_158;
                  ppuStack_80 = local_154;
                  puStack_7c = local_150;
                  FUN_01bed4e2(&local_138,param_3,0x90);
                  local_78 = local_180;
                  ppuStack_74 = local_17c;
                  puStack_70 = local_178;
                  uStack_6c = uStack_174;
                  local_68 = local_170;
                  uStack_64 = uStack_16c;
                  uStack_60 = uStack_168;
                  uStack_5c = uStack_164;
                  uStack_58 = uStack_160;
                  local_44 = 0;
                  local_54 = piVar9;
                  iVar5 = thunk_FUN_01be5118(0x110);
                  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0066439c(8,0x110);
                  }
                  FUN_01bed4e2(iVar5,&local_138,0x110);
                  if (local_244 == &DAT_3b9aca00) {
                    local_134 = 0;
                    local_138 = (undefined4 ****)0x2;
                  }
                  else {
                    FUN_019e6e74(&local_138,&DAT_01d1f1d8,local_248,(int)(uVar23 >> 0x20),local_244,
                                 &DAT_01d1f1d8);
                  }
                  *(int *)(param_1 + 0x50) = iVar5;
                  *(undefined **)(param_1 + 0x54) = &DAT_01c18738;
                  FUN_01bed4e2(param_1,&local_138,0x50);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x10716c0);
  (*pcVar1)();
  while( true ) {
    pbVar16 = pbVar16 + 1;
    uVar8 = uVar8 - 1;
    uVar23 = (uVar23 & 0xffffffff) * 10 + CONCAT44((int)(uVar23 >> 0x20) * 10,bVar2 - 0x30);
    if (uVar8 == 0) break;
LAB_010714b4:
    bVar2 = *pbVar16;
    if (9 < bVar2 - 0x30) goto LAB_01070e5c;
  }
LAB_01071510:
  uVar13 = (undefined4)(uVar23 >> 0x20);
  iVar6 = (int)uVar23;
  bVar2 = pbVar10[uVar12];
  if (bVar2 < 0x6d) {
    if (bVar2 == 0x48) {
      uVar23 = uVar23 * 0xe10;
    }
    else if (bVar2 == 0x4d) {
      uVar23 = uVar23 * 0x3c;
    }
    else if (bVar2 != 0x53) goto LAB_01070e5c;
  }
  else {
    if (bVar2 == 0x6d) {
      uVar23 = FUN_01bf0ff0(iVar6,uVar13,1000,0);
      iVar5 = (int)uVar23 * -1000;
      iVar11 = 1000000;
    }
    else {
      if (bVar2 == 0x6e) {
        uVar23 = FUN_01bf0ff0(iVar6,uVar13,&DAT_3b9aca00,0);
        local_244 = (undefined1 *)(iVar6 + (int)uVar23 * -1000000000);
        goto LAB_01071608;
      }
      if (bVar2 != 0x75) goto LAB_01070e5c;
      uVar23 = FUN_01bf0ff0(iVar6,uVar13,1000000,0);
      iVar5 = (int)uVar23 * -1000000;
      iVar11 = 1000;
    }
    local_244 = (undefined1 *)((iVar6 + iVar5) * iVar11);
  }
LAB_01071608:
  uVar8 = (uint)(uVar23 >> 0x20);
  puVar7 = *(undefined1 **)(param_2 + 1);
  if (puVar7 != &DAT_3b9aca00) {
    bVar22 = *(uint *)((int)param_2 + 4) <= uVar8 &&
             (uint)((uint)uVar23 <= (uint)*param_2) <= *(uint *)((int)param_2 + 4) - uVar8;
    if (uVar23 == *param_2) {
      bVar22 = puVar7 < local_244;
    }
    if (bVar22) {
      local_244 = puVar7;
      uVar23 = *param_2;
    }
  }
  goto LAB_01071160;
}

