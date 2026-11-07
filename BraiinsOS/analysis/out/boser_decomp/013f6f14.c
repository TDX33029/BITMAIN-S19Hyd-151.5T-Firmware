// FUN_013f6f14 @ 013f6f14 size=5552 calls_out=32 calls_in=1
// strings: overflow when adding duration to instant | overflow when adding duration to instant

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013f6f14(int param_1,int param_2,int param_3,undefined4 param_4,short *param_5,
                 short *param_6,short *param_7)

{
  code *pcVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  short *psVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  short *psVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  longlong *plVar17;
  short *psVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  uint *puVar21;
  uint uVar22;
  undefined *puVar23;
  short *psVar24;
  uint uVar25;
  int iVar26;
  undefined4 uVar27;
  int iVar28;
  int *piVar29;
  int *piVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  int iVar34;
  uint uVar35;
  short *psVar36;
  short *psVar37;
  uint uVar38;
  undefined1 uVar39;
  short *psVar40;
  short **ppsVar41;
  undefined1 *puVar42;
  bool bVar43;
  undefined8 uVar44;
  longlong lVar45;
  longlong lVar46;
  short *local_3d0;
  short *local_3b4;
  char *local_390;
  undefined4 local_38c;
  uint *local_368;
  short *local_360;
  short *psStack_35c;
  int local_358;
  undefined4 local_350;
  uint *local_34c;
  short *local_348;
  int *local_344;
  short *local_340;
  short *local_33c;
  short *local_338;
  uint local_334;
  short *local_330;
  short *local_32c;
  uint uStack_328;
  uint local_324;
  short *psStack_320;
  undefined1 *puStack_31c;
  uint uStack_318;
  short local_314;
  ushort local_312;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined1 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  short *local_2e8;
  short *local_2e4;
  short *local_2e0;
  undefined4 local_2dc;
  short *local_2d8;
  short *local_2d4;
  short *local_2d0;
  uint local_2cc;
  undefined4 uStack_2c8;
  short *psStack_2c4;
  undefined1 *puStack_2c0;
  undefined1 auStack_268 [76];
  undefined4 local_21c;
  short *local_218;
  short *local_214;
  short *local_210;
  undefined8 local_208;
  short *local_200;
  short *psStack_1fc;
  short *local_1f8;
  short *psStack_1f4;
  short *local_1f0;
  short *local_1ec;
  short *local_1e8;
  short *local_1e4;
  short *psStack_1e0;
  short *psStack_1dc;
  short *psStack_1d8;
  short *local_1d4;
  short *local_1d0;
  short *psStack_1cc;
  uint local_1c8;
  undefined4 uStack_1c4;
  short *psStack_1c0;
  undefined1 *puStack_1bc;
  short *local_110;
  short *local_10c;
  undefined8 local_108;
  short *local_100 [3];
  short *local_f4 [4];
  short *local_e4;
  uint local_e0;
  undefined4 local_dc;
  short *local_d8;
  undefined1 *local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  short *local_a0;
  undefined4 local_9c;
  short *local_2c;
  
  iVar28 = *(int *)(param_2 + 0x10);
  uVar44 = FUN_013f8694(*(undefined4 *)(iVar28 + 0x90),*(undefined4 *)(iVar28 + 0x94),
                        *(undefined4 *)(iVar28 + 0x98),*(undefined4 *)(iVar28 + 0x9c),param_3);
  uVar22 = (uint)((ulonglong)uVar44 >> 0x20);
  if (((*(uint *)(iVar28 + 8) & 1) == 0) ||
     (*(int *)(iVar28 + 0x10) != 0 || *(int *)(iVar28 + 0x14) != 0)) {
    plVar17 = (longlong *)(iVar28 + 0x28);
    FUN_019b0710(&local_110,plVar17,*(undefined4 *)plVar17,*(undefined4 *)(iVar28 + 0x2c),
                 *(undefined4 *)(iVar28 + 0x30));
    uVar8 = (uint)(ZEXT48(local_110) * 1000000000);
    lVar6 = ZEXT48(local_10c) * 1000000000 + (ZEXT48(local_110) * 1000000000 >> 0x20);
    uVar25 = (uint)lVar6;
    uVar31 = (uint)((ulonglong)lVar6 >> 0x20);
    psVar9 = (short *)(uVar8 + (int)(short *)local_108);
    bVar43 = CARRY4(uVar25,(uint)CARRY4(uVar8,(uint)(short *)local_108));
    psVar18 = (short *)(uVar25 + CARRY4(uVar8,(uint)(short *)local_108));
    psVar12 = (short *)0xfffffffe;
    if (psVar9 < (short *)0xfffffffe) {
      psVar12 = psVar9;
    }
    if (psVar18 != (short *)&DAT_ffffffff) {
      psVar12 = psVar9;
    }
    psStack_35c = (short *)&DAT_ffffffff;
    local_360 = (short *)0xfffffffe;
    if (-(uint)CARRY4(uVar31,(uint)bVar43) < (uint)(uVar31 + bVar43 == 0)) {
      psStack_35c = psVar18;
      local_360 = psVar12;
    }
    uVar25 = *(uint *)(iVar28 + 0x7c) & 0x3f;
    uVar8 = (uint)uVar44 >> uVar25 | uVar22 << (0x20 - uVar25 & 0xff);
    if (-1 < (int)(uVar25 - 0x20)) {
      uVar8 = uVar22 >> (uVar25 - 0x20 & 0xff);
    }
    uVar22 = 0;
    if (*(uint *)(iVar28 + 0x7c) != 0x40) {
      uVar22 = uVar8;
    }
    if (*(uint *)(iVar28 + 100) <= uVar22) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar22,*(uint *)(iVar28 + 100),&DAT_01cf3dd8);
    }
    iVar32 = *(int *)(iVar28 + 0x60);
    uVar10 = FUN_013f0d78();
    local_21c = uVar10;
    puVar11 = (undefined4 *)FUN_0140b1c4();
    uVar2 = *(ushort *)(param_3 + 0x44);
    ppsVar41 = local_100;
    sVar3 = *(short *)(param_3 + 0x48);
    sVar4 = *(short *)(param_3 + 0x46);
    sVar5 = *(short *)(param_3 + 0x4a);
    puVar16 = puVar11;
    do {
      psVar9 = (short *)puVar16[1];
      psVar12 = (short *)((uint)((int)psVar9 + -1) & (uint)uVar44);
      if (psVar9 == (short *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(psVar12,0,&DAT_01cf3570);
      }
      local_110 = (short *)*puVar16;
      local_f4[0] = (short *)CONCAT31(local_f4[0]._1_3_,1);
      local_100[0] = local_110 + (int)psVar12 * 2;
      local_100[2] = (short *)0x0;
      local_10c = psVar9;
      local_108._0_4_ = (short *)&local_21c;
      local_108._4_4_ = psVar12;
      local_100[1] = psVar12;
      while( true ) {
        FUN_013f4d28(&local_350,&local_110);
        piVar30 = local_344;
        if (local_350 != (short *)&DAT_00000001) goto LAB_013f71e0;
        if (local_34c == (uint *)0x0) break;
        piVar29 = (int *)((uint)local_344 & 0xfffffff8);
        if (piVar29 == (int *)0x0) goto LAB_013f71e0;
        iVar34 = *piVar29;
        iVar13 = FUN_013cad2c(iVar34 + 8,param_3);
        if (((((iVar13 != 0) && (*(short *)(iVar34 + 0x50) == sVar3)) &&
             ((sVar3 != 0x24 || (*(short *)(iVar34 + 0x52) == sVar5)))) &&
            ((uint)*(ushort *)(iVar34 + 0x4c) == (uint)uVar2)) &&
           ((1 < uVar2 - 5 || (*(short *)(iVar34 + 0x4e) == sVar4)))) {
          if (((uint)piVar30 & 2) != 0) {
            piVar29 = (int *)0x0;
          }
          if (piVar29 == (int *)0x0) goto LAB_013f71e0;
          local_368 = (uint *)0x0;
          puVar42 = *(undefined1 **)(iVar28 + 0x48);
          puVar19 = *(undefined1 **)(iVar28 + 0x58);
          uVar8 = *(uint *)(iVar28 + 0xe0);
          uVar25 = *(uint *)(iVar28 + 0xe4);
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
          psVar12 = *(short **)(*(int *)(piVar29[1] + 0x80) + 0x28);
          psVar9 = *(short **)(*(int *)(piVar29[1] + 0x80) + 0x2c);
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
          if ((psVar12 != (short *)0xffffffff || psVar9 != (short *)&DAT_ffffffff) &&
             (psVar9 < psStack_35c ||
              (uint)((int)psStack_35c - (int)psVar9) < (uint)(psVar12 <= local_360)))
          goto LAB_013f71e4;
          uVar31 = *(uint *)(*(int *)(piVar29[1] + 0x80) + 0x20);
          uVar38 = *(uint *)(*(int *)(piVar29[1] + 0x80) + 0x24);
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
          if (uVar31 != 0xffffffff || uVar38 != 0xffffffff) {
            if ((uVar8 != 0xffffffff || uVar25 != 0xffffffff) &&
               (uVar38 <= uVar25 && (uint)(uVar8 <= uVar31) <= uVar38 - uVar25)) goto LAB_013f71e4;
            if (puVar42 != &DAT_3b9aca00) {
              uVar7 = (ulonglong)*(uint *)(iVar28 + 0x40) * 1000000000;
              uVar15 = (uint)uVar7;
              lVar6 = (ulonglong)*(uint *)(iVar28 + 0x44) * 1000000000 + (uVar7 >> 0x20);
              uVar35 = (uint)lVar6;
              uVar33 = (uint)((ulonglong)lVar6 >> 0x20);
              puVar20 = puVar42 + uVar15;
              bVar43 = CARRY4(uVar35,(uint)CARRY4(uVar15,(uint)puVar42));
              uVar35 = uVar35 + CARRY4(uVar15,(uint)puVar42);
              puVar42 = (undefined1 *)0xfffffffe;
              if (puVar20 < (undefined1 *)0xfffffffe) {
                puVar42 = puVar20;
              }
              if (uVar35 != 0xffffffff) {
                puVar42 = puVar20;
              }
              local_368 = (uint *)0x0;
              uVar15 = 0xffffffff;
              puVar20 = (undefined1 *)0xfffffffe;
              if (-(uint)CARRY4(uVar33,(uint)bVar43) < (uint)(uVar33 + bVar43 == 0)) {
                uVar15 = uVar35;
                puVar20 = puVar42;
              }
              psVar9 = (short *)(puVar20 + uVar31);
              psVar12 = (short *)(uVar38 + uVar15 + (uint)CARRY4(uVar31,(uint)puVar20));
              if (CARRY4(uVar38,uVar15) ||
                  CARRY4(uVar38 + uVar15,(uint)CARRY4(uVar31,(uint)puVar20))) {
                psVar12 = (short *)&DAT_ffffffff;
                psVar9 = (short *)0xffffffff;
              }
              psVar18 = (short *)0xfffffffe;
              if (psVar9 < (short *)0xfffffffe) {
                psVar18 = psVar9;
              }
              if (psVar12 == (short *)&DAT_ffffffff) {
                psVar9 = psVar18;
              }
              if (psVar12 < psStack_35c ||
                  (uint)((int)psStack_35c - (int)psVar12) < (uint)(psVar9 <= local_360))
              goto LAB_013f71e4;
            }
          }
          uVar31 = *(uint *)(*(int *)(piVar29[1] + 0x80) + 0x18);
          uVar38 = *(uint *)(*(int *)(piVar29[1] + 0x80) + 0x1c);
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
          if (uVar31 != 0xffffffff || uVar38 != 0xffffffff) {
            if ((uVar8 != 0xffffffff || uVar25 != 0xffffffff) &&
               (local_368 = (uint *)0x0,
               uVar38 <= uVar25 && (uint)(uVar8 <= uVar31) <= uVar38 - uVar25)) goto LAB_013f71e4;
            if (puVar19 != &DAT_3b9aca00) {
              uVar7 = (ulonglong)*(uint *)(iVar28 + 0x50) * 1000000000;
              uVar8 = (uint)uVar7;
              lVar6 = (ulonglong)*(uint *)(iVar28 + 0x54) * 1000000000 + (uVar7 >> 0x20);
              uVar25 = (uint)lVar6;
              uVar15 = (uint)((ulonglong)lVar6 >> 0x20);
              puVar42 = puVar19 + uVar8;
              bVar43 = CARRY4(uVar25,(uint)CARRY4(uVar8,(uint)puVar19));
              uVar25 = uVar25 + CARRY4(uVar8,(uint)puVar19);
              puVar19 = (undefined1 *)0xfffffffe;
              if (puVar42 < (undefined1 *)0xfffffffe) {
                puVar19 = puVar42;
              }
              if (uVar25 != 0xffffffff) {
                puVar19 = puVar42;
              }
              uVar8 = 0xffffffff;
              puVar42 = (undefined1 *)0xfffffffe;
              if (-(uint)CARRY4(uVar15,(uint)bVar43) < (uint)(uVar15 + bVar43 == 0)) {
                uVar8 = uVar25;
                puVar42 = puVar19;
              }
              psVar9 = (short *)(puVar42 + uVar31);
              psVar12 = (short *)(uVar38 + uVar8 + (uint)CARRY4(uVar31,(uint)puVar42));
              local_368 = (uint *)0x0;
              if (CARRY4(uVar38,uVar8) || CARRY4(uVar38 + uVar8,(uint)CARRY4(uVar31,(uint)puVar42)))
              {
                psVar12 = (short *)&DAT_ffffffff;
                psVar9 = (short *)0xffffffff;
              }
              psVar18 = (short *)0xfffffffe;
              if (psVar9 < (short *)0xfffffffe) {
                psVar18 = psVar9;
              }
              if (psVar12 == (short *)&DAT_ffffffff) {
                psVar9 = psVar18;
              }
              if (psVar12 < psStack_35c ||
                  (uint)((int)psStack_35c - (int)psVar12) < (uint)(psVar9 <= local_360))
              goto LAB_013f71e4;
            }
          }
          iVar13 = *(int *)(param_2 + 0x10);
          if ((*(int *)(iVar13 + 0x110) == 0) ||
             (DataMemoryBarrier(0xb), *(char *)(iVar13 + 0x134) != '\0')) goto LAB_013f843c;
          psVar12 = *(short **)(*(int *)(piVar29[1] + 0x80) + 0x20);
          psVar9 = *(short **)(*(int *)(piVar29[1] + 0x80) + 0x24);
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
          if (psVar12 == (short *)&DAT_ffffffff && psVar9 == (short *)&DAT_ffffffff)
          goto LAB_013f843c;
          iVar34 = *piVar29;
          iVar26 = piVar29[1];
          local_33c = *(short **)(iVar13 + 0x114);
          local_350 = (short *)&DAT_80000000;
          local_334 = local_334 & 0xffffff00;
          local_338 = (short *)0x0;
          local_340 = (short *)&DAT_01cf3af8;
          local_344 = (int *)(iVar13 + 0x110);
          goto LAB_013f782c;
        }
      }
      puVar14 = (undefined4 *)
                FUN_013f57f0(puVar16,&local_21c,*(undefined4 *)(iVar28 + 0x68),
                             *(undefined4 *)(iVar28 + 0x6c),*(undefined4 *)(iVar28 + 0x70),
                             *(undefined4 *)(iVar28 + 0x74),0);
      if (puVar14 != (undefined4 *)0x0) {
        puVar16 = puVar14;
      }
    } while( true );
  }
  goto LAB_013f7ff4;
