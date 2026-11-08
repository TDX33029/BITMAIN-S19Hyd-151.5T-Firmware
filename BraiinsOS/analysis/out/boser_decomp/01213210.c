// FUN_01213210 @ 01213210 size=2900 calls_out=30 calls_in=0
// strings: Unable to allocate another spanevent open/boser/boser-unix/src/telemetry.rs:116

/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_01213210(int *param_1,uint ***param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint ****ppppuVar6;
  undefined4 uVar7;
  uint uVar8;
  uint ***extraout_r1;
  uint *****pppppuVar9;
  uint ***pppuVar10;
  uint uVar11;
  uint uVar12;
  int extraout_r2;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined4 *extraout_r3;
  uint uVar16;
  uint ****ppppuVar17;
  uint *puVar18;
  uint ****ppppuVar19;
  code *pcVar20;
  undefined4 ****ppppuVar21;
  uint *puVar22;
  uint ****ppppuVar23;
  undefined4 *****pppppuVar24;
  uint uVar25;
  bool bVar26;
  undefined8 uVar27;
  ulonglong uVar28;
  int local_394;
  uint ****local_368;
  code *local_364;
  uint ***local_35c;
  undefined1 auStack_358 [344];
  uint ****local_200;
  code *local_1fc;
  undefined4 *****local_1f8;
  code *local_1f4;
  undefined4 *****local_1f0;
  undefined4 *****local_1ec;
  uint ****local_1e8;
  code *local_1e4;
  uint ****local_1e0;
  uint ***local_a4;
  uint ****local_a0;
  code *local_9c;
  uint ****local_98;
  code *pcStack_94;
  uint ****ppppuStack_90;
  undefined4 *****local_8c;
  undefined4 *local_84;
  undefined4 local_80;
  undefined4 ****local_7c;
  undefined4 ****local_78;
  uint **local_74;
  undefined *local_70;
  undefined *local_6c;
  uint *local_68;
  undefined4 local_64;
  undefined4 ****local_60;
  undefined4 ****ppppuStack_5c;
  undefined4 uStack_58;
  uint ***local_54;
  undefined4 local_50;
  undefined4 **local_4c;
  uint ****local_48;
  code *local_44;
  uint ****local_40;
  code *local_3c;
  uint ****local_38;
  undefined4 *****local_34;
  uint ****local_2c [2];
  
  ppppuVar19 = (uint ****)(param_1 + 0x240);
  if (((uint)*param_2 & 3) == 0) {
    uVar27 = 0;
    pppuVar10 = param_2;
  }
  else {
    if (*param_2 == (uint **)0x1) {
      FUN_01ab9984(&local_200,ppppuVar19);
      param_3 = 0;
      param_4 = 0;
      uVar27 = 0;
      pppuVar10 = extraout_r1;
      if (local_200 != (uint ****)0x0) goto LAB_01213284;
      pppppuVar9 = (uint *****)&local_1f8;
    }
    else {
      pppppuVar9 = (uint *****)(param_2 + 2);
    }
    uVar27 = FUN_01ab985c(ppppuVar19,pppppuVar9,param_3,param_4);
    pppuVar10 = (uint ***)((ulonglong)uVar27 >> 0x20);
  }
LAB_01213284:
  uVar28 = FUN_01ab3a74(ppppuVar19,pppuVar10,(int)uVar27,(int)((ulonglong)uVar27 >> 0x20),param_2[4]
                       );
  if ((uVar28 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("Unable to allocate another spanevent open/boser/boser-unix/src/telemetry.rs:116",
                 0x1f,&DAT_01c23d44);
  }
  pppppuVar24 = (undefined4 *****)(param_1 + 0x120);
  uVar27 = thunk_FUN_01bee35a(&local_1f0,(int)(uVar28 >> 0x20),0x60,param_1 + 0x14);
  uVar11 = (uint)((ulonglong)uVar27 >> 0x20);
  ppppuVar17 = (uint ****)extraout_r3[0x22a];
  puVar22 = (uint *)((int)uVar27 + extraout_r2);
  ppppuVar23 = (uint ****)(uVar11 + 1);
  pcVar20 = (code *)extraout_r3[0x22b];
  pcVar1 = (code *)(uint)(0xfffffffe < uVar11);
  uVar25 = 0xffffffff;
  local_368 = ppppuVar23;
  local_364 = pcVar1;
  if ((*puVar22 & (uint)ppppuVar17) == 0 && (puVar22[1] & (uint)pcVar20) == 0) {
    FUN_012674d8(pppppuVar24,param_2,&local_368);
    local_35c = param_2;
    FUN_01ab9f1c(&local_48,ppppuVar19,ppppuVar23,pcVar1);
    ppppuVar6 = local_40;
    if (local_34 == (undefined4 *****)0x0) goto LAB_01213d54;
    local_200 = local_48;
    local_1fc = local_44;
    local_1f8 = (undefined4 *****)local_40;
    local_1f4 = local_3c;
    local_1f0 = (undefined4 *****)local_38;
    local_1ec = local_34;
    if (((uint)*local_40 & (uint)ppppuVar17) == 0 && ((uint)local_40[1] & (uint)pcVar20) == 0) {
      local_48 = local_40;
      local_44 = local_3c;
      local_40 = local_38;
      local_98 = ppppuVar6;
      pcStack_94 = local_3c;
      ppppuStack_90 = local_38;
      local_8c = local_34;
      local_a0 = ppppuVar17;
      local_9c = pcVar20;
      uVar27 = FUN_01ab96a8(ppppuVar6);
      uVar7 = (undefined4)uVar27;
      uVar13 = (uint)((ulonglong)uVar27 >> 0x20) & 1;
      iVar15 = FUN_01ab8994(uVar7);
      if (iVar15 == 0) {
        local_40 = (uint ****)0x0;
        local_1fc = (code *)&DAT_01d2f100;
        local_48 = (uint ****)0x0;
        local_3c = (code *)((uint)local_3c & 0xffffff00);
        local_1f4 = (code *)CONCAT22(local_1f4._2_2_,1);
        local_200 = (uint ****)&local_48;
        local_44 = (code *)0x1;
        local_1f8 = (undefined4 *****)
                    CONCAT31(local_1f8._1_3_,*(undefined1 *)((int)param_1 + 0x8f6));
        FUN_01aacd68(param_2[5],&local_200,&DAT_01d2f1d8);
        if (((uint)local_1f4 & 0x100) == 0) {
          local_3c = (code *)CONCAT31(local_3c._1_3_,*(undefined1 *)((int)param_1 + 0x8f6));
          local_200 = local_48;
          local_1fc = local_44;
          local_1f8 = (undefined4 *****)local_40;
          local_1f4 = local_3c;
          FUN_01ab8828(uVar7,&local_200);
        }
        else {
          local_200 = &local_35c;
          local_1fc = FUN_01ab2740;
          FUN_019a896c(&DAT_0057df62,&local_200);
          FUN_019bb7e0(local_48,local_44);
        }
      }
      bVar26 = (char)param_1[0x23d] != '\0';
      bVar2 = 0;
      if (bVar26) {
        bVar2 = *(byte *)((int)param_1 + 0x8f5);
      }
      if ((bVar26 && (bVar2 & 8) != 0) && (iVar15 = FUN_01ab8a24(uVar7), iVar15 == 0)) {
        FUN_019ac130(&local_48,1);
        local_1f0 = (undefined4 *****)0x0;
        local_1ec = (undefined4 *****)0x0;
        local_1e8 = local_48;
        local_1e4 = local_44;
        local_200 = (uint ****)0x0;
        local_1fc = (code *)0x0;
        local_1f8 = (undefined4 *****)0x0;
        local_1f4 = (code *)0x0;
        local_1e0 = local_40;
        FUN_01ab83f4(uVar7,&local_200);
      }
      if ((*(byte *)((int)param_1 + 0x8f5) & 1) == 0) {
        FUN_01ac2a34(uVar7,uVar13);
        FUN_01ab4580(&local_98);
      }
      else {
        local_34 = (undefined4 *****)ppppuVar6[0xc];
        local_74 = &local_68;
        local_7c = local_34[9];
        local_78 = local_34[10];
        uStack_58 = 0;
        local_4c = &local_84;
        local_54 = &local_74;
        local_48 = (uint ****)0x2;
        local_38 = &local_54;
        local_80 = 1;
        local_84 = &DAT_01d2f7e0;
        local_6c = &DAT_01c24094;
        local_70 = &DAT_01d2f068;
        local_64 = 1;
        local_68 = &DAT_01d2f7e0;
        local_50 = 1;
        local_44 = (code *)0x0;
        local_60 = local_7c;
        ppppuStack_5c = local_78;
        local_40 = ppppuVar23;
        local_3c = pcVar1;
        FUN_01ac2a34(uVar7,uVar13);
        local_200 = local_a0;
        local_1fc = local_9c;
        local_1f8 = (undefined4 *****)local_98;
        local_1f4 = pcStack_94;
        local_1f0 = (undefined4 *****)ppppuStack_90;
        local_1ec = local_8c;
        FUN_01ab4580(&local_1f8);
        local_2c[0] = (uint ****)&local_48;
        local_1ec = local_2c;
        local_1f0 = (undefined4 *****)&local_a4;
        local_200 = ppppuVar17;
        local_1fc = pcVar20;
        local_1f8 = (undefined4 *****)ppppuVar19;
        local_a4 = (uint ***)(param_1 + 0x224);
        FUN_01208308(&local_200);
      }
      uVar13 = *puVar22;
      uVar12 = puVar22[1];
      goto LAB_01213644;
    }
  }
  else {
    uVar12 = 0xffffffff;
    if (ppppuVar17 != (uint ****)&DAT_ffffffff || pcVar20 != (code *)0xffffffff) {
      uVar12 = ~(uint)pcVar20;
    }
    uVar12 = puVar22[1] & uVar12;
    uVar13 = 0xffffffff;
    if (ppppuVar17 != (uint ****)&DAT_ffffffff || pcVar20 != (code *)0xffffffff) {
      uVar13 = ~(uint)ppppuVar17;
    }
    uVar13 = *puVar22 & uVar13;
    *puVar22 = uVar13;
    puVar22[1] = uVar12;
LAB_01213644:
    ppppuVar21 = (undefined4 ****)extraout_r3[0x10a];
    uVar16 = extraout_r3[0x10b];
    if ((uVar13 & (uint)ppppuVar21) != 0 || (uVar12 & uVar16) != 0) {
      uVar14 = 0xffffffff;
      if (ppppuVar21 != (undefined4 ****)0xffffffff || uVar16 != 0xffffffff) {
        uVar25 = ~(uint)ppppuVar21;
        uVar14 = ~uVar16;
      }
      *puVar22 = uVar13 & uVar25;
      puVar22[1] = uVar12 & uVar14;
      goto LAB_01213bb0;
    }
    puVar22 = (uint *)(param_1 + 0xc);
    uVar25 = param_1[0xc];
    if (uVar25 < 0x3ffffffe) {
      if (*puVar22 != uVar25) {
        ClearExclusiveLocal();
        goto LAB_01213c60;
      }
      bVar26 = (bool)hasExclusiveAccess(puVar22);
      if (!bVar26) goto LAB_01213c60;
      *puVar22 = uVar25 + 1;
      DataMemoryBarrier(0xb);
    }
    else {
LAB_01213c60:
      FUN_0197a5c8(puVar22);
    }
    if ((char)param_1[0xe] == '\0') {
      if (param_1[0x13] != 0) {
        puVar18 = param_2[4][9];
        uVar13 = FUN_01ab33ec(*extraout_r3,extraout_r3[1],extraout_r3[2],extraout_r3[3],puVar18,
                              param_2[4][10]);
        iVar15 = param_1[0x10];
        uVar25 = uVar13 >> 0x19;
        local_394 = 0;
        do {
          uVar13 = param_1[0x11] & uVar13;
          uVar14 = *(uint *)(iVar15 + uVar13);
          uVar12 = uVar14 ^ uVar25 * 0x1010101;
          uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff;
          while (uVar12 != 0) {
            uVar8 = uVar12 >> 8;
            uVar3 = uVar12 >> 0x10;
            uVar4 = uVar12 >> 0x18;
            uVar5 = uVar12 << 0x18;
            uVar12 = uVar12 - 1 & uVar12;
            uVar8 = uVar13 + ((uint)LZCOUNT(uVar5 | (uVar8 & 0xff) << 0x10 | (uVar3 & 0xff) << 8 |
                                            uVar4) >> 3) & param_1[0x11];
            if (puVar18 == *(uint **)(iVar15 + -0x160 + uVar8 * -0x160)) {
              FUN_01ab4ad4(auStack_358,uVar8 * -0x160 + iVar15 + -0x158,param_2);
              if (*param_1 == 0) {
                bVar26 = (bool)hasExclusiveAccess(param_1);
                if (!bVar26) goto LAB_01213c78;
                *param_1 = 0x3fffffff;
                DataMemoryBarrier(0xb);
              }
              else {
                ClearExclusiveLocal();
LAB_01213c78:
                FUN_019ae2e0();
              }
              uVar25 = 0;
              if ((DAT_01d51b08 & 0x7fffffff) != 0) {
                uVar25 = FUN_0197ac0c();
                uVar25 = uVar25 ^ 1;
              }
              if ((char)param_1[2] != '\0') {
                if (((DAT_01d51b08 & 0x7fffffff) == 0) || (iVar15 = FUN_0197ac0c(), iVar15 != 0)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01979f74(&DAT_00531614,0xd,&DAT_01c25344);
                }
                FUN_01ac2a34(param_1,uVar25);
                FUN_01ab1fe0(auStack_358);
                DataMemoryBarrier(0xb);
                do {
                  uVar25 = *puVar22 - 1;
                  bVar26 = (bool)hasExclusiveAccess(puVar22);
                } while (!bVar26);
                *puVar22 = uVar25;
                goto LAB_01213874;
              }
              FUN_01ab917c(&local_200,param_1 + 4,ppppuVar23,pcVar1,auStack_358);
              if (local_200 != (uint ****)0x2) {
                FUN_01ab1fe0(&local_200);
              }
              FUN_01ac2a34(param_1,uVar25);
              goto LAB_01213850;
            }
          }
          if ((uVar14 & 0x80808080 & uVar14 << 1) != 0) break;
          local_394 = local_394 + 4;
          uVar13 = uVar13 + local_394;
        } while( true );
      }
LAB_01213850:
      DataMemoryBarrier(0xb);
      do {
        uVar25 = *puVar22 - 1;
        bVar26 = (bool)hasExclusiveAccess(puVar22);
      } while (!bVar26);
      *puVar22 = uVar25;
    }
    else {
      if (((DAT_01d51b08 & 0x7fffffff) == 0) || (iVar15 = FUN_0197ac0c(), iVar15 != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01979f74(&DAT_00531614,0xd,&DAT_01c25354);
      }
      DataMemoryBarrier(0xb);
      do {
        uVar25 = *puVar22 - 1;
        bVar26 = (bool)hasExclusiveAccess(puVar22);
      } while (!bVar26);
      *puVar22 = uVar25;
    }
LAB_01213874:
    if ((uVar25 & 0xbfffffff) == 0x80000000) {
      FUN_019a33c4(puVar22);
    }
    local_a4 = param_2;
    FUN_01ab440c(&local_48,ppppuVar19,uVar11);
    ppppuVar19 = local_48;
    if (local_48 == (uint ****)0x0) goto LAB_01213d54;
    local_1f4 = local_44;
    local_1f0 = (undefined4 *****)local_40;
    local_1fc = (code *)0x0;
    local_200 = (uint ****)0x0;
    local_1f8 = (undefined4 *****)local_48;
    local_1ec = pppppuVar24;
    if (((uint)*local_48 & (uint)ppppuVar21) == 0 && ((uint)local_48[1] & uVar16) == 0) {
      local_98 = local_48;
      pcStack_94 = local_44;
      ppppuStack_90 = local_40;
      local_a0 = ppppuVar21;
      local_9c = (code *)uVar16;
      local_8c = pppppuVar24;
      uVar27 = FUN_01ab96a8(local_48);
      uVar7 = (undefined4)uVar27;
      uVar25 = (uint)((ulonglong)uVar27 >> 0x20) & 1;
      iVar15 = FUN_01ab8994();
      if (iVar15 == 0) {
        local_40 = (uint ****)0x0;
        local_1fc = (code *)&DAT_01d2f100;
        local_48 = (uint ****)0x0;
        local_3c = (code *)((uint)local_3c & 0xffffff00);
        local_1f4 = (code *)CONCAT22(local_1f4._2_2_,1);
        local_200 = (uint ****)&local_48;
        local_44 = (code *)0x1;
        local_1f8 = (undefined4 *****)
                    CONCAT31(local_1f8._1_3_,*(undefined1 *)((int)param_1 + 0x476));
        FUN_01aacd68(param_2[5],&local_200,&DAT_01d2f1d8);
        if (((uint)local_1f4 & 0x100) == 0) {
          local_3c = (code *)CONCAT31(local_3c._1_3_,*(undefined1 *)((int)param_1 + 0x476));
          local_200 = local_48;
          local_1fc = local_44;
          local_1f8 = (undefined4 *****)local_40;
          local_1f4 = local_3c;
          FUN_01ab8828(uVar7,&local_200);
        }
        else {
          local_200 = &local_a4;
          local_1fc = FUN_01ab2740;
          FUN_019a896c(&DAT_0057df62,&local_200);
          FUN_019bb7e0(local_48,local_44);
        }
      }
      bVar26 = (char)param_1[0x11d] != '\0';
      bVar2 = 0;
      if (bVar26) {
        bVar2 = *(byte *)((int)param_1 + 0x475);
      }
      if ((bVar26 && (bVar2 & 8) != 0) && (iVar15 = FUN_01ab8a24(uVar7), iVar15 == 0)) {
        FUN_019ac130(&local_48,1);
        local_1f0 = (undefined4 *****)0x0;
        local_1ec = (undefined4 *****)0x0;
        local_1e8 = local_48;
        local_1e4 = local_44;
        local_200 = (uint ****)0x0;
        local_1fc = (code *)0x0;
        local_1f8 = (undefined4 *****)0x0;
        local_1f4 = (code *)0x0;
        local_1e0 = local_40;
        FUN_01ab83f4(uVar7,&local_200);
      }
      if ((*(byte *)((int)param_1 + 0x475) & 1) == 0) {
        FUN_01ac2a34(uVar7,uVar25);
        FUN_01ab4580(&local_98);
      }
      else {
        local_34 = (undefined4 *****)ppppuVar19[0xc];
        local_7c = local_34[9];
        local_78 = local_34[10];
        local_6c = &DAT_01c24094;
        local_74 = &local_68;
        uStack_58 = 0;
        local_4c = &local_84;
        local_54 = &local_74;
        local_38 = &local_54;
        local_80 = 1;
        local_84 = &DAT_01d2f7e0;
        local_70 = &DAT_01d2f068;
        local_64 = 1;
        local_68 = &DAT_01d2f7e0;
        local_50 = 1;
        local_44 = (code *)0x0;
        local_48 = (uint ****)0x2;
        local_60 = local_7c;
        ppppuStack_5c = local_78;
        local_40 = ppppuVar23;
        local_3c = pcVar1;
        FUN_01ac2a34(uVar7,uVar25);
        local_200 = local_a0;
        local_1fc = local_9c;
        local_1f8 = (undefined4 *****)local_98;
        local_1f4 = pcStack_94;
        local_1f0 = (undefined4 *****)ppppuStack_90;
        local_1ec = local_8c;
        FUN_01ab4580(&local_1f8);
        local_368 = (uint ****)&local_48;
        local_1ec = &local_368;
        local_1f0 = local_2c;
        local_200 = ppppuVar21;
        local_1fc = (code *)uVar16;
        local_1f8 = pppppuVar24;
        local_2c[0] = (uint ****)(param_1 + 0x104);
        FUN_01206e14(&local_200);
      }
LAB_01213bb0:
      return (ulonglong)CONCAT14(0xfffffffe < uVar11,ppppuVar23);
    }
  }
  FUN_01ab4580();
LAB_01213d54:
                    /* WARNING: Subroutine does not return */
  FUN_0130739c(&DAT_00531972,0x1d,&DAT_01d2f058);
}

