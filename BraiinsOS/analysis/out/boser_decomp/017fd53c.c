// FUN_017fd53c @ 017fd53c size=5140 calls_out=25 calls_in=2
// strings: hyper::proto::h2 | InvalidParamSegmentInvalidParamInvalidCatchAll | hyper::proto::h2 | InvalidParamSegmentInvalidParamInvalidCatchAll | hyper::proto::h2 | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_017fd53c(int *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 *******pppppppuVar3;
  undefined4 *puVar4;
  undefined4 ******ppppppuVar5;
  undefined4 *******pppppppuVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  uint uVar14;
  undefined4 ******ppppppuVar15;
  undefined4 ******ppppppuVar16;
  int *piVar17;
  undefined8 uVar18;
  undefined4 local_128;
  undefined4 *******local_124;
  undefined4 *******local_120;
  undefined4 *******pppppppuStack_11c;
  undefined4 uStack_118;
  undefined4 *******local_10c;
  undefined4 *******local_108;
  undefined4 *******local_104;
  undefined4 *******local_100;
  undefined4 *******local_f8;
  undefined4 *******local_f4;
  undefined4 *******local_f0;
  undefined4 local_ec;
  undefined1 local_e1;
  undefined4 *******local_e0;
  undefined4 *******local_dc;
  undefined4 *local_d8;
  undefined4 *******local_d4;
  undefined4 *******local_d0;
  undefined4 ******local_cc;
  undefined4 *******local_c8;
  undefined4 *******local_c4;
  undefined4 *******local_c0;
  undefined4 *******local_bc;
  undefined4 *******local_b8;
  undefined4 *local_b4;
  undefined4 *******local_b0;
  undefined4 *******local_ac;
  undefined4 *******local_a8;
  code *local_a4;
  undefined4 *******local_a0;
  undefined4 *******local_9c;
  undefined4 *local_98;
  undefined4 *******local_88;
  undefined4 *******local_84;
  undefined4 *******local_80;
  undefined4 *******local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 *******local_6c;
  undefined4 *******local_68;
  undefined4 *******local_64;
  undefined4 *******local_60;
  undefined4 local_58;
  undefined4 *******local_54;
  undefined4 *******local_50;
  undefined4 *******local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 *******local_40;
  undefined4 *******local_3c;
  undefined4 *******local_38;
  undefined4 *******local_30;
  undefined4 *******local_2c;
  undefined4 *******local_28;
  
  piVar17 = (int *)*param_1;
  if (piVar17 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("Map must not be polled after it returned `Poll::Ready`",0x36,&DAT_01d2da7c);
  }
  if ((char)piVar17[8] == '\0') {
    puVar4 = (undefined4 *)((uint)&local_a0 | 4);
    do {
      pppppppuVar6 = (undefined4 *******)&local_58;
      FUN_017ab074(piVar17,1);
      FUN_01933ff0(pppppppuVar6,*piVar17 + 8);
      pppppppuVar3 = local_54;
      if (local_58 == (undefined4 *******)&DAT_00000001) {
        local_84 = (undefined4 *******)CONCAT31(local_84._1_3_,local_50._0_1_);
        local_88 = local_54;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_88,&DAT_01d1d434,&DAT_01d1d0b4);
      }
      uVar11 = (uint)local_50 & 0xff;
      ppppppuVar15 = local_54[0x51];
      iVar7 = FUN_0139f0d0(local_54[99],local_54[100],piVar17[1],piVar17[2]);
      uVar14 = *(uint *)(iVar7 + 0x3c);
      ppppppuVar16 = *(undefined4 *******)(iVar7 + 0xd8);
      FUN_00a97e8c(pppppppuVar3,uVar11);
      ppppppuVar5 = (undefined4 ******)(uVar14 & ~((int)uVar14 >> 0x1f));
      if (ppppppuVar15 < ppppppuVar5) {
        ppppppuVar5 = ppppppuVar15;
      }
      if (ppppppuVar16 < ppppppuVar5) {
        FUN_017aac74(&local_88,piVar17,*param_2);
        pppppppuVar3 = local_84;
        if (((uint)local_88 & 0xff) != 6) {
          if (((uint)local_88 & 0xff) != 5) {
            local_58 = local_88;
            local_54 = local_84;
            local_50 = local_80;
            local_4c = local_7c;
            local_48 = local_78;
            uStack_44 = uStack_74;
            goto LAB_017fdf28;
          }
          local_10c = local_84;
          if ((DAT_01d50f88 < 2) &&
             (((DAT_01d4f79c - 1 < 2 ||
               ((DAT_01d4f79c != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4f794), cVar2 != '\0')))) &&
              (iVar7 = FUN_01aaa278(DAT_01d4f794), iVar7 != 0)))) {
            if (*(int *)(DAT_01d4f794 + 0x20) == 0) {
LAB_017fe9ac:
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d1d484);
            }
            local_84 = &local_30;
            local_50 = *(undefined4 ********)(DAT_01d4f794 + 0x24);
            local_4c = *(undefined4 ********)(DAT_01d4f794 + 0x28);
            local_b0 = &local_88;
            local_48 = 0;
            local_ac = (undefined4 *******)&DAT_00000001;
            local_30 = (undefined4 *******)&DAT_00575dd2;
            local_80 = (undefined4 *******)&DAT_01d2ea4c;
            local_2c = &local_f8;
            local_f8 = &local_10c;
            local_f4 = (undefined4 *******)FUN_013b240c;
            local_a8 = (undefined4 *******)(DAT_01d4f794 + 0x1c);
            local_88 = pppppppuVar6;
            local_58 = *(undefined4 ********)(DAT_01d4f794 + 0x1c);
            local_54 = (undefined4 *******)*(int *)(DAT_01d4f794 + 0x20);
            FUN_017fb524(&local_b0);
          }
          else {
            iVar7 = DAT_01d4f794;
            if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
              local_104 = *(undefined4 ********)(DAT_01d4f794 + 0x14);
              local_100 = *(undefined4 ********)(DAT_01d4f794 + 0x18);
              local_108 = (undefined4 *******)&SUB_00000004;
              DataMemoryBarrier(0xb);
              puVar4 = &DAT_01cfc5e0;
              if (DAT_01d51174 == 2) {
                puVar4 = DAT_01d4edc8;
              }
              pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              if (DAT_01d51174 == 2) {
                pcVar9 = DAT_01d4edc4;
              }
              iVar8 = (*(code *)puVar4[3])(pcVar9,&local_108);
              if (iVar8 != 0) {
                local_f0 = (undefined4 *******)(DAT_01d4f794 + 0x1c);
                if (*(int *)(DAT_01d4f794 + 0x20) == 0) goto LAB_017fe9ac;
                local_ac = &local_40;
                local_50 = *(undefined4 ********)(DAT_01d4f794 + 0x24);
                local_4c = *(undefined4 ********)(DAT_01d4f794 + 0x28);
                local_b0 = (undefined4 *******)&local_58;
                local_f8 = &local_b0;
                local_48 = 0;
                local_f4 = (undefined4 *******)&DAT_00000001;
                local_40 = (undefined4 *******)&DAT_00575dd2;
                local_a8 = (undefined4 *******)&DAT_01d2ea4c;
                local_3c = &local_30;
                local_30 = &local_10c;
                local_2c = (undefined4 *******)FUN_013b240c;
                local_88 = local_108;
                local_84 = local_104;
                local_80 = local_100;
                local_58 = (undefined4 *******)*local_f0;
                local_54 = (undefined4 *******)*(int *)(DAT_01d4f794 + 0x20);
                FUN_01aaa328(iVar7,pcVar9,puVar4[4],&local_88,&local_f8);
              }
            }
          }
          local_54 = pppppppuVar3;
          local_58 = (undefined4 *******)CONCAT31(local_58._1_3_,2);
          pppppppuVar3 = (undefined4 *******)FUN_017c47c0(&local_58);
          goto LAB_017fdf34;
        }
      }
      else {
        do {
          FUN_017aaec0(pppppppuVar6,piVar17,*param_2);
          uVar11 = (uint)local_58 & 0xff;
          if (uVar11 == 7) {
            return 1;
          }
          if (uVar11 != 5) {
            if (uVar11 != 6) {
              pppppppuVar6 = (undefined4 *******)&local_128;
              local_124 = local_54;
              local_128 = (undefined4 *******)
                          CONCAT13(*(undefined1 *)((undefined2 *)((uint)&local_58 | 1) + 1),
                                   CONCAT21(*(undefined2 *)((uint)&local_58 | 1),
                                            (undefined1)local_58));
              local_120 = local_50;
              pppppppuStack_11c = local_4c;
              uStack_118 = local_48;
              goto LAB_017fdf28;
            }
            pppppppuVar3 = (undefined4 *******)FUN_0143b8e8(9);
            FUN_0143baec(pppppppuVar3,"send stream capacity unexpectedly closed",0x28);
            goto LAB_017fdf30;
          }
        } while (local_54 == (undefined4 *******)0x0);
      }
      FUN_017ea748(&local_88,piVar17 + 4,param_2);
      if (local_88 == (undefined4 *******)0x2) {
        return 1;
      }
      if (((uint)local_88 & 1) == 0) {
        FUN_017ab074(piVar17,0);
        if (piVar17[4] == 0) {
          iVar7 = (**(code **)(piVar17[6] + 0x14))(piVar17[5]);
          if (iVar7 != 0) goto LAB_017fd58c;
        }
        else if (piVar17[6] == 0) goto LAB_017fd58c;
        *(undefined1 *)(piVar17 + 8) = 1;
        break;
      }
      if (local_84 == (undefined4 *******)0x0) {
        local_d4 = (undefined4 *******)FUN_017c472c(local_80);
        if (((DAT_01d50f88 < 2) &&
            ((DAT_01d4f1d8 - 1 < 2 ||
             ((DAT_01d4f1d8 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4f1d0), cVar2 != '\0')))))) &&
           (iVar7 = FUN_01aaa278(DAT_01d4f1d0), iVar7 != 0)) {
          if (*(undefined4 ********)(DAT_01d4f1d0 + 0x20) == (undefined4 *******)0x0) {
LAB_017fe988:
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d1b854);
          }
          local_2c = &local_e0;
          local_50 = *(undefined4 ********)(DAT_01d4f1d0 + 0x24);
          local_4c = *(undefined4 ********)(DAT_01d4f1d0 + 0x28);
          local_38 = (undefined4 *******)(DAT_01d4f1d0 + 0x1c);
          local_58 = (undefined4 *******)*local_38;
          local_30 = (undefined4 *******)&local_58;
          local_40 = &local_30;
          local_48 = 0;
          local_3c = (undefined4 *******)&DAT_00000001;
          local_e0 = (undefined4 *******)&DAT_005791ab;
          local_28 = (undefined4 *******)&DAT_01d2ea4c;
          local_dc = &local_bc;
          local_bc = &local_d4;
          local_b8 = (undefined4 *******)FUN_0143b580;
          local_54 = *(undefined4 ********)(DAT_01d4f1d0 + 0x20);
          FUN_01aaaecc(DAT_01d4f1d0,&local_40);
          iVar7 = DAT_01d4f1d0;
          if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
            local_f4 = *(undefined4 ********)(DAT_01d4f1d0 + 0x14);
            local_f0 = *(undefined4 ********)(DAT_01d4f1d0 + 0x18);
            local_f8 = (undefined4 *******)&SUB_00000004;
            DataMemoryBarrier(0xb);
            pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            if (DAT_01d51174 == 2) {
              pcVar9 = DAT_01d4edc4;
            }
            puVar4 = &DAT_01cfc5e0;
            if (DAT_01d51174 == 2) {
              puVar4 = DAT_01d4edc8;
            }
            iVar8 = (*(code *)puVar4[3])(pcVar9,&local_f8);
            if (iVar8 != 0) {
              local_b0 = local_f8;
              local_ac = local_f4;
              local_a8 = local_f0;
              FUN_01aaa328(iVar7,pcVar9,puVar4[4],&local_b0,&local_40);
            }
          }
        }
        else {
          iVar7 = DAT_01d4f1d0;
          if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
            local_3c = *(undefined4 ********)(DAT_01d4f1d0 + 0x14);
            local_38 = *(undefined4 ********)(DAT_01d4f1d0 + 0x18);
            local_40 = (undefined4 *******)&SUB_00000004;
            DataMemoryBarrier(0xb);
            pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            if (DAT_01d51174 == 2) {
              pcVar9 = DAT_01d4edc4;
            }
            puVar4 = &DAT_01cfc5e0;
            if (DAT_01d51174 == 2) {
              puVar4 = DAT_01d4edc8;
            }
            iVar8 = (*(code *)puVar4[3])(pcVar9,&local_40);
            if (iVar8 != 0) {
              if (*(undefined4 ********)(DAT_01d4f1d0 + 0x20) == (undefined4 *******)0x0)
              goto LAB_017fe988;
              local_50 = *(undefined4 ********)(DAT_01d4f1d0 + 0x24);
              local_4c = *(undefined4 ********)(DAT_01d4f1d0 + 0x28);
              local_f4 = &local_e0;
              local_f8 = (undefined4 *******)&local_58;
              local_30 = &local_f8;
              local_48 = 0;
              local_2c = (undefined4 *******)&DAT_00000001;
              local_e0 = (undefined4 *******)&DAT_005791ab;
              local_f0 = (undefined4 *******)&DAT_01d2ea4c;
              local_dc = &local_bc;
              local_bc = &local_d4;
              local_b8 = (undefined4 *******)FUN_0143b580;
              local_b0 = local_40;
              local_ac = local_3c;
              local_a8 = local_38;
              local_58 = *(undefined4 ********)(DAT_01d4f1d0 + 0x1c);
              local_54 = *(undefined4 ********)(DAT_01d4f1d0 + 0x20);
              local_28 = (undefined4 *******)(DAT_01d4f1d0 + 0x1c);
              FUN_01aaa328(iVar7,pcVar9,puVar4[4],&local_b0,&local_30);
            }
          }
        }
        uVar10 = 2;
        if (*local_d4 == (undefined4 ******)0x0) goto LAB_017fe67c;
        uVar18 = CONCAT44(local_d4[1],*local_d4);
        goto LAB_017fe5f8;
      }
      local_f4 = local_80;
      pppppppuVar3 = local_7c;
      local_f0 = local_7c;
      local_ec = local_78;
      local_f8 = local_84;
      if (piVar17[4] == 0) {
        uVar11 = (**(code **)(piVar17[6] + 0x14))(piVar17[5]);
      }
      else {
        uVar11 = (uint)(piVar17[6] == 0);
      }
      local_e1 = (undefined1)uVar11;
      if (((DAT_01d50f88 == 0) &&
          ((DAT_01d4f7a8 - 1 < 2 ||
           ((DAT_01d4f7a8 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4f7a0), cVar2 != '\0')))))) &&
         (iVar7 = FUN_01aaa278(DAT_01d4f7a0), iVar7 != 0)) {
        if (*(undefined4 ********)(DAT_01d4f7a0 + 0x20) == (undefined4 *******)0x0) {
LAB_017fe948:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d1d494);
        }
        local_b8 = &local_d4;
        local_bc = (undefined4 *******)&local_58;
        local_e0 = &local_bc;
        local_d8 = (undefined4 *)(DAT_01d4f7a0 + 0x1c);
        local_58 = (undefined4 *******)*local_d8;
        local_50 = *(undefined4 ********)(DAT_01d4f7a0 + 0x24);
        local_4c = *(undefined4 ********)(DAT_01d4f7a0 + 0x28);
        local_48 = 0;
        local_dc = (undefined4 *******)&DAT_00000001;
        local_b4 = (undefined4 *)&DAT_01d2ea4c;
        local_d0 = &local_b0;
        local_d4 = (undefined4 *******)&DAT_0057c700;
        local_a4 = FUN_012fbb44;
        local_a8 = (undefined4 *******)&local_e1;
        local_ac = (undefined4 *******)FUN_012fd02c;
        local_b0 = &local_cc;
        local_54 = *(undefined4 ********)(DAT_01d4f7a0 + 0x20);
        FUN_01aaaecc(DAT_01d4f7a0,&local_e0);
        iVar7 = DAT_01d4f7a0;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_3c = *(undefined4 ********)(DAT_01d4f7a0 + 0x14);
          local_38 = *(undefined4 ********)(DAT_01d4f7a0 + 0x18);
          local_40 = (undefined4 *******)&DAT_00000005;
          DataMemoryBarrier(0xb);
          pcVar9 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          puVar12 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar12 = &DAT_01cfc5e0;
          }
          iVar8 = (*(code *)puVar12[3])(pcVar9,&local_40);
          if (iVar8 != 0) {
            local_30 = local_40;
            local_2c = local_3c;
            local_28 = local_38;
            FUN_01aaa328(iVar7,pcVar9,puVar12[4],&local_30,&local_e0);
          }
        }
      }
      else {
        iVar7 = DAT_01d4f7a0;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_c4 = *(undefined4 ********)(DAT_01d4f7a0 + 0x14);
          local_c0 = *(undefined4 ********)(DAT_01d4f7a0 + 0x18);
          local_c8 = (undefined4 *******)&DAT_00000005;
          DataMemoryBarrier(0xb);
          pcVar9 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          puVar12 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar12 = &DAT_01cfc5e0;
          }
          iVar8 = (*(code *)puVar12[3])(pcVar9,&local_c8);
          if (iVar8 != 0) {
            if (*(undefined4 ********)(DAT_01d4f7a0 + 0x20) == (undefined4 *******)0x0)
            goto LAB_017fe948;
            local_3c = &local_e0;
            local_40 = (undefined4 *******)&local_58;
            local_bc = &local_40;
            local_4c = *(undefined4 ********)(DAT_01d4f7a0 + 0x28);
            local_48 = 0;
            local_50 = *(undefined4 ********)(DAT_01d4f7a0 + 0x24);
            local_b8 = (undefined4 *******)&DAT_00000001;
            local_38 = (undefined4 *******)&DAT_01d2ea4c;
            local_dc = &local_b0;
            local_e0 = (undefined4 *******)&DAT_0057c700;
            local_a4 = FUN_012fbb44;
            local_a8 = (undefined4 *******)&local_e1;
            local_ac = (undefined4 *******)FUN_012fd02c;
            local_b0 = &local_d4;
            local_30 = local_c8;
            local_2c = local_c4;
            local_28 = local_c0;
            local_d4 = pppppppuVar3;
            local_b4 = (undefined4 *)(DAT_01d4f7a0 + 0x1c);
            local_58 = *(undefined4 ********)(DAT_01d4f7a0 + 0x1c);
            local_54 = *(undefined4 ********)(DAT_01d4f7a0 + 0x20);
            FUN_01aaa328(iVar7,pcVar9,puVar12[4],&local_30,&local_bc);
          }
        }
      }
      *puVar4 = local_f8;
      puVar4[1] = local_f4;
      puVar4[2] = local_f0;
      puVar4[3] = local_ec;
      local_a0 = (undefined4 *******)0x0;
      cVar2 = FUN_017f65ac(piVar17,&local_a0,uVar11);
      if (cVar2 != '\f') {
        local_58 = (undefined4 *******)((uint)CONCAT21(local_58._2_2_,cVar2) << 8);
        uVar1 = 3;
        goto LAB_017fdf20;
      }
      if (uVar11 != 0) {
        pppppppuVar3 = (undefined4 *******)0x0;
        goto LAB_017fdf30;
      }
    } while ((char)piVar17[8] == '\0');
  }
  FUN_017aac74(&local_88,piVar17,*param_2);
  pppppppuVar3 = local_84;
  if (((uint)local_88 & 0xff) == 5) {
    local_6c = local_84;
    if ((DAT_01d50f88 < 2) &&
       (((DAT_01d4f7b4 - 1 < 2 ||
         ((DAT_01d4f7b4 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4f7ac), cVar2 != '\0')))) &&
        (iVar7 = FUN_01aaa278(DAT_01d4f7ac), iVar7 != 0)))) {
      if (*(int *)(DAT_01d4f7ac + 0x20) == 0) {
LAB_017fe96c:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d1d4a4);
      }
      local_f4 = &local_bc;
      local_50 = *(undefined4 ********)(DAT_01d4f7ac + 0x24);
      local_4c = *(undefined4 ********)(DAT_01d4f7ac + 0x28);
      local_28 = (undefined4 *******)(DAT_01d4f7ac + 0x1c);
      local_58 = (undefined4 *******)*local_28;
      local_f8 = (undefined4 *******)&local_58;
      local_30 = &local_f8;
      local_48 = 0;
      pppppppuVar6 = &local_30;
      local_2c = (undefined4 *******)&DAT_00000001;
      local_b8 = &local_40;
      local_40 = &local_6c;
      local_f0 = (undefined4 *******)&DAT_01d2ea4c;
      local_bc = (undefined4 *******)&DAT_00575dd2;
      local_3c = (undefined4 *******)FUN_013b240c;
      local_54 = (undefined4 *******)*(int *)(DAT_01d4f7ac + 0x20);
      FUN_01aaaecc(DAT_01d4f7ac,pppppppuVar6);
      iVar7 = DAT_01d4f7ac;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_ac = *(undefined4 ********)(DAT_01d4f7ac + 0x14);
        local_a8 = *(undefined4 ********)(DAT_01d4f7ac + 0x18);
        local_b0 = (undefined4 *******)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar4 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar4 = &DAT_01cfc5e0;
        }
        pcVar9 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar8 = (*(code *)puVar4[3])(pcVar9,&local_b0);
        if (iVar8 != 0) {
          local_88 = local_b0;
          local_84 = local_ac;
          local_80 = local_a8;
          uVar10 = puVar4[4];
          goto LAB_017fdf10;
        }
      }
    }
    else {
      iVar7 = DAT_01d4f7ac;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_64 = *(undefined4 ********)(DAT_01d4f7ac + 0x14);
        local_60 = *(undefined4 ********)(DAT_01d4f7ac + 0x18);
        local_68 = (undefined4 *******)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar4 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar4 = &DAT_01cfc5e0;
        }
        pcVar9 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar8 = (*(code *)puVar4[3])(pcVar9,&local_68);
        if (iVar8 != 0) {
          local_f0 = (undefined4 *******)(DAT_01d4f7ac + 0x1c);
          if (*(int *)(DAT_01d4f7ac + 0x20) == 0) goto LAB_017fe96c;
          local_b0 = (undefined4 *******)&local_58;
          local_50 = *(undefined4 ********)(DAT_01d4f7ac + 0x24);
          local_4c = *(undefined4 ********)(DAT_01d4f7ac + 0x28);
          local_ac = &local_40;
          local_f8 = &local_b0;
          local_f4 = (undefined4 *******)&DAT_00000001;
          local_3c = &local_30;
          local_48 = 0;
          local_a8 = (undefined4 *******)&DAT_01d2ea4c;
          local_40 = (undefined4 *******)&DAT_00575dd2;
          local_2c = (undefined4 *******)FUN_013b240c;
          local_30 = &local_6c;
          local_88 = local_68;
          local_84 = local_64;
          local_80 = local_60;
          pppppppuVar6 = &local_f8;
          uVar10 = puVar4[4];
          local_58 = (undefined4 *******)*local_f0;
          local_54 = (undefined4 *******)*(int *)(DAT_01d4f7ac + 0x20);
LAB_017fdf10:
          FUN_01aaa328(iVar7,pcVar9,uVar10,&local_88,pppppppuVar6);
        }
      }
    }
    local_54 = pppppppuVar3;
    uVar1 = 2;
