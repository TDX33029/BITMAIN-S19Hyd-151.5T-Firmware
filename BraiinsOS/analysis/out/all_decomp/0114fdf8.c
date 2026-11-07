// FUN_0114fdf8 @ 0114fdf8 size=2188 calls_out=11 calls_in=2
// strings: successstruct Configurationstruct AcknowledgementInvalidValueWriteDepthLimitExceededevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/f2e45444cf1a7616fcedf64afbe898d8191f44f31eed23608ce2310d851ca320/ii-telemetry-1.3.1/src/state_machines/utils.rs:65ii_telemetry::state_machines::utils/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/f2e45444cf1a7616fcedf64afbe898d8191f44f31eed23608ce2310d851ca320/ii-telemetry-1.3.1/src/state_machines/utils.rsa mapstruct ServerIntroduction | miner_config

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffffc8 */

void FUN_0114fdf8(int *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 ******ppppppuVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *****pppppuVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  int unaff_r4;
  uint *puVar15;
  int ******ppppppiVar16;
  uint uVar17;
  undefined4 uVar18;
  int ******ppppppiVar19;
  undefined4 *****pppppuVar20;
  int iVar21;
  undefined4 uVar22;
  uint uVar23;
  int ******ppppppiVar24;
  int iVar25;
  uint *puVar26;
  undefined1 *puVar27;
  uint uVar28;
  uint uVar29;
  int local_64;
  int ***local_60;
  int local_5c;
  int *****local_58;
  int ****local_54;
  int local_50;
  int *****local_4c;
  undefined4 ******local_48;
  undefined4 local_44;
  uint local_40;
  int ******local_38;
  byte local_34;
  byte bStack_33;
  undefined2 uStack_32;
  undefined4 local_30;
  undefined1 *local_2c;
  int *piStack_28;
  
  uVar1 = *param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar1) {
  case 0:
    uVar2 = param_2[0x28];
    local_30._0_2_ = 0;
    local_30._2_2_ = 0;
    local_34 = 1;
    bStack_33 = 0;
    uStack_32 = 0;
    local_38 = (int ******)0x0;
    FUN_01150aa8(&local_38,0,1);
    local_64 = *(int *)(param_2 + 0x14);
    *(undefined1 *)
     (CONCAT22(uStack_32,CONCAT11(bStack_33,local_34)) +
     CONCAT22(local_30._2_2_,(undefined2)local_30)) = uVar2;
    puVar15 = *(uint **)(param_2 + 8);
    local_30 = (int *****)(CONCAT22(local_30._2_2_,(undefined2)local_30) + 1);
    uVar23 = *puVar15;
    local_48 = &local_38;
    if (local_38 == (int ******)local_30) {
      FUN_01150aa8(&local_38,local_30,1);
    }
    *(undefined1 *)(CONCAT22(uStack_32,CONCAT11(bStack_33,local_34)) + (int)local_30) = 0x7b;
    local_30 = (int *****)((int)local_30 + 1);
    puVar26 = puVar15;
    if (local_64 == 0) {
      if (local_38 == (int ******)local_30) {
        FUN_01150aa8(&local_38,local_30,1);
      }
      *(undefined1 *)(CONCAT22(uStack_32,CONCAT11(bStack_33,local_34)) + (int)local_30) = 0x7d;
      local_48 = (undefined4 ******)((int)local_30 + 1);
    }
    else {
      while( true ) {
        puVar26 = puVar26 + 1;
        if ((uVar23 & 0x80808080) != 0x80808080) break;
        uVar23 = *puVar26;
        puVar15 = puVar15 + -0x28;
      }
      uVar28 = uVar23 & 0x80808080 ^ 0x80808080;
      uVar23 = (uint)LZCOUNT(uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 |
                             (uVar28 >> 0x10 & 0xff) << 8 | uVar28 >> 0x18) >> 3;
      FUN_01153820(&local_38,puVar15[uVar23 * -10 + -9],puVar15[uVar23 * -10 + -8]);
      if (local_38 == (int ******)local_30) {
        FUN_01150aa8(&local_38,local_30,1);
      }
      *(undefined1 *)(CONCAT22(uStack_32,CONCAT11(bStack_33,local_34)) + (int)local_30) = 0x3a;
      local_30 = (int *****)((int)local_30 + 1);
      FUN_01153aa0(puVar15 + uVar23 * -10 + -6,&local_48);
      uVar28 = uVar28 - 1 & uVar28;
      while (ppppppuVar6 = local_48, local_64 = local_64 + -1, local_64 != 0) {
        puVar14 = puVar26;
        if (uVar28 == 0) {
          do {
            puVar26 = puVar14 + 1;
            uVar23 = *puVar14;
            puVar15 = puVar15 + -0x28;
            puVar14 = puVar26;
          } while ((uVar23 & 0x80808080) == 0x80808080);
          uVar28 = uVar23 & 0x80808080 ^ 0x80808080;
        }
        uVar23 = (uint)LZCOUNT(uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 |
                               (uVar28 >> 0x10 & 0xff) << 8 | uVar28 >> 0x18) >> 3;
        pppppuVar11 = local_48[2];
        uVar29 = puVar15[uVar23 * -10 + -9];
        uVar17 = puVar15[uVar23 * -10 + -8];
        if (*local_48 == pppppuVar11) {
          FUN_01150aa8(local_48,pppppuVar11,1);
          pppppuVar11 = ppppppuVar6[2];
        }
        *(undefined1 *)((int)ppppppuVar6[1] + (int)pppppuVar11) = 0x2c;
        ppppppuVar6[2] = (undefined4 *****)((int)pppppuVar11 + 1);
        FUN_01153820(local_48,uVar29,uVar17);
        ppppppuVar6 = local_48;
        pppppuVar11 = local_48[2];
        if (*local_48 == pppppuVar11) {
          FUN_01150aa8(local_48,pppppuVar11,1);
          pppppuVar11 = ppppppuVar6[2];
        }
        uVar28 = uVar28 - 1 & uVar28;
        *(undefined1 *)((int)ppppppuVar6[1] + (int)pppppuVar11) = 0x3a;
        ppppppuVar6[2] = (undefined4 *****)((int)pppppuVar11 + 1);
        FUN_01153aa0(puVar15 + uVar23 * -10 + -6,&local_48);
      }
      pppppuVar11 = local_48[2];
      if (*local_48 == pppppuVar11) {
        FUN_01150aa8(local_48,pppppuVar11,1);
        pppppuVar11 = ppppppuVar6[2];
      }
      *(undefined1 *)((int)ppppppuVar6[1] + (int)pppppuVar11) = 0x7d;
      ppppppuVar6[2] = (undefined4 *****)((int)pppppuVar11 + 1);
      local_48 = (undefined4 ******)local_30;
    }
    if ((int *****)0xffffff < local_48) {
      local_38 = (int ******)&local_48;
      local_2c = &LAB_00fac484;
      local_30._0_2_ = 0x75c;
      local_30._2_2_ = 0x5a;
      local_34 = 0xb8;
      bStack_33 = 0x83;
      uStack_32 = 0x78;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00591e7f,&local_38,&DAT_018aba70);
    }
    *param_1 = (int)local_38;
    param_1[1] = CONCAT22(uStack_32,CONCAT11(bStack_33,local_34));
    param_1[2] = (int)local_48;
    param_1[3] = (int)local_48;
    param_1[4] = 0x159e;
    local_30 = (int *****)local_48;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar1) {
    case 0:
      piStack_28 = (int *)(param_2 + 8);
      iVar12 = *(int *)(param_2 + 0xc);
      if (iVar12 == 0) {
        return;
      }
      iVar9 = *(int *)(param_2 + 0x14);
      if (iVar9 != 0) {
        puVar26 = (uint *)*piStack_28;
        puVar15 = puVar26 + 1;
        uVar23 = ~*puVar26 & 0x80808080;
        do {
          puVar14 = puVar15;
          if (uVar23 == 0) {
            do {
              puVar15 = puVar14 + 1;
              uVar23 = *puVar14;
              puVar26 = puVar26 + -0x28;
              puVar14 = puVar15;
            } while ((uVar23 & 0x80808080) == 0x80808080);
            uVar23 = uVar23 & 0x80808080 ^ 0x80808080;
          }
          uVar28 = (uint)LZCOUNT(uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 |
                                 (uVar23 >> 0x10 & 0xff) << 8 | uVar23 >> 0x18) >> 3;
          if (puVar26[uVar28 * -10 + -10] != 0) {
            thunk_FUN_016d3fb4(puVar26[uVar28 * -10 + -9]);
          }
          iVar9 = iVar9 + -1;
          uVar23 = uVar23 - 1 & uVar23;
          FUN_01145300(puVar26 + uVar28 * -10 + -6);
        } while (iVar9 != 0);
      }
      if (iVar12 * 0x29 == -0x2d) {
        return;
      }
      iVar12 = *piStack_28 + iVar12 * -0x28 + -0x28;
      goto LAB_014b47f4;
    case 2:
      goto switchD_0115039c_caseD_2;
    }
