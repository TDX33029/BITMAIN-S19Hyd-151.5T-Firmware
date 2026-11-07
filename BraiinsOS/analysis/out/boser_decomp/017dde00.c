// FUN_017dde00 @ 017dde00 size=10788 calls_out=52 calls_in=0
// strings: tunneling HTTPS over proxy | tunneling HTTPS over proxy | no host in url | no host in url | Proxy-Authorization:  | HTTP/1.1 200

void FUN_017dde00(undefined4 *param_1,uint *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined1 uVar4;
  code *pcVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  undefined1 uVar11;
  uint uVar12;
  code *pcVar13;
  undefined2 uVar14;
  code **unaff_r5;
  uint uVar15;
  uint *puVar16;
  char cVar17;
  undefined1 *puVar18;
  code *pcVar19;
  char cVar20;
  int *piVar21;
  uint uVar22;
  bool bVar23;
  longlong lVar24;
  undefined8 uVar25;
  uint *local_7e14;
  uint *local_7e10;
  uint *local_7e0c;
  undefined1 auStack_7df8 [9352];
  code *local_5970;
  code *local_596c;
  code *pcStack_5968;
  code *pcStack_5964;
  undefined4 local_5960;
  uint local_595c;
  uint uStack_5958;
  undefined4 *puStack_5954;
  uint uStack_5950;
  uint uStack_594c;
  uint uStack_5948;
  code *local_3498;
  code *local_3494;
  undefined4 local_3490;
  code *pcStack_348c;
  undefined *local_3488;
  uint local_3484;
  uint uStack_3480;
  undefined4 *puStack_347c;
  uint uStack_3478;
  uint uStack_3474;
  uint local_3470;
  code *local_346c;
  code *pcStack_3468;
  code *pcStack_3464;
  code *pcStack_3460;
  undefined *puStack_345c;
  undefined1 auStack_3448 [88];
  code *pcStack_33f0;
  code *pcStack_33ec;
  code *pcStack_33e8;
  code *pcStack_33e4;
  undefined *puStack_33e0;
  uint local_33dc;
  uint uStack_33d8;
  undefined4 *puStack_33d4;
  uint uStack_33d0;
  uint uStack_33cc;
  uint uStack_33c8;
  code *local_fc0;
  code *pcStack_fbc;
  code *pcStack_fb8;
  code *pcStack_fb4;
  undefined *puStack_fb0;
  uint local_fac;
  uint uStack_fa8;
  undefined4 *puStack_fa4;
  uint uStack_fa0;
  uint uStack_f9c;
  uint uStack_f98;
  code *local_f90;
  code *pcStack_f8c;
  code *pcStack_f88;
  code *pcStack_f84;
  undefined *puStack_f80;
  undefined4 local_f78;
  uint uStack_f74;
  uint uStack_f70;
  uint uStack_f6c;
  uint local_f68;
  uint uStack_f64;
  uint uStack_f60;
  uint uStack_f5c;
  code *local_f58;
  code *local_f54;
  code *local_f50;
  undefined1 auStack_f4c [292];
  code *local_e28;
  code *pcStack_e24;
  code *pcStack_e20;
  code *pcStack_e1c;
  undefined *puStack_e18;
  uint local_e14;
  uint uStack_e10;
  undefined4 *puStack_e0c;
  uint uStack_e08;
  uint uStack_e04;
  uint uStack_e00;
  code *local_d00;
  code *local_cfc;
  code *local_cf8;
  undefined1 auStack_cf4 [296];
  undefined4 local_bcc;
  code *local_bc8;
  code *pcStack_bc4;
  code *pcStack_bc0;
  code *pcStack_bbc;
  undefined1 auStack_bb8 [296];
  code *local_a90;
  code *local_a8c;
  code *local_a88;
  code *local_a84;
  undefined *local_a80;
  code *local_840;
  code *local_83c;
  code *local_838;
  code *local_834;
  undefined4 local_830;
  uint local_82c;
  uint uStack_828;
  undefined4 *puStack_824;
  uint uStack_820;
  uint uStack_81c;
  uint uStack_818;
  undefined4 local_5f0;
  code *local_5ec;
  code *local_5e8;
  code *local_5e4;
  uint uStack_5e0;
  undefined4 local_3a8;
  code *local_3a4;
  code *local_3a0;
  uint uStack_39c;
  uint uStack_398;
  undefined4 local_160;
  code *local_15c;
  code *local_158;
  code *local_154;
  uint uStack_150;
  
  puVar7 = &local_bcc;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x926]) {
  case '\0':
    FUN_01bed4e2(auStack_7df8,param_2 + 4,0x2488);
    puVar18 = (undefined1 *)param_2[2];
    if (puVar18 != &DAT_3b9aca00) {
      uVar12 = *param_2;
      uVar15 = param_2[1];
      FUN_019ac130(&local_840,1);
      pcVar13 = local_840 + uVar12;
      pcVar5 = local_83c + CARRY4((uint)local_840,uVar12) + uVar15;
      if ((int)uVar15 < 0 ==
          (int)(((uint)local_83c ^ (uint)pcVar5) & ~((uint)local_83c ^ uVar15)) < 0) {
        pcVar19 = local_838 + (int)puVar18;
        if (&DAT_3b9aca00 <= pcVar19) {
          bVar23 = (code *)0xfffffffe < pcVar13;
          pcVar13 = pcVar13 + 1;
          if ((int)(((uint)pcVar5 ^ (uint)(pcVar5 + bVar23)) & ~(uint)pcVar5) < 0)
          goto LAB_017de0e0;
          pcVar19 = pcVar19 + -1000000000;
          pcVar5 = pcVar5 + bVar23;
        }
        uVar25 = FUN_019ef7f4(&DAT_01d1cb9c);
        uVar8 = (undefined4)((ulonglong)uVar25 >> 0x20);
        FUN_019dc4f8(&local_840,(int)uVar25,uVar8,uVar8,pcVar13,pcVar5,pcVar19,&DAT_01d1cb9c);
      }
      else {
LAB_017de0e0:
        FUN_019e6e14(&local_840);
      }
      unaff_r5 = &local_3498;
      FUN_01bed4e2(auStack_3448,auStack_7df8,0x2488);
      FUN_01bed4e2(unaff_r5,&local_840,0x50);
      FUN_01bed4e2(&local_5970,unaff_r5,0x24d8);
      FUN_01bed4e2(param_2 + 0x928,&local_5970,0x24d8);
      goto switchD_017dde40_caseD_3;
    }
    FUN_01bed4e2(param_2 + 0x928,param_2 + 4,0x2488);
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d1cbac);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d1cbac);
  case '\x03':
