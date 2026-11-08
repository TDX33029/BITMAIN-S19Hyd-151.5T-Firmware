// function @ 0084f4cc  size=3552  volt_strings=1
// strings: BUG: Combination architecture-control board not supported | BUG: zero midstates | BUG: number of midstates not a power of 2BUG: Iterator not stepped, call next before selecting left rangeBUG: Iterator not stepped, call next before selecting right rangestruct VoltageRange

void FUN_0084f4cc(int *param_1,int param_2,int param_3,int *param_4,undefined4 param_5,int *param_6,
                 undefined4 param_7,int *param_8,undefined4 param_9,int *param_10,int *param_11,
                 int *param_12,code *param_13)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 local_5cc8;
  int *local_5cc4;
  int *local_5cc0;
  int local_5cbc;
  undefined4 local_5c8c;
  int *local_5c88;
  undefined4 local_5c84;
  undefined4 local_5c80;
  undefined4 local_5c7c;
  undefined4 local_5c78;
  int *local_5c74;
  int *local_5c70;
  int local_5c6c;
  int *local_5c68;
  uint local_5c64;
  int *local_5c60;
  undefined1 local_5c5c;
  int *local_5c40;
  undefined4 local_5c3c;
  undefined1 local_5c38;
  undefined4 local_5c34;
  undefined4 local_5c30;
  undefined4 local_5c2c;
  undefined4 local_5c28;
  undefined4 local_5c24;
  undefined1 auStack_5c20 [192];
  undefined1 auStack_5b60 [432];
  int *local_59b0;
  int *local_59ac;
  int *local_59a8;
  undefined1 auStack_59a4 [4096];
  undefined4 local_49a4;
  undefined4 local_49a0;
  undefined4 local_499c;
  uint local_4998;
  undefined1 local_4994;
  int *local_4990;
  int local_498c;
  undefined4 local_4988;
  undefined1 auStack_4984 [2048];
  undefined4 local_4184;
  undefined4 local_4180;
  undefined1 auStack_417c [292];
  undefined4 local_4058;
  undefined4 local_4054;
  undefined4 local_4050;
  int *local_4048;
  int *local_4044;
  int *local_4040;
  int local_403c;
  undefined4 local_4038;
  undefined4 local_4034;
  int local_4030;
  int *local_4028;
  int local_4024;
  int local_4020;
  undefined4 local_401c;
  undefined1 auStack_4018 [296];
  undefined1 auStack_3ef0 [2048];
  undefined1 auStack_36f0 [4096];
  undefined1 auStack_26f0 [624];
  undefined1 auStack_2480 [24];
  undefined4 local_2468;
  undefined4 local_2464;
  uint local_2460;
  undefined4 local_245c;
  undefined4 uStack_2458;
  undefined4 local_2454;
  undefined8 uStack_2450;
  int local_2448;
  undefined4 local_2444;
  int local_2440;
  undefined4 local_243c;
  undefined4 local_2438;
  undefined1 local_2434;
  uint local_2430 [2];
  int *local_2428;
  char local_2420;
  undefined4 local_241c;
  undefined4 local_2418;
  undefined4 local_2414;
  undefined4 local_2410;
  undefined1 local_240c;
  int local_23e0;
  undefined4 local_23dc;
  uint local_23c0;
  undefined4 local_23b4;
  undefined1 auStack_23a0 [328];
  int *local_2258;
  undefined4 local_2254;
  int *local_2250;
  undefined4 local_224c;
  undefined1 auStack_2248 [7208];
  int *local_620;
  int *local_61c;
  int local_618;
  int local_60c;
  undefined1 auStack_608 [184];
  undefined1 auStack_550 [400];
  int local_3c0;
  int *local_3bc;
  int *local_3b8;
  undefined2 local_3b4;
  undefined1 auStack_308 [404];
  undefined4 local_174;
  int *local_170;
  int *local_16c;
  int local_168;
  undefined4 local_160;
  undefined4 local_15c;
  int local_158;
  int *local_154;
  int *local_150;
  undefined4 local_14c;
  undefined8 local_148;
  int local_140;
  int local_13c;
  int local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 local_12c;
  undefined1 auStack_12b [23];
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined1 local_104;
  undefined1 auStack_100 [184];
  undefined4 local_48;
  int local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  
  FUN_007c6680(auStack_2480,param_3 + 0x38);
  do {
    iVar4 = *param_8;
    bVar2 = (bool)hasExclusiveAccess(param_8);
  } while (!bVar2);
  *param_8 = iVar4 + 1;
  if (iVar4 < 0) goto LAB_008502c4;
  if (param_13 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("BUG: Combination architecture-control board not supported",0x39,&DAT_01860f0c);
  }
  uVar11 = *(uint *)(param_3 + 0x88);
  (*param_13)(&local_3c0,param_2);
  piVar9 = local_3b8;
  piVar8 = local_3bc;
  iVar4 = local_3c0;
  piVar13 = local_3bc;
  if (local_3c0 == -0x80000000) {
LAB_0084f77c:
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *param_12;
      bVar2 = (bool)hasExclusiveAccess(param_12);
    } while (!bVar2);
    *param_12 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_009ba6ec(param_12);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *param_11;
      bVar2 = (bool)hasExclusiveAccess(param_11);
    } while (!bVar2);
    *param_11 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00784894(param_11);
    }
    if (param_10 != (int *)0x0) {
      piVar8 = param_10 + 5;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = iVar4 + -1;
      DataMemoryBarrier(0xb);
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        if (0x7fffffff < (uint)param_10[4]) {
          puVar6 = (uint *)(param_10 + 4);
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(puVar6);
          } while (!bVar2);
          *puVar6 = *puVar6 & 0x7fffffff;
          DataMemoryBarrier(0xb);
        }
        puVar6 = (uint *)(param_10 + 8);
        DataMemoryBarrier(0xb);
        do {
          uVar11 = *puVar6;
          bVar2 = (bool)hasExclusiveAccess(puVar6);
        } while (!bVar2);
        *puVar6 = uVar11 | 2;
        DataMemoryBarrier(0xb);
        if (uVar11 == 0) {
          iVar4 = param_10[6];
          param_10[6] = 0;
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(puVar6);
          } while (!bVar2);
          *puVar6 = *puVar6 & 0xfffffffd;
          if (iVar4 != 0) {
            (**(code **)(iVar4 + 4))(param_10[7]);
          }
        }
      }
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *param_10;
        bVar2 = (bool)hasExclusiveAccess(param_10);
      } while (!bVar2);
      *param_10 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078459c();
      }
    }
    FUN_007c50c4(param_9);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *param_8;
      bVar2 = (bool)hasExclusiveAccess(param_8);
    } while (!bVar2);
    *param_8 = iVar4 + -1;
    if (iVar4 == 1) {
      piVar9 = (int *)0x0;
      piVar8 = param_1;
LAB_0084f91c:
      DataMemoryBarrier(0xb);
      FUN_00790cd0(param_8);
      if (piVar9 != (int *)0x0) goto LAB_0084f930;
    }
    *param_1 = 0;
    param_1[1] = (int)piVar13;
    if (local_23e0 != 0) {
      thunk_FUN_016d3fb4(local_23dc);
    }
    if (local_2448 != 0) {
      thunk_FUN_016d3fb4(local_2444);
    }
    if ((local_2460 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_245c);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *param_8;
      bVar2 = (bool)hasExclusiveAccess(param_8);
    } while (!bVar2);
    *param_8 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(param_8);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *param_6;
      bVar2 = (bool)hasExclusiveAccess(param_6);
    } while (!bVar2);
    *param_6 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(param_6,param_7);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *param_4;
      bVar2 = (bool)hasExclusiveAccess(param_4);
    } while (!bVar2);
    *param_4 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010cf448(param_4,param_5);
    }
  }
  else {
    local_5c5c = (undefined1)local_3c0;
    local_3c0 = 0;
    local_3b4 = 0;
    local_3bc = (int *)&DAT_000001b6;
    local_3b8 = (int *)&DAT_00000001;
    FUN_015ec1bc(&local_40,&local_3c0,piVar8,piVar9);
    piVar5 = local_3c;
    if ((char)local_40 != '\x04') {
      local_34 = local_3c;
      local_38 = local_40;
      piVar13 = (int *)FUN_0158478c(&local_38);
joined_r0x0084f76c:
      if (iVar4 != 0) {
        thunk_FUN_016d3fb4(piVar8);
      }
      local_5c64 = uVar11;
      goto LAB_0084f77c;
    }
    local_3bc = (int *)&DAT_000001b6;
    local_5c60 = local_3c;
    local_3c0 = 0;
    local_3b4 = 0;
    local_3b8 = (int *)0x101;
    FUN_015ec1bc(&local_40,&local_3c0,piVar8,piVar9);
    if ((char)local_40 != '\x04') {
      local_34 = local_3c;
      local_38 = local_40;
      piVar13 = (int *)FUN_0158478c(&local_38);
      FUN_016dffb2(piVar5);
      local_5c60 = piVar5;
      goto joined_r0x0084f76c;
    }
    local_5c74 = local_3c;
    if (iVar4 != 0) {
      thunk_FUN_016d3fb4(piVar8);
    }
    uVar14 = FUN_008ad2c8();
    local_5c78 = (undefined4)((ulonglong)uVar14 >> 0x20);
    piVar5 = (int *)uVar14;
    uVar14 = FUN_008b5cb4();
    iVar4 = (int)((ulonglong)uVar14 >> 0x20);
    local_5c7c = (undefined4)uVar14;
    local_60c = iVar4;
    FUN_016b00a8(&local_3c0);
    piVar13 = local_3bc;
    local_5c6c = local_3c0;
    local_40 = local_3bc;
    local_5c68 = local_3bc;
    local_5c88 = local_3b8;
    local_3c = local_3b8;
    if (local_2420 == '\x01') {
      local_2430[0] = 0;
      local_38 = local_2428;
      if (local_2428 != (int *)&DAT_00000001) {
        if (local_2428 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8("BUG: zero midstates",0x13,&DAT_0187f8f4,local_23b4);
        }
        piVar8 = local_2428;
        do {
          local_2430[0] = local_2430[0] + 1;
          bVar2 = (int *)0x3 < piVar8;
          piVar8 = (int *)((uint)piVar8 >> 1);
        } while (bVar2);
      }
      local_3c0 = 1 << (local_2430[0] & 0x1f);
      if (local_2428 != (int *)(1 << (local_2430[0] & 0x1f))) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb3aac(0,&local_38,&local_3c0,
                     "BUG: number of midstates not a power of 2BUG: Iterator not stepped, call next before selecting left rangeBUG: Iterator not stepped, call next before selecting right rangestruct VoltageRange"
                     ,0x53,&DAT_0187f904);
      }
    }
    FUN_009ca224(&local_3c0,param_2,param_11,local_23b4,local_2430[0],param_9,param_10,param_12,
                 0x100 >> (uVar11 & 0x1f));
    FUN_016dd1aa(auStack_608,&local_3c0,0xb8);
    FUN_016dd1aa(auStack_550,auStack_308,400);
    uVar14 = FUN_008ad758();
    local_5c80 = (undefined4)((ulonglong)uVar14 >> 0x20);
    uVar15 = FUN_008b5b9c();
    local_174 = (undefined4)((ulonglong)uVar15 >> 0x20);
    local_5c84 = (undefined4)uVar15;
    local_5c70 = (int *)thunk_FUN_016d4a50(0xc);
    if (local_5c70 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    local_5c70[2] = -1;
    *local_5c70 = 1;
    piVar12 = piVar5 + 0x11;
    local_5c70[1] = 1;
    do {
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = *piVar12 + 1;
    do {
      iVar7 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar7 + 1;
    if (iVar7 < 0) goto LAB_008502c4;
    do {
      iVar7 = *local_5c70;
      bVar2 = (bool)hasExclusiveAccess(local_5c70);
    } while (!bVar2);
    *local_5c70 = iVar7 + 1;
    if (iVar7 < 0) goto LAB_008502c4;
    local_170 = piVar5;
    local_16c = local_5c70;
    local_168 = iVar4;
    piVar8 = (int *)thunk_FUN_016d4a50(0xc);
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    local_5c64 = local_23c0;
    local_5c5c = local_240c;
    *piVar8 = (int)local_170;
    piVar8[1] = (int)local_16c;
    piVar8[2] = local_168;
    piVar9 = (int *)thunk_FUN_016d4a50(0x38);
    uVar3 = local_2444;
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x38);
    }
    iVar4 = 1;
    *(undefined1 *)(piVar9 + 3) = local_240c;
    piVar9[0xc] = (int)piVar8;
    piVar9[2] = local_23c0;
    *piVar9 = 1;
    piVar9[1] = 1;
    piVar9[4] = param_2;
    piVar9[5] = 0;
    piVar9[6] = 0;
    piVar9[7] = 0;
    *(undefined1 *)(piVar9 + 8) = 0;
    piVar9[9] = 2;
    piVar9[10] = 0;
    piVar9[0xd] = (int)&DAT_0185e388;
    if ((local_2440 != 0) && (iVar4 = thunk_FUN_016d4a50(local_2440), iVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,local_2440);
    }
    FUN_016dd1aa(iVar4,uVar3,local_2440);
    if (local_2460 == 0x80000000) {
      local_5cbc = -0x80000000;
    }
    else {
      FUN_00835bfc(&local_3c0,local_245c,uStack_2458);
      local_5cbc = local_3c0;
      local_5cc0 = local_3bc;
      local_5cc4 = local_3b8;
      local_5cc8 = local_2454;
    }
    local_140 = local_2440;
    local_138 = local_2440;
    local_13c = iVar4;
    FUN_016dd1aa((uint)&local_3c0 | 3,local_2430,0x14);
    local_48 = (int)uVar14;
    local_44 = param_2;
    FUN_016dd1aa(auStack_100,auStack_608,0xb8);
    local_12c = local_2434;
    local_134 = local_243c;
    local_130 = local_2438;
    local_160 = local_2468;
    local_15c = local_2464;
    local_158 = local_5cbc;
    local_154 = local_5cc0;
    local_150 = local_5cc4;
    local_14c = local_5cc8;
    local_148 = uStack_2450;
    FUN_016dd1aa(auStack_12b,&local_3c0,0x17);
    local_104 = local_240c;
    local_114 = local_241c;
    local_110 = local_2418;
    local_10c = local_2414;
    local_108 = local_2410;
    do {
      iVar4 = *piVar13;
      bVar2 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar2);
    *piVar13 = iVar4 + 1;
    if (iVar4 < 0) goto LAB_008502c4;
    piVar10 = piVar13 + 0xd;
    DataMemoryBarrier(0xb);
    do {
      piVar8 = (int *)*piVar10;
      bVar2 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar2);
    *piVar10 = (int)piVar8 + 1;
    DataMemoryBarrier(0xb);
    local_38 = piVar13;
    local_34 = piVar8;
    FUN_007c6680(&local_3c0,auStack_2480);
    FUN_016dd1aa(auStack_5b60,auStack_550,400);
    FUN_016dd1aa(&local_5c40,&local_3c0,0xe0);
    do {
      iVar4 = *param_8;
      bVar2 = (bool)hasExclusiveAccess(param_8);
    } while (!bVar2);
    *param_8 = iVar4 + 1;
    local_5c8c = local_174;
    if (iVar4 < 0) goto LAB_008502c4;
    FUN_016dd1aa((uint)auStack_4018 | 4,&local_160,0x120);
    FUN_016dd1aa(auStack_26f0,&local_5c40,0x270);
    FUN_016dd606(auStack_36f0,0,0x1000);
    FUN_016dd606(auStack_3ef0,0,0x800);
    do {
      iVar4 = *piVar12;
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = iVar4 + -1;
    if (iVar4 == 1) {
      FUN_008ae198(piVar5 + 2);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089e80c(piVar5);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *param_8;
      bVar2 = (bool)hasExclusiveAccess(param_8);
    } while (!bVar2);
    *param_8 = iVar4 + -1;
    piVar13 = (int *)0x0;
    if (iVar4 == 1) goto LAB_0084f91c;
LAB_0084f930:
    local_5c30 = 4;
    local_5c24 = 0;
    local_5c28 = 0;
    local_5c2c = 0;
    local_5c34 = 0;
    local_5c38 = 0;
    local_5c3c = 0;
    FUN_016dd1aa(auStack_5c20,auStack_26f0,0x270);
    local_59a8 = local_5c60;
    local_59b0 = local_5c68;
    local_59ac = piVar8;
    FUN_016dd1aa(auStack_59a4,auStack_36f0,0x1000);
    local_4990 = local_5c70;
    local_4988 = local_5c7c;
    local_4994 = local_5c5c;
    local_4998 = local_5c64;
    local_49a4 = 0;
    local_49a0 = 0;
    local_499c = 0;
    local_498c = param_2;
    FUN_016dd1aa(auStack_4984,auStack_3ef0,0x800);
    local_4180 = local_5c84;
    local_4184 = 0;
    FUN_016dd1aa(auStack_417c,auStack_4018,0x124);
    local_4058 = 1;
    local_4024 = local_5c6c;
    local_401c = local_5c8c;
    local_4044 = local_5c88;
    local_4040 = local_5c74;
    local_4038 = local_5c80;
    local_4054 = 0;
    local_4050 = 0;
    local_4034 = local_5c78;
    local_4028 = param_8;
    local_4048 = local_5c68;
    local_5c40 = piVar13;
    local_403c = param_2;
    local_4030 = param_2;
    local_4020 = param_2;
    if (local_23e0 != 0) {
      thunk_FUN_016d3fb4(local_23dc);
    }
    if (local_2448 != 0) {
      thunk_FUN_016d3fb4(local_2444);
    }
    if ((local_2460 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_245c);
    }
    do {
      iVar4 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar4 + 1;
    if (iVar4 < 0) {
LAB_008502c4:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x8502c4);
      (*pcVar1)();
    }
    FUN_00849e70(auStack_36f0,param_3);
    FUN_016dd1aa(auStack_2248,&local_5c40,0x1c28);
    local_618 = param_2;
    FUN_016dd1aa(auStack_23a0,auStack_36f0,0x148);
    local_61c = param_8;
    local_2254 = param_5;
    local_224c = param_7;
    local_2250 = param_6;
    local_2258 = param_4;
    local_620 = piVar9;
    iVar4 = thunk_FUN_016d4a50(0x1d90);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x1d90);
    }
    FUN_016dd1aa(iVar4,auStack_23a0,0x1d90);
    param_1[1] = (int)&DAT_01860f48;
    param_1[2] = (int)piVar9;
    *param_1 = iVar4;
  }
  return;
}

