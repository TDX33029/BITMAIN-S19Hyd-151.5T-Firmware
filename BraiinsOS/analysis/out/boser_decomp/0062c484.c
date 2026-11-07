// FUN_0062c484 @ 0062c484 size=11988 calls_out=92 calls_in=1
// strings: BOSer | Load BOS info failed | boser_buildroot | boser_buildroot | boser_buildroot | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Control flow encountered bad instruction data */
/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xfffffda4 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint ***** FUN_0062c484(undefined4 param_1,undefined4 param_2,int *param_3)

{
  code cVar1;
  char cVar2;
  undefined1 uVar3;
  char cVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint ****ppppuVar10;
  int iVar11;
  uint ***pppuVar12;
  uint *****pppppuVar13;
  int iVar14;
  uint *****pppppuVar15;
  char *pcVar16;
  undefined1 extraout_r1;
  undefined1 extraout_r1_00;
  undefined1 extraout_r1_01;
  uint *****pppppuVar17;
  int *piVar18;
  int iVar19;
  code *pcVar20;
  undefined4 uVar21;
  uint *****pppppuVar22;
  int *piVar23;
  int extraout_r2;
  uint ****ppppuVar24;
  undefined *puVar25;
  undefined4 *puVar26;
  uint *****extraout_r3;
  uint *****pppppuVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  uint *****pppppuVar30;
  char *pcVar31;
  uint uVar32;
  uint *****pppppuVar33;
  uint *****pppppuVar34;
  undefined4 *puVar35;
  undefined4 *puVar36;
  uint ****ppppuVar37;
  bool bVar38;
  bool bVar39;
  undefined8 uVar40;
  uint ****local_960;
  undefined4 uStack_95c;
  undefined4 uStack_958;
  undefined4 uStack_954;
  undefined4 uStack_950;
  uint ****local_948;
  undefined4 uStack_944;
  undefined4 uStack_940;
  undefined4 uStack_93c;
  undefined4 uStack_938;
  uint *****local_930;
  code *local_92c;
  int *local_928;
  uint ****local_924;
  uint local_920;
  undefined4 local_91c;
  undefined4 local_918;
  uint local_914;
  uint *****local_910;
  uint *****local_908;
  code *local_904;
  int *local_900;
  uint ****local_8fc;
  uint local_8f8;
  undefined4 uStack_8f4;
  undefined4 local_8f0;
  uint local_8ec;
  uint *****pppppuStack_8e8;
  uint ****local_8e0;
  code *local_8dc;
  uint *****local_8d8;
  uint *****local_8d4;
  uint *****local_8d0;
  uint *****local_8c8;
  uint *****local_8c4;
  uint *****local_8c0;
  uint *****pppppuStack_8bc;
  uint *****pppppuStack_8b8;
  uint *****local_8b0;
  uint *****local_8ac;
  uint *****pppppuStack_8a8;
  uint ****local_8a0 [36];
  undefined1 *local_810;
  uint ****local_804;
  undefined8 local_800;
  uint *****local_7f8;
  uint *****local_7f4;
  int *local_7f0;
  undefined4 uStack_7ec;
  undefined4 uStack_7e8;
  undefined4 uStack_7e4;
  undefined4 local_7e0;
  undefined4 local_7dc;
  uint *****local_688;
  uint *****local_684;
  uint *****local_680;
  uint *****local_67c;
  uint *****local_678;
  uint *****pppppuStack_674;
  uint *****local_500;
  uint *****local_4fc;
  uint *****local_4f8;
  uint *****pppppuStack_4f4;
  uint *****pppppuStack_4f0;
  uint *****local_4e8;
  uint *****local_4e4;
  uint *****local_4e0;
  uint ****local_4d8 [36];
  undefined1 *local_448;
  uint *****local_440;
  uint *****local_43c;
  uint *****local_438;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  uint *****local_410;
  uint *****local_40c;
  uint *****local_408;
  uint *****local_404;
  uint *****pppppuStack_400;
  uint *****pppppuStack_3fc;
  uint ***local_3f8;
  undefined4 local_3f4;
  uint *****pppppuStack_3f0;
  uint *****pppppuStack_3ec;
  uint ***pppuStack_3e8;
  uint ***pppuStack_3e4;
  uint *****local_2a0;
  uint *****local_29c;
  uint *****local_298;
  undefined4 uStack_294;
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  uint *****local_278;
  uint *****local_274;
  uint *****local_270;
  uint *****local_26c;
  uint *****local_268;
  uint *****local_264;
  uint *****local_260;
  undefined4 local_25c;
  uint ***local_258;
  uint ***local_254;
  uint *****local_250;
  uint *****local_24c;
  uint ***local_248;
  uint ***local_244;
  undefined1 local_238;
  undefined4 local_230;
  undefined1 local_22c;
  uint ****local_228;
  undefined1 local_220;
  
  pppppuVar15 = &local_960;
  FUN_0117847c(pppppuVar15,FUN_005efcd8,0,param_1,param_2);
  if (local_960 == (uint ****)0x3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Cannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks."
                 ,0x183,&DAT_01c02250);
  }
  local_948 = local_960;
  uStack_944 = uStack_95c;
  uStack_940 = uStack_958;
  uStack_93c = uStack_954;
  uStack_938 = uStack_950;
  piVar5 = (int *)*param_3;
  if (*piVar5 != 0) {
    uVar21 = 0x35;
    puVar25 = &DAT_01d297b0;
    pcVar16 = "not a CurrentThre";
LAB_0062db64:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(pcVar16,uVar21,puVar25);
  }
  uVar40 = thunk_FUN_01bee35a(0,0x20);
  pppppuVar22 = (uint *****)((int)uVar40 + (int)((ulonglong)uVar40 >> 0x20));
  puVar36 = (undefined4 *)param_3[2];
  puVar35 = puVar36 + 0xf8;
  puVar6 = puVar36 + 0x94;
  puVar7 = puVar36 + 0x7f;
  pppppuVar17 = (uint *****)param_3[1];
  puVar8 = puVar36 + 0x24;
  pppppuVar30 = pppppuVar17 + 4;
  pcVar16 = (char *)(puVar36 + 0x8d);
  puVar26 = puVar36 + 8;
  puVar9 = puVar36 + 0x8e;
