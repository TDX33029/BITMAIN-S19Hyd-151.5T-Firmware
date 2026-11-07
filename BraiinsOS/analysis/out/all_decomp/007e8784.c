// FUN_007e8784 @ 007e8784 size=4984 calls_out=35 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

/* WARNING: Removing unreachable block (ram,0x007e926c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_007e8784(int param_1)

{
  int iVar1;
  uint ****ppppuVar2;
  uint ****ppppuVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint ****ppppuVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  uint **ppuVar14;
  int *piVar15;
  undefined *puVar16;
  char *pcVar17;
  undefined4 ****ppppuVar18;
  uint ***pppuVar19;
  uint ****ppppuVar20;
  int *piVar21;
  uint uVar22;
  int iVar23;
  uint ***pppuVar24;
  bool bVar25;
  uint local_1c08;
  undefined *local_1be8;
  int local_1bd0;
  int *local_1bcc;
  undefined4 local_1bc8;
  int local_1bc0;
  int *piStack_1bbc;
  undefined4 uStack_1bb8;
  undefined1 auStack_1ae0 [400];
  int local_1950;
  undefined4 local_1948;
  undefined1 auStack_1944 [4096];
  uint local_944;
  uint local_940;
  int local_93c;
  undefined4 local_938;
  int local_930;
  undefined4 ***local_92c;
  undefined4 local_928;
  uint local_924 [256];
  uint local_524 [256];
  uint local_124;
  int local_120;
  undefined4 ***local_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  uint ****local_108;
  uint ****local_104;
  uint ****ppppuStack_100;
  uint ****ppppuStack_fc;
  undefined4 ****local_f4;
  uint ****local_f0;
  uint ****local_ec;
  undefined1 local_e4;
  byte bStack_e3;
  char cStack_e2;
  uint ****ppppuStack_e0;
  uint ****ppppuStack_dc;
  uint ****ppppuStack_d8;
  uint ****ppppuStack_d4;
  int iStack_d0;
  undefined4 ****local_c8;
  uint ****local_c4;
  uint ****ppppuStack_c0;
  uint ****local_bc;
  uint ****local_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 ****local_a8;
  uint ****local_a4;
  uint ****local_a0;
  uint ****local_9c;
  uint ****local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 ****local_88;
  undefined4 ****local_84;
  int *local_80;
  undefined4 ****local_7c;
  uint ****local_78;
  undefined4 *local_74;
  undefined4 ****local_70;
  undefined4 ****local_6c;
  uint ****local_68;
  code *local_64;
  undefined4 uStack_60;
  uint ****local_58;
  undefined4 ****local_54;
  undefined4 ****local_50;
  undefined4 ****local_4c;
  undefined4 ****local_48;
  undefined1 *puStack_44;
  undefined4 ****local_40;
  undefined4 ****local_3c;
  uint ****local_38;
  code *local_34;
  undefined4 ****local_30;
  int iStack_2c;
  
  piVar21 = (int *)(param_1 + 0x1aa8);
  FUN_01657e94(&local_1bc0,*piVar21,*(undefined4 *)(param_1 + 0x1aac));
  if (local_1bc0 == 3) {
    local_a8 = (undefined4 ****)&DAT_018ad30c;
    local_a4 = (uint ****)&DAT_0157d360;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00590e71,&local_a8,&DAT_018acca0,piVar21);
  }
  local_1bd0 = local_1bc0;
  local_1bcc = piStack_1bbc;
  local_1bc8 = uStack_1bb8;
  FUN_016dd1aa(&local_1bc0,param_1,0x1aa8);
  local_a8 = &local_92c;
  local_a4 = (uint ****)&DAT_00f5c97c;
  FUN_00600d2c(&local_114,&DAT_005706ee,&local_a8);
  local_1be8 = &DAT_018ae394;
  pcVar17 = s_SetGloba_00414c05;
  if ((2 < DAT_018d9130) || (DAT_018d95d8 == '\0')) goto LAB_007e8a24;
  if (DAT_018d95d8 == '\x01') {
LAB_007e8898:
    DataMemoryBarrier(0xb);
    puVar16 = &DAT_018ae394;
    if (DAT_018dd984 == 2) {
      pcVar17 = DAT_018daa74;
      puVar16 = DAT_018daa78;
      if (DAT_018daa70 != 0) {
        pcVar17 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
    }
    iVar5 = (**(code **)(puVar16 + 0x14))(pcVar17,DAT_018d95d0);
    if (iVar5 == 0) goto LAB_007e8a24;
  }
  else if (DAT_018d95d8 != '\x02') {
    cVar4 = FUN_0169ac90(&DAT_018d95d0);
    if (cVar4 == '\0') goto LAB_007e8a24;
    if (cVar4 != '\x02') goto LAB_007e8898;
  }
  local_94 = DAT_018d95d0;
  if (*(int *)(DAT_018d95d0 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0185e2d8);
  }
  local_3c = &local_f4;
  local_c4 = *(uint *****)(DAT_018d95d0 + 0x20);
  ppppuStack_c0 = *(uint *****)(DAT_018d95d0 + 0x24);
  local_bc = *(uint *****)(DAT_018d95d0 + 0x28);
  local_40 = &local_c8;
  ppppuStack_d8 = (uint ****)(DAT_018d95d0 + 0x1c);
  local_c8 = (undefined4 ****)*ppppuStack_d8;
  local_b8 = (uint ****)0x0;
  local_f0 = (uint ****)&local_70;
  local_f4 = (undefined4 ****)&DAT_00574b39;
  local_38 = (uint ****)&DAT_018abb78;
  local_70 = &local_114;
  ppppuStack_e0 = (uint ****)&local_40;
  local_6c = (undefined4 ****)&DAT_006043a8;
  ppppuStack_dc = (uint ****)&DAT_00000001;
  local_98 = (uint ****)&ppppuStack_e0;
  local_a8 = (undefined4 ****)&DAT_00000001;
  local_a4 = (uint ****)0x0;
  DataMemoryBarrier(0xb);
  pcVar17 = s_SetGloba_00414c05;
  puVar16 = &DAT_018ae394;
  if (DAT_018dd984 == 2) {
    pcVar17 = DAT_018daa74;
    puVar16 = DAT_018daa78;
    if (DAT_018daa70 != 0) {
      pcVar17 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
  }
  iVar5 = (**(code **)(puVar16 + 0x28))(pcVar17,&local_a8);
  if (iVar5 != 0) {
    (**(code **)(puVar16 + 0x2c))(pcVar17,&local_a8);
  }
LAB_007e8a24:
  FUN_01401f1c(local_110,uStack_10c);
  uVar6 = FUN_016d6968(0xe0);
  iVar5 = FUN_016d695a(0,uVar6,0xfffffffb);
  if (iVar5 != 0) {
    puVar11 = (undefined4 *)FUN_016d2bc8();
    local_a4 = (uint ****)*puVar11;
    local_a8 = (undefined4 ****)0x1;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00342990,0x1e,&local_a8,&DAT_0185e3d4,&DAT_0185e2c8);
  }
  FUN_015f3b0c(&local_a8,0);
  uVar22 = 100;
LAB_007e8ac4:
  DataMemoryBarrier(0xb);
  if (*(char *)(local_1950 + 0x38) == '\0') {
    if (local_944 != 0) {
      if (0x1000 < local_940) {
        uVar7 = 0;
LAB_007e9714:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar7,local_940,0x1000,&DAT_0186a9b0);
      }
      uVar7 = local_944;
      if (local_940 < local_944) goto LAB_007e9714;
      FUN_016dd52c(auStack_1944,auStack_1944 + local_944,local_940 - local_944);
      local_940 = local_940 - local_944;
      local_944 = 0;
    }
    if (0x1000 < local_940) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(local_940,0x1000,0x1000,&DAT_0186a9c0);
    }
    iVar5 = FUN_016e0250(local_1948,auStack_1944 + local_940,0x1000 - local_940);
    if (iVar5 != -1) goto code_r0x007e8b38;
    puVar11 = (undefined4 *)FUN_016d2bc8();
    ppppuVar20 = (uint ****)*puVar11;
    cVar4 = FUN_005bc530(ppppuVar20);
    if (cVar4 == '\x16') goto LAB_007e9210;
    local_108 = (uint ****)0x0;
    local_104 = ppppuVar20;
    if ((DAT_018d9130 < 5) && (DAT_018d95cc != '\0')) {
      if (DAT_018d95cc == '\x01') {
LAB_007e9354:
        DataMemoryBarrier(0xb);
        puVar16 = DAT_018daa78;
        if (DAT_018dd984 != 2) {
          puVar16 = &DAT_018ae394;
        }
        pcVar17 = s_SetGloba_00414c05;
        if ((DAT_018dd984 == 2) && (pcVar17 = DAT_018daa74, DAT_018daa70 != 0)) {
          pcVar17 = DAT_018daa74 + (*(int *)(puVar16 + 8) - 1U & 0xfffffff8) + 8;
        }
        iVar5 = (**(code **)(puVar16 + 0x14))(pcVar17,DAT_018d95c4);
        if (iVar5 == 0) goto LAB_007e951c;
      }
      else if (DAT_018d95cc != '\x02') {
        cVar4 = FUN_0169ac90(&DAT_018d95c4);
        if (cVar4 == '\0') goto LAB_007e951c;
        if (cVar4 != '\x02') goto LAB_007e9354;
      }
      if (*(int *)(DAT_018d95c4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0185e308);
      }
      local_c4 = *(uint *****)(DAT_018d95c4 + 0x20);
      ppppuStack_c0 = *(uint *****)(DAT_018d95c4 + 0x24);
      local_bc = *(uint *****)(DAT_018d95c4 + 0x28);
      local_b8 = (uint ****)0x0;
      local_70 = &local_c8;
      local_ec = (uint ****)(DAT_018d95c4 + 0x1c);
      local_c8 = (undefined4 ****)*local_ec;
      local_6c = &local_50;
      local_50 = (undefined4 ****)&DAT_003429fd;
      local_68 = (uint ****)&DAT_018abb78;
      local_4c = &local_40;
      local_40 = &local_114;
      local_38 = (uint ****)&local_108;
      local_f4 = &local_70;
      local_98 = (uint ****)&local_f4;
      local_3c = (undefined4 ****)&DAT_006043a8;
      local_34 = FUN_015ef5b4;
      local_f0 = (uint ****)&DAT_00000001;
      local_a8 = (undefined4 ****)&DAT_00000001;
      local_a4 = (uint ****)0x0;
      DataMemoryBarrier(0xb);
      if (DAT_018dd984 == 2) {
        local_1be8 = DAT_018daa78;
      }
      pcVar17 = s_SetGloba_00414c05;
      if ((DAT_018dd984 == 2) && (pcVar17 = DAT_018daa74, DAT_018daa70 != 0)) {
        pcVar17 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      local_94 = DAT_018d95c4;
      iVar5 = (**(code **)(local_1be8 + 0x28))(pcVar17,&local_a8);
      if (iVar5 != 0) {
        (**(code **)(local_1be8 + 0x2c))(pcVar17,&local_a8);
      }
    }
LAB_007e951c:
    ppppuVar20 = local_104;
    if ((char)local_108 == '\x03') {
      pppuVar19 = *local_104;
      pppuVar24 = local_104[1];
      ppuVar14 = *pppuVar24;
      if (ppuVar14 != (uint **)0x0) {
        (*(code *)ppuVar14)(pppuVar19);
      }
      if (pppuVar24[1] != (uint **)0x0) {
        thunk_FUN_016d3fb4(pppuVar19);
      }
LAB_007e9568:
      thunk_FUN_016d3fb4(ppppuVar20);
    }
  }
LAB_007e956c:
  if (local_114 != (undefined4 ***)0x0) {
    thunk_FUN_016d3fb4(local_110);
  }
  FUN_007f2d0c(&local_1bc0);
  FUN_01639074(&local_1bd0,local_1bc8);
  if (local_1bd0 != 2) {
    if (local_1bd0 == 0) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *local_1bcc;
        bVar25 = (bool)hasExclusiveAccess(local_1bcc);
      } while (!bVar25);
      *local_1bcc = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01659344(local_1bcc);
      }
    }
    else {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *local_1bcc;
        bVar25 = (bool)hasExclusiveAccess(local_1bcc);
      } while (!bVar25);
      *local_1bcc = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_016586fc(local_1bcc);
      }
    }
  }
  if (*piVar21 == 0) {
    piVar21 = *(int **)(param_1 + 0x1aac);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar21;
      bVar25 = (bool)hasExclusiveAccess(piVar21);
    } while (!bVar25);
    *piVar21 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01659344(*(undefined4 *)(param_1 + 0x1aac));
      return;
    }
  }
  else {
    piVar21 = *(int **)(param_1 + 0x1aac);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar21;
      bVar25 = (bool)hasExclusiveAccess(piVar21);
    } while (!bVar25);
    *piVar21 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_016586fc(*(undefined4 *)(param_1 + 0x1aac));
    }
  }
  return;
code_r0x007e8b38:
  local_940 = local_940 + iVar5;
  if (0x1000 < local_940) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_0034ac6f,0x2f,&DAT_0186a9e0);
  }
  if (iVar5 != 0) {
    do {
      if (local_940 < local_944) {
LAB_007e96d4:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(local_944,local_940,0x1000,&DAT_0186a9a0);
      }
      while( true ) {
        if (0x1000 < local_940) goto LAB_007e96d4;
        FUN_008b90c0(&local_a8,auStack_1944 + local_944,local_940 - local_944);
        ppppuVar3 = local_9c;
        ppppuVar2 = local_a0;
        ppppuVar20 = local_a4;
        ppppuVar18 = local_a8;
        iVar5 = local_93c;
        if (local_a8 != (undefined4 ****)&DAT_80000000) break;
        if ((char)local_a4 == '\0') {
          local_93c = 0;
          if ((iVar5 != 0) && (DataMemoryBarrier(0xb), DAT_018d8068 == 0)) {
            FUN_009b2148(local_92c,&DAT_003500ec,0xb);
          }
          goto LAB_007e8ac4;
        }
        local_944 = local_944 + 1;
        if (local_940 < local_944) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_0034ac49,0x26,&DAT_0186a9d0);
        }
        local_93c = local_93c + 1;
        if (local_940 < local_944) goto LAB_007e96d4;
      }
      local_944 = local_944 + local_94;
      if (local_940 < local_944) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_0034ac49,0x26,&DAT_0186a9d0);
      }
      local_f4 = local_a8;
      local_108 = local_a4;
      local_104 = local_a0;
      ppppuStack_100 = local_9c;
      ppppuStack_fc = local_98;
      local_e4 = SUB41(local_98,0);
      bStack_e3 = (byte)((uint)local_98 >> 8);
      cStack_e2 = (char)((uint)local_98 >> 0x10);
      local_f0 = local_a4;
      local_ec = local_a0;
      local_1c08 = uVar22;
      if (cStack_e2 == '\0') {
        uVar7 = (uint)local_98 & 0xff;
        if (local_a0 == (uint ****)0x0) {
          ppppuVar8 = (uint ****)&DAT_00000001;
        }
        else {
          ppppuVar8 = (uint ****)thunk_FUN_016d4a50(local_a0);
          if (ppppuVar8 == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,ppppuVar2);
          }
        }
        FUN_016dd1aa(ppppuVar8,ppppuVar20,ppppuVar2);
        iVar5 = local_120;
        if (*(uint *****)(local_930 + 8) == (uint ****)0xffffffff ||
            ppppuVar3 == *(uint *****)(local_930 + 8)) {
          local_94 = CONCAT31(CONCAT21(local_94._2_2_,bStack_e3),local_e4);
          local_a8 = (undefined4 ****)&DAT_00000001;
          local_a4 = ppppuVar3;
          local_98 = ppppuVar2;
          local_a0 = ppppuVar2;
          local_9c = ppppuVar8;
          FUN_008b5990(&local_c8,local_928,&local_a8);
          if (local_c8 == (undefined4 ****)&SUB_00000002) goto LAB_007e8f80;
          local_a8 = local_c8;
          local_a4 = local_c4;
          local_a0 = ppppuStack_c0;
          local_9c = local_bc;
          local_98 = local_b8;
          local_94 = iStack_b4;
          uStack_90 = uStack_b0;
          DataMemoryBarrier(0xb);
          if (((*(char *)(local_1950 + 0x38) == '\0') && (DAT_018d9130 < 5)) &&
             (DAT_018d95f0 != '\0')) {
            if (DAT_018d95f0 == '\x01') {
LAB_007e980c:
              DataMemoryBarrier(0xb);
              puVar16 = DAT_018daa78;
              if (DAT_018dd984 != 2) {
                puVar16 = &DAT_018ae394;
              }
              pcVar17 = s_SetGloba_00414c05;
              if ((DAT_018dd984 == 2) && (pcVar17 = DAT_018daa74, DAT_018daa70 != 0)) {
                pcVar17 = DAT_018daa74 + (*(int *)(puVar16 + 8) - 1U & 0xfffffff8) + 8;
              }
              iVar5 = (**(code **)(puVar16 + 0x14))(pcVar17,DAT_018d95e8);
              if (iVar5 == 0) goto LAB_007e9a68;
            }
            else if (DAT_018d95f0 != '\x02') {
              cVar4 = FUN_0169ac90(&DAT_018d95e8);
              if (cVar4 == '\0') goto LAB_007e9a68;
              if (cVar4 != '\x02') goto LAB_007e980c;
            }
            iStack_2c = DAT_018d95e8;
            if (*(int *)(DAT_018d95e8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0185e2e8);
            }
            local_6c = *(undefined4 *****)(DAT_018d95e8 + 0x20);
            local_68 = *(uint *****)(DAT_018d95e8 + 0x24);
            local_64 = *(code **)(DAT_018d95e8 + 0x28);
            uStack_60 = 0;
            local_88 = &local_7c;
            local_7c = &local_70;
            local_80 = (int *)(DAT_018d95e8 + 0x1c);
            local_70 = (undefined4 ****)*local_80;
            local_78 = (uint ****)&local_58;
            local_84 = (undefined4 ****)&DAT_00000001;
            local_58 = (uint ****)&DAT_003429ae;
            local_54 = &local_50;
            local_74 = (undefined4 *)&DAT_018abb78;
            local_50 = &local_114;
            local_40 = (undefined4 ****)&DAT_00000001;
            local_3c = (undefined4 ****)0x0;
            local_4c = (undefined4 ****)&DAT_006043a8;
            puStack_44 = &LAB_008b84e0;
            local_30 = &local_88;
            DataMemoryBarrier(0xb);
            if (DAT_018dd984 == 2) {
              local_1be8 = DAT_018daa78;
            }
            pcVar17 = s_SetGloba_00414c05;
            if ((DAT_018dd984 == 2) && (pcVar17 = DAT_018daa74, DAT_018daa70 != 0)) {
              pcVar17 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
            }
            local_48 = &local_a8;
            iVar5 = (**(code **)(local_1be8 + 0x28))(pcVar17,&local_40);
            if (iVar5 != 0) {
              (**(code **)(local_1be8 + 0x2c))(pcVar17,&local_40);
            }
          }
LAB_007e9a68:
          if (local_a0 != (uint ****)0x0) {
            thunk_FUN_016d3fb4(local_9c);
          }
          if (ppppuVar18 == (undefined4 ****)0x0) goto LAB_007e956c;
          ppppuVar20 = local_f0;
          goto LAB_007e9568;
        }
        if (uVar7 != 0) {
          uVar9 = local_924[bStack_e3] + 1;
          if (local_924[bStack_e3] == 0xffffffff) {
            uVar9 = 0xffffffff;
          }
          local_924[bStack_e3] = uVar9;
        }
        if (ppppuVar3 < &DAT_00000100) {
          uVar9 = local_524[(int)ppppuVar3] + 1;
          if (local_524[(int)ppppuVar3] == 0xffffffff) {
            uVar9 = 0xffffffff;
          }
          local_524[(int)ppppuVar3] = uVar9;
        }
        uVar9 = local_124 + 1;
        if (local_124 == 0xffffffff) {
          uVar9 = 0xffffffff;
        }
        local_124 = uVar9;
        if (uVar22 < uVar9) {
          bVar25 = (int)uVar22 < 0;
          if (bVar25) {
            local_1c08 = 0xffffffff;
          }
          else {
            uVar22 = uVar22 << 1;
            local_1c08 = uVar7;
          }
          iVar12 = 0;
          iVar23 = 0;
          if (!bVar25) {
            local_1c08 = uVar22;
          }
          uVar22 = local_924[0];
          do {
            iVar13 = iVar12 + 1;
            iVar12 = iVar12 + 1;
            if (uVar22 <= local_924[iVar13]) {
              iVar23 = iVar12;
              uVar22 = local_924[iVar13];
            }
          } while (iVar12 != 0xff);
          iVar12 = 0;
          iVar13 = 0;
          uVar22 = local_524[0];
          do {
            iVar1 = iVar13 + 1;
            iVar13 = iVar13 + 1;
            if (uVar22 <= local_524[iVar1]) {
              iVar12 = iVar13;
              uVar22 = local_524[iVar1];
            }
          } while (iVar13 != 0xff);
          if (local_120 != 0) {
            uVar22 = *(uint *)(local_120 + 0x10);
            puVar10 = (uint *)(local_120 + 0x10);
            DataMemoryBarrier(0xb);
            do {
              if (uVar22 < 0x80000000) goto LAB_007e91d8;
              if ((~uVar22 & 0x7fffffff) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa464(&DAT_0040888b,0x46,&DAT_0187b670);
              }
              uVar7 = *puVar10;
              if (uVar7 == uVar22) {
                DataMemoryBarrier(0xb);
                do {
                  bVar25 = (bool)hasExclusiveAccess(puVar10);
                  if (bVar25) {
                    *puVar10 = uVar22 + 1 | 0x80000000;
                    bVar25 = true;
                    uVar22 = uVar7;
                    goto LAB_007e9094;
                  }
                  uVar7 = *puVar10;
                } while (uVar7 == uVar22);
              }
              bVar25 = false;
              ClearExclusiveLocal();
              uVar22 = uVar7;
LAB_007e9094:
              DataMemoryBarrier(0xb);
            } while (!bVar25);
            puVar11 = (undefined4 *)thunk_FUN_016d4a50(0x14);
            if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0x14);
            }
            *(char *)((int)puVar11 + 0xd) = (char)iVar12;
            puVar11[4] = 0;
            *puVar11 = 1;
            puVar11[1] = uVar9;
            *(char *)(puVar11 + 3) = (char)iVar23;
            puVar11[2] = local_1c08;
            DataMemoryBarrier(0xb);
            piVar15 = (int *)(iVar5 + 8);
            do {
              iVar23 = *piVar15;
              bVar25 = (bool)hasExclusiveAccess(piVar15);
            } while (!bVar25);
            *piVar15 = (int)puVar11;
            DataMemoryBarrier(0xb);
            *(undefined4 **)(iVar23 + 0x10) = puVar11;
            DataMemoryBarrier(0xb);
            puVar10 = (uint *)(iVar5 + 0x20);
            do {
              uVar22 = *puVar10;
              bVar25 = (bool)hasExclusiveAccess(puVar10);
            } while (!bVar25);
            *puVar10 = uVar22 | 2;
            DataMemoryBarrier(0xb);
            if (uVar22 == 0) {
              iVar23 = *(int *)(iVar5 + 0x18);
              *(undefined4 *)(iVar5 + 0x18) = 0;
              DataMemoryBarrier(0xb);
              do {
                bVar25 = (bool)hasExclusiveAccess(puVar10);
              } while (!bVar25);
              *puVar10 = *puVar10 & 0xfffffffd;
              if (iVar23 != 0) {
                (**(code **)(iVar23 + 4))(*(undefined4 *)(iVar5 + 0x1c));
                goto LAB_007e91d8;
              }
            }
          }
        }
LAB_007e91d8:
        if (ppppuVar2 != (uint ****)0x0) {
          thunk_FUN_016d3fb4(ppppuVar8);
        }
      }
      else {
        FUN_008b9258(&local_a8,&local_f4,&local_1bc0,local_938);
        if (local_a8 == (undefined4 ****)0x0) {
          ppppuStack_e0 = local_a4;
          ppppuStack_dc = local_a0;
          ppppuStack_d8 = local_9c;
          ppppuStack_d4 = local_98;
          iStack_d0 = local_94;
          FUN_009c59a0(auStack_1ae0,&ppppuStack_e0);
        }
        else {
          local_58 = local_a4;
          if ((DAT_018d9130 < 4) && (DAT_018d95e4 != '\0')) {
            if (DAT_018d95e4 == '\x01') {
LAB_007e8ca8:
              DataMemoryBarrier(0xb);
              puVar16 = DAT_018daa78;
              if (DAT_018dd984 != 2) {
                puVar16 = &DAT_018ae394;
              }
              pcVar17 = s_SetGloba_00414c05;
              if ((DAT_018dd984 == 2) && (pcVar17 = DAT_018daa74, DAT_018daa70 != 0)) {
                pcVar17 = DAT_018daa74 + (*(int *)(puVar16 + 8) - 1U & 0xfffffff8) + 8;
              }
              iVar5 = (**(code **)(puVar16 + 0x14))(pcVar17,DAT_018d95dc);
              if (iVar5 == 0) goto LAB_007e8f70;
            }
            else if (DAT_018d95e4 != '\x02') {
              cVar4 = FUN_0169ac90(&DAT_018d95dc);
              if (cVar4 == '\0') goto LAB_007e8f70;
              if (cVar4 != '\x02') goto LAB_007e8ca8;
            }
            if (*(int *)(DAT_018d95dc + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0185e2f8);
            }
            local_3c = *(undefined4 *****)(DAT_018d95dc + 0x20);
            local_38 = *(uint *****)(DAT_018d95dc + 0x24);
            local_34 = *(code **)(DAT_018d95dc + 0x28);
            local_74 = (undefined4 *)(DAT_018d95dc + 0x1c);
            local_40 = (undefined4 ****)*local_74;
            local_50 = &local_40;
            local_4c = &local_88;
            local_30 = (undefined4 ****)0x0;
            local_48 = (undefined4 ****)&DAT_018abb78;
            local_84 = &local_70;
            local_88 = (undefined4 ****)&DAT_003429d8;
            local_7c = &local_50;
            local_70 = &local_114;
            local_78 = (uint ****)&DAT_00000001;
            local_6c = (undefined4 ****)&DAT_006043a8;
            local_68 = (uint ****)&local_58;
            local_c8 = (undefined4 ****)&DAT_00000001;
            local_64 = FUN_00604528;
            local_b8 = (uint ****)&local_7c;
            local_c4 = (uint ****)0x0;
            DataMemoryBarrier(0xb);
            pcVar17 = s_SetGloba_00414c05;
            puVar16 = &DAT_018ae394;
            if (DAT_018dd984 == 2) {
              pcVar17 = DAT_018daa74;
              puVar16 = DAT_018daa78;
              if (DAT_018daa70 != 0) {
                pcVar17 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
              }
            }
            iStack_b4 = DAT_018d95dc;
            iVar5 = (**(code **)(puVar16 + 0x28))(pcVar17,&local_c8);
            if (iVar5 != 0) {
              (**(code **)(puVar16 + 0x2c))(pcVar17,&local_c8);
            }
          }
LAB_007e8f70:
          (*(code *)**local_58)();
        }
      }
LAB_007e8f80:
      uVar22 = local_1c08;
      if (ppppuVar18 != (undefined4 ****)0x0) {
        thunk_FUN_016d3fb4(local_f0);
      }
    } while( true );
  }
LAB_007e9210:
  ppppuVar18 = (undefined4 ****)0x0;
  iVar5 = 0;
  ppppuVar20 = (uint ****)0x30d40;
LAB_007e922c:
  do {
    local_a8 = (undefined4 ****)0x7fffffff;
    if (ppppuVar18 < (undefined4 ****)0x7fffffff) {
      local_a8 = ppppuVar18;
    }
    if (iVar5 != 0) {
      local_a8 = (undefined4 ****)0x7fffffff;
    }
    bVar25 = ppppuVar18 < local_a8;
    ppppuVar18 = (undefined4 ****)((int)ppppuVar18 - (int)local_a8);
    iVar5 = iVar5 - (uint)bVar25;
    local_a4 = ppppuVar20;
    iVar23 = FUN_016e041a(&local_a8,&local_a8);
    if (iVar23 == -1) {
      piVar15 = (int *)FUN_016d2bc8();
      local_c8 = (undefined4 ****)*piVar15;
      if (local_c8 != (undefined4 ****)0x4) {
                    /* WARNING: Subroutine does not return */
        FUN_015f3600(&local_c8,&DAT_005688c0,0,&DAT_018aadd0);
      }
      bVar25 = CARRY4((uint)ppppuVar18,(uint)local_a8);
      ppppuVar18 = (undefined4 ****)((int)ppppuVar18 + (int)local_a8);
      iVar5 = iVar5 + ((int)local_a8 >> 0x1f) + (uint)bVar25;
      local_c8 = (undefined4 ****)&DAT_00000004;
      ppppuVar20 = local_a4;
      if (0 < (int)local_a4) goto LAB_007e922c;
    }
    else {
      ppppuVar20 = (uint ****)0x0;
    }
  } while (ppppuVar18 != (undefined4 ****)0x0 || iVar5 != 0);
  goto LAB_007e8ac4;
}

