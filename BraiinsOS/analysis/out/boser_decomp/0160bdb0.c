// FUN_0160bdb0 @ 0160bdb0 size=2616 calls_out=25 calls_in=2
// strings: 

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0160bdb0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  short *psVar3;
  int **ppiVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  code *pcVar13;
  int *****pppppiVar14;
  int *piVar15;
  uint uVar16;
  char cVar17;
  int *piVar18;
  int *piVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  int ***local_3c4;
  int **local_3c0;
  int **local_3bc;
  int local_3b8;
  int ***local_3b4;
  undefined1 auStack_3b0 [24];
  undefined1 auStack_398 [20];
  int ***local_384;
  undefined4 local_380;
  short *local_37c;
  int *****local_378;
  int ****local_374 [125];
  int **ppiStack_180;
  short *psStack_17c;
  int ****ppppiStack_178;
  int ***pppiStack_174;
  undefined4 uStack_170;
  undefined4 local_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  short *local_13c;
  int ****local_138;
  int ***local_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  int local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [144];
  int **local_48;
  short *local_44;
  int ****local_40;
  int ***local_3c;
  int local_38;
  int local_34;
  int local_30;
  int ****local_2c;
  int ****local_28;
  
  piVar18 = (int *)*param_2;
  if (*piVar18 != 1) {
LAB_0160be18:
    *param_1 = 4;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 10;
    return;
  }
  piVar19 = piVar18 + 2;
  do {
    if ((char)*piVar19 != '\0') {
      ClearExclusiveLocal();
      goto LAB_0160be18;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar19);
  } while (!bVar1);
  *(char *)piVar19 = '\x01';
  DataMemoryBarrier(0xb);
  if ((char)piVar18[0x2b] == '\x06') {
    uVar6 = 3;
  }
  else {
    piVar15 = piVar18 + 0x14;
    FUN_0160df90(&local_380,piVar15,param_3);
    if ((char)local_380 != '\x0e') {
      FUN_01bed4e2((int)param_1 + 9,(uint)&local_380 | 1,0x17);
      *param_1 = 4;
      param_1[1] = 0;
      *(char *)(param_1 + 2) = (char)local_380;
      goto LAB_0160bf28;
    }
    cVar17 = (char)piVar18[0x2b];
    if (cVar17 == '\0') {
      local_3c4 = (int ***)(piVar18 + 0x28);
      local_374[0] = (int ****)&LAB_0193a90c;
      local_378 = (int *****)&local_3c4;
      local_37c = &DAT_0132b6a0;
      local_380 = (int *****)&DAT_01d05ee8;
      FUN_00664898(&local_140,&DAT_0059d815,&local_380);
      psVar3 = local_13c;
      ppiVar4 = local_140;
      uVar20 = FUN_0160dde0(piVar18[0x14],piVar18[0x15],local_13c,local_138);
      if ((uVar20 & 1) == 0) {
        local_3c0 = (int **)0x0;
LAB_0160bf44:
        FUN_0160df90(&local_380,piVar15,param_3);
        cVar17 = (char)local_380;
        if ((char)local_380 == '\x0e') {
          cVar17 = '\x06';
          if ((char)piVar18[0x1e] == '\0') goto LAB_0160c03c;
        }
        else {
          FUN_01bed4e2((int)param_1 + 9,(uint)&local_380 | 1,0x17);
        }
        *param_1 = 4;
        param_1[1] = 0;
        *(char *)(param_1 + 2) = cVar17;
        FUN_019bb7e0(ppiVar4,psVar3);
        if (local_3c0 != (int **)0x0) {
          (*(code *)local_3c0[4])(&local_3b4,local_3bc,local_3b8);
        }
        goto LAB_0160bf28;
      }
      FUN_01283fd8(&local_48,piVar15,(int)(uVar20 >> 0x20));
      if (((uint)local_3c & 1) == 0) {
        local_3bc = local_48;
        local_3b8 = (int)local_44;
        local_3b4 = local_3c;
        local_3c0 = (int **)&DAT_01d2e520;
      }
      else {
        local_34 = (int)local_48 - ((uint)local_3c >> 5);
        local_30 = (int)local_44 + ((uint)local_3c >> 5);
        local_38 = (int)local_40 + ((uint)local_3c >> 5);
        FUN_01283524(&local_140,&local_38);
        local_2c = (int ****)((uint)local_3c >> 5);
        if (local_138 < local_2c) {
          local_378 = &local_28;
          local_28 = local_138;
          local_374[0] = (int ****)&LAB_01a6a304;
          local_37c = (short *)&LAB_01a6a304;
          local_380 = &local_2c;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_380,&DAT_01d2e534);
        }
        local_3b4 = local_134;
        local_3b8 = (int)local_138 - (int)local_2c;
        local_3bc = (int **)((int)local_13c + (int)local_2c);
        local_3c0 = local_140;
        if (local_140 == (int **)0x0) goto LAB_0160bf44;
      }
      *(undefined1 *)(piVar18 + 0x2b) = 1;
LAB_0160c03c:
      FUN_019bb7e0(ppiVar4,psVar3);
      if (local_3c0 != (int **)0x0) {
        (*(code *)local_3c0[4])(&local_3b4,local_3bc,local_3b8);
      }
      cVar17 = (char)piVar18[0x2b];
    }
    if (cVar17 == '\x05') {
      iVar8 = 0;
      if (piVar18[0x25] != -0x80000000) {
        iVar8 = piVar18[0x26];
      }
      FUN_0160e168(&local_380,piVar15,piVar18[0x29],piVar18[0x2a],iVar8,piVar18[0x27]);
      psVar3 = local_37c;
      cVar17 = (char)local_380;
      cVar2 = (char)local_37c;
      if ((char)local_380 != '\x0e') {
        *(undefined2 *)((int)param_1 + 9) = local_380._1_2_;
        *(undefined1 *)((int)param_1 + 0xb) = local_380._3_1_;
        FUN_01bed4e2(auStack_3b0,(uint)&local_380 | 5,0x13);
        FUN_01bed4e2((int)param_1 + 0xd,auStack_3b0,0x13);
        *param_1 = 4;
        param_1[1] = 0;
        *(char *)(param_1 + 3) = cVar2;
        *(char *)(param_1 + 2) = cVar17;
        goto LAB_0160bf28;
      }
      FUN_01bed4e2(auStack_3b0,(uint)&local_380 | 5,0x13);
      if (cVar2 != '\x02') {
        FUN_01bed4e2(&local_380,(uint)auStack_3b0 | 3,0x10);
        uVar7 = piVar18[0x22] + (int)local_378;
        uVar12 = piVar18[0x20];
        uVar16 = piVar18[0x21];
        uVar11 = piVar18[0x23] + (uint)CARRY4(piVar18[0x22],(uint)local_378);
        piVar18[0x22] = uVar7;
        piVar18[0x23] = uVar11;
        if (uVar11 < uVar16 || uVar16 - uVar11 < (uint)(uVar7 <= uVar12)) {
          if (((uint)psVar3 & 1) != 0) {
            *(undefined1 *)(piVar18 + 0x2b) = 1;
            (*(code *)local_380[4])(local_374,local_37c,local_378);
            cVar17 = (char)piVar18[0x2b];
            goto LAB_0160c1ac;
          }
          *param_1 = 5;
          param_1[1] = 0;
          pppppiVar14 = local_378;
        }
        else {
          if (piVar18[0x25] == -0x80000000) {
            local_140 = (int **)0x80000000;
          }
          else {
            FUN_006666fc(&local_140,piVar18[0x26],piVar18[0x27]);
          }
          pppppiVar14 = local_378;
          FUN_01bed4e2((uint)auStack_398 | 3,&local_140,0xc);
          *param_1 = 4;
          param_1[1] = 0;
          *(undefined1 *)(param_1 + 2) = 7;
          FUN_01bed4e2((int)param_1 + 9,auStack_398,0xf);
          param_1[6] = uVar12;
          param_1[7] = uVar16;
        }
        (*(code *)local_380[4])(local_374,local_37c,pppppiVar14);
        goto LAB_0160bf28;
      }
LAB_0160c43c:
      uVar6 = 5;
    }
    else {
LAB_0160c1ac:
      if (cVar17 == '\x01') {
        local_384 = (int ***)(piVar18 + 0x28);
        FUN_0160db78(&local_380,piVar15,piVar18[0x2a] + 2);
        pppppiVar14 = local_378;
        psVar3 = local_37c;
        if (local_380 != (int *****)0x0) {
          local_140 = (int **)local_380;
          local_13c = local_37c;
          local_138 = (int ****)local_378;
          local_134 = (int ***)local_374[0];
          local_374[0] = (int ****)&LAB_0193a90c;
          local_378 = (int *****)&local_384;
          local_37c = &DAT_0132b6a0;
          local_380 = (int *****)&DAT_01d05ee8;
          FUN_0160c950(&local_48,&local_380);
          if ((pppppiVar14 != (int *****)local_40) ||
             (iVar8 = thunk_FUN_01bed842(psVar3,local_44,pppppiVar14), iVar8 != 0)) {
            FUN_019bb7e0(local_48,local_44);
            *param_1 = 4;
            param_1[1] = 0;
            pcVar13 = (code *)local_140[4];
            *(undefined1 *)(param_1 + 2) = 6;
            (*pcVar13)(&local_134,local_13c,local_138);
            goto LAB_0160bf28;
          }
          FUN_019bb7e0(local_48,local_44);
          *(undefined1 *)(piVar18 + 0x2b) = 2;
          (*(code *)local_140[4])(&local_134,local_13c,local_138);
          cVar17 = (char)piVar18[0x2b];
          goto LAB_0160c358;
        }
      }
      else {
LAB_0160c358:
        if (cVar17 != '\x03') {
          if (cVar17 == '\x02') {
            if (1 < (uint)piVar18[0x15]) {
              if (*(short *)*piVar15 == 0x2d2d) {
                *param_1 = 3;
                param_1[1] = 0;
                *(undefined1 *)(piVar18 + 0x2b) = 6;
                goto LAB_0160bf28;
              }
              *(undefined1 *)(piVar18 + 0x2b) = 3;
              goto LAB_0160c390;
            }
            goto LAB_0160c418;
          }
LAB_0160c480:
          if (cVar17 != '\x04') {
            *param_1 = 5;
            param_1[1] = 0;
            DataMemoryBarrier(0xb);
            *(char *)piVar19 = '\0';
            return;
          }
          FUN_0160dc9c(&local_380,piVar15);
          pppppiVar14 = local_378;
          psVar3 = local_37c;
          if (local_380 == (int *****)0x0) goto LAB_0160c530;
          local_48 = (int **)local_380;
          local_44 = local_37c;
          local_40 = (int ****)local_378;
          local_3c = (int ***)local_374[0];
          iVar8 = 0;
          do {
            iVar9 = iVar8 + 1;
            (&local_380)[iVar8 * 4] = 1;
            (&local_37c)[iVar8 * 4] = (short *)0x0;
            (&local_37c)[iVar8 * 4 + 1] = (short *)0x1;
            (&local_378)[iVar8 * 4 + 1] = (int *****)0x0;
            iVar8 = iVar9;
          } while (iVar9 != 0x20);
          FUN_01417268(&local_140,psVar3,pppppiVar14,&local_380,0x20);
          if ((char)local_140 == '\x01') {
            *(undefined1 *)((int)param_1 + 9) = local_140._1_1_;
            uVar5 = 3;
            *param_1 = 4;
            param_1[1] = 0;
LAB_0160c5c8:
            *(undefined1 *)(param_1 + 2) = uVar5;
          }
          else {
            if (local_138 == (int ****)0x0) {
              *param_1 = 4;
              param_1[1] = 0;
              uVar5 = 2;
              goto LAB_0160c5c8;
            }
            FUN_0160d294(&local_140,local_138,local_134);
            if (local_140 != (int **)0x3 || local_13c != (short *)0x0) {
              ppiStack_180 = local_140;
              psStack_17c = local_13c;
              ppppiStack_178 = local_138;
              pppiStack_174 = local_134;
              uStack_170 = uStack_130;
              local_16c = local_12c;
              uStack_168 = uStack_128;
              uStack_164 = uStack_124;
              uStack_160 = uStack_120;
              uStack_15c = uStack_11c;
              local_158 = local_118;
              uStack_154 = uStack_114;
              uStack_150 = uStack_110;
              uStack_14c = uStack_10c;
              uStack_148 = uStack_108;
              uStack_144 = uStack_104;
              iVar8 = piVar18[0x24];
              *(undefined1 *)(piVar18 + 0x2b) = 5;
              piVar18[0x24] = iVar8 + 1;
              FUN_0160ed0c(&local_100);
              uVar6 = 0;
              if (local_100 != -0x80000000) {
                uVar6 = local_fc;
              }
              uVar21 = FUN_0160d0d8(piVar18 + 4,uVar6);
              if (local_100 == -0x80000000) {
                local_140 = (int **)0x80000000;
              }
              else {
                FUN_006666fc(&local_140,local_fc,local_f8);
              }
              iVar9 = piVar18[0x25];
              if (iVar9 != -0x80000000) {
                FUN_019bb7e0(iVar9,piVar18[0x26]);
              }
              piVar18[0x25] = (int)local_140;
              piVar18[0x26] = (int)local_13c;
              piVar18[0x27] = (int)local_138;
              piVar18[0x20] = (uint)uVar21;
              piVar18[0x23] = 0;
              piVar18[0x21] = (int)((ulonglong)uVar21 >> 0x20);
              piVar18[0x22] = 0;
              iVar9 = FUN_0160ef1c(piVar18 + 4,uVar6,local_f8);
              if (iVar9 == 0) {
                FUN_0160c9e4(&local_140,uVar6,local_f8);
                FUN_01bed4e2((uint)auStack_e8 | 3,&local_140,0xc);
                *param_1 = 4;
                param_1[1] = 0;
                *(undefined1 *)(param_1 + 2) = 0;
                FUN_01bed4e2((int)param_1 + 9,auStack_e8,0xf);
                FUN_00d432cc(&local_100);
                FUN_0142e6dc(&ppiStack_180);
              }
              else {
                DataMemoryBarrier(0xb);
                *(char *)piVar19 = '\0';
                do {
                  iVar10 = *piVar18;
                  bVar1 = (bool)hasExclusiveAccess(piVar18);
                } while (!bVar1);
                *piVar18 = iVar10 + 1;
                if (iVar10 < 0) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)software_udf(0xfdee,0x160c7e4);
                  (*pcVar13)();
                }
                FUN_0160ca70(auStack_d8,piVar18,&ppiStack_180,iVar8,&local_100);
                FUN_01bed4e2(param_1,auStack_d8,0x90);
              }
              (*(code *)local_48[4])(&local_3c,local_44,local_40);
              if (iVar9 != 0) {
                return;
              }
              goto LAB_0160bf28;
            }
            param_1[2] = local_138;
            param_1[3] = local_134;
            param_1[4] = uStack_130;
            param_1[5] = local_12c;
            param_1[6] = uStack_128;
            param_1[7] = uStack_124;
            *param_1 = 4;
            param_1[1] = 0;
          }
          (*(code *)local_48[4])(&local_3c,local_44,local_40);
          goto LAB_0160bf28;
        }