switchD_0115039c_caseD_1:
    if (*(int *)(param_2 + 4) == 0) {
switchD_0115039c_caseD_2:
      return;
    }
    iVar12 = *(int *)(param_2 + 8);
LAB_014b47f4:
    if (iVar12 == 0) {
      return;
    }
    iVar9 = FUN_016d3bc8();
    uVar23 = *(byte *)(iVar12 + -3) & 0x1f;
    if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
       (uVar28 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar13 = uVar28 - 0x10, uVar28 == 0)) {
      iVar13 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2) <<
               4;
    }
    uVar28 = (uint)(*(byte *)(iVar12 + -3) >> 5);
    iVar25 = *(int *)(iVar9 + 8) + 0x10;
    iVar21 = iVar13 * uVar23 + iVar13 + -4;
    iVar13 = iVar25 + iVar21;
    if (4 < uVar28) {
      if (uVar28 != 5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar4)();
      }
      uVar28 = *(uint *)(iVar13 + -4);
      if (uVar28 < 5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar4)();
      }
      if (*(char *)(iVar13 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar4)();
      }
    }
    if ((uint)(iVar13 - iVar12) < uVar28) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar4)();
    }
    if (*(char *)(iVar13 - uVar28) != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar4)();
    }
    if (*(char *)(iVar25 + iVar21) != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar4)();
    }
    bVar3 = *(byte *)(iVar9 + 0x14);
    uVar28 = 1 << uVar23;
    *(undefined1 *)(iVar12 + -3) = 0xff;
    *(undefined2 *)(iVar12 + -2) = 0;
    do {
      uVar29 = *(uint *)(iVar9 + 0x10);
      uVar17 = *(uint *)(iVar9 + 0xc) | uVar29;
      if ((uVar28 & uVar17) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar4)();
      }
      if ((uVar29 == 0) || (uVar17 + uVar28 == (2 << (bVar3 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&piStack_28,iVar9,uVar23);
        FUN_016dddc0(&DAT_018ddd48);
        if (unaff_r4 == 0) {
          return;
        }
        puVar10 = (undefined4 *)FUN_016d2bc8();
        uVar18 = *puVar10;
        FUN_016d6ac4(piStack_28,unaff_r4);
        *puVar10 = uVar18;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar9 + 0x10) = uVar28 + uVar29;
        return;
      }
      puVar15 = (uint *)(iVar9 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar15);
        uVar17 = *puVar15;
        if (uVar29 != uVar17) goto LAB_016d409c;
        bVar5 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar5);
      *puVar15 = uVar28 + uVar29;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar29 == uVar17) {
        return;
      }
    } while( true );
  case 1:
    uVar22 = *(undefined4 *)(param_2 + 8);
    local_58 = (int *****)0x0;
    local_60 = (int ***)0x0;
    local_4c = (int *****)((uint)local_4c._1_3_ << 8);
    uVar18 = *(undefined4 *)(param_2 + 0xc);
    local_50 = 0x400;
    local_54 = &local_60;
    local_5c = 1;
    FUN_01147600(&local_38,&local_54,1);
    puVar10 = (undefined4 *)CONCAT22(uStack_32,CONCAT11(bStack_33,local_34));
    ppppppiVar16 = local_38;
    if (local_38 != (int ******)&DAT_00000005) goto LAB_01150600;
    if ((*(char *)((int)puVar10 + 7) == '\x01') &&
       (FUN_011533ec(&local_48,*puVar10,"miner_config",0xc), local_48 != (undefined4 ******)0x2)) {
      local_38 = (int ******)0x0;
      local_34 = (byte)local_48;
      bStack_33 = (byte)((uint)local_48 >> 8);
      uStack_32 = (undefined2)((uint)local_48 >> 0x10);
      local_30._0_2_ = (undefined2)local_44;
      local_30._2_2_ = (undefined2)((uint)local_44 >> 0x10);
      local_2c = (undefined1 *)local_40;
    }
    else {
      FUN_01147294(&local_38,*puVar10,uVar22,uVar18);
      if (local_38 == (int ******)&DAT_00000005) {
        local_48 = (undefined4 ******)local_58;
        if ((int *****)0xffffff < local_58) {
          local_38 = (int ******)&local_48;
          local_2c = &LAB_00fac484;
          local_30._0_2_ = 0x75c;
          local_30._2_2_ = 0x5a;
          local_34 = 0xb8;
          bStack_33 = 0x83;
          uStack_32 = 0x78;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00591e7f,&local_38,&DAT_018aba70);
        }
        iVar12 = 0x1159e;
LAB_011502dc:
        param_1[3] = (int)local_58;
        *param_1 = (int)local_60;
        param_1[1] = local_5c;
        param_1[2] = (int)local_58;
        param_1[4] = iVar12;
        local_48 = (undefined4 ******)local_58;
        local_30 = (int *****)CONCAT22(local_30._2_2_,(undefined2)local_30);
        goto switchD_0115039c_caseD_1;
      }
    }
    puVar10 = (undefined4 *)CONCAT22(uStack_32,CONCAT11(bStack_33,local_34));
    ppppppiVar16 = local_38;
