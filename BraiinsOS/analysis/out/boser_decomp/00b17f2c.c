// FUN_00b17f2c @ 00b17f2c size=2064 calls_out=16 calls_in=0
// strings: boser::web::grpc::chip_data_serviceopen/boser/boser/src/web/grpc/chip_data_service.rsevent open/boser/boser/src/web/grpc/chip_data_service.rs:80 | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::web::grpc::chip_data_serviceopen/boser/boser/src/web/grpc/chip_data_service.rsevent open/boser/boser/src/web/grpc/chip_data_service.rs:80 | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::web::grpc::chip_data_serviceopen/boser/boser/src/web/grpc/chip_data_service.rsevent open/boser/boser/src/web/grpc/chip_data_service.rs:80 | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00b17f2c(uint *param_1,uint *param_2,undefined4 param_3)

{
  byte bVar1;
  char cVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined4 ******ppppppuVar6;
  int *piVar7;
  int iVar8;
  undefined4 *******pppppppuVar9;
  undefined4 *******pppppppuVar10;
  uint *puVar11;
  uint *extraout_r1;
  undefined4 uVar12;
  undefined4 *******pppppppuVar13;
  uint uVar14;
  undefined4 ******ppppppuVar15;
  int iVar16;
  uint unaff_r7;
  undefined4 *puVar17;
  uint *puVar18;
  int iVar19;
  char *pcVar20;
  int *piVar21;
  bool bVar22;
  bool bVar23;
  undefined8 uVar24;
  undefined4 *******local_190;
  undefined4 *******local_18c;
  undefined4 *local_180;
  undefined **local_17c;
  undefined4 *******local_178;
  undefined4 *******local_174;
  uint local_170;
  undefined4 *******local_148;
  undefined **local_144;
  undefined4 *local_140;
  undefined4 local_13c;
  undefined4 local_138;
  uint local_e8;
  uint local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 *******local_d8;
  undefined **ppuStack_d4;
  undefined4 *local_d0;
  undefined4 *******pppppppuStack_cc;
  undefined **ppuStack_c8;
  undefined4 *puStack_c4;
  undefined4 uStack_c0;
  undefined4 *******local_80;
  undefined **ppuStack_7c;
  undefined4 *puStack_78;
  undefined4 uStack_74;
  uint local_70;
  uint local_6c;
  undefined4 *******local_68;
  undefined **local_64;
  undefined4 *local_60;
  undefined4 *******local_5c;
  undefined **local_58;
  undefined4 *local_54;
  undefined *local_50;
  uint **local_4c;
  uint *local_48;
  code *local_44;
  undefined4 *******local_40;
  undefined **local_3c;
  undefined4 *local_38;
  
  puVar3 = (uint *)((uint)&local_80 | 4);
  puVar18 = (uint *)((uint)&local_e8 | 4);
  puVar11 = param_2;
  do {
    while ((*param_2 & 1) == 0) {
      FUN_00a49d58(&local_e8,param_2 + 8,param_3);
      uVar14 = local_e8;
      if (local_e8 == 2) {
        uVar14 = 0;
        unaff_r7 = 4;
        goto LAB_00b18688;
      }
      if (local_e8 == 3) {
        *param_1 = 5;
        param_1[1] = 0;
        return;
      }
      FUN_00b19634(param_2);
      *param_2 = 1;
      param_2[1] = 0;
      param_2[2] = uVar14;
      uVar14 = puVar18[1];
      unaff_r7 = puVar18[2];
      param_2[3] = *puVar18;
      param_2[4] = uVar14;
      param_2[5] = unaff_r7;
      *(undefined1 *)(param_2 + 6) = 0;
      puVar11 = puVar18;
    }
    if ((char)param_2[6] != '\0') {
      if ((char)param_2[6] == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c11960);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c11960);
    }
    if (param_2[2] == 0) {
      piVar21 = (int *)param_2[3];
      FUN_01495f30(&local_148,puVar11,piVar21[10],piVar21[0xb],piVar21[0xc]);
      local_180 = local_140;
      local_17c = local_144;
      local_178 = local_148;
      ppppppuVar15 = (undefined4 ******)piVar21[0x10];
      uVar12 = 0;
      bVar23 = (undefined4 ******)0x7fffffe < ppppppuVar15;
      bVar22 = ppppppuVar15 == (undefined4 ******)0x7ffffff;
      if (ppppppuVar15 < (undefined4 ******)0x8000000) {
        unaff_r7 = (int)ppppppuVar15 << 5;
        bVar23 = 0x7ffffff7 < unaff_r7;
        bVar22 = unaff_r7 == 0x7ffffff8;
      }
      uVar14 = local_170;
      if (bVar23 && !bVar22) {
LAB_00b186c4:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar12,uVar14);
      }
      iVar4 = piVar21[0xf];
      if (unaff_r7 == 0) {
        local_170 = 8;
        local_148 = (undefined4 *******)0x0;
      }
      else {
        local_170 = FUN_01298504(unaff_r7,8);
        uVar12 = 8;
        uVar14 = unaff_r7;
        if (local_170 == 0) goto LAB_00b186c4;
        local_148 = (undefined4 *******)ppppppuVar15;
      }
      local_140 = (undefined4 *)0x0;
      ppppppuVar6 = (undefined4 ******)0x0;
      local_144 = (undefined **)local_170;
      if (ppppppuVar15 != (undefined4 ******)0x0) {
        iVar5 = 0;
        ppppppuVar6 = (undefined4 ******)0x0;
        pppppppuVar9 = local_18c;
        do {
          piVar7 = (int *)(iVar4 + iVar5);
          iVar19 = *piVar7;
          bVar1 = *(byte *)(piVar7 + 7);
          iVar16 = piVar7[6];
          uVar24 = *(undefined8 *)(piVar7 + 4);
          if (iVar19 == 2) {
            uVar12 = 0;
            pppppppuVar13 = *(undefined4 ********)(iVar4 + iVar5 + 0xc);
            pppppppuVar10 = pppppppuVar9;
            if ((int)pppppppuVar13 < 0) goto LAB_00b18724;
            uVar12 = *(undefined4 *)(iVar4 + iVar5 + 8);
            if (pppppppuVar13 == (undefined4 *******)0x0) {
              pppppppuVar9 = (undefined4 *******)&DAT_00000001;
              local_18c = (undefined4 *******)0x0;
            }
            else {
              pppppppuVar9 = (undefined4 *******)FUN_01298504(pppppppuVar13,1);
              if (pppppppuVar9 == (undefined4 *******)0x0) {
LAB_00b18720:
                uVar12 = 1;
                pppppppuVar10 = pppppppuVar13;
LAB_00b18724:
                    /* WARNING: Subroutine does not return */
                FUN_00664620(uVar12,pppppppuVar10);
              }
              local_18c = pppppppuVar13;
            }
            FUN_01bed4e2(pppppppuVar9,uVar12);
            local_40 = local_18c;
            local_174 = pppppppuVar9;
LAB_00b185ac:
            pppppppuVar10 = &local_5c;
          }
          else {
            iVar8 = iVar4 + iVar5;
            if (iVar19 == 1) {
              pppppppuVar13 = *(undefined4 ********)(iVar8 + 0xc);
              uVar12 = 0;
              pppppppuVar10 = local_190;
              if ((int)pppppppuVar13 < 0) goto LAB_00b18724;
              uVar12 = *(undefined4 *)(iVar8 + 8);
              if (pppppppuVar13 == (undefined4 *******)0x0) {
                local_174 = (undefined4 *******)&DAT_00000001;
                local_190 = (undefined4 *******)0x0;
              }
              else {
                local_174 = (undefined4 *******)FUN_01298504(pppppppuVar13,1);
                if (local_174 == (undefined4 *******)0x0) goto LAB_00b18720;
                local_190 = pppppppuVar13;
              }
              FUN_01bed4e2(local_174,uVar12);
              local_40 = local_190;
              local_190 = local_174;
              goto LAB_00b185ac;
            }
            pppppppuVar13 = *(undefined4 ********)(iVar8 + 4);
            pppppppuVar10 = &local_40;
          }
          *pppppppuVar10 = pppppppuVar13;
          piVar7 = (int *)(local_170 + iVar5);
          *piVar7 = iVar19;
          iVar5 = iVar5 + 0x20;
          piVar7[3] = (int)local_5c;
          piVar7[1] = (int)local_40;
          ppppppuVar6 = (undefined4 ******)((int)ppppppuVar6 + 1);
          piVar7[6] = iVar16;
          piVar7[7] = (uint)bVar1;
          *(undefined8 *)(piVar7 + 4) = uVar24;
          piVar7[2] = (int)local_174;
        } while (ppppppuVar15 != ppppppuVar6);
        ppppppuVar6 = ppppppuVar15;
        local_18c = pppppppuVar9;
      }
      *puVar3 = (uint)local_148;
      puVar3[1] = (uint)local_144;
      puVar3[2] = (uint)ppppppuVar6;
      local_148 = local_80;
      local_144 = ppuStack_7c;
      local_140 = puStack_78;
      local_13c = uStack_74;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar21;
        bVar22 = (bool)hasExclusiveAccess(piVar21);
      } while (!bVar22);
      *piVar21 = iVar4 + -1;
      uVar14 = 3;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a95ae4(piVar21);
        uVar14 = 3;
      }
    }
    else {
      local_70 = param_2[4];
      local_6c = param_2[5];
      if ((DAT_01d50f88 < 4) &&
         (((DAT_01d4bb64 - 1 < 2 ||
           ((DAT_01d4bb64 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4bb5c), cVar2 != '\0')))) &&
          (iVar4 = FUN_01aaa278(DAT_01d4bb5c), iVar4 != 0)))) {
        if (*(undefined ***)(DAT_01d4bb5c + 0x20) == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c11950);
        }
        local_58 = &local_50;
        local_5c = &local_148;
        local_60 = (undefined4 *)(DAT_01d4bb5c + 0x1c);
        local_148 = (undefined4 *******)*local_60;
        local_68 = &local_5c;
        local_140 = *(undefined4 **)(DAT_01d4bb5c + 0x24);
        local_13c = *(undefined4 *)(DAT_01d4bb5c + 0x28);
        local_138 = 0;
        local_64 = (undefined **)&DAT_00000001;
        local_54 = (undefined4 *)&DAT_01d2ea4c;
        local_4c = &local_48;
        local_50 = &DAT_00582ef4;
        local_44 = FUN_01a3ac5c;
        local_48 = &local_70;
        local_144 = *(undefined ***)(DAT_01d4bb5c + 0x20);
        FUN_01aaaecc(DAT_01d4bb5c,&local_68);
        iVar4 = DAT_01d4bb5c;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_3c = *(undefined ***)(DAT_01d4bb5c + 0x14);
          local_38 = *(undefined4 **)(DAT_01d4bb5c + 0x18);
          local_40 = (undefined4 *******)0x2;
          DataMemoryBarrier(0xb);
          pcVar20 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar20 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          puVar17 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar17 = &DAT_01cfc5e0;
          }
          iVar5 = (*(code *)puVar17[3])(pcVar20,&local_40);
          if (iVar5 != 0) {
            local_80 = local_40;
            ppuStack_7c = local_3c;
            puStack_78 = local_38;
            FUN_01aaa328(iVar4,pcVar20,puVar17[4],&local_80,&local_68);
          }
        }
      }
      else {
        iVar4 = DAT_01d4bb5c;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_64 = *(undefined ***)(DAT_01d4bb5c + 0x14);
          local_60 = *(undefined4 **)(DAT_01d4bb5c + 0x18);
          local_68 = (undefined4 *******)0x2;
          DataMemoryBarrier(0xb);
          pcVar20 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar20 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          puVar17 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar17 = &DAT_01cfc5e0;
          }
          iVar5 = (*(code *)puVar17[3])(pcVar20,&local_68);
          if (iVar5 != 0) {
            if (*(undefined ***)(DAT_01d4bb5c + 0x20) == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c11950);
            }
            local_13c = *(undefined4 *)(DAT_01d4bb5c + 0x28);
            local_3c = &local_50;
            local_40 = &local_148;
            local_140 = *(undefined4 **)(DAT_01d4bb5c + 0x24);
            local_5c = &local_40;
            local_138 = 0;
            local_58 = (undefined **)&DAT_00000001;
            local_38 = (undefined4 *)&DAT_01d2ea4c;
            local_4c = &local_48;
            local_50 = &DAT_00582ef4;
            local_44 = FUN_01a3ac5c;
            local_48 = &local_70;
            local_80 = local_68;
            ppuStack_7c = local_64;
            puStack_78 = local_60;
            local_148 = *(undefined4 ********)(DAT_01d4bb5c + 0x1c);
            local_144 = *(undefined ***)(DAT_01d4bb5c + 0x20);
            local_54 = (undefined4 *)(DAT_01d4bb5c + 0x1c);
            FUN_01aaa328(iVar4,pcVar20,puVar17[4],&local_80,&local_5c);
          }
        }
      }
      uVar14 = 4;
    }
    local_e0 = 1;
    local_dc = 0;
    local_d8 = local_178;
    ppuStack_d4 = local_17c;
    local_d0 = local_180;
    pppppppuStack_cc = local_148;
    ppuStack_c8 = local_144;
    puStack_c4 = local_140;
    uStack_c0 = local_13c;
    *(undefined1 *)(param_2 + 6) = 1;
    local_e4 = 0;
    local_e8 = uVar14;
    FUN_00b19634(param_2);
    uVar14 = local_e4;
    unaff_r7 = local_e8;
    *param_2 = 0;
    param_2[1] = 0;
    if (local_e8 != 4 || local_e4 != 0) {
      FUN_01bed4e2(&local_148,&local_e0,0x60);
LAB_00b18688:
      *param_1 = unaff_r7;
      param_1[1] = uVar14;
      FUN_01bed4e2(param_1 + 2,&local_148,0x60);
      return;
    }
    FUN_00b1889c(&local_e8);
    puVar11 = extraout_r1;
  } while( true );
}