LAB_0062c5ac:
  piVar18 = (int *)piVar5[1];
  DataMemoryBarrier(0xb);
  do {
    ppppuVar10 = *pppppuVar30;
    bVar39 = (bool)hasExclusiveAccess(pppppuVar30);
  } while (!bVar39);
  *pppppuVar30 = (uint ****)0x0;
  DataMemoryBarrier(0xb);
  if (ppppuVar10 == (uint ****)0x0) {
    DataMemoryBarrier(0xb);
    local_8ec = local_8ec & 0xffffff00;
    local_8f0 = 0;
    local_904 = (code *)((uint)*pppppuVar17 >> 2);
    local_8f8 = 0;
    local_8fc = (uint ****)0x0;
    local_900 = (int *)0x0;
    local_908 = pppppuVar17;
    uVar40 = FUN_019ee710();
    if ((int)uVar40 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("Failed to `Enter::block_on`",0x1b,&local_804,&DAT_01d29600,&DAT_01d1cb8c);
    }
    local_7f8 = (uint *****)&local_800;
    local_7f0 = (int *)0x0;
    pppppuVar13 = pppppuVar15;
    local_7f4 = local_7f8;
    local_800 = uVar40;
    do {
      cVar2 = FUN_010e73c8(1,0x80);
      iVar11 = FUN_019e0cbc(&local_908,local_7f8);
      uVar32 = 0;
      pppppuVar15 = pppppuVar13;
      if (iVar11 != 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)((int)puVar36 + 0x233)) {
        case 0:
          *(undefined4 *)((int)puVar36 + 0x22f) = 0;
          puVar36[0x89] = 0;
          puVar36[0x8a] = 0;
          puVar36[0x8b] = 0;
          local_410 = (uint *****)FUN_014b6280(&DAT_00570a28);
          local_40c = (uint *****)&DAT_00000008;
          local_684 = (uint *****)&DAT_0132b6a0;
          local_688 = (uint *****)&local_410;
          FUN_00664898(&local_278,&DAT_005af095,&local_688);
          pppppuVar13 = local_274;
          pppppuVar15 = local_278;
          FUN_014b5f18("BOSer",local_274,local_270);
          FUN_019bb7e0(pppppuVar15,pppppuVar13);
          FUN_00f202f4();
          FUN_01205774();
          FUN_019ba2ec();
          FUN_00aed888(puVar8);
          *(undefined1 *)((int)puVar36 + 0x22a) = 1;
          FUN_007b24f0(&local_278);
          if (local_278 == (uint *****)&DAT_80000000) {
            pppppuVar15 = (uint *****)FUN_00ead8e8((uint)&local_278 | 4,"Load BOS info failed");
            goto LAB_0062d75c;
          }
          local_688 = local_270;
          local_684 = local_26c;
          local_680 = local_268;
          local_67c = local_264;
          local_678 = local_260;
          pppppuStack_674 = local_25c;
          *puVar36 = local_278;
          puVar36[1] = local_274;
          puVar36[2] = local_270;
          puVar36[3] = local_26c;
          puVar36[4] = local_268;
          puVar36[5] = local_264;
          puVar36[6] = local_260;
          puVar36[7] = local_25c;
          local_278 = local_688;
          local_274 = local_684;
          local_270 = local_680;
          local_26c = local_67c;
          local_268 = local_678;
          local_264 = pppppuStack_674;
          FUN_005dc224(&local_278);
          if (local_278 == (uint *****)0x2 && local_274 == (uint *****)0x0) {
            local_440 = local_270;
            if (1 < DAT_01d51b00) {
              local_410 = (uint *****)&local_440;
              local_404 = (uint *****)&DAT_0132b6a0;
              local_408 = (uint *****)&DAT_01c24fb8;
              local_40c = (uint *****)FUN_00667a08;
              local_67c = (uint *****)&DAT_0000000f;
              local_678 = (uint *****)&DAT_01c1f240;
              local_684 = (uint *****)&DAT_0000000f;
              local_680 = (uint *****)0x400456;
              local_688 = (uint *****)0x400456;
              FUN_0193b350(&DAT_005ae3a2,&local_410,2,&local_688);
            }
            local_7dc = 0;
            local_7e0 = 2;
            (*(code *)**local_440)();
          }
          else {
            FUN_01bed4e2(&local_7e0,&local_278,0x158);
          }
          *(undefined1 *)((int)puVar36 + 0x229) = 1;
          *(undefined2 *)(puVar36 + 0x8e) = 0;
          pcVar16[0] = '\0';
          pcVar16[1] = '\0';
          pcVar16[2] = '\0';
          pcVar16[3] = '\0';
          FUN_00b86760(&local_278,*(undefined1 *)((int)puVar36 + 0x1d));
          pppppuVar15 = local_274;
          if (local_278 == (uint *****)&DAT_00000001) {
            local_274 = local_270;
            local_278 = pppppuVar15;
            pppppuVar15 = (uint *****)FUN_007afd78(&local_278);
            goto LAB_0062d730;
          }
          *(undefined1 *)(puVar36 + 0x8a) = 1;
          puVar36[0x1c] = local_274;
          puVar36[0x1d] = local_270;
          do {
            ppppuVar10 = *local_274;
            bVar39 = (bool)hasExclusiveAccess(local_274);
          } while (!bVar39);
          *local_274 = (uint ****)((int)ppppuVar10 + 1);
          if (-1 < (int)ppppuVar10) {
            local_250 = local_274;
            local_25c = (uint *****)0x80000007;
            local_22c = 0;
            local_230 = 3;
            local_24c = local_270;
            local_260 = (uint *****)0x2;
            local_264 = (uint *****)((uint)local_264 & 0xffffff00);
            local_268 = (uint *****)0x0;
            local_26c = (uint *****)0x0;
            local_270 = (uint *****)((uint)local_270 & 0xffffff00);
            local_274 = (uint *****)0x1;
            local_278 = (uint *****)0x1;
            local_248 = (uint ***)FUN_00ada608;
            iVar11 = thunk_FUN_01be5118(0x50);
            if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(4,0x50);
            }
            FUN_01bed4e2(iVar11,&local_278,0x50);
            puVar36[0x8f] = iVar11;
            uVar3 = *(undefined1 *)((int)puVar36 + 0x1d);
            *(undefined1 *)((int)puVar36 + 0x227) = 1;
            FUN_006666fc(&local_2a0,puVar36[1],puVar36[2]);
            FUN_006666fc(&local_440,puVar36[4],puVar36[5]);
            local_278 = local_2a0;
            local_274 = local_29c;
            local_270 = local_298;
            local_26c = local_440;
            local_268 = local_43c;
            local_264 = local_438;
            local_410 = local_2a0;
            local_40c = local_29c;
            local_408 = local_298;
            local_404 = local_440;
            pppppuStack_400 = local_43c;
            pppppuStack_3fc = local_438;
            *(undefined1 *)((int)puVar36 + 0x229) = 0;
            local_3f4 = (uint ***)
                        CONCAT31(CONCAT21(local_3f4._2_2_,uVar3),*(undefined1 *)(puVar36 + 7));
            local_3f8 = (uint ***)CONCAT31(local_3f8._1_3_,*(undefined1 *)(puVar36 + 6));
            FUN_01bed4e2(&local_278,&local_7e0,0x158);
            FUN_00b60d28(&local_688,&local_410,&local_278);
            uVar3 = *(undefined1 *)((int)puVar36 + 0x1d);
            *(undefined1 *)((int)puVar36 + 0x232) = 1;
            FUN_006666fc(&local_2a0,puVar36[1],puVar36[2]);
            FUN_006666fc(&local_440,puVar36[4],puVar36[5]);
            local_410 = local_2a0;
            local_40c = local_29c;
            local_408 = local_298;
            local_404 = local_440;
            pppppuStack_400 = local_43c;
            pppppuStack_3fc = local_438;
            local_278 = local_2a0;
            local_274 = local_29c;
            local_270 = local_298;
            local_26c = local_440;
            local_268 = local_43c;
            local_264 = local_438;
            local_25c = (uint *****)
                        CONCAT31(CONCAT21(local_25c._2_2_,uVar3),*(undefined1 *)(puVar36 + 7));
            local_260 = (uint *****)CONCAT31(local_260._1_3_,*(undefined1 *)(puVar36 + 6));
            FUN_014bef88(&local_410);
            uVar21 = FUN_00f26364(&local_410);
            DataMemoryBarrier(0xb);
            if (DAT_01d4c79c != 0) {
              local_440 = (uint *****)&DAT_01d4c774;
              local_410 = (uint *****)&local_440;
              FUN_019a768c(&DAT_01d4c79c,1,&local_410,&DAT_01c1f8e8,&DAT_01d293e0);
            }
            FUN_00b68ad4(puVar7,&local_278,uVar21);
            *(undefined1 *)((int)puVar36 + 0x226) = 1;
            uVar21 = FUN_005da138(*(undefined1 *)((int)puVar36 + 0x1d));
            *(undefined1 *)((int)puVar36 + 0x225) = 1;
            puVar36[0x91] = uVar21;
            *(undefined1 *)((int)puVar36 + 0x232) = 0;
            puVar36[0x92] = &DAT_01c02240;
            FUN_01bed4e2(&local_278,&local_688,0x188);
            FUN_00b88398(puVar6,&local_278);
            piVar18 = (int *)puVar36[0x80];
            *(undefined1 *)(puVar36 + 0x89) = 1;
            do {
              iVar11 = *piVar18;
              bVar39 = (bool)hasExclusiveAccess(piVar18);
            } while (!bVar39);
            *piVar18 = iVar11 + 1;
            if (-1 < iVar11) {
              puVar36[0x90] = piVar18;
              pppppuVar13 = (uint *****)piVar18[2];
              do {
                ppppuVar10 = *pppppuVar13;
                bVar39 = (bool)hasExclusiveAccess(pppppuVar13);
              } while (!bVar39);
              *pppppuVar13 = (uint ****)((int)ppppuVar10 + 1);
              if (-1 < (int)ppppuVar10) {
                ppppuVar10 = pppppuVar13[0x2a];
                pppppuVar15 = pppppuVar13 + 0x2b;
                DataMemoryBarrier(0xb);
                do {
                  bVar39 = (bool)hasExclusiveAccess(pppppuVar15);
                } while (!bVar39);
                *pppppuVar15 = (uint ****)((int)*pppppuVar15 + 1);
                local_440 = pppppuVar13;
                local_43c = (uint *****)((uint)ppppuVar10 & 0xfffffffe);
                FUN_015e8ad4(&local_278,puVar36[0x4f],puVar36[0x50]);
                local_410 = local_278;
                local_40c = local_274;
                local_408 = local_270;
                *puVar35 = local_278;
                puVar36[0xf9] = local_274;
                puVar36[0xfa] = local_270;
                puVar36[0xfc] = (uint *****)((uint)ppppuVar10 & 0xfffffffe);
                *(undefined1 *)(puVar36 + 0x116) = 0;
                puVar36[0xfb] = pppppuVar13;
                goto switchD_0062c66c_caseD_3;
              }
            }
          }
          goto LAB_0062f534;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c1f200);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c1f200);
        case 3:
