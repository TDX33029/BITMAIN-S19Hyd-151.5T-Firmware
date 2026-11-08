// FUN_0153bd90 @ 0153bd90 size=3708 calls_out=34 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0153bd90(uint *param_1,undefined4 param_2,int *param_3,uint *param_4)

{
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined1 **ppuVar18;
  undefined1 *puVar19;
  bool bVar20;
  undefined8 uVar21;
  uint local_468;
  undefined1 *local_448;
  undefined1 *local_444;
  uint local_440;
  int local_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined1 auStack_430 [36];
  int local_40c;
  int local_3d0 [3];
  int local_3c4;
  undefined4 local_3c0;
  int local_3bc;
  undefined1 *local_3b0;
  undefined1 *puStack_3ac;
  uint uStack_3a8;
  uint uStack_3a4;
  uint uStack_3a0;
  uint local_39c;
  uint uStack_398;
  uint uStack_394;
  undefined1 auStack_390 [32];
  int local_370;
  undefined4 local_36c;
  uint local_368;
  int local_364;
  undefined4 local_360;
  undefined2 local_358;
  undefined4 *local_354;
  undefined4 local_350;
  undefined4 *puStack_34c;
  undefined4 local_348;
  undefined4 *puStack_344;
  undefined4 local_340;
  undefined4 *local_33c;
  undefined4 local_338;
  int *local_334;
  undefined4 local_330;
  undefined4 *puStack_32c;
  undefined4 uStack_328;
  int *local_324;
  int local_320;
  undefined4 local_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 local_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  char local_2f8;
  char local_2f7;
  undefined1 *local_2f0;
  undefined1 *local_2ec;
  uint local_2e8;
  uint local_2e0 [4];
  undefined4 local_2d0;
  uint local_2cc;
  uint uStack_2c8;
  uint uStack_2c4;
  uint uStack_2c0;
  undefined4 *local_2b8;
  undefined4 uStack_2b4;
  undefined4 *puStack_2b0;
  undefined4 local_2ac;
  undefined4 *puStack_2a8;
  undefined4 local_2a4;
  undefined4 *local_2a0;
  uint local_298;
  undefined1 auStack_294 [68];
  uint local_250;
  uint local_24c;
  uint local_248;
  uint local_244;
  uint local_240;
  uint uStack_23c;
  uint uStack_238;
  uint uStack_234;
  uint uStack_230;
  undefined1 auStack_20c [52];
  int local_1d8 [2];
  undefined1 *local_1d0;
  undefined1 *puStack_1cc;
  uint uStack_1c8;
  uint uStack_1c4;
  uint local_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  undefined1 *local_160;
  undefined1 *local_15c;
  uint local_158;
  uint local_154;
  uint local_150;
  uint local_14c;
  uint local_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined1 auStack_d4 [108];
  int *local_68;
  int *local_60;
  undefined4 *local_50;
  undefined4 uStack_4c;
  undefined4 *local_48;
  undefined4 local_44;
  undefined4 *puStack_40;
  undefined4 local_3c;
  undefined4 *puStack_38;
  undefined4 local_34;
  undefined4 *puStack_30;
  char local_2c;
  undefined1 local_2b;
  
  if ((*param_4 < 0x80000001) && ((undefined1 *)param_4[3] == &DAT_8000000b)) {
    FUN_016dd1aa(&local_448,param_2,0x158);
    bVar20 = true;
    FUN_0151eddc(&local_354,param_4);
    iVar12 = local_320;
    uVar15 = local_440;
    puVar19 = local_444;
    iVar6 = *param_3;
    if (*(char *)(iVar6 + 0x251) == '\0') {
      local_15c = (undefined1 *)0x10001;
      local_160 = (undefined1 *)0x80000001;
      local_e8 = CONCAT22(local_e8._2_2_,4);
      FUN_01525ed4(iVar6,&local_160,*(char *)(iVar6 + 0x31) == '\x02');
      *(undefined1 *)(iVar6 + 0x255) = 1;
      *(undefined1 *)(param_1 + 1) = 0x1b;
      *param_1 = (uint)&DAT_8000001c;
LAB_0153c24c:
      bVar3 = true;
LAB_0153c254:
      DataMemoryBarrier(0xb);
      do {
        iVar12 = *local_324;
        bVar2 = (bool)hasExclusiveAccess(local_324);
      } while (!bVar2);
      *local_324 = iVar12 + -1;
      if (iVar12 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01561b24(local_324);
      }
      if (local_40c != -0x80000000) {
        FUN_015376c0(auStack_430);
      }
      if ((char)local_338 == '\0') {
        if (((uint)local_334 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_330);
        }
      }
      if (bVar20) {
        if ((code *)*local_33c != (code *)0x0) {
          (*(code *)*local_33c)(local_340);
        }
        if (local_33c[1] != 0) {
          thunk_FUN_016d3fb4(local_340);
        }
        if (((uint)local_354 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_350);
        }
      }
      if (bVar3) {
        if (local_440 != 0) {
          puVar16 = (undefined4 *)(local_444 + 4);
          uVar15 = local_440;
          do {
            if ((puVar16[-1] & 0x7fffffff) != 0) {
              thunk_FUN_016d3fb4(*puVar16);
            }
            puVar16 = puVar16 + 3;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        if (local_448 != (undefined1 *)0x0) {
          thunk_FUN_016d3fb4(local_444);
        }
      }
      if (local_43c != 0) {
        thunk_FUN_016d3fb4(local_438);
      }
      if (local_370 != 0) {
        thunk_FUN_016d3fb4(local_36c);
      }
      if (local_364 != 0) {
        thunk_FUN_016d3fb4(local_360);
      }
    }
    else {
      if (local_440 == 0) {
        uVar7 = 0x80000017;
LAB_0153c240:
        *param_1 = uVar7;
        goto LAB_0153c24c;
      }
      local_160 = (undefined1 *)0x80000017;
      FUN_01465b84(&local_160);
      (**(code **)(local_324[0x26] + 0x10))
                (&local_250,local_324[0x25] + (*(int *)(local_324[0x26] + 8) - 1U & 0xfffffff8) + 8)
      ;
      uVar5 = local_244;
      uVar17 = local_248;
      uVar7 = 0x80000021;
      local_160 = (undefined1 *)0x80000021;
      if ((local_250 & 1) == 0) goto LAB_0153c240;
      FUN_0152bfc0(&local_160);
      (**(code **)(local_324[0x29] + 0x10))
                (&local_250,local_324[0x28] + (*(int *)(local_324[0x29] + 8) - 1U & 0xfffffff8) + 8,
                 puVar19,puVar19 + 0xc,uVar15 - 1,&local_338,local_438,local_434,uVar17,uVar5);
      if (local_250 != 0x80000029) {
        FUN_015277ec(&local_160,iVar6,&local_250);
        *param_1 = (uint)local_160;
        param_1[1] = (uint)local_15c;
        param_1[2] = local_158;
        param_1[3] = local_154;
        param_1[4] = local_150;
        param_1[5] = local_14c;
        param_1[6] = local_148;
        param_1[7] = uStack_144;
        goto LAB_0153c24c;
      }
      local_2e0[2] = 0;
      local_2e0[1] = 1;
      local_2e0[0] = 0;
      FUN_0154e5f8(local_2e0,0,0x20,1,1);
      uVar7 = local_2e0[2];
      uVar15 = local_2e0[1];
      local_468 = local_2e0[0];
      FUN_016dd1aa(local_2e0[1] + local_2e0[2],&local_3b0,0x20);
      local_2e0[2] = uVar7 + 0x20;
      if (local_468 - local_2e0[2] < 0x20) {
        FUN_0154e5f8(local_2e0,local_2e0[2],0x20,1,1);
        local_468 = local_2e0[0];
        uVar15 = local_2e0[1];
      }
      uVar17 = local_2e0[2];
      FUN_016dd1aa(uVar15 + local_2e0[2],auStack_390,0x20);
      uVar7 = local_368;
      uVar8 = local_36c;
      local_2e0[2] = uVar17 + 0x20;
      if (local_468 - local_2e0[2] < local_368) {
        FUN_0154e5f8(local_2e0,local_2e0[2],local_368,1,1);
        uVar15 = local_2e0[1];
      }
      uVar17 = local_2e0[2];
      FUN_016dd1aa(uVar15 + local_2e0[2],uVar8,uVar7);
      uVar17 = uVar17 + uVar7;
      local_2e0[2] = uVar17;
      uVar8 = FUN_0153d018(local_358);
      iVar9 = FUN_0156ea88(iVar12,uVar8);
      uVar15 = local_2e0[1];
      if (iVar9 == 0) {
        *(undefined1 *)(param_1 + 1) = 0x3d;
        *param_1 = (uint)&DAT_8000001c;
joined_r0x0153c474:
        if (local_2e0[0] != 0) {
          thunk_FUN_016d3fb4(uVar15);
        }
        goto LAB_0153c24c;
      }
      (**(code **)(local_324[0x29] + 0x14))
                (&local_250,local_324[0x28] + (*(int *)(local_324[0x29] + 8) - 1U & 0xfffffff8) + 8,
                 local_2e0[1],uVar17,puVar19,&local_364);
      if (local_250 != 0x80000029) {
        FUN_015277ec(&local_160,iVar6,&local_250);
        *param_1 = (uint)local_160;
        param_1[1] = (uint)local_15c;
        param_1[2] = local_158;
        param_1[3] = local_154;
        param_1[4] = local_150;
        param_1[5] = local_14c;
        param_1[6] = local_148;
        param_1[7] = uStack_144;
        goto joined_r0x0153c474;
      }
      if (local_2e0[0] != 0) {
        thunk_FUN_016d3fb4(uVar15);
      }
      local_160 = local_448;
      local_15c = local_444;
      local_158 = local_440;
      FUN_01512dd0(&local_250,&local_160);
      local_2e0[0] = local_250;
      local_2e0[1] = local_24c;
      local_2e0[2] = local_248;
      FUN_0151d184(iVar6 + 0x228);
      *(uint *)(iVar6 + 0x228) = local_2e0[0];
      *(uint *)(iVar6 + 0x22c) = local_2e0[1];
      *(uint *)(iVar6 + 0x230) = local_2e0[2];
      if (local_3d0[0] == -0x7fffffff) {
        local_2e8 = 0;
        local_2ec = (undefined1 *)0x4;
        local_2f0 = (undefined1 *)0x0;
LAB_0153c4d4:
        FUN_0153d030(&local_354,&local_2f0,iVar6);
      }
      else if (local_3d0[0] != -0x7ffffffe) {
        FUN_01504dd8(&local_160,*(undefined4 *)(local_3c4 + 0xc),*(undefined4 *)(local_3c4 + 0x10));
        local_2f0 = local_160;
        local_2ec = local_15c;
        local_2e8 = local_158;
        goto LAB_0153c4d4;
      }
      FUN_0155898c(&local_160,*(undefined1 *)(local_320 + 0x30),iVar6,local_36c,local_368);
      if (local_160 == (undefined1 *)0x1) {
        puVar13 = (uint *)((uint)&local_250 | 4);
        bVar3 = false;
        *puVar13 = local_158;
        puVar13[1] = local_154;
        puVar13[2] = local_150;
        puVar13[3] = local_14c;
        puVar13[4] = local_148;
        puVar13[5] = uStack_144;
        puVar13[6] = uStack_140;
        puVar13[7] = uStack_13c;
        uVar15 = puVar13[1];
        uVar7 = puVar13[2];
        uVar17 = puVar13[3];
        *param_1 = *puVar13;
        param_1[1] = uVar15;
        param_1[2] = uVar7;
        param_1[3] = uVar17;
        uVar15 = puVar13[5];
        uVar7 = puVar13[6];
        uVar17 = puVar13[7];
        param_1[4] = puVar13[4];
        param_1[5] = uVar15;
        param_1[6] = uVar7;
        param_1[7] = uVar17;
        goto LAB_0153c254;
      }
      puVar13 = (uint *)((uint)&local_160 | 4);
      uVar15 = *puVar13;
      local_2e0[1] = puVar13[1];
      local_2e0[2] = puVar13[2];
      local_2e0[3] = puVar13[3];
      local_240 = puVar13[4];
      local_2cc = puVar13[5];
      uStack_2c8 = puVar13[6];
      uStack_2c4 = puVar13[7];
      uStack_2c0 = puVar13[8];
      local_2e0[0] = uVar15;
      local_2d0 = local_240;
      local_248 = local_2e0[2];
      local_244 = local_2e0[3];
      uStack_23c = local_2cc;
      uStack_238 = uStack_2c8;
      uStack_234 = uStack_2c4;
      uStack_230 = uStack_2c0;
      if (uVar15 == 0x80000000) {
        local_2d0._2_2_ = (undefined2)(local_240 >> 0x10);
        uVar4 = local_2d0._2_2_;
        local_250 = uVar15;
        local_24c = local_2e0[1];
        uVar21 = FUN_0152dc60(*(undefined4 *)(local_324[0x27] + 0x18),
                              *(undefined4 *)(local_324[0x27] + 0x1c),local_240 & 0xffff,uVar4,4);
        if ((int)uVar21 != 0) goto LAB_0153c690;
LAB_0153c758:
        local_15c = (undefined1 *)0xd0001;
        local_160 = (undefined1 *)0x80000001;
        local_e8 = CONCAT22(local_e8._2_2_,4);
        FUN_01525ed4(iVar6,&local_160,*(char *)(iVar6 + 0x31) == '\x02');
        bVar20 = true;
        *(undefined1 *)(param_1 + 1) = 0x36;
        *(undefined1 *)(iVar6 + 0x255) = 1;
        *param_1 = (uint)&DAT_8000001c;
LAB_0153cacc:
        FUN_01515d44(local_2e0);
        bVar3 = false;
        goto LAB_0153c254;
      }
      local_15c = (undefined1 *)0x0;
      uVar7 = 0;
      do {
        uVar17 = uVar7;
        if (local_2e0[2] == uVar17) {
          local_160 = (undefined1 *)0x1;
          goto LAB_0153c610;
        }
        uVar7 = uVar17 + 1;
      } while (*(char *)(local_2e0[1] + uVar17) == '\0');
      local_15c = (undefined1 *)(local_2e0[2] - uVar17);
      local_160 = (undefined1 *)(local_2e0[1] + uVar17);
LAB_0153c610:
      local_154 = 0;
      uVar7 = 0;
      do {
        local_158 = uVar7;
        if (local_2cc == local_158) {
          local_158 = 1;
          goto LAB_0153c64c;
        }
        uVar7 = local_158 + 1;
      } while (*(char *)(local_240 + local_158) == '\0');
      local_154 = local_2cc - local_158;
      local_158 = local_240 + local_158;
LAB_0153c64c:
      local_250 = *(uint *)(local_324[0x27] + 0x18);
      local_24c = local_250 + *(int *)(local_324[0x27] + 0x1c) * 8;
      puVar10 = (undefined8 *)FUN_0153d120(&local_250,&local_160);
      if (puVar10 == (undefined8 *)0x0) goto LAB_0153c758;
      uVar21 = *puVar10;
LAB_0153c690:
      *(undefined4 *)(iVar6 + 0x210) = 1;
      *(undefined8 *)(iVar6 + 0x214) = uVar21;
      (**(code **)((int)((ulonglong)uVar21 >> 0x20) + 0x10))(&local_160,(int)uVar21);
      uVar7 = local_158;
      puVar19 = local_15c;
      if (local_160 != (undefined1 *)0x80000029) {
        param_1[3] = local_154;
        param_1[4] = local_150;
        param_1[5] = local_14c;
        param_1[6] = local_148;
        param_1[7] = uStack_144;
        *param_1 = (uint)local_160;
        param_1[1] = (uint)local_15c;
        param_1[2] = local_158;
        bVar20 = true;
        goto LAB_0153cacc;
      }
      local_2b8 = local_354;
      uStack_2b4 = local_350;
      puStack_2b0 = puStack_34c;
      local_2ac = local_348;
      puStack_2a8 = puStack_344;
      local_2a4 = local_340;
      local_2a0 = local_33c;
      uVar1 = *(undefined1 *)(local_320 + 0x30);
      uVar21 = (**(code **)(local_158 + 0x1c))();
      FUN_0153d1e0(&local_2b8,uVar1,iVar6,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
      bVar20 = local_2f8 != '\0';
      if (bVar20) {
        (*(code *)local_2a0[3])(&local_160,local_2a4);
        FUN_016dd1aa(auStack_294,&local_160,0x44);
      }
      local_298 = (uint)bVar20;
      if ((1 < local_3d0[0] + 0x7fffffffU) &&
         (FUN_0153d488(&local_160,&local_2b8,local_3c0,*(undefined4 *)(local_3bc + 0x10),
                       *(undefined4 *)(local_3bc + 0x14),iVar6),
         local_160 != (undefined1 *)0x80000029)) {
        *param_1 = (uint)local_160;
        param_1[1] = (uint)local_15c;
        param_1[2] = local_158;
        param_1[3] = local_154;
        param_1[4] = local_150;
        param_1[5] = local_14c;
        param_1[6] = local_148;
        param_1[7] = uStack_144;
        FUN_0151b7fc(&local_2b8);
        bVar20 = false;
        FUN_014aeb3c(puVar19,uVar7);
        goto LAB_0153cacc;
      }
      iVar9 = 0x1c;
      iVar14 = 0x20;
      if (uVar15 == 0x80000000) {
        iVar9 = 8;
        iVar14 = 0xc;
      }
      local_160 = local_3b0;
      local_15c = puStack_3ac;
      local_158 = uStack_3a8;
      local_154 = uStack_3a4;
      local_150 = uStack_3a0;
      local_14c = local_39c;
      local_148 = uStack_398;
      uStack_144 = uStack_394;
      FUN_015581a4(local_1d8,puVar19,uVar7,*(undefined4 *)((int)local_2e0 + iVar9),
                   *(undefined4 *)((int)local_2e0 + iVar14),&local_298,&local_160,iVar12);
      if (local_1d8[0] == 1) {
        FUN_01527264(&local_160,iVar6,0xd,&local_1d0);
        local_1d0 = local_160;
        puStack_1cc = local_15c;
        uStack_1c8 = local_158;
        uStack_1c4 = local_154;
        local_1c0 = local_150;
        uStack_1bc = local_14c;
        uStack_1b8 = local_148;
        uStack_1b4 = uStack_144;
        local_1d8[0] = 1;
        *param_1 = (uint)local_160;
        param_1[1] = (uint)local_15c;
        param_1[2] = local_158;
        param_1[3] = local_154;
        param_1[4] = local_150;
        param_1[5] = local_14c;
        param_1[6] = local_148;
        param_1[7] = uStack_144;
        FUN_0151b7fc(&local_2b8);
        bVar20 = false;
        goto LAB_0153cacc;
      }
      FUN_016dd1aa(&local_250,(uint)local_1d8 | 4,0x74);
      if (*(int *)(iVar6 + 0x210) == 1) {
        *(undefined4 *)(iVar6 + 0x210) = 2;
      }
      local_160 = &DAT_80000004;
      local_e8 = CONCAT22(local_e8._2_2_,4);
      FUN_01525ed4(iVar6,&local_160,0);
      (**(code **)(local_324[0x24] + 0x10))
                (local_324[0x23] + (*(int *)(local_324[0x24] + 8) - 1U & 0xfffffff8) + 8,
                 &DAT_0040bfb3,0xd,(uint)&local_250 | 4,0x20,auStack_20c,0x30);
      FUN_015272e8(iVar6,&local_250);
      *(undefined1 *)(iVar6 + 0x31) = 2;
      FUN_01538628(&local_250,&local_2b8,iVar6);
      if (local_2f7 == '\0') {
        FUN_016dd1aa(auStack_d4,&local_250,0x74);
        FUN_016dd1aa(&local_158,auStack_430,0x60);
        local_f8 = local_31c;
        uStack_f4 = uStack_318;
        local_f0 = uStack_314;
        uStack_ec = uStack_310;
        local_e8 = local_30c;
        uStack_e4 = uStack_308;
        uStack_e0 = uStack_304;
        uStack_dc = uStack_300;
        uStack_d8 = uStack_2fc;
        local_50 = puStack_32c;
        uStack_4c = uStack_328;
        local_48 = local_2b8;
        local_44 = uStack_2b4;
        puStack_40 = puStack_2b0;
        local_3c = local_2ac;
        puStack_38 = puStack_2a8;
        local_34 = local_2a4;
        puStack_30 = local_2a0;
        local_60 = local_324;
        local_2c = local_2f8;
        local_2b = 0;
        local_160 = (undefined1 *)0x0;
        uVar15 = FUN_0153d6c4(0x138);
        FUN_016dd1aa(uVar15,&local_160,0x138);
        puVar11 = &DAT_018a7aa8;
      }
      else {
        FUN_016dd1aa(&uStack_dc,&local_250,0x74);
        FUN_016dd1aa(&local_160,auStack_430,0x60);
        local_100 = local_31c;
        uStack_fc = uStack_318;
        local_f8 = uStack_314;
        uStack_f4 = uStack_310;
        local_f0 = local_30c;
        uStack_ec = uStack_308;
        local_e8 = uStack_304;
        uStack_e4 = uStack_300;
        uStack_e0 = uStack_2fc;
        local_60 = local_334;
        local_50 = local_2b8;
        uStack_4c = uStack_2b4;
        local_48 = puStack_2b0;
        local_44 = local_2ac;
        puStack_40 = puStack_2a8;
        local_3c = local_2a4;
        puStack_38 = local_2a0;
        local_34 = (uint)local_34._2_2_ << 0x10;
        local_34 = CONCAT31(local_34._1_3_,local_2f8);
        local_68 = local_324;
        uVar15 = FUN_0153d6c4(0x130);
        FUN_016dd1aa(uVar15,&local_160,0x130);
        puVar11 = &DAT_018a7b84;
      }
      param_1[2] = (uint)puVar11;
      *param_1 = 0x80000029;
      param_1[1] = uVar15;
      FUN_01515d44(local_2e0);
      if (local_43c != 0) {
        thunk_FUN_016d3fb4(local_438);
      }
      FUN_00640734(&local_370);
    }
    FUN_0153d998(local_3d0);
    iVar12 = 1;
    if (0x80000000 < *param_4) {
      iVar12 = *param_4 + 0x7fffffff;
    }
    switch(iVar12) {
    case 0:
    case 3:
      goto switchD_0153c3dc_caseD_0;
    case 1:
      FUN_015396bc(param_4 + 3);
      if (*param_4 == 0x80000000 || *param_4 == 0) goto switchD_0153c3dc_caseD_0;
      break;
    default:
      param_4 = param_4 + 1;
      if (*param_4 == 0x80000000 || *param_4 == 0) goto switchD_0153c3dc_caseD_0;
    }
    thunk_FUN_016d3fb4(param_4[1]);
    goto switchD_0153c3dc_caseD_0;
  }
  ppuVar18 = &local_448;
  FUN_016dd1aa(ppuVar18,param_4,0x78);
  puVar19 = (undefined1 *)0x1;
  FUN_015622b4(&local_160,ppuVar18,&DAT_0040c784,1,&DAT_0040bfc0,1);
  *param_1 = (uint)local_160;
  param_1[1] = (uint)local_15c;
  param_1[2] = local_158;
  param_1[3] = local_154;
  param_1[4] = local_150;
  param_1[5] = local_14c;
  param_1[6] = local_148;
  param_1[7] = uStack_144;
  if ((undefined1 *)0x80000000 < local_448) {
    puVar19 = local_448 + 0x7fffffff;
  }
  switch(puVar19) {
  case (undefined1 *)0x0:
  case (undefined1 *)0x3:
    goto switchD_0153c14c_caseD_0;
  case (undefined1 *)0x1:
    FUN_015396bc(&local_43c);
    local_444 = local_448;
    if (local_448 == (undefined1 *)0x80000000) goto switchD_0153c14c_caseD_0;
    goto joined_r0x0153c1b4;
  case (undefined1 *)0x2:
    break;
  default:
  }
  if (local_444 != (undefined1 *)0x80000000) {
    ppuVar18 = (undefined1 **)((uint)&local_448 | 4);
joined_r0x0153c1b4:
    if (local_444 != (undefined1 *)0x0) {
      thunk_FUN_016d3fb4(ppuVar18[1]);
    }
  }
switchD_0153c14c_caseD_0:
  FUN_0153bba0(param_2);
switchD_0153c3dc_caseD_0:
  thunk_FUN_016d3fb4(param_2);
  return;
}