LAB_017fdf20:
    local_58 = (undefined4 *******)CONCAT31(local_58._1_3_,uVar1);
    pppppppuVar6 = (undefined4 *******)&local_58;
LAB_017fdf28:
    pppppppuVar3 = (undefined4 *******)FUN_017c47c0(pppppppuVar6);
  }
  else {
    if (((uint)local_88 & 0xff) != 6) {
      pppppppuVar6 = (undefined4 *******)&local_58;
      local_58 = local_88;
      local_54 = local_84;
      local_50 = local_80;
      local_4c = local_7c;
      local_48 = local_78;
      uStack_44 = uStack_74;
      goto LAB_017fdf28;
    }
LAB_017fd58c:
    pppppppuVar3 = (undefined4 *******)FUN_0179b178(piVar17);
  }
LAB_017fdf30:
  goto LAB_017fdf34;
  while (uVar18 = (**(code **)(iVar7 + 0x18))(pbVar13), (int)uVar18 != 0) {
LAB_017fe5f8:
    iVar7 = (int)((ulonglong)uVar18 >> 0x20);
    pbVar13 = (byte *)uVar18;
    (**(code **)(iVar7 + 0x1c))(&local_58,pbVar13);
    if ((local_58 == (undefined4 *******)0x599eda3 && local_50 == (undefined4 *******)0x49fd4a39) &&
        (local_54 == (undefined4 *******)0x576e8a6c && local_4c == (undefined4 *******)0x6a3336e3))
    {
      uVar10 = 2;
      if (*pbVar13 < 3) {
        uVar10 = *(undefined4 *)(pbVar13 + *(int *)(&DAT_005382f0 + (uint)*pbVar13 * 4));
      }
      goto LAB_017fe67c;
    }
  }
  uVar10 = 2;