switchD_017dde40_caseD_3:
    bVar3 = FUN_019ec70c();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x265e)) {
    case 0:
      *(undefined4 *)((int)param_2 + 0x265f) = 0;
      *(undefined2 *)((int)param_2 + 0x2667) = 0;
      *(undefined4 *)((int)param_2 + 0x2663) = 0;
      *(undefined1 *)((int)param_2 + 0x2665) = 1;
      param_2[0x956] = param_2[0x946];
      param_2[0x957] = param_2[0x947];
      param_2[0x958] = param_2[0x948];
      param_2[0x959] = param_2[0x949];
      param_2[0x95a] = param_2[0x94a];
      param_2[0x95b] = param_2[0x94b];
      param_2[0x95c] = param_2[0x94c];
      param_2[0x95d] = param_2[0x94d];
      param_2[0x95e] = param_2[0x94e];
      param_2[0x95f] = param_2[0x94f];
      param_2[0x960] = param_2[0x950];
      param_2[0x961] = param_2[0x951];
      param_2[0x962] = param_2[0x952];
      param_2[0x963] = param_2[0x953];
      param_2[0x964] = param_2[0x954];
      param_2[0x965] = param_2[0x955];
      pcVar5 = (code *)(param_2 + 0x983);
      *(uint *)pcVar5 = param_2[0x978];
      param_2[0x984] = param_2[0x979];
      param_2[0x985] = param_2[0x97a];
      param_2[0x986] = param_2[0x97b];
      param_2[0x987] = param_2[0x97c];
      param_2[0x988] = param_2[0x97d];
      param_2[0x989] = param_2[0x97e];
      param_2[0x98a] = param_2[0x97f];
      param_2[0x98b] = param_2[0x980];
      param_2[0x98c] = param_2[0x981];
      param_2[0x98d] = param_2[0x982];
      pcVar13 = (code *)(param_2 + 0x966);
      *(undefined4 *)((int)param_2 + 0x2669) = 0x1010101;
      *(uint *)pcVar13 = param_2[0x93c];
      param_2[0x967] = param_2[0x93d];
      param_2[0x968] = param_2[0x93e];
      param_2[0x969] = param_2[0x93f];
      param_2[0x96a] = param_2[0x940];
      param_2[0x96b] = param_2[0x941];
      param_2[0x96c] = param_2[0x942];
      param_2[0x96d] = param_2[0x943];
      param_2[0x96e] = param_2[0x944];
      param_2[0x96f] = param_2[0x945];
      if (3 < DAT_01d51b00) {
        local_83c = FUN_01783eac;
        local_834 = (code *)&DAT_01411f3c;
        local_3498 = (code *)&DAT_005696f8;
        local_3494 = (code *)&DAT_00000010;
        local_3490 = (code *)&DAT_005696f8;
        local_3488 = &DAT_01d1cc38;
        pcStack_348c = (code *)0x10;
        local_840 = pcVar13;
        local_838 = pcVar5;
        FUN_0193b350(&DAT_0059d7c1,&local_840,4,&local_3498);
      }
      if (*(uint *)pcVar13 == 0) {
        *(undefined1 *)((int)param_2 + 0x266a) = 0;
        local_f78 = param_2[0x967];
        uStack_f74 = param_2[0x968];
        uStack_f70 = param_2[0x969];
        uStack_f6c = param_2[0x96a];
        *(undefined1 *)((int)param_2 + 0x2669) = 0;
        local_a90 = (code *)param_2[0x96b];
        local_a8c = (code *)param_2[0x96c];
        local_a88 = (code *)param_2[0x96d];
        local_a84 = (code *)param_2[0x96e];
        local_a80 = (undefined *)param_2[0x96f];
        FUN_017dc0cc(&local_840,&local_a90,1,0,&local_f78);
      }
      else {
        *(undefined1 *)(param_2 + 0x99b) = 0;
        local_f68 = param_2[0x967];
        uStack_f64 = param_2[0x968];
        uStack_f60 = param_2[0x969];
        uStack_f5c = param_2[0x96a];
        *(undefined1 *)((int)param_2 + 0x266b) = 0;
        local_a90 = (code *)param_2[0x96b];
        local_a8c = (code *)param_2[0x96c];
        local_a88 = (code *)param_2[0x96d];
        local_a84 = (code *)param_2[0x96e];
        local_a80 = (undefined *)param_2[0x96f];
        FUN_017dc0cc(&local_840,&local_a90,0x101,0,&local_f68);
      }
      local_346c = local_a90;
      pcStack_3468 = local_a8c;
      pcStack_3464 = local_a88;
      pcStack_3460 = local_a84;
      puStack_345c = local_a80;
      local_3498 = local_840;
      local_3494 = local_83c;
      local_3490 = local_838;
      pcStack_348c = local_834;
      local_3488 = local_830;
      local_3484 = local_82c;
      uStack_3480 = uStack_828;
      puStack_347c = puStack_824;
      uStack_3478 = uStack_820;
      uStack_3474 = uStack_81c;
      local_3470 = uStack_818;
      *(undefined1 *)(param_2 + 0x999) = 1;
      local_fc0 = local_840;
      pcStack_fbc = local_83c;
      pcStack_fb8 = local_838;
      pcStack_fb4 = local_834;
      puStack_fb0 = local_830;
      local_fac = local_82c;
      uStack_fa8 = uStack_828;
      puStack_fa4 = puStack_824;
      uStack_fa0 = uStack_820;
      uStack_f9c = uStack_81c;
      uStack_f98 = uStack_818;
      local_f90 = local_a90;
      pcStack_f8c = local_a8c;
      pcStack_f88 = local_a88;
      pcStack_f84 = local_a84;
      puStack_f80 = local_a80;
      *(undefined1 *)((int)param_2 + 0x2663) = 1;
      *(undefined1 *)(param_2 + 0x99a) = 0;
      param_2[0x98e] = (uint)local_a90;
      param_2[0x98f] = (uint)local_a8c;
      param_2[0x990] = (uint)local_a88;
      param_2[0x991] = (uint)local_a84;
      param_2[0x992] = (uint)local_a80;
      if (((char)param_2[0x983] != '\0') && (iVar9 = FUN_0141103c(pcVar5,&DAT_00570360), iVar9 != 0)
         ) {
        if (param_2[0x987] == 0) {
LAB_017def0c:
          uVar12 = 0xe;
          iVar9 = thunk_FUN_01be5118(0xe);
          if (iVar9 != 0) {
            FUN_01bed4e2(iVar9,"no host in url",0xe);
            puVar7 = (undefined4 *)thunk_FUN_01be5118(0xc);
            if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(4,0xc);
            }
            cVar20 = '\x02';
            *puVar7 = 0xe;
            puVar7[1] = iVar9;
            uVar25 = CONCAT44(&DAT_01d1b768,puVar7);
            puVar7[2] = 0xe;
            goto LAB_017e0668;
          }
        }
        else {
          lVar24 = FUN_0140d000(param_2[0x986]);
          uVar12 = (uint)((ulonglong)lVar24 >> 0x20);
          if ((int)lVar24 == 0) goto LAB_017def0c;
          uVar8 = 0;
          if (lVar24 < 0) goto LAB_017de9a8;
          if (uVar12 == 0) {
            uVar15 = 0;
            uVar22 = 1;
LAB_017dfaa8:
            FUN_01bed4e2(uVar22,(int)lVar24,uVar12);
            *(undefined1 *)((int)param_2 + 0x2662) = 1;
            param_2[0x993] = uVar15;
            param_2[0x994] = uVar22;
            param_2[0x995] = uVar12;
            if (param_2[0x987] == 0) {
              uVar14 = 0x1bb;
            }
            else {
              FUN_0140d434(&local_3498,param_2[0x986]);
              uVar14 = (undefined2)local_3490;
              if (local_3498 == (code *)0x0) {
                uVar14 = 0x1bb;
              }
            }
            piVar6 = (int *)param_2[0x95f];
            *(undefined2 *)(param_2 + 0x997) = uVar14;
            do {
              iVar9 = *piVar6;
              bVar23 = (bool)hasExclusiveAccess(piVar6);
            } while (!bVar23);
            *piVar6 = iVar9 + 1;
            if (iVar9 < 0) goto LAB_017e0a94;
            piVar10 = (int *)param_2[0x960];
            do {
              iVar9 = *piVar10;
              bVar23 = (bool)hasExclusiveAccess(piVar10);
            } while (!bVar23);
            *piVar10 = iVar9 + 1;
            if (iVar9 < 0) goto LAB_017e0a94;
            uVar12 = param_2[0x961];
            piVar21 = (int *)param_2[0x963];
            do {
              iVar9 = *piVar21;
              bVar23 = (bool)hasExclusiveAccess(piVar21);
            } while (!bVar23);
            *piVar21 = iVar9 + 1;
            if (iVar9 < 0) goto LAB_017e0a94;
            param_2[0x970] = 0x80000000;
            param_2[0x973] = (uint)piVar6;
            param_2[0x974] = (uint)piVar10;
            param_2[0x975] = uVar12;
            param_2[0x976] = (uint)piVar21;
            piVar6 = (int *)param_2[0x962];
            *(undefined1 *)(param_2 + 0x977) = 0;
            do {
              iVar9 = *piVar6;
              bVar23 = (bool)hasExclusiveAccess(piVar6);
            } while (!bVar23);
            *piVar6 = iVar9 + 1;
            if (iVar9 < 0) goto LAB_017e0a94;
            param_2[0x996] = (uint)piVar6;
            *(undefined1 *)((int)param_2 + 0x2661) = 1;
            *(undefined1 *)(param_2 + 0x999) = 0;
            local_3498 = local_fc0;
            local_3494 = pcStack_fbc;
            local_3490 = pcStack_fb8;
            pcStack_348c = pcStack_fb4;
            local_3488 = puStack_fb0;
            local_3484 = local_fac;
            uStack_3480 = uStack_fa8;
            puStack_347c = puStack_fa4;
            uStack_3478 = uStack_fa0;
            uStack_3474 = uStack_f9c;
            local_3470 = uStack_f98;
            uVar25 = FUN_017ce0e0();
            *(undefined8 *)(param_2 + 0x99c) = uVar25;
            goto LAB_017de800;
          }
          uVar22 = FUN_01298504(uVar12,1);
          uVar15 = uVar12;
          if (uVar22 != 0) goto LAB_017dfaa8;
        }
        uVar8 = 1;
LAB_017de9a8:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar8,uVar12);
      }
      puVar7 = puStack_fa4;
      *(undefined1 *)((int)param_2 + 0x2665) = 0;
      local_3498 = (code *)param_2[0x956];
      local_3494 = (code *)param_2[0x957];
      local_3490 = (code *)param_2[0x958];
      pcStack_348c = (code *)param_2[0x959];
      local_3488 = (undefined *)param_2[0x95a];
      local_3484 = param_2[0x95b];
      uStack_3480 = param_2[0x95c];
      puStack_347c = (undefined4 *)param_2[0x95d];
      uStack_3478 = param_2[0x95e];
      uStack_3474 = param_2[0x95f];
      local_3470 = param_2[0x960];
      local_346c = (code *)param_2[0x961];
      pcStack_3468 = (code *)param_2[0x962];
      pcStack_3464 = (code *)param_2[0x963];
      pcStack_3460 = (code *)param_2[0x964];
      puStack_345c = (undefined *)param_2[0x965];
      *(undefined1 *)(param_2 + 0x999) = 0;
      pcStack_33f0 = local_fc0;
      pcStack_33ec = pcStack_fbc;
      pcStack_33e8 = pcStack_fb8;
      pcStack_33e4 = pcStack_fb4;
      puStack_33e0 = puStack_fb0;
      local_33dc = local_fac;
      uStack_33d8 = uStack_fa8;
      puStack_33d4 = puStack_fa4;
      uStack_33d0 = uStack_fa0;
      uStack_33cc = uStack_f9c;
      uStack_33c8 = uStack_f98;
      FUN_01bed4e2(&local_840,&local_3498,0x11c);
      FUN_01bed4e2(param_2 + 0x99c,&local_840,0x11c);
      *(undefined2 *)(param_2 + 0x9e3) = 1;
    case 6:
      uVar11 = SUB41(puVar7,0);
      unaff_r5 = (code **)(param_2 + 0x99c);
      FUN_01799d68(&local_3498,unaff_r5,param_3);
      uVar25 = CONCAT44(local_3494,local_3498);
      cVar20 = local_3490._1_1_;
      if (local_3490._1_1_ == '\x03') {
        uVar4 = 6;
        break;
      }
      uVar14 = local_3490._2_2_;
      uVar11 = SUB41(local_3490,0);
      FUN_017995b8(unaff_r5);
      if ((char)param_2[0x992] != '\x02') {
        (**(code **)(param_2[0x98e] + 0x10))(param_2 + 0x991,param_2[0x98f],param_2[0x990]);
      }
      *(undefined1 *)(param_2 + 0x99a) = 0;
      *(undefined1 *)((int)param_2 + 0x2663) = 0;
      *(undefined1 *)(param_2 + 0x999) = 0;
      *(undefined4 *)((int)param_2 + 0x2669) = 0;
      FUN_01435814(param_2 + 0x983);
