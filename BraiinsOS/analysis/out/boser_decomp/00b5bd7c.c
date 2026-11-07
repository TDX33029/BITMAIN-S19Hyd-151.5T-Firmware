// FUN_00b5bd7c @ 00b5bd7c size=4344 calls_out=26 calls_in=2
// strings: Temperature | boser_bosminer::info::Temperature | Temperature | __fake_type__ | Temperature | boser_bosminer::info::Temperature

void FUN_00b5bd7c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined *puVar7;
  uint uVar8;
  undefined *puVar9;
  uint *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  char **local_29c;
  int **local_284;
  undefined4 local_280;
  char *local_27c;
  undefined4 local_278;
  undefined1 local_271;
  undefined1 local_270 [16];
  uint local_260;
  uint uStack_25c;
  uint uStack_258;
  uint local_254;
  uint local_250;
  uint local_24c;
  uint local_248;
  undefined4 *puStack_244;
  uint uStack_240;
  uint uStack_23c;
  uint uStack_238;
  uint uStack_234;
  undefined4 local_22c;
  undefined4 *local_228;
  undefined4 local_224;
  uint local_220;
  undefined4 *local_21c;
  undefined1 *local_218;
  undefined4 uStack_214;
  char *pcStack_210;
  uint uStack_20c;
  int **local_208;
  uint uStack_204;
  uint uStack_200;
  uint uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  char *local_1ec;
  undefined4 local_1e8;
  char *local_1e4;
  undefined4 local_1e0;
  undefined1 local_1d9;
  undefined8 local_1d8;
  uint uStack_1d0;
  int **ppiStack_1cc;
  uint local_1c8;
  uint uStack_1c4;
  uint local_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 *puStack_1b0;
  uint uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 ***local_128;
  char *local_124;
  undefined8 local_120;
  int ***local_118;
  undefined8 local_114;
  uint local_10c;
  int **local_108;
  uint local_104;
  uint uStack_100;
  uint uStack_fc;
  undefined4 *local_f8;
  uint local_f4;
  undefined4 local_f0;
  undefined4 *local_ec;
  uint local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  char *local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 *local_a8;
  uint local_a4;
  undefined8 local_a0;
  uint uStack_98;
  undefined4 local_94;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c;
  undefined2 local_7b;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  char ***local_68;
  undefined1 *local_64;
  uint local_60;
  uint uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 *puStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  
  local_271 = 1;
  puVar12 = (undefined4 *)(param_2 + 0x40);
  local_27c = "boser_bosminer::info::Temperature";
  local_278 = 0x21;
  local_280 = 0xb;
  local_284 = (int **)0x4a2d38;
  iVar1 = FUN_006c176c(*puVar12,*(undefined4 *)(param_2 + 0x44));
  if (iVar1 == 0) {
    puVar3 = (undefined1 *)thunk_FUN_01be5118(0xb);
    if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xb);
    }
    FUN_01bed4e2(puVar3,"Temperature",0xb);
    local_60 = 0xb;
    local_68 = (char ***)&DAT_0000000b;
    local_64 = puVar3;
    FUN_006a0cfc(&local_128,1,"boser_bosminer::info::Temperature",0x21);
    local_29c = (char **)&local_1d8;
    FUN_006c2a34(local_29c,puVar12,&local_68,&local_128);
    if (local_1c8 != 0x80000006) {
      FUN_006b2000(&local_1d8);
    }
    local_124 = "Temperature";
    local_120._0_4_ = (char **)0xb;
    local_128 = (undefined4 ***)0x80000000;
    uVar4 = FUN_0160ec7c(local_270,&local_128);
    uVar13 = thunk_FUN_01bee35a(uVar4,0x2c0);
    puVar10 = (uint *)((int)uVar13 + (int)((ulonglong)uVar13 >> 0x20));
    if ((char)puVar10[4] == '\0') {
      FUN_019ae6ac(&local_128);
      *puVar10 = (uint)local_128;
      puVar10[1] = (uint)local_124;
      puVar10[2] = (uint)(char **)local_120;
      puVar10[3] = (uint)local_120._4_4_;
      *(undefined1 *)(puVar10 + 4) = 1;
    }
    local_260 = *puVar10;
    uStack_25c = puVar10[1];
    local_254 = puVar10[3];
    local_248 = 0;
    local_250 = 0;
    local_24c = 8;
    *puVar10 = local_260 + 1;
    puVar10[1] = uStack_25c + (0xfffffffe < local_260);
    puVar11 = puVar10 + 2;
    uStack_258 = *puVar11;
    puStack_244 = &DAT_0056d238;
    uStack_240 = 0;
    uStack_23c = 0;
    uStack_238 = 0;
    uVar4 = 4;
    puVar5 = (undefined4 *)thunk_FUN_01be5118(4);
    if (puVar5 == (undefined4 *)0x0) goto LAB_00b5cdb0;
    *puVar5 = 0x656d616e;
    local_224 = 4;
    local_22c = 4;
    local_228 = puVar5;
    puVar5 = (undefined4 *)thunk_FUN_01be5118();
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,4);
    }
    *puVar5 = 0x656d616e;
    FUN_006e01d0(&local_220);
    local_1d9 = 4;
    local_1e0 = 0x25;
    local_1e4 = "boser_bosminer::info::TemperatureType";
    local_1e8 = 0xf;
    local_1ec = "TemperatureType";
    iVar1 = FUN_006c176c(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44));
    if (iVar1 == 0) {
      iVar1 = FUN_01298504(0xf,1);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0xf);
      }
      FUN_01bed4e2(iVar1,"TemperatureType",0xf);
      local_60 = 0xf;
      local_68 = (char ***)0xf;
      local_64 = (undefined1 *)iVar1;
      FUN_006a0cfc(&local_128,4,"boser_bosminer::info::TemperatureType",0x25);
      FUN_006c2a34(&local_1d8,puVar12,&local_68,&local_128);
      if (local_1c8 != 0x80000006) {
        FUN_006b2000(&local_1d8);
      }
      local_124 = "TemperatureType";
      local_120._0_4_ = (char **)0xf;
      local_128 = (undefined4 ***)0x80000000;
      FUN_0160ec7c(&local_78,&local_128);
      if ((char)puVar10[4] == '\0') {
        FUN_019ae6ac(&local_128);
        *puVar10 = (uint)local_128;
        puVar10[1] = (uint)local_124;
        *puVar11 = (uint)(char **)local_120;
        puVar10[3] = (uint)local_120._4_4_;
        *(undefined1 *)(puVar10 + 4) = 1;
      }
      local_68 = (char ***)*puVar10;
      local_64 = (undefined1 *)puVar10[1];
      local_60 = *puVar11;
      uStack_5c = puVar10[3];
      *puVar10 = (int)local_68 + 1;
      puVar10[1] = (int)local_64 + (uint)((int **)0xfffffffe < local_68);
      local_50 = 0;
      local_58 = 0;
      local_54 = 4;
      puStack_4c = &DAT_0056d238;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uVar4 = 8;
      puVar12 = (undefined4 *)thunk_FUN_01be5118(8);
      if (puVar12 == (undefined4 *)0x0) {
LAB_00b5cda0:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,uVar4);
      }
      puVar12[1] = 0x50494843;
      *puVar12 = 0x5f58414d;
      local_2c = 8;
      local_34 = 8;
      local_30 = puVar12;
      pcVar6 = (char *)thunk_FUN_01be5118(8);
      if (pcVar6 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,8);
      }
      local_f8 = (undefined4 *)0x80000001;
      builtin_strncpy(pcVar6,"MAX_CHIP",8);
      local_e8 = local_e8 & 0xffffff00;
      local_ec = (undefined4 *)0x0;
      local_104 = 0x80000000;
      local_120._0_4_ = (char **)0x8;
      local_128 = (undefined4 ***)0x8;
      local_108 = (int **)0x0;
      local_10c = 8;
      local_114._4_4_ = (char *)0x0;
      local_114._0_4_ = (int **)0x0;
      local_118 = (int ***)0x4;
      local_120._4_4_ = (code *)0x0;
      local_124 = pcVar6;
      FUN_006e0c4c(&local_1d8,&local_68,&local_34,&local_128);
      FUN_00ac5708(&local_1d8);
      uVar4 = 9;
      puVar12 = (undefined4 *)thunk_FUN_01be5118(9);
      if (puVar12 == (undefined4 *)0x0) goto LAB_00b5cda0;
      FUN_01bed4e2(puVar12,"MAX_BOARDAMBIENT",9);
      local_2c = 9;
      local_34 = 9;
      local_30 = puVar12;
      pcVar6 = (char *)thunk_FUN_01be5118(9);
      if (pcVar6 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,9);
      }
      FUN_01bed4e2(pcVar6,"MAX_BOARDAMBIENT",9);
      local_f8 = (undefined4 *)0x80000001;
      local_104 = 0x80000000;
      local_10c = 8;
      local_e8 = local_e8 & 0xffffff00;
      local_ec = (undefined4 *)0x0;
      local_120._0_4_ = (char **)0x9;
      local_128 = (undefined4 ***)0x9;
      local_108 = (int **)0x0;
      local_114._4_4_ = (char *)0x0;
      local_114._0_4_ = (int **)0x0;
      local_118 = (int ***)0x4;
      local_120._4_4_ = (code *)0x0;
      local_124 = pcVar6;
      FUN_006e0c4c(&local_1d8,&local_68,&local_34,&local_128);
      FUN_00ac5708(&local_1d8);
      uVar4 = 7;
      puVar12 = (undefined4 *)thunk_FUN_01be5118(7);
      if (puVar12 == (undefined4 *)0x0) goto LAB_00b5cda0;
      *(undefined4 *)((int)puVar12 + 3) = 0x544e4549;
      *puVar12 = 0x49424d41;
      local_2c = 7;
      local_34 = 7;
      local_30 = puVar12;
      pcVar6 = (char *)thunk_FUN_01be5118(7);
      if (pcVar6 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,7);
      }
      builtin_strncpy(pcVar6,"AMBIENT",7);
      local_f8 = (undefined4 *)0x80000001;
      local_10c = 8;
      local_e8 = local_e8 & 0xffffff00;
      local_ec = (undefined4 *)0x0;
      local_104 = 0x80000000;
      local_120._0_4_ = (char **)0x7;
      local_128 = (undefined4 ***)0x7;
      local_108 = (int **)0x0;
      local_114._4_4_ = (char *)0x0;
      local_114._0_4_ = (int **)0x0;
      local_118 = (int ***)0x4;
      local_120._4_4_ = (code *)0x0;
      local_124 = pcVar6;
      FUN_006e0c4c(&local_1d8,&local_68,&local_34,&local_128);
      FUN_00ac5708(&local_1d8);
      uVar4 = 9;
      puVar12 = (undefined4 *)thunk_FUN_01be5118(9);
      if (puVar12 == (undefined4 *)0x0) goto LAB_00b5cda0;
      FUN_01bed4e2(puVar12,"UNDEFINEDINLETOUTLET",9);
      local_2c = 9;
      local_34 = 9;
      local_30 = puVar12;
      pcVar6 = (char *)thunk_FUN_01be5118(9);
      if (pcVar6 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,9);
      }
      FUN_01bed4e2(pcVar6,"UNDEFINEDINLETOUTLET",9);
      local_f8 = (undefined4 *)0x80000001;
      local_104 = 0x80000000;
      local_10c = 8;
      local_e8 = local_e8 & 0xffffff00;
      local_ec = (undefined4 *)0x0;
      local_120._0_4_ = (char **)0x9;
      local_128 = (undefined4 ***)0x9;
      local_108 = (int **)0x0;
      local_114._4_4_ = (char *)0x0;
      local_114._0_4_ = (int **)0x0;
      local_118 = (int ***)0x4;
      local_120._4_4_ = (code *)0x0;
      local_124 = pcVar6;
      FUN_006e0c4c(&local_1d8,&local_68,&local_34,&local_128);
      FUN_00ac5708(&local_1d8);
      uVar4 = 5;
      puVar12 = (undefined4 *)thunk_FUN_01be5118(5);
      if (puVar12 == (undefined4 *)0x0) goto LAB_00b5cda0;
      *(undefined1 *)(puVar12 + 1) = 0x54;
      *puVar12 = 0x454c4e49;
      local_2c = 5;
      local_34 = 5;
      local_30 = puVar12;
      pcVar6 = (char *)thunk_FUN_01be5118(5);
      if (pcVar6 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,5);
      }
      builtin_strncpy(pcVar6,"INLET",5);
      local_f8 = (undefined4 *)0x80000001;
      local_10c = 8;
      local_e8 = local_e8 & 0xffffff00;
      local_ec = (undefined4 *)0x0;
      local_104 = 0x80000000;
      local_120._0_4_ = (char **)0x5;
      local_128 = (undefined4 ***)0x5;
      local_108 = (int **)0x0;
      local_114._4_4_ = (char *)0x0;
      local_114._0_4_ = (int **)0x0;
      local_118 = (int ***)0x4;
      local_120._4_4_ = (code *)0x0;
      local_124 = pcVar6;
      FUN_006e0c4c(&local_1d8,&local_68,&local_34,&local_128);
      FUN_00ac5708(&local_1d8);
      uVar4 = 6;
      puVar12 = (undefined4 *)thunk_FUN_01be5118(6);
      if (puVar12 == (undefined4 *)0x0) goto LAB_00b5cda0;
      *(undefined2 *)(puVar12 + 1) = 0x5445;
      *puVar12 = 0x4c54554f;
      local_2c = 6;
      local_34 = 6;
      local_30 = puVar12;
      pcVar6 = (char *)thunk_FUN_01be5118(6);
      if (pcVar6 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,6);
      }
      builtin_strncpy(pcVar6,"OUTLET",6);
      local_f8 = (undefined4 *)0x80000001;
      local_10c = 8;
      local_e8 = local_e8 & 0xffffff00;
      local_ec = (undefined4 *)0x0;
      local_104 = 0x80000000;
      local_120._0_4_ = (char **)0x6;
      local_128 = (undefined4 ***)0x6;
      local_108 = (int **)0x0;
      local_114._4_4_ = (char *)0x0;
      local_114._0_4_ = (int **)0x0;
      local_118 = (int ***)0x4;
      local_120._4_4_ = (code *)0x0;
      local_124 = pcVar6;
      FUN_006e0c4c(&local_1d8,&local_68,&local_34,&local_128);
      FUN_00ac5708(&local_1d8);
      uVar4 = 0xd;
      puVar12 = (undefined4 *)thunk_FUN_01be5118(0xd);
      if (puVar12 == (undefined4 *)0x0) goto LAB_00b5cda0;
      FUN_01bed4e2(puVar12,"CONTROL_BOARD",0xd);
      local_2c = 0xd;
      local_34 = 0xd;
      local_30 = puVar12;
      pcVar6 = (char *)thunk_FUN_01be5118(0xd);
      if (pcVar6 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0xd);
      }
      FUN_01bed4e2(pcVar6,"CONTROL_BOARD",0xd);
      local_f8 = (undefined4 *)0x80000001;
      local_104 = 0x80000000;
      local_10c = 8;
      local_e8 = local_e8 & 0xffffff00;
      local_ec = (undefined4 *)0x0;
      local_120._0_4_ = (char **)0xd;
      local_128 = (undefined4 ***)0xd;
      local_108 = (int **)0x0;
      local_114._4_4_ = (char *)0x0;
      local_114._0_4_ = (int **)0x0;
      local_118 = (int ***)0x4;
      local_120._4_4_ = (code *)0x0;
      local_124 = pcVar6;
      FUN_006e0c4c(&local_1d8,&local_68,&local_34,&local_128);
      FUN_00ac5708(&local_1d8);
      uVar4 = 0xb;
      puVar12 = (undefined4 *)thunk_FUN_01be5118(0xb);
      if (puVar12 == (undefined4 *)0x0) goto LAB_00b5cda0;
      FUN_01bed4e2(puVar12,"WATER_INLET",0xb);
      local_2c = 0xb;
      local_34 = 0xb;
      local_30 = puVar12;
      pcVar6 = (char *)thunk_FUN_01be5118(0xb);
      if (pcVar6 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0xb);
      }
      FUN_01bed4e2(pcVar6,"WATER_INLET",0xb);
      local_f8 = (undefined4 *)0x80000001;
      local_104 = 0x80000000;
      local_10c = 8;
      local_e8 = local_e8 & 0xffffff00;
      local_ec = (undefined4 *)0x0;
      local_120._0_4_ = (char **)0xb;
      local_128 = (undefined4 ***)0xb;
      local_108 = (int **)0x0;
      local_114._4_4_ = (char *)0x0;
      local_114._0_4_ = (int **)0x0;
      local_118 = (int ***)0x4;
      local_120._4_4_ = (code *)0x0;
      local_124 = pcVar6;
      FUN_006e0c4c(&local_1d8,&local_68,&local_34,&local_128);
      FUN_00ac5708(&local_1d8);
      uVar4 = 0xc;
      puVar12 = (undefined4 *)thunk_FUN_01be5118(0xc);
      if (puVar12 == (undefined4 *)0x0) goto LAB_00b5cda0;
      FUN_01bed4e2(puVar12,"WATER_OUTLET",0xc);
      local_2c = 0xc;
      local_34 = 0xc;
      local_30 = puVar12;
      iVar1 = thunk_FUN_01be5118(0xc);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0xc);
      }
      FUN_01bed4e2(iVar1,"WATER_OUTLET",0xc);
      local_f8 = (undefined4 *)0x80000001;
      local_104 = 0x80000000;
      local_10c = 8;
      local_e8 = local_e8 & 0xffffff00;
      local_ec = (undefined4 *)0x0;
      local_120._0_4_ = (char **)0xc;
      local_128 = (undefined4 ***)0xc;
      local_108 = (int **)0x0;
      local_114._4_4_ = (char *)0x0;
      local_114._0_4_ = (int **)0x0;
      local_118 = (int ***)0x4;
      local_120._4_4_ = (code *)0x0;
      local_124 = (char *)iVar1;
      FUN_006e0c4c(&local_1d8,&local_68,&local_34,&local_128);
      FUN_00ac5708(&local_1d8);
      local_108 = (int **)local_68;
      local_104 = (uint)local_64;
      uStack_100 = local_60;
      uStack_fc = uStack_5c;
      local_f8 = (undefined4 *)local_58;
      local_f4 = local_54;
      local_f0 = local_50;
      local_ec = puStack_4c;
      local_e8 = uStack_48;
      uStack_e4 = uStack_44;
      local_e0 = uStack_40;
      local_dc = uStack_3c;
      local_c8 = local_78;
      local_c4 = uStack_74;
      local_c0 = uStack_70;
      local_ac = 8;
      local_b8 = 4;
      local_a4 = local_a4 & 0xffffff00;
      local_a8 = (undefined4 *)0x0;
      local_b0 = 0;
      local_b4 = 0;
      local_bc = 0;
      local_d8 = (char *)0x0;
      local_d4 = 0x80000000;
      local_10c = 0x25;
      local_118 = (int ***)&DAT_80000004;
      local_114._4_4_ = "boser_bosminer::info::TemperatureType";
      iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                           "TemperatureType",0xf);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c226c0);
      }
      FUN_006b2000();
      FUN_01bed4e2(iVar1,&local_128,0xb0);
    }
    else {
      uVar13 = FUN_006a71d4();
      puVar3 = (undefined1 *)((ulonglong)uVar13 >> 0x20);
      iVar2 = (int)uVar13;
      if (iVar2 != 0) {
        local_1d8 = uVar13;
        if (puVar3 == &DAT_00000025) {
          iVar2 = thunk_FUN_01bed842("boser_bosminer::info::TemperatureType",iVar2,0x25);
          if (iVar2 != 0) goto LAB_00b5c92c;
        }
        else {
          if (puVar3 == &DAT_0000000d) {
            iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
            if (iVar2 == 0) goto LAB_00b5c960;
          }
LAB_00b5c92c:
          iVar2 = FUN_006e5bc0(param_2 + 0x20,"TemperatureType",0xf);
          if (iVar2 == 0) {
            puVar9 = &DAT_01c226d0;
            puVar7 = &DAT_00572c5c;
            local_120._0_4_ = &local_1e4;
            goto LAB_00b5cd70;
          }
        }
        uVar8 = 2;
        if ((int)*(uint *)(iVar1 + 0x10) < 0) {
          uVar8 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
        }
        if (uVar8 != 4) {
          local_29c = &local_1ec;
          puVar9 = &DAT_01c226e0;
          local_68 = (char ***)CONCAT31(local_68._1_3_,(char)uVar8);
          puVar7 = &DAT_005b5680;
          local_120._0_4_ = (char **)&local_1d9;
LAB_00b5cd70:
          local_128 = (undefined4 ***)local_29c;
          local_124 = (char *)&DAT_0132b6a0;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(puVar7,&local_128,puVar9);
        }
      }
    }
