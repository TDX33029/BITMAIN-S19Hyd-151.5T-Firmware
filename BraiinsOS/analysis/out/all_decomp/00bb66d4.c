// FUN_00bb66d4 @ 00bb66d4 size=9544 calls_out=62 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | BUG: poisoned | Failed to send message to monitor - channel closed | BUG: send failed

void FUN_00bb66d4(undefined1 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  char *pcVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  char *pcVar23;
  uint ***pppuVar24;
  undefined4 extraout_r1;
  int iVar25;
  uint uVar26;
  undefined4 extraout_r1_00;
  undefined4 uVar27;
  code *pcVar28;
  undefined1 *puVar29;
  uint uVar30;
  undefined4 uVar31;
  uint ****ppppuVar32;
  undefined1 uVar33;
  uint uVar34;
  uint *****pppppuVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  uint *****pppppuVar38;
  undefined4 *puVar39;
  int iVar40;
  undefined4 *puVar41;
  uint *puVar42;
  uint *****pppppuVar43;
  uint *****unaff_r8;
  uint *****pppppuVar44;
  int *piVar45;
  uint *****pppppuVar46;
  undefined4 *puVar47;
  uint *****pppppuVar48;
  uint *****pppppuVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  bool bVar52;
  bool bVar53;
  bool bVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  ulonglong uVar62;
  undefined8 uVar63;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 *local_218;
  int local_1fc;
  int local_1c0;
  uint local_1b4;
  uint local_198;
  uint *****local_188;
  uint *****local_184;
  uint *****local_180;
  uint *****local_17c;
  uint *****local_178;
  uint *****local_174;
  uint *****local_170;
  uint *****local_16c;
  uint *****local_168;
  uint *****pppppuStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_120;
  uint *****local_11c;
  uint *****local_118;
  uint *****local_114;
  uint *****local_110;
  uint *****local_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  uint *****local_c8;
  uint *****pppppuStack_c4;
  uint *****pppppuStack_c0;
  uint *****local_bc;
  undefined2 local_b4;
  undefined1 local_b2;
  uint *****local_b0;
  uint *****pppppuStack_ac;
  uint *****pppppuStack_a8;
  uint *****local_a4;
  undefined2 local_9c;
  undefined1 local_9a;
  uint *****local_98;
  uint *****local_94;
  uint *****local_90;
  uint *****local_8c;
  uint *****local_88;
  uint *****pppppuStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined2 local_74;
  undefined1 uStack_72;
  int iStack_71;
  undefined1 uStack_6d;
  uint *****local_6c;
  undefined4 local_68;
  uint *****local_64;
  
  puVar47 = param_2 + 10;
  uVar9 = (&switchD_00bb6704::switchdataD_00bb6708)[*(byte *)((int)param_2 + 0x1f)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)((int)param_2 + 0x1f)) {
  case 0:
    iVar25 = param_2[6];
    ppppuVar32 = (uint ****)(iVar25 + 0x168);
    *param_2 = param_2[2];
    param_2[1] = param_2[3];
    *(undefined1 *)((int)param_2 + 0x1e) = 0;
    param_2[4] = iVar25;
    *(undefined1 *)(param_2 + 7) = *(undefined1 *)(param_2 + 8);
    do {
      if (*ppppuVar32 != (uint ***)0x0) {
        ClearExclusiveLocal();
        FUN_015bf680(ppppuVar32);
        goto LAB_00bb6794;
      }
      bVar53 = (bool)hasExclusiveAccess(ppppuVar32);
    } while (!bVar53);
    *ppppuVar32 = (uint ***)0x1;
    DataMemoryBarrier(0xb);
LAB_00bb6794:
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      if (*(char *)(iVar25 + 0x16c) != '\0') {
        uVar9 = 0;
        goto LAB_00bb6e10;
      }
      *(undefined1 *)((int)param_2 + 0x1d) = *(undefined1 *)(iVar25 + 0x16d);
LAB_00bb67c0:
      if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar22 = FUN_015bf3f8(), iVar22 == 0)) {
        *(undefined1 *)(iVar25 + 0x16c) = 1;
      }
    }
    else {
      uVar9 = FUN_015bf3f8();
      uVar9 = uVar9 ^ 1;
      if (*(char *)(iVar25 + 0x16c) != '\0') {
LAB_00bb6e10:
        local_11c = (uint *****)CONCAT31(local_11c._1_3_,(char)uVar9);
        local_120 = (uint *****)ppppuVar32;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("BUG: poisoned",0xd,&local_120,&DAT_01870fdc,&DAT_01871890);
      }
      *(undefined1 *)((int)param_2 + 0x1d) = *(undefined1 *)(iVar25 + 0x16d);
      if (uVar9 == 0) goto LAB_00bb67c0;
    }
    DataMemoryBarrier(0xb);
    do {
      pppuVar24 = *ppppuVar32;
      bVar53 = (bool)hasExclusiveAccess(ppppuVar32);
    } while (!bVar53);
    *ppppuVar32 = (uint ***)0x0;
    if (pppuVar24 == (uint ***)0x2) {
      FUN_016d6968(0xf0,ppppuVar32,0x81,1);
    }
    if ((DAT_018d9130 < 3) && (DAT_018d9b6c != '\0')) {
      if (DAT_018d9b6c == '\x01') {
LAB_00bb6848:
        pppppuVar48 = (uint *****)&DAT_018ae394;
        DataMemoryBarrier(0xb);
        pcVar23 = s_SetGloba_00414c05;
        if (DAT_018dd984 == 2) {
          pcVar23 = DAT_018daa74;
          pppppuVar48 = DAT_018daa78;
          if (DAT_018daa70 != 0) {
            pcVar23 = DAT_018daa74 + ((int)DAT_018daa78[2] - 1U & 0xfffffff8) + 8;
          }
        }
        iVar25 = (*(code *)pppppuVar48[5])(pcVar23,DAT_018d9b64);
        if (iVar25 == 0) goto LAB_00bb6a64;
      }
      else if (DAT_018d9b6c != '\x02') {
        cVar8 = FUN_0169ac90(&DAT_018d9b64);
        if (cVar8 == '\0') goto LAB_00bb6a64;
        if (cVar8 != '\x02') goto LAB_00bb6848;
      }
      local_90 = (uint *****)(DAT_018d9b64 + 0x1c);
      local_120 = (uint *****)*local_90;
      local_11c = *(uint ******)(DAT_018d9b64 + 0x20);
      if (local_11c == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018718a0);
      }
      local_118 = *(uint ******)(DAT_018d9b64 + 0x24);
      local_114 = *(uint ******)(DAT_018d9b64 + 0x28);
      local_174 = (uint *****)&local_74;
      local_178 = (uint *****)&local_120;
      local_94 = (uint *****)&DAT_00000001;
      local_98 = (uint *****)&local_178;
      local_110 = (uint *****)0x0;
      local_188 = (uint *****)(param_2[4] + 0x19c);
      local_170 = (uint *****)&DAT_018abb78;
      uStack_6d = (undefined1)((uint)&local_188 >> 0x18);
      local_74 = 0xccf3;
      uStack_72 = 0x58;
      iStack_71 = (int)&local_188 * 0x100;
      local_184 = (uint *****)&DAT_00f5c97c;
      FUN_00bb9784(&local_98);
    }
LAB_00bb6a64:
    uVar63 = (**(code **)(*(int *)(param_2[4] + 0x154) + 0x10))(*(undefined4 *)(param_2[4] + 0x150))
    ;
    *(undefined8 *)(param_2 + 9) = uVar63;
    goto LAB_00bb6a7c;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018718b0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018718b0);
  case 3:
    uVar63 = *(undefined8 *)(param_2 + 9);
LAB_00bb6a7c:
    uVar62 = (**(code **)((int)((ulonglong)uVar63 >> 0x20) + 0xc))((int)uVar63,param_3);
    unaff_r8 = (uint *****)(uVar62 >> 0x20);
    if ((uVar62 & 1) != 0) {
      *param_1 = 0xd;
      uVar7 = 3;
      goto LAB_00bb7990;
    }
    uVar27 = param_2[9];
    puVar39 = (undefined4 *)param_2[10];
    pcVar28 = (code *)*puVar39;
    if (pcVar28 != (code *)0x0) {
      (*pcVar28)(uVar27);
    }
    if (puVar39[1] != 0) {
      thunk_FUN_016d3fb4(uVar27);
    }
    if (unaff_r8 != (uint *****)0x0) goto LAB_00bb7924;
    iVar25 = param_2[4];
    uVar27 = *(undefined4 *)(iVar25 + 0xe0);
    uVar12 = *(undefined4 *)(iVar25 + 0xe4);
    param_2[0xc] = *(undefined4 *)(iVar25 + 0xe8);
    param_2[0x2a] = param_2;
    *puVar47 = uVar27;
    param_2[0xb] = uVar12;
    *(undefined1 *)(param_2 + 0x2b) = 0;