LAB_017e06f0:
      unaff_r5 = (code **)((ulonglong)uVar25 >> 0x20);
      param_3 = (undefined4 *)uVar25;
      *(undefined1 *)((int)param_2 + 0x265e) = 1;
      *(undefined1 *)((int)param_2 + 0x2665) = 0;
      goto LAB_017e0740;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d1cc48);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d1cc48);
    case 3:
      uVar25 = *(undefined8 *)(param_2 + 0x99c);
LAB_017de800:
      unaff_r5 = &local_3498;
      (**(code **)((int)((ulonglong)uVar25 >> 0x20) + 0xc))(unaff_r5,(int)uVar25,param_3);
      pcVar19 = local_3490;
      pcVar13 = local_3494;
      pcVar5 = local_3498;
      uVar25 = CONCAT44(local_3490,local_3494);
      if (local_3498 != (code *)&SUB_00000004) {
        FUN_01bed4e2(&local_e28,&pcStack_348c,0x124);
        FUN_01139b38(param_2[0x99c],param_2[0x99d]);
        cVar20 = '\x02';
        if (pcVar5 != (code *)&DAT_00000003) {
          FUN_01bed4e2(auStack_f4c,&local_e28,0x124);
          *(undefined1 *)((int)param_2 + 0x2667) = 1;
          local_f58 = pcVar5;
          local_f54 = pcVar13;
          local_f50 = pcVar19;
          if (4 < DAT_01d51b00) {
            local_3498 = (code *)&DAT_005696f8;
            local_3494 = (code *)&DAT_00000010;
            pcStack_348c = (code *)0x10;
            local_3490 = (code *)&DAT_005696f8;
            local_3488 = &DAT_01d1cc58;
            FUN_0193b350("tunneling HTTPS over proxy",0x35,5,&local_3498);
          }
          FUN_018d2b4c(&local_3498,param_2[0x994],param_2[0x995]);
          if ((char)local_3498 == '\x02') {
            param_2[0x99e] = 0x13;
            *(undefined1 *)(param_2 + 0x99c) = 2;
            param_2[0x99d] = (uint)&DAT_0050d758;
          }
          else {
            param_2[0x99c] = (uint)local_3498;
            param_2[0x99d] = (uint)local_3494;
            param_2[0x99e] = (uint)local_3490;
            param_2[0x99f] = (uint)pcStack_348c;
            param_2[0x9a0] = (uint)local_3488;
          }
          *(undefined1 *)(param_2 + 0x998) = 1;
          *(undefined1 *)((int)param_2 + 0x2667) = 0;
          FUN_01bed4e2(&local_3498,&local_f58,0x130);
          uVar12 = param_2[0x993];
          uVar11 = 2;
          uVar15 = param_2[0x994];
          uVar22 = param_2[0x995];
          uVar14 = (undefined2)param_2[0x997];
          *(undefined1 *)((int)param_2 + 0x2662) = 0;
          if ((char)param_2[0x95e] != '\x02') {
            (**(code **)param_2[0x95a])(&local_840,param_2 + 0x95d,param_2[0x95b],param_2[0x95c]);
            puVar1 = local_830;
            uVar11 = (undefined1)param_2[0x95e];
            local_830 = (undefined *)CONCAT31(local_830._1_3_,uVar11);
            puVar2 = local_830;
            local_a90 = local_840;
            local_a8c = local_83c;
            local_a88 = local_838;
            local_a84 = local_834;
            local_830._3_1_ = SUB41(puVar1,3);
            local_830._1_2_ = SUB42(puVar1,1);
            local_5f0 = (code *)CONCAT22(CONCAT11(local_5f0._3_1_,local_830._3_1_),local_830._1_2_);
            local_830 = puVar2;
          }
          *(undefined1 *)((int)param_2 + 0x2663) = 0;
          local_bc8 = local_a90;
          pcStack_bc4 = local_a8c;
          pcStack_bc0 = local_a88;
          pcStack_bbc = local_a84;
          local_bcc._2_1_ = local_5f0._2_1_;
          local_bcc._0_2_ = (undefined2)local_5f0;
          FUN_01bed4e2(param_2 + 0x9a2,&local_f58,0x130);
          param_2[0xa3a] = uVar12;
          param_2[0xa3b] = uVar15;
          param_2[0xa3c] = uVar22;
          param_2[0xa3d] = (uint)local_bc8;
          param_2[0xa3e] = (uint)pcStack_bc4;
          param_2[0xa3f] = (uint)pcStack_bc0;
          param_2[0xa40] = (uint)pcStack_bbc;
          *(undefined1 *)(param_2 + 0xa41) = uVar11;
          *(undefined2 *)((int)param_2 + 0x2905) = (undefined2)local_bcc;
          *(undefined1 *)((int)param_2 + 0x2907) = local_bcc._2_1_;
          param_2[0xa42] = param_2[0x98e];
          param_2[0xa43] = param_2[0x98f];
          param_2[0xa44] = param_2[0x990];
          param_2[0xa45] = param_2[0x991];
          param_2[0xa46] = param_2[0x992];
          *(undefined1 *)(param_2 + 0xa58) = 0;
          *(undefined2 *)(param_2 + 0xa57) = uVar14;
          goto LAB_017df128;
        }
        goto LAB_017e0c90;
      }
      uVar4 = 3;
      uVar11 = 4;
      break;
    case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0xa58]) {
      case '\0':
        uVar14 = (undefined2)param_2[0xa57];
LAB_017df128:
        *(undefined1 *)((int)param_2 + 0x2961) = 1;
        FUN_01bed4e2(param_2 + 0x9ee,param_2 + 0x9a2,0x130);
        pcVar13 = (code *)(param_2 + 0xa47);
        *(uint *)pcVar13 = param_2[0xa3a];
        param_2[0xa48] = param_2[0xa3b];
        param_2[0xa49] = param_2[0xa3c];
        pcVar5 = (code *)((int)param_2 + 0x295e);
        *(undefined2 *)pcVar5 = uVar14;
        *(undefined1 *)((int)param_2 + 0x2963) = 1;
        param_2[0xa4a] = param_2[0xa3d];
        param_2[0xa4b] = param_2[0xa3e];
        param_2[0xa4c] = param_2[0xa3f];
        param_2[0xa4d] = param_2[0xa40];
        param_2[0xa4e] = param_2[0xa41];
        *(undefined1 *)((int)param_2 + 0x2962) = 1;
        param_2[0xa4f] = param_2[0xa42];
        param_2[0xa50] = param_2[0xa43];
        param_2[0xa51] = param_2[0xa44];
        param_2[0xa52] = param_2[0xa45];
        param_2[0xa53] = param_2[0xa46];
        local_a8c = (code *)&LAB_00632348;
        local_a84 = FUN_012fcf18;
        local_a90 = pcVar13;
        local_a88 = pcVar5;
        FUN_00664898(&local_5f0,&DAT_0050c796,&local_a90);
        local_160 = local_5f0;
        local_15c = local_5ec;
        local_158 = local_5e8;
        unaff_r5 = (code **)(param_2 + 0xa54);
        *unaff_r5 = local_5f0;
        param_2[0xa55] = (uint)local_5ec;
        param_2[0xa56] = (uint)local_5e8;
        if ((char)param_2[0xa4e] != '\x02') {
          *(undefined1 *)((int)param_2 + 0x2963) = 0;
          local_a90 = (code *)param_2[0xa4a];
          local_a8c = (code *)param_2[0xa4b];
          local_a88 = (code *)param_2[0xa4c];
          local_a84 = (code *)param_2[0xa4d];
          local_a80 = (undefined *)param_2[0xa4e];
          FUN_01ac6d2c(unaff_r5,&DAT_0050c256,&DAT_0050c262);
          FUN_01ac6d2c(unaff_r5,local_a8c,local_a8c + (int)local_a88);
          FUN_01ac6d2c(unaff_r5,&DAT_00531047,&DAT_00531049);
          (**(code **)(local_a90 + 0x10))(&local_a84,local_a8c,local_a88);
        }
        if ((char)param_2[0xa53] != '\x02') {
          *(undefined1 *)((int)param_2 + 0x2962) = 0;
          local_5f0 = (code *)param_2[0xa4f];
          local_5ec = (code *)param_2[0xa50];
          local_5e8 = (code *)param_2[0xa51];
          local_5e4 = (code *)param_2[0xa52];
          uStack_5e0 = param_2[0xa53];
          if (3 < DAT_01d51b00) {
            local_15c = (code *)&LAB_00632348;
            local_154 = FUN_012fcf18;
            local_a90 = (code *)&DAT_005696f8;
            local_a8c = (code *)&DAT_00000010;
            local_a88 = (code *)&DAT_005696f8;
            local_a84 = (code *)0x10;
            local_a80 = &DAT_01d1cbf8;
            local_160 = pcVar13;
            local_158 = pcVar5;
            FUN_0193b350(&DAT_0058ba6b,&local_160,4,&local_a90);
          }
          FUN_01ac6d2c(unaff_r5,"Proxy-Authorization: ","HTTP/1.1 200");
          FUN_01ac6d2c(unaff_r5,local_5ec,local_5ec + (int)local_5e8);
          FUN_01ac6d2c(unaff_r5,&DAT_00531047,&DAT_00531049);
          (**(code **)(local_5f0 + 0x10))(&local_5e4,local_5ec,local_5e8);
        }
        FUN_01ac6d2c(unaff_r5,&DAT_00531047,&DAT_00531049);
        param_2[0xa5a] = (uint)(param_2 + 0x9ee);
        param_2[0xa5b] = param_2[0xa55];
        param_2[0xa5c] = param_2[0xa56];
        break;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d1cc08);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d1cc08);
      case '\x04':
        goto LAB_017e0e30;
      }
      FUN_017ae954(&local_a90,param_2 + 0xa5a,param_3);
      if ((char)local_a90 == '\x05') {
        uVar11 = 3;
LAB_017df454:
        local_7e14 = param_2 + 0xa58;
        pcVar19 = (code *)&local_bcc;
        *(undefined1 *)local_7e14 = uVar11;
      }
      else {
        if (((uint)local_a90 & 0xff) == 4) {
          unaff_r5 = (code **)0x0;
          FUN_01bed93e(param_2 + 0xa5e,0,0x2000);
          param_2[0xa5a] = 0;
          do {
            param_2[0xa5b] = (uint)(param_2 + 0x9ee);
            param_2[0xa5c] = (uint)((undefined1 *)((int)param_2 + (int)unaff_r5) + 0x2978);
            param_2[0xa5d] = 0x2000 - (int)unaff_r5;
LAB_017e0e30:
            FUN_017fb02c(&local_a90,param_2 + 0xa5b,param_3);
            if ((char)local_a90 == '\x05') {
              uVar11 = 4;
              goto LAB_017df454;
            }
            if (((uint)local_a90 & 0xff) != 4) {
              pcVar5 = (code *)FUN_014333d0(&local_a90);
              goto LAB_017e0aec;
            }
            if (local_a8c == (code *)0x0) {
              uVar12 = thunk_FUN_01be5118(0x1e);
              if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00664620(1,0x1e);
              }
              FUN_01bed4e2(uVar12,&DAT_0050c238,0x1e);
              pcVar5 = (code *)thunk_FUN_01be5118(0xc);
              if (pcVar5 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0066439c(4,0xc);
              }
              *(uint *)pcVar5 = 0x1e;
              *(uint *)(pcVar5 + 4) = uVar12;
              pcVar13 = (code *)&DAT_01d1cb2c;
              *(uint *)(pcVar5 + 8) = 0x1e;
              goto LAB_017e0af8;
            }
            unaff_r5 = (code **)(local_a8c + param_2[0xa5a]);
            param_2[0xa5a] = (uint)unaff_r5;
            if ((code **)0x2000 < unaff_r5) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(0,unaff_r5,0x2000,&DAT_01d1cc18);
            }
            if (unaff_r5 < &DAT_0000000c) {
LAB_017e0ff8:
              pcVar5 = (code *)FUN_0179a4c4(&DAT_0050c262,0x13);
              goto LAB_017e100c;
            }
            puVar16 = param_2 + 0xa5e;
            iVar9 = thunk_FUN_01bed842("HTTP/1.1 200",puVar16,0xc);
            if ((iVar9 != 0) && (iVar9 = thunk_FUN_01bed842("HTTP/1.0 200",puVar16,0xc), iVar9 != 0)
               ) {
              iVar9 = thunk_FUN_01bed842("HTTP/1.1 407",puVar16,0xc);
              if (iVar9 != 0) goto LAB_017e0ff8;
              pcVar5 = (code *)FUN_0179a4c4(&DAT_0050c275,0x1d);
              goto LAB_017e100c;
            }
            if (*(int *)((undefined1 *)((int)puVar16 + (int)unaff_r5) + -4) == 0xa0d0a0d) {
              *(undefined1 *)((int)param_2 + 0x2961) = 0;
              pcVar19 = (code *)param_2[0x9ee];
              pcVar5 = (code *)param_2[0x9ef];
              pcVar13 = (code *)param_2[0x9f0];
              FUN_01bed4e2(&local_3498,param_2 + 0x9f1,0x124);
              goto LAB_017e0afc;
            }
          } while (unaff_r5 != (code **)0x2000);
          pcVar5 = (code *)FUN_0179a4c4(&DAT_0050c292,0x21);
