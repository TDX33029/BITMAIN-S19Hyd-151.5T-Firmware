// FUN_009cbee8 @ 009cbee8 size=2120 calls_out=16 calls_in=0
// strings: boser::web::grpc::persistent_graphs_serviceopen/boser/boser/src/web/grpc/persistent_graphs_service.rsvariant index 0 <= i < 8struct WifiEnabledRequeststruct WifiConnectionRequestevent open/boser/boser/src/system_upgrade/autoupgrade.rs:440 | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::web::grpc::persistent_graphs_serviceopen/boser/boser/src/web/grpc/persistent_graphs_service.rsvariant index 0 <= i < 8struct WifiEnabledRequeststruct WifiConnectionRequestevent open/boser/boser/src/system_upgrade/autoupgrade.rs:440 | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::web::grpc::persistent_graphs_serviceopen/boser/boser/src/web/grpc/persistent_graphs_service.rsvariant index 0 <= i < 8struct WifiEnabledRequeststruct WifiConnectionRequestevent open/boser/boser/src/system_upgrade/autoupgrade.rs:440 | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_009cbee8(uint *param_1,uint *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint ***pppuVar9;
  uint *puVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  uint ***pppuVar14;
  bool bVar15;
  uint local_300;
  uint local_2fc;
  uint local_2f8;
  uint local_2e0;
  uint local_2d4;
  undefined1 auStack_2c0 [112];
  uint ***local_250;
  uint local_24c;
  undefined1 auStack_248 [112];
  undefined1 auStack_1d8 [112];
  uint ***local_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  uint ***local_158;
  uint local_154;
  uint local_150;
  undefined1 local_128;
  undefined4 ****local_f0;
  uint local_ec;
  undefined4 *****local_e4;
  code *local_e0;
  uint *local_dc;
  undefined *local_d8;
  undefined4 *****local_d4;
  undefined4 ****local_d0;
  undefined4 *****local_cc;
  undefined1 *local_c8;
  uint ****local_c4;
  undefined **local_c0;
  uint *local_bc;
  uint ****local_b8;
  uint *****local_b4;
  undefined1 auStack_b0 [112];
  undefined4 ****local_40;
  undefined4 *****local_3c;
  undefined1 *local_38;
  undefined4 ****ppppuStack_30;
  undefined4 *****pppppuStack_2c;
  undefined1 *puStack_28;
  
  puVar10 = param_2 + 0x12;
  if (*puVar10 == 0) goto LAB_009cbfd0;
  puVar2 = (undefined4 *)param_2[0x13];
  if (puVar2 == (undefined4 *)param_2[0x15]) {
    *param_1 = 3;
    param_1[1] = 0;
LAB_009cbfc0:
    FUN_009633ac(puVar10);
  }
  else {
    piVar11 = (int *)*puVar2;
    param_2[0x13] = (uint)(puVar2 + 1);
    FUN_00b171c8(&local_168,piVar11[6] + 8);
    uVar13 = local_164;
    pppuVar9 = local_168;
    FUN_01bed4e2(&local_250,&local_160,0x70);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar11;
      bVar15 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar15);
    *piVar11 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a95f90(piVar11);
    }
    *param_1 = (uint)pppuVar9;
    param_1[1] = uVar13;
    FUN_01bed4e2(param_1 + 2,&local_250,0x70);
    if (((uint)pppuVar9 & 7) == 4) {
      *param_1 = 4;
      param_1[1] = 0;
      return;
    }
    if (pppuVar9 != (uint ***)0x3) {
      return;
    }
    if (*puVar10 != 0) goto LAB_009cbfc0;
  }
  *puVar10 = 0;
