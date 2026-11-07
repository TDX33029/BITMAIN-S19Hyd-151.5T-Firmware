// FUN_00f43368 @ 00f43368 size=11088 calls_out=65 calls_in=1
// strings: Error sending new job | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f43368(undefined1 *param_1,int ******param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined2 uVar2;
  bool bVar3;
  longlong lVar4;
  char *pcVar5;
  undefined1 uVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  int ******ppppppiVar10;
  int *piVar11;
  undefined4 *puVar12;
  int ***pppiVar13;
  uint uVar14;
  int iVar15;
  int ******ppppppiVar16;
  int *****pppppiVar17;
  int ****ppppiVar18;
  undefined1 auVar19 [4];
  int ******unaff_r6;
  int *****pppppiVar20;
  undefined4 uVar21;
  uint uVar22;
  int ******ppppppiVar23;
  int *****pppppiVar24;
  int ******ppppppiVar25;
  bool bVar26;
  ulonglong uVar27;
  undefined8 uVar28;
  int ******local_1298;
  int ******local_1290;
  int *****local_1288;
  undefined1 *local_1284;
  int ******local_1278;
  undefined1 auStack_1268 [184];
  int ******local_11b0;
  int ******local_11ac;
  int ******ppppppiStack_11a8;
  undefined4 local_c70;
  int ******local_c6c;
  undefined1 local_c68 [4];
  int *****local_c64;
  int ******local_c60;
  code *local_c5c;
  uint local_c48 [2];
  undefined4 local_c40;
  undefined4 uStack_c3c;
  int *****local_ba0;
  int *****local_b9c;
  int *****pppppiStack_b98;
  int *****pppppiStack_b94;
  int *****pppppiStack_b90;
  int ******local_b8c;
  int ******local_b88;
  undefined4 local_b84;
  undefined4 local_b80;
  undefined4 uStack_b7c;
  undefined4 uStack_b78;
  uint local_b68;
  uint local_b64;
  undefined4 *local_b48;
  undefined1 auStack_808 [216];
  undefined4 local_730;
  undefined4 uStack_72c;
  undefined4 local_728;
  undefined2 local_724;
  undefined1 local_722;
  undefined4 local_720;
  undefined4 uStack_71c;
  undefined1 local_718;
  undefined2 local_714;
  undefined1 local_712;
  undefined1 auStack_710 [184];
  int ******local_658;
  int local_654;
  int ******local_650;
  int ******local_64c;
  int ******ppppppiStack_648;
  int ******ppppppiStack_644;
  int ******local_640 [46];
  undefined1 auStack_588 [200];
  undefined4 local_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined2 local_4b4;
  undefined1 local_4b2;
  int *****local_4b0;
  int *****pppppiStack_4ac;
  int *****pppppiStack_4a8;
  int *****local_4a0;
  undefined4 *puStack_49c;
  undefined4 uStack_498;
  undefined2 local_494;
  undefined1 local_492;
  int *****local_490;
  undefined4 *puStack_48c;
  undefined4 uStack_488;
  undefined2 local_484;
  undefined1 local_482;
  int ******local_480;
  int ******local_47c;
  int ******local_478;
  undefined4 local_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 local_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined2 local_454;
  undefined1 local_452;
  int ******local_450;
  int ******local_44c;
  int ******local_448;
  int ******local_440;
  int ******local_43c;
  int ******local_438;
  int *****local_430;
  undefined4 *local_42c;
  undefined4 uStack_428;
  undefined2 local_424;
  undefined1 local_422;
  int ******local_420;
  int ******local_41c;
  undefined4 local_418;
  int *****pppppiStack_414;
  undefined1 local_2f1;
  int ******local_2f0;
  int ******local_2ec;
  int ******local_2e8;
  int ******local_2e0;
  int ******local_2dc;
  undefined4 local_2d8;
  int *****local_2d4 [46];
  int *****local_21c;
  int *****pppppiStack_218;
  int *****pppppiStack_214;
  int ******local_1b8;
  int ******local_1b4;
  int ******local_1b0;
  int local_1ac [46];
  int local_f4;
  undefined4 local_f0;
  int *local_e8;
  int ******local_88;
  int ******local_84;
  undefined4 *local_80;
  int ******local_7c;
  int ******local_78;
  undefined4 *local_74;
  int ******local_70;
  int ******local_6c;
  undefined4 *local_68;
  int ******local_64;
  int ******local_60;
  undefined4 *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int *****local_50;
  undefined4 local_4c;
  int ******local_48;
  int ******local_44;
  undefined4 local_40;
  int ******local_38;
  int ******local_34;
  undefined4 *local_30;
  
  ppppppiVar23 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x1be)) {
  case 0:
    *(undefined2 *)(param_2 + 0x6f) = 0x101;
    *(undefined2 *)((int)param_2 + 0x1ba) = 0x100;
    pppppiVar17 = param_2[0x6d];
    param_2[0x6c] = pppppiVar17;
    FUN_01bed4e2(param_2,param_2 + 0x36,0xd8);
    ppppiVar18 = pppppiVar17[2];
    FUN_019606b4(ppppiVar18 + 0x22);
    DataMemoryBarrier(0xb);
    *(undefined2 *)(param_2 + 0x6e) = *(undefined2 *)(ppppiVar18 + 0x25);
    FUN_00b92330();
    if (*param_2 == (int *****)0x80000000) {
LAB_00f43a08:
      *(undefined2 *)((int)param_2 + 0x1bb) = 0;
      *(undefined1 *)((int)param_2 + 0x1bd) = 0;
      pppppiVar17 = param_2[0x6c];
      FUN_01bed4e2(auStack_808,param_2,0xd8);
      uVar2 = *(undefined2 *)(param_2 + 0x6e);
      FUN_01bed4e2(&local_11b0,&local_c70,0x540);
      FUN_01bed4e2(param_2 + 0x70,&local_11b0,0x540);
      *(undefined2 *)(param_2 + 0x1c1) = uVar2;
      *(undefined1 *)((int)param_2 + 0x709) = 0;
      param_2[0x1c0] = pppppiVar17;
LAB_00f43a80:
      local_1278 = param_2 + 0x70;
      *(undefined2 *)((int)param_2 + 0x706) = 0;
      *(undefined1 *)(param_2 + 0x1c2) = 0;
      FUN_01bed4e2(param_2 + 0x154,param_2 + 0x18a,0xd8);
      if (param_2[0x154] == (int *****)0x80000000) {
        local_2e0 = (int ******)param_2[0x1b8];
        local_2dc = (int ******)param_2[0x1b9];
        local_2d8 = (int ******)param_2[0x1ba];
        FUN_0195c644(&local_c70,&local_2e0,param_2[0x156],param_2[0x157],&local_2e0);
        ppppppiVar10 = local_c6c;
        if (local_c70 != (int ******)&DAT_80000001) {
          local_1288 = local_c64;
          auVar19 = local_c68;
          local_640[0] = (int ******)&DAT_80000000;
          ppppppiVar25 = local_c70;
LAB_00f43b88:
          FUN_01bed4e2((uint)local_640 | 4,&local_1b8,0xb4);
          *(undefined1 *)(param_2 + 0x1c2) = 0;
          *(undefined1 *)((int)param_2 + 0x707) = 1;
          *(undefined1 *)((int)param_2 + 0x706) = 0;
          FUN_006666fc(&local_1b8,param_2[0x186],param_2[0x187]);
          *(undefined1 *)((int)param_2 + 0x707) = 0;
          FUN_01bed4e2(&local_c64,local_640,0xb8);
          local_c70 = local_1b8;
          local_c6c = local_1b4;
          local_c68 = (undefined1  [4])local_1b0;
          FUN_01bed4e2(auStack_588,&local_c70,0xc4);
          FUN_01bed4e2(local_1278,auStack_588,0xc4);
          *(undefined1 *)(param_2 + 0xde) = 0;
          param_2[0xa1] = (int *****)ppppppiVar25;
          param_2[0xa2] = (int *****)ppppppiVar10;
          param_2[0xa3] = (int *****)auVar19;
          param_2[0xa4] = pppppiVar17;
          param_2[0xa5] = local_1288;
LAB_00f43c48:
          *(undefined2 *)((int)param_2 + 0x37b) = 0x101;
          param_2[0xa6] = local_1288;
          FUN_01bed4e2(param_2 + 0xa7,param_2 + 0x73,0xb8);
          *(undefined1 *)((int)param_2 + 0x37a) = 1;
          param_2[0xd5] = param_2[0x70];
          param_2[0xd6] = param_2[0x71];
          param_2[0xd7] = param_2[0x72];
          *(undefined1 *)((int)param_2 + 0x379) = 1;
          param_2[0xd8] = param_2[0xa1];
          param_2[0xd9] = param_2[0xa2];
          param_2[0xda] = param_2[0xa3];
          ppppiVar18 = *pppppiVar17;
          *(undefined1 *)(param_2 + 0xeb) = 0;
          param_2[0xe0] = (int *****)(ppppiVar18 + 2);
switchD_00f435ac_caseD_3:
          FUN_006177f4(&local_4b0,param_2 + 0xe0,param_3);
          if (local_4b0 != (int *****)0x0) {
            param_2[0xdb] = local_4b0;
            param_2[0xdc] = pppppiStack_4ac;
            param_2[0xdd] = pppppiStack_4a8;
            cVar8 = *(char *)(param_2 + 0xeb);
            bVar26 = cVar8 == '\x03';
            if (bVar26) {
              cVar8 = *(char *)(param_2 + 0xea);
            }
            if (bVar26 && cVar8 == '\x03') {
              FUN_0193c3cc(param_2 + 0xe2);
            }
            pppppiVar20 = param_2[0xa6];
            pppppiVar17 = param_2[0xdd];
            do {
              ppppiVar18 = *pppppiVar20;
              bVar26 = (bool)hasExclusiveAccess(pppppiVar20);
            } while (!bVar26);
            *pppppiVar20 = (int ****)((int)ppppiVar18 + 1);
            if ((int)ppppiVar18 < 0) goto LAB_00f469f0;
            *(undefined1 *)((int)param_2 + 0x3a1) = 0;
            param_2[0xe6] = pppppiVar17;
            param_2[0xe7] = pppppiVar20;
LAB_00f43d40:
            param_2[0xe5] = pppppiVar20;
            *(undefined1 *)(param_2 + 0xe8) = 1;
            param_2[0xe4] = pppppiVar17;
            FUN_01a36648(param_2 + 0xe0);
            pppppiVar17 = param_2[0xe4];
            param_2[0xe9] = pppppiVar17;
            param_2[0xea] = (int *****)0x0;
LAB_00f43d6c:
            cVar8 = *(char *)(pppppiVar17[1] + 2);
            *(undefined1 *)(param_2 + 0xea) = 1;
            if (cVar8 == '\0') {
              if ((DAT_01d50f88 < 3) &&
                 (((DAT_01d50624 - 1 < 2 ||
                   ((DAT_01d50624 != 0 && (cVar8 = FUN_01aaafa8(&DAT_01d5061c), cVar8 != '\0')))) &&
                  (iVar9 = FUN_01aaa278(DAT_01d5061c), iVar9 != 0)))) {
                if (*(int *******)(DAT_01d5061c + 0x20) == (int ******)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d25d30);
                }
                local_c68 = *(undefined1 (*) [4])(DAT_01d5061c + 0x24);
                local_c64 = *(int ******)(DAT_01d5061c + 0x28);
                local_5c = (undefined4 *)(DAT_01d5061c + 0x1c);
                local_c70 = (int ******)*local_5c;
                local_41c = (int ******)&local_48;
                local_420 = (int ******)&local_c70;
                local_60 = (int ******)&DAT_00000001;
                local_64 = (int ******)&local_420;
                local_c60 = (int ******)0x0;
                local_418 = (int *****)&DAT_01d2ea4c;
                local_48 = (int ******)&DAT_00570450;
                local_44 = (int ******)&DAT_00000011;
                local_c6c = *(int *******)(DAT_01d5061c + 0x20);
                FUN_01aaaecc(DAT_01d5061c,&local_64);
                iVar9 = DAT_01d5061c;
                if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
                  local_2dc = *(int *******)(DAT_01d5061c + 0x14);
                  local_2d8 = *(int *******)(DAT_01d5061c + 0x18);
                  local_2e0 = (int ******)&DAT_00000003;
                  DataMemoryBarrier(0xb);
                  puVar12 = DAT_01d4edc8;
                  pcVar5 = DAT_01d4edc4;
                  if (DAT_01d51174 != 2) {
                    puVar12 = &DAT_01cfc5e0;
                    pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                  }
                  iVar15 = (*(code *)puVar12[3])(pcVar5,&local_2e0);
                  if (iVar15 != 0) {
                    local_1b8 = local_2e0;
                    local_1b4 = local_2dc;
                    local_1b0 = local_2d8;
                    FUN_01aaa328(iVar9,pcVar5,puVar12[4],&local_1b8,&local_64);
                  }
                }
              }
              else {
                iVar9 = DAT_01d5061c;
                if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
                  local_44c = *(int *******)(DAT_01d5061c + 0x14);
                  local_448 = *(int *******)(DAT_01d5061c + 0x18);
                  local_450 = (int ******)&DAT_00000003;
                  DataMemoryBarrier(0xb);
                  puVar12 = DAT_01d4edc8;
                  pcVar5 = DAT_01d4edc4;
                  if (DAT_01d51174 != 2) {
                    puVar12 = &DAT_01cfc5e0;
                    pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                  }
                  iVar15 = (*(code *)puVar12[3])(pcVar5,&local_450);
                  if (iVar15 != 0) {
                    if (*(int *******)(DAT_01d5061c + 0x20) == (int ******)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d25d30);
                    }
                    local_2dc = (int ******)&local_64;
                    local_c68 = *(undefined1 (*) [4])(DAT_01d5061c + 0x24);
                    local_c64 = *(int ******)(DAT_01d5061c + 0x28);
                    local_2e0 = (int ******)&local_c70;
                    local_420 = (int ******)&local_2e0;
                    local_c60 = (int ******)0x0;
                    local_41c = (int ******)&DAT_00000001;
                    local_64 = (int ******)&DAT_00570450;
                    local_2d8 = (int ******)&DAT_01d2ea4c;
                    local_60 = (int ******)&DAT_00000011;
                    local_1b8 = local_450;
                    local_1b4 = local_44c;
                    local_1b0 = local_448;
                    local_c70 = *(int *******)(DAT_01d5061c + 0x1c);
                    local_c6c = *(int *******)(DAT_01d5061c + 0x20);
                    local_418 = (int *****)(DAT_01d5061c + 0x1c);
                    FUN_01aaa328(iVar9,pcVar5,puVar12[4],&local_1b8,&local_420);
                  }
                }
              }
              FUN_01a35774(param_2 + 0x140,param_2[0xe4]);
              param_2[0xe9] = (int *****)(param_2 + 0x140);
              *(undefined1 *)(param_2 + 0xeb) = 0;
switchD_00f435ec_caseD_4:
              uVar22 = FUN_00f40228(param_2 + 0xe9,param_3);
              uVar6 = 4;
              if ((uVar22 & 0xff) == 0x1c) {
LAB_00f46b9c:
                local_1290 = (int ******)((int)param_2 + 0x3a1);
                *(undefined1 *)local_1290 = uVar6;
                uVar6 = 4;
                goto LAB_00f469f4;
              }
              if (*(char *)(param_2 + 0xeb) == '\x04') {
                FUN_005f1388(param_2 + 0xec);
              }
              if ((uVar22 & 0xff) == 0x1b) {
                FUN_005fb2fc(param_2 + 0x140);
                goto LAB_00f43d84;
              }
              FUN_005fb2fc(param_2 + 0x140);
LAB_00f4489c:
              if (*(char *)(param_2 + 0xe8) != '\0') {
                pppppiVar17 = param_2[0xe5];
                DataMemoryBarrier(0xb);
                do {
                  ppppiVar18 = *pppppiVar17;
                  bVar26 = (bool)hasExclusiveAccess(pppppiVar17);
                } while (!bVar26);
                *pppppiVar17 = (int ****)((int)ppppiVar18 + -1);
                if (ppppiVar18 == (int ****)0x1) {
                  DataMemoryBarrier(0xb);
                  FUN_0195b288(param_2[0xe5]);
                }
              }
              *(undefined1 *)(param_2 + 0xe8) = 0;
              bVar26 = true;
            }
            else {
LAB_00f43d84:
              pppppiVar17 = (int *****)*param_2[0xe4];
              do {
                ppppiVar18 = *pppppiVar17;
                bVar26 = (bool)hasExclusiveAccess(pppppiVar17);
              } while (!bVar26);
              *pppppiVar17 = (int ****)((int)ppppiVar18 + 1);
              if ((int)ppppiVar18 < 0) {
LAB_00f469f0:
                    /* WARNING: Does not return */
                pcVar1 = (code *)software_udf(0xfdee,0xf469f0);
                (*pcVar1)();
              }
              *(undefined1 *)((int)param_2 + 0x3fb) = 0;
              *(undefined1 *)(param_2 + 0xe8) = 0;
              pppppiVar20 = param_2[0xe5];
              param_2[0xe9] = pppppiVar17;
              pppppiVar17 = pppppiVar17 + 2;
              param_2[0xfc] = pppppiVar17;
              param_2[0xfd] = pppppiVar20;
LAB_00f43de4:
              ppppppiVar25 = param_2 + 0xfa;
              *ppppppiVar25 = pppppiVar20;
              *(undefined1 *)((int)param_2 + 0x3fa) = 0;
              *(undefined2 *)(param_2 + 0xfe) = 0x100;
              pppppiVar20 = (int *****)pppppiVar17[2];
              do {
                ppppiVar18 = *pppppiVar20;
                bVar26 = (bool)hasExclusiveAccess(pppppiVar20);
              } while (!bVar26);
              *pppppiVar20 = (int ****)((int)ppppiVar18 + 1);
              if ((int)ppppiVar18 < 0) goto LAB_00f469f0;
              pppppiVar24 = pppppiVar20 + 0x11;
              do {
                bVar26 = (bool)hasExclusiveAccess(pppppiVar24);
              } while (!bVar26);
              *pppppiVar24 = (int ****)((int)*pppppiVar24 + 1);
              param_2[0xfb] = pppppiVar20;
              FUN_01a15574(param_2 + 0xf2,pppppiVar17[3]);
              FUN_01a367d8(&local_420,*ppppppiVar25);
              *(undefined1 *)(param_2 + 0xfe) = 1;
              FUN_01a36648(param_2 + 0xf6,ppppppiVar25);
              ppppppiVar10 = local_41c;
              ppppppiVar25 = local_420;
              uVar6 = (undefined1)local_418;
              if (local_420 == (int ******)0x2 && local_41c == (int ******)0x0) {
                uVar22 = (uint)local_418 & 0xff;
                local_2f1 = (undefined1)local_418;
                if (((DAT_01d50f88 < 5) &&
                    ((DAT_01d5072c - 1 < 2 ||
                     ((DAT_01d5072c != 0 && (cVar8 = FUN_01aaafa8(&DAT_01d50724), cVar8 != '\0')))))
                    ) && (iVar9 = FUN_01aaa278(DAT_01d50724), iVar9 != 0)) {
                  if (*(int *******)(DAT_01d50724 + 0x20) == (int ******)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d25d80);
                  }
                  local_60 = (int ******)&local_7c;
                  local_c68 = *(undefined1 (*) [4])(DAT_01d50724 + 0x24);
                  local_c64 = *(int ******)(DAT_01d50724 + 0x28);
                  local_30 = (undefined4 *)(DAT_01d50724 + 0x1c);
                  local_c70 = (int ******)*local_30;
                  local_64 = (int ******)&local_c70;
                  local_38 = (int ******)&local_64;
                  local_c60 = (int ******)0x0;
                  local_34 = (int ******)&DAT_00000001;
                  local_78 = (int ******)&local_70;
                  local_5c = (undefined4 *)&DAT_01d2ea4c;
                  local_70 = (int ******)&local_2f1;
                  local_7c = (int ******)&DAT_005991b4;
                  local_6c = (int ******)FUN_006446e4;
                  local_c6c = *(int *******)(DAT_01d50724 + 0x20);
                  FUN_01aaaecc(DAT_01d50724,&local_38);
                  iVar9 = DAT_01d50724;
                  if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                    local_2dc = *(int *******)(DAT_01d50724 + 0x14);
                    local_2d8 = *(int *******)(DAT_01d50724 + 0x18);
                    local_2e0 = (int ******)&DAT_00000001;
                    DataMemoryBarrier(0xb);
                    puVar12 = DAT_01d4edc8;
                    pcVar5 = DAT_01d4edc4;
                    if (DAT_01d51174 != 2) {
                      puVar12 = &DAT_01cfc5e0;
                      pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                    }
                    iVar15 = (*(code *)puVar12[3])(pcVar5,&local_2e0);
                    if (iVar15 != 0) {
                      local_1b8 = local_2e0;
                      local_1b4 = local_2dc;
                      local_1b0 = local_2d8;
                      FUN_01aaa328(iVar9,pcVar5,puVar12[4],&local_1b8,&local_38);
                    }
                  }
                }
                else {
                  iVar9 = DAT_01d50724;
                  if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                    local_2ec = *(int *******)(DAT_01d50724 + 0x14);
                    local_2e8 = *(int *******)(DAT_01d50724 + 0x18);
                    local_2f0 = (int ******)&DAT_00000001;
                    DataMemoryBarrier(0xb);
                    puVar12 = DAT_01d4edc8;
                    pcVar5 = DAT_01d4edc4;
                    if (DAT_01d51174 != 2) {
                      puVar12 = &DAT_01cfc5e0;
                      pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                    }
                    iVar15 = (*(code *)puVar12[3])(pcVar5,&local_2f0);
                    if (iVar15 != 0) {
                      if (*(int *******)(DAT_01d50724 + 0x20) == (int ******)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d25d80);
                      }
                      local_c64 = *(int ******)(DAT_01d50724 + 0x28);
                      local_2e0 = (int ******)&local_c70;
                      local_c68 = *(undefined1 (*) [4])(DAT_01d50724 + 0x24);
                      local_2dc = (int ******)&local_70;
                      local_64 = (int ******)&local_2e0;
                      local_c60 = (int ******)0x0;
                      local_60 = (int ******)&DAT_00000001;
                      local_2d8 = (int ******)&DAT_01d2ea4c;
                      local_6c = (int ******)&local_38;
                      local_34 = (int ******)FUN_006446e4;
                      local_38 = (int ******)&local_2f1;
                      local_70 = (int ******)&DAT_005991b4;
                      local_1b8 = local_2f0;
                      local_1b4 = local_2ec;
                      local_1b0 = local_2e8;
                      local_c70 = *(int *******)(DAT_01d50724 + 0x1c);
                      local_c6c = *(int *******)(DAT_01d50724 + 0x20);
                      local_5c = (undefined4 *)(DAT_01d50724 + 0x1c);
                      FUN_01aaa328(iVar9,pcVar5,puVar12[4],&local_1b8,&local_64);
                    }
                  }
                }
                bVar26 = true;
              }
              else {
                *(undefined1 *)(param_2 + 0xfe) = 0;
                FUN_01bed4e2((int)&local_2d8 + 1,(int)&local_418 + 1,0x11f);
                *(undefined2 *)((int)param_2 + 0x3f9) = 0x100;
                pppppiVar17 = param_2[0xfa];
                local_2e0 = ppppppiVar25;
                local_2dc = ppppppiVar10;
                local_2d8 = (int ******)CONCAT31(local_2d8._1_3_,uVar6);
                piVar11 = (int *)thunk_FUN_01be5118(4);
                if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0066439c(4,4);
                }
                *piVar11 = (int)pppppiVar17;
                puVar12 = (undefined4 *)thunk_FUN_01be5118(0x28);
                if (puVar12 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0066439c(4,0x28);
                }
                puVar12[7] = 0x3ffffffe;
                *(undefined1 *)(puVar12 + 6) = 0;
                puVar12[4] = 0;
                puVar12[5] = 0;
                *(undefined1 *)(puVar12 + 3) = 0;
                *(undefined1 *)((int)param_2 + 0x3fa) = 0;
                puVar12[2] = 0x1fffffff;
                puVar12[9] = &DAT_01c191d4;
                puVar12[8] = piVar11;
                *puVar12 = 1;
                puVar12[1] = 1;
                FUN_01bed4e2(&local_c70,&local_2e0,0x128);
                local_b48 = puVar12;
                FUN_0195ff74(&local_1b8,param_2[0xfb],&local_c70);
                if (local_1b8 == (int ******)0x2 && local_1b4 == (int ******)0x0) {
LAB_00f46b6c:
                  do {
                    *(undefined1 *)(param_2 + 0xf1) = 0;
                    param_2[0xea] = (int *****)(param_2 + 0xf2);
LAB_00f46a4c:
                    uVar21 = *param_3;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                    switch(*(undefined1 *)(param_2 + 0xf1)) {
                    case 0:
                      param_2[0xeb] = param_2[0xea];
                      FUN_01bed93e(param_2 + 0xec,0,0x11);
                      break;
                    case 1:
                    /* WARNING: Subroutine does not return */
                      FUN_013079f0(&DAT_01d29fe0);
                    case 2:
                    /* WARNING: Subroutine does not return */
                      FUN_01307a10(&DAT_01d29fe0);
                    }
                    FUN_01a397c8(&local_c70,param_2 + 0xeb,uVar21);
                    if ((char)local_c70 == '\x02') {
                      *(undefined1 *)(param_2 + 0xf1) = 3;
LAB_00f46b8c:
                      *(undefined1 *)((int)param_2 + 0x3fb) = 3;
                      uVar6 = 5;
                      goto LAB_00f46b9c;
                    }
                    FUN_009cdcac(param_2 + 0xeb);
                    ppppppiVar25 = local_c70;
                    *(undefined1 *)(param_2 + 0xf1) = 1;
                    if ((char)local_c70 == '\x02') goto LAB_00f46b8c;
                    uVar22 = (uint)local_c70 >> 8 & 0xff;
                    cVar8 = local_c70._2_1_;
                    FUN_01bed4e2(&local_48,(uint)&local_c70 | 3,0x10);
                    if (*(char *)(param_2 + 0xf1) == '\x03') {
                      FUN_009cdcac(param_2 + 0xeb);
                    }
                    if (((uint)ppppppiVar25 & 1) != 0) {
                      *(undefined1 *)((int)param_2 + 0x3fa) = 0;
                      *(undefined1 *)(param_2 + 0xfe) = 0;
                      FUN_0193d87c(param_2 + 0xf2);
                      FUN_005f797c(param_2 + 0xfb);
                      bVar26 = true;
                      uVar22 = 1;
                      goto LAB_00f44838;
                    }
                    if (cVar8 == '\x02') {
                      iVar9 = thunk_FUN_01bed842(&local_48,param_2 + 0xf6,0x10);
                      if (iVar9 == 0) {
                        uVar22 = (uint)*(byte *)(param_2 + 0xf6);
                        bVar26 = false;
                        goto LAB_00f447a4;
                      }
                      goto LAB_00f46b6c;
                    }
                  } while ((((uint)ppppppiVar25 & 0x10000) == 0) ||
                          (iVar9 = thunk_FUN_01bed842(&local_48,param_2 + 0xf6,0x10), iVar9 != 0));
                  bVar26 = true;
                }
                else {
                  FUN_01bed4e2(&local_c70,&local_1b8,0x130);
                  if (((DAT_01d50f88 < 5) &&
                      ((DAT_01d50720 - 1 < 2 ||
                       ((DAT_01d50720 != 0 && (cVar8 = FUN_01aaafa8(&DAT_01d50718), cVar8 != '\0')))
                       ))) && (iVar9 = FUN_01aaa278(DAT_01d50718), iVar9 != 0)) {
                    local_68 = (undefined4 *)(DAT_01d50718 + 0x1c);
                    if (*(int *******)(DAT_01d50718 + 0x20) == (int ******)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d25da4);
                    }
                    local_5c = *(undefined4 **)(DAT_01d50718 + 0x24);
                    local_58 = *(undefined4 *)(DAT_01d50718 + 0x28);
                    local_34 = (int ******)&local_7c;
                    local_38 = (int ******)&local_64;
                    local_70 = (int ******)&local_38;
                    local_6c = (int ******)&DAT_00000001;
                    local_54 = 0;
                    local_30 = (undefined4 *)&DAT_01d2ea4c;
                    local_7c = (int ******)0x523dbf;
                    local_78 = (int ******)&DAT_0000002b;
                    local_64 = (int ******)*local_68;
                    local_60 = *(int *******)(DAT_01d50718 + 0x20);
                    FUN_005ed7bc(&local_70);
                  }
                  else {
                    iVar9 = DAT_01d50718;
                    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                      local_84 = *(int *******)(DAT_01d50718 + 0x14);
                      local_80 = *(undefined4 **)(DAT_01d50718 + 0x18);
                      local_88 = (int ******)&DAT_00000001;
                      DataMemoryBarrier(0xb);
                      puVar12 = DAT_01d4edc8;
                      pcVar5 = DAT_01d4edc4;
                      if (DAT_01d51174 != 2) {
                        puVar12 = &DAT_01cfc5e0;
                        pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                      }
                      iVar15 = (*(code *)puVar12[3])(pcVar5,&local_88);
                      if (iVar15 != 0) {
                        local_74 = (undefined4 *)(DAT_01d50718 + 0x1c);
                        if (*(int *******)(DAT_01d50718 + 0x20) == (int ******)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d25da4);
                        }
                        local_7c = (int ******)&local_70;
                        local_5c = *(undefined4 **)(DAT_01d50718 + 0x24);
                        local_58 = *(undefined4 *)(DAT_01d50718 + 0x28);
                        local_70 = (int ******)&local_64;
                        local_6c = &local_50;
                        local_78 = (int ******)&DAT_00000001;
                        local_68 = (undefined4 *)&DAT_01d2ea4c;
                        local_54 = 0;
                        local_4c = 0x2b;
                        local_50 = (int *****)0x523dbf;
                        local_38 = local_88;
                        local_34 = local_84;
                        local_30 = local_80;
                        local_64 = (int ******)*local_74;
                        local_60 = *(int *******)(DAT_01d50718 + 0x20);
                        FUN_01aaa328(iVar9,pcVar5,puVar12[4],&local_38,&local_7c);
                      }
                    }
                  }
                  FUN_00f46d38(&local_c70);
                  bVar26 = true;
                  uVar22 = 1;
                }