LAB_017e100c:
          pcVar13 = (code *)&DAT_01d1b768;
        }
        else {
          pcVar5 = (code *)FUN_014333d0(&local_a90);
LAB_017e0aec:
          pcVar13 = (code *)&DAT_01cf5e1c;
        }
LAB_017e0af8:
        pcVar19 = (code *)&DAT_00000003;
LAB_017e0afc:
        uVar25 = CONCAT44(pcVar13,pcVar5);
        local_7e10 = param_2 + 0x9a2;
        FUN_019bb7e0(param_2[0xa54],param_2[0xa55]);
        unaff_r5 = (code **)0x0;
        *(undefined2 *)((int)param_2 + 0x2962) = 0;
        FUN_019bb7e0(param_2[0xa47],param_2[0xa48]);
        if (*(char *)((int)param_2 + 0x2961) != '\0') {
          FUN_017998e0(param_2 + 0x9ee);
        }
        *(undefined1 *)((int)param_2 + 0x2961) = 0;
        FUN_01bed4e2(&local_840,&local_3498,0x124);
        *(undefined1 *)(param_2 + 0xa58) = 1;
        if (pcVar19 != (code *)&SUB_00000004) {
          FUN_01bed4e2(auStack_bb8,&local_840,0x124);
          FUN_01799434(local_7e10);
          if (pcVar19 != (code *)&DAT_00000003) {
            FUN_01bed4e2(auStack_cf4,auStack_bb8,0x124);
            *(undefined1 *)((int)param_2 + 0x265f) = 1;
            *(undefined1 *)(param_2 + 0x998) = 0;
            local_d00 = pcVar19;
            local_cfc = pcVar5;
            local_cf8 = pcVar13;
            if ((char)param_2[0x99c] != '\x02') {
              uStack_150 = param_2[0x9a0];
              local_154 = (code *)param_2[0x99f];
              *(undefined1 *)((int)param_2 + 0x2661) = 0;
              *(undefined1 *)((int)param_2 + 0x2666) = 0;
              *(undefined1 *)((int)param_2 + 0x265f) = 0;
              uVar12 = param_2[0x996];
              local_160 = (code *)CONCAT13(*(undefined1 *)((int)param_2 + 0x2673),
                                           CONCAT21(*(undefined2 *)((int)param_2 + 0x2671),
                                                    (char)param_2[0x99c]));
              param_2[0x99c] = uVar12;
              local_15c = (code *)param_2[0x99d];
              local_158 = (code *)param_2[0x99e];
              FUN_01bed4e2(&local_5f0,&local_d00,0x130);
              FUN_017db694(&local_3498,uVar12,&local_160,&local_5f0);
              FUN_01bed4e2(&local_840,&local_3498,0x250);
              FUN_01bed4e2(param_2 + 0x99e,&local_840,0x250);
              goto LAB_017de73c;
            }
            uVar8 = FUN_0179a4c4();
            uVar25 = CONCAT44(&DAT_01d1b768,uVar8);
            goto LAB_017e0c3c;
          }
          cVar20 = '\x02';
          goto LAB_017e0c60;
        }
      }
      uVar11 = SUB41(pcVar19,0);
      uVar4 = 4;
      break;
    case 5:
LAB_017de73c:
      unaff_r5 = &local_3498;
      FUN_017db074(unaff_r5,param_2 + 0x99e,param_3);
      pcVar19 = local_3490;
      pcVar13 = local_3494;
      pcVar5 = local_3498;
      if (local_3498 == (code *)&DAT_00000003) {
        uVar4 = 5;
        uVar11 = 3;
        break;
      }
      if (local_3498 == (code *)0x2) {
        FUN_01bed4e2(&local_160,&local_3490,0x138);
        pcVar19 = local_15c;
        pcVar13 = local_160;
        FUN_017998e0(&local_158);
      }
      else {
        FUN_01bed4e2(&local_5f0,&pcStack_348c,0x244);
      }
      FUN_01bed4e2(&local_3a8,&local_5f0,0x244);
      FUN_01799554(param_2 + 0x99e);
      if (pcVar5 == (code *)0x2) {
        local_3498 = pcVar13;
        local_3494 = pcVar19;
        uVar25 = FUN_014333d0(&local_3498);
        piVar6 = (int *)param_2[0x99c];
        DataMemoryBarrier(0xb);
        do {
          iVar9 = *piVar6;
          bVar23 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar23);
        *piVar6 = iVar9 + -1;
        if (iVar9 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018bcb30(param_2[0x99c]);
        }
LAB_017e0c3c:
        cVar20 = '\x02';
      }
      else {
        FUN_01bed4e2(&local_a84,&local_3a8,0x244);
        piVar6 = (int *)param_2[0x99c];
        local_a90 = pcVar5;
        DataMemoryBarrier(0xb);
        do {
          iVar9 = *piVar6;
          bVar23 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar23);
        *piVar6 = iVar9 + -1;
        local_a8c = pcVar13;
        local_a88 = pcVar19;
        if (iVar9 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018bcb30(param_2[0x99c]);
        }
        FUN_01bed4e2(&local_3498,&local_a90,0x250);
        uVar25 = FUN_01780dd8((char)param_2[0x965],&local_3498);
        cVar20 = '\0';
      }
      *(undefined1 *)((int)param_2 + 0x2666) = 0;
      if (*(char *)((int)param_2 + 0x265f) != '\0') {
        FUN_017998e0(&local_d00);
      }
LAB_017e0c60:
      *(undefined1 *)((int)param_2 + 0x265f) = 0;
      if (((char)param_2[0x998] != '\0') && ((char)param_2[0x99c] == '\0')) {
        FUN_019bb7e0(param_2[0x99d],param_2[0x99e]);
      }
      *(undefined1 *)(param_2 + 0x998) = 0;
LAB_017e0c90:
      *(undefined1 *)((int)param_2 + 0x2667) = 0;
      if (*(char *)((int)param_2 + 0x2661) != '\0') {
        piVar6 = (int *)param_2[0x996];
        DataMemoryBarrier(0xb);
        do {
          iVar9 = *piVar6;
          bVar23 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar23);
        *piVar6 = iVar9 + -1;
        if (iVar9 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018bcb30(param_2[0x996]);
        }
      }
      *(undefined1 *)((int)param_2 + 0x2661) = 0;
      FUN_01799830(param_2 + 0x970);
      if (*(char *)((int)param_2 + 0x2662) == '\x01') {
        FUN_019bb7e0(param_2[0x993],param_2[0x994]);
      }
LAB_017e0668:
      uVar14 = SUB42(&local_3488,0);
      *(undefined1 *)((int)param_2 + 0x2662) = 0;
      bVar23 = *(char *)((int)param_2 + 0x2663) != '\0';
      cVar17 = '\0';
      if (bVar23) {
        cVar17 = (char)param_2[0x992];
      }
      if (bVar23 && cVar17 != '\x02') {
        (**(code **)(param_2[0x98e] + 0x10))(param_2 + 0x991,param_2[0x98f],param_2[0x990]);
      }
      *(undefined1 *)(param_2 + 0x99a) = 0;
      *(undefined1 *)((int)param_2 + 0x2663) = 0;
      if ((char)param_2[0x999] != '\0') {
        FUN_01435814(&local_fc0);
      }
      uVar11 = 0;
      *(undefined1 *)(param_2 + 0x999) = 0;
      *(undefined4 *)((int)param_2 + 0x2669) = 0;
      FUN_01435814(param_2 + 0x983);
      FUN_0179791c(param_2 + 0x956);
      goto LAB_017e06f0;
    }
    uVar14 = SUB42(&local_3488,0);
    *(undefined1 *)((int)param_2 + 0x265e) = uVar4;
    iVar9 = FUN_019ee264(bVar3 == 2 | bVar3 & 1,param_2 + 0x928,*param_3);
    if (iVar9 != 0) {
      uVar4 = 3;
      *(undefined1 *)((int)param_1 + 9) = 3;
      goto LAB_017e0e1c;
    }
    cVar20 = '\x03';