LAB_013f782c:
  FUN_01408d94(&local_110,&local_350);
  psVar18 = local_f4[1];
  if (local_110 == (short *)&DAT_80000000) goto LAB_013f842c;
  local_208._0_4_ = local_100[0];
  local_208._4_4_ = local_100[1];
  local_200 = local_100[2];
  psStack_1fc = local_f4[0];
  local_218 = local_f4[2];
  local_214 = local_f4[3];
  local_210 = local_e4;
  FUN_019bb7e0(local_110,local_10c);
  if (psVar18 == (short *)&DAT_80000000) goto LAB_013f842c;
  local_110 = (short *)local_208;
  local_10c = local_208._4_4_;
  local_108._0_4_ = local_200;
  local_108._4_4_ = psStack_1fc;
  local_100[0] = psVar18;
  local_100[1] = local_218;
  local_100[2] = local_214;
  local_f4[0] = local_210;
  if ((psVar9 < psStack_1fc || (uint)((int)psStack_1fc - (int)psVar9) < (uint)(psVar12 <= local_200)
      ) && (iVar13 = (**(code **)(local_208._4_4_ + 10))
                               ((undefined1 *)
                                ((int)(short *)local_208 +
                                (*(int *)(local_208._4_4_ + 4) - 1U & 0xfffffff8) + 8),iVar34 + 8,
                                iVar26 + 8), iVar13 != 0)) {
    FUN_01406d64(&local_110);
    if (local_350 != (short *)&DAT_80000000) {
      FUN_0072151c(&local_350);
    }
LAB_013f71e0:
    local_368 = (uint *)0x0;
    goto LAB_013f71e4;
  }
  FUN_01406d64(&local_110);
  goto LAB_013f782c;
