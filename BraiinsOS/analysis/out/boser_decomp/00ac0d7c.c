// FUN_00ac0d7c @ 00ac0d7c size=8176 calls_out=34 calls_in=1
// strings: boser::web::graphql::bosminer::configurator::autotuning::AutotuningIn | __fake_type__ | boser::web::graphql::bosminer::configurator::autotuning::AutotuningIn | boser::web::graphql::bosminer::configurator::autotuning::AutotuningIn | AutotuningIn | AutotuningIn

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00ac0d7c(int param_1,uint **param_2,char *****param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  uint *puVar12;
  undefined *puVar13;
  uint uVar14;
  undefined4 uVar15;
  uint *puVar16;
  undefined4 *****pppppuVar17;
  uint *****pppppuVar18;
  undefined4 *****pppppuVar19;
  undefined4 *puVar20;
  undefined4 uVar21;
  char *****pppppcVar22;
  undefined4 ****ppppuVar23;
  undefined8 uVar24;
  longlong lVar25;
  int local_2a8;
  uint *****local_27c;
  char ***local_26c;
  char *****local_268;
  char *local_264;
  undefined4 local_260;
  undefined1 local_259;
  undefined1 local_258 [16];
  uint local_248;
  uint uStack_244;
  uint uStack_240;
  uint local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 *puStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 ****local_218;
  int local_214;
  undefined4 local_210;
  uint ****local_20c;
  undefined4 local_208;
  char *local_204;
  undefined4 local_200;
  undefined1 local_1f9;
  undefined4 local_1f8;
  int local_1f4;
  undefined4 local_1f0;
  uint ****local_1ec;
  undefined4 local_1e8;
  undefined1 local_1e1;
  uint ****local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 ****local_1d0;
  int local_1c8;
  undefined4 *****local_128;
  char *local_124;
  undefined4 *****local_120;
  undefined8 local_11c;
  undefined4 ****local_114;
  char *local_110;
  undefined4 ****local_10c;
  char *****local_108;
  undefined4 *local_104;
  char *****local_100;
  uint local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  int local_f0;
  undefined4 *local_ec;
  int local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 *local_d8;
  undefined *local_d4;
  uint local_d0;
  undefined1 local_cc;
  undefined4 local_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  char *****local_68;
  undefined4 *local_64;
  char *****local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 *puStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char *****local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  
  puVar20 = (undefined4 *)(param_1 + 0x40);
  local_260 = 0x45;
  local_259 = 5;
  local_264 = "boser::web::graphql::bosminer::configurator::autotuning::AutotuningIn";
  local_26c = (char ***)param_2;
  local_268 = param_3;
  iVar2 = FUN_006c176c(*puVar20,*(undefined4 *)(param_1 + 0x44),param_2,param_3);
  if (iVar2 != 0) {
    local_1d8 = FUN_006a71d4();
    iVar9 = (int)((ulonglong)local_1d8 >> 0x20);
    iVar3 = (int)local_1d8;
    if (iVar3 == 0) {
      return;
    }
    if (iVar9 == 0x45) {
      iVar3 = thunk_FUN_01bed842("boser::web::graphql::bosminer::configurator::autotuning::AutotuningIn"
                                 ,iVar3,0x45);
      if (iVar3 == 0) goto LAB_00ac0e94;
    }
    else if (iVar9 == 0xd) {
      iVar3 = thunk_FUN_01bed842(iVar3,"__fake_type__",0xd);
      if (iVar3 == 0) {
        return;
      }
    }
    iVar3 = FUN_015db690(param_1 + 0x20,param_2,param_3);
    if (iVar3 == 0) {
      local_11c._4_4_ = (uint *****)&local_26c;
      local_114 = (undefined4 ****)&DAT_0132b6a0;
      local_11c._0_4_ = (code *)&DAT_0132b6a0;
      local_124 = (char *)&DAT_0132b6a0;
      local_120 = (undefined4 *****)&local_264;
      local_128 = (undefined4 *****)&local_1d8;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_00572c5c,&local_128,&DAT_01c226d0);
    }
LAB_00ac0e94:
    if (*(undefined1 **)(iVar2 + 0x10) < &DAT_80000005) {
      uVar1 = FUN_006a7508();
      local_68 = (char *****)CONCAT31(local_68._1_3_,uVar1);
      local_11c._4_4_ = (uint *****)&local_68;
      local_120 = (undefined4 *****)&local_259;
      local_128 = (undefined4 *****)&local_26c;
      local_124 = (char *)&DAT_0132b6a0;
      local_114 = (undefined4 ****)FUN_006a7514;
      local_11c._0_4_ = FUN_006a7514;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005b5680,&local_128,&DAT_01c226e0);
    }
    return;
  }
  uVar15 = 0;
  if ((int)param_3 < 0) {
LAB_00ac0e2c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar15,param_3);
  }
  if (param_3 == (char *****)0x0) {
    pppppcVar22 = (char *****)0x0;
    puVar4 = (undefined4 *)&DAT_00000001;
  }
  else {
    uVar15 = 1;
    puVar4 = (undefined4 *)FUN_01298504(param_3,1);
    pppppcVar22 = param_3;
    if (puVar4 == (undefined4 *)0x0) goto LAB_00ac0e2c;
  }
  FUN_01bed4e2(puVar4,param_2,param_3);
  local_68 = pppppcVar22;
  local_64 = puVar4;
  local_60 = param_3;
  FUN_006a0cfc(&local_128,5,"boser::web::graphql::bosminer::configurator::autotuning::AutotuningIn",
               0x45);
  FUN_006c2a34(&local_1d8,puVar20,&local_68,&local_128);
  if (local_1c8 != -0x7ffffffa) {
    FUN_00abf870(&local_1d8);
  }
  local_120 = (undefined4 *****)0xc;
  local_124 = "AutotuningIn";
  local_128 = (undefined4 *****)0x80000000;
  uVar15 = FUN_0160ec7c(local_258,&local_128);
  uVar24 = thunk_FUN_01bee35a(uVar15,0x2c0);
  puVar16 = (uint *)((int)uVar24 + (int)((ulonglong)uVar24 >> 0x20));
  if ((char)puVar16[4] == '\0') {
    FUN_019ae6ac(&local_128);
    *puVar16 = (uint)local_128;
    puVar16[1] = (uint)local_124;
    puVar16[2] = (uint)local_120;
    puVar16[3] = (uint)(code *)local_11c;
    *(undefined1 *)(puVar16 + 4) = 1;
  }
  local_248 = *puVar16;
  uStack_244 = puVar16[1];
  local_23c = puVar16[3];
  puVar12 = puVar16 + 2;
  uStack_240 = *puVar12;
  *puVar16 = local_248 + 1;
  puVar16[1] = uStack_244 + (0xfffffffe < local_248);
  local_230 = 0;
  local_234 = 4;
  local_238 = 0;
  puStack_22c = &DAT_0056d238;
  uStack_228 = 0;
  uStack_224 = 0;
  uStack_220 = 0;
  puVar4 = (undefined4 *)thunk_FUN_01be5118(4);
  if (puVar4 == (undefined4 *)0x0) {
    uVar15 = 4;
    goto LAB_00ac2ad4;
  }
  *puVar4 = 0x65646f6d;
  local_60 = (char *****)&SUB_00000004;
  local_68 = (char *****)&SUB_00000004;
  local_64 = puVar4;
  pcVar5 = (char *)thunk_FUN_01be5118(4);
  if (pcVar5 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,4);
  }
  builtin_strncpy(pcVar5,"mode",4);
  FUN_00b4cd34(&local_128,param_1);
  FUN_019bb7e0(local_128,local_124);
  pcVar6 = (char *)FUN_01298504(9,1);
  if (pcVar6 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,9);
  }
  FUN_01bed4e2(pcVar6,"TunerMode",9);
  local_e0 = 0x80000001;
  local_f8 = 0x80000000;
  local_ec = (undefined4 *)0x80000000;
  local_120 = (undefined4 *****)0x4;
  local_128 = (undefined4 *****)0x4;
  local_114 = (undefined4 ****)0x9;
  local_11c._0_4_ = (code *)0x9;
  local_d4 = (undefined *)0x0;
  local_d0 = local_d0 & 0xffff0000;
  local_108 = (char *****)0x0;
  local_10c = (undefined4 ****)0x4;
  local_110 = (char *)0x0;
  local_fc = 0;
  local_100 = (char *****)&DAT_00000008;
  local_104 = (undefined4 *)0x0;
  local_124 = pcVar5;
  local_11c._4_4_ = (uint *****)pcVar6;
  FUN_006e07e8(&local_1d8,&local_248,&local_68,&local_128);
  FUN_00abfbec(&local_1d8);
  puVar4 = (undefined4 *)thunk_FUN_01be5118(0xb);
  if (puVar4 == (undefined4 *)0x0) {
    uVar15 = 0xb;
    goto LAB_00ac2ad4;
  }
  FUN_01bed4e2(puVar4,"powerTarget",0xb);
  local_60 = (char *****)&DAT_0000000b;
  local_68 = (char *****)&DAT_0000000b;
  local_64 = puVar4;
  pcVar5 = (char *)thunk_FUN_01be5118(0xb);
  if (pcVar5 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0xb);
  }
  FUN_01bed4e2(pcVar5,"powerTarget",0xb);
  FUN_00abbe6c(&local_1d8,param_1);
  local_128 = (undefined4 *****)0xb;
  local_120 = (undefined4 *****)0xb;
  local_f8 = 0x80000000;
  local_11c._0_4_ = (code *)(undefined4 ****)local_1d8;
  local_11c._4_4_ = (uint *****)local_1d8._4_4_;
  local_114 = local_1d0;
  local_ec = (undefined4 *)0x80000000;
  local_e0 = 0x80000001;
  local_d4 = (undefined *)0x0;
  local_d0 = local_d0 & 0xffff0000;
  local_10c = (undefined4 ****)0x4;
  local_108 = (char *****)0x0;
  local_110 = (char *)0x0;
  local_fc = 0;
  local_100 = (char *****)&DAT_00000008;
  local_104 = (undefined4 *)0x0;
  local_124 = pcVar5;
  FUN_006e07e8(&local_1d8,&local_248,&local_68,&local_128);
  FUN_00abfbec(&local_1d8);
  puVar4 = (undefined4 *)thunk_FUN_01be5118(0xe);
  if (puVar4 == (undefined4 *)0x0) {
    uVar15 = 0xe;
    goto LAB_00ac2ad4;
  }
  FUN_01bed4e2(puVar4,"hashrateTarget",0xe);
  local_60 = (char *****)&DAT_0000000e;
  local_68 = (char *****)&DAT_0000000e;
  local_64 = puVar4;
  pcVar5 = (char *)thunk_FUN_01be5118(0xe);
  if (pcVar5 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0xe);
  }
  FUN_01bed4e2(pcVar5,"hashrateTarget",0xe);
  FUN_00abbe0c(&local_1d8,param_1);
  local_f8 = 0x80000000;
  local_128 = (undefined4 *****)0xe;
  local_120 = (undefined4 *****)0xe;
  local_11c._0_4_ = (code *)(undefined4 ****)local_1d8;
  local_11c._4_4_ = (uint *****)local_1d8._4_4_;
  local_114 = local_1d0;
  local_ec = (undefined4 *)0x80000000;
  local_e0 = 0x80000001;
  local_d4 = (undefined *)0x0;
  local_d0 = local_d0 & 0xffff0000;
  local_10c = (undefined4 ****)0x4;
  local_108 = (char *****)0x0;
  local_110 = (char *)0x0;
  local_fc = 0;
  local_100 = (char *****)&DAT_00000008;
  local_104 = (undefined4 *)0x0;
  pppppuVar18 = (uint *****)&local_68;
  local_124 = pcVar5;
  FUN_006e07e8(&local_1d8,&local_248,pppppuVar18,&local_128);
  pppppuVar17 = (undefined4 *****)&local_1d8;
  FUN_00abfbec(pppppuVar17);
  iVar2 = thunk_FUN_01be5118(0x12);
  if (iVar2 == 0) {
    uVar15 = 0x12;
    goto LAB_00ac2ad4;
  }
  FUN_01bed4e2(iVar2,"performanceScaling",0x12);
  local_210 = 0x12;
  local_218 = (undefined4 ****)0x12;
  local_214 = iVar2;
  pcVar5 = (char *)thunk_FUN_01be5118(0x12);
  if (pcVar5 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x12);
  }
  FUN_01bed4e2(pcVar5,"performanceScaling",0x12);
  local_1f9 = 5;
  local_200 = 0x51;
  local_204 = "boser::web::graphql::bosminer::configurator::autotuning::PerformanceScalingSetter";
  local_208 = 0x18;
  local_20c = (uint ****)0x3e8310;
  iVar2 = FUN_006c176c(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                       "PerformanceScalingSetter",0x18);
  if (iVar2 == 0) {
    iVar2 = thunk_FUN_01be5118(0x18);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x18);
    }
    FUN_01bed4e2(iVar2,"PerformanceScalingSetter",0x18);
    local_60 = (char *****)0x18;
    local_68 = (char *****)0x18;
    local_64 = (undefined4 *)iVar2;
    FUN_006a0cfc(&local_128,5,
                 "boser::web::graphql::bosminer::configurator::autotuning::PerformanceScalingSetter"
                 ,0x51);
    FUN_006c2a34(&local_1d8,puVar20,&local_68,&local_128);
    if (local_1c8 != -0x7ffffffa) {
      FUN_00abf870(&local_1d8);
    }
    local_124 = "PerformanceScalingSetter";
    local_120 = (undefined4 *****)0x18;
    local_128 = (undefined4 *****)0x80000000;
    FUN_0160ec7c(&local_1f8,&local_128);
    if ((char)puVar16[4] == '\0') {
      FUN_019ae6ac(&local_128);
      *puVar12 = (uint)local_120;
      puVar16[3] = (uint)(code *)local_11c;
      *puVar16 = (uint)local_128;
      puVar16[1] = (uint)local_124;
      *(undefined1 *)(puVar16 + 4) = 1;
    }
    local_68 = (char *****)*puVar16;
    local_64 = (undefined4 *)puVar16[1];
    local_50 = 0;
    local_54 = 4;
    local_58 = 0;
    *puVar16 = (uint)((int)local_68 + 1);
    puVar16[1] = (uint)((int)local_64 + (uint)((char *****)0xfffffffe < local_68));
    local_60 = (char *****)*puVar12;
    local_5c = puVar16[3];
    puStack_4c = &DAT_0056d238;
    iStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uVar15 = 7;
    puVar4 = (undefined4 *)thunk_FUN_01be5118(7);
    if (puVar4 == (undefined4 *)0x0) {
LAB_00ac2d2c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,uVar15);
    }
    *(undefined4 *)((int)puVar4 + 3) = 0x64656c62;
    *puVar4 = 0x62616e65;
    local_2c = 7;
    local_34 = (char *****)&DAT_00000007;
    local_30 = puVar4;
    pcVar6 = (char *)thunk_FUN_01be5118();
    if (pcVar6 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,7);
    }
    builtin_strncpy(pcVar6,"enabled",7);
    FUN_00abbda8(&local_1d8,param_1);
    local_f8 = 0x80000000;
    local_120 = (undefined4 *****)0x7;
    local_128 = (undefined4 *****)0x7;
    local_11c._0_4_ = (code *)(undefined4 ****)local_1d8;
    local_11c._4_4_ = (uint *****)local_1d8._4_4_;
    local_114 = local_1d0;
    local_ec = (undefined4 *)0x80000000;
    local_e0 = 0x80000001;
    local_d4 = (undefined *)0x0;
    local_d0 = local_d0 & 0xffff0000;
    local_10c = (undefined4 ****)0x4;
    local_108 = (char *****)0x0;
    local_110 = (char *)0x0;
    local_fc = 0;
    local_100 = (char *****)&DAT_00000008;
    local_104 = (undefined4 *)0x0;
    local_124 = pcVar6;
    FUN_006e07e8(&local_1d8,&local_68,&local_34,&local_128);
    FUN_00abfbec(&local_1d8);
    uVar15 = 9;
    puVar4 = (undefined4 *)thunk_FUN_01be5118(9);
    if (puVar4 == (undefined4 *)0x0) goto LAB_00ac2d2c;
    FUN_01bed4e2(puVar4,"powerStep",9);
    local_2c = 9;
    local_34 = (char *****)&DAT_00000009;
    local_30 = puVar4;
    pcVar6 = (char *)thunk_FUN_01be5118(9);
    if (pcVar6 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,9);
    }
    FUN_01bed4e2(pcVar6,"powerStep",9);
    FUN_00abbe6c(&local_1d8,param_1);
    local_120 = (undefined4 *****)0x9;
    local_f8 = 0x80000000;
    local_128 = (undefined4 *****)0x9;
    local_11c._0_4_ = (code *)(undefined4 ****)local_1d8;
    local_11c._4_4_ = (uint *****)local_1d8._4_4_;
    local_114 = local_1d0;
    local_ec = (undefined4 *)0x80000000;
    local_e0 = 0x80000001;
    local_d4 = (undefined *)0x0;
    local_d0 = local_d0 & 0xffff0000;
    local_10c = (undefined4 ****)0x4;
    local_108 = (char *****)0x0;
    local_110 = (char *)0x0;
    local_fc = 0;
    local_100 = (char *****)&DAT_00000008;
    local_104 = (undefined4 *)0x0;
    local_124 = pcVar6;
    FUN_006e07e8(&local_1d8,&local_68,&local_34,&local_128);
    FUN_00abfbec(&local_1d8);
    uVar15 = 0xe;
    puVar4 = (undefined4 *)thunk_FUN_01be5118(0xe);
    if (puVar4 == (undefined4 *)0x0) goto LAB_00ac2d2c;
    FUN_01bed4e2(puVar4,"minPowerTarget",0xe);
    local_2c = 0xe;
    local_34 = (char *****)&DAT_0000000e;
    local_30 = puVar4;
    pcVar6 = (char *)thunk_FUN_01be5118(0xe);
    if (pcVar6 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xe);
    }
    FUN_01bed4e2(pcVar6,"minPowerTarget",0xe);
    FUN_00abbe6c(&local_1d8,param_1);
    local_120 = (undefined4 *****)0xe;
    local_f8 = 0x80000000;
    local_128 = (undefined4 *****)0xe;
    local_11c._0_4_ = (code *)(undefined4 ****)local_1d8;
    local_11c._4_4_ = (uint *****)local_1d8._4_4_;
    local_114 = local_1d0;
    local_ec = (undefined4 *)0x80000000;
    local_e0 = 0x80000001;
    local_d4 = (undefined *)0x0;
    local_d0 = local_d0 & 0xffff0000;
    local_10c = (undefined4 ****)0x4;
    local_108 = (char *****)0x0;
    local_110 = (char *)0x0;
    local_fc = 0;
    local_100 = (char *****)&DAT_00000008;
    local_104 = (undefined4 *)0x0;
    local_124 = pcVar6;
    FUN_006e07e8(&local_1d8,&local_68,&local_34,&local_128);
    FUN_00abfbec(&local_1d8);
    uVar15 = 0xc;
    puVar4 = (undefined4 *)thunk_FUN_01be5118(0xc);
    if (puVar4 == (undefined4 *)0x0) goto LAB_00ac2d2c;
    FUN_01bed4e2(puVar4,"hashrateStep",0xc);
    local_2c = 0xc;
    local_34 = (char *****)&DAT_0000000c;
    local_30 = puVar4;
    pcVar6 = (char *)thunk_FUN_01be5118(0xc);
    if (pcVar6 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xc);
    }
    FUN_01bed4e2(pcVar6,"hashrateStep",0xc);
    FUN_00abbe0c(&local_1d8,param_1);
    local_120 = (undefined4 *****)0xc;
    local_f8 = 0x80000000;
    local_128 = (undefined4 *****)0xc;
    local_11c._0_4_ = (code *)(undefined4 ****)local_1d8;
    local_11c._4_4_ = (uint *****)local_1d8._4_4_;
    local_114 = local_1d0;
    local_ec = (undefined4 *)0x80000000;
    local_e0 = 0x80000001;
    local_d4 = (undefined *)0x0;
    local_d0 = local_d0 & 0xffff0000;
    local_10c = (undefined4 ****)0x4;
    local_108 = (char *****)0x0;
    local_110 = (char *)0x0;
    local_fc = 0;
    local_100 = (char *****)&DAT_00000008;
    local_104 = (undefined4 *)0x0;
    local_124 = pcVar6;
    FUN_006e07e8(&local_1d8,&local_68,&local_34,&local_128);
    FUN_00abfbec(&local_1d8);
    uVar15 = 0x11;
    puVar4 = (undefined4 *)thunk_FUN_01be5118(0x11);
    if (puVar4 == (undefined4 *)0x0) goto LAB_00ac2d2c;
    FUN_01bed4e2(puVar4,"minHashrateTarget",0x11);
    local_2c = 0x11;
    local_34 = (char *****)&DAT_00000011;
    local_30 = puVar4;
    pcVar6 = (char *)thunk_FUN_01be5118(0x11);
    if (pcVar6 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x11);
    }
    FUN_01bed4e2(pcVar6,"minHashrateTarget",0x11);
    FUN_00abbe0c(&local_1d8,param_1);
    local_120 = (undefined4 *****)0x11;
    local_f8 = 0x80000000;
    local_128 = (undefined4 *****)0x11;
    local_11c._0_4_ = (code *)(undefined4 ****)local_1d8;
    local_11c._4_4_ = (uint *****)local_1d8._4_4_;
    local_114 = local_1d0;
    local_ec = (undefined4 *)0x80000000;
    local_e0 = 0x80000001;
    local_d4 = (undefined *)0x0;
    local_d0 = local_d0 & 0xffff0000;
    local_10c = (undefined4 ****)0x4;
    local_108 = (char *****)0x0;
    local_110 = (char *)0x0;
    local_fc = 0;
    local_100 = (char *****)&DAT_00000008;
    local_104 = (undefined4 *)0x0;
    local_124 = pcVar6;
    FUN_006e07e8(&local_1d8,&local_68,&local_34,&local_128);
    FUN_00abfbec(&local_1d8);
    uVar15 = 0xf;
    puVar4 = (undefined4 *)thunk_FUN_01be5118(0xf);
    if (puVar4 == (undefined4 *)0x0) goto LAB_00ac2d2c;
    FUN_01bed4e2(puVar4,"shutdownEnabled",0xf);
    local_2c = 0xf;
    local_34 = (char *****)&DAT_0000000f;
    local_30 = puVar4;
    pcVar6 = (char *)thunk_FUN_01be5118(0xf);
    if (pcVar6 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xf);
    }
    FUN_01bed4e2(pcVar6,"shutdownEnabled",0xf);
    FUN_00abbda8(&local_1d8,param_1);
    local_120 = (undefined4 *****)0xf;
    local_f8 = 0x80000000;
    local_128 = (undefined4 *****)0xf;
    local_11c._0_4_ = (code *)(undefined4 ****)local_1d8;
    local_11c._4_4_ = (uint *****)local_1d8._4_4_;
    local_114 = local_1d0;
    local_ec = (undefined4 *)0x80000000;
    local_e0 = 0x80000001;
    local_d4 = (undefined *)0x0;
    local_d0 = local_d0 & 0xffff0000;
    local_10c = (undefined4 ****)0x4;
    local_108 = (char *****)0x0;
    local_110 = (char *)0x0;
    local_fc = 0;
    local_100 = (char *****)&DAT_00000008;
    local_104 = (undefined4 *)0x0;
    local_124 = pcVar6;
    FUN_006e07e8(&local_1d8,&local_68,&local_34,&local_128);
    FUN_00abfbec(&local_1d8);
    uVar15 = 0x10;
    puVar4 = (undefined4 *)thunk_FUN_01be5118(0x10);
    if (puVar4 == (undefined4 *)0x0) goto LAB_00ac2d2c;
    FUN_01bed4e2(puVar4,&DAT_0056ad28,0x10);
    local_2c = 0x10;
    local_34 = (char *****)&DAT_00000010;
    local_30 = puVar4;
    pcVar6 = (char *)thunk_FUN_01be5118(0x10);
    if (pcVar6 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x10);
    }
    FUN_01bed4e2(pcVar6,&DAT_0056ad28,0x10);
    FUN_00abbe0c(&local_1d8,param_1);
    local_120 = (undefined4 *****)0x10;
    local_f8 = 0x80000000;
    local_128 = (undefined4 *****)0x10;
    local_11c._0_4_ = (code *)(undefined4 ****)local_1d8;
    local_11c._4_4_ = (uint *****)local_1d8._4_4_;
    local_114 = local_1d0;
    local_ec = (undefined4 *)0x80000000;
    local_e0 = 0x80000001;
    local_d4 = (undefined *)0x0;
    local_d0 = local_d0 & 0xffff0000;
    local_10c = (undefined4 ****)0x4;
    local_108 = (char *****)0x0;
    local_110 = (char *)0x0;
    local_fc = 0;
    local_100 = (char *****)&DAT_00000008;
    local_104 = (undefined4 *)0x0;
    local_124 = pcVar6;
    FUN_006e07e8(&local_1d8,&local_68,&local_34,&local_128);
    FUN_00abfbec(&local_1d8);
    uVar15 = 7;
    puVar4 = (undefined4 *)thunk_FUN_01be5118(7);
    if (puVar4 == (undefined4 *)0x0) goto LAB_00ac2d2c;
    *(undefined4 *)((int)puVar4 + 3) = 0x65646f4d;
    *puVar4 = 0x4d737064;
    local_2c = 7;
    local_34 = (char *****)&DAT_00000007;
    local_30 = puVar4;
    pcVar6 = (char *)thunk_FUN_01be5118();
    if (pcVar6 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,7);
    }
    builtin_strncpy(pcVar6,"dpsMode",7);
    FUN_00b4beb0(&local_128,param_1);
    FUN_019bb7e0(local_128,local_124);
    pcVar7 = (char *)FUN_01298504(7,1);
    if (pcVar7 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,7);
    }
    builtin_strncpy(pcVar7,"DpsMode",7);
    local_f8 = 0x80000000;
    local_ec = (undefined4 *)0x80000000;
    local_120 = (undefined4 *****)0x7;
    local_d0 = local_d0 & 0xffff0000;
    local_10c = (undefined4 ****)0x4;
    local_128 = (undefined4 *****)0x7;
    local_e0 = 0x80000001;
    local_114 = (undefined4 ****)0x7;
    local_11c._0_4_ = (code *)0x7;
    local_d4 = (undefined *)0x0;
    local_108 = (char *****)0x0;
    local_110 = (char *)0x0;
    local_fc = 0;
    local_100 = (char *****)&DAT_00000008;
    local_104 = (undefined4 *)0x0;
    pppppuVar18 = (uint *****)&local_34;
    local_124 = pcVar6;
    local_11c._4_4_ = (uint *****)pcVar7;
    FUN_006e07e8(&local_1d8,&local_68,pppppuVar18,&local_128);
    pppppuVar17 = (undefined4 *****)&local_1d8;
    FUN_00abfbec(pppppuVar17);
    uVar15 = 0x14;
    iVar2 = thunk_FUN_01be5118(0x14);
    if (iVar2 == 0) goto LAB_00ac2d2c;
    FUN_01bed4e2(iVar2,"onStartTa",0x14);
    local_70 = 0x14;
    local_78 = 0x14;
    local_74 = iVar2;
    iVar2 = thunk_FUN_01be5118(0x14);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x14);
    }
    FUN_01bed4e2(iVar2,"onStartTa",0x14);
    local_1e1 = 0;
    local_1e0 = (uint ****)0x524790;
    local_1dc = 3;
    local_1e8 = 3;
    local_1ec = (uint ****)0x3eece8;
    iVar3 = FUN_006c176c(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),"Int",3);
    if (iVar3 == 0) {
      puVar8 = (undefined2 *)thunk_FUN_01be5118(3);
      if (puVar8 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,3);
      }
      local_2c = 3;
      *(undefined1 *)(puVar8 + 1) = 0x74;
      *puVar8 = 0x6e49;
      local_34 = (char *****)0x3;
      local_30 = (undefined4 *)puVar8;
      FUN_006a0cfc(&local_128,0,"u32",3);
      FUN_006c2a34(&local_1d8,puVar20,&local_34,&local_128);
      if (local_1c8 != -0x7ffffffa) {
        FUN_006a723c(&local_1d8);
      }
      local_124 = "Int";
      local_120 = (undefined4 *****)0x3;
      local_128 = (undefined4 *****)0x80000000;
      FUN_0160ec7c(&local_1d8,&local_128);
      lVar25 = FUN_013245a0("\nThe `Int` scalar type represents non-fractional whole numeric values."
                            ,0x46);
      local_e8 = (int)((ulonglong)lVar25 >> 0x20);
      uVar15 = 0;
      if (lVar25 < 0) {
LAB_00ac1ec0:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar15,local_e8);
      }
      if (local_e8 == 0) {
        puVar4 = (undefined4 *)0x1;
        local_2a8 = 0;
      }
      else {
        uVar15 = 1;
        puVar4 = (undefined4 *)FUN_01298504(local_e8,1);
        local_2a8 = local_e8;
        if (puVar4 == (undefined4 *)0x0) goto LAB_00ac1ec0;
      }
      FUN_01bed4e2(puVar4,(int)lVar25,local_e8);
      local_d8 = (undefined4 *)thunk_FUN_01be5118(8);
      if (local_d8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,8);
      }
      *local_d8 = 1;
      local_d8[1] = 1;
      local_114 = (undefined4 ****)local_1d8;
      local_110 = local_1d8._4_4_;
      local_10c = local_1d0;
      local_f0 = local_2a8;
      local_104 = (undefined4 *)&SUB_00000004;
      local_cc = 0;
      local_d0 = 0;
      local_e4 = 0x80000000;
      local_11c._4_4_ = (uint *****)&DAT_80000000;
      local_f4 = 0;
      local_fc = 0;
      local_100 = (char *****)0x0;
      local_108 = (char *****)0x0;
      local_d4 = &DAT_01c05c40;
      local_f8 = 8;
      local_ec = puVar4;
      iVar3 = FUN_006c4014(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),"Int",3);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c226c0);
      }
      FUN_006a723c();
      FUN_01bed4e2(iVar3,&local_128,0xb0);
    }
    else {
      uVar24 = FUN_006a71d4();
      puVar11 = (undefined1 *)((ulonglong)uVar24 >> 0x20);
      iVar9 = (int)uVar24;
      if (iVar9 != 0) {
        local_1d8 = uVar24;
        if (puVar11 == &DAT_00000003) {
          iVar9 = thunk_FUN_01bed842("u32",iVar9,3);
          if (iVar9 != 0) goto LAB_00ac1fa0;
        }
        else {
          if (puVar11 == &DAT_0000000d) {
            iVar9 = thunk_FUN_01bed842(iVar9,"__fake_type__",0xd);
            if (iVar9 == 0) goto LAB_00ac2110;
          }
LAB_00ac1fa0:
          iVar9 = FUN_006e5bc0(param_1 + 0x20,"Int",3);
          if (iVar9 == 0) {
            pppppuVar18 = &local_1ec;
            local_120 = &local_1e0;
            puVar13 = &DAT_01c226d0;
            puVar10 = &DAT_00572c5c;
            local_11c._0_4_ = (code *)&DAT_0132b6a0;
            goto LAB_00ac2ce4;
          }
        }
        uVar14 = 2;
        if ((int)*(uint *)(iVar3 + 0x10) < 0) {
          uVar14 = *(uint *)(iVar3 + 0x10) ^ 0x80000000;
        }
        if (uVar14 != 0) {
          pppppuVar17 = &local_1ec;
          puVar13 = &DAT_01c226e0;
          local_34 = (char *****)CONCAT31(local_34._1_3_,(char)uVar14);
          puVar10 = &DAT_005b5680;
          local_11c._0_4_ = FUN_006a7514;
          local_120 = (undefined4 *****)&local_1e1;
LAB_00ac2ce4:
          local_124 = (char *)&DAT_0132b6a0;
          local_128 = pppppuVar17;
          local_114 = (undefined4 ****)(code *)local_11c;
          local_11c._4_4_ = pppppuVar18;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(puVar10,&local_128,puVar13);
        }
      }
    }
