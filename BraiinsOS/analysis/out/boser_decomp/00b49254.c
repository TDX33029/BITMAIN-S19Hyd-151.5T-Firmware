// FUN_00b49254 @ 00b49254 size=9564 calls_out=36 calls_in=1
// strings: boser_bosminer::info::SummaryInfo | __fake_type__ | boser_bosminer::info::SummaryInfo | boser_bosminer::info::SummaryInfo | SummaryInfo | realHashrate

void FUN_00b49254(int param_1,undefined4 ***param_2,char *****param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int iVar9;
  undefined *puVar10;
  undefined *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  undefined4 ******ppppppuVar15;
  undefined4 uVar16;
  uint *puVar17;
  char *****pppppcVar18;
  undefined4 *****pppppuVar19;
  int iVar20;
  undefined4 *puVar21;
  undefined8 uVar22;
  longlong lVar23;
  undefined4 *****local_360;
  undefined4 ******local_35c;
  uint local_34c;
  char ***pppcStack_31c;
  char *****pppppcStack_318;
  char *local_314;
  undefined4 local_310;
  undefined1 local_309;
  undefined1 local_308 [16];
  uint local_2f8;
  uint uStack_2f4;
  uint uStack_2f0;
  uint local_2ec;
  uint local_2e8;
  uint local_2e4;
  uint local_2e0;
  undefined4 *puStack_2dc;
  uint uStack_2d8;
  uint uStack_2d4;
  uint uStack_2d0;
  uint uStack_2cc;
  undefined4 local_2c4;
  int local_2c0;
  undefined4 local_2bc;
  undefined4 *local_2b8;
  undefined4 uStack_2b4;
  char *****pppppcStack_2b0;
  undefined4 *****pppppuStack_2ac;
  char *pcStack_2a8;
  char *****pppppcStack_2a4;
  undefined4 *****local_2a0;
  char *pcStack_29c;
  char *****pppppcStack_298;
  undefined4 *****pppppuStack_294;
  char *pcStack_290;
  char *****pppppcStack_28c;
  undefined4 *****local_284;
  undefined4 local_280;
  char *local_27c;
  undefined4 local_278;
  undefined1 local_271;
  undefined4 local_270 [4];
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
  undefined4 *local_220;
  undefined4 *local_21c;
  char *****local_218;
  undefined4 *****pppppuStack_214;
  char *pcStack_210;
  char *****pppppcStack_20c;
  undefined4 *****local_208;
  char *pcStack_204;
  char *****pppppcStack_200;
  undefined4 *****pppppuStack_1fc;
  char *pcStack_1f8;
  char *****pppppcStack_1f4;
  undefined4 *****local_1ec;
  undefined4 local_1e8;
  char *local_1e4;
  undefined4 local_1e0;
  undefined1 local_1d9;
  undefined8 local_1d8;
  char *****pppppcStack_1d0;
  undefined4 *****pppppuStack_1cc;
  char *local_1c8;
  char *****pppppcStack_1c4;
  undefined4 *****local_1c0;
  char *pcStack_1bc;
  char *****local_1b8;
  undefined4 *****pppppuStack_1b4;
  char *pcStack_1b0;
  char *****pppppcStack_1ac;
  undefined4 uStack_1a8;
  undefined4 *****local_128;
  char *local_124;
  undefined8 local_120;
  undefined4 ******local_118;
  undefined8 local_114;
  char *****local_10c;
  undefined4 *****local_108;
  char *local_104;
  char *****pppppcStack_100;
  undefined4 *****pppppuStack_fc;
  char *local_f8;
  char *****local_f4;
  undefined4 *****local_f0;
  char *local_ec;
  char *****local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  int local_dc;
  char *local_d8;
  int local_d4;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  uint local_ac;
  undefined4 *local_a8;
  uint local_a4;
  undefined8 local_a0;
  char *****local_98;
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
  char *****local_68;
  char *local_64;
  char *****local_60;
  undefined4 *****pppppuStack_5c;
  char *local_58;
  char *****local_54;
  undefined4 *****local_50;
  char *pcStack_4c;
  char *****pppppcStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  
  puVar21 = (undefined4 *)(param_1 + 0x40);
  local_310 = 0x21;
  local_309 = 1;
  local_314 = "boser_bosminer::info::SummaryInfo";
  pppcStack_31c = (char ***)param_2;
  pppppcStack_318 = param_3;
  iVar2 = FUN_006c176c(*puVar21,*(undefined4 *)(param_1 + 0x44),param_2,param_3);
  if (iVar2 != 0) {
    local_1d8 = FUN_006a71d4();
    iVar20 = (int)((ulonglong)local_1d8 >> 0x20);
    iVar3 = (int)local_1d8;
    if (iVar3 == 0) {
      return;
    }
    if (iVar20 == 0x21) {
      iVar3 = thunk_FUN_01bed842("boser_bosminer::info::SummaryInfo",iVar3,0x21);
      if (iVar3 == 0) goto LAB_00b4936c;
    }
    else if (iVar20 == 0xd) {
      iVar3 = thunk_FUN_01bed842(iVar3,"__fake_type__",0xd);
      if (iVar3 == 0) {
        return;
      }
    }
    iVar3 = FUN_006e5bc0(param_1 + 0x20,param_2,param_3);
    if (iVar3 == 0) {
      local_118 = (undefined4 ******)&pppcStack_31c;
      local_114._0_4_ = (code *)&DAT_0132b6a0;
      local_120._4_4_ = (code *)&DAT_0132b6a0;
      local_124 = (char *)&DAT_0132b6a0;
      local_120._0_4_ = (undefined4 ****)&local_314;
      local_128 = (undefined4 *****)&local_1d8;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_00572c5c,&local_128,&DAT_01c226d0);
    }
LAB_00b4936c:
    if (*(int *)(iVar2 + 0x10) != -0x7fffffff) {
      uVar1 = FUN_006a7508();
      local_68 = (char *****)CONCAT31(local_68._1_3_,uVar1);
      local_118 = (undefined4 ******)&local_68;
      local_120._0_4_ = (undefined4 ****)&local_309;
      local_128 = (undefined4 *****)&pppcStack_31c;
      local_124 = (char *)&DAT_0132b6a0;
      local_114._0_4_ = FUN_006a7514;
      local_120._4_4_ = FUN_006a7514;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005b5680,&local_128,&DAT_01c226e0);
    }
    return;
  }
  uVar16 = 0;
  if ((int)param_3 < 0) {
LAB_00b49300:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar16,param_3);
  }
  if (param_3 == (char *****)0x0) {
    pppppcVar18 = (char *****)0x0;
    puVar4 = &DAT_00000001;
  }
  else {
    uVar16 = 1;
    puVar4 = (undefined1 *)FUN_01298504(param_3,1);
    pppppcVar18 = param_3;
    if (puVar4 == (undefined1 *)0x0) goto LAB_00b49300;
  }
  FUN_01bed4e2(puVar4,param_2,param_3);
  local_68 = pppppcVar18;
  local_64 = puVar4;
  local_60 = param_3;
  FUN_006a0cfc(&local_128,1,"boser_bosminer::info::SummaryInfo",0x21);
  FUN_006c2a34(&local_1d8,puVar21,&local_68,&local_128);
  if (local_1c8 != (char *)0x80000006) {
    FUN_006b2000(&local_1d8);
  }
  local_120._0_4_ = (undefined4 ****)&DAT_0000000b;
  local_124 = "SummaryInfo";
  local_128 = (undefined4 *****)0x80000000;
  uVar16 = FUN_0160ec7c(local_308,&local_128);
  uVar22 = thunk_FUN_01bee35a(uVar16,0x2c0);
  puVar17 = (uint *)((int)uVar22 + (int)((ulonglong)uVar22 >> 0x20));
  if ((char)puVar17[4] == '\0') {
    FUN_019ae6ac(&local_128);
    *puVar17 = (uint)local_128;
    puVar17[1] = (uint)local_124;
    puVar17[2] = (uint)(undefined4 ****)local_120;
    puVar17[3] = (uint)local_120._4_4_;
    *(undefined1 *)(puVar17 + 4) = 1;
  }
  local_2ec = puVar17[3];
  local_2f8 = *puVar17;
  uStack_2f4 = puVar17[1];
  local_2e0 = 0;
  local_2e8 = 0;
  local_2e4 = 8;
  puVar12 = puVar17 + 2;
  uStack_2f0 = *puVar12;
  *puVar17 = local_2f8 + 1;
  puVar17[1] = uStack_2f4 + (0xfffffffe < local_2f8);
  puStack_2dc = &DAT_0056d238;
  uStack_2d8 = 0;
  uStack_2d4 = 0;
  uStack_2d0 = 0;
  puVar5 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (puVar5 == (undefined4 *)0x0) {
    uVar16 = 0xc;
    goto LAB_00b4b584;
  }
  FUN_01bed4e2(puVar5,"realHashrate",0xc);
  local_218 = (char *****)&DAT_0000000c;
  local_220 = (undefined4 *)&DAT_0000000c;
  local_21c = puVar5;
  puVar5 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0xc);
  }
  FUN_01bed4e2(puVar5,"realHashrate",0xc);
  FUN_006e01d0(&local_1d8);
  FUN_00b5db50(&local_68,param_1);
  local_a4 = 0xc;
  local_ac = 0xc;
  local_dc = -0x80000000;
  local_120._0_4_ = (undefined4 ****)local_1d8;
  local_120._4_4_ = (code *)local_1d8._4_4_;
  local_118 = (undefined4 ******)pppppcStack_1d0;
  local_114._0_4_ = (code *)pppppuStack_1cc;
  local_114._4_4_ = local_1c8;
  local_10c = pppppcStack_1c4;
  local_108 = local_1c0;
  local_104 = pcStack_1bc;
  pppppcStack_100 = local_1b8;
  pppppuStack_fc = pppppuStack_1b4;
  local_f8 = pcStack_1b0;
  local_f4 = pppppcStack_1ac;
  local_a0._0_4_ = local_68;
  local_a0._4_4_ = local_64;
  local_98 = local_60;
  local_124 = (char *)CONCAT31(local_124._1_3_,1);
  local_e8 = (char *****)&DAT_80000001;
  local_90 = 4;
  local_7c = 0;
  local_128 = (undefined4 *****)0x0;
  local_c4 = 0x80000000;
  local_d0 = 0x80000000;
  local_7b = 0;
  local_f0 = (undefined4 *****)0x0;
  local_8c = 0;
  local_94 = 0;
  local_b8 = 0x80000000;
  local_80 = 0;
  local_84 = 8;
  local_88 = 0;
  local_ec = (char *)0x0;
  local_a8 = puVar5;
  FUN_006e10e8(&local_1d8,&local_2f8,&local_220);
  FUN_00b3bb58(&local_1d8);
  puVar5 = (undefined4 *)thunk_FUN_01be5118(10);
  if (puVar5 == (undefined4 *)0x0) {
    uVar16 = 10;
    goto LAB_00b4b584;
  }
  FUN_01bed4e2(puVar5,"poolStatus",10);
  local_218 = (char *****)&DAT_0000000a;
  local_220 = (undefined4 *)&DAT_0000000a;
  local_21c = puVar5;
  puVar5 = (undefined4 *)thunk_FUN_01be5118(10);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,10);
  }
  FUN_01bed4e2(puVar5,"poolStatus",10);
  FUN_006e01d0(&local_1d8);
  FUN_00b5a52c(&local_68,param_1);
  local_a4 = 10;
  local_ac = 10;
  local_dc = -0x80000000;
  local_120._0_4_ = (undefined4 ****)local_1d8;
  local_120._4_4_ = (code *)local_1d8._4_4_;
  local_118 = (undefined4 ******)pppppcStack_1d0;
  local_114._0_4_ = (code *)pppppuStack_1cc;
  local_114._4_4_ = local_1c8;
  local_10c = pppppcStack_1c4;
  local_108 = local_1c0;
  local_104 = pcStack_1bc;
  pppppcStack_100 = local_1b8;
  pppppuStack_fc = pppppuStack_1b4;
  local_f8 = pcStack_1b0;
  local_f4 = pppppcStack_1ac;
  local_a0._0_4_ = local_68;
  local_a0._4_4_ = local_64;
  local_98 = local_60;
  local_124 = (char *)CONCAT31(local_124._1_3_,1);
  local_e8 = (char *****)&DAT_80000001;
  local_7c = 0;
  local_7b = 0;
  local_90 = 4;
  local_128 = (undefined4 *****)0x0;
  local_c4 = 0x80000000;
  local_d0 = 0x80000000;
  local_f0 = (undefined4 *****)0x0;
  local_8c = 0;
  local_94 = 0;
  local_b8 = 0x80000000;
  local_80 = 0;
  local_84 = 8;
  local_88 = 0;
  local_ec = (char *)0x0;
  local_a8 = puVar5;
  FUN_006e10e8(&local_1d8,&local_2f8,&local_220,&local_128);
  FUN_00b3bb58(&local_1d8);
  puVar5 = (undefined4 *)thunk_FUN_01be5118(6);
  if (puVar5 == (undefined4 *)0x0) {
    uVar16 = 6;
    goto LAB_00b4b584;
  }
  *(undefined2 *)(puVar5 + 1) = 0x7365;
  *puVar5 = 0x72616873;
  local_218 = (char *****)&DAT_00000006;
  local_220 = (undefined4 *)&DAT_00000006;
  local_21c = puVar5;
  puVar5 = (undefined4 *)thunk_FUN_01be5118(6);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,6);
  }
  *(undefined2 *)(puVar5 + 1) = 0x7365;
  *puVar5 = 0x72616873;
  FUN_006e01d0(&local_1d8);
  FUN_00b5ac5c(&local_68,param_1);
  local_a4 = 6;
  local_ac = 6;
  local_dc = -0x80000000;
  local_120._0_4_ = (undefined4 ****)local_1d8;
  local_120._4_4_ = (code *)local_1d8._4_4_;
  local_118 = (undefined4 ******)pppppcStack_1d0;
  local_114._0_4_ = (code *)pppppuStack_1cc;
  local_114._4_4_ = local_1c8;
  local_10c = pppppcStack_1c4;
  local_108 = local_1c0;
  local_104 = pcStack_1bc;
  pppppcStack_100 = local_1b8;
  pppppuStack_fc = pppppuStack_1b4;
  local_f8 = pcStack_1b0;
  local_f4 = pppppcStack_1ac;
  local_a0._0_4_ = local_68;
  local_a0._4_4_ = local_64;
  local_98 = local_60;
  local_124 = (char *)CONCAT31(local_124._1_3_,1);
  local_e8 = (char *****)&DAT_80000001;
  local_7c = 0;
  local_7b = 0;
  local_90 = 4;
  local_128 = (undefined4 *****)0x0;
  local_c4 = 0x80000000;
  local_d0 = 0x80000000;
  local_f0 = (undefined4 *****)0x0;
  local_8c = 0;
  local_94 = 0;
  local_b8 = 0x80000000;
  local_80 = 0;
  local_84 = 8;
  local_88 = 0;
  local_ec = (char *)0x0;
  local_a8 = puVar5;
  FUN_006e10e8(&local_1d8,&local_2f8,&local_220,&local_128);
  FUN_00b3bb58(&local_1d8);
  puVar5 = (undefined4 *)thunk_FUN_01be5118(0xb);
  if (puVar5 == (undefined4 *)0x0) {
    uVar16 = 0xb;
    goto LAB_00b4b584;
  }
  FUN_01bed4e2(puVar5,"foundBlocks",0xb);
  local_218 = (char *****)&DAT_0000000b;
  local_220 = (undefined4 *)&DAT_0000000b;
  local_21c = puVar5;
  puVar5 = (undefined4 *)thunk_FUN_01be5118(0xb);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0xb);
  }
  FUN_01bed4e2(puVar5,"foundBlocks",0xb);
  FUN_006e01d0(&local_1d8);
  FUN_006cd324(&local_68,param_1);
  local_a4 = 0xb;
  local_ac = 0xb;
  local_dc = -0x80000000;
  local_120._0_4_ = (undefined4 ****)local_1d8;
  local_120._4_4_ = (code *)local_1d8._4_4_;
  local_118 = (undefined4 ******)pppppcStack_1d0;
  local_114._0_4_ = (code *)pppppuStack_1cc;
  local_114._4_4_ = local_1c8;
  local_10c = pppppcStack_1c4;
  local_108 = local_1c0;
  local_104 = pcStack_1bc;
  pppppcStack_100 = local_1b8;
  pppppuStack_fc = pppppuStack_1b4;
  local_f8 = pcStack_1b0;
  local_f4 = pppppcStack_1ac;
  local_a0._0_4_ = local_68;
  local_a0._4_4_ = local_64;
  local_98 = local_60;
  local_124 = (char *)CONCAT31(local_124._1_3_,1);
  local_e8 = (char *****)&DAT_80000001;
  local_7c = 0;
  local_7b = 0;
  local_90 = 4;
  local_128 = (undefined4 *****)0x0;
  local_c4 = 0x80000000;
  local_d0 = 0x80000000;
  local_f0 = (undefined4 *****)0x0;
  local_8c = 0;
  local_94 = 0;
  local_b8 = 0x80000000;
  local_80 = 0;
  local_84 = 8;
  local_88 = 0;
  local_ec = (char *)0x0;
  local_a8 = puVar5;
  FUN_006e10e8(&local_1d8,&local_2f8,&local_220,&local_128);
  FUN_00b3bb58(&local_1d8);
  puVar5 = (undefined4 *)thunk_FUN_01be5118(9);
  if (puVar5 == (undefined4 *)0x0) {
    uVar16 = 9;
    goto LAB_00b4b584;
  }
  FUN_01bed4e2(puVar5,"bestSharechips",9);
  local_218 = (char *****)&DAT_00000009;
  local_220 = (undefined4 *)&DAT_00000009;
  local_21c = puVar5;
  puVar5 = (undefined4 *)thunk_FUN_01be5118(9);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,9);
  }
  FUN_01bed4e2(puVar5,"bestSharechips",9);
  FUN_006e01d0(&local_1d8);
  FUN_006c86e0(&local_68,param_1);
  local_a4 = 9;
  local_ac = 9;
  local_dc = -0x80000000;
  local_120._0_4_ = (undefined4 ****)local_1d8;
  local_120._4_4_ = (code *)local_1d8._4_4_;
  local_118 = (undefined4 ******)pppppcStack_1d0;
  local_114._0_4_ = (code *)pppppuStack_1cc;
  local_114._4_4_ = local_1c8;
  local_10c = pppppcStack_1c4;
  local_108 = local_1c0;
  local_104 = pcStack_1bc;
  pppppcStack_100 = local_1b8;
  pppppuStack_fc = pppppuStack_1b4;
  local_f8 = pcStack_1b0;
  local_f4 = pppppcStack_1ac;
  local_a0._0_4_ = local_68;
  local_a0._4_4_ = local_64;
  local_98 = local_60;
  local_124 = (char *)CONCAT31(local_124._1_3_,1);
  local_e8 = (char *****)&DAT_80000001;
  local_7c = 0;
  local_7b = 0;
  local_90 = 4;
  local_128 = (undefined4 *****)0x0;
  local_c4 = 0x80000000;
  local_d0 = 0x80000000;
  local_f0 = (undefined4 *****)0x0;
  local_8c = 0;
  local_94 = 0;
  local_b8 = 0x80000000;
  local_80 = 0;
  local_84 = 8;
  local_88 = 0;
  local_ec = (char *)0x0;
  local_a8 = puVar5;
  FUN_006e10e8(&local_1d8,&local_2f8,&local_220,&local_128);
  FUN_00b3bb58(&local_1d8);
  puVar5 = (undefined4 *)thunk_FUN_01be5118(5);
  if (puVar5 == (undefined4 *)0x0) {
    uVar16 = 5;
    goto LAB_00b4b584;
  }
  *(undefined1 *)(puVar5 + 1) = 0x72;
  *puVar5 = 0x65776f70;
  local_218 = (char *****)&DAT_00000005;
  local_220 = (undefined4 *)&DAT_00000005;
  local_21c = puVar5;
  puVar5 = (undefined4 *)thunk_FUN_01be5118(5);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,5);
  }
  *(undefined1 *)(puVar5 + 1) = 0x72;
  *puVar5 = 0x65776f70;
  FUN_006e01d0(&local_1d8);
  FUN_00b625c0(&local_68,param_1);
  local_a4 = 5;
  local_ac = 5;
  local_dc = -0x80000000;
  local_120._0_4_ = (undefined4 ****)local_1d8;
  local_120._4_4_ = (code *)local_1d8._4_4_;
  local_118 = (undefined4 ******)pppppcStack_1d0;
  local_114._0_4_ = (code *)pppppuStack_1cc;
  local_114._4_4_ = local_1c8;
  local_10c = pppppcStack_1c4;
  local_108 = local_1c0;
  local_104 = pcStack_1bc;
  pppppcStack_100 = local_1b8;
  pppppuStack_fc = pppppuStack_1b4;
  local_f8 = pcStack_1b0;
  local_f4 = pppppcStack_1ac;
  local_a0._0_4_ = local_68;
  local_a0._4_4_ = local_64;
  local_98 = local_60;
  local_124 = (char *)CONCAT31(local_124._1_3_,1);
  local_e8 = (char *****)&DAT_80000001;
  local_7c = 0;
  local_7b = 0;
  local_90 = 4;
  local_128 = (undefined4 *****)0x0;
  local_c4 = 0x80000000;
  local_d0 = 0x80000000;
  local_f0 = (undefined4 *****)0x0;
  local_8c = 0;
  local_94 = 0;
  local_b8 = 0x80000000;
  local_80 = 0;
  local_84 = 8;
  local_88 = 0;
  local_ec = (char *)0x0;
  local_a8 = puVar5;
  FUN_006e10e8(&local_1d8,&local_2f8,&local_220,&local_128);
  FUN_00b3bb58(&local_1d8);
  puVar4 = (undefined1 *)thunk_FUN_01be5118(0xb);
  if (puVar4 == (undefined1 *)0x0) {
    uVar16 = 0xb;
    goto LAB_00b4b584;
  }
  FUN_01bed4e2(puVar4,"tunerStatus",0xb);
  local_60 = (char *****)&DAT_0000000b;
  local_68 = (char *****)&DAT_0000000b;
  local_64 = puVar4;
  puVar5 = (undefined4 *)thunk_FUN_01be5118(0xb);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0xb);
  }
  FUN_01bed4e2(puVar5,"tunerStatus",0xb);
  FUN_006e01d0(&local_1d8);
  FUN_00b5d180(&local_128,param_1);
  FUN_019bb7e0(local_128,local_124);
  puVar4 = (undefined1 *)FUN_01298504(0xb,1);
  if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0xb);
  }
  FUN_01bed4e2(puVar4,"TunerStatus",0xb);
  local_ac = 0xb;
  local_a4 = 0xb;
  local_dc = -0x80000000;
  local_120._0_4_ = (undefined4 ****)local_1d8;
  local_120._4_4_ = (code *)local_1d8._4_4_;
  local_118 = (undefined4 ******)pppppcStack_1d0;
  local_114._0_4_ = (code *)pppppuStack_1cc;
  local_114._4_4_ = local_1c8;
  local_10c = pppppcStack_1c4;
  local_108 = local_1c0;
  local_104 = pcStack_1bc;
  pppppcStack_100 = local_1b8;
  pppppuStack_fc = pppppuStack_1b4;
  local_f8 = pcStack_1b0;
  local_f4 = pppppcStack_1ac;
  local_124 = (char *)CONCAT31(local_124._1_3_,1);
  local_e8 = (char *****)&DAT_80000001;
  local_7b = 0;
  local_90 = 4;
  local_98 = (char *****)&DAT_0000000b;
  local_a0._0_4_ = (char *****)&DAT_0000000b;
  local_7c = 0;
  local_128 = (undefined4 *****)0x0;
  local_c4 = 0x80000000;
  local_d0 = 0x80000000;
  local_f0 = (undefined4 *****)0x0;
  local_8c = 0;
  local_94 = 0;
  local_b8 = 0x80000000;
  local_80 = 0;
  local_84 = 8;
  local_88 = 0;
  local_ec = (char *)0x0;
  ppppppuVar15 = (undefined4 ******)&local_68;
  local_a8 = puVar5;
  local_a0._4_4_ = puVar4;
  FUN_006e10e8(&local_1d8,&local_2f8,ppppppuVar15);
  pppppuVar19 = (undefined4 *****)&local_1d8;
  FUN_00b3bb58(pppppuVar19);
  iVar2 = thunk_FUN_01be5118(0x19);
  if (iVar2 == 0) {
    uVar16 = 0x19;
    goto LAB_00b4b584;
  }
  FUN_01bed4e2(iVar2,"dynamicPerformanceScaling",0x19);
  local_2bc = 0x19;
  local_2c4 = 0x19;
  local_2c0 = iVar2;
  puVar5 = (undefined4 *)thunk_FUN_01be5118(0x19);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x19);
  }
  FUN_01bed4e2(puVar5,"dynamicPerformanceScaling",0x19);
  FUN_006e01d0(&local_2b8);
  local_27c = "boser_bosminer::info::DynamicPerformanceScaling";
  local_271 = 1;
  local_278 = 0x2f;
  local_280 = 0x19;
  local_284 = (undefined4 *****)0x3eedb0;
  iVar2 = FUN_006c176c(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                       "DynamicPerformanceScaling",0x19);
  if (iVar2 == 0) {
    puVar4 = (undefined1 *)thunk_FUN_01be5118(0x19);
    if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x19);
    }
    FUN_01bed4e2(puVar4,"DynamicPerformanceScaling",0x19);
    local_60 = (char *****)&DAT_00000019;
    local_68 = (char *****)&DAT_00000019;
    local_64 = puVar4;
    FUN_006a0cfc(&local_128,1,"boser_bosminer::info::DynamicPerformanceScaling",0x2f);
    local_360 = (undefined4 *****)&local_1d8;
    local_35c = (undefined4 ******)&local_68;
    FUN_006c2a34(local_360,puVar21,local_35c,&local_128);
    if (local_1c8 != (char *)0x80000006) {
      FUN_006b2000(&local_1d8);
    }
    local_124 = "DynamicPerformanceScaling";
    local_120._0_4_ = (undefined4 ****)&DAT_00000019;
    local_128 = (undefined4 *****)0x80000000;
    FUN_0160ec7c(local_270,&local_128);
    lVar23 = FUN_013245a0("\nCarries the raw values (watts / mega-hashes / restart timestamp) so the frontend composes the\nstatus message itself, instead of the backend shipping a pre-formatted string. Each value is\npresent only for the matching `status`."
                          ,0xe3);
    uVar13 = (uint)((ulonglong)lVar23 >> 0x20);
    uVar16 = 0;
    if (lVar23 < 0) {
LAB_00b4a014:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar16,uVar13);
    }
    if (uVar13 == 0) {
      local_34c = 0;
      puVar6 = (undefined4 *)&DAT_00000001;
    }
    else {
      uVar16 = 1;
      puVar6 = (undefined4 *)FUN_01298504(uVar13,1);
      local_34c = uVar13;
      if (puVar6 == (undefined4 *)0x0) goto LAB_00b4a014;
    }
    FUN_01bed4e2(puVar6,(int)lVar23,uVar13);
    if ((char)puVar17[4] == '\0') {
      FUN_019ae6ac(&local_128);
      *puVar12 = (uint)(undefined4 ****)local_120;
      puVar17[3] = (uint)local_120._4_4_;
      *puVar17 = (uint)local_128;
      puVar17[1] = (uint)local_124;
      *(undefined1 *)(puVar17 + 4) = 1;
    }
    local_260 = *puVar17;
    uStack_25c = puVar17[1];
    local_248 = 0;
    local_250 = 0;
    uStack_258 = *puVar12;
    *puVar17 = local_260 + 1;
    puVar17[1] = uStack_25c + (0xfffffffe < local_260);
    local_24c = 8;
    local_254 = puVar17[3];
    puStack_244 = &DAT_0056d238;
    uStack_240 = 0;
    uStack_23c = 0;
    uStack_238 = 0;
    uVar16 = 6;
    puVar7 = (undefined4 *)thunk_FUN_01be5118(6);
    if (puVar7 == (undefined4 *)0x0) goto LAB_00b4b7b8;
    *(undefined2 *)(puVar7 + 1) = 0x7375;
    *puVar7 = 0x74617473;
    local_224 = 6;
    local_22c = 6;
    local_228 = puVar7;
    puVar7 = (undefined4 *)thunk_FUN_01be5118();
    if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,6);
    }
    *(undefined2 *)(puVar7 + 1) = 0x7375;
    *puVar7 = 0x74617473;
    FUN_006e01d0(&local_220);
    local_1e4 = "boser_bosminer::info::DynamicPerformanceScalingStatus";
    local_1d9 = 4;
    local_1e0 = 0x35;
    local_1e8 = 0x1f;
    local_1ec = (undefined4 *****)0x3eeb98;
    iVar2 = FUN_006c176c(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                         "DynamicPerformanceScalingStatus",0x1f);
    if (iVar2 == 0) {
      iVar2 = FUN_01298504(0x1f,1);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0x1f);
      }
      FUN_01bed4e2(iVar2,"DynamicPerformanceScalingStatus",0x1f);
      local_60 = (char *****)0x1f;
      local_68 = (char *****)0x1f;
      local_64 = (char *)iVar2;
      FUN_006a0cfc(&local_128,4,"boser_bosminer::info::DynamicPerformanceScalingStatus",0x35);
      FUN_006c2a34(&local_1d8,puVar21,&local_68,&local_128);
      if (local_1c8 != (char *)0x80000006) {
        FUN_006b2000(&local_1d8);
      }
      local_124 = "DynamicPerformanceScalingStatus";
      local_120._0_4_ = (undefined4 ****)0x1f;
      local_128 = (undefined4 *****)0x80000000;
      FUN_0160ec7c(&local_78,&local_128);
      if ((char)puVar17[4] == '\0') {
        FUN_019ae6ac(&local_128);
        *puVar17 = (uint)local_128;
        puVar17[1] = (uint)local_124;
        *puVar12 = (uint)(undefined4 ****)local_120;
        puVar17[3] = (uint)local_120._4_4_;
        *(undefined1 *)(puVar17 + 4) = 1;
      }
      local_68 = (char *****)*puVar17;
      local_64 = (char *)puVar17[1];
      *puVar17 = (int)local_68 + 1;
      puVar17[1] = (uint)(local_64 + ((undefined4 *****)0xfffffffe < local_68));
      local_50 = (undefined4 *****)0x0;
      local_58 = (char *)0x0;
      local_54 = (char *****)&SUB_00000004;
      local_60 = (char *****)*puVar12;
      pppppuStack_5c = (undefined4 *****)puVar17[3];
      pcStack_4c = (char *)&DAT_0056d238;
      pppppcStack_48 = (char *****)0x0;
      uStack_44 = 0;
      uStack_40 = 0;
      uVar16 = 8;
      puVar21 = (undefined4 *)thunk_FUN_01be5118(8);
      if (puVar21 == (undefined4 *)0x0) {
LAB_00b4b7c8:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,uVar16);
      }
      puVar21[1] = 0x44454c42;
      *puVar21 = 0x41534944;
      local_2c = 8;
      local_34 = 8;
      local_30 = puVar21;
      pcVar8 = (char *)thunk_FUN_01be5118(8);
      if (pcVar8 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,8);
      }
      local_f8 = &DAT_80000001;
      builtin_strncpy(pcVar8,"DISABLED",8);
      local_e8 = (char *****)((uint)local_e8 & 0xffffff00);
      local_ec = (char *)0x0;
      local_104 = &DAT_80000000;
      local_120._0_4_ = (undefined4 ****)0x8;
      local_128 = (undefined4 *****)0x8;
      local_108 = (undefined4 *****)0x0;
      local_10c = (char *****)&DAT_00000008;
      local_114._4_4_ = (char *)0x0;
      local_114._0_4_ = (code *)0x0;
      local_118 = (undefined4 ******)&SUB_00000004;
      local_120._4_4_ = (code *)0x0;
      local_124 = pcVar8;
      FUN_006e0c4c(&local_1d8,&local_68,&local_34,&local_128);
      FUN_00ac5708(&local_1d8);
      uVar16 = 0x14;
      puVar21 = (undefined4 *)thunk_FUN_01be5118(0x14);
      if (puVar21 == (undefined4 *)0x0) goto LAB_00b4b7c8;
      FUN_01bed4e2(puVar21,"INITIAL_POWER_TARGET",0x14);
      local_2c = 0x14;
      local_34 = 0x14;
      local_30 = puVar21;
      pcVar8 = (char *)thunk_FUN_01be5118(0x14);
      if (pcVar8 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0x14);
      }
      FUN_01bed4e2(pcVar8,"INITIAL_POWER_TARGET",0x14);
      local_f8 = &DAT_80000001;
      local_104 = &DAT_80000000;
      local_10c = (char *****)&DAT_00000008;
      local_e8 = (char *****)((uint)local_e8 & 0xffffff00);
      local_ec = (char *)0x0;
      local_120._0_4_ = (undefined4 ****)0x14;
      local_128 = (undefined4 *****)0x14;
      local_108 = (undefined4 *****)0x0;
      local_114._4_4_ = (char *)0x0;
      local_114._0_4_ = (code *)0x0;
      local_118 = (undefined4 ******)&SUB_00000004;
      local_120._4_4_ = (code *)0x0;
      local_124 = pcVar8;
      FUN_006e0c4c(&local_1d8,&local_68,&local_34,&local_128);
      FUN_00ac5708(&local_1d8);
      uVar16 = 0x14;
      puVar21 = (undefined4 *)thunk_FUN_01be5118(0x14);
      if (puVar21 == (undefined4 *)0x0) goto LAB_00b4b7c8;
      FUN_01bed4e2(puVar21,"LOWERED_POWER_TARGET",0x14);
      local_2c = 0x14;
      local_34 = 0x14;
      local_30 = puVar21;
      pcVar8 = (char *)thunk_FUN_01be5118(0x14);
      if (pcVar8 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0x14);
      }
      FUN_01bed4e2(pcVar8,"LOWERED_POWER_TARGET",0x14);
      local_f8 = &DAT_80000001;
      local_104 = &DAT_80000000;
      local_10c = (char *****)&DAT_00000008;
      local_e8 = (char *****)((uint)local_e8 & 0xffffff00);
      local_ec = (char *)0x0;
      local_120._0_4_ = (undefined4 ****)0x14;
      local_128 = (undefined4 *****)0x14;
      local_108 = (undefined4 *****)0x0;
      local_114._4_4_ = (char *)0x0;
      local_114._0_4_ = (code *)0x0;
      local_118 = (undefined4 ******)&SUB_00000004;
      local_120._4_4_ = (code *)0x0;
      local_124 = pcVar8;
      FUN_006e0c4c(&local_1d8,&local_68,&local_34,&local_128);
      FUN_00ac5708(&local_1d8);
      uVar16 = 0x17;
      puVar21 = (undefined4 *)thunk_FUN_01be5118(0x17);
      if (puVar21 == (undefined4 *)0x0) goto LAB_00b4b7c8;
      FUN_01bed4e2(puVar21,"INITIAL_HASHRATE_TARGET",0x17);
      local_2c = 0x17;
      local_34 = 0x17;
      local_30 = puVar21;
      pcVar8 = (char *)thunk_FUN_01be5118(0x17);
      if (pcVar8 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0x17);
      }
      FUN_01bed4e2(pcVar8,"INITIAL_HASHRATE_TARGET",0x17);
      local_f8 = &DAT_80000001;
      local_104 = &DAT_80000000;
      local_10c = (char *****)&DAT_00000008;
      local_e8 = (char *****)((uint)local_e8 & 0xffffff00);
      local_ec = (char *)0x0;
      local_120._0_4_ = (undefined4 ****)0x17;
      local_128 = (undefined4 *****)0x17;
      local_108 = (undefined4 *****)0x0;
      local_114._4_4_ = (char *)0x0;
      local_114._0_4_ = (code *)0x0;
      local_118 = (undefined4 ******)&SUB_00000004;
      local_120._4_4_ = (code *)0x0;
      local_124 = pcVar8;
      FUN_006e0c4c(&local_1d8,&local_68,&local_34,&local_128);
      FUN_00ac5708(&local_1d8);
      uVar16 = 0x17;
      puVar21 = (undefined4 *)thunk_FUN_01be5118(0x17);
      if (puVar21 == (undefined4 *)0x0) goto LAB_00b4b7c8;
      FUN_01bed4e2(puVar21,"LOWERED_HASHRATE_TARGET",0x17);
      local_2c = 0x17;
      local_34 = 0x17;
      local_30 = puVar21;
      pcVar8 = (char *)thunk_FUN_01be5118(0x17);
      if (pcVar8 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0x17);
      }
      FUN_01bed4e2(pcVar8,"LOWERED_HASHRATE_TARGET",0x17);
      local_f8 = &DAT_80000001;
      local_104 = &DAT_80000000;
      local_10c = (char *****)&DAT_00000008;
      local_e8 = (char *****)((uint)local_e8 & 0xffffff00);
      local_ec = (char *)0x0;
      local_120._0_4_ = (undefined4 ****)0x17;
      local_128 = (undefined4 *****)0x17;
      local_108 = (undefined4 *****)0x0;
      local_114._4_4_ = (char *)0x0;
      local_114._0_4_ = (code *)0x0;
      local_118 = (undefined4 ******)&SUB_00000004;
      local_120._4_4_ = (code *)0x0;
      local_124 = pcVar8;
      FUN_006e0c4c(&local_1d8,&local_68,&local_34,&local_128);
      FUN_00ac5708(&local_1d8);
      uVar16 = 0xf;
      puVar21 = (undefined4 *)thunk_FUN_01be5118(0xf);
      if (puVar21 == (undefined4 *)0x0) goto LAB_00b4b7c8;
      FUN_01bed4e2(puVar21,"MINING_SHUTDOWN",0xf);
      local_2c = 0xf;
      local_34 = 0xf;
      local_30 = puVar21;
      iVar2 = thunk_FUN_01be5118(0xf);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0xf);
      }
      FUN_01bed4e2(iVar2,"MINING_SHUTDOWN",0xf);
      local_f8 = (char *)0x80000001;
      local_104 = (char *)0x80000000;
      local_10c = (char *****)0x8;
      local_e8 = (char *****)((uint)local_e8 & 0xffffff00);
      local_ec = (char *)0x0;
      local_120._0_4_ = (undefined4 ****)0xf;
      local_128 = (undefined4 *****)0xf;
      local_108 = (undefined4 *****)0x0;
      local_114._4_4_ = (char *)0x0;
      local_114._0_4_ = (code *)0x0;
      local_118 = (undefined4 ******)0x4;
      local_120._4_4_ = (code *)0x0;
      local_124 = (char *)iVar2;
      FUN_006e0c4c(&local_1d8,&local_68,&local_34,&local_128);
      FUN_00ac5708(&local_1d8);
      local_108 = (undefined4 *****)local_68;
      local_104 = local_64;
      pppppcStack_100 = local_60;
      pppppuStack_fc = pppppuStack_5c;
      local_f8 = local_58;
      local_f4 = local_54;
      local_f0 = local_50;
      local_ec = pcStack_4c;
      local_e8 = pppppcStack_48;
      uStack_e4 = uStack_44;
      local_e0 = uStack_40;
      local_dc = iStack_3c;
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
      local_d4 = -0x80000000;
      local_10c = (char *****)&DAT_00000035;
      local_118 = (undefined4 ******)&DAT_80000004;
      local_114._4_4_ = "boser_bosminer::info::DynamicPerformanceScalingStatus";
      iVar2 = FUN_006c4014(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                           "DynamicPerformanceScalingStatus",0x1f);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c226c0);
      }
      FUN_006b2000();
      FUN_01bed4e2(iVar2,&local_128,0xb0);
    }
    else {
      uVar22 = FUN_006a71d4();
      puVar4 = (undefined1 *)((ulonglong)uVar22 >> 0x20);
      iVar3 = (int)uVar22;
      if (iVar3 != 0) {
        local_1d8 = uVar22;
        if (puVar4 == &DAT_00000035) {
          iVar3 = thunk_FUN_01bed842("boser_bosminer::info::DynamicPerformanceScalingStatus",iVar3,
                                     0x35);
          if (iVar3 != 0) goto LAB_00b4adc4;
        }
        else {
          if (puVar4 == &DAT_0000000d) {
            iVar3 = thunk_FUN_01bed842(iVar3,"__fake_type__",0xd);
            if (iVar3 == 0) goto LAB_00b4adfc;
          }
LAB_00b4adc4:
          iVar3 = FUN_006e5bc0(param_1 + 0x20,"DynamicPerformanceScalingStatus",0x1f);
          if (iVar3 == 0) {
            local_35c = &local_1ec;
            puVar11 = &DAT_01c226d0;
            puVar10 = &DAT_00572c5c;
            local_120._4_4_ = (code *)&DAT_0132b6a0;
            local_120._0_4_ = (undefined4 ****)&local_1e4;
            goto LAB_00b4b754;
          }
        }
        uVar14 = 2;
        if ((int)*(uint *)(iVar2 + 0x10) < 0) {
          uVar14 = *(uint *)(iVar2 + 0x10) ^ 0x80000000;
        }
        if (uVar14 != 4) {
          local_360 = &local_1ec;
          puVar11 = &DAT_01c226e0;
          local_68 = (char *****)CONCAT31(local_68._1_3_,(char)uVar14);
          puVar10 = &DAT_005b5680;
          local_120._4_4_ = FUN_006a7514;
          local_120._0_4_ = (undefined4 ****)&local_1d9;
LAB_00b4b754:
          local_128 = local_360;
          local_124 = (char *)&DAT_0132b6a0;
          local_118 = local_35c;
          local_114._0_4_ = local_120._4_4_;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(puVar10,&local_128,puVar11);
        }
      }
    }