switchD_0062c66c_caseD_3:
          FUN_0111f988(&local_278,puVar35,&local_7f8);
          pppppuVar15 = local_270;
          pppppuVar27 = local_274;
          if (local_278 == (uint *****)&DAT_00000001) {
            uVar3 = 3;
            goto LAB_0062d4bc;
          }
          local_4e8 = local_26c;
          local_4e4 = local_268;
          local_4e0 = local_264;
          FUN_00bbacb4(puVar35);
          if (pppppuVar27 == (uint *****)0x0) {
            piVar18 = (int *)puVar36[0x90];
            DataMemoryBarrier(0xb);
            do {
              iVar11 = *piVar18;
              bVar39 = (bool)hasExclusiveAccess(piVar18);
            } while (!bVar39);
            *piVar18 = iVar11 + -1;
            if (iVar11 == 1) {
              DataMemoryBarrier(0xb);
              FUN_00b8eb0c(puVar36[0x90]);
            }
            goto LAB_0062d62c;
          }
          local_4f8 = local_4e8;
          pppppuStack_4f4 = local_4e4;
          pppppuStack_4f0 = local_4e0;
          piVar18 = (int *)puVar36[0x90];
          *(undefined1 *)((int)puVar36 + 0x231) = 1;
          local_4fc = pppppuVar15;
          local_500 = pppppuVar27;
          DataMemoryBarrier(0xb);
          do {
            iVar11 = *piVar18;
            bVar39 = (bool)hasExclusiveAccess(piVar18);
          } while (!bVar39);
          *piVar18 = iVar11 + -1;
          if (iVar11 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00b8eb0c(puVar36[0x90]);
          }
          FUN_00b81fdc(&local_410);
          local_274 = (uint *****)&DAT_00000001;
          local_278 = (uint *****)&DAT_00000001;
          local_270 = local_410;
          local_26c = local_40c;
          local_268 = local_408;
          local_264 = local_404;
          local_260 = pppppuStack_400;
          local_25c = pppppuStack_3fc;
          local_258 = local_3f8;
          local_254 = local_3f4;
          local_250 = pppppuStack_3f0;
          local_24c = pppppuStack_3ec;
          local_248 = pppuStack_3e8;
          local_244 = pppuStack_3e4;
          ppppuVar10 = (uint ****)thunk_FUN_01be5118(0x38);
          if (ppppuVar10 == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(8,0x38);
          }
          *ppppuVar10 = (uint ***)local_278;
          ppppuVar10[1] = (uint ***)local_274;
          ppppuVar10[2] = (uint ***)local_270;
          ppppuVar10[3] = (uint ***)local_26c;
          ppppuVar10[4] = (uint ***)local_268;
          ppppuVar10[5] = (uint ***)local_264;
          ppppuVar10[6] = (uint ***)local_260;
          ppppuVar10[7] = (uint ***)local_25c;
          ppppuVar10[8] = local_258;
          ppppuVar10[9] = local_254;
          ppppuVar10[10] = (uint ***)local_250;
          ppppuVar10[0xb] = (uint ***)local_24c;
          ppppuVar10[0xc] = local_248;
          ppppuVar10[0xd] = local_244;
          *(undefined1 *)(puVar36 + 0x8c) = 1;
          puVar36[0x88] = ppppuVar10;
          do {
            pppuVar12 = *ppppuVar10;
            bVar39 = (bool)hasExclusiveAccess(ppppuVar10);
          } while (!bVar39);
          *ppppuVar10 = (uint ***)((int)pppuVar12 + 1);
          if (-1 < (int)pppuVar12) {
            local_220 = 0;
            local_228 = ppppuVar10;
            piVar18 = (int *)FUN_010a48e4(&local_278,&DAT_01c1f210);
            if (*piVar18 == 0xcc) {
              DataMemoryBarrier(0xb);
              bVar39 = (bool)hasExclusiveAccess(piVar18);
              if (!bVar39) goto LAB_0062ce04;
              *piVar18 = 0x84;
            }
            else {
              ClearExclusiveLocal();
LAB_0062ce04:
              (**(code **)(piVar18[2] + 0x10))();
            }
            FUN_00a259e8(puVar36 + 0x1e);
            ppppuVar24 = (uint ****)puVar36[0x1e];
            *(undefined1 *)((int)puVar36 + 0x22f) = 1;
            ppppuVar10 = ppppuVar24 + 0x11;
            do {
              bVar39 = (bool)hasExclusiveAccess(ppppuVar10);
            } while (!bVar39);
            *ppppuVar10 = (uint ***)((int)*ppppuVar10 + 1);
            do {
              pppuVar12 = *ppppuVar24;
              bVar39 = (bool)hasExclusiveAccess(ppppuVar24);
            } while (!bVar39);
            *ppppuVar24 = (uint ***)((int)pppuVar12 + 1);
            if (-1 < (int)pppuVar12) {
              piVar18 = (int *)puVar36[0x1f];
              piVar23 = piVar18 + 0x12;
              do {
                bVar39 = (bool)hasExclusiveAccess(piVar23);
              } while (!bVar39);
              *piVar23 = *piVar23 + 1;
              do {
                iVar11 = *piVar18;
                bVar39 = (bool)hasExclusiveAccess(piVar18);
              } while (!bVar39);
              *piVar18 = iVar11 + 1;
              if (-1 < iVar11) {
                pppppuVar15 = (uint *****)puVar36[0x20];
                pppppuVar13 = pppppuVar15 + 0x11;
                do {
                  bVar39 = (bool)hasExclusiveAccess(pppppuVar13);
                } while (!bVar39);
                *pppppuVar13 = (uint ****)((int)*pppppuVar13 + 1);
                do {
                  ppppuVar10 = *pppppuVar15;
                  bVar39 = (bool)hasExclusiveAccess(pppppuVar15);
                } while (!bVar39);
                *pppppuVar15 = (uint ****)((int)ppppuVar10 + 1);
                if (-1 < (int)ppppuVar10) {
                  pppppuVar13 = (uint *****)puVar36[0x21];
                  pppppuVar27 = pppppuVar13 + 0x12;
                  do {
                    bVar39 = (bool)hasExclusiveAccess(pppppuVar27);
                  } while (!bVar39);
                  *pppppuVar27 = (uint ****)((int)*pppppuVar27 + 1);
                  do {
                    ppppuVar10 = *pppppuVar13;
                    bVar39 = (bool)hasExclusiveAccess(pppppuVar13);
                  } while (!bVar39);
                  *pppppuVar13 = (uint ****)((int)ppppuVar10 + 1);
                  if (-1 < (int)ppppuVar10) {
                    pppppuVar33 = (uint *****)puVar36[0x22];
                    pppppuVar27 = pppppuVar33 + 0x11;
                    do {
                      bVar39 = (bool)hasExclusiveAccess(pppppuVar27);
                    } while (!bVar39);
                    *pppppuVar27 = (uint ****)((int)*pppppuVar27 + 1);
                    do {
                      ppppuVar10 = *pppppuVar33;
                      bVar39 = (bool)hasExclusiveAccess(pppppuVar33);
                    } while (!bVar39);
                    *pppppuVar33 = (uint ****)((int)ppppuVar10 + 1);
                    if (-1 < (int)ppppuVar10) {
                      pppppuVar27 = (uint *****)puVar36[0x23];
                      pppppuVar34 = pppppuVar27 + 0x12;
                      do {
                        bVar39 = (bool)hasExclusiveAccess(pppppuVar34);
                      } while (!bVar39);
                      *pppppuVar34 = (uint ****)((int)*pppppuVar34 + 1);
                      do {
                        ppppuVar10 = *pppppuVar27;
                        bVar39 = (bool)hasExclusiveAccess(pppppuVar27);
                      } while (!bVar39);
                      *pppppuVar27 = (uint ****)((int)ppppuVar10 + 1);
                      if (-1 < (int)ppppuVar10) {
                        local_278 = (uint *****)ppppuVar24;
                        local_274 = (uint *****)piVar18;
                        local_270 = pppppuVar15;
                        local_26c = pppppuVar13;
                        local_268 = pppppuVar33;
                        local_264 = pppppuVar27;
                        FUN_0120f414(local_4d8,&local_278);
                        if (local_448 == &DAT_3b9aca00) {
                          local_8e0 = local_4d8[0];
                          if (DAT_01d50f88 < 5) {
                            if (1 < DAT_01d4c7a8 - 1) {
                              if (DAT_01d4c7a8 != 0) {
                                cVar4 = FUN_01aaafa8(&DAT_01d4c7a0);
                                if (cVar4 != '\0') goto LAB_0062cfe8;
                              }
                              goto LAB_0062d180;
                            }
LAB_0062cfe8:
                            iVar11 = FUN_01aaa278(DAT_01d4c7a0);
                            if (iVar11 == 0) goto LAB_0062d180;
                            if (*(int **)(DAT_01d4c7a0 + 0x20) == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1f220);
                            }
                            local_270 = *(uint ******)(DAT_01d4c7a0 + 0x24);
                            local_26c = *(uint ******)(DAT_01d4c7a0 + 0x28);
                            local_29c = (uint *****)&local_8b0;
                            local_928 = (int *)(DAT_01d4c7a0 + 0x1c);
                            local_278 = (uint *****)*local_928;
                            local_2a0 = (uint *****)&local_278;
                            local_930 = (uint *****)&local_2a0;
                            local_268 = (uint *****)0x0;
                            local_92c = (code *)0x1;
                            local_298 = (uint *****)&DAT_01d2ea4c;
                            local_8ac = (uint *****)&local_8d8;
                            local_8b0 = (uint *****)&DAT_0057ef0e;
                            local_8d4 = (uint *****)FUN_00667a08;
                            local_8d8 = &local_8e0;
                            local_274 = (uint *****)*(int **)(DAT_01d4c7a0 + 0x20);
                            FUN_01aaaecc(DAT_01d4c7a0,&local_930);
                            iVar11 = DAT_01d4c7a0;
                            if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                              local_440 = (uint *****)&DAT_00000001;
                              local_43c = *(uint ******)(DAT_01d4c7a0 + 0x14);
                              local_438 = *(uint ******)(DAT_01d4c7a0 + 0x18);
                              DataMemoryBarrier(0xb);
                              pcVar31 = DAT_01d4edc4;
                              if (DAT_01d51174 != 2) {
                                pcVar31 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                              }
                              puVar28 = DAT_01d4edc8;
                              if (DAT_01d51174 != 2) {
                                puVar28 = &DAT_01cfc5e0;
                              }
                              iVar14 = (*(code *)puVar28[3])(pcVar31,&local_440);
                              if (iVar14 != 0) {
                                local_410 = local_440;
                                local_40c = local_43c;
                                local_408 = local_438;
                                FUN_01aaa328(iVar11,pcVar31,puVar28[4],&local_410,&local_930);
                              }
                            }
                          }
                          else {
LAB_0062d180:
                            iVar11 = DAT_01d4c7a0;
                            if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                              local_8d8 = (uint *****)&DAT_00000001;
                              local_8d4 = *(uint ******)(DAT_01d4c7a0 + 0x14);
                              local_8d0 = *(uint ******)(DAT_01d4c7a0 + 0x18);
                              DataMemoryBarrier(0xb);
                              pcVar31 = DAT_01d4edc4;
                              if (DAT_01d51174 != 2) {
                                pcVar31 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                              }
                              puVar28 = DAT_01d4edc8;
                              if (DAT_01d51174 != 2) {
                                puVar28 = &DAT_01cfc5e0;
                              }
                              iVar14 = (*(code *)puVar28[3])(pcVar31,&local_8d8);
                              if (iVar14 != 0) {
                                if (*(int **)(DAT_01d4c7a0 + 0x20) == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,
                                               &DAT_01c1f220);
                                }
                                local_43c = (uint *****)&local_8b0;
                                local_440 = (uint *****)&local_278;
                                local_2a0 = (uint *****)&local_440;
                                local_270 = *(uint ******)(DAT_01d4c7a0 + 0x24);
                                local_26c = *(uint ******)(DAT_01d4c7a0 + 0x28);
                                local_268 = (uint *****)0x0;
                                local_29c = (uint *****)&DAT_00000001;
                                local_438 = (uint *****)&DAT_01d2ea4c;
                                local_8ac = (uint *****)&local_930;
                                local_8b0 = (uint *****)&DAT_0057ef0e;
                                local_92c = FUN_00667a08;
                                local_930 = &local_8e0;
                                local_410 = local_8d8;
                                local_40c = local_8d4;
                                local_408 = local_8d0;
                                local_298 = (uint *****)(DAT_01d4c7a0 + 0x1c);
                                local_278 = (uint *****)*(uint *****)(DAT_01d4c7a0 + 0x1c);
                                local_274 = (uint *****)*(int **)(DAT_01d4c7a0 + 0x20);
                                FUN_01aaa328(iVar11,pcVar31,puVar28[4],&local_410,&local_2a0);
                              }
                            }
                          }
                          (*(code *)**local_8e0)();
                        }
                        else {
                          FUN_01210650(local_4d8);
                        }
                        FUN_00684be0(&local_278);
                        *(undefined1 *)((int)puVar36 + 0x22e) = 1;
                        FUN_01bed4e2(puVar26,&local_278,0x50);
                        ppppuVar10 = local_228;
                        *(undefined1 *)((int)puVar36 + 0x22d) = 1;
                        local_8e0 = local_228;
                        FUN_00687948(puVar26);
                        *(undefined1 *)((int)puVar36 + 0x22e) = 0;
                        FUN_01bed4e2(&local_270,puVar26,0x50);
                        local_274 = (uint *****)&DAT_00000001;
                        local_278 = (uint *****)&DAT_00000001;
                        iVar11 = thunk_FUN_01be5118(0x58);
                        if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_0066439c(4,0x58);
                        }
                        FUN_01bed4e2(iVar11,&local_278,0x58);
                        *(undefined1 *)(puVar36 + 0x8b) = 1;
                        FUN_00a78170(&local_278);
                        FUN_00a5aa2c(&local_440,&local_278);
                        *(undefined1 *)((int)puVar36 + 0x22a) = 0;
                        FUN_01bed4e2(&local_410,puVar8,0x16c);
                        *(undefined1 *)((int)puVar36 + 0x226) = 0;
                        local_2a0 = (uint *****)*puVar7;
                        local_29c = (uint *****)puVar36[0x80];
                        local_298 = (uint *****)puVar36[0x81];
                        uStack_294 = puVar36[0x82];
                        local_290 = puVar36[0x83];
                        uStack_28c = puVar36[0x84];
                        uStack_288 = puVar36[0x85];
                        uStack_284 = puVar36[0x86];
                        uStack_280 = puVar36[0x87];
                        *(undefined1 *)(puVar36 + 0x89) = 0;
                        FUN_01bed4e2(&local_278,puVar6,400);
                        *(undefined2 *)(puVar36 + 0x8c) = 0;
                        *(undefined2 *)((int)puVar36 + 0x227) = 0;
                        local_8b0 = *(uint ******)pcVar16;
                        local_8ac = (uint *****)
                                    CONCAT22(local_8ac._2_2_,*(undefined2 *)(puVar36 + 0x8e));
                        *(undefined1 *)((int)puVar36 + 0x225) = 0;
                        *(undefined1 *)((int)puVar36 + 0x22f) = 0;
                        local_930 = (uint *****)puVar36[0x1e];
                        local_92c = (code *)puVar36[0x1f];
                        local_928 = (int *)puVar36[0x20];
                        local_924 = (uint ****)puVar36[0x21];
                        local_920 = puVar36[0x22];
                        local_91c = puVar36[0x23];
                        *(undefined2 *)(puVar36 + 0x8b) = 0;
                        FUN_00fa2518(puVar9,&local_410,&local_2a0,&local_278,&local_8b0,
                                     puVar36[0x8f],puVar36[0x1c],puVar36[0x1d],puVar36[0x91],
                                     puVar36[0x92],puVar36[0x88],&local_500,&local_930,iVar11,
                                     ppppuVar10,&local_440,local_420,local_41c,local_418);
                        *(undefined1 *)(puVar36 + 0x8d) = 0;
                        *(undefined1 *)((int)puVar36 + 0x22b) = 1;
                        goto LAB_0062d3b4;
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_0062f534;
        case 4:
          if (*pcVar16 != '\0') {
            if (*pcVar16 == '\x01') {
                    /* WARNING: Subroutine does not return */
              FUN_013079f0(&DAT_01c1f120);
            }
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01c1f120);
          }
LAB_0062d3b4:
          FUN_012cec28(&local_278,&DAT_00568ff8,"/tmp/system.pcap.1");
          pppuVar12 = (uint ***)FUN_012cecf0(&local_278);
          FUN_01a3b664();
          local_244 = (uint ***)FUN_012cd21c();
          local_238 = 0;
          local_248 = pppuVar12;
          piVar18 = (int *)FUN_010a2e3c(&local_278,&DAT_01c1f110);
          if (*piVar18 == 0xcc) {
            DataMemoryBarrier(0xb);
            bVar39 = (bool)hasExclusiveAccess(piVar18);
            if (!bVar39) goto LAB_0062d428;
            *piVar18 = 0x84;
          }
          else {
            ClearExclusiveLocal();
LAB_0062d428:
            (**(code **)(piVar18[2] + 0x10))();
          }
          *(undefined1 *)(puVar36 + 0x2ec) = 0;
          *(undefined1 *)((int)puVar36 + 0x22b) = 0;
          *(undefined1 *)(puVar36 + 0x8d) = 1;
switchD_0062c77c_caseD_0:
          FUN_01bed4e2(&local_270,puVar9,0x248);
          local_274 = (uint *****)&DAT_00000001;
          local_278 = (uint *****)&DAT_00000001;
          pppppuVar13 = (uint *****)thunk_FUN_01be5118(0x250);
          if (pppppuVar13 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(8,0x250);
          }
          FUN_01bed4e2(pppppuVar13,&local_278,0x250);
          *(undefined1 *)((int)puVar36 + 0x4df) = 0;
          puVar36[0x132] = pppppuVar13;
          break;
        case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*(undefined1 *)(puVar36 + 0x2ec)) {
          case 0:
            goto switchD_0062c77c_caseD_0;
          case 1:
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c1fe0c);
          case 2:
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01c1fe0c);
          }
        }
        FUN_011260b0(&local_410,puVar36 + 0x120,&local_7f8);
        if ((char)local_410 == '\x05') {
          *(undefined1 *)(puVar36 + 0x2ec) = 3;
          uVar3 = 5;
LAB_0062d4bc:
          *(undefined1 *)((int)puVar36 + 0x233) = uVar3;
          iVar11 = 1;
          pppppuVar15 = pppppuVar13;
        }
        else {
          FUN_01125c38(puVar36 + 0x120);
          pppppuVar13 = local_40c;
          pppppuVar15 = local_410;
          *(undefined1 *)(puVar36 + 0x2ec) = 1;
          FUN_01125c18(puVar9);
          if (((uint)pppppuVar15 & 0xff) == 4) {
            if (2 < DAT_01d51b00) {
              local_26c = (uint *****)&DAT_0000000f;
              local_274 = (uint *****)&DAT_0000000f;
              local_268 = (uint *****)&DAT_01c1f230;
              local_270 = (uint *****)0x400456;
              local_278 = (uint *****)0x400456;
              FUN_0193b350("BOSer shutting down gracefully",0x3d,3,&local_278);
            }
            pppppuVar15 = (uint *****)0x0;
            *(undefined2 *)(puVar36 + 0x8b) = 0;
            *(undefined2 *)(puVar36 + 0x89) = 0;
            *(undefined2 *)((int)puVar36 + 0x227) = 0;
            *(undefined1 *)((int)puVar36 + 0x22b) = 0;
            *(undefined1 *)((int)puVar36 + 0x232) = 0;
            *(undefined1 *)((int)puVar36 + 0x226) = 0;
            *(undefined4 *)((int)puVar36 + 0x22e) = 0;
            *(undefined1 *)((int)puVar36 + 0x229) = 0;
            FUN_019bb7e0(*puVar36,puVar36[1]);
            FUN_019bb7e0(puVar36[3],puVar36[4]);
          }
          else {
            local_2a0 = pppppuVar15;
            local_29c = pppppuVar13;
            local_40c = (uint *****)FUN_005fdacc;
            local_410 = (uint *****)&local_2a0;
            FUN_00664898(&local_278,&DAT_005a7ea5,&local_410);
            local_410 = local_278;
            local_40c = local_274;
            local_408 = local_270;
            pppppuVar15 = (uint *****)FUN_006679ac(&local_410);
            FUN_00b9391c((uint)local_2a0 & 0xff,local_29c);
            *(undefined2 *)(puVar36 + 0x8b) = 0;
            *(undefined1 *)((int)puVar36 + 0x22b) = 0;
            *(undefined2 *)((int)puVar36 + 0x22e) = 0;
            *(undefined1 *)(puVar36 + 0x8c) = 0;
LAB_0062d62c:
            *(undefined1 *)((int)puVar36 + 0x231) = 0;
            if (*(char *)(puVar36 + 0x89) != '\0') {
              FUN_005f81f0(puVar6);
            }
            *(undefined1 *)(puVar36 + 0x89) = 0;
            if (*(char *)((int)puVar36 + 0x225) != '\0') {
              piVar18 = (int *)puVar36[0x91];
              DataMemoryBarrier(0xb);
              do {
                iVar11 = *piVar18;
                bVar39 = (bool)hasExclusiveAccess(piVar18);
              } while (!bVar39);
              *piVar18 = iVar11 + -1;
              if (iVar11 == 1) {
                DataMemoryBarrier(0xb);
                FUN_01177254(puVar36[0x91],puVar36[0x92]);
              }
            }
            *(undefined1 *)((int)puVar36 + 0x225) = 0;
            if (*(char *)((int)puVar36 + 0x226) != '\0') {
              FUN_005f7270(puVar7);
            }
            *(undefined1 *)((int)puVar36 + 0x232) = 0;
            *(undefined1 *)((int)puVar36 + 0x226) = 0;
            if (*(char *)((int)puVar36 + 0x227) != '\0') {
              piVar18 = (int *)puVar36[0x8f];
              DataMemoryBarrier(0xb);
              do {
                iVar11 = *piVar18;
                bVar39 = (bool)hasExclusiveAccess(piVar18);
              } while (!bVar39);
              *piVar18 = iVar11 + -1;
              if (iVar11 == 1) {
                DataMemoryBarrier(0xb);
                FUN_0121d018(puVar36[0x8f]);
              }
            }
            *(undefined1 *)((int)puVar36 + 0x227) = 0;
            if (*(char *)(puVar36 + 0x8a) != '\0') {
              piVar18 = (int *)puVar36[0x1c];
              DataMemoryBarrier(0xb);
              do {
                iVar11 = *piVar18;
                bVar39 = (bool)hasExclusiveAccess(piVar18);
              } while (!bVar39);
              *piVar18 = iVar11 + -1;
              if (iVar11 == 1) {
                DataMemoryBarrier(0xb);
                FUN_018531c0(puVar36[0x1c],puVar36[0x1d]);
              }
            }
LAB_0062d730:
            *(undefined1 *)(puVar36 + 0x8a) = 0;
            if (*(char *)((int)puVar36 + 0x229) != '\0') {
              FUN_005fbb50(&local_7e0);
            }
            *(undefined1 *)((int)puVar36 + 0x229) = 0;
            FUN_019bb7e0(*puVar36,puVar36[1]);
            FUN_019bb7e0(puVar36[3],puVar36[4]);
LAB_0062d75c:
            if (*(char *)((int)puVar36 + 0x22a) != '\0') {
              FUN_005f69ac(puVar8);
            }
          }
          *(undefined1 *)((int)puVar36 + 0x233) = 1;
          iVar11 = 0;
          *(undefined1 *)((int)puVar36 + 0x22a) = 0;
        }
        uVar32 = iVar11 + 1;
      }
      uVar40 = local_800;
      if (cVar2 != '\x02') {
        if (*(char *)(pppppuVar22 + 0xe) != '\x01') {
          if (*(char *)(pppppuVar22 + 0xe) == '\x02') goto LAB_0062d7c4;
          FUN_019a2bcc(pppppuVar22,&LAB_019efb68);
          *(undefined1 *)(pppppuVar22 + 0xe) = 1;
          uVar40 = local_800;
        }
        *(undefined1 *)((int)pppppuVar22 + 0x31) = extraout_r1;
        *(char *)(pppppuVar22 + 0xc) = cVar2;
      }
