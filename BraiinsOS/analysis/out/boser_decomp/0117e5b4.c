// FUN_0117e5b4 @ 0117e5b4 size=3808 calls_out=11 calls_in=2
// strings: 

void FUN_0117e5b4(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,int param_6)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  uint uVar20;
  uint uVar21;
  byte *pbVar22;
  uint *puVar23;
  int iVar24;
  bool bVar25;
  int local_ac;
  int local_a8;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  byte *local_64;
  uint local_60;
  undefined1 local_5c;
  undefined2 local_48;
  byte local_46;
  byte *local_44;
  uint local_40;
  int local_3c [5];
  undefined2 local_28;
  undefined1 local_26;
  
  if (param_2 < 0x21) {
LAB_0117f2d8:
    if (1 < param_2) {
      if (param_4 < param_2 + 0x10) {
LAB_0117f464:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x117f464);
        (*pcVar1)();
      }
      uVar9 = param_2 >> 1;
      if (param_2 < 0x10) {
        puVar23 = param_3 + uVar9 * 3;
        puVar12 = param_1 + uVar9 * 3;
        if (param_2 < 8) {
          uVar13 = param_1[1];
          uVar11 = param_1[2];
          *param_3 = *param_1;
          param_3[1] = uVar13;
          param_3[2] = uVar11;
          uVar13 = puVar12[1];
          uVar11 = puVar12[2];
          *puVar23 = *puVar12;
          puVar23[1] = uVar13;
          puVar23[2] = uVar11;
          uVar13 = 1;
        }
        else {
          FUN_010141f8();
          FUN_010141f8(puVar12,puVar23);
          uVar13 = 4;
        }
      }
      else {
        FUN_010141c0(param_1,param_3,param_3 + param_2 * 3);
        FUN_010141c0(param_1 + uVar9 * 3,param_3 + uVar9 * 3,param_3 + param_2 * 3 + 0x18);
        uVar13 = 8;
      }
      local_3c[0] = 0;
      iVar6 = 0;
      local_3c[1] = uVar9;
      do {
        iVar8 = local_3c[iVar6];
        uVar11 = uVar9;
        if (iVar8 != 0) {
          uVar11 = param_2 - uVar9;
        }
        if (uVar13 < uVar11) {
          iVar24 = uVar11 - uVar13;
          puVar23 = param_1 + uVar13 * 3 + iVar8 * 3;
          puVar12 = param_3 + uVar13 * 3 + iVar8 * 3;
          do {
            uVar11 = puVar23[1];
            uVar16 = puVar23[2];
            *puVar12 = *puVar23;
            puVar12[1] = uVar11;
            puVar12[2] = uVar16;
            FUN_01014754(param_3 + iVar8 * 3,puVar12);
            puVar23 = puVar23 + 3;
            puVar12 = puVar12 + 3;
            iVar24 = iVar24 + -1;
          } while (iVar24 != 0);
        }
        bVar25 = iVar6 == 0;
        iVar6 = 1;
      } while (bVar25);
      FUN_01014524(param_3,param_2,param_1);
    }
    return;
  }
  local_ac = param_6;
  local_a8 = param_5;