code_r0x013f7bec:
  psVar24 = (short *)((int)psVar24 + 1);
  ppsVar41 = ppsVar41 + 4;
  psVar37 = (short *)&DAT_ffffffff;
  psVar40 = (short *)&DAT_3b9aca00;
  if (psVar24 == (short *)&SUB_00000004) goto LAB_013f7d84;
  goto LAB_013f7be0;
LAB_013f842c:
  if (local_350 != (short *)&DAT_80000000) {
    FUN_0072151c(&local_350);
  }
LAB_013f843c:
  local_368 = (uint *)piVar29[1];
  do {
    uVar8 = *local_368;
    bVar43 = (bool)hasExclusiveAccess(local_368);
  } while (!bVar43);
  *local_368 = uVar8 + 1;
  if (0x7fffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_0197a954();
  }
LAB_013f71e4:
  FUN_0140b280(iVar32 + uVar22 * 8,uVar10,puVar11,puVar16);
  FUN_013f0f2c(uVar10);
  if (local_368 == (uint *)0x0) {
    local_110 = (short *)CONCAT31(local_110._1_3_,1);
    local_100[0] = local_360;
    local_100[1] = psStack_35c;
    local_108 = uVar44;
    FUN_013f3d3c(param_2,&local_110,local_360,psStack_35c);
  }
  else {
    piVar30 = *(int **)(iVar28 + 0x38);
    if (piVar30 != (int *)0x0) {
      iVar32 = *(int *)(iVar28 + 0x3c);
      do {
        iVar13 = *piVar30;
        bVar43 = (bool)hasExclusiveAccess(piVar30);
      } while (!bVar43);
      *piVar30 = iVar13 + 1;
      if (iVar13 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x13f84d4);
        (*pcVar1)();
      }
      psVar12 = *(short **)(local_368[0x20] + 0x20);
      psVar9 = *(short **)(local_368[0x20] + 0x24);
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      if (psVar12 == (short *)0xffffffff && psVar9 == (short *)&DAT_ffffffff) {
        puVar23 = &UNK_01cf34f0;
        local_390 = &DAT_00475ca9;
        local_38c = 0x18;
      }
      else {
        lVar45 = FUN_01bf0ff0(psVar12,psVar9,&DAT_3b9aca00,0);
        uVar22 = *(uint *)(iVar28 + 0x2c);
        lVar6 = *plVar17;
        uVar8 = (uint)((ulonglong)(lVar45 + *plVar17) >> 0x20);
        if (psStack_35c <= psVar9 &&
            (uint)(psVar12 <= local_360) <= (uint)((int)psStack_35c - (int)psVar9)) {
          local_360 = psVar12;
          psStack_35c = psVar9;
        }
        puVar23 = &DAT_01d281d4;
        local_390 = "overflow when adding duration to instant";
        if (((int)((uVar22 ^ uVar8) & ~(uVar22 ^ (uint)((ulonglong)lVar45 >> 0x20))) < 0) ||
           ((iVar13 = *(int *)(iVar28 + 0x30),
            &DAT_3b9aca00 <= (undefined1 *)((int)psVar12 + iVar13 + (int)lVar45 * -1000000000) &&
            ((int)((uVar8 ^ uVar8 + (0xfffffffe < (uint)(lVar45 + *plVar17))) & ~uVar8) < 0)))) {
          local_38c = 0x28;
        }
        else {
          local_38c = 0x28;
          psVar12 = (short *)&DAT_3b9aca00;
          lVar46 = FUN_01bf0ff0(local_360,psStack_35c,&DAT_3b9aca00,0);
          lVar45 = lVar46 + lVar6;
          uVar8 = (uint)((ulonglong)lVar45 >> 0x20);
          if (-1 < (int)((uVar22 ^ uVar8) & ~(uVar22 ^ (uint)((ulonglong)lVar46 >> 0x20)))) {
            psVar9 = *(short **)(iVar28 + 0x44);
            puVar42 = *(undefined1 **)(iVar28 + 0x48);
            puVar19 = *(undefined1 **)(iVar28 + 0x58);
            uVar25 = local_368[0x20];
            iVar34 = *(int *)(uVar25 + 0x10);
            psVar18 = (short *)((int)local_360 + iVar13 + (int)lVar46 * -1000000000);
            if (psVar18 < &DAT_3b9aca00) {
LAB_013f7910:
              local_358 = (int)((ulonglong)lVar45 >> 0x20);
              local_100[2] = *(short **)(uVar25 + 0x28);
              local_f4[0] = *(short **)(uVar25 + 0x2c);
              ClearExclusiveLocal();
              DataMemoryBarrier(0xb);
              if (puVar42 == &DAT_3b9aca00) {
                local_3b4 = (short *)0x0;
                local_d8 = psVar18;
              }
              else {
                uVar8 = *(uint *)(local_368[0x20] + 0x20);
                uVar25 = *(uint *)(local_368[0x20] + 0x24);
                ClearExclusiveLocal();
                DataMemoryBarrier(0xb);
                local_d8 = (short *)(uVar8 ^ 0xffffffff);
                if (local_d8 == (short *)0x0 && uVar25 == 0xffffffff) {
                  local_3b4 = (short *)0x0;
                }
                else {
                  uVar7 = (ulonglong)*(uint *)(iVar28 + 0x40) * 1000000000;
                  uVar15 = (uint)uVar7;
                  lVar46 = ZEXT48(psVar9) * 1000000000 + (uVar7 >> 0x20);
                  uVar31 = (uint)lVar46;
                  uVar38 = (uint)((ulonglong)lVar46 >> 0x20);
                  psVar9 = (short *)(puVar42 + uVar15);
                  bVar43 = CARRY4(uVar31,(uint)CARRY4(uVar15,(uint)puVar42));
                  uVar31 = uVar31 + CARRY4(uVar15,(uint)puVar42);
                  psVar12 = (short *)0xfffffffe;
                  if (psVar9 < (short *)0xfffffffe) {
                    psVar12 = psVar9;
                  }
                  if (uVar31 != 0xffffffff) {
                    psVar12 = psVar9;
                  }
                  uVar15 = 0xffffffff;
                  psVar24 = (short *)0xfffffffe;
                  if (-(uint)CARRY4(uVar38,(uint)bVar43) < (uint)(uVar38 + bVar43 == 0)) {
                    uVar15 = uVar31;
                    psVar24 = psVar12;
                  }
                  psVar9 = (short *)(uVar8 + (int)psVar24);
                  local_3d0 = (short *)(uVar25 + uVar15 + (uint)CARRY4(uVar8,(uint)psVar24));
                  if (CARRY4(uVar25,uVar15) ||
                      CARRY4(uVar25 + uVar15,(uint)CARRY4(uVar8,(uint)psVar24))) {
                    local_3d0 = (short *)&DAT_ffffffff;
                    psVar9 = (short *)&DAT_ffffffff;
                  }
                  psVar24 = (short *)0xfffffffe;
                  if (psVar9 < (short *)0xfffffffe) {
                    psVar24 = psVar9;
                  }
                  local_d8 = (short *)0xfffffffe;
                  if (local_3d0 == (short *)&DAT_ffffffff) {
                    psVar9 = psVar24;
                  }
                  local_3b4 = (short *)&DAT_00000001;
                }
              }
              local_e0 = 0;
              if (puVar19 != &DAT_3b9aca00) {
                uVar8 = *(uint *)(local_368[0x20] + 0x18);
                uVar25 = *(uint *)(local_368[0x20] + 0x1c);
                ClearExclusiveLocal();
                DataMemoryBarrier(0xb);
                local_d8 = (short *)0x0;
                if (uVar8 != 0xffffffff || uVar25 != 0xffffffff) {
                  uVar7 = (ulonglong)*(uint *)(iVar28 + 0x50) * 1000000000;
                  uVar31 = (uint)uVar7;
                  lVar46 = (ulonglong)*(uint *)(iVar28 + 0x54) * 1000000000 + (uVar7 >> 0x20);
                  uVar38 = (uint)lVar46;
                  uVar15 = (uint)((ulonglong)lVar46 >> 0x20);
                  puVar42 = puVar19 + uVar31;
                  bVar43 = CARRY4(uVar38,(uint)CARRY4(uVar31,(uint)puVar19));
                  psVar24 = (short *)(uVar38 + CARRY4(uVar31,(uint)puVar19));
                  puVar19 = (undefined1 *)0xfffffffe;
                  if (puVar42 < (undefined1 *)0xfffffffe) {
                    puVar19 = puVar42;
                  }
                  if (psVar24 != (short *)&DAT_ffffffff) {
                    puVar19 = puVar42;
                  }
                  local_e0 = 1;
                  puVar42 = (undefined1 *)0xfffffffe;
                  psVar12 = (short *)&DAT_ffffffff;
                  if (-(uint)CARRY4(uVar15,(uint)bVar43) < (uint)(uVar15 + bVar43 == 0)) {
                    puVar42 = puVar19;
                    psVar12 = psVar24;
                  }
                  local_d8 = (short *)(puVar42 + uVar8);
                  puVar19 = (undefined1 *)((int)psVar12 + CARRY4(uVar8,(uint)puVar42) + uVar25);
                  if (CARRY4(uVar25,(uint)psVar12) ||
                      CARRY4((uint)(uVar25 + (int)psVar12),(uint)CARRY4(uVar8,(uint)puVar42))) {
                    puVar19 = (undefined1 *)0xffffffff;
                    local_d8 = (short *)&DAT_ffffffff;
                  }
                  psVar24 = (short *)0xfffffffe;
                  if (local_d8 < (short *)0xfffffffe) {
                    psVar24 = local_d8;
                  }
                  if (puVar19 == (undefined1 *)0xffffffff) {
                    local_d8 = psVar24;
                  }
                }
              }
              local_c0 = 2;
              local_d0 = 2;
              local_dc = 0;
              local_100[0] = (short *)(uint)(local_100[2] != (short *)&DAT_ffffffff ||
                                            local_f4[0] != (short *)&DAT_ffffffff);
              local_d4 = puVar19;
              local_100[1] = (short *)0x0;
              local_f4[1] = local_3b4;
              local_f4[2] = (short *)0x0;
              local_e4 = local_3d0;
              local_108._4_4_ = (short *)&DAT_00000003;
              local_f4[3] = psVar9;
              local_bc = 0;
              local_cc = 0;
              psVar24 = (short *)&DAT_00000001;
LAB_013f7be0:
              if (((uint)*ppsVar41 & 1) == 0) goto code_r0x013f7bec;
              psVar12 = ppsVar41[3];
              local_108._0_4_ = psVar24;
              psVar37 = ppsVar41[2];
              local_34c = (uint *)0x3;
              local_344 = (int *)0x0;
              local_338 = local_3b4;
              local_334 = 0;
              local_330 = psVar9;
              local_32c = local_3d0;
              uStack_328 = local_e0;
              local_324 = 0;
              psStack_320 = local_d8;
              puStack_31c = puVar19;
              if (psVar24 != (short *)&DAT_00000003) {
                psVar9 = psVar24;
                puVar21 = &local_350 + (int)psVar24 * 4;
                do {
                  if ((puVar21[2] & 1) != 0) {
                    psVar40 = (short *)puVar21[4];
                    psVar36 = (short *)puVar21[5];
                    if (psVar36 < psVar12 ||
                        (uint)((int)psVar12 - (int)psVar36) < (uint)(psVar40 <= psVar37)) {
                      psVar12 = psVar36;
                      psVar37 = psVar40;
                    }
                  }
                  psVar9 = (short *)((int)psVar9 + 1);
                  puVar21 = puVar21 + 4;
                } while (psVar9 != (short *)&DAT_00000003);
              }
              local_350 = psVar24;
              local_348 = local_100[0];
              local_340 = local_100[2];
              local_33c = local_f4[0];
              lVar46 = FUN_01bf0ff0(psVar37,psVar12,&DAT_3b9aca00,0);
              lVar6 = lVar46 + lVar6;
              uVar8 = (uint)((ulonglong)lVar6 >> 0x20);
              if ((int)((uVar22 ^ uVar8) & ~(uVar22 ^ (uint)((ulonglong)lVar46 >> 0x20))) < 0)
              goto LAB_013f7474;
              psVar37 = (short *)((int)psVar37 + iVar13 + (int)lVar46 * -1000000000);
              puVar23 = &DAT_01d281d4;
              if (&DAT_3b9aca00 <= psVar37) {
                lVar6 = lVar6 + 1;
                if ((int)((uVar8 ^ (uint)((ulonglong)lVar6 >> 0x20)) & ~uVar8) < 0)
                goto LAB_013f7d04;
                psVar37 = psVar37 + -500000000;
              }
              local_34c = (uint *)local_358;
              local_350 = (short *)lVar45;
              local_348 = psVar18;
              local_200 = psVar37;
              local_208 = lVar6;
              FUN_019ac248(&local_110,&local_208,&local_350);
              psVar37 = (short *)local_108;
              psVar12 = local_108._4_4_;
              psVar40 = local_100[0];
              if (((uint)local_110 & 1) != 0) {
                psVar40 = (short *)&DAT_3b9aca00;
              }
LAB_013f7d84:
              (**(code **)(iVar32 + 0x10))
                        (&local_110,(int)piVar30 + (*(int *)(iVar32 + 8) - 1U & 0xfffffff8) + 8,
                         iVar34 + 8,local_368 + 2,lVar45,psVar18);
              if (psVar40 == (short *)&DAT_3b9aca00 || (short *)local_108 == (short *)&DAT_3b9aca00)
              {
                uVar39 = SUB41(psVar40,0);
                if (psVar40 == (short *)&DAT_3b9aca00) {
                  uVar39 = 0;
                }
                if (psVar40 != (short *)&DAT_3b9aca00 ||
                    (short *)local_108 != (short *)&DAT_3b9aca00) {
                  puVar19 = (undefined1 *)0xffffffff;
                  puVar42 = (undefined1 *)0xffffffff;
                  if ((short *)local_108 != (short *)&DAT_3b9aca00) goto LAB_013f7e78;
                  goto LAB_013f7f1c;
                }
              }
              else if (((short *)local_108 != psVar40) ||
                      (uVar39 = 0, local_110 != psVar37 || local_10c != psVar12)) {
LAB_013f7e78:
                uVar8 = (uint)(ZEXT48(local_110) * 1000000000);
                lVar6 = ZEXT48(local_10c) * 1000000000 + (ZEXT48(local_110) * 1000000000 >> 0x20);
                uVar22 = (uint)lVar6;
                uVar25 = (uint)((ulonglong)lVar6 >> 0x20);
                puVar42 = (undefined1 *)(uVar8 + (int)(short *)local_108);
                bVar43 = CARRY4(uVar22,(uint)CARRY4(uVar8,(uint)(short *)local_108));
                uVar22 = uVar22 + CARRY4(uVar8,(uint)(short *)local_108);
                puVar19 = (undefined1 *)0xfffffffe;
                if (puVar42 < (undefined1 *)0xfffffffe) {
                  puVar19 = puVar42;
                }
                if (uVar22 != 0xffffffff) {
                  puVar19 = puVar42;
                }
                uVar8 = 0xffffffff;
                puVar20 = (undefined1 *)0xfffffffe;
                if (-(uint)CARRY4(uVar25,(uint)bVar43) < (uint)(uVar25 + bVar43 == 0)) {
                  uVar8 = uVar22;
                  puVar20 = puVar19;
                }
                puVar42 = (undefined1 *)((int)local_360 + (int)puVar20);
                puVar19 = (undefined1 *)
                          ((int)psStack_35c + CARRY4((uint)local_360,(uint)puVar20) + uVar8);
                if (CARRY4((uint)psStack_35c,uVar8) ||
                    CARRY4((uint)((int)psStack_35c + uVar8),
                           (uint)CARRY4((uint)local_360,(uint)puVar20))) {
                  puVar19 = (undefined1 *)0xffffffff;
                  puVar42 = (undefined1 *)0xffffffff;
                }
                puVar20 = (undefined1 *)0xfffffffe;
                if (puVar42 < (undefined1 *)0xfffffffe) {
                  puVar20 = puVar42;
                }
                if (puVar19 == (undefined1 *)0xffffffff) {
                  puVar42 = puVar20;
                }
LAB_013f7f1c:
                uVar22 = local_368[0x20];
                puVar16 = (undefined4 *)(uVar22 + 0x28);
                DataMemoryBarrier(0xb);
                do {
                  bVar43 = (bool)hasExclusiveAccess(puVar16);
                } while (!bVar43);
                *puVar16 = puVar42;
                *(undefined1 **)(uVar22 + 0x2c) = puVar19;
                uVar39 = 1;
              }
              DataMemoryBarrier(0xb);
              do {
                iVar28 = *piVar30;
                bVar43 = (bool)hasExclusiveAccess(piVar30);
              } while (!bVar43);
              *piVar30 = iVar28 + -1;
              if (iVar28 == 1) {
                DataMemoryBarrier(0xb);
                FUN_018531c0(piVar30,iVar32);
              }
              goto LAB_013f7f80;
            }
            lVar45 = lVar45 + 1;
            if (-1 < (int)((uVar8 ^ (uint)((ulonglong)lVar45 >> 0x20)) & ~uVar8)) {
              psVar18 = psVar18 + -500000000;
              goto LAB_013f7910;
            }
          }
LAB_013f7474:
          puVar23 = &DAT_01d281d4;
        }
      }
LAB_013f7d04:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(local_390,local_38c,puVar23);
    }
    uVar39 = 0;