LAB_0062d7c4:
      local_800._4_4_ = (uint *****)((ulonglong)uVar40 >> 0x20);
      local_800._0_4_ = (uint ****)uVar40;
      if (uVar32 != 2) goto LAB_0062d988;
      local_800 = uVar40;
      FUN_019ee698();
      pppppuVar13 = pppppuVar15;
    } while( true );
  }
  do {
    iVar11 = *piVar18;
    bVar39 = (bool)hasExclusiveAccess(piVar18);
  } while (!bVar39);
  *piVar18 = iVar11 + 1;
  if (iVar11 < 0) goto LAB_0062f534;
  local_914 = 0;
  local_918 = 4;
  local_91c = 0;
  local_920 = 0;
  local_928 = (int *)0x0;
  local_924 = ppppuVar10;
  local_910 = pppppuVar17;
  uVar40 = thunk_FUN_01bee35a(ppppuVar10,piVar18,0x240);
  local_92c = (code *)((ulonglong)uVar40 >> 0x20);
  uVar32 = *(uint *)((int)uVar40 + extraout_r2);
  iVar11 = piVar5[1];
  local_930 = extraout_r3;
  if (uVar32 < 3) {
    uVar40 = FUN_019b03e8();
  }
  else {
    piVar5 = (int *)(uVar32 - 8);
    do {
      iVar14 = *piVar5;
      iVar19 = iVar14 + 1;
      uVar40 = CONCAT44(iVar19,piVar5);
      bVar39 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar39);
    *piVar5 = iVar19;
    if (iVar14 < 0) goto LAB_0062f534;
  }
  piVar5 = (int *)uVar40;
  FUN_019f8618(iVar11 + 0x80,(int)((ulonglong)uVar40 >> 0x20),piVar5[2],piVar5[3]);
  DataMemoryBarrier(0xb);
  do {
    iVar11 = *piVar5;
    bVar39 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar39);
  *piVar5 = iVar11 + -1;
  if (iVar11 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019a2ffc(piVar5);
  }
  ppppuVar10 = local_924;
  local_908 = local_930;
  local_904 = local_92c;
  local_900 = local_928;
  local_8fc = local_924;
  local_8f8 = local_920;
  uStack_8f4 = local_91c;
  local_8f0 = local_918;
  local_8ec = local_914;
  pppppuStack_8e8 = local_910;
  if (((uint)local_930 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("expected `CurrentThread::Context`",0x43,&DAT_01d291d4);
  }
  if (local_928 != (int *)0x0) {
    FUN_01306fc8(&DAT_01d291e4);
    goto LAB_0062f534;
  }
  puVar35 = (undefined4 *)param_3[2];
  local_900 = (int *)0xffffffff;
  local_8fc = (uint ****)0x0;
  if (local_924 == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("core missing",0xc,&DAT_01d291f4);
  }
  local_900 = (int *)0x0;
  if (*(char *)(pppppuVar22 + 0xe) != '\x01') {
    if (*(char *)(pppppuVar22 + 0xe) == '\x02') {
      FUN_01178420(local_924);
                    /* WARNING: Subroutine does not return */
      FUN_019b0950(&DAT_01d301c0);
    }
    FUN_019a2bcc(pppppuVar22,&LAB_019efb68);
    *(undefined1 *)(pppppuVar22 + 0xe) = 1;
  }
  ppppuVar24 = pppppuVar22[8];
  pppppuVar22[8] = (uint ****)&local_908;
  DataMemoryBarrier(0xb);
  local_904[0x17c] = (code)0x1;
  local_8dc = local_904 + 0x80;
  local_8e0 = (uint ****)&DAT_01d292e4;
  local_8d8 = &local_8e0;
  local_8d0 = (uint *****)0x0;
  local_8d4 = local_8d8;
  FUN_019ac130(&local_278,1);
  uVar32 = (uint)&local_908 | 4;
  ppppuVar10[10] = (uint ***)local_278;
  ppppuVar10[0xb] = (uint ***)local_274;
  ppppuVar10[0xc] = (uint ***)local_270;
  puVar6 = puVar35 + 0x8b;
  puVar7 = puVar35 + 8;
  puVar8 = puVar35 + 0xf8;
  puVar9 = puVar35 + 0x94;
  puVar26 = puVar35 + 0x7f;
  puVar36 = puVar35 + 0x24;
  pcVar16 = (char *)(puVar35 + 0x8d);
  puVar28 = puVar35 + 0x8e;
  pppppuVar17 = (uint *****)&local_278;
  do {
    DataMemoryBarrier(0xb);
    pcVar20 = local_904 + 0x17c;
    do {
      cVar1 = *pcVar20;
      bVar39 = (bool)hasExclusiveAccess(pcVar20);
    } while (!bVar39);
    *pcVar20 = (code)0x0;
    DataMemoryBarrier(0xb);
    pppppuVar15 = pppppuVar17;
    if (cVar1 != (code)0x0) {
      if (local_900 != (int *)0x0) {
        FUN_01306fc8(&DAT_01d291a4);
        goto LAB_0062f534;
      }
      local_900 = (int *)0xffffffff;
      if (local_8fc == (uint ****)0x0) {
        local_900 = (int *)0x0;
      }
      else {
        FUN_01178420();
        local_900 = (int *)((int)local_900 + 1);
      }
      local_8fc = ppppuVar10;
      cVar2 = FUN_010e73c8(1,0x80);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)puVar35 + 0x233)) {
      case 0:
        *(undefined4 *)((int)puVar35 + 0x22f) = 0;
        puVar35[0x89] = 0;
        puVar35[0x8a] = 0;
        puVar35[0x8b] = 0;
        local_410 = (uint *****)FUN_014b6280(&DAT_00570a28);
        local_40c = (uint *****)&DAT_00000008;
        local_684 = (uint *****)&DAT_0132b6a0;
        local_688 = (uint *****)&local_410;
        FUN_00664898(&local_278,&DAT_005af095,&local_688);
        pppppuVar17 = local_274;
        pppppuVar15 = local_278;
        FUN_014b5f18("BOSer",local_274,local_270);
        FUN_019bb7e0(pppppuVar15,pppppuVar17);
        FUN_00f202f4();
        FUN_01205774();
        FUN_019ba2ec();
        FUN_00aed888(puVar36);
        *(undefined1 *)((int)puVar35 + 0x22a) = 1;
        FUN_007b24f0(&local_278);
        if (local_278 != (uint *****)&DAT_80000000) {
          local_688 = local_270;
          local_684 = local_26c;
          local_680 = local_268;
          local_67c = local_264;
          local_678 = local_260;
          pppppuStack_674 = local_25c;
          *puVar35 = local_278;
          puVar35[1] = local_274;
          puVar35[2] = local_270;
          puVar35[3] = local_26c;
          puVar35[4] = local_268;
          puVar35[5] = local_264;
          puVar35[6] = local_260;
          puVar35[7] = local_25c;
          local_278 = local_688;
          local_274 = local_684;
          local_270 = local_680;
          local_26c = local_67c;
          local_268 = local_678;
          local_264 = pppppuStack_674;
          FUN_005dc224(&local_278);
          if (local_278 == (uint *****)0x2 && local_274 == (uint *****)0x0) {
            local_440 = local_270;
            if (1 < DAT_01d51b00) {
              local_410 = (uint *****)&local_440;
              local_404 = (uint *****)&DAT_0132b6a0;
              local_408 = (uint *****)&DAT_01c24fb8;
              local_40c = (uint *****)FUN_00667a08;
              local_67c = (uint *****)&DAT_0000000f;
              local_678 = (uint *****)&DAT_01c1f240;
              local_684 = (uint *****)&DAT_0000000f;
              local_680 = (uint *****)0x400456;
              local_688 = (uint *****)0x400456;
              FUN_0193b350(&DAT_005ae3a2,&local_410,2,&local_688);
            }
            local_7dc = 0;
            local_7e0 = 2;
            (*(code *)**local_440)();
          }
          else {
            FUN_01bed4e2(&local_7e0,&local_278,0x158);
          }
          uVar3 = *(undefined1 *)((int)puVar35 + 0x1d);
          *(undefined1 *)((int)puVar35 + 0x229) = 1;
          *(undefined2 *)(puVar35 + 0x8e) = 0;
          pcVar16[0] = '\0';
          pcVar16[1] = '\0';
          pcVar16[2] = '\0';
          pcVar16[3] = '\0';
          FUN_00b86760(&local_278,uVar3);
          pppppuVar15 = local_274;
          if (local_278 != (uint *****)&DAT_00000001) {
            *(undefined1 *)(puVar35 + 0x8a) = 1;
            puVar35[0x1c] = local_274;
            puVar35[0x1d] = local_270;
            do {
              ppppuVar10 = *local_274;
              bVar39 = (bool)hasExclusiveAccess(local_274);
            } while (!bVar39);
            *local_274 = (uint ****)((int)ppppuVar10 + 1);
            if ((int)ppppuVar10 < 0) goto LAB_0062f534;
            local_250 = local_274;
            local_25c = (uint *****)0x80000007;
            local_22c = 0;
            local_230 = 3;
            local_24c = local_270;
            local_260 = (uint *****)0x2;
            local_264 = (uint *****)((uint)local_264 & 0xffffff00);
            local_268 = (uint *****)0x0;
            local_26c = (uint *****)0x0;
            local_270 = (uint *****)((uint)local_270 & 0xffffff00);
            local_274 = (uint *****)0x1;
            local_278 = (uint *****)0x1;
            local_248 = (uint ***)FUN_00ada608;
            iVar11 = thunk_FUN_01be5118(0x50);
            if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(4,0x50);
            }
            FUN_01bed4e2(iVar11,&local_278,0x50);
            puVar35[0x8f] = iVar11;
            uVar3 = *(undefined1 *)((int)puVar35 + 0x1d);
            *(undefined1 *)((int)puVar35 + 0x227) = 1;
            FUN_006666fc(&local_2a0,puVar35[1],puVar35[2]);
            FUN_006666fc(&local_440,puVar35[4],puVar35[5]);
            local_278 = local_2a0;
            local_274 = local_29c;
            local_270 = local_298;
            local_26c = local_440;
            local_268 = local_43c;
            local_264 = local_438;
            local_410 = local_2a0;
            local_40c = local_29c;
            local_408 = local_298;
            local_404 = local_440;
            pppppuStack_400 = local_43c;
            pppppuStack_3fc = local_438;
            local_3f4 = (uint ***)
                        CONCAT31(CONCAT21(local_3f4._2_2_,uVar3),*(undefined1 *)(puVar35 + 7));
            local_3f8 = (uint ***)CONCAT31(local_3f8._1_3_,*(undefined1 *)(puVar35 + 6));
            *(undefined1 *)((int)puVar35 + 0x229) = 0;
            FUN_01bed4e2(&local_278,&local_7e0,0x158);
            FUN_00b60d28(&local_688,&local_410,&local_278);
            uVar3 = *(undefined1 *)((int)puVar35 + 0x1d);
            *(undefined1 *)((int)puVar35 + 0x232) = 1;
            FUN_006666fc(&local_2a0,puVar35[1],puVar35[2]);
            FUN_006666fc(&local_440,puVar35[4],puVar35[5]);
            local_410 = local_2a0;
            local_40c = local_29c;
            local_408 = local_298;
            local_404 = local_440;
            pppppuStack_400 = local_43c;
            pppppuStack_3fc = local_438;
            local_278 = local_2a0;
            local_274 = local_29c;
            local_270 = local_298;
            local_26c = local_440;
            local_268 = local_43c;
            local_264 = local_438;
            local_25c = (uint *****)
                        CONCAT31(CONCAT21(local_25c._2_2_,uVar3),*(undefined1 *)(puVar35 + 7));
            local_260 = (uint *****)CONCAT31(local_260._1_3_,*(undefined1 *)(puVar35 + 6));
            FUN_014bef88(&local_410);
            uVar21 = FUN_00f26364(&local_410);
            DataMemoryBarrier(0xb);
            if (DAT_01d4c79c != 0) {
              local_410 = (uint *****)&local_440;
              local_440 = (uint *****)&DAT_01d4c774;
              FUN_019a768c(&DAT_01d4c79c,1,&local_410,&DAT_01c14040,&DAT_01d293e0);
            }
            FUN_00b68ad4(puVar26,&local_278,uVar21);
            *(undefined1 *)((int)puVar35 + 0x226) = 1;
            uVar21 = FUN_005da138(*(undefined1 *)((int)puVar35 + 0x1d));
            *(undefined1 *)((int)puVar35 + 0x225) = 1;
            puVar35[0x91] = uVar21;
            *(undefined1 *)((int)puVar35 + 0x232) = 0;
            puVar35[0x92] = &DAT_01c02240;
            FUN_01bed4e2(&local_278,&local_688,0x188);
            FUN_00b88398(puVar9,&local_278);
            piVar5 = (int *)puVar35[0x80];
            *(undefined1 *)(puVar35 + 0x89) = 1;
            do {
              iVar11 = *piVar5;
              bVar39 = (bool)hasExclusiveAccess(piVar5);
            } while (!bVar39);
            *piVar5 = iVar11 + 1;
            if (iVar11 < 0) goto LAB_0062f534;
            puVar35[0x90] = piVar5;
            pppppuVar17 = (uint *****)piVar5[2];
            do {
              ppppuVar10 = *pppppuVar17;
              bVar39 = (bool)hasExclusiveAccess(pppppuVar17);
            } while (!bVar39);
            *pppppuVar17 = (uint ****)((int)ppppuVar10 + 1);
            if ((int)ppppuVar10 < 0) goto LAB_0062f534;
            ppppuVar10 = pppppuVar17[0x2a];
            pppppuVar15 = pppppuVar17 + 0x2b;
            DataMemoryBarrier(0xb);
            do {
              bVar39 = (bool)hasExclusiveAccess(pppppuVar15);
            } while (!bVar39);
            *pppppuVar15 = (uint ****)((int)*pppppuVar15 + 1);
            local_440 = pppppuVar17;
            local_43c = (uint *****)((uint)ppppuVar10 & 0xfffffffe);
            FUN_015e8ad4(&local_278,puVar35[0x4f],puVar35[0x50]);
            local_410 = local_278;
            local_40c = local_274;
            local_408 = local_270;
            *puVar8 = local_278;
            puVar35[0xf9] = local_274;
            puVar35[0xfa] = local_270;
            *(undefined1 *)(puVar35 + 0x116) = 0;
            puVar35[0xfb] = pppppuVar17;
            puVar35[0xfc] = (uint *****)((uint)ppppuVar10 & 0xfffffffe);
            goto switchD_0062dd54_caseD_3;
          }
          local_274 = local_270;
          local_278 = pppppuVar15;
          pppppuVar15 = (uint *****)FUN_007afd78(&local_278);
          goto LAB_0062ef4c;
        }
        pppppuVar15 = (uint *****)FUN_00ead8e8((uint)&local_278 | 4,"Load BOS info failed");
        goto LAB_0062ef78;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1f200);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1f200);
      case 3:
switchD_0062dd54_caseD_3:
        FUN_00bbaf34(&local_278,puVar8,&local_8d8);
        pppppuVar15 = local_270;
        pppppuVar30 = local_274;
        if (local_278 != (uint *****)&DAT_00000001) {
          local_8b0 = local_26c;
          local_8ac = local_268;
          pppppuStack_8a8 = local_264;
          FUN_00bbacb4(puVar8);
          if (pppppuVar30 != (uint *****)0x0) {
            local_8c0 = local_8b0;
            pppppuStack_8bc = local_8ac;
            pppppuStack_8b8 = pppppuStack_8a8;
            piVar5 = (int *)puVar35[0x90];
            *(undefined1 *)((int)puVar35 + 0x231) = 1;
            local_8c4 = pppppuVar15;
            local_8c8 = pppppuVar30;
            DataMemoryBarrier(0xb);
            do {
              iVar11 = *piVar5;
              bVar39 = (bool)hasExclusiveAccess(piVar5);
            } while (!bVar39);
            *piVar5 = iVar11 + -1;
            if (iVar11 == 1) {
              DataMemoryBarrier(0xb);
              FUN_00b8eb0c(puVar35[0x90]);
            }
            FUN_00b81fdc(&local_410);
            local_274 = (uint *****)&DAT_00000001;
            local_278 = (uint *****)&DAT_00000001;
            local_270 = local_410;
            local_26c = local_40c;
            local_268 = local_408;
            local_264 = local_404;
            local_260 = pppppuStack_400;
            local_25c = pppppuStack_3fc;
            local_258 = local_3f8;
            local_254 = local_3f4;
            local_250 = pppppuStack_3f0;
            local_24c = pppppuStack_3ec;
            local_248 = pppuStack_3e8;
            local_244 = pppuStack_3e4;
            ppppuVar10 = (uint ****)thunk_FUN_01be5118(0x38);
            if (ppppuVar10 == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(8,0x38);
            }
            *ppppuVar10 = (uint ***)local_278;
            ppppuVar10[1] = (uint ***)local_274;
            ppppuVar10[2] = (uint ***)local_270;
            ppppuVar10[3] = (uint ***)local_26c;
            ppppuVar10[4] = (uint ***)local_268;
            ppppuVar10[5] = (uint ***)local_264;
            ppppuVar10[6] = (uint ***)local_260;
            ppppuVar10[7] = (uint ***)local_25c;
            ppppuVar10[8] = local_258;
            ppppuVar10[9] = local_254;
            ppppuVar10[10] = (uint ***)local_250;
            ppppuVar10[0xb] = (uint ***)local_24c;
            ppppuVar10[0xc] = local_248;
            ppppuVar10[0xd] = local_244;
            *(undefined1 *)(puVar35 + 0x8c) = 1;
            puVar35[0x88] = ppppuVar10;
            do {
              pppuVar12 = *ppppuVar10;
              bVar39 = (bool)hasExclusiveAccess(ppppuVar10);
            } while (!bVar39);
            *ppppuVar10 = (uint ***)((int)pppuVar12 + 1);
            if ((int)pppuVar12 < 0) goto LAB_0062f534;
            local_220 = 0;
            local_228 = ppppuVar10;
            piVar5 = (int *)FUN_010a48e4(&local_278,&DAT_01c1f210);
            if (*piVar5 == 0xcc) {
              DataMemoryBarrier(0xb);
              bVar39 = (bool)hasExclusiveAccess(piVar5);
              if (!bVar39) goto LAB_0062e50c;
              *piVar5 = 0x84;
            }
            else {
              ClearExclusiveLocal();
LAB_0062e50c:
              (**(code **)(piVar5[2] + 0x10))();
            }
            FUN_00a259e8(puVar35 + 0x1e);
            ppppuVar37 = (uint ****)puVar35[0x1e];
            *(undefined1 *)((int)puVar35 + 0x22f) = 1;
            ppppuVar10 = ppppuVar37 + 0x11;
            do {
              bVar39 = (bool)hasExclusiveAccess(ppppuVar10);
            } while (!bVar39);
            *ppppuVar10 = (uint ***)((int)*ppppuVar10 + 1);
            do {
              pppuVar12 = *ppppuVar37;
              bVar39 = (bool)hasExclusiveAccess(ppppuVar37);
            } while (!bVar39);
            *ppppuVar37 = (uint ***)((int)pppuVar12 + 1);
            if ((int)pppuVar12 < 0) goto LAB_0062f534;
            piVar5 = (int *)puVar35[0x1f];
            piVar18 = piVar5 + 0x12;
            do {
              bVar39 = (bool)hasExclusiveAccess(piVar18);
            } while (!bVar39);
            *piVar18 = *piVar18 + 1;
            do {
              iVar11 = *piVar5;
              bVar39 = (bool)hasExclusiveAccess(piVar5);
            } while (!bVar39);
            *piVar5 = iVar11 + 1;
            if (iVar11 < 0) goto LAB_0062f534;
            pppppuVar15 = (uint *****)puVar35[0x20];
            pppppuVar17 = pppppuVar15 + 0x11;
            do {
              bVar39 = (bool)hasExclusiveAccess(pppppuVar17);
            } while (!bVar39);
            *pppppuVar17 = (uint ****)((int)*pppppuVar17 + 1);
            do {
              ppppuVar10 = *pppppuVar15;
              bVar39 = (bool)hasExclusiveAccess(pppppuVar15);
            } while (!bVar39);
            *pppppuVar15 = (uint ****)((int)ppppuVar10 + 1);
            if ((int)ppppuVar10 < 0) goto LAB_0062f534;
            pppppuVar17 = (uint *****)puVar35[0x21];
            pppppuVar30 = pppppuVar17 + 0x12;
            do {
              bVar39 = (bool)hasExclusiveAccess(pppppuVar30);
            } while (!bVar39);
            *pppppuVar30 = (uint ****)((int)*pppppuVar30 + 1);
            do {
              ppppuVar10 = *pppppuVar17;
              bVar39 = (bool)hasExclusiveAccess(pppppuVar17);
            } while (!bVar39);
            *pppppuVar17 = (uint ****)((int)ppppuVar10 + 1);
            if ((int)ppppuVar10 < 0) goto LAB_0062f534;
            pppppuVar30 = (uint *****)puVar35[0x22];
            pppppuVar13 = pppppuVar30 + 0x11;
            do {
              bVar39 = (bool)hasExclusiveAccess(pppppuVar13);
            } while (!bVar39);
            *pppppuVar13 = (uint ****)((int)*pppppuVar13 + 1);
            do {
              ppppuVar10 = *pppppuVar30;
              bVar39 = (bool)hasExclusiveAccess(pppppuVar30);
            } while (!bVar39);
            *pppppuVar30 = (uint ****)((int)ppppuVar10 + 1);
            if ((int)ppppuVar10 < 0) goto LAB_0062f534;
            pppppuVar13 = (uint *****)puVar35[0x23];
            pppppuVar27 = pppppuVar13 + 0x12;
            do {
              bVar39 = (bool)hasExclusiveAccess(pppppuVar27);
            } while (!bVar39);
            *pppppuVar27 = (uint ****)((int)*pppppuVar27 + 1);
            do {
              ppppuVar10 = *pppppuVar13;
              bVar39 = (bool)hasExclusiveAccess(pppppuVar13);
            } while (!bVar39);
            *pppppuVar13 = (uint ****)((int)ppppuVar10 + 1);
            if ((int)ppppuVar10 < 0) goto LAB_0062f534;
            local_278 = (uint *****)ppppuVar37;
            local_274 = (uint *****)piVar5;
            local_270 = pppppuVar15;
            local_26c = pppppuVar17;
            local_268 = pppppuVar30;
            local_264 = pppppuVar13;
            FUN_0120f414(local_8a0,&local_278);
            if (local_810 == &DAT_3b9aca00) {
              local_804 = local_8a0[0];
              if (DAT_01d50f88 < 5) {
                if (1 < DAT_01d4c7a8 - 1) {
                  if (DAT_01d4c7a8 != 0) {
                    cVar4 = FUN_01aaafa8(&DAT_01d4c7a0);
                    if (cVar4 != '\0') goto LAB_0062e6e4;
                  }
                  goto LAB_0062e8bc;
                }
LAB_0062e6e4:
                iVar11 = FUN_01aaa278(DAT_01d4c7a0);
                if (iVar11 == 0) goto LAB_0062e8bc;
                if (*(int **)(DAT_01d4c7a0 + 0x20) == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1f220);
                }
                local_270 = *(uint ******)(DAT_01d4c7a0 + 0x24);
                local_26c = *(uint ******)(DAT_01d4c7a0 + 0x28);
                local_29c = (uint *****)&local_800;
                local_7f0 = (int *)(DAT_01d4c7a0 + 0x1c);
                local_278 = (uint *****)*local_7f0;
                local_2a0 = (uint *****)&local_278;
                local_7f8 = (uint *****)&local_2a0;
                local_268 = (uint *****)0x0;
                local_7f4 = (uint *****)&DAT_00000001;
                local_298 = (uint *****)&DAT_01d2ea4c;
                local_800._4_4_ = (uint *****)&local_4e8;
                local_800._0_4_ = (uint ****)&DAT_0057ef0e;
                local_4e4 = (uint *****)FUN_00667a08;
                local_4e8 = &local_804;
                local_274 = (uint *****)*(int **)(DAT_01d4c7a0 + 0x20);
                FUN_01aaaecc(DAT_01d4c7a0,&local_7f8);
                iVar11 = DAT_01d4c7a0;
                local_800 = CONCAT44(local_800._4_4_,(uint ****)local_800);
                if ((DAT_01d51ae9 == '\0') &&
                   (local_800 = CONCAT44(local_800._4_4_,(uint ****)local_800), DAT_01d51b00 != 0))
                {
                  local_440 = (uint *****)&DAT_00000001;
                  local_43c = *(uint ******)(DAT_01d4c7a0 + 0x14);
                  local_438 = *(uint ******)(DAT_01d4c7a0 + 0x18);
                  DataMemoryBarrier(0xb);
                  pcVar31 = DAT_01d4edc4;
                  if (DAT_01d51174 != 2) {
                    pcVar31 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                  }
                  puVar29 = DAT_01d4edc8;
                  if (DAT_01d51174 != 2) {
                    puVar29 = &DAT_01cfc5e0;
                  }
                  iVar14 = (*(code *)puVar29[3])(pcVar31,&local_440);
                  if (iVar14 != 0) {
                    local_410 = local_440;
                    local_40c = local_43c;
                    local_408 = local_438;
                    FUN_01aaa328(iVar11,pcVar31,puVar29[4],&local_410,&local_7f8);
                  }
                }
              }
              else {
LAB_0062e8bc:
                iVar11 = DAT_01d4c7a0;
                if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                  local_4e8 = (uint *****)&DAT_00000001;
                  local_4e4 = *(uint ******)(DAT_01d4c7a0 + 0x14);
                  local_4e0 = *(uint ******)(DAT_01d4c7a0 + 0x18);
                  DataMemoryBarrier(0xb);
                  pcVar31 = DAT_01d4edc4;
                  if (DAT_01d51174 != 2) {
                    pcVar31 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                  }
                  puVar29 = DAT_01d4edc8;
                  if (DAT_01d51174 != 2) {
                    puVar29 = &DAT_01cfc5e0;
                  }
                  iVar14 = (*(code *)puVar29[3])(pcVar31,&local_4e8);
                  if (iVar14 != 0) {
                    if (*(int **)(DAT_01d4c7a0 + 0x20) == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1f220);
                    }
                    local_43c = (uint *****)&local_800;
                    local_440 = (uint *****)&local_278;
                    local_2a0 = (uint *****)&local_440;
                    local_270 = *(uint ******)(DAT_01d4c7a0 + 0x24);
                    local_26c = *(uint ******)(DAT_01d4c7a0 + 0x28);
                    local_268 = (uint *****)0x0;
                    local_29c = (uint *****)&DAT_00000001;
                    local_438 = (uint *****)&DAT_01d2ea4c;
                    local_800._4_4_ = (uint *****)&local_7f8;
                    local_800._0_4_ = (uint ****)&DAT_0057ef0e;
                    local_7f4 = (uint *****)FUN_00667a08;
                    local_7f8 = &local_804;
                    local_410 = local_4e8;
                    local_40c = local_4e4;
                    local_408 = local_4e0;
                    local_298 = (uint *****)(DAT_01d4c7a0 + 0x1c);
                    local_278 = (uint *****)*(uint *****)(DAT_01d4c7a0 + 0x1c);
                    local_274 = (uint *****)*(int **)(DAT_01d4c7a0 + 0x20);
                    FUN_01aaa328(iVar11,pcVar31,puVar29[4],&local_410,&local_2a0);
                  }
                }
              }
              (*(code *)**local_804)();
            }
            else {
              FUN_01210650(local_8a0);
            }
            FUN_00684be0(&local_278);
            *(undefined1 *)((int)puVar35 + 0x22e) = 1;
            FUN_01bed4e2(puVar7,&local_278,0x50);
            ppppuVar10 = local_228;
            *(undefined1 *)((int)puVar35 + 0x22d) = 1;
            FUN_00687948(puVar7);
            *(undefined1 *)((int)puVar35 + 0x22e) = 0;
            FUN_01bed4e2(&local_270,puVar7,0x50);
            local_274 = (uint *****)&DAT_00000001;
            local_278 = (uint *****)&DAT_00000001;
            iVar11 = thunk_FUN_01be5118(0x58);
            if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(4,0x58);
            }
            FUN_01bed4e2(iVar11,&local_278,0x58);
            *(undefined1 *)puVar6 = 1;
            FUN_00a78170(&local_278);
            FUN_00a5aa2c(&local_440,&local_278);
            *(undefined1 *)((int)puVar35 + 0x22a) = 0;
            FUN_01bed4e2(&local_410,puVar36,0x16c);
            *(undefined1 *)((int)puVar35 + 0x226) = 0;
            local_2a0 = (uint *****)*puVar26;
            local_29c = (uint *****)puVar35[0x80];
            local_298 = (uint *****)puVar35[0x81];
            uStack_294 = puVar35[0x82];
            local_290 = puVar35[0x83];
            uStack_28c = puVar35[0x84];
            uStack_288 = puVar35[0x85];
            uStack_284 = puVar35[0x86];
            uStack_280 = puVar35[0x87];
            *(undefined1 *)(puVar35 + 0x89) = 0;
            FUN_01bed4e2(&local_278,puVar9,400);
            *(undefined2 *)(puVar35 + 0x8c) = 0;
            *(undefined2 *)((int)puVar35 + 0x227) = 0;
            local_800._4_4_ = (uint *****)CONCAT22(local_800._6_2_,*(undefined2 *)(puVar35 + 0x8e));
            *(undefined1 *)((int)puVar35 + 0x225) = 0;
            *(undefined1 *)((int)puVar35 + 0x22f) = 0;
            local_7f8 = (uint *****)puVar35[0x1e];
            local_7f4 = (uint *****)puVar35[0x1f];
            local_7f0 = (int *)puVar35[0x20];
            uStack_7ec = puVar35[0x21];
            uStack_7e8 = puVar35[0x22];
            uStack_7e4 = puVar35[0x23];
            *(undefined2 *)(puVar35 + 0x8b) = 0;
            local_800._0_4_ = *(uint *****)pcVar16;
            FUN_00fa2518(puVar28,&local_410,&local_2a0,&local_278,&local_800,puVar35[0x8f],
                         puVar35[0x1c],puVar35[0x1d],puVar35[0x91],puVar35[0x92],puVar35[0x88],
                         &local_8c8,&local_7f8,iVar11,ppppuVar10,&local_440,local_420,local_41c,
                         local_418);
            *(undefined1 *)((int)puVar35 + 0x22b) = 1;
            *(undefined1 *)(puVar35 + 0x8d) = 0;
            goto LAB_0062ebf0;
          }
          piVar5 = (int *)puVar35[0x90];
          DataMemoryBarrier(0xb);
          do {
            iVar11 = *piVar5;
            bVar39 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar39);
          *piVar5 = iVar11 + -1;
          if (iVar11 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00b8eb0c(puVar35[0x90]);
          }
          goto LAB_0062ee54;
        }
        uVar3 = 3;
        goto LAB_0062ece4;
      case 4:
        if (*pcVar16 != '\0') {
          if (*pcVar16 == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c1f120);
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c1f120);
        }
