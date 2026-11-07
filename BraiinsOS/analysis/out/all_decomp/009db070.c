// FUN_009db070 @ 009db070 size=2540 calls_out=15 calls_in=0
// strings: stderr | Span not found; this is a bugnewtime.busytime.idleenter

/* WARNING: Type propagation algorithm not settling */

void FUN_009db070(undefined4 *****param_1,undefined4 ****param_2,undefined4 param_3,
                 undefined4 param_4,uint param_5,uint param_6,int param_7)

{
  undefined1 uVar1;
  byte bVar2;
  bool bVar3;
  undefined4 ****ppppuVar4;
  undefined4 **ppuVar5;
  uint *puVar6;
  int iVar7;
  undefined4 ***pppuVar8;
  uint uVar9;
  int *extraout_r2;
  uint uVar10;
  undefined4 **ppuVar11;
  undefined4 ****ppppuVar12;
  uint uVar13;
  undefined4 ****ppppuVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined4 **ppuVar17;
  int iVar18;
  int iVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  int local_e4;
  int local_e0;
  undefined4 *****local_bc;
  undefined4 ****local_b8;
  undefined4 ****local_b4;
  undefined4 ***local_b0;
  uint local_ac;
  undefined4 local_a8;
  int local_a4;
  undefined4 *******local_a0;
  code *local_9c;
  undefined4 ******local_98;
  code *local_94;
  undefined4 *******local_90;
  undefined4 **local_8c;
  undefined4 *******local_88;
  undefined *local_84;
  undefined4 ***local_80;
  undefined4 ******local_78;
  undefined4 local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  undefined4 *******local_64;
  undefined *local_60;
  undefined *local_5c;
  undefined4 *******local_58;
  undefined *local_54;
  undefined4 ***local_50;
  undefined4 *local_4c;
  undefined4 local_48;
  undefined4 *******local_40;
  undefined4 local_3c;
  undefined4 ******local_38;
  undefined4 *****local_30;
  undefined4 *******local_2c;
  code *local_28;
  
  uVar23 = thunk_FUN_016de0ee(param_1,0x80);
  puVar6 = (uint *)((int)uVar23 + (int)((ulonglong)uVar23 >> 0x20));
  ppppuVar12 = param_1[10];
  ppppuVar14 = param_1[0xb];
  uVar9 = 0xffffffff;
  if ((*puVar6 & (uint)ppppuVar12) != 0 || (puVar6[1] & (uint)ppppuVar14) != 0) {
    uVar10 = 0xffffffff;
    if (ppppuVar12 != (undefined4 ****)0xffffffff || ppppuVar14 != (undefined4 ****)0xffffffff) {
      uVar9 = ~(uint)ppppuVar12;
      uVar10 = ~(uint)ppppuVar14;
    }
    *puVar6 = uVar9 & *puVar6;
    puVar6[1] = uVar10 & puVar6[1];
    return;
  }
  iVar19 = *extraout_r2;
  iVar18 = extraout_r2[1];
  if (param_5 != 0xffffffff || param_6 != 0xffffffff) {
    ppppuVar14 = (undefined4 ****)((uint)ppppuVar14 | param_6);
    ppppuVar12 = (undefined4 ****)((uint)ppppuVar12 | param_5);
  }
  local_bc = (undefined4 *****)param_2;
  if ((param_7 == 0) ||
     (FUN_016a4f80(&local_b8,param_7,iVar19 + -1), ppppuVar4 = local_b8,
     local_b8 == (undefined4 ****)0x0)) {
LAB_009dba48:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("Span not found, this is a bugnewtime.busytime.idleenter",0x1d,&DAT_0186b52c);
  }
  local_94 = (code *)local_b4;
  local_90 = (undefined4 *******)local_b0;
  local_9c = (code *)0x0;
  local_a0 = (undefined4 *******)0x0;
  local_8c = (undefined4 **)param_7;
  local_98 = (undefined4 ******)local_b8;
  if (((uint)*local_b8 & (uint)ppppuVar12) != 0 || ((uint)local_b8[1] & (uint)ppppuVar14) != 0) {
    FUN_009ee6c0();
    goto LAB_009dba48;
  }
  local_a8 = local_b0;
  local_ac = (uint)local_b4;
  local_a4 = param_7;
  local_b0 = local_b8;
  local_b8 = ppppuVar12;
  local_b4 = ppppuVar14;
  uVar24 = FUN_016a11a4(ppppuVar4);
  puVar6 = (uint *)uVar24;
  if (puVar6[6] != 0) {
    uVar22 = puVar6[3];
    uVar9 = puVar6[4];
    local_e0 = 0;
    uVar10 = uVar9 & 0xb36486b9;
    while( true ) {
      uVar13 = *(uint *)(uVar22 + uVar10);
      uVar21 = (uVar13 & 0x80808080 ^ 0x80808080) & (uVar13 ^ 0x59595959) + 0xfefefeff;
      while (uVar21 != 0) {
        uVar15 = uVar10 + ((uint)LZCOUNT(uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 |
                                         (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18) >> 3) &
                 uVar9;
        piVar20 = (int *)((uVar22 - 0x18) + uVar15 * -0x18);
        uVar21 = uVar21 - 1 & uVar21;
        if ((*piVar20 == -0xa1a2068 && piVar20[2] == -0x4c9b7947) &&
            (piVar20[1] == 0x66389fa0 && piVar20[3] == 0x2259fa41)) {
          iVar7 = uVar22 + uVar15 * -0x18;
          (**(code **)(*(int *)(iVar7 + -4) + 0xc))(&local_a0,*(undefined4 *)(iVar7 + -8));
          if ((local_a0 == (undefined4 *******)0xf5e5df98 &&
              local_98 == (undefined4 ******)0xb36486b9) &&
              (local_9c == (code *)0x66389fa0 && local_94 == (code *)0x2259fa41)) goto LAB_009db484;
          goto LAB_009db334;
        }
      }
      if ((uVar13 & 0x80808080 & uVar13 << 1) != 0) break;
      local_e0 = local_e0 + 4;
      uVar10 = uVar10 + local_e0 & uVar9;
    }
  }
LAB_009db334:
  local_50 = (undefined4 ***)0x0;
  local_a0 = &local_58;
  local_54 = (undefined *)0x1;
  local_58 = (undefined4 *******)0x0;
  local_4c = (undefined4 *)((uint)local_4c & 0xffffff00);
  uVar1 = *(undefined1 *)((int)param_1 + 0x16);
  pppuVar8 = param_2[5];
  local_94 = (code *)CONCAT22(local_94._2_2_,1);
  local_98 = (undefined4 ******)CONCAT31(local_98._1_3_,uVar1);
  local_9c = (code *)&DAT_0186b53c;
  if (pppuVar8[1] != (undefined4 **)0x0) {
    puVar16 = pppuVar8[2][2];
    ppuVar17 = *pppuVar8 + 1;
    iVar7 = (int)pppuVar8[1] * 0xc;
    do {
      if (((undefined4 *)ppuVar17[-1][2] == puVar16) && (*ppuVar17 != (undefined4 *)0x0)) {
        (*(code *)ppuVar17[1][3])(*ppuVar17,ppuVar17[-1],&local_a0,&DAT_0186b4f8);
      }
      ppuVar17 = ppuVar17 + 3;
      iVar7 = iVar7 + -0xc;
    } while (iVar7 != 0);
    if (((uint)local_94 & 0x100) != 0) {
      local_2c = (undefined4 *******)&local_bc;
      local_28 = FUN_00a037ac;
      local_60 = (undefined *)0x6;
      local_64 = (undefined4 *******)0x40ff20;
      FUN_015ee5cc(&local_40,&DAT_018dd9d8,&DAT_0057b54c,&local_2c);
      if ((char)local_40 != '\x04') {
        local_94 = FUN_015ef5b4;
        local_98 = &local_78;
        local_a0 = &local_64;
        local_74 = local_3c;
        local_78 = local_40;
        local_9c = (code *)&DAT_015bee04;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_0056faa6,&local_a0,&DAT_018aab78);
      }
      if (local_58 != (undefined4 *******)0x0) {
        thunk_FUN_016d3fb4(local_54);
      }
      goto LAB_009db484;
    }
  }
  local_4c = (undefined4 *)CONCAT31(local_4c._1_3_,uVar1);
  local_a0 = local_58;
  local_9c = (code *)local_54;
  local_98 = (undefined4 ******)local_50;
  local_94 = (code *)local_4c;
  FUN_009fdcf8(puVar6,&local_a0);
LAB_009db484:
  bVar2 = *(byte *)((int)param_1 + 0x15);
  if ((*(char *)(param_1 + 5) == '\x01') && ((bVar2 & 8) != 0)) {
    if (puVar6[6] != 0) {
      uVar9 = puVar6[3];
      uVar10 = puVar6[4];
      local_e4 = 0;
      uVar22 = uVar10 & 0x852d8214;
      while( true ) {
        uVar13 = *(uint *)(uVar9 + uVar22);
        uVar21 = (uVar13 & 0x80808080 ^ 0x80808080) & (uVar13 ^ 0x42424242) + 0xfefefeff;
        while (uVar21 != 0) {
          uVar15 = uVar22 + ((uint)LZCOUNT(uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 |
                                           (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18) >> 3) &
                   uVar10;
          piVar20 = (int *)((uVar9 - 0x18) + uVar15 * -0x18);
          uVar21 = uVar21 - 1 & uVar21;
          if ((*piVar20 == 0x51809c7c && piVar20[2] == -0x7ad27dec) &&
              (piVar20[1] == 0x4a853532 && piVar20[3] == 0x7af5abf6)) {
            iVar7 = uVar9 + uVar15 * -0x18;
            (**(code **)(*(int *)(iVar7 + -4) + 0xc))(&local_a0,*(undefined4 *)(iVar7 + -8));
            if ((local_a0 == (undefined4 *******)0x51809c7c &&
                local_98 == (undefined4 ******)0x852d8214) &&
                (local_9c == (code *)0x4a853532 && local_94 == (code *)0x7af5abf6))
            goto LAB_009db680;
            goto LAB_009db630;
          }
        }
        if ((uVar13 & 0x80808080 & uVar13 << 1) != 0) break;
        local_e4 = local_e4 + 4;
        uVar22 = uVar22 + local_e4 & uVar10;
      }
    }
LAB_009db630:
    FUN_015f3b0c(&local_58,1);
    local_90 = (undefined4 *******)0x0;
    local_8c = (undefined4 **)0x0;
    local_88 = local_58;
    local_84 = local_54;
    local_a0 = (undefined4 *******)0x0;
    local_9c = (code *)0x0;
    local_98 = (undefined4 ******)0x0;
    local_94 = (code *)0x0;
    local_80 = local_50;
    FUN_009fd860(puVar6,&local_a0);
  }
LAB_009db680:
  if ((bVar2 & 1) != 0) {
    local_8c = ppppuVar4[0xc];
    local_5c = &DAT_0186b55c;
    local_64 = &local_58;
    local_38 = &local_78;
    local_70 = local_8c[9];
    local_6c = local_8c[10];
    local_40 = &local_64;
    local_90 = &local_40;
    local_78 = (undefined4 ******)&DAT_018aeb80;
    local_58 = (undefined4 *******)&DAT_018aeb80;
    local_48 = 0;
    local_9c = (code *)0x0;
    local_74 = 1;
    local_60 = &DAT_0186b554;
    local_54 = (undefined *)0x1;
    local_3c = 1;
    local_a0 = (undefined4 *******)0x2;
    local_98 = (undefined4 ******)iVar19;
    local_94 = (code *)iVar18;
    local_50 = (undefined4 ***)local_70;
    local_4c = local_6c;
    if ((((uVar24 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar18 = FUN_015bf3f8(), iVar18 == 0)) {
      *(undefined1 *)(puVar6 + 2) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      uVar9 = *puVar6;
      bVar3 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar3);
    *puVar6 = uVar9 + 0xc0000001;
    if (0x3fffffff < uVar9 + 0xc0000001) {
      FUN_015e9814(puVar6);
    }
    ppuVar17 = local_b0[0xe];
    pppuVar8 = local_b0 + 0xe;
    DataMemoryBarrier(0xb);
    do {
      if (((uint)ppuVar17 & 3) == 2) {
        local_30 = (undefined4 *****)0x2;
        local_28 = FUN_00facc48;
        local_2c = (undefined4 *******)&local_30;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_0041504f,&local_2c,&DAT_018ae754);
      }
      uVar9 = ((uint)ppuVar17 & 0x3fffffff) >> 2;
      uVar22 = (uint)ppuVar17 & 3 ^ 1;
      ppuVar11 = (undefined4 **)((uint)ppuVar17 & 0xc0000000 | 3);
      uVar10 = uVar9 ^ 1;
      if (uVar22 != 0 || uVar10 != 0) {
        ppuVar11 = (undefined4 **)(uVar9 * 4 - 4 | (uint)ppuVar17 & 0xc0000003);
      }
      ppuVar5 = *pppuVar8;
      if (*pppuVar8 == ppuVar17) {
        DataMemoryBarrier(0xb);
        do {
          bVar3 = (bool)hasExclusiveAccess(pppuVar8);
          if (bVar3) {
            *pppuVar8 = ppuVar11;
            DataMemoryBarrier(0xb);
            if (uVar22 == 0 && uVar10 == 0) {
              FUN_009ebe80(local_ac,local_a8);
            }
            local_2c = &local_a0;
            local_30 = param_1;
            FUN_009e38c0(&local_30,&local_2c);
            return;
          }
          ppuVar5 = *pppuVar8;
        } while (*pppuVar8 == ppuVar17);
      }
      ppuVar17 = ppuVar5;
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    } while( true );
  }
  if ((((uVar24 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar18 = FUN_015bf3f8(), iVar18 == 0)) {
    *(undefined1 *)(puVar6 + 2) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    uVar9 = *puVar6;
    bVar3 = (bool)hasExclusiveAccess(puVar6);
  } while (!bVar3);
  *puVar6 = uVar9 + 0xc0000001;
  if (0x3fffffff < uVar9 + 0xc0000001) {
    FUN_015e9814(puVar6);
  }
  ppuVar17 = local_b0[0xe];
  pppuVar8 = local_b0 + 0xe;
  DataMemoryBarrier(0xb);
  do {
    if (((uint)ppuVar17 & 3) == 2) {
      local_58 = (undefined4 *******)0x2;
      local_9c = FUN_00facc48;
      local_a0 = &local_58;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0041504f,&local_a0,&DAT_018ae754);
    }
    uVar9 = ((uint)ppuVar17 & 0x3fffffff) >> 2;
    uVar22 = (uint)ppuVar17 & 3 ^ 1;
    ppuVar11 = (undefined4 **)((uint)ppuVar17 & 0xc0000000 | 3);
    uVar10 = uVar9 ^ 1;
    if (uVar22 != 0 || uVar10 != 0) {
      ppuVar11 = (undefined4 **)(uVar9 * 4 - 4 | (uint)ppuVar17 & 0xc0000003);
    }
    ppuVar5 = *pppuVar8;
    if (*pppuVar8 == ppuVar17) {
      DataMemoryBarrier(0xb);
      do {
        bVar3 = (bool)hasExclusiveAccess(pppuVar8);
        if (bVar3) {
          *pppuVar8 = ppuVar11;
          DataMemoryBarrier(0xb);
          if (uVar22 == 0 && uVar10 == 0) {
            FUN_009ebe80(local_ac,local_a8);
            return;
          }
          return;
        }
        ppuVar5 = *pppuVar8;
      } while (*pppuVar8 == ppuVar17);
    }
    ppuVar17 = ppuVar5;
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
  } while( true );
}