switchD_00bb6704_caseD_4:
    bVar6 = FUN_00bb2a24(puVar47,param_3);
    if (bVar6 == 2) {
      *param_1 = 0xd;
      uVar7 = 4;
      goto LAB_00bb7990;
    }
    if (*(char *)(param_2 + 0x2b) == '\x03') {
      FUN_00b9e31c(param_2 + 0x12);
    }
    if ((bVar6 & 1) == 0) {
      unaff_r8 = (uint *****)param_2[4];
      param_2[0x10] = unaff_r8;
      param_2[0x11] = param_2;
      *(undefined1 *)((int)param_2 + 0x49) = 0;
      pppppuVar48 = unaff_r8 + 0x5c;
      puVar41 = param_2;
      if (*pppppuVar48 == (uint ****)0x0) {
LAB_00bb6d44:
        *(undefined1 *)((int)param_2 + 0x49) = 1;
      }
      else {
LAB_00bb6b74:
        if ((DAT_018d9130 < 3) &&
           (((DAT_018d9b48 - 1 < 2 ||
             ((DAT_018d9b48 != 0 && (cVar8 = FUN_0169ac90(&DAT_018d9b40), cVar8 != '\0')))) &&
            (iVar25 = FUN_016949d8(DAT_018d9b40), iVar25 != 0)))) {
          if (*(uint ******)(DAT_018d9b40 + 0x20) == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01871810);
          }
          local_178 = (uint *****)&local_120;
          local_98 = (uint *****)&local_178;
          local_118 = *(uint ******)(DAT_018d9b40 + 0x24);
          local_114 = *(uint ******)(DAT_018d9b40 + 0x28);
          local_174 = (uint *****)&local_74;
          local_110 = (uint *****)0x0;
          local_94 = (uint *****)&DAT_00000001;
          local_170 = (uint *****)&DAT_018abb78;
          uStack_6d = (undefined1)((uint)&local_188 >> 0x18);
          local_74 = 0x5317;
          uStack_72 = 0x58;
          iStack_71 = (int)&local_188 * 0x100;
          local_184 = (uint *****)&DAT_00f5c97c;
          local_188 = unaff_r8 + 0x67;
          local_120 = *(uint ******)(DAT_018d9b40 + 0x1c);
          local_11c = *(uint ******)(DAT_018d9b40 + 0x20);
          local_90 = (uint *****)(DAT_018d9b40 + 0x1c);
          FUN_00bb98ec(&local_98);
        }
        puVar39 = param_2 + 0x12;
        *(undefined1 *)puVar39 = 0;
        *(undefined1 *)(param_2 + 0xf) = 0;
        param_2[0xb] = pppppuVar48;
        param_2[0xc] = puVar41;
        param_2[9] = puVar39;
        param_2[10] = param_2 + 0xb;
LAB_00bb6c8c:
        bVar6 = FUN_00d3fca8(puVar39,param_2[10],param_3);
        if (bVar6 == 5) {
          *(undefined1 *)((int)param_2 + 0x49) = 3;
          *param_1 = 0xd;
          uVar7 = 5;
          goto LAB_00bb7990;
        }
        if (*(char *)(param_2 + 0xf) == '\x03') {
          puVar39 = param_2 + 0xd;
          FUN_016af0b0(puVar39);
          piVar11 = (int *)*puVar39;
          DataMemoryBarrier(0xb);
          do {
            iVar25 = *piVar11;
            bVar53 = (bool)hasExclusiveAccess(piVar11);
          } while (!bVar53);
          *piVar11 = iVar25 + -1;
          if (iVar25 == 1) {
            DataMemoryBarrier(0xb);
            FUN_008f4138(*puVar39);
          }
        }
        cVar8 = '\x01';
        if (1 < bVar6) {
          cVar8 = bVar6 - 2;
        }
        if (cVar8 == '\0') goto LAB_00bb6d44;
        if (cVar8 != '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478("all branches are disabled and there is no else branch",0x6b,&DAT_01871830);
        }
        *(undefined1 *)((int)param_2 + 0x49) = 1;
        if ((bVar6 & 1) != 0) goto LAB_00bb7120;
      }
      local_120 = (uint *****)&DAT_00000004;
      FUN_008e0b68(*(int *)(param_2[4] + 0x194) + 8,&local_120);
      local_174 = *(uint ******)(param_2[4] + 0x160);
      local_178 = (uint *****)CONCAT22(local_178._2_2_,1);
      FUN_009cb590(&local_120,*(undefined4 *)(param_2[4] + 0x164),&local_178);
      if ((char)local_114 != '\x02') {
        local_120 = (uint *****)
                    FUN_009cbe14(&local_120,"Failed to send message to monitor - channel closed",
                                 0x32);
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("BUG: send failed",0x10,&local_120,&DAT_01870fbc,&DAT_018718c0);
      }
      iVar25 = param_2[4];
      param_2[0x2c] = iVar25;
      *(undefined1 *)(param_2 + 0x31) = 0;
      param_2[0x2d] = param_2;
      puVar39 = param_2;
LAB_00bb6db4:
      param_2[0x2e] = iVar25;
      param_2[0x2f] = puVar39;
      iVar25 = FUN_008e15a4(*(undefined4 *)(iVar25 + 0x17c));
      if (iVar25 == 0) {
        param_2[0x30] = 0;
        do {
          iVar25 = FUN_008e15a4(*(undefined4 *)(param_2[0x2e] + 0x17c));
          if (iVar25 != 0) {
            if (((DAT_018d9130 < 3) &&
                ((DAT_018d9b60 - 1 < 2 ||
                 ((DAT_018d9b60 != 0 && (cVar8 = FUN_0169ac90(&DAT_018d9b58), cVar8 != '\0')))))) &&
               (iVar25 = FUN_016949d8(DAT_018d9b58), iVar25 != 0)) {
              if (*(uint ******)(DAT_018d9b58 + 0x20) == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01871870);
              }
              local_118 = *(uint ******)(DAT_018d9b58 + 0x24);
              local_114 = *(uint ******)(DAT_018d9b58 + 0x28);
              local_174 = (uint *****)&local_74;
              local_178 = (uint *****)&local_120;
              local_94 = (uint *****)&DAT_00000001;
              local_98 = (uint *****)&local_178;
              local_110 = (uint *****)0x0;
              local_188 = (uint *****)(param_2[0x2e] + 0x19c);
              local_170 = (uint *****)&DAT_018abb78;
              uStack_6d = (undefined1)((uint)&local_188 >> 0x18);
              local_74 = 0xde67;
              uStack_72 = 0x56;
              iStack_71 = (int)&local_188 * 0x100;
              local_184 = (uint *****)&DAT_00f5c97c;
              local_120 = *(uint ******)(DAT_018d9b58 + 0x1c);
              local_11c = *(uint ******)(DAT_018d9b58 + 0x20);
              local_90 = (uint *****)(DAT_018d9b58 + 0x1c);
              FUN_00bb9a50(&local_98);
            }
            goto LAB_00bb74b4;
          }
          if ((((uint)(param_2[0x30] * -0x33333333) < 0x33333334) && (DAT_018d9130 < 3)) &&
             (DAT_018d9b54 != '\0')) {
            pppppuVar48 = (uint *****)&DAT_018ae394;
            pcVar23 = s_SetGloba_00414c05;
            if (DAT_018d9b54 == '\x01') {
LAB_00bb71d0:
              DataMemoryBarrier(0xb);
              pcVar10 = pcVar23;
              pppppuVar35 = pppppuVar48;
              if (DAT_018dd984 == 2) {
                pcVar10 = DAT_018daa74;
                pppppuVar35 = DAT_018daa78;
                if (DAT_018daa70 != 0) {
                  pcVar10 = DAT_018daa74 + ((int)DAT_018daa78[2] - 1U & 0xfffffff8) + 8;
                }
              }
              iVar25 = (*(code *)pppppuVar35[5])(pcVar10,DAT_018d9b4c);
              if (iVar25 == 0) goto LAB_00bb7420;
            }
            else if (DAT_018d9b54 != '\x02') {
              cVar8 = FUN_0169ac90(&DAT_018d9b4c);
              if (cVar8 == '\0') goto LAB_00bb7420;
              if (cVar8 != '\x02') goto LAB_00bb71d0;
            }
            if ((uint *****)DAT_018d9b4c[8] == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01871860);
            }
            local_94 = (uint *****)&local_68;
            local_98 = (uint *****)&local_178;
            local_170 = (uint *****)DAT_018d9b4c[9];
            local_16c = (uint *****)DAT_018d9b4c[10];
            local_180 = DAT_018d9b4c + 7;
            local_178 = (uint *****)*local_180;
            unaff_r8 = (uint *****)&local_174;
            local_188 = (uint *****)&local_98;
            local_168 = (uint *****)0x0;
            local_64 = (uint *****)&local_74;
            local_90 = (uint *****)&DAT_018abb78;
            local_184 = (uint *****)&DAT_00000001;
            iVar25 = param_2[0x2e] + 0x19c;
            local_68 = (uint ****)&DAT_0056fc8b;
            local_74 = (undefined2)iVar25;
            uStack_72 = (undefined1)((uint)iVar25 >> 0x10);
            local_110 = (uint *****)&local_188;
            iStack_71 = CONCAT31(0xf5c97c,(char)((uint)iVar25 >> 0x18));
            uStack_6d = 0;
            local_11c = (uint *****)0x0;
            local_120 = (uint *****)&DAT_00000001;
            DataMemoryBarrier(0xb);
            if (DAT_018dd984 == 2) {
              pcVar23 = DAT_018daa74;
              pppppuVar48 = DAT_018daa78;
              if (DAT_018daa70 != 0) {
                pcVar23 = DAT_018daa74 + ((int)DAT_018daa78[2] - 1U & 0xfffffff8) + 8;
              }
            }
            local_174 = (uint *****)DAT_018d9b4c[8];
            local_10c = DAT_018d9b4c;
            iVar25 = (*(code *)pppppuVar48[10])(pcVar23,&local_120);
            if (iVar25 != 0) {
              (*(code *)pppppuVar48[0xb])(pcVar23,&local_120);
            }
          }