LAB_00f447a4:
                *(undefined1 *)((int)param_2 + 0x3fa) = 0;
              }
              if ((*(char *)(param_2 + 0xfe) == '\x01') &&
                 (local_420 != (int ******)0x2 || local_41c != (int ******)0x0)) {
                FUN_00f46d78(&local_420);
              }
              *(undefined1 *)(param_2 + 0xfe) = 0;
              FUN_0193d87c(param_2 + 0xf2);
              FUN_005f797c(param_2 + 0xfb);
              if (*(char *)((int)param_2 + 0x3f9) != '\0') {
                pppppiVar17 = param_2[0xfa];
                DataMemoryBarrier(0xb);
                do {
                  ppppiVar18 = *pppppiVar17;
                  bVar3 = (bool)hasExclusiveAccess(pppppiVar17);
                } while (!bVar3);
                *pppppiVar17 = (int ****)((int)ppppiVar18 + -1);
                if (ppppiVar18 == (int ****)0x1) {
                  DataMemoryBarrier(0xb);
                  FUN_0195b288(param_2[0xfa]);
                }
              }
LAB_00f44838:
              *(undefined1 *)((int)param_2 + 0x3f9) = 0;
              *(undefined1 *)((int)param_2 + 0x3fb) = 1;
              FUN_005efecc(param_2 + 0xea);
              if (bVar26) {
                pppppiVar17 = param_2[0xe9];
                DataMemoryBarrier(0xb);
                do {
                  ppppiVar18 = *pppppiVar17;
                  bVar26 = (bool)hasExclusiveAccess(pppppiVar17);
                } while (!bVar26);
                *pppppiVar17 = (int ****)((int)ppppiVar18 + -1);
                if (ppppiVar18 == (int ****)0x1) {
                  DataMemoryBarrier(0xb);
                  FUN_01a38f34(param_2[0xe9]);
                }
                goto LAB_00f4489c;
              }
              if ((DAT_01d50f88 < 3) &&
                 (((DAT_01d50630 - 1 < 2 ||
                   ((DAT_01d50630 != 0 && (cVar8 = FUN_01aaafa8(&DAT_01d50628), cVar8 != '\0')))) &&
                  (iVar9 = FUN_01aaa278(DAT_01d50628), iVar9 != 0)))) {
                if (*(int *******)(DAT_01d50628 + 0x20) == (int ******)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d25d40);
                }
                local_c68 = *(undefined1 (*) [4])(DAT_01d50628 + 0x24);
                local_c64 = *(int ******)(DAT_01d50628 + 0x28);
                local_5c = (undefined4 *)(DAT_01d50628 + 0x1c);
                local_c70 = (int ******)*local_5c;
                local_41c = (int ******)&local_48;
                local_420 = (int ******)&local_c70;
                local_60 = (int ******)&DAT_00000001;
                local_64 = (int ******)&local_420;
                local_c60 = (int ******)0x0;
                local_418 = (int *****)&DAT_01d2ea4c;
                local_48 = (int ******)0x523dac;
                local_44 = (int ******)&DAT_00000027;
                local_c6c = *(int *******)(DAT_01d50628 + 0x20);
                FUN_01aaaecc(DAT_01d50628,&local_64);
                iVar9 = DAT_01d50628;
                if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
                  local_2dc = *(int *******)(DAT_01d50628 + 0x14);
                  local_2d8 = *(int *******)(DAT_01d50628 + 0x18);
                  local_2e0 = (int ******)&DAT_00000003;
                  DataMemoryBarrier(0xb);
                  puVar12 = DAT_01d4edc8;
                  pcVar5 = DAT_01d4edc4;
                  if (DAT_01d51174 != 2) {
                    puVar12 = &DAT_01cfc5e0;
                    pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                  }
                  iVar15 = (*(code *)puVar12[3])(pcVar5,&local_2e0);
                  if (iVar15 != 0) {
                    local_1b8 = local_2e0;
                    local_1b4 = local_2dc;
                    local_1b0 = local_2d8;
                    FUN_01aaa328(iVar9,pcVar5,puVar12[4],&local_1b8,&local_64);
                  }
                }
              }
              else {
                iVar9 = DAT_01d50628;
                if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
                  local_43c = *(int *******)(DAT_01d50628 + 0x14);
                  local_438 = *(int *******)(DAT_01d50628 + 0x18);
                  local_440 = (int ******)&DAT_00000003;
                  DataMemoryBarrier(0xb);
                  puVar12 = DAT_01d4edc8;
                  pcVar5 = DAT_01d4edc4;
                  if (DAT_01d51174 != 2) {
                    puVar12 = &DAT_01cfc5e0;
                    pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                  }
                  iVar15 = (*(code *)puVar12[3])(pcVar5,&local_440);
                  if (iVar15 != 0) {
                    if (*(int *******)(DAT_01d50628 + 0x20) == (int ******)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d25d40);
                    }
                    local_c68 = *(undefined1 (*) [4])(DAT_01d50628 + 0x24);
                    local_2dc = (int ******)&local_64;
                    local_c64 = *(int ******)(DAT_01d50628 + 0x28);
                    local_2e0 = (int ******)&local_c70;
                    local_420 = (int ******)&local_2e0;
                    local_c60 = (int ******)0x0;
                    local_41c = (int ******)&DAT_00000001;
                    local_64 = (int ******)0x523dac;
                    local_2d8 = (int ******)&DAT_01d2ea4c;
                    local_60 = (int ******)&DAT_00000027;
                    local_1b8 = local_440;
                    local_1b4 = local_43c;
                    local_1b0 = local_438;
                    local_c70 = *(int *******)(DAT_01d50628 + 0x1c);
                    local_c6c = *(int *******)(DAT_01d50628 + 0x20);
                    local_418 = (int *****)(DAT_01d50628 + 0x1c);
                    FUN_01aaa328(iVar9,pcVar5,puVar12[4],&local_1b8,&local_420);
                  }
                }
              }
              uVar22 = (uint)*(byte *)(param_2 + 0xe0);
              FUN_01bed4e2(&local_430,(undefined1 *)((int)param_2 + 0x381),0xf);
              pppppiVar17 = param_2[0xe9];
              DataMemoryBarrier(0xb);
              do {
                ppppiVar18 = *pppppiVar17;
                bVar26 = (bool)hasExclusiveAccess(pppppiVar17);
              } while (!bVar26);
              *pppppiVar17 = (int ****)((int)ppppiVar18 + -1);
              if (ppppiVar18 == (int ****)0x1) {
                DataMemoryBarrier(0xb);
                FUN_01a38f34(param_2[0xe9]);
              }
              bVar26 = false;
              *(undefined1 *)(param_2 + 0xe8) = 0;
            }
            local_1290 = (int ******)((int)param_2 + 0x3a1);
            local_4a0 = local_430;
            puStack_49c = local_42c;
            uStack_498 = uStack_428;
            local_492 = local_422;
            local_494 = local_424;
            *(undefined1 *)local_1290 = 1;
            local_490 = local_430;
            puStack_48c = local_42c;
            uStack_488 = uStack_428;
            local_484 = local_424;
            local_482 = local_422;
            FUN_0193efb0(param_2 + 0xe0);
            if (bVar26) {
              ppppppiVar10 = (int ******)FUN_0195b784(uVar22);
              goto LAB_00f44e48;
            }
            *(char *)(param_2 + 0x14f) = (char)uVar22;
            FUN_01bed4e2((undefined1 *)((int)param_2 + 0x53d),&local_490,0xf);
            local_2e0 = (int ******)param_2[0x14f];
            local_2dc = (int ******)param_2[0x150];
            local_2d8 = (int ******)param_2[0x151];
            local_2d4[0] = param_2[0x152];
            param_2[0xe0] = param_2[0xdd];
            param_2[0xe1] = (int *****)local_2e0;
            param_2[0xe2] = (int *****)local_2dc;
            param_2[0xe3] = (int *****)local_2d8;
            param_2[0xe4] = local_2d4[0];
            *(undefined1 *)(param_2 + 0xed) = 0;