LAB_00ac2110:
    local_120 = (undefined4 *****)0x3;
    local_124 = "Int";
    local_128 = (undefined4 *****)0x80000000;
    local_30 = (undefined4 *)&LAB_012b97d8;
    local_34 = (char *****)&local_128;
    FUN_00664898(&local_1d8,&DAT_0057a667,&local_34);
    uVar24 = local_1d8;
    if (local_128 != (undefined4 *****)0x80000000) {
      FUN_019bb7e0(local_128,local_124);
      uVar24 = local_1d8;
    }
    local_1d8._4_4_ = (char *)((ulonglong)uVar24 >> 0x20);
    local_1d8._0_4_ = (undefined4 ****)uVar24;
    FUN_019bb7e0((undefined4 ****)local_1d8,local_1d8._4_4_);
    local_1d8 = uVar24;
    puVar8 = (undefined2 *)thunk_FUN_01be5118(3);
    if (puVar8 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,3);
    }
    *(undefined1 *)(puVar8 + 1) = 0x74;
    *puVar8 = 0x6e49;
    local_f8 = 0x80000000;
    local_ec = (undefined4 *)0x80000000;
    local_d0 = local_d0 & 0xffff0000;
    local_10c = (undefined4 ****)0x4;
    local_120 = (undefined4 *****)0x14;
    local_128 = (undefined4 *****)0x14;
    local_e0 = 0x80000001;
    local_114 = (undefined4 ****)0x3;
    local_11c._0_4_ = (code *)0x3;
    local_d4 = (undefined *)0x0;
    local_108 = (char *****)0x0;
    local_110 = (char *)0x0;
    local_fc = 0;
    local_100 = (char *****)0x8;
    local_104 = (undefined4 *)0x0;
    local_124 = (char *)iVar2;
    local_11c._4_4_ = (uint *****)puVar8;
    FUN_006e07e8(&local_1d8,&local_68,&local_78,&local_128);
    FUN_00abfbec(&local_1d8);
    local_108 = local_68;
    local_104 = local_64;
    local_100 = local_60;
    local_fc = local_5c;
    local_f8 = local_58;
    local_f4 = local_54;
    local_f0 = local_50;
    local_ec = puStack_4c;
    local_e8 = iStack_48;
    local_e4 = uStack_44;
    local_e0 = uStack_40;
    uStack_dc = uStack_3c;
    local_c8 = local_1f8;
    iStack_c4 = local_1f4;
    uStack_c0 = local_1f0;
    local_a4 = 0;
    local_ac = 8;
    local_b8 = 4;
    local_a8 = 0;
    local_b0 = 0;
    local_b4 = 0;
    local_bc = 0;
    local_d8 = (undefined4 *)0x0;
    local_d4 = (undefined *)0x80000000;
    local_10c = (undefined4 ****)0x51;
    local_11c._4_4_ = (uint *****)&DAT_80000005;
    local_110 = "boser::web::graphql::bosminer::configurator::autotuning::PerformanceScalingSetter";
    iVar2 = FUN_006c4014(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                         "PerformanceScalingSetter",0x18);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c226c0);
    }
    FUN_00abf870();
    FUN_01bed4e2(iVar2,&local_128,0xb0);
  }
  else {
    uVar24 = FUN_006a71d4();
    puVar11 = (undefined1 *)((ulonglong)uVar24 >> 0x20);
    iVar3 = (int)uVar24;
    if (iVar3 != 0) {
      local_1d8 = uVar24;
      if (puVar11 == &DAT_00000051) {
        iVar3 = thunk_FUN_01bed842("boser::web::graphql::bosminer::configurator::autotuning::PerformanceScalingSetter"
                                   ,iVar3,0x51);
        if (iVar3 != 0) goto LAB_00ac1ef0;
      }
      else {
        if (puVar11 == &DAT_0000000d) {
          iVar3 = thunk_FUN_01bed842(iVar3,"__fake_type__",0xd);
          if (iVar3 == 0) goto LAB_00ac22d0;
        }
LAB_00ac1ef0:
        iVar3 = FUN_015db690(param_1 + 0x20,"PerformanceScalingSetter",0x18);
        if (iVar3 == 0) {
          pppppuVar18 = &local_20c;
          local_120 = (undefined4 *****)&local_204;
          puVar13 = &DAT_01c226d0;
          puVar10 = &DAT_00572c5c;
          local_11c._0_4_ = (code *)&DAT_0132b6a0;
          goto LAB_00ac2c4c;
        }
      }
      uVar14 = 2;
      if ((int)*(uint *)(iVar2 + 0x10) < 0) {
        uVar14 = *(uint *)(iVar2 + 0x10) ^ 0x80000000;
      }
      if (uVar14 < 5) {
        pppppuVar17 = &local_20c;
        puVar13 = &DAT_01c226e0;
        local_68 = (char *****)CONCAT31(local_68._1_3_,(char)uVar14);
        puVar10 = &DAT_005b5680;
        local_11c._0_4_ = FUN_006a7514;
        local_120 = (undefined4 *****)&local_1f9;
LAB_00ac2c4c:
        local_124 = (char *)&DAT_0132b6a0;
        local_128 = pppppuVar17;
        local_114 = (undefined4 ****)(code *)local_11c;
        local_11c._4_4_ = pppppuVar18;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(puVar10,&local_128,puVar13);
      }
    }
  }