LAB_00bb7420:
          param_2[0x30] = param_2[0x30] + 1;
          *puVar47 = 1;
          param_2[0xb] = 0;
          param_2[0xc] = 0;
          param_2[0x2a] = param_2[0x2f];
          *(undefined1 *)(param_2 + 0x2b) = 0;
switchD_00bb699c_caseD_3:
          bVar6 = FUN_00bb2a24(puVar47,param_3);
          if (bVar6 == 2) {
            *(undefined1 *)(param_2 + 0x31) = 3;
            *param_1 = 0xd;
            uVar7 = 6;
            goto LAB_00bb7990;
          }
          if (*(char *)(param_2 + 0x2b) == '\x03') {
            FUN_00b9e31c(param_2 + 0x12);
          }
        } while ((bVar6 & 1) == 0);
        *(undefined1 *)(param_2 + 0x31) = 1;
        goto LAB_00bb7120;
      }
LAB_00bb74b4:
      *(undefined1 *)(param_2 + 0x31) = 1;
      iVar25 = param_2[4];
      if (*(byte *)((int)param_2 + 0x1d) - 1 < 2) {
        uVar63 = (**(code **)(*(int *)(iVar25 + 0x154) + 0x14))(*(undefined4 *)(iVar25 + 0x150));
        *(undefined8 *)(param_2 + 9) = uVar63;
switchD_00bb6704_caseD_7:
        uVar62 = (**(code **)(param_2[10] + 0xc))(param_2[9],param_3);
        unaff_r8 = (uint *****)(uVar62 >> 0x20);
        if ((uVar62 & 1) != 0) {
          *param_1 = 0xd;
          uVar7 = 7;
          goto LAB_00bb7990;
        }
        uVar27 = param_2[9];
        puVar39 = (undefined4 *)param_2[10];
        pcVar28 = (code *)*puVar39;
        if (pcVar28 != (code *)0x0) {
          (*pcVar28)(uVar27);
        }
        if (puVar39[1] != 0) {
          thunk_FUN_016d3fb4(uVar27);
        }
        if (unaff_r8 == (uint *****)0x0) {
LAB_00bb7644:
          uVar27 = param_2[4];
          param_2[0x78] = uVar27;
          *(undefined1 *)(param_2 + 0x7c) = 0;
          param_2[0x79] = param_2;
          puVar39 = param_2;
LAB_00bb7664:
          param_2[0x7a] = uVar27;
          param_2[0x7b] = puVar39;
          FUN_015f3b0c(&local_120,1);
          *puVar47 = local_120;
          param_2[0xb] = local_11c;
          param_2[0xc] = local_118;
          uVar62 = FUN_007143c8();
          piVar11 = (int *)uVar62;
          puVar29 = &DAT_3b9aca00;
          if (*(char *)((int)piVar11 + 0x5d) == '\x01') {
            iVar25 = piVar11[7];
            param_2[0xe] = piVar11[6];
            param_2[0xf] = iVar25;
            puVar29 = (undefined1 *)0x0;
          }
          param_2[0x10] = puVar29;
          if ((((uVar62 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
             (iVar25 = FUN_015bf3f8(), iVar25 == 0)) {
            *(undefined1 *)(piVar11 + 1) = 1;
          }
          uVar27 = 0;
          DataMemoryBarrier(0xb);
          do {
            iVar25 = *piVar11;
            bVar53 = (bool)hasExclusiveAccess(piVar11);
          } while (!bVar53);
          *piVar11 = 0;
          if (iVar25 == 2) {
            FUN_016d6968(0xf0,piVar11,0x81,1);
            puVar29 = (undefined1 *)param_2[0x10];
            uVar27 = extraout_r1;
          }
          else {
            puVar29 = (undefined1 *)param_2[0x10];
          }
          if (puVar29 == &DAT_3b9aca00) {
            local_120 = (uint *****)0x0;
          }
          else {
            FUN_008d67c0(&local_120,uVar27,param_2[0xe],param_2[0xf],puVar29);
          }
          param_2[0x18] = &DAT_3b9aca00;
          param_2[0x12] = local_120;
          param_2[0x13] = local_11c;
          param_2[0x14] = local_118;
          param_2[0x15] = local_114;
          do {
            uVar62 = FUN_007143c8();
            piVar11 = (int *)uVar62;
            iVar25 = piVar11[0x17];
            if ((((uVar62 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
               (iVar22 = FUN_015bf3f8(), iVar22 == 0)) {
              *(undefined1 *)(piVar11 + 1) = 1;
            }
            DataMemoryBarrier(0xb);
            do {
              iVar22 = *piVar11;
              bVar53 = (bool)hasExclusiveAccess(piVar11);
            } while (!bVar53);
            *piVar11 = 0;
            if (iVar22 == 2) {
              FUN_016d6968(0xf0,piVar11,0x81,1);
            }
            if ((char)iVar25 == '\0') goto LAB_00bb87cc;
            local_120 = (uint *****)param_2[0x12];
            local_11c = (uint *****)param_2[0x13];
            local_118 = (uint *****)param_2[0x14];
            local_114 = (uint *****)param_2[0x15];
            FUN_008e0b68(*(int *)(param_2[0x7a] + 0x194) + 8,&local_120);
            iVar25 = *(int *)(*(int *)(param_2[0x7a] + 0x17c) + 0xc);
            puVar42 = (uint *)(iVar25 + 0x98);
            uVar9 = *(uint *)(iVar25 + 0x98);
            if ((uVar9 < 0xfffffff0) && ((uVar9 & 8) == 0)) {
              if (*puVar42 != uVar9) {
                ClearExclusiveLocal();
                goto LAB_00bb7ad0;
              }
              bVar53 = (bool)hasExclusiveAccess(puVar42);
              if (!bVar53) goto LAB_00bb7ad0;
              *puVar42 = uVar9 + 0x10;
              DataMemoryBarrier(0xb);
            }
            else {
LAB_00bb7ad0:
              FUN_0127d66c(puVar42);
            }
            FUN_0128236c(puVar42);
            uVar9 = (uint)puVar42 | 1;
            FUN_0128236c(uVar9);
            DataMemoryBarrier(0xb);
            iVar22 = *(int *)(iVar25 + 0xa0);
            if (iVar22 == 2) {
              if (((DAT_018d9130 < 3) &&
                  ((DAT_018d9b90 - 1 < 2 ||
                   ((DAT_018d9b90 != 0 && (cVar8 = FUN_0169ac90(&DAT_018d9b88), cVar8 != '\0'))))))
                 && (iVar25 = FUN_016949d8(DAT_018d9b88), iVar25 != 0)) {
                if (*(uint ******)(DAT_018d9b88 + 0x20) == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01871930);
                }
                local_174 = (uint *****)&local_74;
                local_118 = *(uint ******)(DAT_018d9b88 + 0x24);
                local_114 = *(uint ******)(DAT_018d9b88 + 0x28);
                local_98 = (uint *****)&local_178;
                local_94 = (uint *****)&DAT_00000001;
                local_110 = (uint *****)0x0;
                local_188 = (uint *****)(param_2[0x7a] + 0x19c);
                local_170 = (uint *****)&DAT_018abb78;
                uStack_6d = (undefined1)((uint)&local_188 >> 0x18);
                local_74 = 0xea1e;
                uStack_72 = 0x57;
                iStack_71 = (int)&local_188 * 0x100;
                local_184 = (uint *****)&DAT_00f5c97c;
                local_178 = (uint *****)&local_120;
                local_120 = *(uint ******)(DAT_018d9b88 + 0x1c);
                local_11c = *(uint ******)(DAT_018d9b88 + 0x20);
                local_90 = (uint *****)(DAT_018d9b88 + 0x1c);
                FUN_00bb9b6c(&local_98);
              }
              FUN_01282570(puVar42);
              FUN_01282570(uVar9);
              DataMemoryBarrier(0xb);
              do {
                uVar9 = *puVar42;
                bVar53 = (bool)hasExclusiveAccess(puVar42);
              } while (!bVar53);
              *puVar42 = uVar9 - 0x10;
              if ((uVar9 & 0xfffffff2) == 0x12) {
                FUN_0127d34c(puVar42);
              }
LAB_00bb87cc:
              local_120 = (uint *****)&DAT_00000004;
              FUN_008e0b68(*(int *)(param_2[0x7a] + 0x194) + 8,&local_120);
              *(undefined1 *)(param_2 + 0x7c) = 1;
              uVar63 = (**(code **)(*(int *)(param_2[4] + 0x154) + 0x18))
                                 (*(undefined4 *)(param_2[4] + 0x150));
              *(undefined8 *)(param_2 + 9) = uVar63;
              goto switchD_00bb6704_caseD_b;
            }
            uVar27 = *(undefined4 *)(iVar25 + 200);
            uVar12 = *(undefined4 *)(iVar25 + 0xa8);
            uVar13 = *(undefined4 *)(iVar25 + 0xac);
            uVar14 = *(undefined4 *)(iVar25 + 0xb0);
            uVar15 = *(undefined4 *)(iVar25 + 0xb4);
            uVar7 = *(undefined1 *)(iVar25 + 0xc4);
            uVar50 = *(undefined4 *)(iVar25 + 0xec);
            uVar51 = *(undefined4 *)(iVar25 + 0xa4);
            uVar59 = *(undefined4 *)(iVar25 + 0xcc);
            uVar55 = *(undefined4 *)(iVar25 + 0xd0);
            bVar53 = *(char *)(iVar25 + 0xe4) != '\0';
            uVar56 = *(undefined4 *)(iVar25 + 0xd4);
            uVar57 = *(undefined4 *)(iVar25 + 0xd8);
            uVar58 = *(undefined4 *)(iVar25 + 0xdc);
            uVar60 = *(undefined4 *)(iVar25 + 0xe0);
            uVar31 = *(undefined4 *)(iVar25 + 0xb8);
            uVar36 = *(undefined4 *)(iVar25 + 0xbc);
            if (!bVar53) {
              local_184._0_3_ = (undefined3)((uint)*(undefined4 *)(iVar25 + 0xe8) >> 8);
              local_188 = *(uint ******)(iVar25 + 0xe5);
            }
            uVar34 = *(uint *)(iVar25 + 0x174);
            uVar16 = 0;
            bVar54 = 0x3ffffffe < uVar34;
            bVar52 = uVar34 == 0x3fffffff;
            uVar30 = *(uint *)(iVar25 + 0xc0);
            if (uVar34 < 0x40000000) {
              uVar30 = uVar34 << 2;
              bVar54 = 0x7ffffffb < uVar30;
              bVar52 = uVar30 == 0x7ffffffc;
              local_1b4 = *(uint *)(iVar25 + 0xc0);
            }
            if (bVar54 && !bVar52) {
LAB_00bb7b98:
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(uVar16,local_198);
            }
            uVar33 = *(undefined1 *)(iVar25 + 0xf4);
            uVar37 = *(undefined4 *)(iVar25 + 0x170);
            uVar16 = *(undefined4 *)(iVar25 + 0xf0);
            local_198 = 4;
            uVar26 = 0;
            if (uVar30 != 0) {
              local_198 = thunk_FUN_016d4a50(uVar30);
              if (local_198 == 0) {
                uVar16 = 4;
                local_198 = uVar30;
                goto LAB_00bb7b98;
              }
              uVar26 = uVar34;
            }
            FUN_016dd1aa(local_198,uVar37,uVar30);
            uVar17 = *(undefined4 *)(iVar25 + 0xf8);
            uVar37 = 0xb;
            uVar1 = *(undefined1 *)(iVar25 + 0x18c);
            uVar30 = *(uint *)(iVar25 + 0x100);
            uVar18 = *(undefined4 *)(iVar25 + 0x180);
            uVar19 = *(undefined4 *)(iVar25 + 0x184);
            bVar52 = (1 << (uVar30 & 0xff) & 0xbU) == 0;
            uVar61 = *(undefined4 *)(iVar25 + 0xfc);
            if (bVar52) {
              local_228 = *(undefined4 *)(iVar25 + 0x104);
              uVar37 = *(undefined4 *)(iVar25 + 0x108);
            }
            iVar20 = *(int *)(iVar25 + 0x10c);
            if (bVar52) {
              local_22c = uVar37;
            }
            if (iVar20 == 4) {
              iVar40 = *(int *)(iVar25 + 0x118);
              local_1c0 = 1;
              uVar37 = *(undefined4 *)(iVar25 + 0x114);
              if ((iVar40 != 0) && (local_1c0 = thunk_FUN_016d4a50(iVar40), local_1c0 == 0)) {
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(1,iVar40);
              }
              FUN_016dd1aa(local_1c0,uVar37,iVar40);
              uVar37 = extraout_r1_00;
              local_1fc = iVar40;
            }
            else {
              iVar40 = *(int *)(iVar25 + 0x110);
              local_1c0 = *(int *)(iVar25 + 0x114);
              local_224 = *(undefined4 *)(iVar25 + 0x11c);
              local_1fc = *(int *)(iVar25 + 0x118);
            }
            ppppuVar32 = *(uint *****)(iVar25 + 0x160);
            piVar11 = *(int **)(iVar25 + 0x178);
            uVar2 = *(undefined1 *)(iVar25 + 0x18e);
            uVar3 = *(undefined1 *)(iVar25 + 0x18d);
            if (ppppuVar32 != (uint ****)0x0) {
              local_21c = *(undefined4 *)(iVar25 + 0x164);
              uVar37 = *(undefined4 *)(iVar25 + 0x168);
            }
            uVar4 = *(undefined1 *)(iVar25 + 399);
            if (ppppuVar32 != (uint ****)0x0) {
              local_220 = uVar37;
            }
            do {
              iVar21 = *piVar11;
              bVar52 = (bool)hasExclusiveAccess(piVar11);
            } while (!bVar52);
            *piVar11 = iVar21 + 1;
            if (iVar21 < 0) {
LAB_00bb7900:
                    /* WARNING: Does not return */
              pcVar28 = (code *)software_udf(0xfdee,0xbb7900);
              (*pcVar28)();
            }
            piVar45 = *(int **)(iVar25 + 0x17c);
            do {
              iVar21 = *piVar45;
              bVar52 = (bool)hasExclusiveAccess(piVar45);
            } while (!bVar52);
            *piVar45 = iVar21 + 1;
            if (iVar21 < 0) goto LAB_00bb7900;
            FUN_00c5b354(&local_120,iVar25 + 0x120);
            local_178 = local_120;
            local_174 = local_11c;
            local_170 = local_118;
            local_16c = local_114;
            local_168 = local_110;
            pppppuStack_164 = local_10c;
            uStack_160 = uStack_108;
            uStack_15c = uStack_104;
            FUN_00c5b354(&local_120,iVar25 + 0x140);
            uVar5 = uStack_104;
            uVar37 = uStack_108;
            pppppuVar46 = local_10c;
            pppppuVar44 = local_110;
            pppppuVar43 = local_114;
            pppppuVar38 = local_118;
            pppppuVar35 = local_11c;
            pppppuVar48 = local_120;
            local_98 = local_120;
            local_94 = local_11c;
            local_90 = local_118;
            local_8c = local_114;
            local_88 = local_110;
            pppppuStack_84 = local_10c;
            uStack_80 = uStack_108;
            uStack_7c = uStack_104;
            local_74 = SUB42(local_188,0);
            uStack_72 = (undefined1)((uint)local_188 >> 0x10);
            iStack_71._0_1_ = (undefined1)((uint)local_188 >> 0x18);
            iStack_71 = CONCAT31((int3)local_184,(undefined1)iStack_71);
            unaff_r8 = *(uint ******)(iVar25 + 0x188);
            local_120 = local_178;
            local_11c = local_174;
            local_118 = local_170;
            local_114 = local_16c;
            local_110 = local_168;
            local_10c = pppppuStack_164;
            uStack_108 = uStack_160;
            uStack_104 = uStack_15c;
            *(bool *)(param_2 + 0x2b) = bVar53;
            param_2[0x24] = uVar27;
            *(undefined1 *)(param_2 + 0x23) = uVar7;
            param_2[0x1b] = uVar51;
            param_2[0x2d] = uVar50;
            param_2[0x2e] = uVar16;
            param_2[0x1c] = uVar12;
            param_2[0x1d] = uVar13;
            param_2[0x30] = uVar17;
            param_2[0x1e] = uVar14;
            param_2[0x32] = uVar30;
            param_2[0x1f] = uVar15;
            *(undefined1 *)(param_2 + 0x2f) = uVar33;
            param_2[0x20] = uVar31;
            param_2[0x33] = local_228;
            param_2[0x34] = local_22c;
            param_2[0x21] = uVar36;
            param_2[0x35] = iVar20;
            param_2[0x22] = local_1b4;
            param_2[0x36] = iVar40;
            param_2[0x1a] = iVar22;
            param_2[0x37] = local_1c0;
            param_2[0x38] = local_1fc;
            *(uint ******)((int)param_2 + 0xad) = local_188;
            param_2[0x2c] = iStack_71;
            param_2[0x25] = uVar59;
            param_2[0x26] = uVar55;
            param_2[0x27] = uVar56;
            param_2[0x28] = uVar57;
            param_2[0x29] = uVar58;
            param_2[0x2a] = uVar60;
            param_2[0x31] = uVar61;
            param_2[0x39] = local_224;
            param_2[0x3a] = local_178;
            param_2[0x3b] = local_174;
            param_2[0x3c] = local_170;
            param_2[0x3d] = local_16c;
            param_2[0x3e] = local_168;
            param_2[0x3f] = pppppuStack_164;
            param_2[0x40] = uStack_160;
            param_2[0x41] = uStack_15c;
            param_2[0x42] = pppppuVar48;
            param_2[0x43] = pppppuVar35;
            param_2[0x44] = pppppuVar38;
            param_2[0x45] = pppppuVar43;
            param_2[0x46] = pppppuVar44;
            param_2[0x47] = pppppuVar46;
            param_2[0x48] = uVar37;
            param_2[0x49] = uVar5;
            param_2[0x4b] = local_21c;
            param_2[0x4c] = local_220;
            pppppuVar48 = (uint *****)(param_2 + 0x4a);
            *pppppuVar48 = ppppuVar32;
            *(undefined1 *)((int)param_2 + 0x157) = uVar4;
            *(undefined1 *)((int)param_2 + 0x156) = uVar2;
            *(undefined1 *)((int)param_2 + 0x155) = uVar3;
            *(undefined1 *)(param_2 + 0x55) = uVar1;
            param_2[0x4d] = uVar26;
            param_2[0x4e] = local_198;
            param_2[0x4f] = uVar34;
            param_2[0x52] = uVar18;
            param_2[0x50] = piVar11;
            param_2[0x51] = piVar45;
            param_2[0x53] = uVar19;
            param_2[0x54] = unaff_r8;
            FUN_01282570(puVar42);
            FUN_01282570(uVar9);
            DataMemoryBarrier(0xb);
            do {
              uVar9 = *puVar42;
              bVar53 = (bool)hasExclusiveAccess(puVar42);
            } while (!bVar53);
            *puVar42 = uVar9 - 0x10;
            if ((uVar9 & 0xfffffff2) == 0x12) {
              FUN_0127d34c(puVar42);
            }
            if ((int)*pppppuVar48 - 1U < 2) {
              if (((((undefined1 *)param_2[0x18] != &DAT_3b9aca00) && (DAT_018d9130 < 3)) &&
                  ((DAT_018d9bb4 - 1 < 2 ||
                   ((DAT_018d9bb4 != 0 && (cVar8 = FUN_0169ac90(&DAT_018d9bac), cVar8 != '\0'))))))
                 && (iVar25 = FUN_016949d8(DAT_018d9bac), iVar25 != 0)) {
                if (*(uint ******)(DAT_018d9bac + 0x20) == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01871970);
                }
                local_118 = *(uint ******)(DAT_018d9bac + 0x24);
                local_114 = *(uint ******)(DAT_018d9bac + 0x28);
                local_174 = (uint *****)&local_74;
                local_178 = (uint *****)&local_120;
                local_94 = (uint *****)&DAT_00000001;
                local_98 = (uint *****)&local_178;
                local_110 = (uint *****)0x0;
                local_188 = (uint *****)(param_2[0x7a] + 0x19c);
                local_170 = (uint *****)&DAT_018abb78;
                uStack_6d = (undefined1)((uint)&local_188 >> 0x18);
                local_74 = 0xe95e;
                uStack_72 = 0x56;
                iStack_71 = (int)&local_188 * 0x100;
                local_184 = (uint *****)&DAT_00f5c97c;
                local_120 = *(uint ******)(DAT_018d9bac + 0x1c);
                local_11c = *(uint ******)(DAT_018d9bac + 0x20);
                local_90 = (uint *****)(DAT_018d9bac + 0x1c);
                FUN_00bb9d0c(&local_98);
              }
LAB_00bb8788:
              FUN_00ac8e24(param_2 + 0x1a);
              goto LAB_00bb87cc;
            }
            pppppuVar35 = (uint *****)param_2[0x10];
            if (pppppuVar35 != (uint *****)&DAT_3b9aca00) {
              pppppuVar49 = (uint *****)param_2[0xe];
              pppppuVar46 = (uint *****)param_2[0xf];
              pppppuVar38 = (uint *****)param_2[0xc];
              pppppuVar43 = (uint *****)*puVar47;
              pppppuVar44 = (uint *****)param_2[0xb];
              FUN_015f3b0c(&local_120,1);
              local_98 = local_120;
              local_94 = local_11c;
              local_90 = local_118;
              unaff_r8 = (uint *****)&local_120;
              local_178 = pppppuVar43;
              local_174 = pppppuVar44;
              local_170 = pppppuVar38;
              FUN_015f3c24(unaff_r8,&local_98,&local_178);
              pppppuVar44 = local_110;
              pppppuVar38 = local_114;
              pppppuVar43 = local_118;
              if (((uint)local_120 & 1) != 0) {
                pppppuVar43 = (uint *****)0x0;
                pppppuVar38 = (uint *****)0x0;
                pppppuVar44 = (uint *****)0x0;
              }
              bVar53 = pppppuVar35 <= pppppuVar44;
              if (pppppuVar43 != pppppuVar49 || pppppuVar38 != pppppuVar46) {
                bVar53 = pppppuVar46 < pppppuVar38 ||
                         (uint)((int)pppppuVar38 - (int)pppppuVar46) <
                         (uint)(pppppuVar49 <= pppppuVar43);
              }
              if (bVar53) {
                if ((DAT_018d9130 < 3) &&
                   (((DAT_018d9ba8 - 1 < 2 ||
                     ((DAT_018d9ba8 != 0 && (cVar8 = FUN_0169ac90(&DAT_018d9ba0), cVar8 != '\0'))))
                    && (iVar25 = FUN_016949d8(DAT_018d9ba0), iVar25 != 0)))) {
                  if (*(uint ******)(DAT_018d9ba0 + 0x20) == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01871960);
                  }
                  local_118 = *(uint ******)(DAT_018d9ba0 + 0x24);
                  local_174 = (uint *****)&local_74;
                  local_114 = *(uint ******)(DAT_018d9ba0 + 0x28);
                  local_94 = (uint *****)&DAT_00000001;
                  local_188 = (uint *****)(param_2[0x7a] + 0x19c);
                  local_110 = (uint *****)0x0;
                  local_170 = (uint *****)&DAT_018abb78;
                  uStack_6d = (undefined1)((uint)&local_188 >> 0x18);
                  local_74 = 0xb5c2;
                  uStack_72 = 0x57;
                  iStack_71 = (int)&local_188 * 0x100;
                  local_184 = (uint *****)&DAT_00f5c97c;
                  local_178 = unaff_r8;
                  local_120 = *(uint ******)(DAT_018d9ba0 + 0x1c);
                  local_11c = *(uint ******)(DAT_018d9ba0 + 0x20);
                  local_98 = (uint *****)&local_178;
                  local_90 = (uint *****)(DAT_018d9ba0 + 0x1c);
                  FUN_00bb9c3c(&local_98);
                }
                goto LAB_00bb8788;
              }
            }
            pppppuVar35 = (uint *****)param_2[0x18];
            if (pppppuVar35 == (uint *****)&DAT_3b9aca00) {
LAB_00bb8174:
              if ((DAT_018d9130 < 3) && (unaff_r8 = (uint *****)&DAT_018d9b64, DAT_018d9b9c != '\0')
                 ) {
                if (DAT_018d9b9c == '\x01') {
LAB_00bb81d0:
                  DataMemoryBarrier(0xb);
                  pppppuVar35 = (uint *****)&DAT_018ae394;
                  pcVar23 = s_SetGloba_00414c05;
                  if (DAT_018dd984 == 2) {
                    pcVar23 = DAT_018daa74;
                    pppppuVar35 = DAT_018daa78;
                    if (DAT_018daa70 != 0) {
                      pcVar23 = DAT_018daa74 + ((int)DAT_018daa78[2] - 1U & 0xfffffff8) + 8;
                    }
                  }
                  iVar25 = (*(code *)pppppuVar35[5])(pcVar23,DAT_018d9b94);
                  if (iVar25 == 0) goto LAB_00bb83a0;
                }
                else if (DAT_018d9b9c != '\x02') {
                  cVar8 = FUN_0169ac90(&DAT_018d9b94);
                  if (cVar8 == '\0') goto LAB_00bb83a0;
                  if (cVar8 != '\x02') goto LAB_00bb81d0;
                }
                if ((uint *****)DAT_018d9b94[8] == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01871940);
                }
                local_16c = (uint *****)DAT_018d9b94[10];
                local_6c = DAT_018d9b94 + 7;
                local_178 = (uint *****)*local_6c;
                local_184 = (uint *****)&local_68;
                local_170 = (uint *****)DAT_018d9b94[9];
                local_64 = (uint *****)&local_98;
                local_74 = SUB42(&local_188,0);
                uStack_72 = (undefined1)((uint)&local_188 >> 0x10);
                unaff_r8 = (uint *****)&DAT_018ae394;
                local_168 = (uint *****)0x0;
                local_180 = (uint *****)&DAT_018abb78;
                local_68 = (uint ****)&DAT_0058d5e8;
                iStack_71 = CONCAT31(1,(char)((uint)&local_188 >> 0x18));
                uStack_6d = 0;
                local_98 = (uint *****)(param_2[0x7a] + 0x19c);
                local_8c = (uint *****)&LAB_009a8240;
                local_11c = (uint *****)0x0;
                local_110 = (uint *****)&local_74;
                local_94 = (uint *****)&DAT_00f5c97c;
                local_120 = (uint *****)&DAT_00000001;
                DataMemoryBarrier(0xb);
                pcVar23 = s_SetGloba_00414c05;
                if (DAT_018dd984 == 2) {
                  pcVar23 = DAT_018daa74;
                  unaff_r8 = DAT_018daa78;
                  if (DAT_018daa70 != 0) {
                    pcVar23 = DAT_018daa74 + ((int)DAT_018daa78[2] - 1U & 0xfffffff8) + 8;
                  }
                }
                local_188 = (uint *****)&local_178;
                local_174 = (uint *****)DAT_018d9b94[8];
                local_10c = DAT_018d9b94;
                local_90 = pppppuVar48;
                iVar25 = (*(code *)unaff_r8[10])(pcVar23,&local_120);
                if (iVar25 != 0) {
                  (*(code *)unaff_r8[0xb])(pcVar23,&local_120);
                }
              }
LAB_00bb83a0:
              FUN_015f3b0c(&local_120,1);
              param_2[0x16] = local_120;
              param_2[0x17] = local_11c;
              param_2[0x18] = local_118;
            }
            else {
              unaff_r8 = (uint *****)param_2[0x16];
              pppppuVar38 = (uint *****)param_2[0x17];
              FUN_015f3b0c(&local_120,1);
              local_98 = local_120;
              local_94 = local_11c;
              local_90 = local_118;
              local_178 = unaff_r8;
              local_174 = pppppuVar38;
              local_170 = pppppuVar35;
              FUN_015f3c24(&local_120,&local_98,&local_178);
              if ((((uint)local_120 & 1) == 0) &&
                 ((uint)(local_118 < &DAT_00000014) <= (uint)-(int)local_114)) goto LAB_00bb8174;
            }
            local_174 = *(uint ******)(param_2[0x7a] + 0x160);
            local_178 = (uint *****)CONCAT22(local_178._2_2_,0x201);
            FUN_009cb590(&local_120,*(undefined4 *)(param_2[0x7a] + 0x164),&local_178);
            if ((char)local_114 != '\x02') {
              local_120 = (uint *****)
                          FUN_009cbe14(&local_120,
                                       "Failed to send message to monitor - channel closed",0x32);
                    /* WARNING: Subroutine does not return */
              FUN_00fb74f8("BUG: failed to send",0x13,&local_120,&DAT_01870fbc,&DAT_01871950);
            }
            *(undefined1 *)(param_2 + 0x77) = 0;
            param_2[0x56] = 5;
            param_2[0x57] = 0;
            param_2[0x58] = 0;
            param_2[0x76] = param_2[0x7b];
switchD_00bb69cc_caseD_3:
            local_218 = param_2 + 0x7c;
            bVar6 = FUN_00bb2a24(param_2 + 0x56,param_3);
            if (bVar6 == 2) {
              *(undefined1 *)local_218 = 3;
              *param_1 = 0xd;
              uVar7 = 10;
              goto LAB_00bb7990;
            }
            if (*(char *)(param_2 + 0x77) == '\x03') {
              FUN_00b9e31c(param_2 + 0x5e);
            }
            if ((bVar6 & 1) != 0) goto LAB_00bb846c;
            FUN_00ac8e24(param_2 + 0x1a);
          } while( true );
        }
      }
      else {
        param_2[9] = *(int *)(iVar25 + 0x18c) + 8;
        param_2[10] = 0xffffffff;
switchD_00bb6704_caseD_8:
        iVar25 = FUN_00c8101c(param_2 + 9,param_3);
        if (iVar25 == 0) {
          *param_1 = 0xd;
          uVar7 = 8;
          goto LAB_00bb7990;
        }
        param_2[5] = iVar25;
        *(undefined1 *)((int)param_2 + 0x1e) = 1;
        if (param_2[9] != 0) {
          FUN_00c8204c(param_2[9],param_2[10],1);
        }
        uVar63 = (**(code **)(*(int *)(param_2[4] + 0x154) + 0x14))
                           (*(undefined4 *)(param_2[4] + 0x150));
        *(undefined8 *)(param_2 + 9) = uVar63;
LAB_00bb75b0:
        uVar62 = (**(code **)((int)((ulonglong)uVar63 >> 0x20) + 0xc))((int)uVar63,param_3);
        unaff_r8 = (uint *****)(uVar62 >> 0x20);
        if ((uVar62 & 1) != 0) {
          *param_1 = 0xd;
          uVar7 = 9;
          goto LAB_00bb7990;
        }
        uVar27 = param_2[9];
        puVar39 = (undefined4 *)param_2[10];
        pcVar28 = (code *)*puVar39;
        if (pcVar28 != (code *)0x0) {
          (*pcVar28)(uVar27);
        }
        if (puVar39[1] != 0) {
          thunk_FUN_016d3fb4(uVar27);
        }
        if (unaff_r8 == (uint *****)0x0) {
          *(undefined1 *)((int)param_2 + 0x1e) = 0;
          FUN_00c822ec(param_2[5]);
          *(undefined1 *)((int)param_2 + 0x1e) = 0;
          goto LAB_00bb7644;
        }
        FUN_00c822ec(param_2[5]);
        *(undefined1 *)((int)param_2 + 0x1e) = 0;
      }
      goto LAB_00bb7924;
    }
LAB_00bb7120:
    uVar33 = 0xb;
    goto LAB_00bb7928;
  case 4:
    goto switchD_00bb6704_caseD_4;
  case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x49)) {
    case 0:
      unaff_r8 = (uint *****)param_2[0x10];
      puVar41 = (undefined4 *)param_2[0x11];
      pppppuVar48 = unaff_r8 + 0x5c;
      if (*pppppuVar48 != (uint ****)0x0) goto LAB_00bb6b74;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01871820);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01871820);
    case 3:
      puVar39 = (undefined4 *)param_2[9];
      goto LAB_00bb6c8c;
    }
    goto LAB_00bb6d44;
  case 6:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x31)) {
    case 0:
      iVar25 = param_2[0x2c];
      puVar39 = (undefined4 *)param_2[0x2d];
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01871850);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01871850);
    case 3:
      goto switchD_00bb699c_caseD_3;
    }
    goto LAB_00bb6db4;
  case 7:
    goto switchD_00bb6704_caseD_7;
  case 8:
    goto switchD_00bb6704_caseD_8;
  case 9:
    uVar63 = *(undefined8 *)(param_2 + 9);
    goto LAB_00bb75b0;
  case 10:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x7c)) {
    case 0:
      uVar27 = param_2[0x78];
      puVar39 = (undefined4 *)param_2[0x79];
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01871920);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01871920);
    case 3:
      goto switchD_00bb69cc_caseD_3;
    }
    goto LAB_00bb7664;
  case 0xb:
switchD_00bb6704_caseD_b:
    uVar62 = (**(code **)(param_2[10] + 0xc))(param_2[9],param_3);
    unaff_r8 = (uint *****)(uVar62 >> 0x20);
    if ((uVar62 & 1) != 0) {
      *param_1 = 0xd;
      uVar7 = 0xb;
      goto LAB_00bb7990;
    }
    uVar27 = param_2[9];
    puVar39 = (undefined4 *)param_2[10];
    pcVar28 = (code *)*puVar39;
    if (pcVar28 != (code *)0x0) {
      (*pcVar28)(uVar27);
    }
    if (puVar39[1] != 0) {
      thunk_FUN_016d3fb4(uVar27);
    }
    if (unaff_r8 == (uint *****)0x0) {
      iVar25 = 0xe8;
      iVar22 = 0xe0;
      if (*(byte *)((int)param_2 + 0x1d) - 1 < 2) {
        iVar25 = 0xf8;
        iVar22 = 0xf0;
      }
      uVar27 = *(undefined4 *)(param_2[4] + iVar25);
      puVar39 = (undefined4 *)(param_2[4] + iVar22);
      *puVar47 = *puVar39;
      param_2[0xc] = uVar27;
      param_2[0xb] = puVar39[1];
      *(undefined1 *)(param_2 + 0x2b) = 0;
      param_2[0x2a] = param_2;
      goto switchD_00bb6704_caseD_c;
    }
    goto LAB_00bb7924;
  case 0xc:
switchD_00bb6704_caseD_c:
    bVar6 = FUN_00bb2a24(puVar47,param_3);
    if (bVar6 == 2) {
      *param_1 = 0xd;
      uVar7 = 0xc;
      goto LAB_00bb7990;
    }
    if (*(char *)(param_2 + 0x2b) == '\x03') {
      FUN_00b9e31c(param_2 + 0x12);
    }
    if ((bVar6 & 1) != 0) goto LAB_00bb7120;
    if (((DAT_018d9130 < 3) &&
        ((DAT_018d9b78 - 1 < 2 ||
         ((DAT_018d9b78 != 0 && (cVar8 = FUN_0169ac90(&DAT_018d9b70), cVar8 != '\0')))))) &&
       (iVar25 = FUN_016949d8(DAT_018d9b70), iVar25 != 0)) {
      if (*(uint ******)(DAT_018d9b70 + 0x20) == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018718d0);
      }
      local_118 = *(uint ******)(DAT_018d9b70 + 0x24);
      local_114 = *(uint ******)(DAT_018d9b70 + 0x28);
      local_174 = (uint *****)&local_74;
      local_178 = (uint *****)&local_120;
      local_94 = (uint *****)&DAT_00000001;
      local_98 = (uint *****)&local_178;
      local_110 = (uint *****)0x0;
      local_188 = (uint *****)(param_2[4] + 0x19c);
      local_170 = (uint *****)&DAT_018abb78;
      uStack_6d = (undefined1)((uint)&local_188 >> 0x18);
      local_74 = 0xb15a;
      uStack_72 = 0x56;
      iStack_71 = (int)&local_188 * 0x100;
      local_184 = (uint *****)&DAT_00f5c97c;
      local_120 = *(uint ******)(DAT_018d9b70 + 0x1c);
      local_11c = *(uint ******)(DAT_018d9b70 + 0x20);
      local_90 = (uint *****)(DAT_018d9b70 + 0x1c);
      FUN_00bb9ddc(&local_98);
    }
    uVar63 = (**(code **)(*(int *)(param_2[4] + 0x15c) + 0xc))
                       (*(undefined4 *)(param_2[4] + 0x158),*(undefined1 *)(param_2 + 7));
    FUN_00c6e7e4(&local_120,(int)uVar63,(int)((ulonglong)uVar63 >> 0x20));
    FUN_016dd1aa(&local_178,&local_120,0x58);
    uVar9 = FUN_016dd1aa(puVar47,&local_178,0x58);
    break;
  case 0xe:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x1c)) {
    case 0:
      iVar25 = param_2[9];
      uVar27 = param_2[10];
      goto LAB_00bb8bf4;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018713c8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018713c8);
    }
    goto switchD_00bb6a44_caseD_3;
  case 0xf:
    goto switchD_00bb6704_caseD_f;
  case 0x10:
    goto switchD_00bb6704_caseD_10;
  case 0x11:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xf)) {
    case 0:
      iVar25 = param_2[9];
      uVar27 = param_2[10];
      goto LAB_00bb8e38;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01871840);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01871840);
    case 3:
      uVar63 = *(undefined8 *)(param_2 + 0xd);
    }
    goto LAB_00bb8e60;
  }
  uVar63 = thunk_FUN_016de0ee(uVar9,0x40);
  iVar25 = (int)uVar63 + (int)((ulonglong)uVar63 >> 0x20);
  bVar6 = *(byte *)(iVar25 + 0x38);
  if (bVar6 == 1) {
LAB_00bb8a60:
    bVar6 = ~*(byte *)(iVar25 + 0x30) & 1 | *(char *)(iVar25 + 0x31) != '\0';
  }
  else if (bVar6 != 2) {
    FUN_015e8e6c(iVar25,FUN_00bacf28);
    *(undefined1 *)(iVar25 + 0x38) = 1;
    goto LAB_00bb8a60;
  }
  (**(code **)(param_2[0x1f] + 0xc))(&local_120,param_2[0x1e],param_3);
  uVar9 = (uint)local_120 & 0xff;
  if (uVar9 == 0xd) {
    iVar25 = FUN_016540e8(bVar6 == 2 | bVar6 & 1,puVar47,*param_3);
    if (iVar25 != 0) {
      uVar7 = 0xd;
      *param_1 = 0xd;
      goto LAB_00bb7990;
    }
    uVar9 = 0xd;
  }
  else {
    uStack_72 = local_120._3_1_;
    local_74 = local_120._1_2_;
    local_98 = local_118;
    local_94 = local_114;
    local_90 = local_110;
    local_8c = local_10c;
    unaff_r8 = local_11c;
  }
  uVar33 = (undefined1)uVar9;
  local_bc = local_8c;
  puVar39 = (undefined4 *)param_2[0x1f];
  local_b2 = uStack_72;
  local_b4 = local_74;
  local_c8 = local_98;
  pppppuStack_c4 = local_94;
  pppppuStack_c0 = local_90;
  pcVar28 = (code *)*puVar39;
  uVar27 = param_2[0x1e];
  if (pcVar28 != (code *)0x0) {
    (*pcVar28)(uVar27);
  }
  if (puVar39[1] != 0) {
    thunk_FUN_016d3fb4(uVar27);
  }
  FUN_00a07b4c(puVar47);
  if (uVar9 == 0xd) {
    uVar33 = 10;
LAB_00bb8c68:
    local_9a = local_68._2_1_;
    local_9c = (undefined2)local_68;
    local_b0 = local_188;
    pppppuStack_ac = local_184;
    pppppuStack_a8 = local_180;
    local_a4 = local_17c;
LAB_00bb7928:
    FUN_016af0b0(param_2);
    piVar11 = (int *)*param_2;
    DataMemoryBarrier(0xb);
    do {
      iVar25 = *piVar11;
      bVar53 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar53);
    *piVar11 = iVar25 + -1;
    if (iVar25 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*param_2);
    }
  }
  else {
    local_68 = (uint ****)CONCAT22(CONCAT11(local_68._3_1_,local_b2),local_b4);
    local_188 = local_c8;
    local_184 = pppppuStack_c4;
    local_180 = pppppuStack_c0;
    local_17c = local_bc;
    if (uVar9 != 0xc) goto LAB_00bb8c68;
    *(uint ******)(param_2[4] + 0x198) = unaff_r8;
    uVar27 = *(undefined4 *)(param_2[4] + 0x198);
    iVar25 = *(int *)(param_2[4] + 0x178) + 8;
    param_2[9] = iVar25;
    param_2[10] = uVar27;
    *(undefined1 *)(param_2 + 0x1c) = 0;
LAB_00bb8bf4:
    *(undefined1 *)(param_2 + 0x1b) = 0;
    param_2[0xb] = 1;
    param_2[0xc] = uVar27;
    param_2[0xd] = iVar25 + 0xc;
switchD_00bb6a44_caseD_3:
    pcVar23 = (char *)FUN_007d67b8(param_2 + 0xd,param_3);
    if (pcVar23 == (char *)0x0) {
      *(undefined1 *)(param_2 + 0x1c) = 3;
      *param_1 = 0xd;
      uVar7 = 0xe;
      goto LAB_00bb7990;
    }
    if (*(char *)(param_2 + 0x1b) == '\x03') {
      cVar8 = *(char *)(param_2 + 0x1a);
      bVar53 = cVar8 == '\x03';
      if (bVar53) {
        cVar8 = *(char *)(param_2 + 0x11);
      }
      if (bVar53 && cVar8 == '\x04') {
        FUN_0163c790(param_2 + 0x12);
        if (param_2[0x13] != 0) {
          (**(code **)(param_2[0x13] + 0xc))(param_2[0x14]);
        }
      }
    }
    uVar27 = param_2[0xc];
    *(undefined4 *)(pcVar23 + 0x14) = param_2[0xb];
    *(undefined4 *)(pcVar23 + 0x18) = uVar27;
    if (*pcVar23 == '\0') {
      bVar53 = (bool)hasExclusiveAccess(pcVar23);
      if (!bVar53) goto LAB_00bb8cc0;
      *pcVar23 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_00bb8cc0:
      FUN_01280da8(pcVar23);
    }
    FUN_0128236c(pcVar23);
    FUN_0163af68(pcVar23,1,pcVar23);
    *(undefined1 *)(param_2 + 0x1c) = 1;
    param_2[9] = param_2[4] + 0x1a0;
    param_2[10] = 0xffffffff;
switchD_00bb6704_caseD_f:
    piVar11 = param_2 + 9;
    iVar25 = FUN_00c8101c(piVar11,param_3);
    if (iVar25 == 0) {
      *param_1 = 0xd;
      uVar7 = 0xf;
      goto LAB_00bb7990;
    }
    if (*piVar11 != 0) {
      FUN_00c8204c(*piVar11,param_2[10],1);
    }
    if (*(uint *)(iVar25 + 0x28) < *(uint *)(param_2[4] + 0x198)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_0034ae8c,0x36,&DAT_0186ac58);
    }
    *(uint *)(iVar25 + 0x28) = *(uint *)(param_2[4] + 0x198);
    FUN_00c822ec();
    DataMemoryBarrier(0xb);
    if (DAT_018d8068 == 0) {
      FUN_009b1f58(*(undefined4 *)(param_2[4] + 0x19c),*(undefined4 *)(param_2[4] + 0x198));
    }
    iVar25 = param_2[4];
    FUN_009c4470(piVar11,*(undefined4 *)(iVar25 + 0x1cc),*(undefined4 *)(iVar25 + 0xb8));
    param_2[0x19] = iVar25;
    param_2[0x1a] = piVar11;
    *(undefined2 *)(param_2 + 0x1c) = 0;