switchD_00f43634_caseD_0:
            pppppiVar17 = param_2[0xe0];
            param_2[0xe5] = pppppiVar17;
            unaff_r6 = (int ******)param_2[0xe3];
            param_2[0xe6] = param_2[0xe1];
            param_2[0xe7] = param_2[0xe2];
            param_2[0xe8] = (int *****)unaff_r6;
            param_2[0xe9] = param_2[0xe4];
            param_2[0xee] = pppppiVar17;
            param_2[0xef] = (int *****)0x0;
LAB_00f4518c:
            cVar8 = *(char *)(pppppiVar17[1] + 2);
            *(undefined1 *)(param_2 + 0xef) = 1;
            if (cVar8 == '\0') {
              FUN_01a35774(param_2 + 0x145,param_2[0xe5]);
              param_2[0xee] = (int *****)(param_2 + 0x145);
              *(undefined1 *)(param_2 + 0xf0) = 0;
switchD_00f43634_caseD_4:
              uVar22 = FUN_00f40228(param_2 + 0xee,param_3);
              uVar6 = 4;
              if ((uVar22 & 0xff) != 0x1c) {
                if (*(char *)(param_2 + 0xf0) == '\x04') {
                  FUN_005f1388(param_2 + 0xf1);
                }
                if ((uVar22 & 0xff) == 0x1b) {
                  FUN_005fb2fc(param_2 + 0x145);
                  goto LAB_00f451a8;
                }
                FUN_005fb2fc(param_2 + 0x145);
                bVar26 = true;
                goto LAB_00f45608;
              }
            }
            else {
LAB_00f451a8:
              pppiVar13 = (*param_2[0xe5])[0xc];
              *(undefined1 *)(param_2 + 0xf9) = 0;
              pppppiVar17 = (int *****)(pppiVar13 + 2);
              param_2[0xee] = pppppiVar17;
LAB_00f451cc:
              *(undefined1 *)(param_2 + 0xf8) = 0;
              param_2[0xef] = pppppiVar17;
LAB_00f451dc:
              pppppiVar20 = (int *****)*pppppiVar17;
              *(undefined1 *)(param_2 + 0xf7) = 0;
              param_2[0xf3] = (int *****)0x0;
              param_2[0xf4] = (int *****)0x0;
              param_2[0xf5] = pppppiVar20;
              param_2[0xf6] = pppppiVar20;
              param_2[0xf0] = pppppiVar17 + 1;
              param_2[0xf1] = (int *****)0x0;
switchD_00f455b8_caseD_3:
              bVar7 = FUN_019f9bc4(param_2 + 0xf0,param_3);
              if (bVar7 != 2) {
                FUN_0193c3cc(param_2 + 0xf0);
                if ((bVar7 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b420);
                }
                pppppiVar17 = param_2[0xef];
                pppppiVar20 = (int *****)*pppppiVar17;
                *(undefined1 *)(param_2 + 0xf9) = 1;
                *(undefined1 *)(param_2 + 0xf8) = 1;
                param_2[0xec] = pppppiVar17 + 6;
                param_2[0xeb] = pppppiVar20;
                param_2[0xea] = pppppiVar17 + 1;
                local_c70 = (int ******)param_2[0xe6];
                local_c6c = (int ******)param_2[0xe7];
                local_c68 = (undefined1  [4])param_2[0xe8];
                local_c64 = param_2[0xe9];
                uVar28 = (*(code *)pppppiVar17[7][3])(pppppiVar17[6]);
                pppppiVar17 = (int *****)((ulonglong)uVar28 >> 0x20);
                *(undefined8 *)(param_2 + 0xee) = uVar28;
                goto LAB_00f452bc;
              }
              *(undefined1 *)(param_2 + 0xf9) = 3;
              *(undefined1 *)(param_2 + 0xf8) = 3;
              uVar6 = 5;
            }
            goto LAB_00f45330;
          }
          uVar6 = 3;
          goto LAB_00f469f4;
        }
      }
      else {
        FUN_01bed4e2(&local_c70,param_2 + 0x18a,0xb8);
        local_420 = (int ******)param_2[0x1b8];
        local_41c = (int ******)param_2[0x1b9];
        local_418 = param_2[0x1ba];
        FUN_0195baf0(&local_2e0,&local_c70,&local_420,uVar2);
        auVar19 = (undefined1  [4])local_2d8;
        ppppppiVar10 = local_2dc;
        ppppppiVar25 = local_2e0;
        if (local_2e0 != (int ******)&DAT_80000001) {
          local_1288 = local_2d4[0];
          FUN_01bed4e2(&local_1b8,(uint)&local_c70 | 4,0xb4);
          local_640[0] = local_c70;
          goto LAB_00f43b88;
        }
        FUN_00f25e18(&local_c70);
      }
      bVar26 = true;
      goto LAB_00f44f18;
    }
    *(undefined1 *)((int)param_2 + 0x1bd) = 0;
    FUN_01bed4e2(auStack_1268,param_2,0xb8);
    FUN_01959f04(&local_c70,auStack_1268);
    ppppppiVar10 = local_c6c;
    ppppppiVar25 = local_c70;
    if (local_c70 != (int ******)&DAT_80000000) {
      FUN_01bed4e2(&local_11b0,local_c68,0xb0);
      ppppppiVar16 = param_2 + 0x70;
      *ppppppiVar16 = (int *****)ppppppiVar25;
      *(undefined1 *)((int)param_2 + 0x1ba) = 1;
      param_2[0x71] = (int *****)ppppppiVar10;
      FUN_01bed4e2(param_2 + 0x72,&local_11b0,0xb0);
      FUN_005fd7d0(&local_c70,ppppppiVar16);
      FUN_01bed4e2(&local_11b0,&local_c70,0xb8);
      *(undefined2 *)(param_2 + 0x6f) = 0x101;
      FUN_01bed4e2(param_2,&local_11b0,0xb8);
      if (*(char *)(param_2 + 0x34) != '\0') {
        if (param_2[0x2e] == (int *****)0x80000000) {
          pppppiVar17 = (int *****)0x4;
          pppppiVar24 = (int *****)&DAT_0056eb7c;
        }
        else {
          pppppiVar24 = param_2[0x2f];
          pppppiVar17 = param_2[0x30];
        }
        pppppiVar20 = param_2[0x6c];
        *(undefined1 *)((int)param_2 + 0x1ba) = 0;
        FUN_01bed4e2(param_2 + 0x9e,ppppppiVar16,0xb8);
        param_2[0xcc] = pppppiVar20;
        *(undefined1 *)(param_2 + 0xd6) = 0;
        param_2[0xcd] = pppppiVar24;
        param_2[0xce] = pppppiVar17;
        param_2[0xcf] = (int *****)param_2;
        unaff_r6 = param_2;
        goto LAB_00f436b0;
      }
      goto LAB_00f439e8;
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1f0c0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1f0c0);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xd6)) {
    case 0:
      pppppiVar20 = param_2[0xcc];
      pppppiVar24 = param_2[0xcd];
      pppppiVar17 = param_2[0xce];
      unaff_r6 = (int ******)param_2[0xcf];
LAB_00f436b0:
      local_1278 = param_2 + 0x9e;
      *(undefined2 *)((int)param_2 + 0x359) = 1;
      FUN_01bed4e2(param_2 + 0xd7,local_1278,0xb8);
      param_2[0xd0] = pppppiVar24;
      param_2[0xd1] = pppppiVar17;
      param_2[0xd2] = (int *****)unaff_r6;
      ppppiVar18 = pppppiVar20[1];
      *(undefined1 *)(param_2 + 0x110) = 0;
      param_2[0x105] = (int *****)(ppppiVar18 + 2);
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1f0d0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1f0d0);
    case 4:
      goto switchD_00f43524_caseD_4;
    }
    FUN_006177f4(&local_1b8,param_2 + 0x105,param_3);
    if (local_1b8 == (int ******)0x0) {
      uVar6 = 3;
LAB_00f43874:
      *(undefined1 *)(param_2 + 0xd6) = uVar6;
      bVar26 = true;
    }
    else {
      param_2[0xd3] = (int *****)local_1b8;
      param_2[0xd4] = (int *****)local_1b4;
      param_2[0xd5] = (int *****)local_1b0;
      cVar8 = *(char *)(param_2 + 0x110);
      bVar26 = cVar8 == '\x03';
      if (bVar26) {
        cVar8 = *(char *)(param_2 + 0x10f);
      }
      if (bVar26 && cVar8 == '\x03') {
        FUN_0193c3cc(param_2 + 0x107);
      }
      uVar21 = 0;
      *(undefined1 *)((int)param_2 + 0x359) = 0;
      FUN_01bed4e2(&local_c70,param_2 + 0xd7,0xb8);
      unaff_r6 = (int ******)param_2[0xd1];
      if ((int)unaff_r6 < 0) {
LAB_00f43768:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar21,unaff_r6);
      }
      pppppiVar17 = param_2[0xd0];
      if (unaff_r6 == (int ******)0x0) {
        ppppppiVar25 = (int ******)0x0;
        iVar9 = 1;
      }
      else {
        uVar21 = 1;
        iVar9 = FUN_01298504(unaff_r6,1);
        if (iVar9 == 0) goto LAB_00f43768;
        ppppppiVar25 = unaff_r6;
      }
      FUN_01bed4e2(iVar9,pppppiVar17,unaff_r6);
      FUN_006666fc(&local_11b0,param_2[0xd2][0x32],param_2[0xd2][0x33]);
      local_64c = local_11b0;
      ppppppiStack_648 = local_11ac;
      ppppppiStack_644 = ppppppiStack_11a8;
      FUN_01bed4e2(auStack_710,&local_c70,0xb8);
      *(undefined1 *)((int)param_2 + 0x35a) = 0;
      local_658 = ppppppiVar25;
      local_654 = iVar9;
      local_650 = unaff_r6;
      FUN_0195a1dc(param_2[0xd5],auStack_710);
      *(undefined1 *)(param_2 + 0x111) = 0;
      param_2[0x110] = param_2[0xd5];