LAB_017fe67c:
  FUN_017f6404(piVar17,uVar10);
  pppppppuVar3 = local_d4;
LAB_017fdf34:
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2da6c);
  }
  FUN_017c305c();
  *param_1 = 0;
  if (pppppppuVar3 == (undefined4 *******)0x0) goto LAB_017fe234;
  local_30 = pppppppuVar3;
  if ((DAT_01d50f88 < 2) &&
     ((DAT_01d4f970 - 1 < 2 ||
      ((DAT_01d4f970 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4f968), cVar2 != '\0')))))) {
    iVar7 = FUN_01aaa278(DAT_01d4f968);
    if (iVar7 == 0) goto LAB_017fe0e8;
    if (*(undefined4 ********)(DAT_01d4f968 + 0x20) == (undefined4 *******)0x0) goto LAB_017fe928;
    local_9c = &local_f8;
    local_50 = *(undefined4 ********)(DAT_01d4f968 + 0x24);
    local_4c = *(undefined4 ********)(DAT_01d4f968 + 0x28);
    local_120 = (undefined4 *******)(DAT_01d4f968 + 0x1c);
    local_58 = (undefined4 *******)*local_120;
    local_a0 = (undefined4 *******)&local_58;
    local_128 = &local_a0;
    local_48 = 0;
    local_124 = (undefined4 *******)&DAT_00000001;
    local_f4 = &local_b0;
    local_b0 = &local_30;
    local_98 = (undefined4 *)&DAT_01d2ea4c;
    local_f8 = (undefined4 *******)&DAT_0057871b;
    local_ac = (undefined4 *******)FUN_0143b580;
    local_54 = *(undefined4 ********)(DAT_01d4f968 + 0x20);
    FUN_01aaaecc(DAT_01d4f968,&local_128);
    iVar7 = DAT_01d4f968;
    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_84 = *(undefined4 ********)(DAT_01d4f968 + 0x14);
      local_80 = *(undefined4 ********)(DAT_01d4f968 + 0x18);
      local_88 = (undefined4 *******)&SUB_00000004;
      DataMemoryBarrier(0xb);
      puVar4 = DAT_01d4edc8;
      pcVar9 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar4 = &DAT_01cfc5e0;
        pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar8 = (*(code *)puVar4[3])(pcVar9,&local_88);
      if (iVar8 != 0) {
        FUN_01aaa328(iVar7,pcVar9,puVar4[4],&local_88,&local_128);
      }
    }
  }
  else {
LAB_017fe0e8:
    iVar7 = DAT_01d4f968;
    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_124 = *(undefined4 ********)(DAT_01d4f968 + 0x14);
      local_120 = *(undefined4 ********)(DAT_01d4f968 + 0x18);
      local_128 = (undefined4 *******)&SUB_00000004;
      DataMemoryBarrier(0xb);
      puVar4 = DAT_01d4edc8;
      pcVar9 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar4 = &DAT_01cfc5e0;
        pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar8 = (*(code *)puVar4[3])(pcVar9,&local_128);
      if (iVar8 != 0) {
        local_98 = (undefined4 *)(DAT_01d4f968 + 0x1c);
        if (*(undefined4 ********)(DAT_01d4f968 + 0x20) == (undefined4 *******)0x0) {
LAB_017fe928:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d1d990);
        }
        local_84 = &local_f8;
        local_50 = *(undefined4 ********)(DAT_01d4f968 + 0x24);
        local_4c = *(undefined4 ********)(DAT_01d4f968 + 0x28);
        local_88 = (undefined4 *******)&local_58;
        local_a0 = &local_88;
        local_9c = (undefined4 *******)&DAT_00000001;
        local_f4 = &local_b0;
        local_b0 = &local_30;
        local_48 = 0;
        local_80 = (undefined4 *******)&DAT_01d2ea4c;
        local_f8 = (undefined4 *******)&DAT_0057871b;
        local_ac = (undefined4 *******)FUN_0143b580;
        local_58 = (undefined4 *******)*local_98;
        local_54 = *(undefined4 ********)(DAT_01d4f968 + 0x20);
        FUN_01aaa328(iVar7,pcVar9,puVar4[4],&local_128,&local_a0);
      }
    }
  }
  FUN_018118a0(local_30);
LAB_017fe234:
  return 0;
}

