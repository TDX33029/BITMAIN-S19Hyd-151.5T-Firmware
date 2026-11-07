// FUN_00e29440 @ 00e29440 size=2848 calls_out=33 calls_in=1
// strings: BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs

void FUN_00e29440(undefined4 *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  undefined4 ****ppppuVar19;
  undefined4 ****ppppuVar20;
  undefined4 ****ppppuVar21;
  undefined4 ****ppppuVar22;
  bool bVar23;
  bool bVar24;
  undefined8 uVar25;
  int local_a88;
  int local_a80;
  uint local_a7c;
  undefined1 auStack_a70 [80];
  undefined1 auStack_a20 [72];
  undefined4 ****ppppuStack_9d8;
  undefined4 uStack_9d4;
  undefined4 ****ppppuStack_9d0;
  undefined4 ****local_9c8;
  undefined4 ****local_9c4;
  undefined4 ****local_9c0;
  undefined4 ****local_9bc;
  undefined1 auStack_9b8 [80];
  uint local_968;
  int local_964;
  uint local_960;
  int local_95c;
  undefined1 auStack_958 [560];
  undefined4 local_728;
  undefined4 local_724;
  int local_6fc;
  int local_6f8;
  uint local_6f4;
  undefined4 ****local_6e8;
  undefined4 ****local_6e4;
  undefined4 ****local_6e0;
  char cStack_6dc;
  undefined2 uStack_6db;
  char cStack_6d9;
  undefined4 ****local_6d8;
  undefined4 local_6d4;
  undefined4 ****local_6d0;
  uint *local_6cc;
  undefined4 local_6c8;
  undefined4 uStack_6c4;
  undefined4 local_6c0;
  undefined4 uStack_6bc;
  undefined4 uStack_6b8;
  undefined4 uStack_6b4;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  uint local_690;
  int local_68c;
  uint local_688;
  int local_684;
  uint local_680;
  int local_67c;
  undefined1 auStack_678 [624];
  undefined1 auStack_408 [624];
  undefined1 auStack_198 [80];
  uint local_148 [2];
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  uint local_128 [2];
  undefined8 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  undefined4 ****ppppuStack_e8;
  undefined4 uStack_e4;
  undefined4 ****ppppuStack_e0;
  uint *puStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined2 local_94;
  char local_92;
  undefined4 ****local_90;
  undefined4 ****ppppuStack_8c;
  undefined4 ****ppppuStack_88;
  undefined4 ****local_80;
  undefined4 ****local_7c;
  undefined4 ****local_78;
  undefined4 ****local_74;
  undefined4 local_70;
  undefined4 *local_6c;
  undefined4 ***local_68;
  undefined4 local_64;
  undefined4 ****local_60;
  undefined4 ****local_5c;
  uint *local_58;
  undefined4 local_54;
  undefined1 auStack_48 [12];
  int local_3c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x98)) {
  case 0:
    *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(param_2 + 0x90);
    *(undefined1 *)(param_2 + 0x99) = 0;
    FUN_01bed4e2(param_2 + 0x48,param_2,0x48);
    piVar4 = (int *)FUN_00a52660(*(undefined4 *)(param_2 + 0x88));
    if (piVar4 != (int *)0x0) {
      local_6d8 = (undefined4 ****)&DAT_80000000;
      cStack_6dc = '\0';
      uStack_6db = 0;
      cStack_6d9 = '\0';
      local_6e4 = (undefined4 ****)0x0;
      local_6e8 = (undefined4 ****)0x0;
      FUN_0196ac88(&local_9c8,&local_6e8);
      uVar2 = local_9c8._0_1_;
      uVar8 = (uint)local_9c8 & 0xff;
      if (uVar8 == 6) {
        FUN_00e0fe5c(local_9c4);
      }
      else {
        FUN_01bed4e2((uint)&local_60 | 1,(uint)&local_9c8 | 1,0x17);
        local_60 = (undefined4 ****)CONCAT31(local_60._1_3_,uVar2);
        if (uVar8 == 5) {
          if (local_5c == (undefined4 ****)0x0) {
            local_54 = 0;
          }
          local_6d0 = local_5c;
          local_6e0 = local_5c;
          local_6e8 = local_5c;
          if (local_5c != (undefined4 ****)0x0) {
            local_6e8 = (undefined4 ****)&DAT_00000001;
          }
          local_6cc = local_58;
          local_6d4 = 0;
          cStack_6dc = (char)local_58;
          uStack_6db = (undefined2)((uint)local_58 >> 8);
          cStack_6d9 = (char)((uint)local_58 >> 0x18);
          local_6e4 = (undefined4 ****)0x0;
          local_6d8 = local_6e8;
          local_6c8 = local_54;
          FUN_00fea674(auStack_48,&local_6e8);
          if (local_3c != 0) {
            FUN_0067b1ac(&local_6e8,auStack_48);
            cVar3 = cStack_6dc;
            local_90 = local_6e8;
            ppppuStack_8c = local_6e4;
            ppppuStack_88 = local_6e0;
            local_94 = uStack_6db;
            local_92 = cStack_6d9;
            FUN_00e0febc(&local_60);
            if (cVar3 != '\x02') {
              local_6e8 = local_90;
              local_6e4 = ppppuStack_8c;
              local_6e0 = ppppuStack_88;
              cStack_6d9 = local_92;
              uStack_6db = local_94;
              DataMemoryBarrier(0xb);
              cStack_6dc = cVar3;
              if (*(int *)(*piVar4 + 0x18) != 0) {
                FUN_00b065ec(*piVar4 + 8,&local_6e8);
              }
              if (cStack_6dc != '\x02') {
                local_9c8 = local_6e8;
                local_9c4 = local_6e4;
                local_9c0 = local_6e0;
                local_9bc = (undefined4 ****)CONCAT31(CONCAT12(cStack_6d9,uStack_6db),cStack_6dc);
                FUN_019cf348(&local_9c8);
                if ((DAT_01d50f88 < 5) &&
                   (((DAT_01d4c488 - 1 < 2 ||
                     ((DAT_01d4c488 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c480), cVar3 != '\0'))))
                    && (iVar5 = FUN_01aaa278(DAT_01d4c480), iVar5 != 0)))) {
                  local_58 = (uint *)(DAT_01d4c480 + 0x1c);
                  if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0) {
LAB_00e29f64:
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                  }
                  local_6e0 = *(undefined4 *****)(DAT_01d4c480 + 0x24);
                  uVar6 = *(undefined4 *)(DAT_01d4c480 + 0x28);
                  local_9c4 = &local_74;
                  local_5c = (undefined4 ****)&DAT_00000001;
                  cStack_6dc = (char)uVar6;
                  uStack_6db = (undefined2)((uint)uVar6 >> 8);
                  cStack_6d9 = (char)((uint)uVar6 >> 0x18);
                  local_6d8 = (undefined4 ****)0x0;
                  local_9c0 = (undefined4 ****)&DAT_01d2ea4c;
                  local_70 = 0x6b;
                  local_74 = (undefined4 ****)0x3fe987;
                  local_9c8 = &local_6e8;
                  local_6e8 = (undefined4 ****)*local_58;
                  local_6e4 = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                  local_60 = &local_9c8;
                  FUN_00e0ff40(&local_60);
                }
                else {
                  iVar5 = DAT_01d4c480;
                  if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                    local_7c = *(undefined4 *****)(DAT_01d4c480 + 0x14);
                    local_78 = *(undefined4 *****)(DAT_01d4c480 + 0x18);
                    local_80 = (undefined4 ****)&DAT_00000001;
                    DataMemoryBarrier(0xb);
                    puVar13 = DAT_01d4edc8;
                    pcVar1 = DAT_01d4edc4;
                    if (DAT_01d51174 != 2) {
                      puVar13 = &DAT_01cfc5e0;
                      pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                    }
                    iVar9 = (*(code *)puVar13[3])(pcVar1,&local_80);
                    if (iVar9 != 0) {
                      local_6c = (undefined4 *)(DAT_01d4c480 + 0x1c);
                      if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0)
                      goto LAB_00e29f64;
                      local_5c = &local_68;
                      local_74 = &local_60;
                      local_6e0 = *(undefined4 *****)(DAT_01d4c480 + 0x24);
                      uVar6 = *(undefined4 *)(DAT_01d4c480 + 0x28);
                      local_6d8 = (undefined4 ****)0x0;
                      cStack_6dc = (char)uVar6;
                      uStack_6db = (undefined2)((uint)uVar6 >> 8);
                      cStack_6d9 = (char)((uint)uVar6 >> 0x18);
                      local_70 = 1;
                      local_58 = (uint *)&DAT_01d2ea4c;
                      local_64 = 0x6b;
                      local_68 = (undefined4 ***)0x3fe987;
                      local_9c8 = local_80;
                      local_9c4 = local_7c;
                      local_9c0 = local_78;
                      local_6e8 = (undefined4 ****)*local_6c;
                      local_6e4 = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                      local_60 = &local_6e8;
                      FUN_01aaa328(iVar5,pcVar1,puVar13[4],&local_9c8,&local_74);
                    }
                  }
                }
              }
            }
            goto LAB_00e29710;
          }
          FUN_0165a1f4(auStack_48);
        }
        FUN_00e0febc(&local_60);
      }
    }