switchD_00f43524_caseD_4:
      uVar27 = FUN_00f4253c(param_2 + 0xd8,*param_3);
      ppppppiVar25 = (int ******)(uVar27 >> 0x20);
      if ((uVar27 & 1) != 0) {
        uVar6 = 4;
        goto LAB_00f43874;
      }
      if (*(char *)(param_2 + 0x111) == '\x03') {
        FUN_005fba14(param_2 + 0xd8);
      }
      if (ppppppiVar25 == (int ******)0x0) {
        unaff_r6 = (int ******)0x0;
        *(undefined1 *)((int)param_2 + 0x35a) = 0;
        FUN_019f8c54(param_2[0xd3],param_2[0xd4]);
      }
      else {
        local_11ac = (int ******)FUN_00667a08;
        local_11b0 = (int ******)&local_2e0;
        local_2e0 = ppppppiVar25;
        FUN_00664898(&local_c70,&DAT_0059c0dc,&local_11b0);
        local_11b0 = local_c70;
        local_11ac = local_c6c;
        ppppppiStack_11a8 = (int ******)local_c68;
        unaff_r6 = (int ******)FUN_006679ac(&local_11b0);
        (*(code *)**local_2e0)();
        *(undefined1 *)((int)param_2 + 0x35a) = 0;
        FUN_019f8c54(param_2[0xd3],param_2[0xd4]);
      }
      *(undefined2 *)(param_2 + 0xd6) = 1;
      bVar26 = false;
    }
    local_1278 = param_2 + 0x9e;
    if (bVar26) {
      *param_1 = 2;
      uVar6 = 3;
      goto LAB_00f469e0;
    }
    FUN_00f2e4e0(local_1278);
    if (unaff_r6 == (int ******)0x0) {
LAB_00f439e8:
      if (*(char *)((int)param_2 + 0x1ba) != '\0') {
        FUN_00f25e18(param_2 + 0x70);
      }
      *(undefined1 *)((int)param_2 + 0x1ba) = 0;
      goto LAB_00f43a08;
    }
    local_11ac = (int ******)FUN_00667a08;
    local_11b0 = (int ******)&local_1b8;
    local_1b8 = unaff_r6;
    FUN_00664898(&local_c70,&DAT_005b0e60,&local_11b0);
    local_11b0 = local_c70;
    local_11ac = local_c6c;
    ppppppiStack_11a8 = (int ******)local_c68;
    ppppppiVar10 = (int ******)FUN_006679ac(&local_11b0);
    (*(code *)**local_1b8)();
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x709)) {
    case 0:
      pppppiVar17 = param_2[0x1c0];
      uVar2 = *(undefined2 *)(param_2 + 0x1c1);
      goto LAB_00f43a80;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c2080c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c2080c);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xde)) {
      case 0:
        pppppiVar17 = param_2[0xa4];
        local_1288 = param_2[0xa5];
        goto LAB_00f43c48;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c2085c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c2085c);
      case 3:
        goto switchD_00f435ac_caseD_3;
      case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)((int)param_2 + 0x3a1)) {
        case 0:
          pppppiVar17 = param_2[0xe6];
          pppppiVar20 = param_2[0xe7];
          goto LAB_00f43d40;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01d25d20);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01d25d20);
        case 3:
          if (*(char *)(param_2 + 0xea) != '\0') {
            if (*(char *)(param_2 + 0xea) == '\x01') {
                    /* WARNING: Subroutine does not return */
              FUN_013079f0(&DAT_01d25d60);
            }
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01d25d60);
          }
          pppppiVar17 = param_2[0xe9];
          goto LAB_00f43d6c;
        case 4:
          goto switchD_00f435ec_caseD_4;
        case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*(undefined1 *)((int)param_2 + 0x3fb)) {
          case 0:
            pppppiVar17 = param_2[0xfc];
            pppppiVar20 = param_2[0xfd];
            break;
          case 1:
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01d25db4);
          case 2:
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01d25db4);
          case 3:
            goto LAB_00f46a4c;
          }
        }
        goto LAB_00f43de4;
      case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_2 + 0xed)) {
        case 0:
          goto switchD_00f43634_caseD_0;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c1f51c);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c1f51c);
        case 3:
          if (*(char *)(param_2 + 0xef) != '\0') {
            if (*(char *)(param_2 + 0xef) == '\x01') {
                    /* WARNING: Subroutine does not return */
              FUN_013079f0(&DAT_01d25d60);
            }
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01d25d60);
          }
          pppppiVar17 = param_2[0xee];
          goto LAB_00f4518c;
        case 4:
          goto switchD_00f43634_caseD_4;
        case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*(undefined1 *)(param_2 + 0xf9)) {
          case 0:
            pppppiVar17 = param_2[0xee];
            goto LAB_00f451cc;
          case 1:
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01d2b400);
          case 2:
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01d2b400);
          case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch(*(undefined1 *)(param_2 + 0xf8)) {
            case 0:
              pppppiVar17 = param_2[0xef];
              goto LAB_00f451dc;
            case 1:
                    /* WARNING: Subroutine does not return */
              FUN_013079f0(&DAT_01d2b410);
            case 2:
                    /* WARNING: Subroutine does not return */
              FUN_01307a10(&DAT_01d2b410);
            }
          }
          goto switchD_00f455b8_caseD_3;
        case 6:
          pppppiVar17 = param_2[0xef];
        }
      }
    }