LAB_017e0740:
    uVar25 = CONCAT44(unaff_r5,param_3);
    FUN_017dcfa0(param_2 + 0x928);
    cVar17 = '\x02';
    if (cVar20 == '\x03') {
      uVar25 = 0x1d1cbcc00000001;
    }
    else {
      cVar17 = '\x02';
      if (cVar20 != '\x02') {
        cVar17 = cVar20;
      }
    }
    goto LAB_017e109c;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x260e)) {
  case 0:
    *(undefined4 *)((int)param_2 + 0x260f) = 0;
    *(undefined2 *)((int)param_2 + 0x2617) = 0;
    *(undefined4 *)((int)param_2 + 0x2613) = 0;
    *(undefined1 *)((int)param_2 + 0x2615) = 1;
    param_2[0x942] = param_2[0x932];
    param_2[0x943] = param_2[0x933];
    param_2[0x944] = param_2[0x934];
    param_2[0x945] = param_2[0x935];
    param_2[0x946] = param_2[0x936];
    param_2[0x947] = param_2[0x937];
    param_2[0x948] = param_2[0x938];
    param_2[0x949] = param_2[0x939];
    param_2[0x94a] = param_2[0x93a];
    param_2[0x94b] = param_2[0x93b];
    pcVar5 = (code *)(param_2 + 0x96f);
    param_2[0x94c] = param_2[0x93c];
    param_2[0x94d] = param_2[0x93d];
    param_2[0x94e] = param_2[0x93e];
    param_2[0x94f] = param_2[0x93f];
    param_2[0x950] = param_2[0x940];
    param_2[0x951] = param_2[0x941];
    *(uint *)pcVar5 = param_2[0x964];
    param_2[0x970] = param_2[0x965];
    param_2[0x971] = param_2[0x966];
    param_2[0x972] = param_2[0x967];
    param_2[0x973] = param_2[0x968];
    param_2[0x974] = param_2[0x969];
    param_2[0x975] = param_2[0x96a];
    param_2[0x976] = param_2[0x96b];
    param_2[0x977] = param_2[0x96c];
    param_2[0x978] = param_2[0x96d];
    param_2[0x979] = param_2[0x96e];
    pcVar13 = (code *)(param_2 + 0x952);
    *(undefined4 *)((int)param_2 + 0x2619) = 0x1010101;
    *(uint *)pcVar13 = param_2[0x928];
    param_2[0x953] = param_2[0x929];
    param_2[0x954] = param_2[0x92a];
    param_2[0x955] = param_2[0x92b];
    param_2[0x956] = param_2[0x92c];
    param_2[0x957] = param_2[0x92d];
    param_2[0x958] = param_2[0x92e];
    param_2[0x959] = param_2[0x92f];
    param_2[0x95a] = param_2[0x930];
    param_2[0x95b] = param_2[0x931];
    if (3 < DAT_01d51b00) {
      local_596c = FUN_01783eac;
      pcStack_5964 = (code *)&DAT_01411f3c;
      local_3498 = (code *)&DAT_005696f8;
      local_3494 = (code *)&DAT_00000010;
      local_3490 = (code *)&DAT_005696f8;
      local_3488 = &DAT_01d1cc38;
      pcStack_348c = (code *)0x10;
      local_5970 = pcVar13;
      pcStack_5968 = pcVar5;
      FUN_0193b350(&DAT_0059d7c1,&local_5970,4,&local_3498);
    }
    if (*(uint *)pcVar13 == 0) {
      *(undefined1 *)((int)param_2 + 0x261a) = 0;
      local_f68 = param_2[0x953];
      uStack_f64 = param_2[0x954];
      uStack_f60 = param_2[0x955];
      uStack_f5c = param_2[0x956];
      *(undefined1 *)((int)param_2 + 0x2619) = 0;
      local_840 = (code *)param_2[0x957];
      local_83c = (code *)param_2[0x958];
      local_838 = (code *)param_2[0x959];
      local_834 = (code *)param_2[0x95a];
      local_830 = (undefined *)param_2[0x95b];
      FUN_017dc0cc(&local_5970,&local_840,1,0,&local_f68);
    }
    else {
      *(undefined1 *)(param_2 + 0x987) = 0;
      local_bc8 = (code *)param_2[0x953];
      pcStack_bc4 = (code *)param_2[0x954];
      pcStack_bc0 = (code *)param_2[0x955];
      pcStack_bbc = (code *)param_2[0x956];
      *(undefined1 *)((int)param_2 + 0x261b) = 0;
      local_840 = (code *)param_2[0x957];
      local_83c = (code *)param_2[0x958];
      local_838 = (code *)param_2[0x959];
      local_834 = (code *)param_2[0x95a];
      local_830 = (undefined *)param_2[0x95b];
      FUN_017dc0cc(&local_5970,&local_840,0x101,0,&local_bc8);
    }
    local_346c = local_840;
    pcStack_3468 = local_83c;
    pcStack_3464 = local_838;
    pcStack_3460 = local_834;
    puStack_345c = local_830;
    local_3498 = local_5970;
    local_3494 = local_596c;
    local_3490 = pcStack_5968;
    pcStack_348c = pcStack_5964;
    local_3488 = local_5960;
    local_3484 = local_595c;
    uStack_3480 = uStack_5958;
    puStack_347c = puStack_5954;
    uStack_3478 = uStack_5950;
    uStack_3474 = uStack_594c;
    local_3470 = uStack_5948;
    *(undefined1 *)(param_2 + 0x985) = 1;
    local_e28 = local_5970;
    pcStack_e24 = local_596c;
    pcStack_e20 = pcStack_5968;
    pcStack_e1c = pcStack_5964;
    puStack_e18 = local_5960;
    local_e14 = local_595c;
    uStack_e10 = uStack_5958;
    puStack_e0c = puStack_5954;
    uStack_e08 = uStack_5950;
    uStack_e04 = uStack_594c;
    uStack_e00 = uStack_5948;
    local_fc0 = local_840;
    pcStack_fbc = local_83c;
    pcStack_fb8 = local_838;
    pcStack_fb4 = local_834;
    puStack_fb0 = local_830;
    *(undefined1 *)((int)param_2 + 0x2613) = 1;
    *(undefined1 *)(param_2 + 0x986) = 0;
    param_2[0x97a] = (uint)local_840;
    param_2[0x97b] = (uint)local_83c;
    param_2[0x97c] = (uint)local_838;
    param_2[0x97d] = (uint)local_834;
    param_2[0x97e] = (uint)local_830;
    if (((char)param_2[0x96f] != '\0') && (iVar9 = FUN_0141103c(pcVar5,&DAT_00570360), iVar9 != 0))
    {
      if (param_2[0x973] != 0) {
        lVar24 = FUN_0140d000(param_2[0x972]);
        uVar12 = (uint)((ulonglong)lVar24 >> 0x20);
        if ((int)lVar24 != 0) {
          if (lVar24 < 0) {
            uVar8 = 0;
LAB_017de368:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar8,uVar12);
          }
          if (uVar12 == 0) {
            uVar15 = 0;
            uVar22 = 1;
          }
          else {
            uVar22 = FUN_01298504(uVar12,1);
            if (uVar22 == 0) {
              uVar8 = 1;
              goto LAB_017de368;
            }
            uVar15 = uVar12;
          }
          FUN_01bed4e2(uVar22,(int)lVar24,uVar12);
          *(undefined1 *)((int)param_2 + 0x2612) = 1;
          param_2[0x97f] = uVar15;
          param_2[0x980] = uVar22;
          param_2[0x981] = uVar12;
          if (param_2[0x973] == 0) {
            uVar14 = 0x1bb;
          }
          else {
            FUN_0140d434(&local_3498,param_2[0x972]);
            uVar14 = (undefined2)local_3490;
            if (local_3498 == (code *)0x0) {
              uVar14 = 0x1bb;
            }
          }
          piVar6 = (int *)param_2[0x94b];
          *(undefined2 *)(param_2 + 0x983) = uVar14;
          do {
            iVar9 = *piVar6;
            bVar23 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar23);
          *piVar6 = iVar9 + 1;
          if (iVar9 < 0) {
LAB_017e0a94:
                    /* WARNING: Does not return */
            pcVar5 = (code *)software_udf(0xfdee,0x17e0a94);
            (*pcVar5)();
          }
          piVar10 = (int *)param_2[0x94c];
          do {
            iVar9 = *piVar10;
            bVar23 = (bool)hasExclusiveAccess(piVar10);
          } while (!bVar23);
          *piVar10 = iVar9 + 1;
          if (iVar9 < 0) goto LAB_017e0a94;
          uVar12 = param_2[0x94d];
          piVar21 = (int *)param_2[0x94f];
          do {
            iVar9 = *piVar21;
            bVar23 = (bool)hasExclusiveAccess(piVar21);
          } while (!bVar23);
          *piVar21 = iVar9 + 1;
          if (iVar9 < 0) goto LAB_017e0a94;
          param_2[0x95c] = 0x80000000;
          param_2[0x95f] = (uint)piVar6;
          param_2[0x960] = (uint)piVar10;
          param_2[0x961] = uVar12;
          param_2[0x962] = (uint)piVar21;
          piVar6 = (int *)param_2[0x94e];
          *(undefined1 *)(param_2 + 0x963) = 0;
          do {
            iVar9 = *piVar6;
            bVar23 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar23);
          *piVar6 = iVar9 + 1;
          if (iVar9 < 0) goto LAB_017e0a94;
          param_2[0x982] = (uint)piVar6;
          *(undefined1 *)((int)param_2 + 0x2611) = 1;
          *(undefined1 *)(param_2 + 0x985) = 0;
          local_3498 = local_e28;
          local_3494 = pcStack_e24;
          local_3490 = pcStack_e20;
          pcStack_348c = pcStack_e1c;
          local_3488 = puStack_e18;
          local_3484 = local_e14;
          uStack_3480 = uStack_e10;
          puStack_347c = puStack_e0c;
          uStack_3478 = uStack_e08;
          uStack_3474 = uStack_e04;
          local_3470 = uStack_e00;
          uVar25 = FUN_017ce0e0();
          *(undefined8 *)(param_2 + 0x988) = uVar25;
          goto LAB_017de1a8;
        }
      }
      uVar8 = FUN_017dc018("no host in url",0xe);
      cVar17 = '\x02';
      uVar25 = CONCAT44(&DAT_01d1cb2c,uVar8);
      goto LAB_017e1488;
    }
    *(undefined1 *)((int)param_2 + 0x2615) = 0;
    local_3498 = (code *)param_2[0x942];
    local_3494 = (code *)param_2[0x943];
    local_3490 = (code *)param_2[0x944];
    pcStack_348c = (code *)param_2[0x945];
    local_3488 = (undefined *)param_2[0x946];
    local_3484 = param_2[0x947];
    uStack_3480 = param_2[0x948];
    puStack_347c = (undefined4 *)param_2[0x949];
    uStack_3478 = param_2[0x94a];
    uStack_3474 = param_2[0x94b];
    local_3470 = param_2[0x94c];
    local_346c = (code *)param_2[0x94d];
    pcStack_3468 = (code *)param_2[0x94e];
    pcStack_3464 = (code *)param_2[0x94f];
    pcStack_3460 = (code *)param_2[0x950];
    puStack_345c = (undefined *)param_2[0x951];
    *(undefined1 *)(param_2 + 0x985) = 0;
    pcStack_33f0 = local_e28;
    pcStack_33ec = pcStack_e24;
    pcStack_33e8 = pcStack_e20;
    pcStack_33e4 = pcStack_e1c;
    puStack_33e0 = puStack_e18;
    local_33dc = local_e14;
    uStack_33d8 = uStack_e10;
    puStack_33d4 = puStack_e0c;
    uStack_33d0 = uStack_e08;
    uStack_33cc = uStack_e04;
    uStack_33c8 = uStack_e00;
    FUN_01bed4e2(&local_5970,&local_3498,0x11c);
    FUN_01bed4e2(param_2 + 0x988,&local_5970,0x11c);
    *(undefined2 *)(param_2 + 0x9cf) = 1;
  case 6:
    FUN_017dd6a4(&local_3498,param_2 + 0x988,param_3);
    uVar25 = CONCAT44(local_3494,local_3498);
    cVar17 = local_3490._1_1_;
    if (local_3490._1_1_ != '\x03') {
      uVar14 = local_3490._2_2_;
      uVar11 = SUB41(local_3490,0);
      FUN_017dd0f4(param_2 + 0x988);
      if ((char)param_2[0x97e] != '\x02') {
        (**(code **)(param_2[0x97a] + 0x10))(param_2 + 0x97d,param_2[0x97b],param_2[0x97c]);
      }
      *(undefined1 *)(param_2 + 0x986) = 0;
      *(undefined1 *)((int)param_2 + 0x2613) = 0;
      *(undefined1 *)(param_2 + 0x985) = 0;
      *(undefined4 *)((int)param_2 + 0x2619) = 0;
      FUN_01706d0c(param_2 + 0x96f);
LAB_017e1500:
      *(undefined1 *)((int)param_2 + 0x260e) = 1;
      *(undefined1 *)((int)param_2 + 0x2615) = 0;
      FUN_017dcbd8(param_2 + 0x928);
LAB_017e109c:
      *param_1 = (int)uVar25;
      uVar4 = 1;
      *(undefined2 *)((int)param_1 + 10) = uVar14;
      *(char *)((int)param_1 + 9) = cVar17;
      *(undefined1 *)(param_1 + 2) = uVar11;
      param_1[1] = (int)((ulonglong)uVar25 >> 0x20);
      goto LAB_017e0e1c;
    }
    uVar11 = 6;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d1cc48);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d1cc48);
  case 3:
    uVar25 = *(undefined8 *)(param_2 + 0x988);
