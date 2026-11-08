// FUN_00a5d610 @ 00a5d610 size=1216 calls_out=4 calls_in=1
// strings: BUG: missing client statistics

void FUN_00a5d610(uint *param_1,uint param_2,uint *param_3)

{
  undefined1 uVar1;
  byte bVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  undefined1 *puVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  byte bVar43;
  bool bVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  double dVar47;
  undefined4 extraout_s1_02;
  double dVar48;
  undefined4 extraout_s1_03;
  undefined8 uVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  uint local_a0;
  uint local_9c;
  undefined1 *local_74;
  undefined1 *local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  undefined1 *local_60;
  
  uVar33 = param_3[8];
  if (uVar33 == 2 && param_3[9] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("BUG: missing client statistics",0x1e,&DAT_01c1d098);
  }
  uVar27 = param_3[100];
  uVar5 = *param_3;
  uVar28 = param_3[0x65];
  uVar29 = param_3[0x44];
  uVar30 = param_3[0x45];
  if ((undefined1 *)param_3[0x18] == &DAT_3b9aca00) {
    uVar49 = 0;
    local_9c = 0;
    local_a0 = 0;
  }
  else {
    FUN_014aeff4(&local_68,param_3 + 0x16);
    local_a0 = local_64;
    local_9c = local_68;
    if (local_60 != &DAT_3b9aca00) {
      local_9c = 0;
      local_a0 = 0;
    }
    uVar45 = FUN_01bf09c8(param_3[0x12],param_3[0x13],param_3[0x14],param_3[0x15]);
    uVar49 = CONCAT44(extraout_s1,uVar45);
  }
  uVar6 = param_3[10];
  uVar40 = param_3[0xb];
  uVar7 = param_3[4];
  uVar8 = param_3[5];
  uVar9 = param_3[0x5a];
  uVar10 = param_3[0x51];
  uVar11 = param_3[0x50];
  uVar12 = param_3[0x2e];
  uVar31 = param_3[0x2f];
  uVar13 = param_3[0x46];
  uVar14 = param_3[0x47];
  uVar15 = param_3[0x48];
  uVar16 = param_3[0x49];
  uVar17 = param_3[0x4a];
  uVar18 = param_3[0x4b];
  uVar19 = param_3[0x5c];
  uVar20 = param_3[0x5d];
  uVar21 = param_3[0x5e];
  uVar22 = param_3[0x5f];
  uVar23 = param_3[0x55];
  uVar24 = param_3[0x54];
  uVar25 = param_3[0x53];
  uVar26 = param_3[0x52];
  uVar1 = *(undefined1 *)((int)param_3 + 0x1d6);
  uVar36 = param_3[2];
  uVar37 = param_3[3];
  bVar2 = *(byte *)((int)param_3 + 0x1d5);
  uVar4 = param_3[0x75];
  uVar34 = param_3[6];
  local_6c = 1;
  uVar42 = 0;
  if (param_3[0x6c] == 0x80000000) {
    local_70 = (undefined1 *)0x0;
    uVar32 = 1;
  }
  else {
    FUN_006666fc(&local_68,param_3[0x6d],param_3[0x6e]);
    local_70 = (undefined1 *)0x0;
    uVar32 = 1;
    if (local_68 != 0x80000000) {
      local_70 = local_60;
      uVar32 = local_64;
      uVar42 = local_68;
    }
  }
  local_74 = (undefined1 *)0x0;
  if (param_3[0x69] == 0x80000000) {
    puVar38 = (undefined1 *)0x0;
    uVar41 = 0;
  }
  else {
    FUN_006666fc(&local_68,param_3[0x6a],param_3[0x6b]);
    puVar38 = (undefined1 *)0x0;
    uVar41 = 0;
    if (local_68 != 0x80000000) {
      local_6c = local_64;
      puVar38 = local_60;
      uVar41 = local_68;
    }
  }
  if (param_3[0x6f] == 0x80000000) {
    uVar35 = 0;
    uVar39 = 1;
  }
  else {
    FUN_006666fc(&local_68,param_3[0x70],param_3[0x71]);
    uVar35 = 0;
    uVar39 = 1;
    if (local_68 != 0x80000000) {
      local_74 = local_60;
      uVar35 = local_68;
      uVar39 = local_64;
    }
  }
  uVar45 = FUN_01bf09c8(uVar15,uVar16,uVar17,uVar18);
  uVar46 = FUN_01bf09c8(uVar26,uVar25,uVar24,uVar23);
  dVar47 = (double)CONCAT44(extraout_s1_01,uVar46);
  uVar46 = FUN_01bf09c8(uVar19,uVar20,uVar21,uVar22);
  dVar48 = (double)CONCAT44(extraout_s1_02,uVar46);
  dVar52 = (double)CONCAT44(extraout_s1_00,uVar45) + dVar47 + dVar48;
  *param_1 = uVar13;
  param_1[4] = uVar29;
  param_1[2] = uVar11;
  param_1[0x29] = local_6c;
  param_1[0x2d] = (uint)local_74;
  param_1[0x1e] = param_2;
  param_1[0x1f] = param_2;
  param_1[0x21] = uVar27;
  param_1[0x23] = uVar9;
  param_1[1] = uVar14;
  param_1[5] = uVar30;
  param_1[3] = uVar10;
  bVar43 = 0;
  if ((char)uVar4 != '\0') {
    bVar43 = bVar2 | 2;
  }
  param_1[9] = uVar31;
  param_1[8] = uVar12;
  param_1[7] = local_a0;
  param_1[6] = local_9c;
  *(undefined1 *)((int)param_1 + 0xdf) = uVar1;
  param_1[0x2a] = (uint)puVar38;
  param_1[0x28] = uVar41;
  *(undefined1 *)((int)param_1 + 0xdd) = 0;
  param_1[0x2c] = uVar39;
  param_1[0x2b] = uVar35;
  param_1[0x20] = 1;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(byte *)(param_1 + 0x37) = bVar43;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 1;
  param_1[0x33] = 0;
  param_1[0x2f] = 1;
  param_1[0x2e] = 0;
  *(undefined1 *)((int)param_1 + 0xde) = 1;
  dVar50 = 0.0;
  *(undefined8 *)(param_1 + 0x10) = uVar49;
  dVar51 = dVar50;
  dVar3 = dVar50;
  if (dVar52 != 0.0) {
    dVar51 = (dVar47 / dVar52) * 100.0;
    dVar3 = (dVar48 / dVar52) * 100.0;
  }
  uVar46 = FUN_01bf09c8(uVar36,uVar37,uVar7,uVar8);
  *(undefined2 *)(param_1 + 0x38) = 1;
  if ((uVar33 & 1) == 0) {
    uVar40 = 0;
    uVar6 = 0;
  }
  param_1[0x16] = uVar6;
  param_1[0x17] = uVar40;
  bVar44 = (uVar5 & 1) != 0;
  param_1[0x34] = uVar42;
  if (bVar44) {
    dVar50 = (double)CONCAT44(extraout_s1_03,uVar46);
  }
  param_1[0x35] = uVar32;
  param_1[0x36] = (uint)local_70;
  *(double *)(param_1 + 0x12) = dVar50;
  *(ulonglong *)(param_1 + 10) = CONCAT44(extraout_s1_00,uVar45);
  *(double *)(param_1 + 0xc) = dVar47;
  *(double *)(param_1 + 0xe) = dVar48;
  param_1[0x1c] = uVar28;
  param_1[0x1d] = 0;
  *(double *)(param_1 + 0x14) = dVar50;
  uVar33 = 0;
  if (bVar44) {
    uVar33 = uVar34;
  }
  param_1[0x26] = 0;
  *(undefined1 *)((int)param_1 + 0xe2) = 1;
  param_1[0x27] = uVar33;
  *(double *)(param_1 + 0x18) = dVar51;
  *(double *)(param_1 + 0x1a) = dVar3;
  return;
}