LAB_0062ebf0:
        FUN_012cec28(&local_278,&DAT_00568ff8,"/tmp/system.pcap.1");
        pppuVar12 = (uint ***)FUN_012cecf0(&local_278);
        FUN_01a3b664();
        local_244 = (uint ***)FUN_012cd21c();
        local_238 = 0;
        local_248 = pppuVar12;
        piVar5 = (int *)FUN_010a2e3c(&local_278,&DAT_01c1f110);
        if (*piVar5 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar39 = (bool)hasExclusiveAccess(piVar5);
          if (!bVar39) goto LAB_0062ec60;
          *piVar5 = 0x84;
        }
        else {
          ClearExclusiveLocal();
LAB_0062ec60:
          (**(code **)(piVar5[2] + 0x10))();
        }
        *(undefined1 *)(puVar35 + 0x2ec) = 0;
        *(undefined1 *)((int)puVar35 + 0x22b) = 0;
        *(undefined1 *)(puVar35 + 0x8d) = 1;
switchD_0062de58_caseD_0:
        FUN_01bed4e2(&local_270,puVar28,0x248);
        local_274 = (uint *****)&DAT_00000001;
        local_278 = (uint *****)&DAT_00000001;
        pppppuVar17 = (uint *****)thunk_FUN_01be5118(0x250);
        if (pppppuVar17 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0x250);
        }
        FUN_01bed4e2(pppppuVar17,&local_278,0x250);
        *(undefined1 *)((int)puVar35 + 0x4df) = 0;
        puVar35[0x132] = pppppuVar17;
        break;
      case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(puVar35 + 0x2ec)) {
        case 0:
          goto switchD_0062de58_caseD_0;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c1fe0c);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c1fe0c);
        }
        break;
      case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      FUN_00bc542c(&local_410,puVar35 + 0x120,&local_8d8);
      if ((char)local_410 == '\x05') {
        *(undefined1 *)(puVar35 + 0x2ec) = 3;
        uVar3 = 5;
LAB_0062ece4:
        *(undefined1 *)((int)puVar35 + 0x233) = uVar3;
        bVar39 = true;
        pppppuVar15 = pppppuVar17;
      }
      else {
        FUN_00bc4fb4(puVar35 + 0x120);
        pppppuVar17 = local_40c;
        pppppuVar15 = local_410;
        *(undefined1 *)(puVar35 + 0x2ec) = 1;
        FUN_00bc4f94(puVar28);
        if (((uint)pppppuVar15 & 0xff) == 4) {
          if (2 < DAT_01d51b00) {
            local_26c = (uint *****)&DAT_0000000f;
            local_274 = (uint *****)&DAT_0000000f;
            local_268 = (uint *****)&DAT_01c1f230;
            local_270 = (uint *****)0x400456;
            local_278 = (uint *****)0x400456;
            FUN_0193b350("BOSer shutting down gracefully",0x3d,3,&local_278);
          }
          pppppuVar15 = (uint *****)0x0;
          *(undefined2 *)(puVar35 + 0x89) = 0;
          *(undefined1 *)((int)puVar35 + 0x22b) = 0;
          *(undefined1 *)((int)puVar35 + 0x226) = 0;
          *puVar6 = 0;
          *(undefined4 *)((int)puVar35 + 0x22f) = 0;
          *(undefined2 *)((int)puVar35 + 0x227) = 0;
          *(undefined1 *)((int)puVar35 + 0x229) = 0;
          FUN_019bb7e0(*puVar35,puVar35[1]);
          FUN_019bb7e0(puVar35[3],puVar35[4]);
        }
        else {
          local_2a0 = pppppuVar15;
          local_29c = pppppuVar17;
          local_40c = (uint *****)FUN_005fdacc;
          local_410 = (uint *****)&local_2a0;
          FUN_00664898(&local_278,&DAT_005a7ea5,&local_410);
          local_410 = local_278;
          local_40c = local_274;
          local_408 = local_270;
          pppppuVar15 = (uint *****)FUN_006679ac(&local_410);
          FUN_00b9391c((uint)local_2a0 & 0xff,local_29c);
          *(undefined1 *)((int)puVar35 + 0x22b) = 0;
          *(undefined1 *)(puVar35 + 0x8c) = 0;
          *puVar6 = 0;
LAB_0062ee54:
          *(undefined1 *)((int)puVar35 + 0x231) = 0;
          if (*(char *)(puVar35 + 0x89) != '\0') {
            FUN_005f81f0(puVar9);
          }
          *(undefined1 *)(puVar35 + 0x89) = 0;
          if (*(char *)((int)puVar35 + 0x225) != '\0') {
            piVar5 = (int *)puVar35[0x91];
            DataMemoryBarrier(0xb);
            do {
              iVar11 = *piVar5;
              bVar39 = (bool)hasExclusiveAccess(piVar5);
            } while (!bVar39);
            *piVar5 = iVar11 + -1;
            if (iVar11 == 1) {
              DataMemoryBarrier(0xb);
              FUN_01177254(puVar35[0x91],puVar35[0x92]);
            }
          }
          *(undefined1 *)((int)puVar35 + 0x225) = 0;
          if (*(char *)((int)puVar35 + 0x226) != '\0') {
            FUN_005f7270(puVar26);
          }
          *(undefined1 *)((int)puVar35 + 0x232) = 0;
          *(undefined1 *)((int)puVar35 + 0x226) = 0;
          if (*(char *)((int)puVar35 + 0x227) != '\0') {
            piVar5 = (int *)puVar35[0x8f];
            DataMemoryBarrier(0xb);
            do {
              iVar11 = *piVar5;
              bVar39 = (bool)hasExclusiveAccess(piVar5);
            } while (!bVar39);
            *piVar5 = iVar11 + -1;
            if (iVar11 == 1) {
              DataMemoryBarrier(0xb);
              FUN_0121d018(puVar35[0x8f]);
            }
          }
          *(undefined1 *)((int)puVar35 + 0x227) = 0;
          if (*(char *)(puVar35 + 0x8a) != '\0') {
            piVar5 = (int *)puVar35[0x1c];
            DataMemoryBarrier(0xb);
            do {
              iVar11 = *piVar5;
              bVar39 = (bool)hasExclusiveAccess(piVar5);
            } while (!bVar39);
            *piVar5 = iVar11 + -1;
            if (iVar11 == 1) {
              DataMemoryBarrier(0xb);
              FUN_018531c0(puVar35[0x1c],puVar35[0x1d]);
            }
          }
LAB_0062ef4c:
          *(undefined1 *)(puVar35 + 0x8a) = 0;
          if (*(char *)((int)puVar35 + 0x229) != '\0') {
            FUN_005fbb50(&local_7e0);
          }
          *(undefined1 *)((int)puVar35 + 0x229) = 0;
          FUN_019bb7e0(*puVar35,puVar35[1]);
          FUN_019bb7e0(puVar35[3],puVar35[4]);
LAB_0062ef78:
          if (*(char *)((int)puVar35 + 0x22a) != '\0') {
            FUN_005f69ac(puVar36);
          }
        }
        bVar39 = false;
        *(undefined1 *)((int)puVar35 + 0x233) = 1;
        *(undefined1 *)((int)puVar35 + 0x22a) = 0;
      }
      if (cVar2 != '\x02') {
        if (*(char *)(pppppuVar22 + 0xe) != '\x01') {
          if (*(char *)(pppppuVar22 + 0xe) == '\x02') goto LAB_0062efe0;
          FUN_019a2bcc(pppppuVar22,&LAB_019efb68);
          *(undefined1 *)(pppppuVar22 + 0xe) = 1;
        }
        *(undefined1 *)((int)pppppuVar22 + 0x31) = extraout_r1_00;
        *(char *)(pppppuVar22 + 0xc) = cVar2;
      }