LAB_00b4adfc:
    local_120._0_4_ = (undefined4 ****)0x1f;
    local_124 = "DynamicPerformanceScalingStatus";
    local_128 = (undefined4 *****)0x80000000;
    local_64 = &LAB_012b97d8;
    local_68 = (char *****)&local_128;
    FUN_00664898(&local_1d8,&DAT_0057a667,&local_68);
    if (local_128 != (undefined4 *****)0x80000000) {
      FUN_019bb7e0(local_128,local_124);
    }
    local_98 = pppppcStack_1d0;
    local_a4 = 6;
    local_ac = 6;
    local_dc = -0x80000000;
    local_120._0_4_ = (undefined4 ****)local_220;
    local_120._4_4_ = (code *)local_21c;
    local_118 = (undefined4 ******)local_218;
    local_114._0_4_ = (code *)pppppuStack_214;
    local_114._4_4_ = pcStack_210;
    local_10c = pppppcStack_20c;
    local_108 = local_208;
    local_104 = pcStack_204;
    pppppcStack_100 = pppppcStack_200;
    pppppuStack_fc = pppppuStack_1fc;
    local_f8 = pcStack_1f8;
    local_f4 = pppppcStack_1f4;
    local_124 = (char *)CONCAT31(local_124._1_3_,1);
    local_e8 = (char *****)&DAT_80000001;
    local_c4 = 0x80000000;
    local_7b = 0;
    local_d0 = 0x80000000;
    local_b8 = 0x80000000;
    local_7c = 0;
    local_128 = (undefined4 *****)0x0;
    local_f0 = (undefined4 *****)0x0;
    local_8c = 0;
    local_90 = 4;
    local_94 = 0;
    local_80 = 0;
    local_84 = 8;
    local_88 = 0;
    local_ec = (char *)0x0;
    local_a8 = puVar7;
    local_a0 = local_1d8;
    FUN_006e10e8(&local_1d8,&local_260,&local_22c,&local_128);
    FUN_00b3bb58(&local_1d8);
    uVar16 = 0xc;
    puVar21 = (undefined4 *)thunk_FUN_01be5118(0xc);
    if (puVar21 == (undefined4 *)0x0) {
LAB_00b4b7b8:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,uVar16);
    }
    FUN_01bed4e2(puVar21,"powerTargetW",0xc);
    local_218 = (char *****)&DAT_0000000c;
    local_220 = (undefined4 *)&DAT_0000000c;
    local_21c = puVar21;
    puVar21 = (undefined4 *)thunk_FUN_01be5118(0xc);
    if (puVar21 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xc);
    }
    FUN_01bed4e2(puVar21,"powerTargetW",0xc);
    lVar23 = FUN_013245a0("\nCurrent power target, only for `LoweredPowerTarget`.",0x35);
    iVar2 = (int)((ulonglong)lVar23 >> 0x20);
    uVar16 = 0;
    if (lVar23 < 0) {
LAB_00b4af80:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar16,iVar2);
    }
    if (iVar2 == 0) {
      pcVar8 = (char *)0x1;
      iVar3 = 0;
    }
    else {
      uVar16 = 1;
      pcVar8 = (char *)FUN_01298504(iVar2,1);
      iVar3 = iVar2;
      if (pcVar8 == (char *)0x0) goto LAB_00b4af80;
    }
    FUN_01bed4e2(pcVar8,(int)lVar23,iVar2);
    FUN_006e01d0(&local_1d8);
    FUN_00b632bc(&local_68,param_1);
    local_a4 = 0xc;
    local_ac = 0xc;
    local_118 = (undefined4 ******)pppppcStack_1d0;
    local_114._0_4_ = (code *)pppppuStack_1cc;
    local_114._4_4_ = local_1c8;
    local_10c = pppppcStack_1c4;
    local_108 = local_1c0;
    local_104 = pcStack_1bc;
    pppppcStack_100 = local_1b8;
    pppppuStack_fc = pppppuStack_1b4;
    local_f8 = pcStack_1b0;
    local_f4 = pppppcStack_1ac;
    local_a0._0_4_ = local_68;
    local_a0._4_4_ = local_64;
    local_98 = local_60;
    local_124 = (char *)CONCAT31(local_124._1_3_,1);
    local_e8 = (char *****)&DAT_80000001;
    local_7b = 0;
    local_c4 = 0x80000000;
    local_d0 = 0x80000000;
    local_b8 = 0x80000000;
    local_7c = 0;
    local_128 = (undefined4 *****)0x0;
    local_f0 = (undefined4 *****)0x0;
    local_8c = 0;
    local_90 = 4;
    local_94 = 0;
    local_80 = 0;
    local_84 = 8;
    local_88 = 0;
    local_ec = (char *)0x0;
    local_dc = iVar3;
    local_d8 = pcVar8;
    local_d4 = iVar2;
    local_a8 = puVar21;
    local_120 = local_1d8;
    FUN_006e10e8(&local_1d8,&local_260,&local_220,&local_128);
    FUN_00b3bb58(&local_1d8);
    uVar16 = 0xb;
    puVar21 = (undefined4 *)thunk_FUN_01be5118(0xb);
    if (puVar21 == (undefined4 *)0x0) goto LAB_00b4b7b8;
    FUN_01bed4e2(puVar21,"hashrateMhs",0xb);
    local_218 = (char *****)&DAT_0000000b;
    local_220 = (undefined4 *)&DAT_0000000b;
    local_21c = puVar21;
    puVar21 = (undefined4 *)thunk_FUN_01be5118(0xb);
    if (puVar21 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xb);
    }
    FUN_01bed4e2(puVar21,"hashrateMhs",0xb);
    lVar23 = FUN_013245a0("\nCurrent hashrate target, only for `LoweredHashrateTarget`.",0x3b);
    iVar2 = (int)((ulonglong)lVar23 >> 0x20);
    uVar16 = 0;
    if (lVar23 < 0) {
LAB_00b4b13c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar16,iVar2);
    }
    if (iVar2 == 0) {
      pcVar8 = (char *)0x1;
      iVar3 = 0;
    }
    else {
      uVar16 = 1;
      pcVar8 = (char *)FUN_01298504(iVar2,1);
      iVar3 = iVar2;
      if (pcVar8 == (char *)0x0) goto LAB_00b4b13c;
    }
    FUN_01bed4e2(pcVar8,(int)lVar23,iVar2);
    FUN_006e01d0(&local_1d8);
    FUN_00b632bc(&local_68,param_1);
    local_a4 = 0xb;
    local_ac = 0xb;
    local_118 = (undefined4 ******)pppppcStack_1d0;
    local_114._0_4_ = (code *)pppppuStack_1cc;
    local_114._4_4_ = local_1c8;
    local_10c = pppppcStack_1c4;
    local_108 = local_1c0;
    local_104 = pcStack_1bc;
    pppppcStack_100 = local_1b8;
    pppppuStack_fc = pppppuStack_1b4;
    local_f8 = pcStack_1b0;
    local_f4 = pppppcStack_1ac;
    local_a0._0_4_ = local_68;
    local_a0._4_4_ = local_64;
    local_98 = local_60;
    local_124 = (char *)CONCAT31(local_124._1_3_,1);
    local_e8 = (char *****)&DAT_80000001;
    local_7b = 0;
    local_c4 = 0x80000000;
    local_d0 = 0x80000000;
    local_b8 = 0x80000000;
    local_7c = 0;
    local_128 = (undefined4 *****)0x0;
    local_f0 = (undefined4 *****)0x0;
    local_8c = 0;
    local_90 = 4;
    local_94 = 0;
    local_80 = 0;
    local_84 = 8;
    local_88 = 0;
    local_ec = (char *)0x0;
    local_dc = iVar3;
    local_d8 = pcVar8;
    local_d4 = iVar2;
    local_a8 = puVar21;
    local_120 = local_1d8;
    FUN_006e10e8(&local_1d8,&local_260,&local_220,&local_128);
    FUN_00b3bb58(&local_1d8);
    uVar16 = 9;
    puVar21 = (undefined4 *)thunk_FUN_01be5118(9);
    if (puVar21 == (undefined4 *)0x0) goto LAB_00b4b7b8;
    FUN_01bed4e2(puVar21,"restartAt",9);
    local_218 = (char *****)&DAT_00000009;
    local_220 = (undefined4 *)&DAT_00000009;
    local_21c = puVar21;
    iVar2 = thunk_FUN_01be5118(9);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,9);
    }
    FUN_01bed4e2(iVar2,"restartAt",9);
    lVar23 = FUN_013245a0("\nWhen mining resumes, only for `MiningShutdown`.",0x30);
    iVar3 = (int)((ulonglong)lVar23 >> 0x20);
    uVar16 = 0;
    if (lVar23 < 0) {
LAB_00b4b2e8:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar16,iVar3);
    }
    if (iVar3 == 0) {
      iVar9 = 1;
      iVar20 = 0;
    }
    else {
      uVar16 = 1;
      iVar9 = FUN_01298504(iVar3,1);
      iVar20 = iVar3;
      if (iVar9 == 0) goto LAB_00b4b2e8;
    }
    FUN_01bed4e2(iVar9,(int)lVar23,iVar3);
    FUN_006e01d0(&local_1d8);
    FUN_00b64e38(&local_68,param_1);
    local_a4 = 9;
    local_ac = 9;
    local_a0._0_4_ = local_68;
    local_a0._4_4_ = local_64;
    local_98 = local_60;
    local_124 = (char *)CONCAT31(local_124._1_3_,1);
    local_e8 = (char *****)0x80000001;
    local_7b = 0;
    local_c4 = 0x80000000;
    local_d0 = 0x80000000;
    local_b8 = 0x80000000;
    local_7c = 0;
    local_128 = (undefined4 *****)0x0;
    local_f0 = (undefined4 *****)0x0;
    local_8c = 0;
    local_90 = 4;
    local_94 = 0;
    local_80 = 0;
    local_84 = 8;
    local_88 = 0;
    local_ec = (char *)0x0;
    local_dc = iVar20;
    local_d8 = (char *)iVar9;
    local_d4 = iVar3;
    local_a8 = (undefined4 *)iVar2;
    local_120 = local_1d8;
    FUN_006e10e8(&local_1d8,&local_260,&local_220,&local_128);
    FUN_00b3bb58(&local_1d8);
    puVar17 = (uint *)((uint)&local_1d8 | 4);
    *puVar17 = local_260;
    puVar17[1] = uStack_25c;
    puVar17[2] = uStack_258;
    puVar17[3] = local_254;
    puVar17[4] = local_250;
    puVar17[5] = local_24c;
    puVar17[6] = local_248;
    puVar17[7] = (uint)puStack_244;
    puVar17[8] = uStack_240;
    puVar17[9] = uStack_23c;
    puVar17[10] = uStack_238;
    puVar17[0xb] = uStack_234;
    local_d0 = local_270[0];
    local_ac = local_34c;
    local_118 = (undefined4 ******)&DAT_80000001;
    local_10c = pppppcStack_1d0;
    local_108 = pppppuStack_1cc;
    local_104 = local_1c8;
    pppppcStack_100 = pppppcStack_1c4;
    pppppuStack_fc = local_1c0;
    local_f8 = pcStack_1bc;
    local_f4 = local_1b8;
    local_f0 = pppppuStack_1b4;
    local_ec = pcStack_1b0;
    local_e8 = pppppcStack_1ac;
    uStack_e4 = uStack_1a8;
    local_94 = 0;
    local_b0 = 0;
    local_b8 = 0;
    local_8c = local_8c & 0xffff0000;
    local_90 = 0x10000;
    local_a0._0_4_ = (char *****)&DAT_80000000;
    local_b4 = 8;
    local_c0 = 4;
    local_bc = 0;
    local_c4 = 0;
    local_d4 = 0x2f;
    local_e0 = 0;
    local_d8 = "boser_bosminer::info::DynamicPerformanceScaling";
    local_dc = CONCAT31(local_dc._1_3_,1);
    local_a8 = puVar6;
    local_a4 = uVar13;
    local_114 = local_1d8;
    iVar2 = FUN_006c4014(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                         "DynamicPerformanceScaling",0x19);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c226c0);
    }
    FUN_006b2000();
    FUN_01bed4e2(iVar2,&local_128,0xb0);
  }
  else {
    uVar22 = FUN_006a71d4();
    puVar4 = (undefined1 *)((ulonglong)uVar22 >> 0x20);
    iVar3 = (int)uVar22;
    if (iVar3 != 0) {
      local_1d8 = uVar22;
      if (puVar4 == &DAT_0000002f) {
        iVar3 = thunk_FUN_01bed842("boser_bosminer::info::DynamicPerformanceScaling",iVar3,0x2f);
        if (iVar3 != 0) goto LAB_00b4a09c;
      }
      else {
        if (puVar4 == &DAT_0000000d) {
          iVar3 = thunk_FUN_01bed842(iVar3,"__fake_type__",0xd);
          if (iVar3 == 0) goto LAB_00b4a0d4;
        }
LAB_00b4a09c:
        iVar3 = FUN_006e5bc0(param_1 + 0x20,"DynamicPerformanceScaling",0x19);
        if (iVar3 == 0) {
          ppppppuVar15 = &local_284;
          local_120._0_4_ = (undefined4 ****)&local_27c;
          puVar11 = &DAT_01c226d0;
          puVar10 = &DAT_00572c5c;
          local_120._4_4_ = (code *)&DAT_0132b6a0;
          goto LAB_00b4b690;
        }
      }
      uVar13 = 2;
      if ((int)*(uint *)(iVar2 + 0x10) < 0) {
        uVar13 = *(uint *)(iVar2 + 0x10) ^ 0x80000000;
      }
      if (uVar13 != 1) {
        pppppuVar19 = &local_284;
        puVar11 = &DAT_01c226e0;
        local_68 = (char *****)CONCAT31(local_68._1_3_,(char)uVar13);
        puVar10 = &DAT_005b5680;
        local_120._4_4_ = FUN_006a7514;
        local_120._0_4_ = (undefined4 ****)&local_271;
LAB_00b4b690:
        local_124 = (char *)&DAT_0132b6a0;
        local_128 = pppppuVar19;
        local_118 = ppppppuVar15;
        local_114._0_4_ = local_120._4_4_;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(puVar10,&local_128,puVar11);
      }
    }
  }