switchD_00bb6704_caseD_10:
    uVar62 = FUN_00bb9eb0(param_2 + 0xc,param_3);
    unaff_r8 = (uint *****)(uVar62 >> 0x20);
    if ((uVar62 & 1) != 0) {
      *param_1 = 0xd;
      uVar7 = 0x10;
      goto LAB_00bb7990;
    }
    FUN_00b9f9bc(param_2 + 0xc);
    if (unaff_r8 != (uint *****)0x0) {
      uVar33 = 9;
      if (param_2[9] != 0) {
        thunk_FUN_016d3fb4(param_2[10]);
      }
      goto LAB_00bb7928;
    }
    if (param_2[9] != 0) {
      thunk_FUN_016d3fb4(param_2[10]);
    }
    iVar25 = param_2[4];
    uVar27 = *(undefined4 *)(*(int *)(iVar25 + 400) + 8);
    *(undefined1 *)(param_2 + 0xf) = 0;
    param_2[9] = iVar25;
    param_2[10] = uVar27;
LAB_00bb8e38:
    param_2[0xb] = iVar25;
    param_2[0xc] = uVar27;
    uVar63 = (**(code **)(*(int *)(iVar25 + 0x15c) + 0x14))(*(undefined4 *)(iVar25 + 0x158));
    *(undefined8 *)(param_2 + 0xd) = uVar63;