LAB_00ac22d0:
  local_120 = (undefined4 *****)0x18;
  local_128 = (undefined4 *****)0x80000000;
  local_68 = (char *****)&local_128;
  local_124 = "PerformanceScalingSetter";
  local_64 = (undefined4 *)&LAB_012b97d8;
  local_27c = (uint *****)&local_68;
  FUN_00664898(&local_1d8,&DAT_0057a667,local_27c);
  uVar24 = local_1d8;
  if (local_128 != (undefined4 *****)0x80000000) {
    FUN_019bb7e0(local_128,local_124);
    uVar24 = local_1d8;
  }
  local_1d8._4_4_ = (char *)((ulonglong)uVar24 >> 0x20);
  local_1d8._0_4_ = (undefined4 ****)uVar24;
  FUN_019bb7e0((undefined4 ****)local_1d8,local_1d8._4_4_);
  local_1d8 = uVar24;
  pcVar6 = (char *)thunk_FUN_01be5118(0x18);
  if (pcVar6 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x18);
  }
  FUN_01bed4e2(pcVar6,"PerformanceScalingSetter",0x18);
  local_120 = (undefined4 *****)0x12;
  local_f8 = 0x80000000;
  local_ec = (undefined4 *)0x80000000;
  local_e0 = 0x80000001;
  local_d0 = local_d0 & 0xffff0000;
  local_10c = (undefined4 ****)0x4;
  local_114 = (undefined4 ****)0x18;
  local_11c._0_4_ = (code *)0x18;
  local_d4 = (undefined *)0x0;
  local_108 = (char *****)0x0;
  local_110 = (char *)0x0;
  local_fc = 0;
  local_100 = (char *****)&DAT_00000008;
  local_104 = (undefined4 *)0x0;
  pppppuVar17 = &local_218;
  local_128 = (undefined4 *****)(char ****)0x12;
  local_124 = pcVar5;
  local_11c._4_4_ = (uint *****)pcVar6;
  FUN_006e07e8(&local_1d8,&local_248,pppppuVar17,&local_128);
  pppppuVar19 = (undefined4 *****)&local_1d8;
  FUN_00abfbec(pppppuVar19);
  iVar2 = thunk_FUN_01be5118(10);
  if (iVar2 == 0) {
    uVar15 = 10;
LAB_00ac2ad4:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,uVar15);
  }
  FUN_01bed4e2(iVar2,"hashChains",10);
  local_1f0 = 10;
  local_1f8 = 10;
  local_1f4 = iVar2;
  iVar2 = thunk_FUN_01be5118(10);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,10);
  }
  FUN_01bed4e2(iVar2,"hashChains",10);
  local_1ec = (uint ****)CONCAT31(local_1ec._1_3_,5);
  local_214 = 0x52;
  local_218 = (undefined4 ****)0x3e9463;
  local_1dc = 0x19;
  local_1e0 = (uint ****)0x3e8328;
  iVar3 = FUN_006c176c(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  if (iVar3 == 0) {
    iVar3 = thunk_FUN_01be5118(0x19);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x19);
    }
    FUN_01bed4e2(iVar3,"HashChainAutotuningSetter",0x19);
    local_60 = (char *****)0x19;
    local_68 = (char *****)0x19;
    local_64 = (undefined4 *)iVar3;
    FUN_006a0cfc(&local_128,5,
                 "boser::web::graphql::bosminer::configurator::autotuning::HashChainAutotuningSetter"
                 ,0x52);
    FUN_006c2a34(&local_1d8,puVar20,&local_68,&local_128);
    if (local_1c8 != -0x7ffffffa) {
      FUN_00abf870(&local_1d8);
    }
    local_124 = "HashChainAutotuningSetter";
    local_120 = (undefined4 *****)0x19;
    local_128 = (undefined4 *****)0x80000000;
    FUN_0160ec7c(&local_78,&local_128);
    if ((char)puVar16[4] == '\0') {
      FUN_019ae6ac(&local_128);
      *puVar12 = (uint)local_120;
      puVar16[3] = (uint)(code *)local_11c;
      *puVar16 = (uint)local_128;
      puVar16[1] = (uint)local_124;
      *(undefined1 *)(puVar16 + 4) = 1;
    }
    local_68 = (char *****)*puVar16;
    local_64 = (undefined4 *)puVar16[1];
    uVar15 = 4;
    local_50 = 0;
    local_58 = 0;
    local_60 = (char *****)*puVar12;
    local_5c = puVar16[3];
    *puVar16 = (uint)((int)local_68 + 1);
    puVar16[1] = (uint)((int)local_64 + (uint)((char *****)0xfffffffe < local_68));
    local_54 = 4;
    puStack_4c = &DAT_0056d238;
    iStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    puVar20 = (undefined4 *)thunk_FUN_01be5118(4);
    if (puVar20 == (undefined4 *)0x0) {
LAB_00ac2d68:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,uVar15);
    }
    *puVar20 = 0x656d616e;
    local_2c = 4;
    local_34 = (char *****)&SUB_00000004;
    local_30 = puVar20;
    pcVar5 = (char *)thunk_FUN_01be5118();
    if (pcVar5 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,4);
    }
    builtin_strncpy(pcVar5,"name",4);
    FUN_006c8168(&local_1d8,param_1);
    local_f8 = 0x80000000;
    local_120 = (undefined4 *****)0x4;
    local_128 = (undefined4 *****)0x4;
    local_114 = local_1d0;
    local_ec = (undefined4 *)0x80000000;
    local_e0 = 0x80000001;
    local_d4 = (undefined *)0x0;
    local_d0 = local_d0 & 0xffff0000;
    local_108 = (char *****)0x0;
    local_10c = (undefined4 ****)0x4;
    local_110 = (char *)0x0;
    local_fc = 0;
    local_100 = (char *****)&DAT_00000008;
    local_104 = (undefined4 *)0x0;
    local_124 = pcVar5;
    local_11c = local_1d8;
    FUN_006e07e8(&local_1d8,&local_68,&local_34,&local_128);
    FUN_00abfbec(&local_1d8);
    uVar15 = 7;
    puVar20 = (undefined4 *)thunk_FUN_01be5118(7);
    if (puVar20 == (undefined4 *)0x0) goto LAB_00ac2d68;
    *(undefined4 *)((int)puVar20 + 3) = 0x64656c62;
    *puVar20 = 0x62616e65;
    local_2c = 7;
    local_34 = (char *****)&DAT_00000007;
    local_30 = puVar20;
    pcVar5 = (char *)thunk_FUN_01be5118();
    if (pcVar5 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,7);
    }
    builtin_strncpy(pcVar5,"enabled",7);
    FUN_00abbda8(&local_1d8,param_1);
    local_f8 = 0x80000000;
    local_120 = (undefined4 *****)0x7;
    local_128 = (undefined4 *****)0x7;
    local_114 = local_1d0;
    local_ec = (undefined4 *)0x80000000;
    local_e0 = 0x80000001;
    local_d4 = (undefined *)0x0;
    local_d0 = local_d0 & 0xffff0000;
    local_10c = (undefined4 ****)0x4;
    local_108 = (char *****)0x0;
    local_110 = (char *)0x0;
    local_fc = 0;
    local_100 = (char *****)0x8;
    local_104 = (undefined4 *)0x0;
    local_124 = pcVar5;
    local_11c = local_1d8;
    FUN_006e07e8(&local_1d8,&local_68,&local_34,&local_128);
    FUN_00abfbec(&local_1d8);
    local_108 = local_68;
    local_104 = local_64;
    local_100 = local_60;
    local_fc = local_5c;
    local_f8 = local_58;
    local_f4 = local_54;
    local_f0 = local_50;
    local_ec = puStack_4c;
    local_e8 = iStack_48;
    local_e4 = uStack_44;
    local_e0 = uStack_40;
    uStack_dc = uStack_3c;
    local_c8 = local_78;
    iStack_c4 = local_74;
    uStack_c0 = local_70;
    local_a4 = 0;
    local_ac = 8;
    local_b8 = 4;
    local_a8 = 0;
    local_b0 = 0;
    local_b4 = 0;
    local_bc = 0;
    local_d8 = (undefined4 *)0x0;
    local_d4 = (undefined *)0x80000000;
    local_10c = (undefined4 ****)0x52;
    local_110 = "boser::web::graphql::bosminer::configurator::autotuning::HashChainAutotuningSetter"
    ;
    local_11c._4_4_ = (uint *****)&DAT_80000005;
    iVar3 = FUN_006c4014(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                         "HashChainAutotuningSetter",0x19);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c226c0);
    }
    FUN_00abf870();
    FUN_01bed4e2(iVar3,&local_128,0xb0);
  }
  else {
    uVar24 = FUN_006a71d4();
    puVar11 = (undefined1 *)((ulonglong)uVar24 >> 0x20);
    iVar9 = (int)uVar24;
    if (iVar9 != 0) {
      local_1d8 = uVar24;
      if (puVar11 == &DAT_00000052) {
        iVar9 = thunk_FUN_01bed842("boser::web::graphql::bosminer::configurator::autotuning::HashChainAutotuningSetter"
                                   ,iVar9,0x52);
        if (iVar9 != 0) goto LAB_00ac2884;
      }
      else {
        if (puVar11 == &DAT_0000000d) {
          iVar9 = thunk_FUN_01bed842(iVar9,"__fake_type__",0xd);
          if (iVar9 == 0) goto LAB_00ac28b8;
        }
LAB_00ac2884:
        iVar9 = FUN_015db690(param_1 + 0x20,"HashChainAutotuningSetter",0x19);
        if (iVar9 == 0) {
          local_27c = &local_1e0;
          puVar13 = &DAT_01c226d0;
          puVar10 = &DAT_00572c5c;
          local_11c._0_4_ = (code *)&DAT_0132b6a0;
          goto LAB_00ac2c94;
        }
      }
      uVar14 = 2;
      if ((int)*(uint *)(iVar3 + 0x10) < 0) {
        uVar14 = *(uint *)(iVar3 + 0x10) ^ 0x80000000;
      }
      if (uVar14 < 5) {
        pppppuVar17 = &local_1ec;
        pppppuVar19 = &local_1e0;
        puVar13 = &DAT_01c226e0;
        puVar10 = &DAT_005b5680;
        local_68 = (char *****)CONCAT31(local_68._1_3_,(char)uVar14);
        local_11c._0_4_ = FUN_006a7514;
LAB_00ac2c94:
        local_124 = (char *)&DAT_0132b6a0;
        local_11c._4_4_ = local_27c;
        local_128 = pppppuVar19;
        local_120 = pppppuVar17;
        local_114 = (undefined4 ****)(code *)local_11c;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(puVar10,&local_128,puVar13);
      }
    }
  }