LAB_00f452bc:
    (*(code *)pppppiVar17[3])(&local_c70,param_2[0xee],param_3);
    ppppppiVar10 = local_c6c;
    ppppppiVar25 = local_c70;
    if (local_c70 == (int ******)&SUB_00000004 && local_c6c == (int ******)0x0) {
      uVar6 = 6;
LAB_00f45330:
      local_1290 = param_2 + 0xed;
      *(undefined1 *)local_1290 = uVar6;
      uVar6 = 5;
LAB_00f469f4:
      local_1284 = (undefined1 *)((int)param_2 + 0x709);
      *(undefined1 *)(param_2 + 0xde) = uVar6;
      *local_1284 = 3;
      *param_1 = 2;
      uVar6 = 4;
      goto LAB_00f469e0;
    }
    unaff_r6 = (int ******)(local_c68 + 1);
    uVar6 = local_c68[0];
    uVar22 = (uint)(byte)local_c68[0];
    FUN_01bed4e2(&local_1b8,unaff_r6,0x11f);
    FUN_01139b38(param_2[0xee],param_2[0xef]);
    if (((uint)ppppppiVar25 ^ 3) != 0 || ppppppiVar10 != (int ******)0x0) {
      if (ppppppiVar25 == (int ******)0x2 && ppppppiVar10 == (int ******)0x0) {
        ppppppiVar23 = (int ******)0x0;
      }
      else {
        local_c68 = (undefined1  [4])CONCAT31(local_c68._1_3_,uVar6);
        local_c70 = ppppppiVar25;
        local_c6c = ppppppiVar10;
        FUN_01bed4e2(unaff_r6,&local_1b8,0x11f);
        if (local_b68 == 0 && local_b64 == 0) {
          ppppppiVar23 = (int ******)0x0;
          uVar22 = local_b64;
        }
        else {
          ppppppiVar23 = (int ******)0x0;
          uVar27 = FUN_01bf0fb0(local_b68,local_b64,0x15180,0);
          lVar4 = (uVar27 & 0xffffffff) * 0xfffeae80;
          uVar22 = (uint)lVar4;
          ppppppiVar16 = (int ******)(uVar22 + local_b68);
          iVar15 = (int)(uVar27 >> 0x20) * -0x15180 +
                   ((int)((ulonglong)lVar4 >> 0x20) - (int)uVar27) + local_b64 +
                   (uint)CARRY4(uVar22,local_b68);
          iVar9 = iVar15 >> 0x1f;
          lVar4 = uVar27 + CONCAT44(iVar9,iVar9);
          uVar14 = (uint)lVar4;
          unaff_r6 = ppppppiVar16 + 0x5460;
          if (-1 < iVar15) {
            unaff_r6 = ppppppiVar16;
          }
          uVar22 = uVar14 + 0x800af93b;
          if ((int)((ulonglong)lVar4 >> 0x20) - (uint)(uVar14 < 0x7ff506c5) == -1) {
            ppppppiVar23 = (int ******)FUN_01292134(uVar14 + 0xaf93b);
          }
        }
        FUN_00f46d78(&local_c70);
      }
    }
    FUN_019f8c54(param_2[0xea],param_2[0xeb]);
    bVar26 = ((uint)ppppppiVar25 ^ 3) == 0 && ppppppiVar10 == (int ******)0x0;
