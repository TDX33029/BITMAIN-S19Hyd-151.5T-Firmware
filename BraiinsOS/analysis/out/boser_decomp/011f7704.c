// FUN_011f7704 @ 011f7704 size=10612 calls_out=72 calls_in=1
// strings: BOS_BMC_NIX_CLI_EXTRA_ARGS | --log-format internal-json | SYNC_WITH_BOSERevent open/boser/boser-unix/src/upgrade.rs:313 | Killed sysupgrade process. | boser_unix::upgradeopen/boser/boser-unix/src/upgrade.rsevent open/boser/boser-unix/src/upgrade.rs:309event open/boser/boser-unix/src/upgrade.rs:234event open/boser/boser-unix/src/upgrade.rs:229event open/boser/boser-unix/src/upgrade.rs:214event open/boser/boser-unix/src/upgrade.rs:223BUG: sysupgrade script returned with 0 status code and synchronization was not performedevent open/boser/boser-unix/src/upgrade.rs:290event open/boser/boser-unix/src/upgrade.rs:288 | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011f7704(undefined4 *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  char *pcVar2;
  byte bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *******pppppppiVar9;
  int *****pppppiVar10;
  int ********ppppppppiVar11;
  int ******ppppppiVar12;
  int ********ppppppppiVar13;
  int ********ppppppppiVar14;
  uint uVar15;
  undefined4 uVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  byte *pbVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  int ********ppppppppiVar26;
  undefined4 *puVar27;
  int iVar28;
  int iVar29;
  undefined1 *puVar30;
  int *piVar31;
  undefined1 uVar32;
  int ********ppppppppiVar33;
  int ********ppppppppiVar34;
  code *pcVar35;
  int ********unaff_r10;
  uint *puVar36;
  ulonglong uVar37;
  undefined8 uVar38;
  undefined *local_500;
  int ********local_4f0;
  int ********local_4ec;
  int ********local_4d4;
  undefined1 *local_4d0;
  int *local_4cc;
  int *local_4c4;
  int *local_4c0;
  undefined1 auStack_498 [128];
  int local_418;
  int iStack_414;
  int iStack_410;
  int local_408;
  int iStack_404;
  int iStack_400;
  int ********local_3e8;
  int ********local_3e4;
  int ********local_3e0;
  int *******local_3d8;
  int ********local_3d4;
  int ********local_3d0;
  int local_3c8;
  int iStack_3c4;
  int iStack_3c0;
  int ********local_3b8;
  int ********ppppppppiStack_3b4;
  int ********ppppppppiStack_3b0;
  int ********ppppppppiStack_3ac;
  int ********local_3a8;
  int ********ppppppppiStack_3a4;
  int ********ppppppppiStack_3a0;
  int ********ppppppppiStack_39c;
  int ********local_394;
  undefined4 local_390;
  undefined4 *local_38c;
  int ********local_388;
  int ********local_384;
  int ********local_380;
  int ********local_37c;
  int *local_378;
  int local_374;
  undefined1 local_31c;
  int ********local_318;
  int ********local_314;
  undefined4 local_310;
  int ********local_30c;
  int ********local_308;
  int ********local_304;
  int ********local_300;
  int ********ppppppppiStack_2fc;
  undefined4 uStack_2f8;
  int ********local_298;
  int ********local_294;
  int ********local_290;
  int ********local_28c;
  int ********local_288;
  int ********ppppppppiStack_284;
  undefined4 uStack_280;
  undefined4 *local_228;
  int ********local_220;
  int ********local_21c;
  int ********local_218;
  int ********local_214;
  int ********local_210;
  int ********local_20c;
  int ********local_208;
  int ********ppppppppiStack_204;
  int ********ppppppppiStack_200;
  undefined4 local_1f8;
  undefined1 auStack_1f4 [36];
  int local_1d0;
  undefined1 local_1a4;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  int *******local_170;
  int ********local_16c;
  int ********local_150;
  int ********local_14c;
  undefined4 *local_148;
  int ********local_d8;
  int ********local_d4;
  undefined4 *local_d0;
  int local_cc;
  int ********local_60 [2];
  int ********local_58;
  int ********local_54;
  undefined4 *local_50;
  int ********local_48;
  int ********local_44;
  int ********local_40;
  int ********local_38;
  undefined1 local_34;
  undefined2 uStack_33;
  undefined1 uStack_31;
  undefined4 *local_30;
  int ********local_2c;
  undefined4 local_28;
  
  puVar27 = (undefined4 *)((uint)&local_220 | 0x10);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x2e2)) {
  case 0:
    iVar18 = param_2[0xb0];
    *(undefined2 *)(param_2 + 0xb8) = 0;
    *(undefined2 *)((int)param_2 + 0x2dd) = 0x101;
    ppppppppiVar26 = (int ********)param_2[0xb6];
    cVar5 = *(char *)((int)param_2 + 0x2e3);
    iVar6 = param_2[0xb1];
    iVar19 = param_2[0xb2];
    iVar20 = param_2[0xb3];
    iVar22 = param_2[0xb4];
    iVar28 = param_2[0xb5];
    *(undefined1 *)(param_2 + 0xb7) = 1;
    iVar7 = param_2[0xae];
    *(undefined1 *)((int)param_2 + 0x2df) = 0;
    iVar29 = *param_2;
    iVar23 = param_2[0xaf];
    param_2[2] = iVar29;
    param_2[3] = param_2[1];
    FUN_019af4c4(&local_220,&DAT_005676f8,0x10);
    local_1a4 = 0;
    if (cVar5 == '\0') {
      FUN_019af384(&local_220,"-n",2);
    }
    if (iVar29 != 0) {
      FUN_0120c180(&local_220,"BOS_BMC_NIX_CLI_EXTRA_ARGS",0x1a,"--log-format internal-json",0x1a);
    }
    FUN_0120c180(&local_220,"SYNC_WITH_BOSERevent open/boser/boser-unix/src/upgrade.rs:313",0xf,
                 &DAT_0056eb7c,4);
    FUN_019af384(&local_220,iVar7,iVar23);
    FUN_01bed4e2(auStack_498,&local_220,0x80);
    iVar7 = param_2[2];
    *(undefined2 *)(param_2 + 0xb7) = 0;
    *(undefined1 *)((int)param_2 + 0x2de) = 0;
    local_4d0 = (undefined1 *)param_2[3];
    FUN_01bed4e2(param_2 + 4,auStack_498,0x80);
    param_2[0x24] = iVar18;
    param_2[0x25] = iVar6;
    param_2[0x26] = iVar19;
    param_2[0x27] = iVar20;
    param_2[0x28] = iVar22;
    param_2[0x29] = iVar28;
    *(undefined1 *)(param_2 + 0x72) = 0;
    param_2[0x2a] = (int)ppppppppiVar26;
    param_2[0x2b] = iVar7;
    param_2[0x2c] = (int)local_4d0;
LAB_011f792c:
    local_4c4 = param_2 + 0x72;
    *(undefined1 *)((int)param_2 + 0x1ca) = 0;
    piVar31 = param_2 + 0x2d;
    FUN_01bed4e2(piVar31,param_2 + 4,0x80);
    ppppppppiVar11 = (int ********)(param_2 + 0x4d);
    *(undefined1 *)(param_2 + 0x73) = 1;
    *ppppppppiVar11 = (int *******)param_2[0x24];
    param_2[0x4e] = param_2[0x25];
    param_2[0x4f] = param_2[0x26];
    param_2[0x50] = param_2[0x27];
    param_2[0x51] = param_2[0x28];
    param_2[0x52] = param_2[0x29];
    param_2[0x53] = iVar7;
    param_2[0x54] = (int)local_4d0;
    *(undefined1 *)((int)param_2 + 0x1cb) = 1;
    if (iVar7 != 0) {
      if (param_2[0x35] == 3) {
        FUN_01bf01d6(param_2[0x36]);
      }
      param_2[0x35] = 2;
      if (param_2[0x37] == 3) {
        FUN_01bf01d6(param_2[0x38]);
      }
      param_2[0x37] = 2;
    }
    FUN_019b46e0(&local_310,piVar31);
    ppppppppiVar33 = local_310;
    ppppppppiVar13 = local_308;
    ppppppppiVar34 = local_30c;
    if (local_310 != (int ********)0x2) {
      local_28c = local_304;
      local_288 = local_300;
      ppppppppiStack_284 = ppppppppiStack_2fc;
      uStack_280 = uStack_2f8;
      local_290 = local_308;
      local_294 = local_30c;
      local_298 = local_310;
      FUN_019eab18(&local_220,(char)param_2[0x4c]);
      if (local_220 != (int ********)&DAT_00000003) {
        FUN_01bed4e2(param_2 + 0x55,&local_220,0x60);
        piVar31 = (int *)param_2[0x53];
        iVar7 = param_2[0x54];
        *(undefined1 *)((int)param_2 + 0x1cb) = 0;
        if (piVar31 == (int *)0x0) {
          local_4ec = (int ********)0x0;
        }
        else {
          local_3b8 = (int ********)param_2[0x59];
          param_2[0x59] = 2;
          if (local_3b8 == (int ********)0x2) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c(&DAT_0056b448,0x20,&DAT_01c22f50);
          }
          iVar6 = param_2[0x5b];
          iVar18 = param_2[0x5c];
          piVar8 = (int *)((uint)&local_3b8 | 4);
          *piVar8 = param_2[0x5a];
          piVar8[1] = iVar6;
          piVar8[2] = iVar18;
          local_3a8 = (int ********)param_2[0x5d];
          param_2[0x5d] = 2;
          if (local_3a8 == (int ********)0x2) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c(&DAT_0056c628,0x20,&DAT_01c22f60);
          }
          iVar6 = param_2[0x5f];
          iVar18 = param_2[0x60];
          piVar8 = (int *)((uint)&local_3a8 | 4);
          *piVar8 = param_2[0x5e];
          piVar8[1] = iVar6;
          piVar8[2] = iVar18;
          do {
            iVar6 = *piVar31;
            bVar17 = (bool)hasExclusiveAccess(piVar31);
          } while (!bVar17);
          *piVar31 = iVar6 + 1;
          iVar18 = DAT_01d50474;
          if (iVar6 < 0) goto LAB_011fcfa4;
          do {
            do {
              DAT_01d50474 = iVar18;
              local_38 = (int ********)DAT_01d50470;
              pppppiVar10 = (int *****)((int)DAT_01d50470 + 1);
              iVar6 = DAT_01d50474 + (uint)((int *****)0xfffffffe < DAT_01d50470);
              bVar17 = (bool)hasExclusiveAccess(0x1d50470);
              iVar18 = DAT_01d50474;
            } while (!bVar17);
            bVar17 = DAT_01d50470 == (int *****)0x0;
            DAT_01d50470 = pppppiVar10;
            iVar18 = iVar6;
          } while (bVar17 && DAT_01d50474 == 0);
          local_34 = (undefined1)DAT_01d50474;
          uStack_33 = (undefined2)((uint)DAT_01d50474 >> 8);
          uStack_31 = (undefined1)((uint)DAT_01d50474 >> 0x18);
          local_384 = ppppppppiStack_3b4;
          local_380 = ppppppppiStack_3b0;
          local_37c = ppppppppiStack_3ac;
          local_314 = (int ********)&local_48;
          local_318 = (int ********)&local_38;
          local_31c = 0;
          local_388 = local_3b8;
          DAT_01d50474 = iVar6;
          iVar6 = thunk_FUN_01bee35a();
          puVar36 = (uint *)(iVar6 + 0x20);
          local_378 = piVar31;
          local_374 = iVar7;
          if (*(char *)(iVar6 + 0x58) != '\x01') {
            if (*(char *)(iVar6 + 0x58) == '\x02') {
              uVar32 = 1;
              FUN_0120d418(&local_388);
              goto LAB_011f7cec;
            }
            FUN_019a2bcc(puVar36,&LAB_019efb68);
            *(undefined1 *)(iVar6 + 0x58) = 1;
          }
          FUN_01bed4e2(&local_310,&local_388,0x78);
          if (0x7ffffffe < *puVar36) {
                    /* WARNING: Subroutine does not return */
            FUN_0130701c(&DAT_01d2e14c);
          }
          *puVar36 = *puVar36 + 1;
          uVar24 = *(uint *)(iVar6 + 0x24);
          FUN_01bed4e2(&local_298,&local_388,0x78);
          if (uVar24 == 2) {
            FUN_0120d418(&local_298);
            uVar32 = 0;
            *puVar36 = *puVar36 - 1;
LAB_011f7cec:
            local_220 = (int ********)CONCAT31(local_220._1_3_,uVar32);
                    /* WARNING: Subroutine does not return */
            FUN_0068d4ec(&local_220,&DAT_01c22f70);
          }
          local_4d4 = (int ********)*local_228;
          ppppppppiVar11 = (int ********)local_228[1];
          if ((uVar24 & 1) == 0) {
            ppppppppiVar33 = *(int *********)(iVar6 + 0x28);
            do {
              pppppppiVar9 = *ppppppppiVar33;
              bVar17 = (bool)hasExclusiveAccess(ppppppppiVar33);
            } while (!bVar17);
            *ppppppppiVar33 = (int *******)((int)pppppppiVar9 + 1);
            if ((int)pppppppiVar9 < 0) goto LAB_011fcfa4;
            pppppppiVar9 = ppppppppiVar33[0x82];
            if (pppppppiVar9 != (int *******)0x0) {
              do {
                ppppppiVar12 = *pppppppiVar9;
                bVar17 = (bool)hasExclusiveAccess(pppppppiVar9);
              } while (!bVar17);
              *pppppppiVar9 = (int ******)((int)ppppppiVar12 + 1);
              if ((int)ppppppiVar12 < 0) goto LAB_011fcfa4;
              local_4ec = (int ********)ppppppppiVar33[0x83];
            }
            FUN_01bed4e2((uint)&local_d8 | 4,&local_388,0x70);
            FUN_01bed4e2(&local_150,&local_d8,0x74);
            local_1f8 = 0;
            FUN_01bed4e2(auStack_1f4,&local_150,0x74);
            local_218 = (int ********)&PTR_LAB_01c22930;
            local_220 = (int ********)&DAT_000000cc;
            local_16c = local_4ec;
            puVar27[4] = local_4d4;
            puVar27[5] = ppppppppiVar11;
            *puVar27 = 0;
            puVar27[1] = 0;
            local_21c = (int ********)0x0;
            local_178 = 0;
            local_17c = 0;
            local_180 = 0;
            local_d8 = (int ********)0x0;
            local_208 = ppppppppiVar33;
            local_170 = pppppppiVar9;
            iVar18 = FUN_01be5878(&local_d8,0x20,0xc0);
            local_4ec = local_d8;
            if ((iVar18 != 0) || (local_d8 == (int ********)0x0)) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(0x20,0xc0);
            }
            FUN_01bed4e2(local_d8,&local_220,0xc0);
            iVar18 = FUN_01a88f0c(ppppppppiVar33 + 0x40,local_4ec,local_4ec);
            local_220 = local_4d4;
            local_21c = ppppppppiVar11;
            if (ppppppppiVar33[0x80] != (int *******)0x0) {
              (*(code *)ppppppppiVar33[0x81][5])
                        ((int)ppppppppiVar33[0x80] +
                         ((int)ppppppppiVar33[0x81][2] - 1U & 0xfffffff8) + 8,&local_220);
            }
            if (iVar18 != 0) {
              FUN_019dc904(*(undefined4 *)(iVar6 + 0x28),iVar18);
            }
          }
          else {
            ppppppppiVar33 = *(int *********)(iVar6 + 0x28);
            local_4f0 = ppppppppiVar33 + 2;
            do {
              pppppppiVar9 = *ppppppppiVar33;
              bVar17 = (bool)hasExclusiveAccess(ppppppppiVar33);
            } while (!bVar17);
            *ppppppppiVar33 = (int *******)((int)pppppppiVar9 + 1);
            if ((int)pppppppiVar9 < 0) goto LAB_011fcfa4;
            pppppppiVar9 = ppppppppiVar33[0x50];
            if (pppppppiVar9 != (int *******)0x0) {
              do {
                ppppppiVar12 = *pppppppiVar9;
                bVar17 = (bool)hasExclusiveAccess(pppppppiVar9);
              } while (!bVar17);
              *pppppppiVar9 = (int ******)((int)ppppppiVar12 + 1);
              if ((int)ppppppiVar12 < 0) goto LAB_011fcfa4;
              local_4ec = (int ********)ppppppppiVar33[0x51];
            }
            FUN_01bed4e2((uint)&local_d8 | 4,&local_388,0x70);
            FUN_01bed4e2(&local_150,&local_d8,0x74);
            local_1f8 = 0;
            FUN_01bed4e2(auStack_1f4,&local_150,0x74);
            local_218 = (int ********)&PTR_LAB_01c22b60;
            local_220 = (int ********)&DAT_000000cc;
            local_16c = local_4ec;
            puVar27[4] = local_4d4;
            puVar27[5] = ppppppppiVar11;
            *puVar27 = 0;
            puVar27[1] = 0;
            local_21c = (int ********)0x0;
            local_178 = 0;
            local_17c = 0;
            local_180 = 0;
            local_d8 = (int ********)0x0;
            local_208 = ppppppppiVar33;
            local_170 = pppppppiVar9;
            iVar18 = FUN_01be5878(&local_d8,0x20,0xc0);
            local_4ec = local_d8;
            if ((iVar18 != 0) || (local_d8 == (int ********)0x0)) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(0x20,0xc0);
            }
            FUN_01bed4e2(local_d8,&local_220,0xc0);
            ppppppppiVar13 = (int ********)FUN_01a89190(ppppppppiVar33 + 0x14,local_4ec,local_4ec);
            local_220 = local_4d4;
            local_21c = ppppppppiVar11;
            if (ppppppppiVar33[0x4e] != (int *******)0x0) {
              (*(code *)ppppppppiVar33[0x4f][5])
                        ((int)ppppppppiVar33[0x4e] +
                         ((int)ppppppppiVar33[0x4f][2] - 1U & 0xfffffff8) + 8,&local_220);
            }
            if (ppppppppiVar13 != (int ********)0x0) {
              local_d8 = (int ********)((uint)local_d8 & 0xffffff00);
              local_218 = (int ********)&local_d8;
              local_220 = local_4f0;
              local_21c = ppppppppiVar13;
              FUN_019ee860(&local_220);
            }
          }
          uVar24 = *puVar36 - 1;
          *puVar36 = uVar24;
          iVar18 = DAT_01d50474;
          do {
            do {
              DAT_01d50474 = iVar18;
              local_38 = (int ********)DAT_01d50470;
              pppppiVar10 = (int *****)((int)DAT_01d50470 + 1);
              iVar19 = DAT_01d50474 + (uint)((int *****)0xfffffffe < DAT_01d50470);
              bVar17 = (bool)hasExclusiveAccess(0x1d50470);
              iVar18 = DAT_01d50474;
            } while (!bVar17);
            bVar17 = DAT_01d50470 == (int *****)0x0;
            DAT_01d50470 = pppppiVar10;
            iVar18 = iVar19;
          } while (bVar17 && DAT_01d50474 == 0);
          local_34 = (undefined1)DAT_01d50474;
          uStack_33 = (undefined2)((uint)DAT_01d50474 >> 8);
          uStack_31 = (undefined1)((uint)DAT_01d50474 >> 0x18);
          local_388 = local_3a8;
          local_384 = ppppppppiStack_3a4;
          local_380 = ppppppppiStack_3a0;
          local_37c = ppppppppiStack_39c;
          local_314 = (int ********)&local_48;
          local_318 = (int ********)&local_38;
          local_31c = 0;
          local_378 = piVar31;
          local_374 = iVar7;
          DAT_01d50474 = iVar19;
          if (*(char *)(iVar6 + 0x58) != '\x01') {
            if (*(char *)(iVar6 + 0x58) == '\x02') {
              uVar32 = 1;
              FUN_0120d418(&local_388);
              goto LAB_011f826c;
            }
            FUN_019a2bcc(puVar36,&LAB_019efb68);
            uVar24 = *puVar36;
            *(undefined1 *)(iVar6 + 0x58) = 1;
          }
          FUN_01bed4e2(&local_310,&local_388,0x78);
          if (0x7ffffffe < uVar24) {
                    /* WARNING: Subroutine does not return */
            FUN_0130701c(&DAT_01d2e14c);
          }
          *puVar36 = uVar24 + 1;
          uVar24 = *(uint *)(iVar6 + 0x24);
          FUN_01bed4e2(&local_298,&local_388,0x78);
          if (uVar24 == 2) {
            FUN_0120d418(&local_298);
            uVar32 = 0;
            *puVar36 = *puVar36 - 1;
LAB_011f826c:
            local_220 = (int ********)CONCAT31(local_220._1_3_,uVar32);
                    /* WARNING: Subroutine does not return */
            FUN_0068d4ec(&local_220,&DAT_01c22f80);
          }
          ppppppppiVar13 = (int ********)*local_228;
          ppppppppiVar11 = (int ********)local_228[1];
          if ((uVar24 & 1) == 0) {
            ppppppppiVar34 = *(int *********)(iVar6 + 0x28);
            do {
              pppppppiVar9 = *ppppppppiVar34;
              bVar17 = (bool)hasExclusiveAccess(ppppppppiVar34);
            } while (!bVar17);
            *ppppppppiVar34 = (int *******)((int)pppppppiVar9 + 1);
            if ((int)pppppppiVar9 < 0) goto LAB_011fcfa4;
            pppppppiVar9 = ppppppppiVar34[0x82];
            if (pppppppiVar9 != (int *******)0x0) {
              do {
                ppppppiVar12 = *pppppppiVar9;
                bVar17 = (bool)hasExclusiveAccess(pppppppiVar9);
              } while (!bVar17);
              *pppppppiVar9 = (int ******)((int)ppppppiVar12 + 1);
              if ((int)ppppppiVar12 < 0) goto LAB_011fcfa4;
              local_4d4 = (int ********)ppppppppiVar34[0x83];
            }
            FUN_01bed4e2((uint)&local_d8 | 4,&local_388,0x70);
            FUN_01bed4e2(&local_150,&local_d8,0x74);
            local_1f8 = 0;
            FUN_01bed4e2(auStack_1f4,&local_150,0x74);
            local_218 = (int ********)&PTR_LAB_01c22a20;
            local_220 = (int ********)&DAT_000000cc;
            local_16c = local_4d4;
            puVar27[4] = ppppppppiVar13;
            puVar27[5] = ppppppppiVar11;
            *puVar27 = 0;
            puVar27[1] = 0;
            local_21c = (int ********)0x0;
            local_178 = 0;
            local_17c = 0;
            local_180 = 0;
            local_d8 = (int ********)0x0;
            local_208 = ppppppppiVar34;
            local_170 = pppppppiVar9;
            iVar7 = FUN_01be5878(&local_d8,0x20,0xc0);
            ppppppppiVar33 = local_d8;
            if ((iVar7 != 0) || (local_d8 == (int ********)0x0)) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(0x20,0xc0);
            }
            FUN_01bed4e2(local_d8,&local_220,0xc0);
            iVar7 = FUN_01a88f0c(ppppppppiVar34 + 0x40,ppppppppiVar33,ppppppppiVar33);
            local_220 = ppppppppiVar13;
            local_21c = ppppppppiVar11;
            if (ppppppppiVar34[0x80] != (int *******)0x0) {
              (*(code *)ppppppppiVar34[0x81][5])
                        ((int)ppppppppiVar34[0x80] +
                         ((int)ppppppppiVar34[0x81][2] - 1U & 0xfffffff8) + 8,&local_220);
            }
            if (iVar7 != 0) {
              FUN_019dc904(*(undefined4 *)(iVar6 + 0x28),iVar7);
            }
          }
          else {
            ppppppppiVar34 = *(int *********)(iVar6 + 0x28);
            do {
              pppppppiVar9 = *ppppppppiVar34;
              bVar17 = (bool)hasExclusiveAccess(ppppppppiVar34);
            } while (!bVar17);
            *ppppppppiVar34 = (int *******)((int)pppppppiVar9 + 1);
            if ((int)pppppppiVar9 < 0) {
LAB_011fcfa4:
                    /* WARNING: Does not return */
              pcVar35 = (code *)software_udf(0xfdee,0x11fcfa4);
              (*pcVar35)();
            }
            pppppppiVar9 = ppppppppiVar34[0x50];
            if (pppppppiVar9 != (int *******)0x0) {
              do {
                ppppppiVar12 = *pppppppiVar9;
                bVar17 = (bool)hasExclusiveAccess(pppppppiVar9);
              } while (!bVar17);
              *pppppppiVar9 = (int ******)((int)ppppppiVar12 + 1);
              if ((int)ppppppiVar12 < 0) goto LAB_011fcfa4;
              local_4d4 = (int ********)ppppppppiVar34[0x51];
            }
            FUN_01bed4e2((uint)&local_d8 | 4,&local_388,0x70);
            FUN_01bed4e2(&local_150,&local_d8,0x74);
            local_1f8 = 0;
            FUN_01bed4e2(auStack_1f4,&local_150,0x74);
            local_218 = (int ********)&PTR_LAB_01c22a48;
            local_220 = (int ********)&DAT_000000cc;
            puVar27[4] = ppppppppiVar13;
            puVar27[5] = ppppppppiVar11;
            local_16c = local_4d4;
            *puVar27 = 0;
            puVar27[1] = 0;
            local_21c = (int ********)0x0;
            local_178 = 0;
            local_17c = 0;
            local_180 = 0;
            local_d8 = (int ********)0x0;
            local_208 = ppppppppiVar34;
            local_170 = pppppppiVar9;
            iVar7 = FUN_01be5878(&local_d8,0x20,0xc0);
            ppppppppiVar33 = local_d8;
            if ((iVar7 != 0) || (local_d8 == (int ********)0x0)) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(0x20,0xc0);
            }
            FUN_01bed4e2(local_d8,&local_220,0xc0);
            ppppppppiVar14 =
                 (int ********)FUN_01a89190(ppppppppiVar34 + 0x14,ppppppppiVar33,ppppppppiVar33);
            local_220 = ppppppppiVar13;
            local_21c = ppppppppiVar11;
            if (ppppppppiVar34[0x4e] != (int *******)0x0) {
              (*(code *)ppppppppiVar34[0x4f][5])
                        ((int)ppppppppiVar34[0x4e] +
                         ((int)ppppppppiVar34[0x4f][2] - 1U & 0xfffffff8) + 8,&local_220);
            }
            if (ppppppppiVar14 != (int ********)0x0) {
              local_d8 = (int ********)((uint)local_d8 & 0xffffff00);
              local_220 = ppppppppiVar34 + 2;
              local_21c = ppppppppiVar14;
              local_218 = (int ********)&local_d8;
              FUN_019ee860(&local_220);
            }
          }
          *puVar36 = *puVar36 - 1;
        }
        unaff_r10 = (int ********)&local_310;
        pbVar21 = (byte *)((int)param_2 + 0x1c9);
        *pbVar21 = 0;
        local_37c = (int ********)((uint)local_37c & 0xffffff00);
        param_2[0x6d] = (int)local_4ec;
        param_2[0x6e] = (int)ppppppppiVar33;
        *(undefined1 *)(param_2 + 0x73) = 0;
        local_388 = ppppppppiVar26;
        FUN_019e6e74(&local_298,&DAT_01c22ef0,0x708,0,0,&DAT_01c22ef0);
        FUN_01bed4e2((int)&local_310 + 3,&local_388,0x4c);
        FUN_01bed4e2(&local_21c,&local_298,0x50);
        piVar31 = param_2 + 0x76;
        *piVar31 = (int)(param_2 + 0x55);
        *(undefined1 *)(param_2 + 0x79) = 0;
        FUN_01bed4e2(param_2 + 0x7a,(int)&local_310 + 3,0x4c);
        FUN_01bed4e2(param_2 + 0x8e,&local_21c,0x50);
        param_2[0x74] = (int)pbVar21;
        param_2[0x75] = (int)piVar31;
        goto LAB_011f874c;
      }
      ppppppppiVar13 = local_218;
      ppppppppiVar34 = local_21c;
    }
    local_294 = (int ********)FUN_019a7d7c;
    local_298 = (int ********)&local_388;
    local_388 = ppppppppiVar34;
    local_384 = ppppppppiVar13;
    FUN_00664898(&local_310,&DAT_0058b0f6,&local_298);
    local_298 = local_310;
    local_294 = local_30c;
    local_290 = local_308;
    local_310 = (int ********)CONCAT31(local_310._1_3_,4);
    local_28c = ppppppppiVar11;
    local_288 = (int ********)&local_310;
    FUN_00ab3338((*ppppppppiVar11)[2],&local_298);
    pcVar35 = (code *)local_384;
    unaff_r10 = local_388;
    piVar8 = (int *)param_2[0x53];
    if (piVar8 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar8;
        bVar17 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar17);
      *piVar8 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(param_2[0x53],param_2[0x54]);
      }
    }
    piVar8 = (int *)param_2[0x4d];
    *(undefined1 *)((int)param_2 + 0x1cb) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar8;
      bVar17 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar17);
    *piVar8 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0121cce0(*ppppppppiVar11);
    }
    DataMemoryBarrier(0xb);
    do {
      pppppppiVar9 = *ppppppppiVar26;
      bVar17 = (bool)hasExclusiveAccess(ppppppppiVar26);
    } while (!bVar17);
    *ppppppppiVar26 = (int *******)((int)pppppppiVar9 + -1);
    if (pppppppiVar9 == (int *******)&DAT_00000001) {
      DataMemoryBarrier(0xb);
      FUN_0121cf18(ppppppppiVar26);
    }
    *(undefined1 *)(param_2 + 0x73) = 0;
    FUN_010a7c94(piVar31);
    puVar30 = (undefined1 *)0x80000002;
    *(undefined1 *)local_4c4 = 1;