LAB_017de1a8:
    (**(code **)((int)((ulonglong)uVar25 >> 0x20) + 0xc))(&local_3498,(int)uVar25,param_3);
    pcVar19 = local_3490;
    pcVar13 = local_3494;
    pcVar5 = local_3498;
    uVar25 = CONCAT44(local_3490,local_3494);
    if (local_3498 != (code *)&SUB_00000004) {
      FUN_01bed4e2(auStack_bb8,&pcStack_348c,0x124);
      FUN_01139b38(param_2[0x988],param_2[0x989]);
      cVar17 = '\x02';
      if (pcVar5 != (code *)&DAT_00000003) {
        FUN_01bed4e2(auStack_cf4,auStack_bb8,0x124);
        *(undefined1 *)((int)param_2 + 0x2617) = 1;
        local_d00 = pcVar5;
        local_cfc = pcVar13;
        local_cf8 = pcVar19;
        if (4 < DAT_01d51b00) {
          local_3498 = (code *)&DAT_005696f8;
          local_3494 = (code *)&DAT_00000010;
          pcStack_348c = (code *)0x10;
          local_3490 = (code *)&DAT_005696f8;
          local_3488 = &DAT_01d1cc58;
          FUN_0193b350("tunneling HTTPS over proxy",0x35,5,&local_3498);
        }
        FUN_018d2b4c(&local_3498,param_2[0x980],param_2[0x981]);
        if ((char)local_3498 == '\x02') {
          param_2[0x98a] = 0x13;
          *(undefined1 *)(param_2 + 0x988) = 2;
          param_2[0x989] = (uint)&DAT_0050d758;
        }
        else {
          param_2[0x988] = (uint)local_3498;
          param_2[0x989] = (uint)local_3494;
          param_2[0x98a] = (uint)local_3490;
          param_2[0x98b] = (uint)pcStack_348c;
          param_2[0x98c] = (uint)local_3488;
        }
        *(undefined1 *)(param_2 + 0x984) = 1;
        *(undefined1 *)((int)param_2 + 0x2617) = 0;
        FUN_01bed4e2(&local_3498,&local_d00,0x130);
        uVar12 = param_2[0x97f];
        uVar11 = 2;
        uVar15 = param_2[0x980];
        uVar14 = (undefined2)param_2[0x983];
        uVar22 = param_2[0x981];
        *(undefined1 *)((int)param_2 + 0x2612) = 0;
        if ((char)param_2[0x94a] != '\x02') {
          (**(code **)param_2[0x946])(&local_5970,param_2 + 0x949,param_2[0x947],param_2[0x948]);
          puVar1 = local_5960;
          uVar11 = (undefined1)param_2[0x94a];
          local_5960 = (undefined *)CONCAT31(local_5960._1_3_,uVar11);
          puVar2 = local_5960;
          local_840 = local_5970;
          local_83c = local_596c;
          local_838 = pcStack_5968;
          local_834 = pcStack_5964;
          local_5960._3_1_ = SUB41(puVar1,3);
          local_5960._1_2_ = SUB42(puVar1,1);
          local_3a8 = (code *)CONCAT22(CONCAT11(local_3a8._3_1_,local_5960._3_1_),local_5960._1_2_);
          local_5960 = puVar2;
        }
        *(undefined1 *)((int)param_2 + 0x2613) = 0;
        local_f90 = local_840;
        pcStack_f8c = local_83c;
        pcStack_f88 = local_838;
        pcStack_f84 = local_834;
        local_f78 = CONCAT22(CONCAT11(local_f78._3_1_,local_3a8._2_1_),(undefined2)local_3a8);
        FUN_01bed4e2(param_2 + 0x98e,&local_d00,0x130);
        param_2[0xa26] = uVar12;
        param_2[0xa27] = uVar15;
        param_2[0xa28] = uVar22;
        param_2[0xa29] = (uint)local_f90;
        param_2[0xa2a] = (uint)pcStack_f8c;
        param_2[0xa2b] = (uint)pcStack_f88;
        param_2[0xa2c] = (uint)pcStack_f84;
        *(undefined1 *)(param_2 + 0xa2d) = uVar11;
        *(undefined2 *)((int)param_2 + 0x28b5) = (undefined2)local_f78;
        *(undefined1 *)((int)param_2 + 0x28b7) = local_f78._2_1_;
        param_2[0xa2e] = param_2[0x97a];
        param_2[0xa2f] = param_2[0x97b];
        param_2[0xa30] = param_2[0x97c];
        param_2[0xa31] = param_2[0x97d];
        param_2[0xa32] = param_2[0x97e];
        *(undefined1 *)(param_2 + 0xa44) = 0;
        *(undefined2 *)(param_2 + 0xa43) = uVar14;
        goto LAB_017df674;
      }
      goto LAB_017e141c;
    }
    uVar11 = 3;
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0xa44]) {
    case '\0':
      uVar14 = (undefined2)param_2[0xa43];
LAB_017df674:
      *(undefined1 *)((int)param_2 + 0x2911) = 1;
      FUN_01bed4e2(param_2 + 0x9da,param_2 + 0x98e,0x130);
      pcVar13 = (code *)(param_2 + 0xa33);
      *(uint *)pcVar13 = param_2[0xa26];
      param_2[0xa34] = param_2[0xa27];
      param_2[0xa35] = param_2[0xa28];
      pcVar5 = (code *)((int)param_2 + 0x290e);
      *(undefined2 *)pcVar5 = uVar14;
      *(undefined1 *)((int)param_2 + 0x2913) = 1;
      param_2[0xa36] = param_2[0xa29];
      param_2[0xa37] = param_2[0xa2a];
      param_2[0xa38] = param_2[0xa2b];
      param_2[0xa39] = param_2[0xa2c];
      param_2[0xa3a] = param_2[0xa2d];
      *(undefined1 *)((int)param_2 + 0x2912) = 1;
      param_2[0xa3b] = param_2[0xa2e];
      param_2[0xa3c] = param_2[0xa2f];
      param_2[0xa3d] = param_2[0xa30];
      param_2[0xa3e] = param_2[0xa31];
      param_2[0xa3f] = param_2[0xa32];
      local_83c = (code *)&LAB_00632348;
      local_834 = FUN_012fcf18;
      local_840 = pcVar13;
      local_838 = pcVar5;
      FUN_00664898(&local_3a8,&DAT_0050c796,&local_840);
      puVar16 = param_2 + 0xa40;
      local_5f0 = local_3a8;
      local_5ec = local_3a4;
      local_5e8 = local_3a0;
      *puVar16 = (uint)local_3a8;
      param_2[0xa41] = (uint)local_3a4;
      param_2[0xa42] = (uint)local_3a0;
      if ((char)param_2[0xa3a] != '\x02') {
        *(undefined1 *)((int)param_2 + 0x2913) = 0;
        local_840 = (code *)param_2[0xa36];
        local_83c = (code *)param_2[0xa37];
        local_838 = (code *)param_2[0xa38];
        local_834 = (code *)param_2[0xa39];
        local_830 = (undefined *)param_2[0xa3a];
        FUN_01ac6d2c(puVar16,&DAT_0050c256,&DAT_0050c262);
        FUN_01ac6d2c(puVar16,local_83c,local_83c + (int)local_838);
        FUN_01ac6d2c(puVar16,&DAT_00531047,&DAT_00531049);
        (**(code **)(local_840 + 0x10))(&local_834,local_83c,local_838);
      }
      if ((char)param_2[0xa3f] != '\x02') {
        *(undefined1 *)((int)param_2 + 0x2912) = 0;
        local_3a8 = (code *)param_2[0xa3b];
        local_3a4 = (code *)param_2[0xa3c];
        local_3a0 = (code *)param_2[0xa3d];
        uStack_39c = param_2[0xa3e];
        uStack_398 = param_2[0xa3f];
        if (3 < DAT_01d51b00) {
          local_5ec = (code *)&LAB_00632348;
          local_5e4 = FUN_012fcf18;
          local_840 = (code *)&DAT_005696f8;
          local_83c = (code *)&DAT_00000010;
          local_838 = (code *)&DAT_005696f8;
          local_834 = (code *)0x10;
          local_830 = &DAT_01d1cbf8;
          local_5f0 = pcVar13;
          local_5e8 = pcVar5;
          FUN_0193b350(&DAT_0058ba6b,&local_5f0,4,&local_840);
        }
        FUN_01ac6d2c(puVar16,"Proxy-Authorization: ","HTTP/1.1 200");
        FUN_01ac6d2c(puVar16,local_3a4,local_3a4 + (int)local_3a0);
        FUN_01ac6d2c(puVar16,&DAT_00531047,&DAT_00531049);
        (**(code **)(local_3a8 + 0x10))(&uStack_39c,local_3a4,local_3a0);
      }
      FUN_01ac6d2c(puVar16,&DAT_00531047,&DAT_00531049);
      param_2[0xa46] = (uint)(param_2 + 0x9da);
      param_2[0xa47] = param_2[0xa41];
      param_2[0xa48] = param_2[0xa42];
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d1cc08);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d1cc08);
    case '\x04':
      goto LAB_017e10e8;
    }
    FUN_017ae954(&local_840,param_2 + 0xa46,param_3);
    if ((char)local_840 == '\x05') {
      uVar11 = 3;
LAB_017df99c:
      local_7e10 = param_2 + 0xa44;
      *(undefined1 *)local_7e10 = uVar11;
    }
    else {
      if (((uint)local_840 & 0xff) == 4) {
        pcVar5 = (code *)0x0;
        FUN_01bed93e(param_2 + 0xa4a,0,0x2000);
        param_2[0xa46] = 0;
        do {
          param_2[0xa47] = (uint)(param_2 + 0x9da);
          param_2[0xa48] = (uint)((int)param_2 + (int)(pcVar5 + 0x2928));
          param_2[0xa49] = 0x2000 - (int)pcVar5;
LAB_017e10e8:
          FUN_017fb02c(&local_840,param_2 + 0xa47,param_3);
          if ((char)local_840 == '\x05') {
            uVar11 = 4;
            goto LAB_017df99c;
          }
          if (((uint)local_840 & 0xff) != 4) {
            pcVar5 = (code *)FUN_014333d0(&local_840);
            goto LAB_017e10d0;
          }
          if (local_83c == (code *)0x0) {
            pcVar5 = (code *)FUN_017dc018(&DAT_0050c238,0x1e);
            goto LAB_017e129c;
          }
          pcVar5 = local_83c + param_2[0xa46];
          param_2[0xa46] = (uint)pcVar5;
          if ((code *)0x2000 < pcVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,pcVar5,0x2000,&DAT_01d1cc18);
          }
          if (pcVar5 < (code *)0xc) {
LAB_017e1284:
            pcVar5 = (code *)FUN_017dc018(&DAT_0050c262,0x13);
            goto LAB_017e129c;
          }
          puVar16 = param_2 + 0xa4a;
          iVar9 = thunk_FUN_01bed842("HTTP/1.1 200",puVar16,0xc);
          if ((iVar9 != 0) && (iVar9 = thunk_FUN_01bed842("HTTP/1.0 200",puVar16,0xc), iVar9 != 0))
          {
            iVar9 = thunk_FUN_01bed842("HTTP/1.1 407",puVar16,0xc);
            if (iVar9 != 0) goto LAB_017e1284;
            pcVar5 = (code *)FUN_017dc018(&DAT_0050c275,0x1d);
            goto LAB_017e129c;
          }
          if (*(int *)((int)puVar16 + (int)(pcVar5 + -4)) == 0xa0d0a0d) {
            *(undefined1 *)((int)param_2 + 0x2911) = 0;
            pcVar13 = (code *)param_2[0x9da];
            pcVar5 = (code *)param_2[0x9db];
            pcVar19 = (code *)param_2[0x9dc];
            FUN_01bed4e2(&local_3498,param_2 + 0x9dd,0x124);
            goto LAB_017e12ac;
          }
        } while (pcVar5 != (code *)0x2000);
        pcVar5 = (code *)FUN_017dc018(&DAT_0050c292,0x21);
LAB_017e129c:
        pcVar13 = (code *)&DAT_00000003;
        pcVar19 = (code *)&DAT_01d1cb2c;
      }
      else {
        pcVar5 = (code *)FUN_014333d0(&local_840);
LAB_017e10d0:
        pcVar13 = (code *)&DAT_00000003;
        pcVar19 = (code *)&DAT_01cf5e1c;
      }