LAB_00b4a0d4:
  local_124 = "DynamicPerformanceScaling";
  local_120._0_4_ = (undefined4 ****)0x19;
  local_128 = (undefined4 *****)0x80000000;
  local_64 = &LAB_012b97d8;
  local_68 = (char *****)&local_128;
  FUN_00664898(&local_1d8,&DAT_0057a667,&local_68);
  uVar22 = local_1d8;
  if (local_128 != (undefined4 *****)0x80000000) {
    FUN_019bb7e0(local_128,local_124);
    uVar22 = local_1d8;
  }
  local_1d8._4_4_ = (uint)((ulonglong)uVar22 >> 0x20);
  local_1d8._0_4_ = (undefined4 ****)uVar22;
  FUN_019bb7e0((undefined4 ****)local_1d8,local_1d8._4_4_);
  local_1d8 = uVar22;
  puVar4 = (undefined1 *)thunk_FUN_01be5118(0x19);
  if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x19);
  }
  FUN_01bed4e2(puVar4,"DynamicPerformanceScaling",0x19);
  local_a4 = 0x19;
  local_dc = -0x80000000;
  local_120._0_4_ = (undefined4 ****)local_2b8;
  local_120._4_4_ = (code *)uStack_2b4;
  local_118 = (undefined4 ******)pppppcStack_2b0;
  local_114._0_4_ = (code *)pppppuStack_2ac;
  local_114._4_4_ = pcStack_2a8;
  local_10c = pppppcStack_2a4;
  local_108 = local_2a0;
  local_104 = pcStack_29c;
  pppppcStack_100 = pppppcStack_298;
  pppppuStack_fc = pppppuStack_294;
  local_f8 = pcStack_290;
  local_f4 = pppppcStack_28c;
  local_124 = (char *)CONCAT31(local_124._1_3_,1);
  local_e8 = (char *****)&DAT_80000001;
  local_7b = 0;
  local_90 = 4;
  local_98 = (char *****)&DAT_00000019;
  local_a0._0_4_ = (char *****)&DAT_00000019;
  local_7c = 0;
  local_128 = (undefined4 *****)0x0;
  local_c4 = 0x80000000;
  local_d0 = 0x80000000;
  local_f0 = (undefined4 *****)0x0;
  local_8c = 0;
  local_94 = 0;
  local_b8 = 0x80000000;
  local_80 = 0;
  local_84 = 8;
  local_88 = 0;
  local_ec = (char *)0x0;
  local_ac = 0x19;
  local_a8 = puVar5;
  local_a0._4_4_ = puVar4;
  FUN_006e10e8(&local_1d8,&local_2f8,&local_2c4,&local_128);
  FUN_00b3bb58(&local_1d8);
  puVar21 = (undefined4 *)thunk_FUN_01be5118(0xf);
  if (puVar21 == (undefined4 *)0x0) {
    uVar16 = 0xf;
  }
  else {
    FUN_01bed4e2(puVar21,"temperatureChip",0xf);
    local_218 = (char *****)&DAT_0000000f;
    local_220 = (undefined4 *)&DAT_0000000f;
    local_21c = puVar21;
    puVar21 = (undefined4 *)thunk_FUN_01be5118(0xf);
    if (puVar21 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xf);
    }
    FUN_01bed4e2(puVar21,"temperatureChip",0xf);
    FUN_006e01d0(&local_1d8);
    FUN_00b63248(&local_68,param_1);
    local_a4 = 0xf;
    local_ac = 0xf;
    local_dc = -0x80000000;
    local_118 = (undefined4 ******)pppppcStack_1d0;
    local_114._0_4_ = (code *)pppppuStack_1cc;
    local_114._4_4_ = local_1c8;
    local_10c = pppppcStack_1c4;
    local_108 = local_1c0;
    local_104 = pcStack_1bc;
    pppppcStack_100 = local_1b8;
    pppppuStack_fc = pppppuStack_1b4;
    local_f8 = pcStack_1b0;
    local_f4 = pppppcStack_1ac;
    local_a0._0_4_ = local_68;
    local_a0._4_4_ = local_64;
    local_98 = local_60;
    local_124 = (char *)CONCAT31(local_124._1_3_,1);
    local_e8 = (char *****)&DAT_80000001;
    local_7c = 0;
    local_7b = 0;
    local_90 = 4;
    local_128 = (undefined4 *****)0x0;
    local_c4 = 0x80000000;
    local_d0 = 0x80000000;
    local_f0 = (undefined4 *****)0x0;
    local_8c = 0;
    local_94 = 0;
    local_b8 = 0x80000000;
    local_80 = 0;
    local_84 = 8;
    local_88 = 0;
    local_ec = (char *)0x0;
    local_a8 = puVar21;
    local_120 = local_1d8;
    FUN_006e10e8(&local_1d8,&local_2f8,&local_220,&local_128);
    FUN_00b3bb58(&local_1d8);
    iVar2 = thunk_FUN_01be5118(0x12);
    if (iVar2 != 0) {
      FUN_01bed4e2(iVar2,"temperatureAmbient",0x12);
      local_218 = (char *****)0x12;
      local_220 = (undefined4 *)0x12;
      local_21c = (undefined4 *)iVar2;
      iVar2 = thunk_FUN_01be5118(0x12);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0x12);
      }
      FUN_01bed4e2(iVar2,"temperatureAmbient",0x12);
      FUN_006e01d0(&local_1d8);
      FUN_00b63248(&local_68,param_1);
      local_a4 = 0x12;
      local_ac = 0x12;
      local_dc = 0x80000000;
      local_118 = (undefined4 ******)pppppcStack_1d0;
      local_114._0_4_ = (code *)pppppuStack_1cc;
      local_114._4_4_ = local_1c8;
      local_10c = pppppcStack_1c4;
      local_108 = local_1c0;
      local_104 = pcStack_1bc;
      pppppcStack_100 = local_1b8;
      pppppuStack_fc = pppppuStack_1b4;
      local_f8 = pcStack_1b0;
      local_f4 = pppppcStack_1ac;
      local_a0._0_4_ = local_68;
      local_a0._4_4_ = local_64;
      local_98 = local_60;
      local_124 = (char *)CONCAT31(local_124._1_3_,1);
      local_e8 = (char *****)0x80000001;
      local_7c = 0;
      local_7b = 0;
      local_90 = 4;
      local_128 = (undefined4 *****)0x0;
      local_c4 = 0x80000000;
      local_d0 = 0x80000000;
      local_f0 = (undefined4 *****)0x0;
      local_8c = 0;
      local_94 = 0;
      local_b8 = 0x80000000;
      local_80 = 0;
      local_84 = 8;
      local_88 = 0;
      local_ec = (char *)0x0;
      local_a8 = (undefined4 *)iVar2;
      local_120 = local_1d8;
      FUN_006e10e8(&local_1d8,&local_2f8,&local_220,&local_128);
      FUN_00b3bb58(&local_1d8);
      puVar17 = (uint *)((uint)&local_1d8 | 4);
      *puVar17 = local_2f8;
      puVar17[1] = uStack_2f4;
      puVar17[2] = uStack_2f0;
      puVar17[3] = local_2ec;
      puVar17[4] = local_2e8;
      puVar17[5] = local_2e4;
      puVar17[6] = local_2e0;
      puVar17[7] = (uint)puStack_2dc;
      puVar17[8] = uStack_2d8;
      puVar17[9] = uStack_2d4;
      puVar17[10] = uStack_2d0;
      puVar17[0xb] = uStack_2cc;
      local_118 = (undefined4 ******)0x80000001;
      local_10c = pppppcStack_1d0;
      local_108 = pppppuStack_1cc;
      local_104 = local_1c8;
      pppppcStack_100 = pppppcStack_1c4;
      pppppuStack_fc = local_1c0;
      local_f8 = pcStack_1bc;
      local_f4 = local_1b8;
      local_f0 = pppppuStack_1b4;
      local_ec = pcStack_1b0;
      local_e8 = pppppcStack_1ac;
      uStack_e4 = uStack_1a8;
      local_94 = 0;
      local_b0 = 0;
      local_b8 = 0;
      local_8c = local_8c & 0xffff0000;
      local_90 = 0x10000;
      local_a0._0_4_ = (char *****)0x80000000;
      local_ac = 0x80000000;
      local_b4 = 8;
      local_c0 = 4;
      local_bc = 0;
      local_c4 = 0;
      local_d4 = 0x21;
      local_e0 = 0;
      local_d8 = "boser_bosminer::info::SummaryInfo";
      local_dc = CONCAT31(local_dc._1_3_,1);
      local_114 = local_1d8;
      iVar2 = FUN_006c4014(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),param_2,
                           param_3);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c226c0);
      }
      FUN_006b2000();
      FUN_01bed4e2(iVar2,&local_128,0xb0);
      return;
    }
    uVar16 = 0x12;
  }
LAB_00b4b584:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(1,uVar16);
}

