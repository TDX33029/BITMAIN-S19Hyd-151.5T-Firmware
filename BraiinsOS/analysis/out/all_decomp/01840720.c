// FUN_01840720 @ 01840720 size=7116 calls_out=0 calls_in=1
// strings: 12 block |  transfo | rm for A | RMv4/NEON; CRYPTOGAMS by <appro@openssl.org>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01840720(undefined1 (*param_1) [16],undefined1 (*param_2) [16],int param_3)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  uint uVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  int *piVar30;
  int *piVar31;
  bool bVar32;
  undefined1 (*pauVar33) [16];
  undefined1 (*pauVar34) [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined8 uVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  undefined8 uVar49;
  ulonglong uVar50;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  uint local_40;
  undefined1 (*local_3c) [16];
  uint local_38;
  uint local_34;
  undefined1 (*local_2c) [16];
  
  if ((DAT_018dd928 & 0x10) != 0) {
    auVar35 = *param_1;
    auVar36 = param_1[1];
    pauVar10 = param_2 + param_3 * 4;
    do {
      auVar37 = *param_2;
      pauVar33 = param_2 + 1;
      pauVar11 = param_2 + 2;
      pauVar34 = param_2 + 3;
      param_2 = param_2 + 4;
      auVar37 = vrev(auVar37,1);
      auVar41 = vrev(*pauVar33,1);
      auVar42 = vrev(*pauVar11,1);
      auVar43 = vrev(*pauVar34,1);
      auVar39 = VectorAdd(_DAT_01840600,auVar37,4);
      auVar38 = SHA256ScheduleUpdate0(auVar37,auVar41);
      auVar37 = SHA256hash(auVar35,auVar36,auVar39,1);
      auVar39 = SHA256hash(auVar36,auVar35,auVar39,0);
      auVar40 = SHA256ScheduleUpdate1(auVar38,auVar42,auVar43);
      auVar44 = VectorAdd(_DAT_01840610,auVar41,4);
      auVar41 = SHA256ScheduleUpdate0(auVar41,auVar42);
      auVar38 = SHA256hash(auVar37,auVar39,auVar44,1);
      auVar39 = SHA256hash(auVar39,auVar37,auVar44,0);
      auVar41 = SHA256ScheduleUpdate1(auVar41,auVar43,auVar40);
      auVar44 = VectorAdd(_DAT_01840620,auVar42,4);
      auVar42 = SHA256ScheduleUpdate0(auVar42,auVar43);
      auVar37 = SHA256hash(auVar38,auVar39,auVar44,1);
      auVar39 = SHA256hash(auVar39,auVar38,auVar44,0);
      auVar42 = SHA256ScheduleUpdate1(auVar42,auVar40,auVar41);
      auVar44 = VectorAdd(_DAT_01840630,auVar43,4);
      auVar43 = SHA256ScheduleUpdate0(auVar43,auVar40);
      auVar38 = SHA256hash(auVar37,auVar39,auVar44,1);
      auVar39 = SHA256hash(auVar39,auVar37,auVar44,0);
      auVar43 = SHA256ScheduleUpdate1(auVar43,auVar41,auVar42);
      auVar44 = VectorAdd(_DAT_01840640,auVar40,4);
      auVar40 = SHA256ScheduleUpdate0(auVar40,auVar41);
      auVar37 = SHA256hash(auVar38,auVar39,auVar44,1);
      auVar39 = SHA256hash(auVar39,auVar38,auVar44,0);
      auVar40 = SHA256ScheduleUpdate1(auVar40,auVar42,auVar43);
      auVar44 = VectorAdd(_DAT_01840650,auVar41,4);
      auVar41 = SHA256ScheduleUpdate0(auVar41,auVar42);
      auVar38 = SHA256hash(auVar37,auVar39,auVar44,1);
      auVar39 = SHA256hash(auVar39,auVar37,auVar44,0);
      auVar41 = SHA256ScheduleUpdate1(auVar41,auVar43,auVar40);
      auVar44 = VectorAdd(_DAT_01840660,auVar42,4);
      auVar42 = SHA256ScheduleUpdate0(auVar42,auVar43);
      auVar37 = SHA256hash(auVar38,auVar39,auVar44,1);
      auVar39 = SHA256hash(auVar39,auVar38,auVar44,0);
      auVar42 = SHA256ScheduleUpdate1(auVar42,auVar40,auVar41);
      auVar44 = VectorAdd(_DAT_01840670,auVar43,4);
      auVar43 = SHA256ScheduleUpdate0(auVar43,auVar40);
      auVar38 = SHA256hash(auVar37,auVar39,auVar44,1);
      auVar39 = SHA256hash(auVar39,auVar37,auVar44,0);
      auVar43 = SHA256ScheduleUpdate1(auVar43,auVar41,auVar42);
      auVar44 = VectorAdd(_DAT_01840680,auVar40,4);
      auVar40 = SHA256ScheduleUpdate0(auVar40,auVar41);
      auVar37 = SHA256hash(auVar38,auVar39,auVar44,1);
      auVar39 = SHA256hash(auVar39,auVar38,auVar44,0);
      auVar40 = SHA256ScheduleUpdate1(auVar40,auVar42,auVar43);
      auVar44 = VectorAdd(_DAT_01840690,auVar41,4);
      auVar41 = SHA256ScheduleUpdate0(auVar41,auVar42);
      auVar38 = SHA256hash(auVar37,auVar39,auVar44,1);
      auVar39 = SHA256hash(auVar39,auVar37,auVar44,0);
      auVar41 = SHA256ScheduleUpdate1(auVar41,auVar43,auVar40);
      auVar44 = VectorAdd(_DAT_018406a0,auVar42,4);
      auVar42 = SHA256ScheduleUpdate0(auVar42,auVar43);
      auVar37 = SHA256hash(auVar38,auVar39,auVar44,1);
      auVar39 = SHA256hash(auVar39,auVar38,auVar44,0);
      auVar42 = SHA256ScheduleUpdate1(auVar42,auVar40,auVar41);
      auVar44 = VectorAdd(_DAT_018406b0,auVar43,4);
      auVar43 = SHA256ScheduleUpdate0(auVar43,auVar40);
      auVar38 = SHA256hash(auVar37,auVar39,auVar44,1);
      auVar39 = SHA256hash(auVar39,auVar37,auVar44,0);
      auVar43 = SHA256ScheduleUpdate1(auVar43,auVar41,auVar42);
      auVar40 = VectorAdd(_DAT_018406c0,auVar40,4);
      auVar37 = SHA256hash(auVar38,auVar39,auVar40,1);
      auVar39 = SHA256hash(auVar39,auVar38,auVar40,0);
      auVar40 = VectorAdd(_DAT_018406d0,auVar41,4);
      auVar38 = SHA256hash(auVar37,auVar39,auVar40,1);
      auVar39 = SHA256hash(auVar39,auVar37,auVar40,0);
      auVar40 = VectorAdd(_DAT_018406e0,auVar42,4);
      auVar37 = SHA256hash(auVar38,auVar39,auVar40,1);
      auVar39 = SHA256hash(auVar39,auVar38,auVar40,0);
      auVar40 = VectorAdd(_DAT_018406f0,auVar43,4);
      auVar38 = SHA256hash(auVar37,auVar39,auVar40,1);
      auVar37 = SHA256hash(auVar39,auVar37,auVar40,0);
      auVar35 = VectorAdd(auVar38,auVar35,4);
      auVar36 = VectorAdd(auVar37,auVar36,4);
    } while (param_2 != pauVar10);
    *(longlong *)*param_1 = auVar35._0_8_;
    *(longlong *)(*param_1 + 8) = auVar35._8_8_;
    *(longlong *)param_1[1] = auVar36._0_8_;
    *(longlong *)(param_1[1] + 8) = auVar36._8_8_;
    return;
  }
  if ((DAT_018dd928 & 1) == 0) {
    uVar14 = *(uint *)*param_1;
    uVar16 = *(uint *)(*param_1 + 4);
    uVar17 = *(uint *)(*param_1 + 8);
    iVar18 = *(int *)(*param_1 + 0xc);
    uVar21 = *(uint *)param_1[1];
    uVar23 = *(uint *)(param_1[1] + 4);
    uVar25 = *(uint *)(param_1[1] + 8);
    iVar27 = *(int *)(param_1[1] + 0xc);
    piVar30 = (int *)&DAT_01840600;
    local_2c = param_2;
    do {
      uVar12 = *(uint *)*local_2c;
      uVar9 = uVar21 ^ (uVar21 >> 5 | uVar21 << 0x1b) ^ (uVar21 >> 0x13 | uVar21 << 0xd);
      local_70._0_4_ =
           uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
           uVar12 >> 0x18;
      iVar27 = iVar27 + (uint)local_70 + (uVar9 >> 6 | uVar9 << 0x1a) + *piVar30 +
               ((uVar23 ^ uVar25) & uVar21 ^ uVar25);
      uVar12 = *(uint *)(*local_2c + 4);
      uVar9 = uVar14 ^ (uVar14 >> 0xb | uVar14 << 0x15) ^ (uVar14 >> 0x14 | uVar14 << 0xc);
      uVar19 = iVar18 + iVar27;
      uVar28 = iVar27 + (uVar9 >> 2 | uVar9 << 0x1e) +
               ((uVar16 ^ uVar17) & (uVar14 ^ uVar16) ^ uVar16);
      uVar9 = uVar19 ^ (uVar19 >> 5 | uVar19 * 0x8000000) ^ (uVar19 >> 0x13 | uVar19 * 0x2000);
      local_70._4_4_ =
           uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
           uVar12 >> 0x18;
      iVar18 = uVar25 + local_70._4_4_ + (uVar9 >> 6 | uVar9 << 0x1a) + piVar30[1] +
               ((uVar21 ^ uVar23) & uVar19 ^ uVar23);
      uVar9 = *(uint *)(*local_2c + 8);
      uVar25 = uVar28 ^ (uVar28 >> 0xb | uVar28 * 0x200000) ^ (uVar28 >> 0x14 | uVar28 * 0x1000);
      uVar17 = uVar17 + iVar18;
      uVar26 = iVar18 + (uVar25 >> 2 | uVar25 << 0x1e) +
               ((uVar14 ^ uVar16) & (uVar28 ^ uVar14) ^ uVar14);
      uVar25 = uVar17 ^ (uVar17 >> 5 | uVar17 * 0x8000000) ^ (uVar17 >> 0x13 | uVar17 * 0x2000);
      local_68._0_4_ =
           uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18
      ;
      iVar18 = uVar23 + (uint)local_68 + (uVar25 >> 6 | uVar25 << 0x1a) + piVar30[2] +
               ((uVar19 ^ uVar21) & uVar17 ^ uVar21);
      uVar25 = *(uint *)(*local_2c + 0xc);
      uVar23 = uVar26 ^ (uVar26 >> 0xb | uVar26 * 0x200000) ^ (uVar26 >> 0x14 | uVar26 * 0x1000);
      uVar16 = uVar16 + iVar18;
      uVar24 = iVar18 + (uVar23 >> 2 | uVar23 << 0x1e) +
               ((uVar28 ^ uVar14) & (uVar26 ^ uVar28) ^ uVar28);
      uVar23 = uVar16 ^ (uVar16 >> 5 | uVar16 * 0x8000000) ^ (uVar16 >> 0x13 | uVar16 * 0x2000);
      local_68._4_4_ =
           uVar25 << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 | (uVar25 >> 0x10 & 0xff) << 8 |
           uVar25 >> 0x18;
      iVar18 = uVar21 + local_68._4_4_ + (uVar23 >> 6 | uVar23 << 0x1a) + piVar30[3] +
               ((uVar17 ^ uVar19) & uVar16 ^ uVar19);
      uVar23 = *(uint *)local_2c[1];
      uVar21 = uVar24 ^ (uVar24 >> 0xb | uVar24 * 0x200000) ^ (uVar24 >> 0x14 | uVar24 * 0x1000);
      uVar14 = uVar14 + iVar18;
      uVar22 = iVar18 + (uVar21 >> 2 | uVar21 << 0x1e) +
               ((uVar26 ^ uVar28) & (uVar24 ^ uVar26) ^ uVar26);
      uVar21 = uVar14 ^ (uVar14 >> 5 | uVar14 * 0x8000000) ^ (uVar14 >> 0x13 | uVar14 * 0x2000);
      local_60._0_4_ =
           uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
           uVar23 >> 0x18;
      iVar18 = uVar19 + (uint)local_60 + (uVar21 >> 6 | uVar21 << 0x1a) + piVar30[4] +
               ((uVar16 ^ uVar17) & uVar14 ^ uVar17);
      uVar23 = *(uint *)(local_2c[1] + 4);
      uVar21 = uVar22 ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^ (uVar22 >> 0x14 | uVar22 * 0x1000);
      uVar28 = uVar28 + iVar18;
      uVar20 = iVar18 + (uVar21 >> 2 | uVar21 << 0x1e) +
               ((uVar24 ^ uVar26) & (uVar22 ^ uVar24) ^ uVar24);
      uVar21 = uVar28 ^ (uVar28 >> 5 | uVar28 * 0x8000000) ^ (uVar28 >> 0x13 | uVar28 * 0x2000);
      local_60._4_4_ =
           uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
           uVar23 >> 0x18;
      iVar18 = uVar17 + local_60._4_4_ + (uVar21 >> 6 | uVar21 << 0x1a) + piVar30[5] +
               ((uVar14 ^ uVar16) & uVar28 ^ uVar16);
      uVar21 = *(uint *)(local_2c[1] + 8);
      uVar17 = uVar20 ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^ (uVar20 >> 0x14 | uVar20 * 0x1000);
      uVar26 = uVar26 + iVar18;
      uVar19 = iVar18 + (uVar17 >> 2 | uVar17 << 0x1e) +
               ((uVar22 ^ uVar24) & (uVar20 ^ uVar22) ^ uVar22);
      uVar17 = uVar26 ^ (uVar26 >> 5 | uVar26 * 0x8000000) ^ (uVar26 >> 0x13 | uVar26 * 0x2000);
      local_58._0_4_ =
           uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
           uVar21 >> 0x18;
      iVar18 = uVar16 + (uint)local_58 + (uVar17 >> 6 | uVar17 << 0x1a) + piVar30[6] +
               ((uVar28 ^ uVar14) & uVar26 ^ uVar14);
      uVar17 = *(uint *)(local_2c[1] + 0xc);
      uVar16 = uVar19 ^ (uVar19 >> 0xb | uVar19 * 0x200000) ^ (uVar19 >> 0x14 | uVar19 * 0x1000);
      uVar24 = uVar24 + iVar18;
      uVar9 = iVar18 + (uVar16 >> 2 | uVar16 << 0x1e) +
              ((uVar20 ^ uVar22) & (uVar19 ^ uVar20) ^ uVar20);
      uVar16 = uVar24 ^ (uVar24 >> 5 | uVar24 * 0x8000000) ^ (uVar24 >> 0x13 | uVar24 * 0x2000);
      local_58._4_4_ =
           uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
           uVar17 >> 0x18;
      iVar18 = uVar14 + local_58._4_4_ + (uVar16 >> 6 | uVar16 << 0x1a) + piVar30[7] +
               ((uVar26 ^ uVar28) & uVar24 ^ uVar28);
      uVar16 = *(uint *)local_2c[2];
      uVar14 = uVar9 ^ (uVar9 >> 0xb | uVar9 * 0x200000) ^ (uVar9 >> 0x14 | uVar9 * 0x1000);
      uVar22 = uVar22 + iVar18;
      uVar12 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
               ((uVar19 ^ uVar20) & (uVar9 ^ uVar19) ^ uVar19);
      uVar14 = uVar22 ^ (uVar22 >> 5 | uVar22 * 0x8000000) ^ (uVar22 >> 0x13 | uVar22 * 0x2000);
      local_50._0_4_ =
           uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
           uVar16 >> 0x18;
      iVar18 = uVar28 + (uint)local_50 + (uVar14 >> 6 | uVar14 << 0x1a) + piVar30[8] +
               ((uVar24 ^ uVar26) & uVar22 ^ uVar26);
      uVar16 = *(uint *)(local_2c[2] + 4);
      uVar14 = uVar12 ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^ (uVar12 >> 0x14 | uVar12 * 0x1000);
      uVar20 = uVar20 + iVar18;
      uVar28 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
               ((uVar9 ^ uVar19) & (uVar12 ^ uVar9) ^ uVar9);
      uVar14 = uVar20 ^ (uVar20 >> 5 | uVar20 * 0x8000000) ^ (uVar20 >> 0x13 | uVar20 * 0x2000);
      local_50._4_4_ =
           uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
           uVar16 >> 0x18;
      iVar18 = uVar26 + local_50._4_4_ + (uVar14 >> 6 | uVar14 << 0x1a) + piVar30[9] +
               ((uVar22 ^ uVar24) & uVar20 ^ uVar24);
      uVar16 = *(uint *)(local_2c[2] + 8);
      uVar14 = uVar28 ^ (uVar28 >> 0xb | uVar28 * 0x200000) ^ (uVar28 >> 0x14 | uVar28 * 0x1000);
      uVar19 = uVar19 + iVar18;
      uVar25 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
               ((uVar12 ^ uVar9) & (uVar28 ^ uVar12) ^ uVar12);
      uVar14 = uVar19 ^ (uVar19 >> 5 | uVar19 * 0x8000000) ^ (uVar19 >> 0x13 | uVar19 * 0x2000);
      local_48._0_4_ =
           uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
           uVar16 >> 0x18;
      iVar18 = uVar24 + (uint)local_48 + (uVar14 >> 6 | uVar14 << 0x1a) + piVar30[10] +
               ((uVar20 ^ uVar22) & uVar19 ^ uVar22);
      uVar16 = *(uint *)(local_2c[2] + 0xc);
      uVar14 = uVar25 ^ (uVar25 >> 0xb | uVar25 * 0x200000) ^ (uVar25 >> 0x14 | uVar25 * 0x1000);
      uVar9 = uVar9 + iVar18;
      uVar23 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
               ((uVar28 ^ uVar12) & (uVar25 ^ uVar28) ^ uVar28);
      uVar14 = uVar9 ^ (uVar9 >> 5 | uVar9 * 0x8000000) ^ (uVar9 >> 0x13 | uVar9 * 0x2000);
      local_48._4_4_ =
           uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
           uVar16 >> 0x18;
      iVar18 = uVar22 + local_48._4_4_ + (uVar14 >> 6 | uVar14 << 0x1a) + piVar30[0xb] +
               ((uVar19 ^ uVar20) & uVar9 ^ uVar20);
      uVar16 = *(uint *)local_2c[3];
      uVar14 = uVar23 ^ (uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 >> 0x14 | uVar23 * 0x1000);
      uVar12 = uVar12 + iVar18;
      uVar21 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
               ((uVar25 ^ uVar28) & (uVar23 ^ uVar25) ^ uVar25);
      uVar14 = uVar12 ^ (uVar12 >> 5 | uVar12 * 0x8000000) ^ (uVar12 >> 0x13 | uVar12 * 0x2000);
      local_40 = uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
                 uVar16 >> 0x18;
      iVar18 = uVar20 + local_40 + (uVar14 >> 6 | uVar14 << 0x1a) + piVar30[0xc] +
               ((uVar9 ^ uVar19) & uVar12 ^ uVar19);
      uVar16 = *(uint *)(local_2c[3] + 4);
      uVar14 = uVar21 ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^ (uVar21 >> 0x14 | uVar21 * 0x1000);
      uVar28 = uVar28 + iVar18;
      uVar20 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
               ((uVar23 ^ uVar25) & (uVar21 ^ uVar23) ^ uVar23);
      uVar14 = uVar28 ^ (uVar28 >> 5 | uVar28 * 0x8000000) ^ (uVar28 >> 0x13 | uVar28 * 0x2000);
      local_3c = (undefined1 (*) [16])
                 (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
                 uVar16 >> 0x18);
      iVar18 = uVar19 + (int)local_3c + (uVar14 >> 6 | uVar14 << 0x1a) + piVar30[0xd] +
               ((uVar12 ^ uVar9) & uVar28 ^ uVar9);
      pauVar10 = local_2c + 3;
      uVar16 = *(uint *)(local_2c[3] + 8);
      uVar14 = uVar20 ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^ (uVar20 >> 0x14 | uVar20 * 0x1000);
      uVar25 = uVar25 + iVar18;
      uVar17 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
               ((uVar21 ^ uVar23) & (uVar20 ^ uVar21) ^ uVar21);
      uVar14 = uVar25 ^ (uVar25 >> 5 | uVar25 * 0x8000000) ^ (uVar25 >> 0x13 | uVar25 * 0x2000);
      local_38 = uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
                 uVar16 >> 0x18;
      iVar18 = uVar9 + local_38 + (uVar14 >> 6 | uVar14 << 0x1a) + piVar30[0xe] +
               ((uVar28 ^ uVar12) & uVar25 ^ uVar12);
      local_2c = local_2c + 4;
      uVar9 = *(uint *)(*pauVar10 + 0xc);
      uVar14 = uVar17 ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^ (uVar17 >> 0x14 | uVar17 * 0x1000);
      uVar23 = uVar23 + iVar18;
      uVar16 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
               ((uVar20 ^ uVar21) & (uVar17 ^ uVar20) ^ uVar20);
      uVar14 = uVar23 ^ (uVar23 >> 5 | uVar23 * 0x8000000) ^ (uVar23 >> 0x13 | uVar23 * 0x2000);
      local_34 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                 uVar9 >> 0x18;
      iVar18 = uVar12 + local_34 + (uVar14 >> 6 | uVar14 << 0x1a) + piVar30[0xf] +
               ((uVar25 ^ uVar28) & uVar23 ^ uVar28);
      uVar9 = uVar16 ^ uVar17;
      uVar14 = uVar16 ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^ (uVar16 >> 0x14 | uVar16 * 0x1000);
      uVar21 = uVar21 + iVar18;
      uVar12 = (uVar17 ^ uVar20) & uVar9 ^ uVar17;
      iVar18 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e);
      do {
        piVar31 = piVar30;
        uVar12 = iVar18 + uVar12;
        uVar14 = uVar21 ^ (uVar21 >> 5 | uVar21 << 0x1b) ^ (uVar21 >> 0x13 | uVar21 << 0xd);
        local_70._0_4_ =
             (uint)local_70 +
             ((local_38 >> 0x11 | local_38 << 0xf) ^ (local_38 >> 0x13 | local_38 << 0xd) ^
             local_38 >> 10) +
             ((local_70._4_4_ >> 7 | local_70._4_4_ << 0x19) ^
              (local_70._4_4_ >> 0x12 | local_70._4_4_ << 0xe) ^ local_70._4_4_ >> 3) +
             local_50._4_4_;
        iVar18 = uVar28 + (uint)local_70 + (uVar14 >> 6 | uVar14 << 0x1a) + piVar31[0x10] +
                 ((uVar23 ^ uVar25) & uVar21 ^ uVar25);
        uVar14 = uVar12 ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^ (uVar12 >> 0x14 | uVar12 * 0x1000);
        uVar20 = uVar20 + iVar18;
        uVar22 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) + (uVar9 & (uVar12 ^ uVar16) ^ uVar16);
        uVar14 = uVar20 ^ (uVar20 >> 5 | uVar20 * 0x8000000) ^ (uVar20 >> 0x13 | uVar20 * 0x2000);
        local_70._4_4_ =
             local_70._4_4_ +
             ((local_34 >> 0x11 | local_34 << 0xf) ^ (local_34 >> 0x13 | local_34 << 0xd) ^
             local_34 >> 10) +
             (((uint)local_68 >> 7 | (uint)local_68 << 0x19) ^
              ((uint)local_68 >> 0x12 | (uint)local_68 << 0xe) ^ (uint)local_68 >> 3) +
             (uint)local_48;
        iVar18 = uVar25 + local_70._4_4_ + (uVar14 >> 6 | uVar14 << 0x1a) + piVar31[0x11] +
                 ((uVar21 ^ uVar23) & uVar20 ^ uVar23);
        uVar14 = uVar22 ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^ (uVar22 >> 0x14 | uVar22 * 0x1000);
        uVar17 = uVar17 + iVar18;
        uVar25 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
                 ((uVar12 ^ uVar16) & (uVar22 ^ uVar12) ^ uVar12);
        uVar14 = uVar17 ^ (uVar17 >> 5 | uVar17 * 0x8000000) ^ (uVar17 >> 0x13 | uVar17 * 0x2000);
        local_68._0_4_ =
             (uint)local_68 +
             (((uint)local_70 >> 0x11 | (uint)local_70 * 0x8000) ^
              ((uint)local_70 >> 0x13 | (uint)local_70 * 0x2000) ^ (uint)local_70 >> 10) +
             ((local_68._4_4_ >> 7 | local_68._4_4_ << 0x19) ^
              (local_68._4_4_ >> 0x12 | local_68._4_4_ << 0xe) ^ local_68._4_4_ >> 3) +
             local_48._4_4_;
        iVar18 = uVar23 + (uint)local_68 + (uVar14 >> 6 | uVar14 << 0x1a) + piVar31[0x12] +
                 ((uVar20 ^ uVar21) & uVar17 ^ uVar21);
        uVar14 = uVar25 ^ (uVar25 >> 0xb | uVar25 * 0x200000) ^ (uVar25 >> 0x14 | uVar25 * 0x1000);
        uVar16 = uVar16 + iVar18;
        uVar23 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
                 ((uVar22 ^ uVar12) & (uVar25 ^ uVar22) ^ uVar22);
        uVar14 = uVar16 ^ (uVar16 >> 5 | uVar16 * 0x8000000) ^ (uVar16 >> 0x13 | uVar16 * 0x2000);
        local_68._4_4_ =
             local_68._4_4_ +
             ((local_70._4_4_ >> 0x11 | local_70._4_4_ * 0x8000) ^
              (local_70._4_4_ >> 0x13 | local_70._4_4_ * 0x2000) ^ local_70._4_4_ >> 10) +
             (((uint)local_60 >> 7 | (uint)local_60 << 0x19) ^
              ((uint)local_60 >> 0x12 | (uint)local_60 << 0xe) ^ (uint)local_60 >> 3) + local_40;
        iVar18 = uVar21 + local_68._4_4_ + (uVar14 >> 6 | uVar14 << 0x1a) + piVar31[0x13] +
                 ((uVar17 ^ uVar20) & uVar16 ^ uVar20);
        uVar14 = uVar23 ^ (uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 >> 0x14 | uVar23 * 0x1000);
        uVar12 = uVar12 + iVar18;
        uVar21 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
                 ((uVar25 ^ uVar22) & (uVar23 ^ uVar25) ^ uVar25);
        uVar14 = uVar12 ^ (uVar12 >> 5 | uVar12 * 0x8000000) ^ (uVar12 >> 0x13 | uVar12 * 0x2000);
        local_60._0_4_ =
             (uint)local_60 +
             (((uint)local_68 >> 0x11 | (uint)local_68 * 0x8000) ^
              ((uint)local_68 >> 0x13 | (uint)local_68 * 0x2000) ^ (uint)local_68 >> 10) +
             ((local_60._4_4_ >> 7 | local_60._4_4_ << 0x19) ^
              (local_60._4_4_ >> 0x12 | local_60._4_4_ << 0xe) ^ local_60._4_4_ >> 3) +
             (int)local_3c;
        iVar18 = uVar20 + (uint)local_60 + (uVar14 >> 6 | uVar14 << 0x1a) + piVar31[0x14] +
                 ((uVar16 ^ uVar17) & uVar12 ^ uVar17);
        uVar14 = uVar21 ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^ (uVar21 >> 0x14 | uVar21 * 0x1000);
        uVar22 = uVar22 + iVar18;
        uVar19 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
                 ((uVar23 ^ uVar25) & (uVar21 ^ uVar23) ^ uVar23);
        uVar14 = uVar22 ^ (uVar22 >> 5 | uVar22 * 0x8000000) ^ (uVar22 >> 0x13 | uVar22 * 0x2000);
        local_60._4_4_ =
             local_60._4_4_ +
             ((local_68._4_4_ >> 0x11 | local_68._4_4_ * 0x8000) ^
              (local_68._4_4_ >> 0x13 | local_68._4_4_ * 0x2000) ^ local_68._4_4_ >> 10) +
             (((uint)local_58 >> 7 | (uint)local_58 << 0x19) ^
              ((uint)local_58 >> 0x12 | (uint)local_58 << 0xe) ^ (uint)local_58 >> 3) + local_38;
        iVar18 = uVar17 + local_60._4_4_ + (uVar14 >> 6 | uVar14 << 0x1a) + piVar31[0x15] +
                 ((uVar12 ^ uVar16) & uVar22 ^ uVar16);
        uVar14 = uVar19 ^ (uVar19 >> 0xb | uVar19 * 0x200000) ^ (uVar19 >> 0x14 | uVar19 * 0x1000);
        uVar25 = uVar25 + iVar18;
        uVar17 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
                 ((uVar21 ^ uVar23) & (uVar19 ^ uVar21) ^ uVar21);
        uVar14 = uVar25 ^ (uVar25 >> 5 | uVar25 * 0x8000000) ^ (uVar25 >> 0x13 | uVar25 * 0x2000);
        local_58._0_4_ =
             (uint)local_58 +
             (((uint)local_60 >> 0x11 | (uint)local_60 * 0x8000) ^
              ((uint)local_60 >> 0x13 | (uint)local_60 * 0x2000) ^ (uint)local_60 >> 10) +
             ((local_58._4_4_ >> 7 | local_58._4_4_ << 0x19) ^
              (local_58._4_4_ >> 0x12 | local_58._4_4_ << 0xe) ^ local_58._4_4_ >> 3) + local_34;
        iVar18 = uVar16 + (uint)local_58 + (uVar14 >> 6 | uVar14 << 0x1a) + piVar31[0x16] +
                 ((uVar22 ^ uVar12) & uVar25 ^ uVar12);
        uVar14 = uVar17 ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^ (uVar17 >> 0x14 | uVar17 * 0x1000);
        uVar23 = uVar23 + iVar18;
        uVar16 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
                 ((uVar19 ^ uVar21) & (uVar17 ^ uVar19) ^ uVar19);
        uVar14 = uVar23 ^ (uVar23 >> 5 | uVar23 * 0x8000000) ^ (uVar23 >> 0x13 | uVar23 * 0x2000);
        local_58._4_4_ =
             local_58._4_4_ +
             ((local_60._4_4_ >> 0x11 | local_60._4_4_ * 0x8000) ^
              (local_60._4_4_ >> 0x13 | local_60._4_4_ * 0x2000) ^ local_60._4_4_ >> 10) +
             (((uint)local_50 >> 7 | (uint)local_50 << 0x19) ^
              ((uint)local_50 >> 0x12 | (uint)local_50 << 0xe) ^ (uint)local_50 >> 3) +
             (uint)local_70;
        iVar18 = uVar12 + local_58._4_4_ + (uVar14 >> 6 | uVar14 << 0x1a) + piVar31[0x17] +
                 ((uVar25 ^ uVar22) & uVar23 ^ uVar22);
        uVar14 = uVar16 ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^ (uVar16 >> 0x14 | uVar16 * 0x1000);
        uVar21 = uVar21 + iVar18;
        uVar9 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
                ((uVar17 ^ uVar19) & (uVar16 ^ uVar17) ^ uVar17);
        uVar14 = uVar21 ^ (uVar21 >> 5 | uVar21 * 0x8000000) ^ (uVar21 >> 0x13 | uVar21 * 0x2000);
        local_50._0_4_ =
             (uint)local_50 +
             (((uint)local_58 >> 0x11 | (uint)local_58 * 0x8000) ^
              ((uint)local_58 >> 0x13 | (uint)local_58 * 0x2000) ^ (uint)local_58 >> 10) +
             ((local_50._4_4_ >> 7 | local_50._4_4_ << 0x19) ^
              (local_50._4_4_ >> 0x12 | local_50._4_4_ << 0xe) ^ local_50._4_4_ >> 3) +
             local_70._4_4_;
        iVar18 = uVar22 + (uint)local_50 + (uVar14 >> 6 | uVar14 << 0x1a) + piVar31[0x18] +
                 ((uVar23 ^ uVar25) & uVar21 ^ uVar25);
        uVar14 = uVar9 ^ (uVar9 >> 0xb | uVar9 * 0x200000) ^ (uVar9 >> 0x14 | uVar9 * 0x1000);
        uVar19 = uVar19 + iVar18;
        uVar28 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
                 ((uVar16 ^ uVar17) & (uVar9 ^ uVar16) ^ uVar16);
        uVar14 = uVar19 ^ (uVar19 >> 5 | uVar19 * 0x8000000) ^ (uVar19 >> 0x13 | uVar19 * 0x2000);
        local_50._4_4_ =
             local_50._4_4_ +
             ((local_58._4_4_ >> 0x11 | local_58._4_4_ * 0x8000) ^
              (local_58._4_4_ >> 0x13 | local_58._4_4_ * 0x2000) ^ local_58._4_4_ >> 10) +
             (((uint)local_48 >> 7 | (uint)local_48 << 0x19) ^
              ((uint)local_48 >> 0x12 | (uint)local_48 << 0xe) ^ (uint)local_48 >> 3) +
             (uint)local_68;
        iVar18 = uVar25 + local_50._4_4_ + (uVar14 >> 6 | uVar14 << 0x1a) + piVar31[0x19] +
                 ((uVar21 ^ uVar23) & uVar19 ^ uVar23);
        uVar14 = uVar28 ^ (uVar28 >> 0xb | uVar28 * 0x200000) ^ (uVar28 >> 0x14 | uVar28 * 0x1000);
        uVar17 = uVar17 + iVar18;
        uVar25 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
                 ((uVar9 ^ uVar16) & (uVar28 ^ uVar9) ^ uVar9);
        uVar14 = uVar17 ^ (uVar17 >> 5 | uVar17 * 0x8000000) ^ (uVar17 >> 0x13 | uVar17 * 0x2000);
        local_48._0_4_ =
             (uint)local_48 +
             (((uint)local_50 >> 0x11 | (uint)local_50 * 0x8000) ^
              ((uint)local_50 >> 0x13 | (uint)local_50 * 0x2000) ^ (uint)local_50 >> 10) +
             ((local_48._4_4_ >> 7 | local_48._4_4_ << 0x19) ^
              (local_48._4_4_ >> 0x12 | local_48._4_4_ << 0xe) ^ local_48._4_4_ >> 3) +
             local_68._4_4_;
        iVar18 = uVar23 + (uint)local_48 + (uVar14 >> 6 | uVar14 << 0x1a) + piVar31[0x1a] +
                 ((uVar19 ^ uVar21) & uVar17 ^ uVar21);
        uVar14 = uVar25 ^ (uVar25 >> 0xb | uVar25 * 0x200000) ^ (uVar25 >> 0x14 | uVar25 * 0x1000);
        uVar16 = uVar16 + iVar18;
        uVar23 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
                 ((uVar28 ^ uVar9) & (uVar25 ^ uVar28) ^ uVar28);
        uVar14 = uVar16 ^ (uVar16 >> 5 | uVar16 * 0x8000000) ^ (uVar16 >> 0x13 | uVar16 * 0x2000);
        local_48._4_4_ =
             local_48._4_4_ +
             ((local_50._4_4_ >> 0x11 | local_50._4_4_ * 0x8000) ^
              (local_50._4_4_ >> 0x13 | local_50._4_4_ * 0x2000) ^ local_50._4_4_ >> 10) +
             ((local_40 >> 7 | local_40 << 0x19) ^ (local_40 >> 0x12 | local_40 << 0xe) ^
             local_40 >> 3) + (uint)local_60;
        iVar18 = uVar21 + local_48._4_4_ + (uVar14 >> 6 | uVar14 << 0x1a) + piVar31[0x1b] +
                 ((uVar17 ^ uVar19) & uVar16 ^ uVar19);
        uVar14 = uVar23 ^ (uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 >> 0x14 | uVar23 * 0x1000);
        uVar9 = uVar9 + iVar18;
        uVar21 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
                 ((uVar25 ^ uVar28) & (uVar23 ^ uVar25) ^ uVar25);
        uVar14 = uVar9 ^ (uVar9 >> 5 | uVar9 * 0x8000000) ^ (uVar9 >> 0x13 | uVar9 * 0x2000);
        local_40 = local_40 +
                   (((uint)local_48 >> 0x11 | (uint)local_48 * 0x8000) ^
                    ((uint)local_48 >> 0x13 | (uint)local_48 * 0x2000) ^ (uint)local_48 >> 10) +
                   (((uint)local_3c >> 7 | (int)local_3c << 0x19) ^
                    ((uint)local_3c >> 0x12 | (int)local_3c << 0xe) ^ (uint)local_3c >> 3) +
                   local_60._4_4_;
        iVar18 = uVar19 + local_40 + (uVar14 >> 6 | uVar14 << 0x1a) + piVar31[0x1c] +
                 ((uVar16 ^ uVar17) & uVar9 ^ uVar17);
        uVar14 = uVar21 ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^ (uVar21 >> 0x14 | uVar21 * 0x1000);
        uVar28 = uVar28 + iVar18;
        uVar20 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
                 ((uVar23 ^ uVar25) & (uVar21 ^ uVar23) ^ uVar23);
        uVar14 = uVar28 ^ (uVar28 >> 5 | uVar28 * 0x8000000) ^ (uVar28 >> 0x13 | uVar28 * 0x2000);
        local_3c = (undefined1 (*) [16])
                   ((int)local_3c +
                    ((local_48._4_4_ >> 0x11 | local_48._4_4_ * 0x8000) ^
                     (local_48._4_4_ >> 0x13 | local_48._4_4_ * 0x2000) ^ local_48._4_4_ >> 10) +
                    ((local_38 >> 7 | local_38 << 0x19) ^ (local_38 >> 0x12 | local_38 << 0xe) ^
                    local_38 >> 3) + (uint)local_58);
        iVar18 = uVar17 + (int)local_3c + (uVar14 >> 6 | uVar14 << 0x1a) + piVar31[0x1d] +
                 ((uVar9 ^ uVar16) & uVar28 ^ uVar16);
        uVar14 = uVar20 ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^ (uVar20 >> 0x14 | uVar20 * 0x1000);
        uVar25 = uVar25 + iVar18;
        uVar17 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
                 ((uVar21 ^ uVar23) & (uVar20 ^ uVar21) ^ uVar21);
        uVar14 = uVar25 ^ (uVar25 >> 5 | uVar25 * 0x8000000) ^ (uVar25 >> 0x13 | uVar25 * 0x2000);
        local_38 = local_38 +
                   ((local_40 >> 0x11 | local_40 * 0x8000) ^ (local_40 >> 0x13 | local_40 * 0x2000)
                   ^ local_40 >> 10) +
                   ((local_34 >> 7 | local_34 << 0x19) ^ (local_34 >> 0x12 | local_34 << 0xe) ^
                   local_34 >> 3) + local_58._4_4_;
        iVar18 = uVar16 + local_38 + (uVar14 >> 6 | uVar14 << 0x1a) + piVar31[0x1e] +
                 ((uVar28 ^ uVar9) & uVar25 ^ uVar9);
        uVar14 = uVar17 ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^ (uVar17 >> 0x14 | uVar17 * 0x1000);
        uVar23 = uVar23 + iVar18;
        uVar16 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
                 ((uVar20 ^ uVar21) & (uVar17 ^ uVar20) ^ uVar20);
        uVar14 = uVar23 ^ (uVar23 >> 5 | uVar23 * 0x8000000) ^ (uVar23 >> 0x13 | uVar23 * 0x2000);
        local_34 = local_34 +
                   (((uint)local_3c >> 0x11 | (int)local_3c * 0x8000) ^
                    ((uint)local_3c >> 0x13 | (int)local_3c * 0x2000) ^ (uint)local_3c >> 10) +
                   (((uint)local_70 >> 7 | (uint)local_70 * 0x2000000) ^
                    ((uint)local_70 >> 0x12 | (uint)local_70 * 0x4000) ^ (uint)local_70 >> 3) +
                   (uint)local_50;
        iVar18 = uVar9 + local_34 + (uVar14 >> 6 | uVar14 << 0x1a) + piVar31[0x1f] +
                 ((uVar25 ^ uVar28) & uVar23 ^ uVar28);
        uVar9 = uVar16 ^ uVar17;
        uVar14 = uVar16 ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^ (uVar16 >> 0x14 | uVar16 * 0x1000);
        uVar21 = uVar21 + iVar18;
        uVar12 = (uVar17 ^ uVar20) & uVar9 ^ uVar17;
        iVar18 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e);
        piVar30 = piVar31 + 0x10;
      } while ((piVar31[0x1f] & 0xffU) != 0xf2);
      uVar14 = iVar18 + uVar12 + *(int *)*param_1;
      uVar16 = uVar16 + *(int *)(*param_1 + 4);
      uVar17 = uVar17 + *(int *)(*param_1 + 8);
      iVar18 = uVar20 + *(int *)(*param_1 + 0xc);
      uVar21 = uVar21 + *(int *)param_1[1];
      uVar23 = uVar23 + *(int *)(param_1[1] + 4);
      uVar25 = uVar25 + *(int *)(param_1[1] + 8);
      iVar27 = uVar28 + *(int *)(param_1[1] + 0xc);
      *(uint *)*param_1 = uVar14;
      *(uint *)(*param_1 + 4) = uVar16;
      *(uint *)(*param_1 + 8) = uVar17;
      *(int *)(*param_1 + 0xc) = iVar18;
      *(uint *)param_1[1] = uVar21;
      *(uint *)(param_1[1] + 4) = uVar23;
      *(uint *)(param_1[1] + 8) = uVar25;
      *(int *)(param_1[1] + 0xc) = iVar27;
      piVar30 = piVar31 + -0x20;
    } while (local_2c != param_2 + param_3 * 4);
    return;
  }
  local_3c = param_2 + 4;
  auVar39._8_8_ = 0xe9b5dba5b5c0fbcf;
  auVar39._0_8_ = 0x71374491428a2f98;
  auVar40._8_8_ = 0xab1c5ed5923f82a4;
  auVar40._0_8_ = 0x59f111f13956c25b;
  auVar41._8_8_ = 0x550c7dc3243185be;
  auVar41._0_8_ = 0x12835b01d807aa98;
  auVar42._8_8_ = 0xc19bf1749bdc06a7;
  auVar42._0_8_ = 0x80deb1fe72be5d74;
  auVar35 = vrev(*param_2,1);
  auVar36 = vrev(param_2[1],1);
  auVar37 = vrev(param_2[2],1);
  auVar38 = vrev(param_2[3],1);
  auVar39 = VectorAdd(auVar39,auVar35,4);
  auVar40 = VectorAdd(auVar40,auVar36,4);
  local_78 = auVar39._8_8_;
  auVar41 = VectorAdd(auVar41,auVar37,4);
  local_70 = auVar40._0_8_;
  local_68 = auVar40._8_8_;
  auVar40 = VectorAdd(auVar42,auVar38,4);
  local_60 = auVar41._0_8_;
  local_58 = auVar41._8_8_;
  local_50 = auVar40._0_8_;
  local_48 = auVar40._8_8_;
  iVar27 = *(int *)*param_1;
  uVar17 = *(uint *)(*param_1 + 4);
  uVar21 = *(uint *)(*param_1 + 8);
  uVar23 = *(uint *)(*param_1 + 0xc);
  uVar25 = *(uint *)param_1[1];
  uVar9 = *(uint *)(param_1[1] + 4);
  uVar12 = *(uint *)(param_1[1] + 8);
  uVar19 = *(uint *)(param_1[1] + 0xc);
  local_80._0_4_ = auVar39._0_4_;
  uVar16 = 0;
  uVar14 = uVar17 ^ uVar21;
  iVar18 = (int)local_80;
  pauVar10 = (undefined1 (*) [16])&DAT_01840640;
  uVar49 = auVar39._0_8_;
  while( true ) {
    do {
      local_80 = uVar49;
      pauVar11 = pauVar10;
      auVar1._16_16_ = auVar36;
      auVar1._0_16_ = auVar35;
      auVar39 = auVar1._4_16_;
      auVar2._16_16_ = auVar38;
      auVar2._0_16_ = auVar37;
      uVar16 = iVar27 + uVar16;
      uVar22 = uVar25 ^ (uVar25 >> 5 | uVar25 << 0x1b) ^ (uVar25 >> 0x13 | uVar25 << 0xd);
      auVar41 = VectorUnsignedFixedToFloat(auVar39,7);
      auVar35 = VectorAdd(auVar35,auVar2._4_16_,4);
      auVar40 = VectorUnsignedFixedToFloat(auVar39,3);
      uVar20 = uVar16 ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^ (uVar16 >> 0x14 | uVar16 * 0x1000);
      iVar18 = uVar19 + iVar18 + (uVar22 >> 6 | uVar22 << 0x1a) +
               ((uVar9 ^ uVar12) & uVar25 ^ uVar12);
      auVar41 = VectorShiftLeftInsert(auVar41,auVar39,0x19);
      auVar42 = VectorUnsignedFixedToFloat(auVar39,0x12);
      uVar23 = uVar23 + iVar18;
      auVar39 = VectorShiftLeftInsert(auVar42,auVar39,0xe);
      uVar49 = auVar38._8_8_;
      uVar46 = VectorShiftRight(uVar49,0x11);
      uVar28 = iVar18 + (uVar20 >> 2 | uVar20 << 0x1e) + (uVar14 & (uVar16 ^ uVar17) ^ uVar17);
      uVar19 = uVar23 ^ (uVar23 >> 5 | uVar23 * 0x8000000) ^ (uVar23 >> 0x13 | uVar23 * 0x2000);
      uVar47 = VectorShiftLeftInsert(uVar46,uVar49,0xf);
      uVar50 = VectorShiftRight(uVar49,10);
      uVar14 = uVar28 ^ (uVar28 >> 0xb | uVar28 * 0x200000) ^ (uVar28 >> 0x14 | uVar28 * 0x1000);
      auVar39 = VectorAdd(auVar35,auVar40 ^ auVar41 ^ auVar39,4);
      iVar18 = uVar12 + local_80._4_4_ + (uVar19 >> 6 | uVar19 << 0x1a) +
               ((uVar25 ^ uVar9) & uVar23 ^ uVar9);
      uVar21 = uVar21 + iVar18;
      uVar46 = VectorShiftRight(uVar49,0x13);
      uVar48 = VectorShiftLeftInsert(uVar46,uVar49,0xd);
      uVar12 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
               ((uVar16 ^ uVar17) & (uVar28 ^ uVar16) ^ uVar16);
      auVar35._0_8_ = VectorAdd(auVar39._0_8_,uVar50 ^ uVar47 ^ uVar48,4);
      uVar19 = uVar21 ^ (uVar21 >> 5 | uVar21 * 0x8000000) ^ (uVar21 >> 0x13 | uVar21 * 0x2000);
      uVar49 = VectorShiftRight(auVar35._0_8_,0x11);
      uVar47 = VectorShiftLeftInsert(uVar49,auVar35._0_8_,0xf);
      uVar50 = VectorShiftRight(auVar35._0_8_,10);
      uVar14 = uVar12 ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^ (uVar12 >> 0x14 | uVar12 * 0x1000);
      iVar18 = uVar9 + (int)local_78 + (uVar19 >> 6 | uVar19 << 0x1a) +
               ((uVar23 ^ uVar25) & uVar21 ^ uVar25);
      uVar49 = VectorShiftRight(auVar35._0_8_,0x13);
      uVar17 = uVar17 + iVar18;
      uVar48 = VectorShiftLeftInsert(uVar49,auVar35._0_8_,0xd);
      uVar26 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
               ((uVar28 ^ uVar16) & (uVar12 ^ uVar28) ^ uVar28);
      auVar35._8_8_ = VectorAdd(auVar39._8_8_,uVar50 ^ uVar47 ^ uVar48,4);
      uVar9 = uVar17 ^ (uVar17 >> 5 | uVar17 * 0x8000000) ^ (uVar17 >> 0x13 | uVar17 * 0x2000);
      auVar40 = VectorAdd(*pauVar11,auVar35,4);
      uVar14 = uVar26 ^ (uVar26 >> 0xb | uVar26 * 0x200000) ^ (uVar26 >> 0x14 | uVar26 * 0x1000);
      iVar18 = uVar25 + local_78._4_4_ + (uVar9 >> 6 | uVar9 << 0x1a) +
               ((uVar21 ^ uVar23) & uVar17 ^ uVar23);
      uVar16 = uVar16 + iVar18;
      local_78 = auVar40._8_8_;
      auVar3._16_16_ = auVar37;
      auVar3._0_16_ = auVar36;
      auVar39 = auVar3._4_16_;
      auVar4._16_16_ = auVar35;
      auVar4._0_16_ = auVar38;
      uVar25 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
               ((uVar12 ^ uVar28) & (uVar26 ^ uVar12) ^ uVar12);
      uVar9 = uVar16 ^ (uVar16 >> 5 | uVar16 * 0x8000000) ^ (uVar16 >> 0x13 | uVar16 * 0x2000);
      auVar42 = VectorUnsignedFixedToFloat(auVar39,7);
      auVar36 = VectorAdd(auVar36,auVar4._4_16_,4);
      auVar41 = VectorUnsignedFixedToFloat(auVar39,3);
      uVar14 = uVar25 ^ (uVar25 >> 0xb | uVar25 * 0x200000) ^ (uVar25 >> 0x14 | uVar25 * 0x1000);
      iVar18 = uVar23 + (uint)local_70 + (uVar9 >> 6 | uVar9 << 0x1a) +
               ((uVar17 ^ uVar21) & uVar16 ^ uVar21);
      auVar42 = VectorShiftLeftInsert(auVar42,auVar39,0x19);
      auVar43 = VectorUnsignedFixedToFloat(auVar39,0x12);
      uVar28 = uVar28 + iVar18;
      auVar39 = VectorShiftLeftInsert(auVar43,auVar39,0xe);
      uVar49 = VectorShiftRight(auVar35._8_8_,0x11);
      uVar24 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
               ((uVar26 ^ uVar12) & (uVar25 ^ uVar26) ^ uVar26);
      uVar23 = uVar28 ^ (uVar28 >> 5 | uVar28 * 0x8000000) ^ (uVar28 >> 0x13 | uVar28 * 0x2000);
      uVar47 = VectorShiftLeftInsert(uVar49,auVar35._8_8_,0xf);
      uVar50 = VectorShiftRight(auVar35._8_8_,10);
      uVar14 = uVar24 ^ (uVar24 >> 0xb | uVar24 * 0x200000) ^ (uVar24 >> 0x14 | uVar24 * 0x1000);
      auVar39 = VectorAdd(auVar36,auVar41 ^ auVar42 ^ auVar39,4);
      iVar18 = uVar21 + local_70._4_4_ + (uVar23 >> 6 | uVar23 << 0x1a) +
               ((uVar16 ^ uVar17) & uVar28 ^ uVar17);
      uVar12 = uVar12 + iVar18;
      uVar49 = VectorShiftRight(auVar35._8_8_,0x13);
      uVar48 = VectorShiftLeftInsert(uVar49,auVar35._8_8_,0xd);
      uVar21 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
               ((uVar25 ^ uVar26) & (uVar24 ^ uVar25) ^ uVar25);
      auVar36._0_8_ = VectorAdd(auVar39._0_8_,uVar50 ^ uVar47 ^ uVar48,4);
      uVar23 = uVar12 ^ (uVar12 >> 5 | uVar12 * 0x8000000) ^ (uVar12 >> 0x13 | uVar12 * 0x2000);
      uVar49 = VectorShiftRight(auVar36._0_8_,0x11);
      uVar47 = VectorShiftLeftInsert(uVar49,auVar36._0_8_,0xf);
      uVar50 = VectorShiftRight(auVar36._0_8_,10);
      uVar14 = uVar21 ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^ (uVar21 >> 0x14 | uVar21 * 0x1000);
      iVar18 = uVar17 + (uint)local_68 + (uVar23 >> 6 | uVar23 << 0x1a) +
               ((uVar28 ^ uVar16) & uVar12 ^ uVar16);
      uVar49 = VectorShiftRight(auVar36._0_8_,0x13);
      uVar26 = uVar26 + iVar18;
      uVar48 = VectorShiftLeftInsert(uVar49,auVar36._0_8_,0xd);
      uVar20 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
               ((uVar24 ^ uVar25) & (uVar21 ^ uVar24) ^ uVar24);
      auVar36._8_8_ = VectorAdd(auVar39._8_8_,uVar50 ^ uVar47 ^ uVar48,4);
      uVar17 = uVar26 ^ (uVar26 >> 5 | uVar26 * 0x8000000) ^ (uVar26 >> 0x13 | uVar26 * 0x2000);
      auVar41 = VectorAdd(pauVar11[1],auVar36,4);
      uVar14 = uVar20 ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^ (uVar20 >> 0x14 | uVar20 * 0x1000);
      iVar18 = uVar16 + local_68._4_4_ + (uVar17 >> 6 | uVar17 << 0x1a) +
               ((uVar12 ^ uVar28) & uVar26 ^ uVar28);
      uVar25 = uVar25 + iVar18;
      local_70 = auVar41._0_8_;
      local_68 = auVar41._8_8_;
      auVar5._16_16_ = auVar38;
      auVar5._0_16_ = auVar37;
      auVar39 = auVar5._4_16_;
      auVar6._16_16_ = auVar36;
      auVar6._0_16_ = auVar35;
      uVar22 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
               ((uVar21 ^ uVar24) & (uVar20 ^ uVar21) ^ uVar21);
      uVar16 = uVar25 ^ (uVar25 >> 5 | uVar25 * 0x8000000) ^ (uVar25 >> 0x13 | uVar25 * 0x2000);
      auVar43 = VectorUnsignedFixedToFloat(auVar39,7);
      auVar37 = VectorAdd(auVar37,auVar6._4_16_,4);
      auVar42 = VectorUnsignedFixedToFloat(auVar39,3);
      uVar14 = uVar22 ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^ (uVar22 >> 0x14 | uVar22 * 0x1000);
      iVar18 = uVar28 + (uint)local_60 + (uVar16 >> 6 | uVar16 << 0x1a) +
               ((uVar26 ^ uVar12) & uVar25 ^ uVar12);
      auVar43 = VectorShiftLeftInsert(auVar43,auVar39,0x19);
      auVar44 = VectorUnsignedFixedToFloat(auVar39,0x12);
      uVar24 = uVar24 + iVar18;
      auVar39 = VectorShiftLeftInsert(auVar44,auVar39,0xe);
      uVar49 = VectorShiftRight(auVar36._8_8_,0x11);
      uVar19 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
               ((uVar20 ^ uVar21) & (uVar22 ^ uVar20) ^ uVar20);
      uVar16 = uVar24 ^ (uVar24 >> 5 | uVar24 * 0x8000000) ^ (uVar24 >> 0x13 | uVar24 * 0x2000);
      uVar47 = VectorShiftLeftInsert(uVar49,auVar36._8_8_,0xf);
      uVar50 = VectorShiftRight(auVar36._8_8_,10);
      uVar14 = uVar19 ^ (uVar19 >> 0xb | uVar19 * 0x200000) ^ (uVar19 >> 0x14 | uVar19 * 0x1000);
      auVar39 = VectorAdd(auVar37,auVar42 ^ auVar43 ^ auVar39,4);
      iVar18 = uVar12 + local_60._4_4_ + (uVar16 >> 6 | uVar16 << 0x1a) +
               ((uVar25 ^ uVar26) & uVar24 ^ uVar26);
      uVar21 = uVar21 + iVar18;
      uVar49 = VectorShiftRight(auVar36._8_8_,0x13);
      uVar48 = VectorShiftLeftInsert(uVar49,auVar36._8_8_,0xd);
      uVar12 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
               ((uVar22 ^ uVar20) & (uVar19 ^ uVar22) ^ uVar22);
      auVar37._0_8_ = VectorAdd(auVar39._0_8_,uVar50 ^ uVar47 ^ uVar48,4);
      uVar16 = uVar21 ^ (uVar21 >> 5 | uVar21 * 0x8000000) ^ (uVar21 >> 0x13 | uVar21 * 0x2000);
      uVar49 = VectorShiftRight(auVar37._0_8_,0x11);
      uVar47 = VectorShiftLeftInsert(uVar49,auVar37._0_8_,0xf);
      uVar50 = VectorShiftRight(auVar37._0_8_,10);
      uVar14 = uVar12 ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^ (uVar12 >> 0x14 | uVar12 * 0x1000);
      iVar18 = uVar26 + (uint)local_58 + (uVar16 >> 6 | uVar16 << 0x1a) +
               ((uVar24 ^ uVar25) & uVar21 ^ uVar25);
      uVar49 = VectorShiftRight(auVar37._0_8_,0x13);
      uVar20 = uVar20 + iVar18;
      uVar48 = VectorShiftLeftInsert(uVar49,auVar37._0_8_,0xd);
      uVar9 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
              ((uVar19 ^ uVar22) & (uVar12 ^ uVar19) ^ uVar19);
      auVar37._8_8_ = VectorAdd(auVar39._8_8_,uVar50 ^ uVar47 ^ uVar48,4);
      uVar16 = uVar20 ^ (uVar20 >> 5 | uVar20 * 0x8000000) ^ (uVar20 >> 0x13 | uVar20 * 0x2000);
      auVar42 = VectorAdd(pauVar11[2],auVar37,4);
      uVar14 = uVar9 ^ (uVar9 >> 0xb | uVar9 * 0x200000) ^ (uVar9 >> 0x14 | uVar9 * 0x1000);
      iVar18 = uVar25 + local_58._4_4_ + (uVar16 >> 6 | uVar16 << 0x1a) +
               ((uVar21 ^ uVar24) & uVar20 ^ uVar24);
      uVar22 = uVar22 + iVar18;
      local_60 = auVar42._0_8_;
      local_58 = auVar42._8_8_;
      auVar7._16_16_ = auVar35;
      auVar7._0_16_ = auVar38;
      auVar39 = auVar7._4_16_;
      auVar8._16_16_ = auVar37;
      auVar8._0_16_ = auVar36;
      uVar25 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
               ((uVar12 ^ uVar19) & (uVar9 ^ uVar12) ^ uVar12);
      uVar16 = uVar22 ^ (uVar22 >> 5 | uVar22 * 0x8000000) ^ (uVar22 >> 0x13 | uVar22 * 0x2000);
      auVar44 = VectorUnsignedFixedToFloat(auVar39,7);
      auVar38 = VectorAdd(auVar38,auVar8._4_16_,4);
      auVar43 = VectorUnsignedFixedToFloat(auVar39,3);
      uVar14 = uVar25 ^ (uVar25 >> 0xb | uVar25 * 0x200000) ^ (uVar25 >> 0x14 | uVar25 * 0x1000);
      iVar18 = uVar24 + (uint)local_50 + (uVar16 >> 6 | uVar16 << 0x1a) +
               ((uVar20 ^ uVar21) & uVar22 ^ uVar21);
      auVar44 = VectorShiftLeftInsert(auVar44,auVar39,0x19);
      auVar45 = VectorUnsignedFixedToFloat(auVar39,0x12);
      uVar19 = uVar19 + iVar18;
      auVar39 = VectorShiftLeftInsert(auVar45,auVar39,0xe);
      uVar49 = VectorShiftRight(auVar37._8_8_,0x11);
      uVar23 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
               ((uVar9 ^ uVar12) & (uVar25 ^ uVar9) ^ uVar9);
      uVar16 = uVar19 ^ (uVar19 >> 5 | uVar19 * 0x8000000) ^ (uVar19 >> 0x13 | uVar19 * 0x2000);
      uVar47 = VectorShiftLeftInsert(uVar49,auVar37._8_8_,0xf);
      uVar50 = VectorShiftRight(auVar37._8_8_,10);
      uVar14 = uVar23 ^ (uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 >> 0x14 | uVar23 * 0x1000);
      auVar39 = VectorAdd(auVar38,auVar43 ^ auVar44 ^ auVar39,4);
      iVar18 = uVar21 + local_50._4_4_ + (uVar16 >> 6 | uVar16 << 0x1a) +
               ((uVar22 ^ uVar20) & uVar19 ^ uVar20);
      uVar12 = uVar12 + iVar18;
      uVar49 = VectorShiftRight(auVar37._8_8_,0x13);
      uVar48 = VectorShiftLeftInsert(uVar49,auVar37._8_8_,0xd);
      uVar21 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
               ((uVar25 ^ uVar9) & (uVar23 ^ uVar25) ^ uVar25);
      auVar38._0_8_ = VectorAdd(auVar39._0_8_,uVar50 ^ uVar47 ^ uVar48,4);
      uVar16 = uVar12 ^ (uVar12 >> 5 | uVar12 * 0x8000000) ^ (uVar12 >> 0x13 | uVar12 * 0x2000);
      uVar49 = VectorShiftRight(auVar38._0_8_,0x11);
      uVar47 = VectorShiftLeftInsert(uVar49,auVar38._0_8_,0xf);
      uVar50 = VectorShiftRight(auVar38._0_8_,10);
      uVar14 = uVar21 ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^ (uVar21 >> 0x14 | uVar21 * 0x1000);
      iVar18 = uVar20 + (uint)local_48 + (uVar16 >> 6 | uVar16 << 0x1a) +
               ((uVar19 ^ uVar22) & uVar12 ^ uVar22);
      uVar49 = VectorShiftRight(auVar38._0_8_,0x13);
      uVar9 = uVar9 + iVar18;
      uVar48 = VectorShiftLeftInsert(uVar49,auVar38._0_8_,0xd);
      uVar17 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
               ((uVar23 ^ uVar25) & (uVar21 ^ uVar23) ^ uVar23);
      auVar38._8_8_ = VectorAdd(auVar39._8_8_,uVar50 ^ uVar47 ^ uVar48,4);
      uVar20 = uVar9 ^ (uVar9 >> 5 | uVar9 * 0x8000000) ^ (uVar9 >> 0x13 | uVar9 * 0x2000);
      auVar39 = VectorAdd(pauVar11[3],auVar38,4);
      uVar14 = uVar17 ^ uVar21;
      uVar16 = uVar17 ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^ (uVar17 >> 0x14 | uVar17 * 0x1000);
      iVar27 = uVar22 + local_48._4_4_ + (uVar20 >> 6 | uVar20 << 0x1a) +
               ((uVar12 ^ uVar19) & uVar9 ^ uVar19);
      uVar25 = uVar25 + iVar27;
      local_50 = auVar39._0_8_;
      local_48 = auVar39._8_8_;
      iVar27 = iVar27 + (uVar16 >> 2 | uVar16 << 0x1e);
      uVar16 = (uVar21 ^ uVar23) & uVar14 ^ uVar21;
      local_80._0_4_ = auVar40._0_4_;
      iVar18 = (int)local_80;
      pauVar10 = pauVar11 + 4;
      uVar49 = auVar40._0_8_;
    } while (*(int *)pauVar11[4] != 0);
    bVar32 = local_3c == param_2 + param_3 * 4;
    pauVar10 = local_3c;
    if (bVar32) {
      pauVar10 = local_3c + -4;
    }
    if (!bVar32) {
      local_3c = pauVar10 + 4;
    }
    uVar16 = iVar27 + uVar16;
    uVar22 = uVar25 ^ (uVar25 >> 5 | uVar25 * 0x8000000) ^ (uVar25 >> 0x13 | uVar25 * 0x2000);
    auVar35 = vrev(*pauVar10,1);
    uVar20 = uVar16 ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^ (uVar16 >> 0x14 | uVar16 * 0x1000);
    iVar18 = uVar19 + (int)local_80 + (uVar22 >> 6 | uVar22 << 0x1a) +
             ((uVar9 ^ uVar12) & uVar25 ^ uVar12);
    auVar43 = VectorAdd(pauVar11[-0xc],auVar35,4);
    local_80._4_4_ = auVar40._4_4_;
    uVar23 = uVar23 + iVar18;
    uVar28 = iVar18 + (uVar20 >> 2 | uVar20 << 0x1e) + (uVar14 & (uVar16 ^ uVar17) ^ uVar17);
    uVar19 = uVar23 ^ (uVar23 >> 5 | uVar23 * 0x8000000) ^ (uVar23 >> 0x13 | uVar23 * 0x2000);
    uVar14 = uVar28 ^ (uVar28 >> 0xb | uVar28 * 0x200000) ^ (uVar28 >> 0x14 | uVar28 * 0x1000);
    iVar18 = uVar12 + local_80._4_4_ + (uVar19 >> 6 | uVar19 << 0x1a) +
             ((uVar25 ^ uVar9) & uVar23 ^ uVar9);
    local_78._0_4_ = auVar40._8_4_;
    uVar21 = uVar21 + iVar18;
    uVar12 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
             ((uVar16 ^ uVar17) & (uVar28 ^ uVar16) ^ uVar16);
    uVar19 = uVar21 ^ (uVar21 >> 5 | uVar21 * 0x8000000) ^ (uVar21 >> 0x13 | uVar21 * 0x2000);
    uVar14 = uVar12 ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^ (uVar12 >> 0x14 | uVar12 * 0x1000);
    iVar18 = uVar9 + (int)local_78 + (uVar19 >> 6 | uVar19 << 0x1a) +
             ((uVar23 ^ uVar25) & uVar21 ^ uVar25);
    local_78._4_4_ = auVar40._12_4_;
    uVar17 = uVar17 + iVar18;
    uVar26 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
             ((uVar28 ^ uVar16) & (uVar12 ^ uVar28) ^ uVar28);
    uVar9 = uVar17 ^ (uVar17 >> 5 | uVar17 * 0x8000000) ^ (uVar17 >> 0x13 | uVar17 * 0x2000);
    uVar14 = uVar26 ^ (uVar26 >> 0xb | uVar26 * 0x200000) ^ (uVar26 >> 0x14 | uVar26 * 0x1000);
    iVar18 = uVar25 + local_78._4_4_ + (uVar9 >> 6 | uVar9 << 0x1a) +
             ((uVar21 ^ uVar23) & uVar17 ^ uVar23);
    local_70._0_4_ = auVar41._0_4_;
    uVar16 = uVar16 + iVar18;
    local_78 = auVar43._8_8_;
    uVar24 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
             ((uVar12 ^ uVar28) & (uVar26 ^ uVar12) ^ uVar12);
    uVar25 = uVar16 ^ (uVar16 >> 5 | uVar16 * 0x8000000) ^ (uVar16 >> 0x13 | uVar16 * 0x2000);
    auVar36 = vrev(pauVar10[1],1);
    uVar14 = uVar24 ^ (uVar24 >> 0xb | uVar24 * 0x200000) ^ (uVar24 >> 0x14 | uVar24 * 0x1000);
    iVar18 = uVar23 + (uint)local_70 + (uVar25 >> 6 | uVar25 << 0x1a) +
             ((uVar17 ^ uVar21) & uVar16 ^ uVar21);
    auVar37 = VectorAdd(pauVar11[-0xb],auVar36,4);
    local_70._4_4_ = auVar41._4_4_;
    uVar28 = uVar28 + iVar18;
    uVar22 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
             ((uVar26 ^ uVar12) & (uVar24 ^ uVar26) ^ uVar26);
    uVar23 = uVar28 ^ (uVar28 >> 5 | uVar28 * 0x8000000) ^ (uVar28 >> 0x13 | uVar28 * 0x2000);
    uVar14 = uVar22 ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^ (uVar22 >> 0x14 | uVar22 * 0x1000);
    iVar18 = uVar21 + local_70._4_4_ + (uVar23 >> 6 | uVar23 << 0x1a) +
             ((uVar16 ^ uVar17) & uVar28 ^ uVar17);
    local_68._0_4_ = auVar41._8_4_;
    uVar12 = uVar12 + iVar18;
    uVar21 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
             ((uVar24 ^ uVar26) & (uVar22 ^ uVar24) ^ uVar24);
    uVar23 = uVar12 ^ (uVar12 >> 5 | uVar12 * 0x8000000) ^ (uVar12 >> 0x13 | uVar12 * 0x2000);
    uVar14 = uVar21 ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^ (uVar21 >> 0x14 | uVar21 * 0x1000);
    iVar18 = uVar17 + (uint)local_68 + (uVar23 >> 6 | uVar23 << 0x1a) +
             ((uVar28 ^ uVar16) & uVar12 ^ uVar16);
    local_68._4_4_ = auVar41._12_4_;
    uVar26 = uVar26 + iVar18;
    uVar20 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
             ((uVar22 ^ uVar24) & (uVar21 ^ uVar22) ^ uVar22);
    uVar17 = uVar26 ^ (uVar26 >> 5 | uVar26 * 0x8000000) ^ (uVar26 >> 0x13 | uVar26 * 0x2000);
    uVar14 = uVar20 ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^ (uVar20 >> 0x14 | uVar20 * 0x1000);
    iVar18 = uVar16 + local_68._4_4_ + (uVar17 >> 6 | uVar17 << 0x1a) +
             ((uVar12 ^ uVar28) & uVar26 ^ uVar28);
    local_60._0_4_ = auVar42._0_4_;
    uVar24 = uVar24 + iVar18;
    local_70 = auVar37._0_8_;
    local_68 = auVar37._8_8_;
    uVar25 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
             ((uVar21 ^ uVar22) & (uVar20 ^ uVar21) ^ uVar21);
    uVar16 = uVar24 ^ (uVar24 >> 5 | uVar24 * 0x8000000) ^ (uVar24 >> 0x13 | uVar24 * 0x2000);
    auVar37 = vrev(pauVar10[2],1);
    uVar14 = uVar25 ^ (uVar25 >> 0xb | uVar25 * 0x200000) ^ (uVar25 >> 0x14 | uVar25 * 0x1000);
    iVar18 = uVar28 + (uint)local_60 + (uVar16 >> 6 | uVar16 << 0x1a) +
             ((uVar26 ^ uVar12) & uVar24 ^ uVar12);
    auVar38 = VectorAdd(pauVar11[-10],auVar37,4);
    local_60._4_4_ = auVar42._4_4_;
    uVar22 = uVar22 + iVar18;
    uVar19 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
             ((uVar20 ^ uVar21) & (uVar25 ^ uVar20) ^ uVar20);
    uVar16 = uVar22 ^ (uVar22 >> 5 | uVar22 * 0x8000000) ^ (uVar22 >> 0x13 | uVar22 * 0x2000);
    uVar14 = uVar19 ^ (uVar19 >> 0xb | uVar19 * 0x200000) ^ (uVar19 >> 0x14 | uVar19 * 0x1000);
    iVar18 = uVar12 + local_60._4_4_ + (uVar16 >> 6 | uVar16 << 0x1a) +
             ((uVar24 ^ uVar26) & uVar22 ^ uVar26);
    local_58._0_4_ = auVar42._8_4_;
    uVar21 = uVar21 + iVar18;
    uVar12 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
             ((uVar25 ^ uVar20) & (uVar19 ^ uVar25) ^ uVar25);
    uVar16 = uVar21 ^ (uVar21 >> 5 | uVar21 * 0x8000000) ^ (uVar21 >> 0x13 | uVar21 * 0x2000);
    uVar14 = uVar12 ^ (uVar12 >> 0xb | uVar12 * 0x200000) ^ (uVar12 >> 0x14 | uVar12 * 0x1000);
    iVar18 = uVar26 + (uint)local_58 + (uVar16 >> 6 | uVar16 << 0x1a) +
             ((uVar22 ^ uVar24) & uVar21 ^ uVar24);
    local_58._4_4_ = auVar42._12_4_;
    uVar20 = uVar20 + iVar18;
    uVar9 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
            ((uVar19 ^ uVar25) & (uVar12 ^ uVar19) ^ uVar19);
    uVar16 = uVar20 ^ (uVar20 >> 5 | uVar20 * 0x8000000) ^ (uVar20 >> 0x13 | uVar20 * 0x2000);
    uVar14 = uVar9 ^ (uVar9 >> 0xb | uVar9 * 0x200000) ^ (uVar9 >> 0x14 | uVar9 * 0x1000);
    iVar18 = uVar24 + local_58._4_4_ + (uVar16 >> 6 | uVar16 << 0x1a) +
             ((uVar21 ^ uVar22) & uVar20 ^ uVar22);
    local_50._0_4_ = auVar39._0_4_;
    uVar25 = uVar25 + iVar18;
    local_60 = auVar38._0_8_;
    local_58 = auVar38._8_8_;
    uVar24 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
             ((uVar12 ^ uVar19) & (uVar9 ^ uVar12) ^ uVar12);
    uVar16 = uVar25 ^ (uVar25 >> 5 | uVar25 * 0x8000000) ^ (uVar25 >> 0x13 | uVar25 * 0x2000);
    auVar38 = vrev(pauVar10[3],1);
    uVar14 = uVar24 ^ (uVar24 >> 0xb | uVar24 * 0x200000) ^ (uVar24 >> 0x14 | uVar24 * 0x1000);
    iVar18 = uVar22 + (uint)local_50 + (uVar16 >> 6 | uVar16 << 0x1a) +
             ((uVar20 ^ uVar21) & uVar25 ^ uVar21);
    auVar40 = VectorAdd(pauVar11[-9],auVar38,4);
    local_50._4_4_ = auVar39._4_4_;
    uVar19 = uVar19 + iVar18;
    uVar23 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) + ((uVar9 ^ uVar12) & (uVar24 ^ uVar9) ^ uVar9)
    ;
    uVar16 = uVar19 ^ (uVar19 >> 5 | uVar19 * 0x8000000) ^ (uVar19 >> 0x13 | uVar19 * 0x2000);
    uVar14 = uVar23 ^ (uVar23 >> 0xb | uVar23 * 0x200000) ^ (uVar23 >> 0x14 | uVar23 * 0x1000);
    iVar18 = uVar21 + local_50._4_4_ + (uVar16 >> 6 | uVar16 << 0x1a) +
             ((uVar25 ^ uVar20) & uVar19 ^ uVar20);
    local_48._0_4_ = auVar39._8_4_;
    uVar12 = uVar12 + iVar18;
    uVar21 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
             ((uVar24 ^ uVar9) & (uVar23 ^ uVar24) ^ uVar24);
    uVar16 = uVar12 ^ (uVar12 >> 5 | uVar12 * 0x8000000) ^ (uVar12 >> 0x13 | uVar12 * 0x2000);
    uVar14 = uVar21 ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^ (uVar21 >> 0x14 | uVar21 * 0x1000);
    iVar18 = uVar20 + (uint)local_48 + (uVar16 >> 6 | uVar16 << 0x1a) +
             ((uVar19 ^ uVar25) & uVar12 ^ uVar25);
    local_48._4_4_ = auVar39._12_4_;
    uVar9 = uVar9 + iVar18;
    uVar17 = iVar18 + (uVar14 >> 2 | uVar14 << 0x1e) +
             ((uVar23 ^ uVar24) & (uVar21 ^ uVar23) ^ uVar23);
    uVar16 = uVar9 ^ (uVar9 >> 5 | uVar9 * 0x8000000) ^ (uVar9 >> 0x13 | uVar9 * 0x2000);
    uVar14 = uVar17 ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^ (uVar17 >> 0x14 | uVar17 * 0x1000);
    iVar15 = uVar25 + local_48._4_4_ + (uVar16 >> 6 | uVar16 << 0x1a) +
             ((uVar12 ^ uVar19) & uVar9 ^ uVar19);
    local_50 = auVar40._0_8_;
    local_48 = auVar40._8_8_;
    iVar27 = iVar15 + (uVar14 >> 2 | uVar14 << 0x1e) +
             ((uVar21 ^ uVar23) & (uVar17 ^ uVar21) ^ uVar21) + *(int *)*param_1;
    uVar17 = uVar17 + *(int *)(*param_1 + 4);
    iVar29 = *(int *)(param_1[1] + 4);
    uVar21 = uVar21 + *(int *)(*param_1 + 8);
    iVar13 = *(int *)(param_1[1] + 8);
    uVar23 = uVar23 + *(int *)(*param_1 + 0xc);
    iVar18 = *(int *)(param_1[1] + 0xc);
    uVar25 = uVar24 + iVar15 + *(int *)param_1[1];
    *(int *)*param_1 = iVar27;
    uVar9 = uVar9 + iVar29;
    *(uint *)(*param_1 + 4) = uVar17;
    uVar12 = uVar12 + iVar13;
    *(uint *)(*param_1 + 8) = uVar21;
    uVar19 = uVar19 + iVar18;
    *(uint *)(*param_1 + 0xc) = uVar23;
    *(uint *)param_1[1] = uVar25;
    *(uint *)(param_1[1] + 4) = uVar9;
    *(uint *)(param_1[1] + 8) = uVar12;
    *(uint *)(param_1[1] + 0xc) = uVar19;
    if (bVar32) break;
    local_80._0_4_ = auVar43._0_4_;
    uVar16 = 0;
    uVar14 = uVar17 ^ uVar21;
    iVar18 = (int)local_80;
    pauVar10 = pauVar11 + -8;
    uVar49 = auVar43._0_8_;
  }
  return;
}