LAB_017e12ac:
      uVar25 = CONCAT44(pcVar19,pcVar5);
      local_7e0c = param_2 + 0x98e;
      FUN_019bb7e0(param_2[0xa40],param_2[0xa41]);
      *(undefined2 *)((int)param_2 + 0x2912) = 0;
      FUN_019bb7e0(param_2[0xa33],param_2[0xa34]);
      if (*(char *)((int)param_2 + 0x2911) == '\x01') {
        FUN_017db5e8(param_2 + 0x9da);
      }
      *(undefined1 *)((int)param_2 + 0x2911) = 0;
      FUN_01bed4e2(&local_5970,&local_3498,0x124);
      *(undefined1 *)(param_2 + 0xa44) = 1;
      if (pcVar13 != (code *)&SUB_00000004) {
        FUN_01bed4e2(&local_f58,&local_5970,0x124);
        FUN_017dcfd4(local_7e0c);
        if (pcVar13 != (code *)&DAT_00000003) {
          FUN_01bed4e2(&local_154,&local_f58,0x124);
          *(undefined1 *)((int)param_2 + 0x260f) = 1;
          *(undefined1 *)(param_2 + 0x984) = 0;
          local_160 = pcVar13;
          local_15c = pcVar5;
          local_158 = pcVar19;
          if ((char)param_2[0x988] != '\x02') {
            uStack_5e0 = param_2[0x98c];
            local_5e4 = (code *)param_2[0x98b];
            *(undefined1 *)((int)param_2 + 0x2611) = 0;
            *(undefined1 *)((int)param_2 + 0x2616) = 0;
            *(undefined1 *)((int)param_2 + 0x260f) = 0;
            uVar12 = param_2[0x982];
            local_5f0 = (code *)CONCAT13(*(undefined1 *)((int)param_2 + 0x2623),
                                         CONCAT21(*(undefined2 *)((int)param_2 + 0x2621),
                                                  (char)param_2[0x988]));
            param_2[0x988] = uVar12;
            local_5ec = (code *)param_2[0x989];
            local_5e8 = (code *)param_2[0x98a];
            FUN_01bed4e2(&local_3a8,&local_160,0x130);
            FUN_017db694(&local_3498,uVar12,&local_5f0,&local_3a8);
            FUN_01bed4e2(&local_5970,&local_3498,0x250);
            FUN_01bed4e2(param_2 + 0x98a,&local_5970,0x250);
            goto LAB_017de0f8;
          }
          uVar8 = FUN_017dc018();
          uVar25 = CONCAT44(&DAT_01d1cb2c,uVar8);
          goto LAB_017e13c8;
        }
        cVar17 = '\x02';
        goto LAB_017e13ec;
      }
    }
    uVar11 = 4;
    break;
  case 5:
LAB_017de0f8:
    FUN_017db074(&local_3498,param_2 + 0x98a,param_3);
    pcVar19 = local_3490;
    pcVar13 = local_3494;
    pcVar5 = local_3498;
    if (local_3498 == (code *)&DAT_00000003) {
      uVar11 = 5;
      break;
    }
    if (local_3498 == (code *)0x2) {
      FUN_01bed4e2(&local_5f0,&local_3490,0x138);
      pcVar19 = local_5ec;
      pcVar13 = local_5f0;
      FUN_017db5e8(&local_5e8);
    }
    else {
      FUN_01bed4e2(&local_3a8,&pcStack_348c,0x244);
    }
    FUN_01bed4e2(&local_a90,&local_3a8,0x244);
    FUN_017db4ac(param_2 + 0x98a);
    if (pcVar5 == (code *)0x2) {
      local_3498 = pcVar13;
      local_3494 = pcVar19;
      uVar25 = FUN_014333d0(&local_3498);
      piVar6 = (int *)param_2[0x988];
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar6;
        bVar23 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar23);
      *piVar6 = iVar9 + -1;
      if (iVar9 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018bcb30(param_2[0x988]);
      }
LAB_017e13c8:
      cVar17 = '\x02';
    }
    else {
      FUN_01bed4e2(&local_834,&local_a90,0x244);
      piVar6 = (int *)param_2[0x988];
      local_840 = pcVar5;
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar6;
        bVar23 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar23);
      *piVar6 = iVar9 + -1;
      local_83c = pcVar13;
      local_838 = pcVar19;
      if (iVar9 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018bcb30(param_2[0x988]);
      }
      FUN_01bed4e2(&local_3498,&local_840,0x250);
      uVar25 = FUN_01780dd8((char)param_2[0x951],&local_3498);
      cVar17 = '\0';
    }
    *(undefined1 *)((int)param_2 + 0x2616) = 0;
    if (*(char *)((int)param_2 + 0x260f) != '\0') {
      FUN_017db5e8(&local_160);
    }
LAB_017e13ec:
    *(undefined1 *)((int)param_2 + 0x260f) = 0;
    if (((char)param_2[0x984] != '\0') && ((char)param_2[0x988] == '\0')) {
      FUN_019bb7e0(param_2[0x989],param_2[0x98a]);
    }
    *(undefined1 *)(param_2 + 0x984) = 0;
LAB_017e141c:
    *(undefined1 *)((int)param_2 + 0x2617) = 0;
    if (*(char *)((int)param_2 + 0x2611) != '\0') {
      piVar6 = (int *)param_2[0x982];
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar6;
        bVar23 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar23);
      *piVar6 = iVar9 + -1;
      if (iVar9 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018bcb30(param_2[0x982]);
      }
    }
    *(undefined1 *)((int)param_2 + 0x2611) = 0;
    FUN_01799830(param_2 + 0x95c);
    if (*(char *)((int)param_2 + 0x2612) == '\x01') {
      FUN_019bb7e0(param_2[0x97f],param_2[0x980]);
    }
LAB_017e1488:
    uVar14 = SUB42(&local_3488,0);
    *(undefined1 *)((int)param_2 + 0x2612) = 0;
    bVar23 = *(char *)((int)param_2 + 0x2613) != '\0';
    cVar20 = '\0';
    if (bVar23) {
      cVar20 = (char)param_2[0x97e];
    }
    if (bVar23 && cVar20 != '\x02') {
      (**(code **)(param_2[0x97a] + 0x10))(param_2 + 0x97d,param_2[0x97b],param_2[0x97c]);
    }
    *(undefined1 *)(param_2 + 0x986) = 0;
    *(undefined1 *)((int)param_2 + 0x2613) = 0;
    if ((char)param_2[0x985] != '\0') {
      FUN_01706d0c(&local_e28);
    }
    uVar11 = 0;
    *(undefined1 *)(param_2 + 0x985) = 0;
    *(undefined4 *)((int)param_2 + 0x2619) = 0;
    FUN_01706d0c(param_2 + 0x96f);
    FUN_0179791c(param_2 + 0x942);
    goto LAB_017e1500;
  }
  *(undefined1 *)((int)param_2 + 0x260e) = uVar11;
  *(undefined1 *)((int)param_1 + 9) = 3;
  uVar4 = 4;
LAB_017e0e1c:
  *(undefined1 *)(param_2 + 0x926) = uVar4;
  return;
}