LAB_013f7f80:
    uVar22 = local_368[0x20];
    DataMemoryBarrier(0xb);
    puVar16 = (undefined4 *)(uVar22 + 0x18);
    do {
      uVar10 = *puVar16;
      uVar27 = *(undefined4 *)(uVar22 + 0x1c);
      bVar43 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar43);
    *puVar16 = local_360;
    *(short **)(uVar22 + 0x1c) = psStack_35c;
    FUN_013f1684(&local_110,local_368 + 2,uVar10,uVar27);
    local_34c = local_368;
    local_350 = (short *)((uint)CONCAT21(local_350._2_2_,uVar39) << 8);
    psVar12 = (short *)&local_350;
    local_340 = local_360;
    local_33c = psStack_35c;
    FUN_013f3d3c(param_2,psVar12,local_360,psStack_35c);
    FUN_01bed4e2(&local_1f8,&local_110,0x70);
    if (local_a0 != (short *)&DAT_3b9aca00) {
      FUN_01bed4e2(&local_2d8,&local_1f8,0x70);
      FUN_01bed4e2(psVar12,&local_2d8,0x70);
      psVar18 = local_33c;
      psVar9 = local_340;
      local_2dc = local_9c;
      local_2e0 = local_a0;
      bVar43 = (int)local_2e4 - (int)((int)param_6 + (uint)(local_2e8 < param_5)) < 0 ==
               (SBORROW4((int)local_2e4,(int)param_6) !=
               SBORROW4((int)local_2e4 - (int)param_6,(uint)(local_2e8 < param_5)));
      if (param_5 == local_2e8 && param_6 == local_2e4) {
        bVar43 = param_7 <= local_a0;
      }
      if (bVar43) {
        if (local_348 == (short *)&DAT_3b9aca00) {
          psVar18 = (short *)FUN_013d4d7c();
          FUN_013e8704(&local_110,local_350);
          FUN_01bed4e2(psVar18,&local_110,0x44);
          psVar9 = (short *)&DAT_3b9aca00;
          psVar24 = param_6;
        }
        else {
          if (local_33c == (short *)0x0) {
            psVar18 = (short *)0x0;
            local_208._4_4_ = (short *)&SUB_00000004;
            local_208._0_4_ = (short *)0x0;
          }
          else {
            iVar28 = (int)local_33c * 0xe8;
            psVar12 = (short *)FUN_01298504(iVar28,4);
            if (psVar12 == (short *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00664620(4,iVar28);
            }
            psVar9 = psVar9 + 4;
            psVar24 = (short *)0x0;
            local_200 = (short *)0x0;
            local_208._0_4_ = psVar18;
            local_208._4_4_ = psVar12;
            do {
              FUN_01401ab8(&local_110,psVar9);
              local_2d8 = param_5;
              local_2d0 = param_7;
              local_2d4 = param_6;
              FUN_019ac248(&local_1f8,&local_2e8,&local_2d8);
              local_2c = local_1f0;
              if (((uint)local_1f8 & 1) != 0) {
                local_2c = (short *)0x0;
              }
              FUN_01bed4e2(&local_1f8,&local_110,0xe8);
              FUN_01bed4e2(psVar12,&local_1f8,0xe8);
              psVar24 = (short *)((int)psVar24 + 1);
              psVar12 = psVar12 + 0x74;
              psVar9 = psVar9 + 0x74;
            } while (psVar18 != psVar24);
          }
          local_218 = (short *)local_208;
          local_214 = local_208._4_4_;
          bVar43 = (short)local_338 != 1;
          local_210 = psVar18;
          local_200 = psVar18;
          if (bVar43) {
            puVar21 = (uint *)((uint)&local_110 | 4);
            *puVar21 = local_334;
            puVar21[1] = (uint)local_330;
            puVar21[2] = (uint)local_32c;
            puVar21[3] = uStack_328;
            puVar21[4] = local_324;
            puVar21[5] = (uint)psStack_320;
            puVar21[6] = (uint)puStack_31c;
            puVar21[7] = uStack_318;
            local_110 = (short *)((uint)local_338 & 0xffff0000);
          }
          else {
            FUN_015e8ad4((uint)&local_110 | 4,local_330,local_32c);
          }
          local_110 = (short *)CONCAT22(local_110._2_2_,(ushort)!bVar43);
          if (local_314 != 1) {
            puVar16 = (undefined4 *)((uint)&local_2d8 | 4);
            *puVar16 = local_310;
            puVar16[1] = local_30c;
            puVar16[2] = local_308;
            puVar16[3] = uStack_304;
            puVar16[4] = uStack_300;
            puVar16[5] = uStack_2fc;
            local_2d8 = (short *)((uint)local_312 << 0x10);
          }
          else {
            FUN_015e8ad4((uint)&local_2d8 | 4,local_30c,local_308);
          }
          psVar18 = local_214;
          psVar9 = local_218;
          local_2d8 = (short *)CONCAT22(local_2d8._2_2_,(ushort)(local_314 == 1));
          local_1f8 = local_110;
          psStack_1f4 = local_10c;
          local_1f0 = (short *)local_108;
          local_1ec = local_108._4_4_;
          local_1e8 = local_100[0];
          local_1e4 = local_100[1];
          psStack_1e0 = local_100[2];
          psStack_1dc = local_f4[0];
          psStack_1d8 = local_f4[1];
          local_1d4 = local_2d8;
          local_1d0 = local_2d4;
          psStack_1cc = local_2d0;
          local_1c8 = local_2cc;
          uStack_1c4 = uStack_2c8;
          psStack_1c0 = psStack_2c4;
          puStack_1bc = puStack_2c0;
          local_f4[2] = local_2d8;
          local_f4[3] = local_2d4;
          local_e4 = local_2d0;
          local_e0 = local_2cc;
          local_dc = uStack_2c8;
          local_d8 = psStack_2c4;
          local_d4 = puStack_2c0;
          iVar28 = (int)local_210 * 0xe8;
          local_c8 = local_2f0;
          local_d0 = CONCAT31(local_d0._1_3_,local_2f8);
          local_cc = local_2f4;
          uVar44 = FUN_013cf100(iVar28);
          psVar12 = (short *)((ulonglong)uVar44 >> 0x20);
          psVar24 = (short *)uVar44;
          FUN_01bed4e2(psVar24 + 4,psVar18,iVar28);
          FUN_013dd8c8(psVar18,0);
          FUN_013e6414(psVar9,psVar18,4,0xe8);
          FUN_01bed4e2(auStack_268,&local_110,0x4c);
          psVar9 = local_a0;
          psVar18 = local_2e8;
        }
        local_10c = local_2e4;
        local_110 = psVar18;
        local_108._0_4_ = psVar9;
        local_100[0] = psVar24;
        local_100[1] = psVar12;
        FUN_01bed4e2(local_100 + 2,auStack_268,0x4c);
        if (psVar9 == (short *)&DAT_3b9aca00) {
          local_2d8 = param_5;
          local_2d0 = param_7;
          local_2d4 = param_6;
          FUN_019ac248(&local_1f8,&local_2e8,&local_2d8);
          if (*psVar18 == 0x15) {
            psVar9 = local_1ec;
            psVar12 = local_1f0;
            if (((uint)local_1f8 & 1) != 0) {
              psVar12 = (short *)0x0;
              psVar9 = (short *)0x0;
            }
            if (psVar9 != (short *)0x0) {
              psVar12 = (short *)0x15180;
            }
            psVar18[2] = 1;
            psVar18[3] = 0;
            *(short **)(psVar18 + 4) = psVar12;
          }
        }
        FUN_01bed4e2(param_1,&local_110,0x68);
      }
      else {
        *(undefined4 *)(param_1 + 8) = 0x3b9aca01;
      }
      FUN_013f8678(&local_350);
      return;
    }
  }
LAB_013f7ff4:
  *(undefined4 *)(param_1 + 8) = 0x3b9aca01;
  return;
}