LAB_00f45608:
    local_1290 = param_2 + 0xed;
    local_1298 = param_2 + 0xe0;
    *(undefined1 *)local_1290 = 1;
    FUN_005f2134(local_1298);
    if (bVar26) {
      ppppppiVar10 = (int ******)FUN_0195b784(uVar22);
LAB_00f44e48:
      FUN_019f8c54(param_2[0xdb],param_2[0xdc]);
      if (param_2[0xd8] != (int *****)0x80000000) {
        FUN_019bb7e0(param_2[0xd8],param_2[0xd9]);
      }
      *(undefined1 *)((int)param_2 + 0x379) = 0;
      FUN_019bb7e0(param_2[0xd5],param_2[0xd6]);
      *(undefined1 *)((int)param_2 + 0x37a) = 0;
      if (param_2[0xa7] != (int *****)0x80000000) {
        FUN_00f25e18();
      }
      pppppiVar17 = param_2[0xa6];
      *(undefined1 *)((int)param_2 + 0x37b) = 0;
      DataMemoryBarrier(0xb);
      do {
        ppppiVar18 = *pppppiVar17;
        bVar26 = (bool)hasExclusiveAccess(pppppiVar17);
      } while (!bVar26);
      *pppppiVar17 = (int ****)((int)ppppiVar18 + -1);
      if (ppppiVar18 == (int ****)0x1) {
        DataMemoryBarrier(0xb);
        FUN_0195b288(param_2[0xa6]);
      }
      bVar26 = true;
      *(undefined1 *)(param_2 + 0xdf) = 0;
    }
    else {
      local_40 = 0;
      local_48 = ppppppiVar23;
      local_44 = unaff_r6;
      if (((DAT_01d50f88 < 2) &&
          ((DAT_01d4fccc - 1 < 2 ||
           ((DAT_01d4fccc != 0 && (cVar8 = FUN_01aaafa8(&DAT_01d4fcc4), cVar8 != '\0')))))) &&
         (iVar9 = FUN_01aaa278(DAT_01d4fcc4), iVar9 != 0)) {
        if (*(int *******)(DAT_01d4fcc4 + 0x20) == (int ******)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c2086c);
        }
        local_1b0 = *(int *******)(DAT_01d4fcc4 + 0x24);
        local_1ac[0] = *(int *)(DAT_01d4fcc4 + 0x28);
        local_2dc = (int ******)&local_64;
        local_41c = (int ******)&DAT_00000001;
        local_60 = (int ******)&local_c70;
        local_64 = (int ******)&DAT_00577426;
        local_c60 = (int ******)&local_48;
        local_c68 = (undefined1  [4])(param_2 + 0x14f);
        local_2e0 = (int ******)&local_1b8;
        local_c70 = param_2 + 0xd5;
        local_420 = (int ******)&local_2e0;
        local_1ac[1] = 0;
        local_2d8 = (int ******)&DAT_01d2ea4c;
        local_c5c = FUN_0063308c;
        local_c64 = (int *****)FUN_01ae1bc4;
        local_c6c = (int ******)&LAB_00632348;
        local_418 = (int *****)(DAT_01d4fcc4 + 0x1c);
        local_1b8 = *(int *******)(DAT_01d4fcc4 + 0x1c);
        local_1b4 = *(int *******)(DAT_01d4fcc4 + 0x20);
        FUN_00651764(&local_420);
      }
      else {
        iVar9 = DAT_01d4fcc4;
        if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
          local_47c = *(int *******)(DAT_01d4fcc4 + 0x14);
          local_478 = *(int *******)(DAT_01d4fcc4 + 0x18);
          local_480 = (int ******)&SUB_00000004;
          DataMemoryBarrier(0xb);
          puVar12 = DAT_01d4edc8;
          pcVar5 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar12 = &DAT_01cfc5e0;
            pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar15 = (*(code *)puVar12[3])(pcVar5,&local_480);
          if (iVar15 != 0) {
            if (*(int *******)(DAT_01d4fcc4 + 0x20) == (int ******)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c2086c);
            }
            local_1b0 = *(int *******)(DAT_01d4fcc4 + 0x24);
            local_420 = (int ******)&local_1b8;
            local_1ac[0] = *(int *)(DAT_01d4fcc4 + 0x28);
            local_41c = &local_430;
            local_1ac[1] = 0;
            local_64 = (int ******)&local_420;
            local_60 = (int ******)&DAT_00000001;
            local_418 = (int *****)&DAT_01d2ea4c;
            local_42c = &local_c70;
            local_430 = (int *****)&DAT_00577426;
            local_c64 = (int *****)FUN_01ae1bc4;
            local_c5c = FUN_0063308c;
            local_c60 = (int ******)&local_48;
            local_c68 = (undefined1  [4])(param_2 + 0x14f);
            local_c70 = param_2 + 0xd5;
            local_c6c = (int ******)&LAB_00632348;
            local_2e0 = local_480;
            local_2dc = local_47c;
            local_2d8 = local_478;
            local_1b8 = *(int *******)(DAT_01d4fcc4 + 0x1c);
            local_1b4 = *(int *******)(DAT_01d4fcc4 + 0x20);
            local_5c = (undefined4 *)(DAT_01d4fcc4 + 0x1c);
            FUN_01aaa328(iVar9,pcVar5,puVar12[4],&local_2e0,&local_64);
          }
        }
      }
      FUN_01a367d8(&local_1b8,param_2[0xa6]);
      ppppppiVar10 = local_1b4;
      ppppppiVar25 = local_1b8;
      if (local_1b8 == (int ******)0x2 && local_1b4 == (int ******)0x0) {
        local_470 = 0;
      }
      else {
        FUN_01bed4e2(local_c68,&local_1b0,0x120);
        local_c6c = ppppppiVar10;
        local_c70 = ppppppiVar25;
        if ((local_c48[0] & 1) == 0) {
          local_470 = 0;
        }
        else {
          FUN_01a2b1e0(&local_470,local_c48,local_c40,uStack_c3c);
        }
        FUN_00f46d78(&local_c70);
      }
      ppppppiVar25 = param_2 + 0x14f;
      local_b9c = *ppppppiVar25;
      pppppiStack_b98 = param_2[0x150];
      pppppiStack_b94 = param_2[0x151];
      pppppiStack_b90 = param_2[0x152];
      *(undefined2 *)((int)param_2 + 0x37b) = 0;
      pppppiVar20 = param_2[0xa6];
      FUN_01bed4e2(local_2d4,param_2 + 0xa7,0xb8);
      *(undefined1 *)((int)param_2 + 0x37a) = 0;
      local_2e0 = (int ******)param_2[0xd5];
      local_2dc = (int ******)param_2[0xd6];
      local_2d8 = (int ******)param_2[0xd7];
      *(undefined1 *)((int)param_2 + 0x379) = 0;
      local_21c = param_2[0xd8];
      pppppiStack_218 = param_2[0xd9];
      pppppiStack_214 = param_2[0xda];
      local_b84 = 0;
      local_b80 = local_470;
      uStack_b7c = uStack_46c;
      uStack_b78 = uStack_468;
      pppppiVar17 = param_2[0xdd];
      local_420 = (int ******)*ppppppiVar25;
      local_41c = (int ******)param_2[0x150];
      local_418 = param_2[0x151];
      pppppiStack_414 = param_2[0x152];
      local_b8c = ppppppiVar23;
      local_b88 = unaff_r6;
      FUN_01bed4e2(&local_c70,&local_2e0,0xd0);
      local_ba0 = pppppiVar20;
      FUN_0195f2c0(&local_1b8,pppppiVar17 + 10,&local_420,&local_c70);
      if (local_1b8 != (int ******)&DAT_80000000) {
        DataMemoryBarrier(0xb);
        do {
          iVar9 = *local_e8;
          bVar26 = (bool)hasExclusiveAccess(local_e8);
        } while (!bVar26);
        *local_e8 = iVar9 + -1;
        if (iVar9 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0195b288(local_e8);
        }
        if (local_1ac[0] != -0x80000000) {
          FUN_00f25e18(local_1ac);
        }
        FUN_019bb7e0(local_1b8,local_1b4);
        if (local_f4 != -0x80000000) {
          FUN_019bb7e0(local_f4,local_f0);
        }
      }
      local_452 = *(undefined1 *)((int)param_2 + 0x53e);
      local_454 = *(undefined2 *)ppppppiVar25;
      ppppppiVar10 = *(int *******)((int)param_2 + 0x53f);
      FUN_01bed4e2(&local_460,(undefined1 *)((int)param_2 + 0x543),9);
      FUN_019f8c54(param_2[0xdb],param_2[0xdc]);
      bVar26 = false;
      *(undefined4 *)((int)param_2 + 0x379) = 0;
    }
    local_4b2 = local_452;
    local_4b4 = local_454;
    local_4c0 = local_460;
    uStack_4bc = uStack_45c;
    uStack_4b8 = uStack_458;
    *(undefined1 *)(param_2 + 0xde) = 1;
    FUN_00f2e63c(param_2 + 0x70);
    *(undefined2 *)((int)param_2 + 0x706) = 0;
    *(undefined1 *)(param_2 + 0x1c2) = 0;