LAB_0160c390:
        iVar8 = FUN_0160e9a8(piVar15);
        if (iVar8 == 0) {
LAB_0160c418:
          if ((char)piVar18[0x1e] != '\0') {
            *param_1 = 4;
            param_1[1] = 0;
            *(undefined1 *)(param_1 + 2) = 6;
            goto LAB_0160bf28;
          }
          goto LAB_0160c43c;
        }
        FUN_0160db78(&local_380,piVar15,2);
        if (local_380 != (int *****)0x0) {
          local_140 = (int **)local_380;
          local_13c = local_37c;
          local_138 = (int ****)local_378;
          local_134 = (int ***)local_374[0];
          if ((local_378 != (int *****)0x2) || (*local_37c != 0xa0d)) {
            *param_1 = 4;
            param_1[1] = 0;
            pcVar13 = (code *)local_380[4];
            *(undefined1 *)(param_1 + 2) = 6;
            (*pcVar13)(&local_134);
            goto LAB_0160bf28;
          }
          *(undefined1 *)(piVar18 + 0x2b) = 4;
          (*(code *)local_380[4])(&local_134,local_37c,2);
          cVar17 = (char)piVar18[0x2b];
          goto LAB_0160c480;
        }
      }
LAB_0160c530:
      uVar6 = 5;
      if ((char)piVar18[0x1e] == '\x01') {
        *(undefined1 *)(param_1 + 2) = 6;
        uVar6 = 4;
      }
    }
  }
  *param_1 = uVar6;
  param_1[1] = 0;
LAB_0160bf28:
  DataMemoryBarrier(0xb);
  *(char *)piVar19 = '\0';
  return;
}