LAB_009cbfd0:
  do {
    while ((*param_2 & 1) == 0) {
      (**(code **)(param_2[0x11] + 0xc))(&local_168,param_2[0x10],param_3);
      uVar12 = local_150;
      uVar7 = local_154;
      pppuVar14 = local_158;
      uVar6 = local_160;
      uVar13 = local_164;
      pppuVar9 = local_168;
      if (local_168 == (uint ***)0x3 && local_164 == 0) goto LAB_009cc6ac;
      local_2d4 = local_160;
      local_2e0 = local_15c;
      puVar10 = (uint *)param_2[0x10];
      puVar2 = (undefined4 *)param_2[0x11];
      param_2[0x10] = 1;
      param_2[0x11] = (uint)&DAT_01c0cc24;
      iVar3 = puVar2[1];
      bVar15 = iVar3 == 0x48;
      if (bVar15) {
        iVar3 = puVar2[2];
      }
      if (bVar15 && iVar3 == 8) {
        if ((code *)*puVar2 == (code *)0x0) {
          uVar5 = 1;
        }
        else {
          (*(code *)*puVar2)(puVar10);
          uVar5 = param_2[0x10];
        }
        puVar10[1] = uVar7;
        *(undefined1 *)(puVar10 + 0x10) = 0;
        *puVar10 = (uint)pppuVar14;
        puVar10[2] = uVar12;
        FUN_01139b38(uVar5,&DAT_01c0cc24);
      }
      else {
        FUN_01139b38(puVar10,puVar2);
        local_160 = uVar12;
        local_128 = 0;
        local_168 = pppuVar14;
        local_164 = uVar7;
        puVar10 = (uint *)FUN_009ceef8(&local_168);
        FUN_01139b38(1,&DAT_01c0cc24);
      }
      param_2[0x10] = (uint)puVar10;
      param_2[0x11] = (uint)&DAT_01c0cc14;
      if (pppuVar9 == (uint ***)0x2 && uVar13 == 0) {
        uVar13 = 0;
        local_2f8 = uVar6;
        local_2e0 = local_2fc;
        local_2d4 = local_300;
      }
      else {
        uVar13 = 1;
        if (((uint)pppuVar9 & 1) == 0) {
          uVar13 = 0;
          pppuVar9 = (uint ***)0x3;
          goto LAB_009cc690;
        }
      }
      uVar7 = param_2[0xe];
      uVar6 = param_2[0xc];
      uVar12 = param_2[0xd];
      FUN_009d26e0(param_2);
      *param_2 = 1;
      param_2[1] = 0;
      param_2[3] = local_2f8;
      param_2[2] = uVar13;
      param_2[4] = local_2d4;
      param_2[5] = local_2e0;
      *(undefined1 *)(param_2 + 10) = 0;
      param_2[8] = uVar7;
      param_2[6] = uVar6;
      param_2[7] = uVar12;
      local_2fc = local_2e0;
      local_300 = local_2d4;
    }
    if ((char)param_2[10] != '\0') {
      if ((char)param_2[10] == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c11a08);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c11a08);
    }
    if (param_2[2] == 0) {
      piVar11 = (int *)param_2[3];
      if ((undefined1 *)param_2[8] != &DAT_3b9aca00) {
        uVar13 = piVar11[2];
        uVar12 = piVar11[3];
        uVar6 = param_2[6];
        uVar7 = param_2[7];
        bVar15 = (int)(uVar7 - (uVar12 + (uVar6 < uVar13))) < 0 !=
                 (SBORROW4(uVar7,uVar12) != SBORROW4(uVar7 - uVar12,(uint)(uVar6 < uVar13)));
        if (uVar13 == uVar6 && uVar12 == uVar7) {
          bVar15 = (undefined1 *)param_2[8] < (undefined1 *)piVar11[4];
        }
        if (!bVar15) goto LAB_009cc428;
      }
      FUN_00b171c8(&local_168,piVar11[6] + 8);
      uVar13 = local_164;
      pppuVar9 = local_168;
      FUN_01bed4e2(auStack_b0,&local_160,0x70);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar11;
        bVar15 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar15);
      *piVar11 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a95f90(piVar11);
      }
      FUN_01bed4e2(auStack_1d8,auStack_b0,0x70);
      *(undefined1 *)(param_2 + 10) = 1;
      if (pppuVar9 == (uint ***)0x4 && uVar13 == 0) {
LAB_009cc6ac:
        *param_1 = 4;
        param_1[1] = 0;
        return;
      }
    }
    else {
      local_f0 = (undefined4 ****)param_2[4];
      local_ec = param_2[5];
      if ((DAT_01d50f88 < 4) &&
         (((DAT_01d4bb7c - 1 < 2 ||
           ((DAT_01d4bb7c != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4bb74), cVar1 != '\0')))) &&
          (iVar3 = FUN_01aaa278(DAT_01d4bb74), iVar3 != 0)))) {
        if (*(uint *)(DAT_01d4bb74 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c119f8);
        }
        local_c0 = &local_d8;
        local_160 = *(uint *)(DAT_01d4bb74 + 0x24);
        local_15c = *(uint *)(DAT_01d4bb74 + 0x28);
        local_dc = (uint *)(DAT_01d4bb74 + 0x1c);
        local_168 = (uint ***)*local_dc;
        local_c4 = &local_168;
        local_158 = (uint ***)0x0;
        local_e4 = &local_c4;
        local_e0 = (code *)0x1;
        local_bc = (uint *)&DAT_01d2ea4c;
        local_d4 = &local_b8;
        local_d8 = &DAT_00590c4f;
        local_b4 = (uint *****)FUN_01a3ac5c;
        local_b8 = (uint ****)&local_f0;
        local_164 = *(uint *)(DAT_01d4bb74 + 0x20);
        FUN_01aaaecc(DAT_01d4bb74,&local_e4);
        iVar3 = DAT_01d4bb74;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_3c = *(undefined4 ******)(DAT_01d4bb74 + 0x14);
          local_38 = *(undefined1 **)(DAT_01d4bb74 + 0x18);
          local_40 = (undefined4 ****)0x2;
          DataMemoryBarrier(0xb);
          pcVar8 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          puVar2 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar2 = &DAT_01cfc5e0;
          }
          iVar4 = (*(code *)puVar2[3])(pcVar8,&local_40);
          if (iVar4 != 0) {
            ppppuStack_30 = local_40;
            pppppuStack_2c = local_3c;
            puStack_28 = local_38;
            FUN_01aaa328(iVar3,pcVar8,puVar2[4],&ppppuStack_30,&local_e4);
          }
        }
      }
      else {
        iVar3 = DAT_01d4bb74;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_cc = *(undefined4 ******)(DAT_01d4bb74 + 0x14);
          local_c8 = *(undefined1 **)(DAT_01d4bb74 + 0x18);
          local_d0 = (undefined4 ****)0x2;
          DataMemoryBarrier(0xb);
          pcVar8 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          puVar2 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar2 = &DAT_01cfc5e0;
          }
          iVar4 = (*(code *)puVar2[3])(pcVar8,&local_d0);
          if (iVar4 != 0) {
            if (*(uint *)(DAT_01d4bb74 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c119f8);
            }
            local_15c = *(uint *)(DAT_01d4bb74 + 0x28);
            local_3c = &local_b8;
            local_40 = &local_168;
            local_160 = *(uint *)(DAT_01d4bb74 + 0x24);
            local_c4 = (uint ****)&local_40;
            local_158 = (uint ***)0x0;
            local_c0 = (undefined **)&DAT_00000001;
            local_38 = &DAT_01d2ea4c;
            local_b4 = (uint *****)&local_e4;
            local_b8 = (uint ****)&DAT_00590c4f;
            local_e0 = FUN_01a3ac5c;
            local_e4 = &local_f0;
            ppppuStack_30 = local_d0;
            pppppuStack_2c = local_cc;
            puStack_28 = local_c8;
            local_168 = *(uint ****)(DAT_01d4bb74 + 0x1c);
            local_164 = *(uint *)(DAT_01d4bb74 + 0x20);
            local_bc = (uint *)(DAT_01d4bb74 + 0x1c);
            FUN_01aaa328(iVar3,pcVar8,puVar2[4],&ppppuStack_30,&local_c4);
          }
        }
      }
      if (param_2[2] == 0) {
        piVar11 = (int *)param_2[3];
LAB_009cc428:
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar11;
          bVar15 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar15);
        *piVar11 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00a95f90(param_2[3]);
        }
      }
      FUN_01bed4e2(auStack_1d8,auStack_b0,0x70);
      uVar13 = 0;
      pppuVar9 = (uint ***)0x3;
      *(undefined1 *)(param_2 + 10) = 1;
    }
    FUN_01bed4e2(auStack_248,auStack_1d8,0x70);
    local_250 = pppuVar9;
    local_24c = uVar13;
    FUN_009d26e0(param_2);
    uVar13 = local_24c;
    pppuVar9 = local_250;
    *param_2 = 0;
    param_2[1] = 0;
    if (local_250 != (uint ***)0x3 || local_24c != 0) {
      FUN_01bed4e2(auStack_2c0,auStack_248,0x70);
LAB_009cc690:
      *param_1 = (uint)pppuVar9;
      param_1[1] = uVar13;
      FUN_01bed4e2(param_1 + 2,auStack_2c0,0x70);
      return;
    }
    FUN_00b17eb8(&local_250);
  } while( true );
}