LAB_01150600:
    puVar27 = local_2c;
    uVar8 = local_30._2_2_;
    uVar7 = (undefined2)local_30;
    if (local_60 != (int ***)0x0) {
      thunk_FUN_016d3fb4(local_5c);
    }
    local_34 = (byte)puVar10;
    bStack_33 = (byte)((uint)puVar10 >> 8);
    uStack_32 = (undefined2)((uint)puVar10 >> 0x10);
    local_38 = ppppppiVar16;
    local_30._0_2_ = uVar7;
    local_30._2_2_ = uVar8;
    local_2c = puVar27;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00566c30,0x20,&local_38,&DAT_01888b34,&DAT_01888b04);
  case 2:
    bVar3 = param_2[1];
    local_4c = (int *****)0x0;
    local_54 = (int ****)0x0;
    local_40 = local_40 & 0xffffff00;
    local_44 = 0x400;
    local_48 = (undefined4 ******)&local_54;
    local_50 = 1;
    FUN_01147600(&local_38,&local_48,1);
    ppppppiVar16 = (int ******)CONCAT22(uStack_32,CONCAT11(bStack_33,local_34));
    if (local_38 == (int ******)&DAT_00000005) {
      if ((*(char *)((int)ppppppiVar16 + 7) == '\x01') &&
         (FUN_011533ec(&local_38,*ppppppiVar16,
                       "successstruct Configurationstruct AcknowledgementInvalidValueWriteDepthLimitExceededevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/f2e45444cf1a7616fcedf64afbe898d8191f44f31eed23608ce2310d851ca320/ii-telemetry-1.3.1/src/state_machines/utils.rs:65ii_telemetry::state_machines::utils/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/f2e45444cf1a7616fcedf64afbe898d8191f44f31eed23608ce2310d851ca320/ii-telemetry-1.3.1/src/state_machines/utils.rsa mapstruct ServerIntroduction"
                       ,7), local_38 != (int ******)&SUB_00000002)) {
        ppppppiVar19 = (int ******)CONCAT22(uStack_32,CONCAT11(bStack_33,local_34));
        ppppppiVar16 = local_38;
      }
      else {
        FUN_01153008(&local_38,*ppppppiVar16,bVar3 | 0xffffffc2);
        if ((char)local_38 == '\x04') {
          local_48 = (undefined4 ******)local_4c;
          if (&DAT_01000000 <= local_4c) {
            local_2c = &LAB_00fac484;
            local_30._0_2_ = 0x75c;
            local_30._2_2_ = 0x5a;
            local_34 = 0xb8;
            bStack_33 = 0x83;
            uStack_32 = 0x78;
            local_38 = (int ******)&local_48;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_00591e7f,&local_38,&DAT_018aba70);
          }
          *param_1 = (int)local_54;
          param_1[1] = local_50;
          param_1[2] = (int)local_4c;
          param_1[3] = (int)local_4c;
          param_1[4] = 0x2159e;
          return;
        }
        ppppppiVar16 = (int ******)(undefined4 *****)0x0;
        ppppppiVar19 = local_38;
      }
      ppppppiVar24 = (int ******)(undefined4 *****)0x0;
    }
    else {
      ppppppiVar19 = (int ******)CONCAT22(local_30._2_2_,(undefined2)local_30);
      ppppppiVar24 = local_38;
    }
    if (local_54 != (int ****)0x0) {
      thunk_FUN_016d3fb4(local_50);
    }
    local_34 = (byte)ppppppiVar16;
    bStack_33 = (byte)((uint)ppppppiVar16 >> 8);
    uStack_32 = (undefined2)((uint)ppppppiVar16 >> 0x10);
    local_30._0_2_ = SUB42(ppppppiVar19,0);
    local_30._2_2_ = (undefined2)((uint)ppppppiVar19 >> 0x10);
    local_38 = ppppppiVar24;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00566c30,0x20,&local_38,&DAT_01888b34,&DAT_01888b14);
  }
  local_58 = (int *****)0x0;
  local_60 = (int ***)0x0;
  local_4c = (int *****)((uint)local_4c._1_3_ << 8);
  local_50 = 0x400;
  local_54 = &local_60;
  local_5c = 1;
  FUN_01147600(&local_38,&local_54,2);
  pppppuVar11 = (undefined4 *****)CONCAT22(uStack_32,CONCAT11(bStack_33,local_34));
  if (local_38 == (int ******)&DAT_00000005) {
    uVar1 = param_2[0x10];
    if ((*(char *)((int)pppppuVar11 + 7) == '\x01') &&
       (FUN_011533ec(&local_38,*pppppuVar11,&DAT_00410ff9,7), local_38 != (int ******)&SUB_00000002)
       ) {
      uVar23 = CONCAT22(uStack_32,CONCAT11(bStack_33,local_34));
      puVar27 = (undefined1 *)CONCAT22(local_30._2_2_,(undefined2)local_30);
    }
    else {
      FUN_01151b64(&local_38,*pppppuVar11,uVar1,0);
      if (local_38 == (int ******)&SUB_00000002) {
        if ((*(char *)((int)pppppuVar11 + 7) == '\x01') &&
           (FUN_011533ec(&local_48,*pppppuVar11,&DAT_00411190,7), local_48 != (undefined4 ******)0x2
           )) {
          local_38 = (int ******)0x0;
          local_34 = (byte)local_48;
          bStack_33 = (byte)((uint)local_48 >> 8);
          uStack_32 = (undefined2)((uint)local_48 >> 0x10);
          local_30._0_2_ = (undefined2)local_44;
          local_30._2_2_ = (undefined2)((uint)local_44 >> 0x10);
          local_2c = (undefined1 *)local_40;
        }
        else {
          FUN_01147294(&local_38,*pppppuVar11,*(undefined4 *)(param_2 + 8),
                       *(undefined4 *)(param_2 + 0xc));
          if (local_38 == (int ******)&DAT_00000005) {
            local_48 = (undefined4 ******)local_58;
            if ((int *****)0xffffff < local_58) {
              local_38 = (int ******)&local_48;
              local_2c = &LAB_00fac484;
              local_30._0_2_ = 0x75c;
              local_30._2_2_ = 0x5a;
              local_34 = 0xb8;
              bStack_33 = 0x83;
              uStack_32 = 0x78;
                    /* WARNING: Subroutine does not return */
              FUN_00faa478(&DAT_00591e7f,&local_38,&DAT_018aba70);
            }
            iVar12 = 0x3159e;
            goto LAB_011502dc;
          }
        }
        pppppuVar11 = (undefined4 *****)CONCAT22(uStack_32,CONCAT11(bStack_33,local_34));
        goto LAB_0115066c;
      }
      puVar27 = (undefined1 *)CONCAT22(local_30._2_2_,(undefined2)local_30);
      uVar23 = (uint)local_34 | CONCAT22((undefined2)local_30,uStack_32) << 0x10 |
               (uint)bStack_33 << 8;
    }
    pppppuVar20 = (undefined4 *****)0x0;
    pppppuVar11 = local_38;
  }
  else {
LAB_0115066c:
    uVar23 = CONCAT22(local_30._2_2_,(undefined2)local_30);
    pppppuVar20 = local_38;
    puVar27 = local_2c;
  }
  if (local_60 != (int ***)0x0) {
    thunk_FUN_016d3fb4(local_5c);
  }
  local_34 = (byte)pppppuVar11;
  bStack_33 = (byte)((uint)pppppuVar11 >> 8);
  uStack_32 = (undefined2)((uint)pppppuVar11 >> 0x10);
  local_30._0_2_ = (undefined2)uVar23;
  local_30._2_2_ = (undefined2)(uVar23 >> 0x10);
  local_38 = (int ******)pppppuVar20;
  local_2c = puVar27;
                    /* WARNING: Subroutine does not return */
  FUN_00fb74f8(&DAT_00566c30,0x20,&local_38,&DAT_01888b34,&DAT_01888b24);
}