LAB_00e29710:
    *(undefined1 *)(param_2 + 0xf4) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c16ef4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c16ef4);
  case 4:
    goto switchD_00e29474_caseD_4;
  case 5:
    goto switchD_00e29474_caseD_5;
  }
  FUN_00e100c8(&local_6e8,param_2 + 0xa0,param_3);
  ppppuVar20 = local_6e4;
  ppppuVar19 = local_6e8;
  if (local_6e8 == (undefined4 ****)&SUB_00000004 && local_6e4 == (undefined4 ****)0x0) {
    *param_1 = 4;
    param_1[1] = 0;
    uVar2 = 3;
    goto LAB_00e29c3c;
  }
  FUN_01bed4e2(auStack_a70,&local_6e0,0x50);
  local_a88 = local_684;
  uVar8 = local_688;
  local_a7c = local_690;
  local_a80 = local_68c;
  if (*(char *)(param_2 + 0xf4) == '\x03') {
    FUN_00e1003c(param_2 + 0xa0);
  }
  if (ppppuVar19 == (undefined4 ****)&DAT_00000003 && ppppuVar20 == (undefined4 ****)0x0) {
    *(undefined1 *)(param_2 + 0x168) = 0;
    *(undefined4 *)(param_2 + 0xa0) = *(undefined4 *)(param_2 + 0x94);
switchD_00e29474_caseD_4:
    puVar13 = (undefined4 *)(param_2 + 0xa0);
    FUN_00e101ec(&local_6e8,puVar13,param_3);
    ppppuVar20 = local_6e4;
    ppppuVar19 = local_6e8;
    if (local_6e8 == (undefined4 ****)&SUB_00000004 && local_6e4 == (undefined4 ****)0x0) {
      uVar2 = 4;
      *param_1 = 4;
      param_1[1] = 0;
      goto LAB_00e29c3c;
    }
    uStack_9d4 = CONCAT13(cStack_6d9,CONCAT21(uStack_6db,cStack_6dc));
    ppppuStack_9d8 = local_6e0;
    ppppuStack_9d0 = local_6d8;
    FUN_01bed4e2(auStack_a20,&local_6d4,0x44);
    local_a88 = local_684;
    uVar8 = local_688;
    local_a7c = local_690;
    local_a80 = local_68c;
    cVar3 = *(char *)(param_2 + 0x168);
    bVar23 = cVar3 == '\x03';
    if (bVar23) {
      cVar3 = *(char *)(param_2 + 0x164);
    }
    if (bVar23 && cVar3 == '\x03') {
      FUN_00df984c(param_2 + 0xa8);
    }
    if (ppppuVar19 == (undefined4 ****)&DAT_00000003 && ppppuVar20 == (undefined4 ****)0x0) {
      *puVar13 = ppppuStack_9d8;
      *(undefined4 *)(param_2 + 0xa4) = uStack_9d4;
      *(undefined4 *****)(param_2 + 0xa8) = ppppuStack_9d0;
      *(undefined1 *)(param_2 + 0x654) = 0;
      *(undefined4 **)(param_2 + 0x650) = puVar13;
switchD_00e29474_caseD_5:
      FUN_00e2a168(&local_6e8,param_2 + 0xb0,param_3);
      ppppuVar19 = local_6e0;
      ppppuVar21 = local_6e4;
      ppppuVar22 = local_6e8;
      if (local_6e8 == (undefined4 ****)&SUB_00000004 && local_6e4 == (undefined4 ****)0x0) {
        *param_1 = 4;
        param_1[1] = 0;
        uVar2 = 5;
        goto LAB_00e29c3c;
      }
      ppppuVar20 = (undefined4 ****)CONCAT13(cStack_6d9,CONCAT21(uStack_6db,cStack_6dc));
      FUN_01bed4e2(auStack_198,&local_6d8,0x50);
      local_a7c = local_688;
      local_a80 = local_684;
      local_a88 = local_67c;
      FUN_01bed4e2(auStack_408,auStack_678,0x270);
      if (*(char *)(param_2 + 0x654) == '\x03') {
        FUN_00e7a7b0(param_2 + 0xb0);
      }
      if (ppppuVar22 != (undefined4 ****)&DAT_00000003 || ppppuVar21 != (undefined4 ****)0x0) {
        FUN_01bed4e2(auStack_958,auStack_408,0x270);
        FUN_01bed4e2(auStack_9b8,auStack_198,0x50);
        local_960 = local_680;
        local_9c8 = ppppuVar22;
        local_9c4 = ppppuVar21;
        local_9c0 = ppppuVar19;
        local_95c = local_67c;
        local_964 = local_684;
        local_968 = local_688;
        local_9bc = ppppuVar20;
        if (local_6fc == -0x80000000) {
          local_a80 = 8;
          local_a7c = 0;
          uVar8 = 0;
        }
        else {
          uVar6 = 0;
          bVar24 = 0x7fffffe < local_6f4;
          bVar23 = local_6f4 == 0x7ffffff;
          uVar8 = local_6f4 * 0x20;
          if (local_6f4 < 0x8000000) {
            bVar24 = 0x7ffffff7 < uVar8;
            bVar23 = uVar8 == 0x7ffffff8;
          }
          if (bVar24 && !bVar23) {
LAB_00e29b20:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar6,uVar8);
          }
          if (uVar8 == 0) {
            local_a80 = 8;
            local_a7c = 0;
          }
          else {
            uVar6 = 8;
            local_a80 = FUN_01298504(uVar8,8);
            local_a7c = local_6f4;
            if (local_a80 == 0) goto LAB_00e29b20;
          }
          if (local_6f4 != 0) {
            uVar8 = 0;
LAB_00e29c9c:
            puVar13 = (undefined4 *)(local_6f8 + uVar8 * 0x20);
            uVar16 = puVar13[6];
            if (uVar16 == 0) {
              uVar6 = 0;
            }
            else {
              pbVar18 = (byte *)puVar13[5];
              if (uVar16 == 1) {
                bVar10 = *pbVar18;
                uVar6 = 0;
                if ((bVar10 == 0x2b) || (bVar10 == 0x2d)) goto LAB_00e29cd8;
              }
              else {
                bVar10 = *pbVar18;
              }
              if (bVar10 == 0x2b) {
                pbVar18 = pbVar18 + 1;
                uVar16 = uVar16 - 1;
              }
              if (uVar16 < 9) {
                uVar6 = 1;
                ppppuVar21 = (undefined4 ****)0x0;
                for (; uVar16 != 0; uVar16 = uVar16 - 1) {
                  bVar10 = *pbVar18;
                  if (9 < bVar10 - 0x30) goto LAB_00e29da8;
                  pbVar18 = pbVar18 + 1;
                  ppppuVar21 = (undefined4 ****)((bVar10 - 0x30) + (int)ppppuVar21 * 10);
                }
              }
              else {
                ppppuVar21 = (undefined4 ****)0x0;
                do {
                  if (uVar16 == 0) {
                    uVar6 = 1;
                    break;
                  }
                  uVar12 = (uint)(ZEXT48(ppppuVar21) * 10);
                  if ((int)(ZEXT48(ppppuVar21) * 10 >> 0x20) != 0) goto LAB_00e29da8;
                  uVar17 = *pbVar18 - 0x30;
                  uVar6 = 0;
                  ppppuVar21 = (undefined4 ****)(uVar17 + uVar12);
                  if (9 < uVar17) break;
                  uVar16 = uVar16 - 1;
                  pbVar18 = pbVar18 + 1;
                } while (!CARRY4(uVar17,uVar12));
              }
            }
            goto LAB_00e29cd8;
          }
          uVar8 = 0;
        }
        goto LAB_00e29a00;
      }
      FUN_01bed4e2(&ppppuStack_e8,auStack_198,0x50);
      FUN_0084ec48(param_2 + 0xa0);
      uVar8 = local_680;
    }
    else {
      FUN_01bed4e2(&puStack_dc,auStack_a20,0x44);
      ppppuStack_e8 = ppppuStack_9d8;
      uStack_e4 = uStack_9d4;
      ppppuStack_e0 = ppppuStack_9d0;
    }
  }
  else {
    FUN_01bed4e2(&ppppuStack_e8,auStack_a70,0x50);
  }
  FUN_00f9604c(param_2 + 0x48);
  ppppuVar22 = (undefined4 ****)0x0;
  ppppuVar21 = (undefined4 ****)&DAT_00000003;
  if (*(char *)(param_2 + 0x99) == '\x01') {
    FUN_00f9604c();
  }
  goto LAB_00e29bec;