LAB_00f44f18:
    local_1278 = param_2 + 0x70;
    FUN_019bb7e0(param_2[0x185],param_2[0x186]);
    local_722 = local_4b2;
    local_724 = local_4b4;
    local_730 = local_4c0;
    uStack_72c = uStack_4bc;
    local_728 = uStack_4b8;
    *(undefined1 *)((int)param_2 + 0x709) = 1;
    FUN_00f2e5c0(local_1278);
    if (bVar26) {
      local_1b8 = (int ******)&local_2e0;
      local_1b4 = (int ******)FUN_00667a08;
      local_2e0 = ppppppiVar10;
      FUN_00664898(&local_c70,&DAT_005bb122,&local_1b8);
      local_1b8 = local_c70;
      local_1b4 = local_c6c;
      local_1b0 = (int ******)local_c68;
      ppppppiVar10 = (int ******)FUN_006679ac(&local_1b8);
      (*(code *)**local_2e0)();
      goto LAB_00f44fe8;
    }
    local_712 = local_722;
    local_714 = local_724;
    local_720 = local_730;
    uStack_71c = uStack_72c;
    local_718 = (undefined1)local_728;
    uVar6 = 0;
    *(undefined2 *)((int)param_2 + 0x1bb) = 0;
    goto LAB_00f4507c;
  }
  *(undefined1 *)((int)param_2 + 0x1ba) = 0;