LAB_0062efe0:
      ppppuVar10 = local_8fc;
      if (local_900 != (int *)0x0) {
        FUN_01306fc8(&DAT_01d291b4);
LAB_0062f534:
                    /* WARNING: Does not return */
        pcVar20 = (code *)software_udf(0xfdee,0x62f534);
        (*pcVar20)();
      }
      local_900 = (int *)0xffffffff;
      bVar38 = local_8fc == (uint ****)0x0;
      local_8fc = (uint ****)0x0;
      if (bVar38) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("core missing",0xc,&DAT_01d291c4);
      }
      local_900 = (int *)0x0;
      if (!bVar39) {
        bVar39 = true;
        pppppuVar22[8] = ppppuVar24;
LAB_0062f24c:
        local_900 = (int *)0xffffffff;
        if (local_8fc == (uint ****)0x0) {
          local_900 = (int *)0x0;
        }
        else {
          FUN_01178420();
          local_900 = (int *)((int)local_900 + 1);
        }
        local_8fc = ppppuVar10;
        FUN_0118bddc(&local_908);
        if (!bVar39) {
          uVar21 = 0xab;
          puVar25 = &DAT_01d1cb7c;
          pcVar16 = 
          "a spawned task panicked and the runtime is configured to shut down on unhandled panic";
          goto LAB_0062db64;
        }
        goto LAB_0062f28c;
      }
    }
    for (iVar11 = *(int *)(local_904 + 0x144); iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*(char *)(ppppuVar10 + 0x19) != '\0') {
        pppppuVar22[8] = ppppuVar24;
        if (local_900 == (int *)0x0) {
          bVar39 = false;
          goto LAB_0062f24c;
        }
        FUN_01306fc8(&DAT_01d29204);
        goto LAB_0062f534;
      }
      ppppuVar10[0xe] = (uint ***)((int)ppppuVar10[0xe] + 1);
      pppppuVar15 = (uint *****)FUN_019e61ac(ppppuVar10,local_904 + 0x80);
      if (pppppuVar15 == (uint *****)0x0) {
        FUN_019f60ac(ppppuVar10 + 4);
        if (0x7ffffffe < local_8f8) {
                    /* WARNING: Subroutine does not return */
          FUN_0130701c(&DAT_01d29b18);
        }
        if (local_8ec == 0) {
          ppppuVar10 = (uint ****)FUN_019e6558(uVar32,ppppuVar10,local_904 + 0x80);
        }
        else {
          ppppuVar10 = (uint ****)FUN_019e6284(uVar32,ppppuVar10);
        }
        FUN_019ac130(&local_278,1);
        goto LAB_0062f1a4;
      }
      if (local_900 != (int *)0x0) {
        FUN_01306fc8(&DAT_01d291a4);
        goto LAB_0062f534;
      }
      local_900 = (int *)0xffffffff;
      if (local_8fc == (uint ****)0x0) {
        local_900 = (int *)0x0;
      }
      else {
        FUN_01178420();
        local_900 = (int *)((int)local_900 + 1);
      }
      local_8fc = ppppuVar10;
      cVar2 = FUN_010e73c8(1,0x80);
      (*(code *)*pppppuVar15[2])(pppppuVar15);
      if (cVar2 != '\x02') {
        pppppuVar15 = pppppuVar22;
        if (*(char *)(pppppuVar22 + 0xe) != '\x01') {
          if (*(char *)(pppppuVar22 + 0xe) == '\x02') goto LAB_0062f0f4;
          FUN_019a2bcc(pppppuVar22,&LAB_019efb68);
          *(undefined1 *)(pppppuVar22 + 0xe) = 1;
        }
        *(undefined1 *)((int)pppppuVar22 + 0x31) = extraout_r1_01;
        *(char *)(pppppuVar22 + 0xc) = cVar2;
      }
