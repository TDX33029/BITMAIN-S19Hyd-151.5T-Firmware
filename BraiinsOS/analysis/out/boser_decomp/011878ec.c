// FUN_011878ec @ 011878ec size=2016 calls_out=16 calls_in=1
// strings: tracing::span::active | assertion failed: DEFAULT_MAX_FRAME_SIZE <= val && val <= MAX_MAX_FRAME_SIZEevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/frame/settings.rs:152

void FUN_011878ec(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5,undefined4 param_6,undefined4 param_7)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  int iVar23;
  int iVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined4 *local_828;
  undefined2 *puStack_824;
  uint local_820;
  int local_81c;
  int local_818;
  undefined4 uStack_814;
  int local_810;
  undefined4 uStack_80c;
  undefined1 auStack_808 [240];
  undefined1 auStack_718 [216];
  int local_640;
  undefined4 local_5dc;
  uint local_5d8;
  undefined4 *local_5d0;
  undefined2 *local_5cc;
  uint local_5c8;
  int local_5c4;
  int local_5c0;
  undefined4 local_5bc;
  int local_5b8;
  undefined4 local_5b4;
  undefined4 local_5b0;
  undefined4 local_5ac;
  int local_5a8;
  undefined4 local_5a4;
  undefined4 local_5a0;
  uint local_59c;
  undefined4 local_598;
  undefined1 local_594;
  undefined4 local_408;
  uint local_3a4;
  uint local_3a0;
  undefined4 local_370;
  undefined4 local_36c;
  int local_368;
  undefined4 uStack_364;
  undefined4 local_360;
  undefined4 uStack_35c;
  int local_358;
  undefined4 uStack_354;
  undefined4 local_138;
  undefined4 uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 local_114;
  int local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  undefined4 *puStack_f8;
  undefined2 *puStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 local_88;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  iVar5 = param_5[0x10];
  if (iVar5 - 0x1000000U < 0xff004000) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: DEFAULT_MAX_FRAME_SIZE <= val && val <= MAX_MAX_FRAME_SIZEevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/frame/settings.rs:152"
                 ,0x4c,&DAT_01cea65c);
  }
  uVar6 = param_5[0xf];
  uVar7 = *param_5;
  uVar8 = param_5[1];
  iVar9 = param_5[2];
  uVar10 = param_5[3];
  uVar11 = param_5[4];
  uVar12 = param_5[5];
  uVar16 = param_5[0xe];
  bVar1 = *(byte *)((int)param_5 + 0x4d);
  uVar17 = param_5[0x11];
  uVar13 = param_5[0x12];
  uVar19 = *param_2;
  uVar21 = param_2[1];
  iVar23 = param_2[2];
  uVar25 = param_2[3];
  uVar20 = param_2[4];
  uVar22 = param_2[5];
  iVar24 = param_2[6];
  uVar26 = param_2[7];
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4d514 - 1 < 2 ||
       ((DAT_01d4d514 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4d50c), cVar4 != '\0')))) &&
      (iVar14 = FUN_01aaa278(DAT_01d4d50c), iVar14 != 0)))) {
    local_5c8 = DAT_01d4d50c + 0x1c;
    local_5cc = (undefined2 *)0x0;
    local_5d0 = (undefined4 *)0x4;
    FUN_01aaa548(&local_828,DAT_01d4d50c,&local_5d0);
  }
  else {
    local_5b8 = DAT_01d4d50c;
    local_5c8 = 2;
    if (DAT_01d51ae9 == '\0') {
      local_368 = DAT_01d4d50c + 0x1c;
      local_36c = 0;
      local_370 = 4;
      FUN_01aaa3e0(&local_5d0,&local_370);
    }
    local_828 = local_5d0;
    puStack_824 = local_5cc;
    local_820 = local_5c8;
    local_81c = local_5c4;
    local_818 = local_5c0;
    uStack_814 = local_5bc;
    local_810 = local_5b8;
    uStack_80c = local_5b4;
  }
  if (local_820 != 2) {
    if ((local_820 & 1) == 0) {
      iVar14 = local_81c;
    }
    else {
      iVar14 = local_81c + (*(int *)(local_818 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(local_818 + 0x30))(iVar14,&local_828);
  }
  if ((DAT_01d51ae9 == '\0') && (local_810 != 0)) {
    local_36c = *(undefined4 *)(local_810 + 0x10);
    local_370 = *(undefined4 *)(local_810 + 0xc);
    local_5d0 = &local_370;
    local_5cc = &DAT_0132b6a0;
    FUN_006404a8(&local_828,"tracing::span::active",0x15,&DAT_00594cdd,&local_5d0);
  }
  local_59c = 0x1000;
  local_5b4 = 4;
  local_5c0 = 4;
  local_5d0 = (undefined4 *)0x2;
  local_5a0 = 0;
  local_5a4 = 0;
  local_5ac = 0;
  local_5b0 = 0;
  local_5b8 = 0;
  local_5bc = 0;
  local_5c4 = 0;
  local_5a8 = 0;
  local_370 = uVar19;
  local_36c = uVar21;
  local_368 = iVar23;
  uStack_364 = uVar25;
  local_360 = uVar20;
  uStack_35c = uVar22;
  local_358 = iVar24;
  uStack_354 = uVar26;
  local_50 = thunk_FUN_01be5118(0x4000);
  if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x4000);
  }
  puStack_f8 = local_5d0;
  puStack_f4 = local_5cc;
  uStack_f0 = local_5c8;
  uStack_ec = local_5c4;
  local_e8 = local_5c0;
  uStack_e4 = local_5bc;
  uStack_e0 = local_5b8;
  uStack_dc = local_5b4;
  uStack_d8 = local_5b0;
  local_d4 = local_5ac;
  uStack_d0 = local_5a8;
  uStack_cc = local_5a4;
  uStack_c8 = local_5a0;
  uStack_c4 = local_59c;
  local_30 = 0x109;
  local_34 = 0x100;
  local_44 = 0x15;
  local_88 = 4;
  local_c0 = 3;
  local_5c4 = 3;
  local_5d0 = (undefined4 *)0x1;
  local_5b8 = 1;
  local_3c = 0;
  local_40 = 0;
  local_38 = 0x4000;
  local_48 = 0x4000;
  local_4c = 0;
  local_5cc = (undefined2 *)0x0;
  local_5b4 = 0;
  local_5bc = 9;
  local_5c0 = 0;
  local_5c8 = 0x800000;
  local_118 = uVar19;
  local_114 = uVar21;
  local_110 = iVar23;
  uStack_10c = uVar25;
  local_108 = uVar20;
  uStack_104 = uVar22;
  iStack_100 = iVar24;
  uStack_fc = uVar26;
  FUN_00e7b104(&local_370,&local_118,&local_5d0);
  FUN_00ea7b68(&local_5d0,&local_370);
  local_408 = 0x4000;
  local_3a0 = 1;
  if (1 < local_3a4 >> 0xe) {
    local_3a0 = local_3a4 >> 0xe;
  }
  local_3a0 = local_3a0 + (local_3a0 >> 2);
  if (local_3a0 < 6) {
    local_3a0 = 5;
  }
  FUN_01bed4e2(auStack_808,&local_5d0,0x238);
  uVar19 = local_5dc;
  local_640 = iVar5;
  local_5dc = uVar13;
  uVar15 = FUN_01bf1250(uVar19,iVar5);
  if (uVar15 < 2) {
    uVar15 = 1;
  }
  local_5d8 = uVar15 + (uVar15 >> 2);
  if (local_5d8 < uVar15) {
    local_5d8 = 0xffffffff;
  }
  if (local_5d8 < 6) {
    local_5d8 = 5;
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012ffdf4(&DAT_01ce84bc);
  }
  uVar15 = FUN_01bf1250(uVar13,iVar5);
  local_598 = 1;
  if (uVar15 < 2) {
    uVar15 = 1;
  }
  local_5ac = 1;
  uVar18 = uVar15 + (uVar15 >> 2);
  local_5b4 = 1;
  uVar27 = 0xffffffff;
  if (uVar15 <= uVar18) {
    uVar27 = uVar18;
  }
  local_5a4 = 1;
  local_5d8 = 5;
  if (5 < uVar27) {
    local_5d8 = uVar27;
  }
  local_594 = 0;
  local_5c4 = 0;
  local_5cc = (undefined2 *)0x0;
  local_5d0._0_1_ = 4;
  local_5bc = uVar7;
  local_5b8 = uVar8;
  local_5b0 = uVar6;
  local_5a8 = iVar5;
  local_5a0 = uVar13;
  local_59c = (uint)bVar1;
  cVar4 = FUN_01a8053c(auStack_718,&local_5d0);
  if (cVar4 != '\f') {
    local_5d0 = (undefined4 *)CONCAT31(local_5d0._1_3_,cVar4);
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_0050d93b,0x16,&local_5d0,&DAT_01c20a5c,&DAT_01c209ec);
  }
  FUN_01bed4e2(&local_5d0,auStack_808,0x238);
  if (((DAT_01d50f88 == 0) &&
      ((DAT_01d4d520 - 1 < 2 ||
       ((DAT_01d4d520 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4d518), cVar4 != '\0')))))) &&
     (iVar23 = FUN_01aaa278(DAT_01d4d518), iVar23 != 0)) {
    local_368 = DAT_01d4d518 + 0x1c;
    local_36c = 0;
    local_370 = 4;
    FUN_01aaa548(&local_118,DAT_01d4d518,&local_370);
  }
  else {
    local_358 = DAT_01d4d518;
    local_368 = 2;
    if (DAT_01d51ae9 == '\0') {
      local_110 = DAT_01d4d518 + 0x1c;
      local_114 = 0;
      local_118 = 4;
      FUN_01aaa3e0(&local_370,&local_118);
    }
    local_118 = local_370;
    local_114 = local_36c;
    local_110 = local_368;
    uStack_10c = uStack_364;
    local_108 = local_360;
    uStack_104 = uStack_35c;
    iStack_100 = local_358;
    uStack_fc = uStack_354;
  }
  local_138 = local_118;
  uStack_134 = local_114;
  iStack_130 = local_110;
  uStack_12c = uStack_10c;
  uStack_128 = local_108;
  uStack_124 = uStack_104;
  iStack_120 = iStack_100;
  uStack_11c = uStack_fc;
  FUN_01bed4e2(&local_370,&local_5d0,0x238);
  FUN_01bed4e2(&local_5c8,&local_370,600);
  local_5cc = (undefined2 *)0x0;
  local_5d0 = (undefined4 *)0x4;
  FUN_0134c39c(&local_828);
  FUN_01bed4e2(param_1 + 2,&local_5d0,0x260);
  param_1[0xb4] = local_828;
  param_1[0xb5] = puStack_824;
  param_1[0xb6] = local_820;
  param_1[0xb7] = local_81c;
  param_1[0xb8] = local_818;
  param_1[0xb9] = uStack_814;
  param_1[0xba] = local_810;
  param_1[0xbb] = uStack_80c;
  param_1[0xf2] = param_3;
  param_1[0xf3] = param_4;
  param_1[0xf5] = param_7;
  param_1[0x9d] = uVar12;
  param_1[0x9c] = uVar11;
  param_1[0x9b] = uVar16;
  *param_1 = 3;
  param_1[0x9e] = 0x1e;
  if (iVar9 == 0) {
    uVar10 = 0x14;
  }
  param_1[0xb1] = 10;
  param_1[0xb2] = uVar10;
  param_1[0xa6] = uVar7;
  param_1[0xb3] = uVar17;
  bVar2 = *(byte *)(param_5 + 0x13);
  param_1[0xa7] = uVar8;
  uVar16 = param_5[8];
  uVar10 = param_5[0xc];
  param_1[0xf4] = param_6;
  param_1[0xae] = (uint)bVar1;
  uVar3 = *(undefined1 *)((int)param_5 + 0x4e);
  param_1[0xbc] = (uint)bVar2;
  uVar8 = param_5[6];
  param_1[0xab] = iVar5;
  uVar7 = param_5[7];
  uVar11 = param_5[0xb];
  uVar12 = param_5[10];
  param_1[0xbe] = uVar8;
  param_1[0xc2] = uVar12;
  param_1[0xbd] = uVar6;
  param_1[1] = 0;
  param_1[0x9f] = 0;
  param_1[0x9a] = 1;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  param_1[0xaf] = 1;
  param_1[0xa8] = 1;
  param_1[0xa9] = uVar6;
  param_1[0xaa] = 1;
  param_1[0xac] = 1;
  param_1[0xad] = uVar13;
  param_1[0xa4] = 0;
  param_1[0xa2] = 0;
  param_1[0xa0] = 0;
  param_1[0xbf] = uVar7;
  param_1[0xc0] = uVar16;
  param_1[0xc3] = uVar11;
  param_1[0xc4] = uVar10;
  *(undefined1 *)((int)param_1 + 0x3d9) = 0;
  *(undefined1 *)(param_1 + 0xf6) = uVar3;
  *(undefined1 *)(param_1 + 0xc6) = 1;
  return;
}

