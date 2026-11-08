// FUN_016bc2fc @ 016bc2fc size=1952 calls_out=16 calls_in=2
// strings: a non-empty list of numbers

/* WARNING: Type propagation algorithm not settling */

void FUN_016bc2fc(undefined2 *param_1,char *param_2,int param_3)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  undefined *puVar16;
  bool bVar17;
  uint uVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  uint local_164;
  undefined4 local_160;
  undefined4 local_15c;
  uint local_158;
  uint *local_154;
  undefined *local_150;
  undefined4 local_14c;
  undefined *local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined *local_138;
  undefined4 local_134;
  char local_130;
  undefined1 uStack_12f;
  undefined2 uStack_12e;
  uint *puStack_12c;
  undefined *puStack_128;
  undefined4 uStack_124;
  undefined *puStack_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined *local_110;
  undefined4 local_10c;
  undefined *local_108;
  undefined4 local_d4;
  undefined *local_d0;
  undefined4 local_a0;
  undefined *local_9c;
  undefined2 local_84;
  undefined1 local_82;
  undefined4 local_80;
  undefined *local_7c;
  undefined *local_70;
  undefined *local_6c;
  undefined *local_68;
  undefined4 local_64;
  undefined *local_60;
  uint local_30;
  undefined8 *local_2c;
  int local_28;
  
  if ((param_3 != 0) && (*param_2 == '[')) {
    if (param_2[param_3 + -1] != ']') {
      *param_1 = 0x403;
      return;
    }
    if ((param_3 == 1) || (param_2[1] < -0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(param_2,param_3,1,param_3 + -1,&DAT_018af120);
    }
    FUN_016bbe5c(&local_130,param_2 + 1,param_3 + -2);
    if (local_130 == '\0') {
      *(uint *)((int)param_1 + 0xd) = CONCAT13(puStack_120._0_1_,uStack_124._1_3_);
      *(uint *)((int)param_1 + 9) = CONCAT13((undefined1)uStack_124,puStack_128._1_3_);
      *(uint *)((int)param_1 + 5) = CONCAT13(puStack_128._0_1_,puStack_12c._1_3_);
      *(uint *)((int)param_1 + 1) = CONCAT13(puStack_12c._0_1_,CONCAT21(uStack_12e,uStack_12f));
      *(undefined1 *)param_1 = 2;
      return;
    }
    *(undefined1 *)((int)param_1 + 1) = uStack_12f;
    *(undefined1 *)param_1 = 3;
    return;
  }
  FUN_01287164(&local_164,param_2,param_2 + param_3);
  local_68 = &DAT_0188aa48;
  local_6c = &DAT_0188aa18;
  local_70 = &DAT_0188a9e8;
  local_60 = &DAT_0188a948;
  local_d0 = &DAT_0188a948;
  local_64 = 0;
  local_7c = &DAT_0188a9dc;
  local_80 = 0;
  local_82 = 0x41;
  local_84 = 0x41;
  local_9c = &DAT_0188a9ac;
  local_a0 = 0;
  local_d4 = 0;
  local_108 = &DAT_0188a978;
  local_10c = 0;
  local_110 = (undefined *)0x1;
  puStack_128 = &DAT_0188a9c4;
  puStack_12c = (uint *)0x0;
  local_130 = '\x01';
  uStack_12f = 0;
  uStack_12e = 0;
  FUN_010d872c(&local_158,&local_130,local_160,local_15c,0xffffffff,0xd4008029,0x7fffffff,0x90000000
               ,0,0);
  FUN_01049d28(&local_130);
  puVar7 = local_154;
  uVar6 = local_158;
  if (local_158 == 0x80000001) {
    *param_1 = 0x103;
    goto joined_r0x016bc82c;
  }
  if (local_150 == (undefined *)0x0) {
    uVar9 = 0;
LAB_016bc808:
    *(undefined1 *)((int)param_1 + 1) = uVar9;
    *(undefined1 *)param_1 = 3;
    if ((uVar6 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(puVar7);
    }
    goto joined_r0x016bc82c;
  }
  local_114 = 0;
  uStack_124 = 0;
  local_10c = CONCAT22(local_10c._2_2_,1);
  local_118 = CONCAT31(local_118._1_3_,1);
  local_110 = local_150;
  local_11c = 0x2e;
  puStack_120 = local_150;
  local_130 = '.';
  uStack_12f = 0;
  uStack_12e = 0;
  puStack_12c = local_154;
  puStack_128 = local_150;
  uVar19 = FUN_016bcb8c(&local_130);
  if ((int)uVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018af0e0);
  }
  if (((int)((ulonglong)uVar19 >> 0x20) == 0) &&
     (uVar19 = FUN_016bcb8c(&local_130), (int)uVar19 == 0 || (int)((ulonglong)uVar19 >> 0x20) == 0))
  {
LAB_016bc530:
    puVar16 = local_150;
    if ((int)local_150 < 0) {
      uVar10 = 0;
LAB_016bc53c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar10,puVar16);
    }
    iVar12 = thunk_FUN_016d4a50(local_150);
    if (iVar12 == 0) {
      uVar10 = 1;
      goto LAB_016bc53c;
    }
    FUN_016dd1aa(iVar12,local_154,local_150);
    uVar9 = 0;
    *(undefined **)(param_1 + 2) = local_150;
    *(int *)(param_1 + 4) = iVar12;
    *(undefined **)(param_1 + 6) = local_150;
  }
  else {
    iVar12 = 0;
    do {
      if ((int)((ulonglong)uVar19 >> 0x20) == iVar12) goto LAB_016bc560;
      pbVar1 = (byte *)((int)uVar19 + iVar12);
      iVar12 = iVar12 + 1;
    } while (*pbVar1 - 0x30 < 10);
    iVar12 = FUN_016bcd54();
    if (iVar12 == 2) goto LAB_016bc530;
LAB_016bc560:
    local_13c = 0;
    local_14c = 0;
    local_134 = CONCAT22(local_134._2_2_,1);
    local_140 = CONCAT31(local_140._1_3_,1);
    local_138 = local_150;
    local_144 = 0x2e;
    local_148 = local_150;
    local_158 = 0x2e;
    uVar19 = FUN_016bd48c(&local_158);
    if ((int)uVar19 == 0) {
      puStack_12c = (uint *)&DAT_00000004;
      local_130 = '\0';
      uStack_12f = 0;
      uStack_12e = 0;
      goto LAB_016bca58;
    }
    puVar16 = (undefined *)0x20;
    puVar11 = (undefined8 *)thunk_FUN_016d4a50(0x20);
    if (puVar11 == (undefined8 *)0x0) {
      uVar10 = 4;
      goto LAB_016bc53c;
    }
    local_28 = 1;
    *puVar11 = uVar19;
    local_30 = 4;
    local_130 = (char)local_158;
    uStack_12f = (undefined1)(local_158 >> 8);
    uStack_12e = (undefined2)(local_158 >> 0x10);
    puStack_12c = local_154;
    puStack_128 = local_150;
    uStack_124 = local_14c;
    puStack_120 = local_148;
    local_11c = local_144;
    local_118 = local_140;
    local_114 = local_13c;
    local_110 = local_138;
    local_10c = local_134;
    uVar15 = 0;
    local_2c = puVar11;
    while( true ) {
      uVar19 = FUN_016bd48c(&local_130);
      puVar8 = local_2c;
      uVar13 = local_30;
      uVar18 = uVar15 + 1;
      if ((int)uVar19 == 0) break;
      if (uVar18 == local_30) {
        FUN_016bd7fc(&local_30,uVar18,1,4,8);
        puVar11 = local_2c;
      }
      puVar11[uVar15 + 1] = uVar19;
      local_28 = uVar15 + 2;
      uVar15 = uVar18;
    }
    if (*(int *)((int)local_2c + (uVar18 * 2 + -1) * 4) == 0) {
      uVar18 = uVar15;
    }
    if (4 < uVar18) {
      if (local_30 != 0) {
        thunk_FUN_016d3fb4(local_2c);
      }
LAB_016bc800:
      uVar9 = 3;
      goto LAB_016bc808;
    }
    bVar3 = false;
    puStack_128 = (undefined *)0x0;
    puStack_12c = (uint *)&DAT_00000004;
    local_130 = '\0';
    uStack_12f = 0;
    uStack_12e = 0;
    if (uVar18 != 0) {
      uVar20 = FUN_016bcd54(*(undefined4 *)local_2c,*(undefined4 *)((int)local_2c + 4));
      if ((uVar20 & 1) != 0) {
        puVar14 = (uint *)&DAT_00000004;
        if (CONCAT22(uStack_12e,CONCAT11(uStack_12f,local_130)) == 0) {
          FUN_010d305c(&local_130);
          puVar14 = puStack_12c;
        }
        *puVar14 = (uint)(uVar20 >> 0x20);
        bVar3 = true;
        bVar2 = false;
        bVar17 = false;
        bVar4 = false;
        puVar16 = (undefined *)0x0;
        puStack_128 = (undefined *)0x1;
        if (uVar18 == 1) goto LAB_016bc7a4;
        uVar20 = FUN_016bcd54(*(undefined4 *)(puVar8 + 1),*(undefined4 *)((int)puVar8 + 0xc));
        if ((uVar20 & 1) == 0) goto LAB_016bc704;
        if (CONCAT22(uStack_12e,CONCAT11(uStack_12f,local_130)) == 1) {
          FUN_010d305c(&local_130);
          puVar14 = puStack_12c;
        }
        puVar14[1] = (uint)(uVar20 >> 0x20);
        puStack_128 = (undefined *)0x2;
        if (uVar18 == 2) {
          bVar17 = true;
          bVar2 = false;
          bVar3 = false;
          bVar4 = false;
          puVar16 = (undefined *)0x1;
          goto LAB_016bc7a4;
        }
        uVar20 = FUN_016bcd54(*(undefined4 *)(puVar8 + 2),*(undefined4 *)((int)puVar8 + 0x14));
        if ((uVar20 & 1) == 0) goto LAB_016bc704;
        if (CONCAT22(uStack_12e,CONCAT11(uStack_12f,local_130)) == 2) {
          FUN_010d305c(&local_130);
          puVar14 = puStack_12c;
        }
        puVar14[2] = (uint)(uVar20 >> 0x20);
        puStack_128 = (undefined *)0x3;
        if (uVar18 == 3) {
          puVar16 = (undefined *)0x2;
          bVar4 = true;
          bVar2 = false;
          bVar3 = false;
          bVar17 = false;
          goto LAB_016bc7a4;
        }
        uVar20 = FUN_016bcd54(*(undefined4 *)(puVar8 + 3),*(undefined4 *)((int)puVar8 + 0x1c));
        if ((uVar20 & 1) == 0) goto LAB_016bc704;
        if (CONCAT22(uStack_12e,CONCAT11(uStack_12f,local_130)) == 3) {
          FUN_010d305c(&local_130);
          puVar14 = puStack_12c;
        }
        puVar14[3] = (uint)(uVar20 >> 0x20);
        puVar16 = (undefined *)0x3;
        bVar3 = false;
        puStack_128 = (undefined *)0x4;
        if (uVar13 != 0) {
          thunk_FUN_016d3fb4(puVar8);
        }
        bVar5 = true;
        bVar17 = false;
        bVar4 = false;
        goto LAB_016bc7c8;
      }
LAB_016bc704:
      if (uVar13 != 0) {
        thunk_FUN_016d3fb4(puVar8);
      }
LAB_016bc7e8:
      if (CONCAT22(uStack_12e,CONCAT11(uStack_12f,local_130)) != 0) {
        thunk_FUN_016d3fb4(puStack_12c);
      }
      goto LAB_016bc800;
    }
    puVar16 = (undefined *)0xffffffff;
    bVar2 = true;
    bVar17 = false;
    bVar4 = false;
LAB_016bc7a4:
    if (uVar13 != 0) {
      thunk_FUN_016d3fb4(puVar8);
    }
    bVar5 = false;
    if (bVar2) {
LAB_016bca58:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("a non-empty list of numbers",0x1b,&DAT_018af0a0);
    }
LAB_016bc7c8:
    uVar15 = puStack_12c[(int)puVar16];
    puStack_128 = puVar16;
    if (0xffffffffU >> (((uint)puVar16 & 3) << 3) < uVar15) goto LAB_016bc7e8;
    if (!bVar3) {
      if ((0xff < *puStack_12c) ||
         ((!bVar17 && ((0xff < puStack_12c[1] || ((!bVar4 && (0xff < puStack_12c[2] || !bVar5)))))))
         ) goto LAB_016bc7e8;
      iVar12 = (int)puVar16 << 2;
      uVar13 = 0x18;
      puVar14 = puStack_12c;
      do {
        uVar18 = uVar13 & 0x18;
        uVar13 = uVar13 - 8;
        iVar12 = iVar12 + -4;
        uVar15 = uVar15 + (*puVar14 << uVar18);
        puVar14 = puVar14 + 1;
      } while (iVar12 != 0);
    }
    thunk_FUN_016d3fb4();
    *(char *)((int)param_1 + 1) = (char)(uVar15 >> 0x18);
    *(char *)(param_1 + 2) = (char)uVar15;
    uVar9 = 1;
    param_1[1] = (ushort)(((uVar15 >> 8 & 0xff) << 0x10) >> 8) | (ushort)(uVar15 >> 0x10) & 0xff;
  }
  *(undefined1 *)param_1 = uVar9;
  if ((uVar6 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(puVar7);
  }
joined_r0x016bc82c:
  if ((local_164 & 0x7fffffff) == 0) {
    return;
  }
  thunk_FUN_016d3fb4(local_160);
  return;
}