LAB_00ac28b8:
  FUN_00a92d70(&local_128);
  FUN_019bb7e0(local_128,local_124);
  FUN_00a92d70(&local_128);
  local_64 = (undefined4 *)&LAB_00632348;
  local_68 = (char *****)&local_128;
  FUN_00664898(&local_1d8,&DAT_005791cb,&local_68);
  FUN_019bb7e0(local_128,local_124);
  FUN_019bb7e0((undefined4 ****)local_1d8,local_1d8._4_4_);
  FUN_00b19a54(&local_1d8);
  uVar15 = local_1d8._4_4_;
  uVar21 = 0;
  if ((int)local_1d0 < 0) {
LAB_00ac2930:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar21,local_1d0);
  }
  if (local_1d0 == (undefined4 ****)0x0) {
    iVar3 = 1;
    ppppuVar23 = (undefined4 ****)0x0;
  }
  else {
    uVar21 = 1;
    iVar3 = FUN_01298504(local_1d0,1);
    ppppuVar23 = local_1d0;
    if (iVar3 == 0) goto LAB_00ac2930;
  }
  FUN_01bed4e2(iVar3,uVar15,local_1d0);
  if ((undefined4 ****)local_1d8 != (undefined4 ****)0x80000000) {
    FUN_019bb7e0((undefined4 ****)local_1d8,uVar15);
  }
  local_120 = (undefined4 *****)0xa;
  local_f8 = 0x80000000;
  local_ec = (undefined4 *)0x80000000;
  local_e0 = 0x80000001;
  local_d0 = local_d0 & 0xffff0000;
  local_10c = (undefined4 ****)0x4;
  local_114 = local_1d0;
  local_d4 = (undefined *)0x0;
  local_108 = (char *****)0x0;
  local_110 = (char *)0x0;
  local_fc = 0;
  local_100 = (char *****)0x8;
  local_104 = (undefined4 *)0x0;
  local_128 = (undefined4 *****)(char ****)0xa;
  local_124 = (char *)iVar2;
  local_11c._0_4_ = (code *)ppppuVar23;
  local_11c._4_4_ = (uint *****)iVar3;
  FUN_006e07e8(&local_1d8,&local_248,&local_1f8,&local_128);
  FUN_00abfbec(&local_1d8);
  local_108 = (char *****)local_248;
  local_104 = (undefined4 *)uStack_244;
  local_100 = (char *****)uStack_240;
  local_fc = local_23c;
  local_f8 = local_238;
  local_f4 = local_234;
  local_f0 = local_230;
  local_ec = puStack_22c;
  local_e8 = uStack_228;
  local_e4 = uStack_224;
  local_e0 = uStack_220;
  uStack_dc = uStack_21c;
  local_a4 = 0;
  local_ac = 8;
  local_b8 = 4;
  local_a8 = 0;
  local_b0 = 0;
  local_b4 = 0;
  local_bc = 0;
  local_d8 = (undefined4 *)0x0;
  local_d4 = (undefined *)0x80000000;
  local_10c = (undefined4 ****)0x45;
  local_11c._4_4_ = (uint *****)&DAT_80000005;
  local_110 = "boser::web::graphql::bosminer::configurator::autotuning::AutotuningIn";
  iVar2 = FUN_006c4014(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),param_2,
                       param_3);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01c226c0);
  }
  FUN_00abf870();
  FUN_01bed4e2(iVar2,&local_128,0xb0);
  return;
}