LAB_00e29da8:
  uVar6 = 0;
LAB_00e29cd8:
  uVar11 = puVar13[1];
  uVar15 = puVar13[7];
  uVar25 = *(undefined8 *)(puVar13 + 2);
  puVar14 = (undefined4 *)(local_a80 + uVar8 * 0x20);
  *puVar14 = *puVar13;
  uVar8 = uVar8 + 1;
  puVar14[1] = uVar11;
  puVar14[4] = uVar6;
  puVar14[5] = ppppuVar21;
  puVar14[6] = uVar15;
  *(undefined8 *)(puVar14 + 2) = uVar25;
  if (uVar8 == local_6f4) goto LAB_00e29db8;
  goto LAB_00e29c9c;
LAB_00e29db8:
  uVar8 = local_6f4;
LAB_00e29a00:
  FUN_01220b60(&local_6e8,&local_9c8);
  ppppuVar20 = local_6e8;
  uVar16 = 2;
  if (((uint)local_6e8 & 1) != 0) {
    local_140 = CONCAT17(cStack_6d9,CONCAT25(uStack_6db,CONCAT14(cStack_6dc,local_6e0)));
    uVar16 = 1;
    local_138 = local_728;
    uStack_134 = local_724;
    uStack_130 = 2;
  }
  local_148[1] = 0;
  local_148[0] = uVar16;
  uVar6 = FUN_01220064(&local_9c8);
  FUN_01221990(&local_6e8,uVar6);
  if (((uint)local_6e8 & 1) == 0) {
    local_128[1] = 0;
    local_128[0] = 2;
    if (((uint)ppppuVar20 & 1) == 0) {
      puVar7 = local_128;
    }
    else {
      puVar7 = local_148;
    }
  }
  else {
    local_120 = CONCAT17(cStack_6d9,CONCAT25(uStack_6db,CONCAT14(cStack_6dc,local_6e0)));
    local_128[1] = 0;
    local_118 = local_728;
    uStack_114 = local_724;
    uStack_110 = 1;
    local_128[0] = 1;
    puVar7 = local_128;
    if ((uVar16 & (uint)ppppuVar20) != 0) {
      uVar12 = (uint)((ulonglong)local_120 >> 0x20);
      uVar17 = (uint)((int)local_140._4_4_ >> 0x1f) >> 1 ^ local_140._4_4_;
      uVar16 = (int)uVar12 >> 0x1f;
      uVar12 = uVar16 >> 1 ^ uVar12;
      bVar23 = (((uint)(cStack_6d9 >> 7 & 1) << 0x1f | uVar16 >> 1) ^ (uint)local_6e0) <
               (((uint)((byte)((longlong)local_140 >> 0x3f) & 1) << 0x1f |
                (uint)((int)local_140._4_4_ >> 0x1f) >> 1) ^ (uint)local_140);
      if ((int)(uVar12 - (uVar17 + bVar23)) < 0 !=
          (SBORROW4(uVar12,uVar17) != SBORROW4(uVar12 - uVar17,(uint)bVar23))) {
        puVar7 = local_148;
      }
    }
  }
  local_128[1] = 0;
  local_108 = *puVar7;
  uStack_104 = puVar7[1];
  uStack_100 = puVar7[2];
  uStack_fc = puVar7[3];
  local_f8 = puVar7[4];
  uStack_f4 = puVar7[5];
  uStack_f0 = puVar7[6];
  uStack_ec = puVar7[7];
  FUN_0160aaa4(&local_6e8,0);
  ppppuVar19 = local_6e0;
  ppppuVar22 = local_6e4;
  ppppuVar21 = local_6e8;
  local_b8 = local_108;
  uStack_b4 = uStack_104;
  uStack_b0 = uStack_100;
  uStack_ac = uStack_fc;
  local_a8 = local_f8;
  uStack_a4 = uStack_f4;
  uStack_a0 = uStack_f0;
  uStack_9c = uStack_ec;
  ppppuVar20 = (undefined4 ****)CONCAT13(cStack_6d9,CONCAT21(uStack_6db,cStack_6dc));
  ppppuStack_e8 = local_6d8;
  uStack_e4 = local_6d4;
  ppppuStack_e0 = local_6d0;
  puStack_dc = local_6cc;
  uStack_d8 = local_6c8;
  uStack_d4 = uStack_6c4;
  local_d0 = local_6c0;
  uStack_cc = uStack_6bc;
  uStack_c8 = uStack_6b8;
  uStack_c4 = uStack_6b4;
  uStack_c0 = uStack_6b0;
  uStack_bc = uStack_6ac;
  FUN_00a57438(&local_9c8);
  FUN_0084ec48(param_2 + 0xa0);
  FUN_00f9604c(param_2 + 0x48);
LAB_00e29bec:
  *param_1 = ppppuVar21;
  param_1[1] = ppppuVar22;
  param_1[2] = ppppuVar19;
  param_1[3] = ppppuVar20;
  FUN_01bed4e2(param_1 + 4,&ppppuStack_e8,0x50);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x18] = local_a7c;
  param_1[0x19] = local_a80;
  param_1[0x1b] = local_a88;
  uVar2 = 1;
  param_1[0x1a] = uVar8;
LAB_00e29c3c:
  *(undefined1 *)(param_2 + 0x98) = uVar2;
  return;
}