LAB_011f7b60:
    local_4cc = param_2 + 4;
    local_408 = local_3c8;
    iStack_404 = iStack_3c4;
    iStack_400 = iStack_3c0;
    local_418 = local_3c8;
    iStack_414 = iStack_3c4;
    iStack_410 = iStack_3c0;
    FUN_011fd1d4(local_4cc);
    *(undefined2 *)(param_2 + 0xb7) = 0;
    *(undefined1 *)((int)param_2 + 0x2de) = 0;
    *param_1 = puVar30;
    param_1[1] = unaff_r10;
    param_1[2] = pcVar35;
    param_1[3] = local_408;
    param_1[4] = iStack_404;
    param_1[5] = iStack_400;
    uVar32 = 1;
    goto LAB_011fcebc;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c23220);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c23220);
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x72]) {
  case '\0':
    ppppppppiVar26 = (int ********)param_2[0x2a];
    iVar7 = param_2[0x2b];
    local_4d0 = (undefined1 *)param_2[0x2c];
    goto LAB_011f792c;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c22f00);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c22f00);
  case '\x03':
    pbVar21 = (byte *)param_2[0x74];
    piVar31 = (int *)param_2[0x75];
LAB_011f874c:
    bVar3 = FUN_019ec70c();
    if ((bVar3 == 2) || ((bVar3 & 1) != 0)) {
      uVar24 = FUN_019f8914(3);
      ppppppppiVar26 = (int ********)&DAT_00000003;
      bVar17 = false;
      local_500 = &DAT_01d2e18c;
      do {
        uVar25 = (uint)((ulonglong)uVar24 * 0xaaaaaaab >> 0x20);
        if (uVar24 % 3 == 0) {
          if ((*pbVar21 & 1) == 0) {
            FUN_011fe0dc(&local_298,piVar31,param_3);
            if ((char)local_298 != '\x05') {
              bVar3 = 1;
              iVar7 = 0;
              ppppppppiVar26 = local_298;
              unaff_r10 = local_294;
              goto LAB_011f8c04;
            }
            bVar17 = true;
          }
        }
        else if (uVar24 % 3 == 1) {
          if ((*pbVar21 & 2) != 0) goto LAB_011f8ba8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((char)piVar31[7]) {
          case '\0':
            piVar31[5] = piVar31[4];
            iVar7 = piVar31[4] + 8;
            *(undefined1 *)(piVar31 + 0x16) = 0;
            piVar31[8] = iVar7;
LAB_011f88f4:
            *(undefined1 *)(piVar31 + 0x15) = 0;
            piVar31[9] = iVar7;
LAB_011f88fc:
            *(undefined1 *)(piVar31 + 0xc) = 0;
            piVar31[10] = iVar7;
LAB_011f8904:
            piVar31[0xb] = iVar7;
LAB_011f8908:
            piVar31[0xd] = iVar7;
            *(undefined1 *)(piVar31 + 0x14) = 0;
            piVar31[0x10] = 0;
            piVar31[0x11] = 0;
            piVar31[0x12] = 1;
            piVar31[0x13] = 1;
            piVar31[0xe] = 0;
            break;
          case '\x01':
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c23250);
          case '\x02':
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01c23250);
          case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch((char)piVar31[0x16]) {
            case '\0':
              iVar7 = piVar31[8];
              goto LAB_011f88f4;
            case '\x01':
                    /* WARNING: Subroutine does not return */
              FUN_013079f0(&DAT_01c23280);
            case '\x02':
                    /* WARNING: Subroutine does not return */
              FUN_01307a10(&DAT_01c23280);
            }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch((char)piVar31[0x15]) {
            case '\0':
              iVar7 = piVar31[9];
              goto LAB_011f88fc;
            case '\x01':
                    /* WARNING: Subroutine does not return */
              FUN_013079f0(&DAT_01c23290);
            case '\x02':
                    /* WARNING: Subroutine does not return */
              FUN_01307a10(&DAT_01c23290);
            }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch((char)piVar31[0xc]) {
            case '\0':
              iVar7 = piVar31[10];
              goto LAB_011f8904;
            case '\x01':
                    /* WARNING: Subroutine does not return */
              FUN_013079f0(&DAT_01c232a0);
            case '\x02':
                    /* WARNING: Subroutine does not return */
              FUN_01307a10(&DAT_01c232a0);
            case '\x03':
              iVar7 = piVar31[0xb];
              goto LAB_011f8908;
            }
            break;
          case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch((char)piVar31[10]) {
            case '\0':
              piVar8 = (int *)piVar31[8];
              goto LAB_011f89bc;
            case '\x01':
                    /* WARNING: Subroutine does not return */
              FUN_013079f0(&DAT_01c23270);
            case '\x02':
                    /* WARNING: Subroutine does not return */
              FUN_01307a10(&DAT_01c23270);
            case '\x03':
              piVar8 = (int *)piVar31[9];
            }
            goto LAB_011f89f8;
          }
          bVar3 = FUN_019f9bc4(piVar31 + 0xd,param_3);
          if (bVar3 == 2) {
            uVar32 = 3;
            *(undefined1 *)(piVar31 + 0x16) = 3;
            *(undefined1 *)(piVar31 + 0x15) = 3;
            *(undefined1 *)(piVar31 + 0xc) = 4;
          }
          else {
            FUN_0193c3cc(piVar31 + 0xd);
            if ((bVar3 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c232b0);
            }
            *(undefined1 *)(piVar31 + 0xc) = 1;
            *(undefined1 *)(piVar31 + 0x16) = 1;
            *(undefined1 *)(piVar31 + 0x15) = 1;
            piVar31[6] = piVar31[9];
            piVar8 = (int *)(piVar31[9] + 0x14);
            *(undefined1 *)(piVar31 + 10) = 0;
            piVar31[8] = (int)piVar8;
LAB_011f89bc:
            piVar31[9] = (int)piVar8;
LAB_011f89f8:
            iVar6 = *piVar8;
            iVar7 = *param_3;
            uVar15 = FUN_019ec670(iVar7);
            local_4ec = (int ********)0x0;
            if ((uVar15 & 0xff) == 2) {
LAB_011f8a3c:
              unaff_r10 = (int ********)(iVar6 + 0x20);
              uVar37 = FUN_0093e888(iVar6 + 0x70,unaff_r10);
              ppppppppiVar11 = (int ********)(uVar37 >> 0x20);
              if ((int)uVar37 == 2) {
                FUN_019f79e0(iVar6 + 0x40,iVar7);
                uVar37 = FUN_0093e888(iVar6 + 0x70,unaff_r10);
                ppppppppiVar11 = (int ********)(uVar37 >> 0x20);
                if ((int)uVar37 != 2) {
                  if ((uVar37 & 1) != 0) {
                    DataMemoryBarrier(0xb);
                    if (*(uint *)(iVar6 + 0x94) != *(uint *)(iVar6 + 0x90) >> 1) {
                      local_500 = &DAT_01d2e17c;
                      goto LAB_011faac8;
                    }
                    goto LAB_011f8b18;
                  }
                  FUN_019f8c54(iVar6 + 0x80,1);
                  goto LAB_011f8b78;
                }
                bVar1 = false;
                bVar17 = true;
                if (*(char *)(iVar6 + 0x7c) == '\x01') {
                  DataMemoryBarrier(0xb);
                  if (*(uint *)(iVar6 + 0x94) == *(uint *)(iVar6 + 0x90) >> 1) goto LAB_011f8b18;
                }
                else {
                }
              }
              else if ((uVar37 & 1) == 0) {
                FUN_019f8c54(iVar6 + 0x80,1);
LAB_011f8b78:
                bVar17 = false;
                bVar1 = true;
                local_4ec = (int ********)0x0;
                unaff_r10 = ppppppppiVar11;
              }
              else {
                DataMemoryBarrier(0xb);
                if (*(uint *)(iVar6 + 0x94) != *(uint *)(iVar6 + 0x90) >> 1) {
LAB_011faac8:
                    /* WARNING: Subroutine does not return */
                  FUN_012fb0ec("assertion failed: self.inner.semaphore.is_idle()",0x30,local_500);
                }
LAB_011f8b18:
                local_4ec = (int ********)0x0;
                bVar17 = false;
                bVar1 = false;
              }
              FUN_019edbc4(local_4ec,local_4f0);
              if (!bVar17) {
                *(undefined1 *)(piVar31 + 10) = 1;
                if (bVar1) {
                  FUN_019f8c54(piVar31[6],1);
                  piVar8 = (int *)piVar31[5];
                  DataMemoryBarrier(0xb);
                  do {
                    iVar7 = *piVar8;
                    bVar17 = (bool)hasExclusiveAccess(piVar8);
                  } while (!bVar17);
                  *piVar8 = iVar7 + -1;
                  ppppppppiVar26 = (int ********)0x0;
                  if (iVar7 == 1) {
                    DataMemoryBarrier(0xb);
                    FUN_0121cf18(piVar31[5]);
                  }
                }
                else {
                  FUN_019f8c54(piVar31[6],1);
                  piVar8 = (int *)piVar31[5];
                  DataMemoryBarrier(0xb);
                  do {
                    iVar7 = *piVar8;
                    bVar17 = (bool)hasExclusiveAccess(piVar8);
                  } while (!bVar17);
                  *piVar8 = iVar7 + -1;
                  ppppppppiVar26 = (int ********)&DAT_00000001;
                  if (iVar7 == 1) {
                    DataMemoryBarrier(0xb);
                    FUN_0121cf18(piVar31[5]);
                  }
                }
                iVar7 = uVar24 - ((uVar25 & 0xfffffffe) + uVar24 / 3);
                *(undefined1 *)(piVar31 + 7) = 1;
                bVar3 = 2;
LAB_011f8c04:
                *pbVar21 = *pbVar21 | bVar3;
                goto LAB_011f8c10;
              }
            }
            else if ((uVar15 & 1) == 0) {
              local_4f0 = (int ********)((uVar15 & 0xffffff) >> 0x10);
              local_4ec = (int ********)((uVar15 & 0xffffff) >> 8);
              goto LAB_011f8a3c;
            }
            *(undefined1 *)(piVar31 + 10) = 3;
            uVar32 = 4;
          }
          *(undefined1 *)(piVar31 + 7) = uVar32;
          bVar17 = true;
        }
        else {
          if ((*pbVar21 & 4) != 0) goto LAB_011f8ba8;
          iVar7 = FUN_019e84a0(piVar31 + 0x18,*param_3);
          bVar17 = true;
          if (iVar7 == 0) {
            iVar7 = uVar24 - ((uVar25 & 0xfffffffe) + uVar24 / 3);
            bVar3 = 4;
            goto LAB_011f8c04;
          }
        }