LAB_00bb8e60:
    uVar62 = (**(code **)((int)((ulonglong)uVar63 >> 0x20) + 0xc))((int)uVar63,param_3);
    unaff_r8 = (uint *****)(uVar62 >> 0x20);
    if ((uVar62 & 1) != 0) {
      *(undefined1 *)(param_2 + 0xf) = 3;
      *param_1 = 0xd;
      uVar7 = 0x11;
      goto LAB_00bb7990;
    }
    puVar47 = (undefined4 *)param_2[0xe];
    uVar27 = param_2[0xd];
    pcVar28 = (code *)*puVar47;
    if (pcVar28 != (code *)0x0) {
      (*pcVar28)(uVar27);
    }
    if (puVar47[1] != 0) {
      thunk_FUN_016d3fb4(uVar27);
    }
    if (unaff_r8 != (uint *****)0x0) {
      *(undefined1 *)(param_2 + 0xf) = 1;
LAB_00bb7924:
      uVar33 = 9;
      goto LAB_00bb7928;
    }
    *(undefined4 *)(*(int *)(param_2[0xb] + 400) + 8) = param_2[0xc];
    DataMemoryBarrier(0xb);
    if (DAT_018d8068 == 0) {
      FUN_009b3424(*(undefined4 *)(param_2[0xb] + 0x19c),param_2[0xc]);
    }
    *(undefined1 *)(param_2 + 0xf) = 1;
    FUN_00ac6da4(param_2);
    uVar33 = 0xc;
  }
  param_1[3] = local_9a;
  *(uint ******)(param_1 + 8) = local_b0;
  *(uint ******)(param_1 + 0xc) = pppppuStack_ac;
  *(uint ******)(param_1 + 0x10) = pppppuStack_a8;
  *(uint ******)(param_1 + 0x14) = local_a4;
  uVar7 = 1;
  *param_1 = uVar33;
  *(undefined2 *)(param_1 + 1) = local_9c;
  *(uint ******)(param_1 + 4) = unaff_r8;
LAB_00bb7990:
  *(undefined1 *)((int)param_2 + 0x1f) = uVar7;
  return;
LAB_00bb846c:
  FUN_00ac8e24(param_2 + 0x1a);
  *(undefined1 *)local_218 = 1;
  goto LAB_00bb7120;
}