LAB_00f44fe8:
  if (*(char *)((int)param_2 + 0x1bb) != '\0') {
    FUN_019bb7e0(param_2[0x31],param_2[0x32]);
  }
  pppppiVar17 = (int *****)0x0;
  if (*(char *)(param_2 + 0x6f) != '\0') {
    pppppiVar17 = *param_2;
  }
  if ((*(char *)(param_2 + 0x6f) != '\0' && pppppiVar17 != (int *****)0x80000000) &&
     (*(char *)((int)param_2 + 0x1bd) == '\x01')) {
    FUN_00f25e18(param_2);
  }
  *(undefined1 *)(param_2 + 0x6f) = 0;
  if (*(char *)((int)param_2 + 0x1bb) != '\0') {
    FUN_005f6b64(param_2 + 0x2e);
  }
  *(undefined2 *)((int)param_2 + 0x1bb) = 0;
  uVar6 = 1;
LAB_00f4507c:
  *param_1 = uVar6;
  param_1[3] = local_712;
  *(undefined1 *)((int)param_2 + 0x1bd) = 0;
  *(undefined2 *)(param_1 + 1) = local_714;
  *(int *******)(param_1 + 4) = ppppppiVar10;
  *(undefined4 *)(param_1 + 8) = local_720;
  *(undefined4 *)(param_1 + 0xc) = uStack_71c;
  param_1[0x10] = local_718;
  uVar6 = 1;
LAB_00f469e0:
  *(undefined1 *)((int)param_2 + 0x1be) = uVar6;
  return;
}