LAB_011f8ba8:
        uVar24 = uVar24 + 1;
        ppppppppiVar26 = (int ********)((int)ppppppppiVar26 + -1);
      } while (ppppppppiVar26 != (int ********)0x0);
      if (!bVar17) {
        iVar7 = 3;
LAB_011f8c10:
        param_2[0x6f] = iVar7;
        param_2[0x70] = (int)ppppppppiVar26;
        param_2[0x71] = (int)unaff_r10;
        FUN_011fd68c(param_2 + 0x76);
                    /* WARNING: Could not recover jumptable at 0x011f8c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_011f8c34 + *(int *)(&DAT_011f8c34 + param_2[0x6f] * 4)))();
        return;
      }
    }
    else {
      FUN_019ece98(*(undefined4 *)*param_3,((undefined4 *)*param_3)[1]);
    }
    uVar32 = 3;
LAB_011fcea4:
    local_4c4 = param_2 + 0x72;
    *(undefined1 *)local_4c4 = uVar32;
    break;
  case '\x04':
    piVar31 = param_2 + 0x79;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)*piVar31) {
    case '\0':
      iVar7 = param_2[0x74];
      if (*(int *)(iVar7 + 0x30) == 4) {
LAB_011f9750:
        param_2[0x75] = iVar7;
        *(undefined1 *)(param_2 + 0x78) = 0;
        goto switchD_011f7d20_caseD_3;
      }
      FUN_019ea9e4(&local_220);
      if (((char)local_220 == '\x04') || (uVar24 = (uint)local_220 & 0xff, uVar24 == 4))
      goto LAB_011f9750;
LAB_011f9868:
      *(undefined1 *)piVar31 = 1;
      uVar32 = 4;
      if (uVar24 == 5) goto LAB_011fcea4;
      local_38 = (int ********)CONCAT31((int3)((uint)local_220 >> 8),(char)uVar24);
      local_34 = SUB41(local_21c,0);
      uStack_33 = (undefined2)((uint)local_21c >> 8);
      uStack_31 = (undefined1)((uint)local_21c >> 0x18);
      pcVar35 = FUN_019a7d7c;
      if (((DAT_01d50f88 < 5) &&
          ((DAT_01d4c9b8 - 1 < 2 ||
           ((DAT_01d4c9b8 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4c9b0), cVar5 != '\0')))))) &&
         (iVar7 = FUN_01aaa278(DAT_01d4c9b0), iVar7 != 0)) {
        local_308 = (int ********)(DAT_01d4c9b0 + 0x1c);
        local_220 = (int ********)*local_308;
        local_21c = *(int *********)(DAT_01d4c9b0 + 0x20);
        if (local_21c == (int ********)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c22f40);
        }
        local_218 = *(int *********)(DAT_01d4c9b0 + 0x24);
        local_214 = *(int *********)(DAT_01d4c9b0 + 0x28);
        local_294 = (int ********)&local_d8;
        local_298 = (int ********)&local_220;
        local_30c = (int ********)&DAT_00000001;
        local_d4 = (int ********)&local_388;
        local_310 = (int ********)&local_298;
        local_388 = (int ********)&local_38;
        local_210 = (int ********)0x0;
        local_290 = (int ********)&DAT_01d2ea4c;
        local_d8 = (int ********)&DAT_005a3c64;
        local_384 = (int ********)FUN_019a7d7c;
        FUN_011fd8b0(&local_310);
      }
      else {
        iVar7 = DAT_01d4c9b0;
        if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
          local_3d4 = *(int *********)(DAT_01d4c9b0 + 0x14);
          local_3d0 = *(int *********)(DAT_01d4c9b0 + 0x18);
          local_3d8 = (int *******)&DAT_00000001;
          DataMemoryBarrier(0xb);
          puVar27 = DAT_01d4edc8;
          pcVar2 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar27 = &DAT_01cfc5e0;
            pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          unaff_r10 = &local_3d8;
          iVar6 = (*(code *)puVar27[3])(pcVar2,unaff_r10);
          if (iVar6 != 0) {
            local_380 = (int ********)(DAT_01d4c9b0 + 0x1c);
            local_220 = (int ********)*local_380;
            local_21c = *(int *********)(DAT_01d4c9b0 + 0x20);
            if (local_21c == (int ********)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c22f40);
            }
            local_310 = (int ********)&local_220;
            local_388 = (int ********)&local_310;
            local_218 = *(int *********)(DAT_01d4c9b0 + 0x24);
            local_214 = *(int *********)(DAT_01d4c9b0 + 0x28);
            local_30c = (int ********)&local_150;
            local_210 = (int ********)0x0;
            local_384 = (int ********)0x1;
            local_308 = (int ********)&DAT_01d2ea4c;
            local_14c = (int ********)&local_d8;
            local_d4 = (int ********)FUN_019a7d7c;
            local_150 = (int ********)&DAT_005a3c64;
            local_d8 = (int ********)&local_38;
            local_298 = (int ********)local_3d8;
            local_294 = local_3d4;
            local_290 = local_3d0;
            FUN_01aaa328(iVar7,pcVar2,puVar27[4],&local_298,&local_388);
          }
        }
      }
      local_298 = (int ********)0x8000000a;
      local_388 = (int ********)&local_38;
      local_384 = (int ********)FUN_019a7d7c;
      FUN_00664898(&local_310,&DAT_0057f5cb,&local_388);
      local_220 = local_310;
      local_21c = local_30c;
      local_218 = local_308;
      local_214 = local_298;
      local_210 = local_294;
      local_20c = local_290;
      local_208 = local_28c;
      ppppppppiStack_204 = local_288;
      ppppppppiStack_200 = ppppppppiStack_284;
      param_2[0x74] = (int)local_310;
      param_2[0x75] = (int)local_30c;
      param_2[0x76] = (int)local_308;
      param_2[0x77] = (int)local_298;
      param_2[0x78] = (int)local_294;
      *piVar31 = (int)local_290;
      param_2[0x7a] = (int)local_28c;
      param_2[0x7b] = (int)local_288;
      param_2[0x7c] = (int)ppppppppiStack_284;
      FUN_0069263c((uint)local_38 & 0xff,CONCAT13(uStack_31,CONCAT21(uStack_33,local_34)));
LAB_011fa3f0:
      if (param_2[0x74] != -0x80000000) {
        *(undefined1 *)((int)param_2 + 0x1ca) = 1;
        param_2[0x7d] = param_2[0x74];
        param_2[0x7e] = param_2[0x75];
        param_2[0x7f] = param_2[0x76];
        param_2[0x80] = param_2[0x77];
        param_2[0x81] = param_2[0x78];
        param_2[0x82] = param_2[0x79];
        param_2[0x83] = param_2[0x7a];
        param_2[0x84] = param_2[0x7b];
        param_2[0x85] = param_2[0x7c];
        piVar31 = param_2 + 0x6d;
        if (*piVar31 != 0) {
          *(undefined1 *)((int)param_2 + 0x259) = 0;
          param_2[0x95] = (int)piVar31;
          goto LAB_011fa534;
        }
        goto LAB_011fcd9c;
      }
      puVar30 = &DAT_80000016;
      if ((char)param_2[0x52] != '\x02') {
        iVar7 = *(int *)(param_2[0x4d] + 8);
        pcVar35 = (code *)(iVar7 + 0x98);
        FUN_00a981d4(pcVar35);
        if ((uint)-*(int *)(iVar7 + 0xa4) < (uint)(*(uint *)(iVar7 + 0xa0) < 3)) {
          unaff_r10 = (int ********)(param_2 + 0x4e);
          iVar6 = thunk_FUN_01bed842(iVar7 + 0xb8,unaff_r10,0x10);
          if ((iVar6 == 0) && (*(char *)(iVar7 + 0xca) == (char)param_2[0x52])) {
            *(char *)(iVar7 + 0xa8) = *(char *)(iVar7 + 0xca);
            *(uint *)(iVar7 + 0xa0) = 7;
            *(undefined4 *)(iVar7 + 0xa4) = 0;
            FUN_01bed4e2(iVar7 + 0xa9,unaff_r10,0x10);
            piVar31 = (int *)(iVar7 + 0xd0);
            DataMemoryBarrier(0xb);
            do {
              bVar17 = (bool)hasExclusiveAccess(piVar31);
            } while (!bVar17);
            *piVar31 = *piVar31 + 2;
            FUN_009dd354(pcVar35);
            iVar6 = 0;
            do {
              FUN_019e03e8(iVar7 + 8 + iVar6);
              iVar6 = iVar6 + 0x10;
              unaff_r10 = (int ********)(iVar7 + 8);
            } while (iVar6 != 0x80);
            goto LAB_011fce0c;
          }
        }
        FUN_009dd354(pcVar35);
      }
LAB_011fce0c:
      local_4c4 = param_2 + 0x72;
      FUN_011fd48c(param_2[0x6d],param_2[0x6e]);
      FUN_011f6f44(param_2 + 0x55);
      piVar31 = (int *)param_2[0x4d];
      *(undefined1 *)((int)param_2 + 0x1cb) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar31;
        bVar17 = (bool)hasExclusiveAccess(piVar31);
      } while (!bVar17);
      *piVar31 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0121cce0(param_2[0x4d]);
      }
      *(undefined1 *)(param_2 + 0x73) = 0;
      FUN_010a7c94(param_2 + 0x2d);
      *(undefined1 *)local_4c4 = 1;
      if (puVar30 != (undefined1 *)0x80000017) goto LAB_011f7b60;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c239b4);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c239b4);
    case '\x03':
switchD_011f7d20_caseD_3:
      FUN_011f6ff0(&local_220,param_2 + 0x75,param_3);
      if ((char)local_220 != '\x05') {
        uVar24 = (uint)local_220 & 0xff;
        if (uVar24 != 4) goto LAB_011f9868;
        *(undefined1 *)piVar31 = 1;
        if ((DAT_01d50f88 < 3) &&
           (((DAT_01d4c9c4 - 1 < 2 ||
             ((DAT_01d4c9c4 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4c9bc), cVar5 != '\0')))) &&
            (iVar7 = FUN_01aaa278(DAT_01d4c9bc), iVar7 != 0)))) {
          local_308 = (int ********)(DAT_01d4c9bc + 0x1c);
          local_220 = (int ********)*local_308;
          local_21c = *(int *********)(DAT_01d4c9bc + 0x20);
          if (local_21c == (int ********)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c22f30);
          }
          local_294 = (int ********)&local_388;
          local_218 = *(int *********)(DAT_01d4c9bc + 0x24);
          local_214 = *(int *********)(DAT_01d4c9bc + 0x28);
          local_310 = (int ********)&local_298;
          local_30c = (int ********)&DAT_00000001;
          local_210 = (int ********)0x0;
          local_290 = (int ********)&DAT_01d2ea4c;
          local_384 = (int ********)&DAT_00000035;
          local_388 = (int ********)0x401d2a;
          local_298 = (int ********)&local_220;
          FUN_011fd7b8(&local_310);
        }
        else {
          iVar7 = DAT_01d4c9bc;
          if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
            local_3e4 = *(int *********)(DAT_01d4c9bc + 0x14);
            local_3e0 = *(int *********)(DAT_01d4c9bc + 0x18);
            local_3e8 = (int ********)&DAT_00000003;
            DataMemoryBarrier(0xb);
            puVar27 = DAT_01d4edc8;
            pcVar2 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar27 = &DAT_01cfc5e0;
              pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar6 = (*(code *)puVar27[3])(pcVar2,&local_3e8);
            if (iVar6 != 0) {
              local_380 = (int ********)(DAT_01d4c9bc + 0x1c);
              local_220 = (int ********)*local_380;
              local_21c = *(int *********)(DAT_01d4c9bc + 0x20);
              if (local_21c == (int ********)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c22f30);
              }
              local_388 = (int ********)&local_310;
              local_218 = *(int *********)(DAT_01d4c9bc + 0x24);
              local_30c = (int ********)&local_d8;
              local_214 = *(int *********)(DAT_01d4c9bc + 0x28);
              local_210 = (int ********)0x0;
              local_384 = (int ********)&DAT_00000001;
              local_308 = (int ********)&DAT_01d2ea4c;
              local_d4 = (int ********)&DAT_00000035;
              local_d8 = (int ********)0x401d2a;
              local_298 = local_3e8;
              local_294 = local_3e4;
              local_290 = local_3e0;
              local_310 = (int ********)&local_220;
              FUN_01aaa328(iVar7,pcVar2,puVar27[4],&local_298,&local_388);
            }
          }
        }
        local_220 = (int ********)0x8000000d;
        pcVar35 = (code *)thunk_FUN_01be5118(0x24);
        unaff_r10 = (int ********)&DAT_00000024;
        if ((int ********)pcVar35 == (int ********)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,0x24);
        }
        FUN_01bed4e2(pcVar35,&DAT_00401d48,0x24);
        local_298 = local_220;
        local_294 = local_21c;
        local_290 = local_218;
        local_28c = local_214;
        local_288 = local_210;
        ppppppppiStack_284 = local_20c;
        param_2[0x76] = 0x24;
        param_2[0x74] = 0x24;
        param_2[0x75] = (int)pcVar35;
        param_2[0x77] = (int)local_220;
        param_2[0x78] = (int)local_21c;
        param_2[0x79] = (int)local_218;
        param_2[0x7a] = (int)local_214;
        param_2[0x7b] = (int)local_210;
        param_2[0x7c] = (int)local_20c;
        goto LAB_011fa3f0;
      }
      uVar32 = 4;
      *(undefined1 *)piVar31 = 3;
      goto LAB_011fcea4;
    }
    break;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x259)) {
    case 0:
      piVar31 = (int *)param_2[0x95];
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22df0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22df0);
    case 3:
      goto LAB_011fc4b4;
    case 4:
      puVar27 = (undefined4 *)param_2[0x98];
      goto LAB_011fc9b8;
    }
LAB_011fa534:
    local_4c0 = param_2 + 0x86;
    *(undefined1 *)(param_2 + 0x96) = 0;
    FUN_019ac130(&local_220,1);
    FUN_019fa158(local_4c0,500000000,local_220,local_21c,local_218);
    param_2[0x8c] = (int)piVar31;
    param_2[0x8d] = (int)(piVar31 + 1);
    iVar6 = 2;
    iVar7 = 0;
    param_2[0x8b] = 2;
    param_2[0x8a] = 0;
    while( true ) {
      local_4c0 = param_2 + 0x86;
      local_4d0 = (undefined1 *)((int)param_2 + 0x259);
      if (iVar6 == iVar7) break;
      param_2[0x8a] = iVar7 + 1;
      iVar6 = param_2[iVar7 + 0x8c];
      param_2[0x94] = iVar6;
      iVar7 = *local_4c0;
      iVar18 = param_2[0x87];
      iVar19 = param_2[0x88];
      uVar38 = FUN_019ef7f4(0x1c24294);
      uVar16 = (undefined4)((ulonglong)uVar38 >> 0x20);
      FUN_019dc4f8(&local_220,(int)uVar38,uVar16,uVar16,iVar7,iVar18,iVar19,0x1c24294);
      local_1d0 = iVar6;
      FUN_01bed4e2(&local_298,&local_220,0x58);
      FUN_01bed4e2(param_2 + 0x98,&local_298,0x58);
LAB_011fc4b4:
      iVar7 = *param_3;
      bVar3 = FUN_019ec70c();
      FUN_01209998(&local_220,*(undefined4 *)param_2[0xac],iVar7);
      if (((uint)local_220 & 1) != 0) {
        iVar7 = FUN_019ee264(bVar3 == 2 | bVar3 & 1,param_2 + 0x98,iVar7);
        uVar24 = 1;
        if (iVar7 == 0) goto LAB_011fc5bc;
        uVar4 = 3;
LAB_011fce98:
        local_4d0 = (undefined1 *)((int)param_2 + 0x259);
        uVar32 = 5;
        *local_4d0 = uVar4;
        goto LAB_011fcea4;
      }
      local_310 = local_218;
      local_30c = local_214;
      local_308 = local_210;
      local_304 = local_20c;
      uVar24 = 0;
LAB_011fc5bc:
      *(undefined1 *)(param_2 + 0x96) = 1;
      param_2[0x8e] = uVar24;
      param_2[0x8f] = 0;
      param_2[0x90] = (int)local_310;
      param_2[0x91] = (int)local_30c;
      param_2[0x92] = (int)local_308;
      param_2[0x93] = (int)local_304;
      FUN_01431b40(param_2 + 0x98);
      if ((param_2[0x8e] & 1U) == 0) {
        if (param_2[0x90] != 0 || param_2[0x91] != 0) {
          local_d8 = (int ********)param_2[0x90];
          local_d4 = (int ********)param_2[0x91];
          local_d0 = (undefined4 *)param_2[0x92];
          local_cc = param_2[0x93];
          if (((DAT_01d50f88 < 5) &&
              ((DAT_01d4c994 - 1 < 2 ||
               ((DAT_01d4c994 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4c98c), cVar5 != '\0')))))) &&
             (iVar7 = FUN_01aaa278(DAT_01d4c98c), iVar7 != 0)) {
            ppppppppiVar26 = *(int *********)(DAT_01d4c98c + 0x20);
            if (ppppppppiVar26 == (int ********)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c22e00);
            }
            local_380 = *(int *********)(DAT_01d4c98c + 0x24);
            local_37c = *(int *********)(DAT_01d4c98c + 0x28);
            local_388 = *(int *********)(DAT_01d4c98c + 0x1c);
            local_378 = (int *)0x0;
            local_28 = 0x3d;
            local_2c = (int ********)0x401c5e;
            local_384 = ppppppppiVar26;
            if (ppppppppiVar26 == (int ********)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c22e00);
            }
            local_210 = (int ********)local_60;
            local_214 = (int ********)&local_310;
            local_21c = (int ********)&local_2c;
            local_220 = (int ********)&local_388;
            local_300 = (int ********)&DAT_00000001;
            local_390 = 2;
            local_20c = (int ********)&DAT_01c22e10;
            local_218 = (int ********)&DAT_01d2ea4c;
            local_394 = (int ********)&local_220;
            local_38c = (undefined4 *)(DAT_01d4c98c + 0x1c);
            local_310 = local_388;
            local_30c = ppppppppiVar26;
            local_308 = local_380;
            local_304 = local_37c;
            local_60[0] = (int ********)&local_d8;
            FUN_01aaaecc(DAT_01d4c98c,&local_394);
            iVar7 = DAT_01d4c98c;
            if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
              uVar16 = *(undefined4 *)(DAT_01d4c98c + 0x14);
              local_30 = *(undefined4 **)(DAT_01d4c98c + 0x18);
              local_34 = (undefined1)uVar16;
              uStack_33 = (undefined2)((uint)uVar16 >> 8);
              uStack_31 = (undefined1)((uint)uVar16 >> 0x18);
              local_38 = (int ********)&DAT_00000001;
              DataMemoryBarrier(0xb);
              puVar27 = DAT_01d4edc8;
              pcVar2 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar27 = &DAT_01cfc5e0;
                pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar6 = (*(code *)puVar27[3])(pcVar2,&local_38);
              if (iVar6 != 0) {
                local_14c = (int ********)CONCAT13(uStack_31,CONCAT21(uStack_33,local_34));
                local_150 = local_38;
                local_148 = local_30;
                FUN_01aaa328(iVar7,pcVar2,puVar27[4],&local_150,&local_394);
              }
            }
          }
          else {
            iVar7 = DAT_01d4c98c;
            if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
              local_54 = *(int *********)(DAT_01d4c98c + 0x14);
              local_50 = *(undefined4 **)(DAT_01d4c98c + 0x18);
              local_58 = (int ********)&DAT_00000001;
              DataMemoryBarrier(0xb);
              puVar27 = DAT_01d4edc8;
              pcVar2 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar27 = &DAT_01cfc5e0;
                pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar6 = (*(code *)puVar27[3])(pcVar2,&local_58);
              if (iVar6 != 0) {
                ppppppppiVar11 = *(int *********)(DAT_01d4c98c + 0x1c);
                ppppppppiVar26 = *(int *********)(DAT_01d4c98c + 0x20);
                if (ppppppppiVar26 == (int ********)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c22e00);
                }
                local_380 = *(int *********)(DAT_01d4c98c + 0x24);
                local_37c = *(int *********)(DAT_01d4c98c + 0x28);
                local_378 = (int *)0x0;
                local_390 = 0x3d;
                local_394 = (int ********)0x401c5e;
                local_388 = ppppppppiVar11;
                local_384 = ppppppppiVar26;
                if (ppppppppiVar26 == (int ********)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c22e00);
                }
                local_214 = (int ********)&local_310;
                local_210 = (int ********)&local_2c;
                local_21c = (int ********)&local_394;
                local_220 = (int ********)&local_388;
                local_300 = (int ********)&DAT_00000001;
                local_34 = 2;
                uStack_33 = 0;
                uStack_31 = 0;
                local_20c = (int ********)&DAT_01c22e10;
                local_218 = (int ********)&DAT_01d2ea4c;
                local_150 = local_58;
                local_14c = local_54;
                local_148 = local_50;
                local_310 = ppppppppiVar11;
                local_30c = ppppppppiVar26;
                local_308 = local_380;
                local_304 = local_37c;
                local_38 = (int ********)&local_220;
                local_30 = (undefined4 *)(DAT_01d4c98c + 0x1c);
                local_2c = (int ********)&local_d8;
                FUN_01aaa328(iVar7,pcVar2,puVar27[4],&local_150,&local_38);
              }
            }
          }
          FUN_00b91e68(local_d0,local_cc);
        }
      }
      else {
        if ((DAT_01d50f88 < 5) &&
           (((DAT_01d4c9a0 - 1 < 2 ||
             ((DAT_01d4c9a0 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4c998), cVar5 != '\0')))) &&
            (iVar7 = FUN_01aaa278(DAT_01d4c998), iVar7 != 0)))) {
          if (*(int *********)(DAT_01d4c998 + 0x20) == (int ********)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c22e20);
          }
          local_d4 = (int ********)&local_38;
          local_218 = *(int *********)(DAT_01d4c998 + 0x24);
          local_214 = *(int *********)(DAT_01d4c998 + 0x28);
          local_148 = (undefined4 *)(DAT_01d4c998 + 0x1c);
          local_220 = (int ********)*local_148;
          local_150 = (int ********)&local_d8;
          local_210 = (int ********)0x0;
          local_14c = (int ********)&DAT_00000001;
          local_d0 = (undefined4 *)&DAT_01d2ea4c;
          local_34 = 0x49;
          uStack_33 = 0;
          uStack_31 = 0;
          local_38 = (int ********)0x401c7c;
          local_21c = *(int *********)(DAT_01d4c998 + 0x20);
          local_d8 = (int ********)&local_220;
          FUN_01aaaecc(DAT_01d4c998,&local_150);
          iVar7 = DAT_01d4c998;
          if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
            local_384 = *(int *********)(DAT_01d4c998 + 0x14);
            local_380 = *(int *********)(DAT_01d4c998 + 0x18);
            local_388 = (int ********)&DAT_00000001;
            DataMemoryBarrier(0xb);
            puVar27 = DAT_01d4edc8;
            pcVar2 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar27 = &DAT_01cfc5e0;
              pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar6 = (*(code *)puVar27[3])(pcVar2,&local_388);
            if (iVar6 != 0) {
              local_310 = local_388;
              local_30c = local_384;
              local_308 = local_380;
              FUN_01aaa328(iVar7,pcVar2,puVar27[4],&local_310,&local_150);
            }
          }
        }
        else {
          iVar7 = DAT_01d4c998;
          if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
            local_44 = *(int *********)(DAT_01d4c998 + 0x14);
            local_40 = *(int *********)(DAT_01d4c998 + 0x18);
            local_48 = (int ********)&DAT_00000001;
            DataMemoryBarrier(0xb);
            puVar27 = DAT_01d4edc8;
            pcVar2 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar27 = &DAT_01cfc5e0;
              pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar6 = (*(code *)puVar27[3])(pcVar2,&local_48);
            if (iVar6 != 0) {
              if (*(int *********)(DAT_01d4c998 + 0x20) == (int ********)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c22e20);
              }
              local_d8 = (int ********)&local_388;
              local_218 = *(int *********)(DAT_01d4c998 + 0x24);
              local_214 = *(int *********)(DAT_01d4c998 + 0x28);
              local_384 = (int ********)&local_150;
              local_210 = (int ********)0x0;
              local_d4 = (int ********)&DAT_00000001;
              local_380 = (int ********)&DAT_01d2ea4c;
              local_14c = (int ********)&DAT_00000049;
              local_150 = (int ********)0x401c7c;
              local_310 = local_48;
              local_30c = local_44;
              local_308 = local_40;
              local_388 = (int ********)&local_220;
              local_220 = *(int *********)(DAT_01d4c998 + 0x1c);
              local_21c = *(int *********)(DAT_01d4c998 + 0x20);
              local_d0 = (undefined4 *)(DAT_01d4c998 + 0x1c);
              FUN_01aaa328(iVar7,pcVar2,puVar27[4],&local_310,&local_d8);
            }
          }
        }
        FUN_019f5854(*(undefined4 *)param_2[0x94]);
        puVar27 = (undefined4 *)param_2[0x94];
        param_2[0x98] = (int)puVar27;
LAB_011fc9b8:
        FUN_01209998(&local_220,*puVar27,*param_3);
        if (((uint)local_220 & 1) != 0) {
          uVar4 = 4;
          goto LAB_011fce98;
        }
        if (local_218 != (int ********)0x0 || local_214 != (int ********)0x0) {
          FUN_00b91e68(local_210,local_20c);
        }
      }
      iVar6 = param_2[0x8b];
      if ((param_2[0x8e] & 1U) == 0) {
        *(undefined1 *)(param_2 + 0x96) = 0;
      }
      iVar7 = param_2[0x8a];
      *(undefined1 *)(param_2 + 0x96) = 0;
    }
    *local_4d0 = 1;
    FUN_011fd9ac(local_4c0);
LAB_011fcd9c:
    *(undefined1 *)((int)param_2 + 0x1ca) = 0;
    local_220 = (int ********)param_2[0x7d];
    local_21c = (int ********)param_2[0x7e];
    local_218 = (int ********)param_2[0x7f];
    local_210 = (int ********)&local_298;
    local_214 = (int ********)(param_2 + 0x4d);
    local_298 = (int ********)CONCAT31(local_298._1_3_,4);
    FUN_00ab3338((*local_214)[2]);
    puVar30 = (undefined1 *)param_2[0x80];
    pcVar35 = (code *)param_2[0x82];
    local_3c8 = param_2[0x83];
    iStack_3c4 = param_2[0x84];
    iStack_3c0 = param_2[0x85];
    *(undefined1 *)((int)param_2 + 0x1ca) = 0;
    unaff_r10 = (int ********)param_2[0x81];
    goto LAB_011fce0c;
  }
  *param_1 = 0x80000017;
  uVar32 = 3;
LAB_011fcebc:
  *(undefined1 *)((int)param_2 + 0x2e2) = uVar32;
  return;
}