LAB_0062f0f4:
      ppppuVar10 = local_8fc;
      if (local_900 != (int *)0x0) {
        FUN_01306fc8(&DAT_01d291b4);
        goto LAB_0062f534;
      }
      local_900 = (int *)0xffffffff;
      bVar39 = local_8fc == (uint ****)0x0;
      local_8fc = (uint ****)0x0;
      if (bVar39) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("core missing",0xc,&DAT_01d291c4);
      }
      local_900 = (int *)0x0;
    }
    FUN_019f60ac(ppppuVar10 + 4);
    ppppuVar10 = (uint ****)FUN_019e6284(uVar32,ppppuVar10,local_904 + 0x80);
    FUN_019ac130(&local_278,1);
LAB_0062f1a4:
    ppppuVar10[10] = (uint ***)local_278;
    ppppuVar10[0xb] = (uint ***)local_274;
    ppppuVar10[0xc] = (uint ***)local_270;
    pppppuVar17 = pppppuVar15;
  } while( true );
LAB_0062d988:
  (*(code *)((uint ****)local_800)[3])(local_800._4_4_);
  local_800 = uVar40;
  if ((uVar32 & 1) != 0) {
    FUN_019ede44(&local_908);
LAB_0062f28c:
    FUN_01704854(&local_948);
    return pppppuVar15;
  }
  FUN_019ede44(&local_908);
  goto LAB_0062c5ac;
}