LAB_0117e5f4:
  uVar9 = param_2;
  do {
    if (local_a8 == 0) {
      FUN_0117dd70(param_1,uVar9,param_3,param_4,1);
      return;
    }
    puVar23 = param_1 + (uVar9 >> 3) * 0x15;
    puVar12 = param_1 + (uVar9 >> 3) * 0xc;
    if (uVar9 < 0x40) {
      pbVar14 = (byte *)param_1[1];
      uVar13 = param_1[2];
      local_46 = false;
      pbVar22 = (byte *)puVar12[1];
      uVar11 = puVar12[2];
      local_26 = false;
      if (uVar13 != 0) {
        local_46 = *pbVar14 == 0x2f;
      }
      local_5c = 6;
      local_48 = 0x201;
      if (uVar11 != 0) {
        local_26 = *pbVar22 == 0x2f;
      }
      local_3c[0]._0_1_ = 6;
      local_28 = 0x201;
      local_64 = pbVar14;
      local_60 = uVar13;
      local_44 = pbVar22;
      local_40 = uVar11;
      bVar2 = FUN_019af7b8(&local_64,&local_44);
      bVar25 = uVar13 != 0;
      uVar16 = 0;
      if (bVar25) {
        uVar16 = *pbVar14 - 0x2f;
      }
      pbVar15 = (byte *)puVar23[1];
      if (bVar25) {
        uVar16 = LZCOUNT(uVar16);
      }
      uVar20 = puVar23[2];
      local_26 = false;
      if (bVar25) {
        uVar16 = uVar16 >> 5;
      }
      local_46 = (byte)uVar16;
      local_5c = 6;
      local_48 = 0x201;
      if (uVar20 != 0) {
        local_26 = *pbVar15 == 0x2f;
      }
      local_3c[0] = CONCAT31(local_3c[0]._1_3_,6);
      local_28 = 0x201;
      local_64 = pbVar14;
      local_60 = uVar13;
      local_44 = pbVar15;
      local_40 = uVar20;
      bVar3 = FUN_019af7b8(&local_64,&local_44);
      puVar5 = param_1;
      if (-1 < (char)(bVar3 ^ bVar2)) {
        local_46 = 0;
        if (uVar11 != 0) {
          local_46 = *pbVar22;
        }
        local_26 = false;
        if (uVar11 != 0) {
          local_46 = local_46 == 0x2f;
        }
        local_5c = 6;
        local_48 = 0x201;
        if (uVar20 != 0) {
          local_26 = *pbVar15 == 0x2f;
        }
        local_3c[0] = CONCAT31(local_3c[0]._1_3_,6);
        local_28 = 0x201;
        local_64 = pbVar22;
        local_60 = uVar11;
        local_44 = pbVar15;
        local_40 = uVar20;
        bVar3 = FUN_019af7b8(&local_64,&local_44);
        puVar5 = puVar12;
        if ((char)(bVar3 ^ bVar2) < '\0') {
          puVar5 = puVar23;
        }
      }
    }
    else {
      puVar5 = (uint *)FUN_005fd398(param_1,puVar12,puVar23);
    }
    local_a8 = local_a8 + -1;
    uVar13 = ((uint)((int)puVar5 - (int)param_1) >> 2) * -0x55555555;
    local_70 = *puVar5;
    uStack_6c = puVar5[1];
    uStack_68 = puVar5[2];
    if (local_ac != 0) {
      local_46 = false;
      local_64 = *(byte **)(local_ac + 4);
      local_60 = *(uint *)(local_ac + 8);
      local_26 = false;
      if (local_60 != 0) {
        local_46 = *local_64 == 0x2f;
      }
      local_5c = 6;
      local_48 = 0x201;
      local_44 = (byte *)puVar5[1];
      local_40 = puVar5[2];
      if (local_40 != 0) {
        local_26 = *local_44 == 0x2f;
      }
      local_3c[0] = CONCAT31(local_3c[0]._1_3_,6);
      local_28 = 0x201;
      cVar4 = FUN_019af7b8(&local_64,&local_44);
      if ((uint)(int)cVar4 < 0x80000000) break;
    }
    if (param_4 < uVar9) goto LAB_0117f464;
    param_2 = 0;
    puVar23 = param_3 + uVar9 * 3;
    puVar12 = param_1;
    uVar11 = uVar13;
    while( true ) {
      iVar6 = uVar11 - 3;
      if (uVar11 < 3) {
        iVar6 = 0;
      }
      if (puVar12 < param_1 + iVar6 * 3) {
        iVar8 = 0;
        puVar7 = puVar12;
        do {
          uVar16 = 0;
          uVar18 = 0;
          local_64 = *(byte **)((int)puVar12 + (4 - iVar8));
          local_60 = *(int *)((int)puVar12 + (8 - iVar8));
          if (local_60 != 0) {
            uVar16 = *local_64 - 0x2f;
          }
          local_48 = 0x201;
          if (local_60 != 0) {
            uVar16 = (uint)(uVar16 == 0);
          }
          local_44 = (byte *)puVar5[1];
          local_40 = puVar5[2];
          local_46 = (byte)uVar16;
          local_5c = 6;
          uVar16 = 0;
          if (local_40 != 0) {
            uVar16 = LZCOUNT(*local_44 - 0x2f);
          }
          local_28 = 0x201;
          if (local_40 != 0) {
            uVar16 = uVar16 >> 5;
          }
          local_26 = (undefined1)uVar16;
          local_3c[0]._0_1_ = 6;
          bVar2 = FUN_019af7b8(&local_64,&local_44);
          puVar10 = param_3;
          if (-1 < (char)bVar2) {
            puVar10 = (uint *)((int)puVar23 + iVar8 + -0xc);
          }
          puVar10 = puVar10 + param_2 * 3;
          uVar16 = puVar7[1];
          uVar20 = puVar7[2];
          iVar24 = param_2 + (bVar2 >> 7);
          *puVar10 = *puVar7;
          puVar10[1] = uVar16;
          puVar10[2] = uVar20;
          local_64 = *(byte **)((int)puVar12 + (0x10 - iVar8));
          local_60 = *(int *)((int)puVar12 + (0x14 - iVar8));
          bVar25 = local_60 != 0;
          if (bVar25) {
            puVar10 = (uint *)(uint)*local_64;
          }
          local_5c = 6;
          if (bVar25) {
            puVar10 = (uint *)((int)puVar10 - 0x2f);
          }
          local_48 = 0x201;
          if (bVar25) {
            puVar10 = (uint *)LZCOUNT(puVar10);
          }
          uVar16 = 0;
          if (bVar25) {
            uVar18 = (undefined1)((uint)puVar10 >> 5);
          }
          local_44 = (byte *)puVar5[1];
          local_40 = puVar5[2];
          uVar19 = 0;
          if (local_40 != 0) {
            uVar16 = LZCOUNT(*local_44 - 0x2f);
          }
          local_28 = 0x201;
          if (local_40 != 0) {
            uVar16 = uVar16 >> 5;
          }
          local_26 = (undefined1)uVar16;
          local_3c[0]._0_1_ = 6;
          local_46 = uVar18;
          bVar2 = FUN_019af7b8(&local_64,&local_44);
          puVar10 = param_3;
          if (-1 < (char)bVar2) {
            puVar10 = (uint *)((int)puVar23 + iVar8 + -0x18);
          }
          puVar10 = puVar10 + iVar24 * 3;
          uVar16 = *(uint *)((int)puVar12 + (0x10 - iVar8));
          uVar20 = *(uint *)((int)puVar12 + (0x14 - iVar8));
          *puVar10 = *(uint *)((int)puVar12 + (0xc - iVar8));
          puVar10[1] = uVar16;
          puVar10[2] = uVar20;
          iVar24 = iVar24 + (uint)(bVar2 >> 7);
          local_64 = *(byte **)((int)puVar12 + (0x1c - iVar8));
          local_60 = *(int *)((int)puVar12 + (0x20 - iVar8));
          bVar25 = local_60 != 0;
          if (bVar25) {
            puVar10 = (uint *)(uint)*local_64;
          }
          local_5c = 6;
          if (bVar25) {
            puVar10 = (uint *)((int)puVar10 - 0x2f);
          }
          local_48 = 0x201;
          if (bVar25) {
            puVar10 = (uint *)LZCOUNT(puVar10);
          }
          uVar16 = 0;
          if (bVar25) {
            uVar19 = (undefined1)((uint)puVar10 >> 5);
          }
          local_44 = (byte *)puVar5[1];
          local_40 = puVar5[2];
          if (local_40 != 0) {
            uVar16 = LZCOUNT(*local_44 - 0x2f);
          }
          local_28 = 0x201;
          if (local_40 != 0) {
            uVar16 = uVar16 >> 5;
          }
          local_26 = (undefined1)uVar16;
          local_3c[0]._0_1_ = 6;
          local_46 = uVar19;
          bVar2 = FUN_019af7b8(&local_64,&local_44);
          puVar10 = param_3;
          if (-1 < (char)bVar2) {
            puVar10 = (uint *)((int)puVar23 + iVar8 + -0x24);
          }
          puVar10 = puVar10 + iVar24 * 3;
          uVar16 = puVar7[7];
          uVar20 = puVar7[8];
          iVar24 = iVar24 + (uint)(bVar2 >> 7);
          *puVar10 = puVar7[6];
          puVar10[1] = uVar16;
          puVar10[2] = uVar20;
          local_64 = *(byte **)((int)puVar12 + (0x28 - iVar8));
          local_60 = *(uint *)((int)puVar12 + (0x2c - iVar8));
          bVar25 = local_60 != 0;
          if (bVar25) {
            puVar10 = (uint *)(uint)*local_64;
          }
          local_5c = 6;
          if (bVar25) {
            puVar10 = (uint *)((int)puVar10 - 0x2f);
          }
          local_48 = 0x201;
          local_46 = bVar25 && puVar10 == (uint *)0x0;
          local_44 = (byte *)puVar5[1];
          local_40 = puVar5[2];
          if (local_40 == 0) {
            local_26 = false;
          }
          else {
            local_26 = *local_44 == 0x2f;
          }
          local_28 = 0x201;
          local_3c[0] = CONCAT31(local_3c[0]._1_3_,6);
          bVar2 = FUN_019af7b8(&local_64,&local_44);
          puVar10 = param_3;
          if (-1 < (char)bVar2) {
            puVar10 = (uint *)((int)puVar23 + iVar8 + -0x30);
          }
          iVar17 = iVar8 + -0x30;
          puVar10 = puVar10 + iVar24 * 3;
          uVar16 = *(uint *)((int)puVar12 + (0x28 - iVar8));
          uVar20 = *(uint *)((int)puVar12 + (0x2c - iVar8));
          param_2 = iVar24 + (uint)(bVar2 >> 7);
          puVar7 = puVar7 + 0xc;
          *puVar10 = *(uint *)((int)puVar12 + (0x24 - iVar8));
          puVar10[1] = uVar16;
          puVar10[2] = uVar20;
          iVar8 = iVar17;
        } while (puVar7 < param_1 + iVar6 * 3);
        puVar23 = (uint *)((int)puVar23 + iVar17);
        puVar12 = puVar7;
      }
      for (; puVar12 < param_1 + uVar11 * 3; puVar12 = puVar12 + 3) {
        local_64 = (byte *)puVar12[1];
        local_60 = puVar12[2];
        local_46 = false;
        local_26 = false;
        if (local_60 != 0) {
          local_46 = *local_64 == 0x2f;
        }
        local_5c = 6;
        local_48 = 0x201;
        local_44 = (byte *)puVar5[1];
        local_40 = puVar5[2];
        if (local_40 != 0) {
          local_26 = *local_44 == 0x2f;
        }
        local_3c[0] = CONCAT31(local_3c[0]._1_3_,6);
        local_28 = 0x201;
        bVar2 = FUN_019af7b8(&local_64,&local_44);
        puVar23 = puVar23 + -3;
        puVar7 = puVar23;
        if ((char)bVar2 < '\0') {
          puVar7 = param_3;
        }
        puVar7 = puVar7 + param_2 * 3;
        uVar16 = puVar12[1];
        uVar20 = puVar12[2];
        *puVar7 = *puVar12;
        puVar7[1] = uVar16;
        puVar7[2] = uVar20;
        param_2 = param_2 + (bVar2 >> 7);
      }
      if (uVar11 == uVar9) break;
      puVar23 = puVar23 + -3;
      uVar11 = puVar12[1];
      uVar16 = puVar12[2];
      puVar7 = puVar23 + param_2 * 3;
      *puVar7 = *puVar12;
      puVar7[1] = uVar11;
      puVar7[2] = uVar16;
      puVar12 = puVar12 + 3;
      uVar11 = uVar9;
    }
    FUN_01bed4e2(param_1,param_3,param_2 * 0xc);
    iVar6 = uVar9 - param_2;
    if (iVar6 != 0) {
      puVar23 = param_3 + uVar9 * 3 + -3;
      puVar12 = param_1 + param_2 * 3;
      iVar8 = iVar6;
      do {
        uVar11 = *puVar23;
        uVar16 = puVar23[1];
        uVar20 = puVar23[2];
        puVar23 = puVar23 + -3;
        iVar8 = iVar8 + -1;
        *puVar12 = uVar11;
        puVar12[1] = uVar16;
        puVar12[2] = uVar20;
        puVar12 = puVar12 + 3;
      } while (iVar8 != 0);
    }
    if (param_2 == 0) break;
    if (uVar9 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
    }
    FUN_0117e5b4(param_1 + param_2 * 3,iVar6,param_3,param_4,local_a8,&local_70);
    uVar9 = param_2;
    if (param_2 < 0x21) goto LAB_0117f2d8;
  } while( true );
  if (param_4 < uVar9) goto LAB_0117f464;
  uVar11 = 0;
  puVar23 = param_3 + uVar9 * 3;
  puVar12 = param_1;
  while( true ) {
    iVar6 = uVar13 - 3;
    if (uVar13 < 3) {
      iVar6 = 0;
    }
    if (puVar12 < param_1 + iVar6 * 3) {
      iVar8 = 0;
      puVar7 = puVar12;
      do {
        local_64 = (byte *)puVar5[1];
        local_60 = puVar5[2];
        uVar16 = 0;
        uVar18 = 0;
        if (local_60 != 0) {
          uVar16 = LZCOUNT(*local_64 - 0x2f);
        }
        local_48 = 0x201;
        local_44 = *(byte **)((int)puVar12 + (4 - iVar8));
        local_40 = *(int *)((int)puVar12 + (8 - iVar8));
        if (local_60 != 0) {
          uVar16 = uVar16 >> 5;
        }
        local_46 = (byte)uVar16;
        local_5c = 6;
        uVar16 = 0;
        if (local_40 != 0) {
          uVar16 = LZCOUNT(*local_44 - 0x2f);
        }
        local_28 = 0x201;
        if (local_40 != 0) {
          uVar16 = uVar16 >> 5;
        }
        local_26 = (undefined1)uVar16;
        local_3c[0]._0_1_ = 6;
        cVar4 = FUN_019af7b8(&local_64,&local_44);
        if ((uint)(int)cVar4 < 0x80000000) {
          uVar16 = uVar11 + 1;
          puVar10 = param_3;
        }
        else {
          uVar16 = uVar11;
          puVar10 = (uint *)((int)puVar23 + iVar8 + -0xc);
        }
        puVar10 = puVar10 + uVar11 * 3;
        uVar11 = *puVar7;
        uVar20 = puVar7[1];
        uVar21 = puVar7[2];
        *puVar10 = uVar11;
        puVar10[1] = uVar20;
        puVar10[2] = uVar21;
        local_64 = (byte *)puVar5[1];
        local_60 = puVar5[2];
        if (local_60 != 0) {
          uVar11 = LZCOUNT(*local_64 - 0x2f);
        }
        local_48 = 0x201;
        local_44 = *(byte **)((int)puVar12 + (0x10 - iVar8));
        local_40 = *(int *)((int)puVar12 + (0x14 - iVar8));
        if (local_60 != 0) {
          uVar18 = (undefined1)(uVar11 >> 5);
        }
        bVar25 = local_40 != 0;
        local_5c = 6;
        uVar11 = 0;
        if (bVar25) {
          uVar11 = (uint)*local_44;
        }
        uVar19 = 0;
        if (bVar25) {
          uVar11 = LZCOUNT(uVar11 - 0x2f);
        }
        local_28 = 0x201;
        if (bVar25) {
          uVar11 = uVar11 >> 5;
        }
        local_26 = (undefined1)uVar11;
        local_3c[0]._0_1_ = 6;
        local_46 = uVar18;
        cVar4 = FUN_019af7b8(&local_64,&local_44);
        if ((uint)(int)cVar4 < 0x80000000) {
          uVar11 = uVar16 + 1;
          puVar10 = param_3;
        }
        else {
          uVar11 = uVar16;
          puVar10 = (uint *)((int)puVar23 + iVar8 + -0x18);
        }
        puVar10 = puVar10 + uVar16 * 3;
        uVar16 = *(uint *)((int)puVar12 + (0x10 - iVar8));
        uVar20 = *(uint *)((int)puVar12 + (0x14 - iVar8));
        *puVar10 = *(uint *)((int)puVar12 + (0xc - iVar8));
        puVar10[1] = uVar16;
        puVar10[2] = uVar20;
        local_64 = (byte *)puVar5[1];
        local_60 = puVar5[2];
        if (local_60 != 0) {
          uVar16 = LZCOUNT(*local_64 - 0x2f);
        }
        local_48 = 0x201;
        local_44 = *(byte **)((int)puVar12 + (0x1c - iVar8));
        local_40 = *(int *)((int)puVar12 + (0x20 - iVar8));
        if (local_60 != 0) {
          uVar19 = (undefined1)(uVar16 >> 5);
        }
        bVar25 = local_40 != 0;
        local_5c = 6;
        uVar16 = 0;
        if (bVar25) {
          uVar16 = (uint)*local_44;
        }
        bVar2 = 0;
        if (bVar25) {
          uVar16 = LZCOUNT(uVar16 - 0x2f);
        }
        local_28 = 0x201;
        if (bVar25) {
          uVar16 = uVar16 >> 5;
        }
        local_26 = (undefined1)uVar16;
        local_3c[0]._0_1_ = 6;
        local_46 = uVar19;
        cVar4 = FUN_019af7b8(&local_64,&local_44);
        if ((uint)(int)cVar4 < 0x80000000) {
          uVar16 = uVar11 + 1;
          puVar10 = param_3;
        }
        else {
          uVar16 = uVar11;
          puVar10 = (uint *)((int)puVar23 + iVar8 + -0x24);
        }
        puVar10 = puVar10 + uVar11 * 3;
        uVar11 = puVar7[7];
        uVar20 = puVar7[8];
        *puVar10 = puVar7[6];
        puVar10[1] = uVar11;
        puVar10[2] = uVar20;
        local_64 = (byte *)puVar5[1];
        local_60 = puVar5[2];
        if (local_60 != 0) {
          uVar11 = LZCOUNT(*local_64 - 0x2f);
        }
        local_48 = 0x201;
        local_44 = *(byte **)((int)puVar12 + (0x28 - iVar8));
        local_40 = *(uint *)((int)puVar12 + (0x2c - iVar8));
        if (local_60 != 0) {
          bVar2 = (byte)(uVar11 >> 5);
        }
        local_5c = 6;
        if (local_40 == 0) {
          local_26 = false;
        }
        else {
          local_26 = *local_44 == 0x2f;
        }
        local_28 = 0x201;
        local_3c[0] = CONCAT31(local_3c[0]._1_3_,6);
        local_46 = bVar2;
        cVar4 = FUN_019af7b8(&local_64,&local_44);
        if ((uint)(int)cVar4 < 0x80000000) {
          uVar11 = uVar16 + 1;
          puVar10 = param_3;
        }
        else {
          uVar11 = uVar16;
          puVar10 = (uint *)((int)puVar23 + iVar8 + -0x30);
        }
        iVar24 = iVar8 + -0x30;
        puVar10 = puVar10 + uVar16 * 3;
        uVar16 = *(uint *)((int)puVar12 + (0x28 - iVar8));
        uVar20 = *(uint *)((int)puVar12 + (0x2c - iVar8));
        puVar7 = puVar7 + 0xc;
        *puVar10 = *(uint *)((int)puVar12 + (0x24 - iVar8));
        puVar10[1] = uVar16;
        puVar10[2] = uVar20;
        iVar8 = iVar24;
      } while (puVar7 < param_1 + iVar6 * 3);
      puVar23 = (uint *)((int)puVar23 + iVar24);
      puVar12 = puVar7;
    }
    for (; puVar12 < param_1 + uVar13 * 3; puVar12 = puVar12 + 3) {
      local_64 = (byte *)puVar5[1];
      local_60 = puVar5[2];
      uVar16 = 0;
      local_26 = false;
      if (local_60 != 0) {
        uVar16 = LZCOUNT(*local_64 - 0x2f);
      }
      local_44 = (byte *)puVar12[1];
      local_40 = puVar12[2];
      if (local_60 != 0) {
        uVar16 = uVar16 >> 5;
      }
      local_46 = (byte)uVar16;
      local_5c = 6;
      local_48 = 0x201;
      if (local_40 != 0) {
        local_26 = *local_44 == 0x2f;
      }
      local_3c[0] = CONCAT31(local_3c[0]._1_3_,6);
      local_28 = 0x201;
      cVar4 = FUN_019af7b8(&local_64,&local_44);
      puVar23 = puVar23 + -3;
      puVar7 = puVar23;
      uVar16 = uVar11;
      if ((uint)(int)cVar4 < 0x80000000) {
        uVar16 = uVar11 + 1;
        puVar7 = param_3;
      }
      puVar7 = puVar7 + uVar11 * 3;
      uVar11 = puVar12[1];
      uVar20 = puVar12[2];
      *puVar7 = *puVar12;
      puVar7[1] = uVar11;
      puVar7[2] = uVar20;
      uVar11 = uVar16;
    }
    if (uVar13 == uVar9) break;
    puVar7 = param_3 + uVar11 * 3;
    uVar13 = *puVar12;
    uVar16 = puVar12[1];
    uVar20 = puVar12[2];
    puVar12 = puVar12 + 3;
    uVar11 = uVar11 + 1;
    puVar23 = puVar23 + -3;
    *puVar7 = uVar13;
    puVar7[1] = uVar16;
    puVar7[2] = uVar20;
    uVar13 = uVar9;
  }
  FUN_01bed4e2(param_1,param_3,uVar11 * 0xc);
  param_2 = uVar9 - uVar11;
  if (param_2 == 0) {
    return;
  }
  param_1 = param_1 + uVar11 * 3;
  puVar23 = param_3 + uVar9 * 3 + -3;
  puVar12 = param_1;
  uVar13 = param_2;
  do {
    uVar16 = *puVar23;
    uVar20 = puVar23[1];
    uVar21 = puVar23[2];
    puVar23 = puVar23 + -3;
    uVar13 = uVar13 - 1;
    *puVar12 = uVar16;
    puVar12[1] = uVar20;
    puVar12[2] = uVar21;
    puVar12 = puVar12 + 3;
  } while (uVar13 != 0);
  if (uVar9 < uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar11,uVar9,uVar9,&DAT_01d30598);
  }
  local_ac = 0;
  if (param_2 < 0x21) goto LAB_0117f2d8;
  goto LAB_0117e5f4;
}