LAB_00b5c960:
    local_120._0_4_ = (char **)0xf;
    local_64 = &LAB_012b97d8;
    local_124 = "TemperatureType";
    local_128 = (undefined4 ***)0x80000000;
    local_68 = (char ***)&local_128;
    FUN_00664898(&local_1d8,&DAT_0057a667,&local_68);
    if (local_128 != (undefined4 ***)0x80000000) {
      FUN_019bb7e0(local_128,local_124);
    }
    uStack_98 = uStack_1d0;
    local_a4 = 4;
    local_ac = 4;
    local_dc = 0x80000000;
    local_120._0_4_ = (char **)local_220;
    local_120._4_4_ = (code *)local_21c;
    local_118 = (int ***)local_218;
    local_114._0_4_ = (int **)uStack_214;
    local_114._4_4_ = pcStack_210;
    local_10c = uStack_20c;
    local_108 = local_208;
    local_104 = uStack_204;
    uStack_100 = uStack_200;
    uStack_fc = uStack_1fc;
    local_f8 = (undefined4 *)uStack_1f8;
    local_f4 = uStack_1f4;
    local_124 = (char *)CONCAT31(local_124._1_3_,1);
    local_7b = 0;
    local_7c = 0;
    local_128 = (undefined4 ***)0x0;
    local_e8 = 0x80000001;
    local_c4 = 0x80000000;
    local_d0 = 0x80000000;
    local_f0 = 0;
    local_8c = 0;
    local_90 = 4;
    local_94 = 0;
    local_b8 = 0x80000000;
    local_80 = 0;
    local_84 = 8;
    local_88 = 0;
    local_ec = (undefined4 *)0x0;
    local_a8 = puVar5;
    local_a0 = local_1d8;
    FUN_006e10e8(&local_1d8,&local_260,&local_22c,&local_128);
    FUN_00b3bb58(&local_1d8);
    uVar4 = 8;
    local_21c = (undefined4 *)thunk_FUN_01be5118(8);
    if (local_21c == (undefined4 *)0x0) {
LAB_00b5cdb0:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,uVar4);
    }
    local_21c[1] = 0x43736565;
    *local_21c = 0x72676564;
    local_218 = (undefined1 *)0x8;
    local_220 = 8;
    puVar12 = (undefined4 *)thunk_FUN_01be5118();
    if (puVar12 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,8);
    }
    *puVar12 = 0x72676564;
    puVar12[1] = 0x43736565;
    FUN_006e01d0(&local_1d8);
    FUN_00b632bc(&local_68,param_2);
    local_a4 = 8;
    local_ac = 8;
    local_dc = 0x80000000;
    local_118 = (int ***)uStack_1d0;
    local_114._0_4_ = ppiStack_1cc;
    local_114._4_4_ = (char *)local_1c8;
    local_10c = uStack_1c4;
    local_108 = (int **)local_1c0;
    local_104 = uStack_1bc;
    uStack_100 = local_1b8;
    uStack_fc = uStack_1b4;
    local_f8 = puStack_1b0;
    local_f4 = uStack_1ac;
    local_a0._0_4_ = local_68;
    local_a0._4_4_ = local_64;
    uStack_98 = local_60;
    local_124 = (char *)CONCAT31(local_124._1_3_,1);
    local_e8 = 0x80000001;
    local_7c = 0;
    local_128 = (undefined4 ***)0x0;
    local_7b = 0;
    local_c4 = 0x80000000;
    local_d0 = 0x80000000;
    local_f0 = 0;
    local_8c = 0;
    local_90 = 4;
    local_94 = 0;
    local_b8 = 0x80000000;
    local_80 = 0;
    local_84 = 8;
    local_88 = 0;
    local_ec = (undefined4 *)0x0;
    local_a8 = puVar12;
    local_120 = local_1d8;
    FUN_006e10e8(&local_1d8,&local_260,&local_220,&local_128);
    FUN_00b3bb58(&local_1d8);
    puVar10 = (uint *)((uint)&local_1d8 | 4);
    *puVar10 = local_260;
    puVar10[1] = uStack_25c;
    puVar10[2] = uStack_258;
    puVar10[3] = local_254;
    puVar10[4] = local_250;
    puVar10[5] = local_24c;
    puVar10[6] = local_248;
    puVar10[7] = (uint)puStack_244;
    puVar10[8] = uStack_240;
    puVar10[9] = uStack_23c;
    puVar10[10] = uStack_238;
    puVar10[0xb] = uStack_234;
    local_118 = (int ***)0x80000001;
    local_10c = uStack_1d0;
    local_108 = ppiStack_1cc;
    local_104 = local_1c8;
    uStack_100 = uStack_1c4;
    uStack_fc = local_1c0;
    local_f8 = (undefined4 *)uStack_1bc;
    local_f4 = local_1b8;
    local_f0 = uStack_1b4;
    local_ec = puStack_1b0;
    local_e8 = uStack_1ac;
    uStack_e4 = uStack_1a8;
    local_94 = 0;
    local_b0 = 0;
    local_b8 = 0;
    local_8c = local_8c & 0xffff0000;
    local_90 = 0x10000;
    local_a0._0_4_ = (char ***)0x80000000;
    local_ac = 0x80000000;
    local_b4 = 8;
    local_c0 = 4;
    local_bc = 0;
    local_c4 = 0;
    local_d4 = 0x21;
    local_e0 = 0;
    local_d8 = "boser_bosminer::info::Temperature";
    local_dc = CONCAT31(local_dc._1_3_,1);
    local_114 = local_1d8;
    iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                         "Temperature",0xb);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c226c0);
    }
    FUN_006b2000();
    FUN_01bed4e2(iVar1,&local_128,0xb0);
    goto LAB_00b5cc84;
  }
  uVar13 = FUN_006a71d4();
  puVar3 = (undefined1 *)((ulonglong)uVar13 >> 0x20);
  iVar2 = (int)uVar13;
  if (iVar2 == 0) goto LAB_00b5cc84;
  local_1d8 = uVar13;
  if (puVar3 == &DAT_00000021) {
    iVar2 = thunk_FUN_01bed842("boser_bosminer::info::Temperature",iVar2,0x21);
    if (iVar2 != 0) goto LAB_00b5c8ac;
  }
  else {
    if (puVar3 == &DAT_0000000d) {
      iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
      if (iVar2 == 0) goto LAB_00b5cc84;
    }
LAB_00b5c8ac:
    iVar2 = FUN_006e5bc0(param_2 + 0x20,"Temperature",0xb);
    if (iVar2 == 0) {
      local_118 = &local_284;
      puVar9 = &DAT_01c226d0;
      puVar7 = &DAT_00572c5c;
      local_120._0_4_ = &local_27c;
      local_120._4_4_ = (code *)&DAT_0132b6a0;
      local_128 = (undefined4 ***)&local_1d8;
      goto LAB_00b5ccec;
    }
  }
  uVar8 = 2;
  if ((int)*(uint *)(iVar1 + 0x10) < 0) {
    uVar8 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
  }
  if (uVar8 == 1) {
LAB_00b5cc84:
    FUN_00b59c04(param_1);
    return;
  }
  local_118 = (int ***)&local_68;
  local_120._0_4_ = (char **)&local_271;
  puVar9 = &DAT_01c226e0;
  local_68 = (char ***)CONCAT31(local_68._1_3_,(char)uVar8);
  puVar7 = &DAT_005b5680;
  local_120._4_4_ = FUN_006a7514;
  local_128 = &local_284;
LAB_00b5ccec:
  local_124 = (char *)&DAT_0132b6a0;
  local_114._0_4_ = (int **)local_120._4_4_;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar7,&local_128,puVar9);
}

