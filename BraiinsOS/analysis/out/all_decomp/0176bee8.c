// FUN_0176bee8 @ 0176bee8 size=2748 calls_out=11 calls_in=0
// strings: 

undefined4 FUN_0176bee8(int param_1,uint *param_2,int param_3)

{
  ushort uVar1;
  code *pcVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint *puVar16;
  uint *puVar17;
  ushort *puVar18;
  uint uVar19;
  uint *puVar20;
  ushort *puVar21;
  uint *puVar22;
  uint *puVar23;
  short *psVar24;
  byte *pbVar25;
  undefined4 local_1f28;
  uint *local_1f0c;
  ushort local_1f00 [1024];
  uint local_1700 [439];
  int local_1024;
  uint local_f00 [392];
  uint auStack_8e0 [8];
  uint local_8c0 [255];
  short sStack_4c2;
  undefined1 local_4c0 [510];
  ushort uStack_2c2;
  uint local_2c0 [127];
  ushort uStack_c2;
  uint auStack_c0 [8];
  uint auStack_a0 [7];
  byte bStack_81;
  undefined1 local_80 [32];
  uint local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint auStack_40 [5];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  local_1024 = param_1;
  FUN_017572d0(param_3 + 0x600,0x620,local_f00,0);
  puVar20 = (uint *)(param_3 + 0xc20);
  iVar13 = FUN_016dd50a(puVar20,local_f00,0x20);
  if (iVar13 != 0) {
    FUN_0177aaa0(local_f00,0x20);
    local_1f28 = 0xffffffff;
LAB_0176c910:
    if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2b78();
    }
    return local_1f28;
  }
  FUN_0177aaa0(local_f00,0x20);
  local_1f0c = param_2 + 0x58;
  puVar23 = local_1700;
  do {
    puVar16 = local_1f0c + -0x58;
    puVar22 = puVar23;
    do {
      bVar3 = *(byte *)((int)puVar16 + 2);
      puVar17 = (uint *)((int)puVar16 + 0xb);
      bVar4 = *(byte *)((int)puVar16 + 3);
      uVar19 = puVar16[1];
      bVar5 = *(byte *)((int)puVar16 + 5);
      bVar6 = *(byte *)((int)puVar16 + 1);
      bVar7 = *(byte *)((int)puVar16 + 6);
      bVar8 = *(byte *)((int)puVar16 + 7);
      uVar11 = puVar16[2];
      bVar9 = *(byte *)((int)puVar16 + 9);
      uVar12 = *puVar16;
      *(short *)(puVar22 + 2) =
           (short)(((bVar7 & 0x7f) << 4 | (uint)(bVar5 >> 4)) * 0xd01 + 0x400 >> 0xb);
      *(short *)((int)puVar22 + 10) =
           (short)(((uint)(bVar7 >> 7) | (uint)bVar8 << 1 | ((byte)uVar11 & 3) << 9) * 0xd01 + 0x400
                  >> 0xb);
      *(short *)((int)puVar22 + 0xe) =
           (short)(((uint)(bVar9 >> 5) | (uint)*(byte *)((int)puVar16 + 10) << 3) * 0xd01 + 0x400 >>
                  0xb);
      *(short *)(puVar22 + 3) =
           (short)(((bVar9 & 0x1f) << 6 | (uint)(byte)((byte)uVar11 >> 2)) * 0xd01 + 0x400 >> 0xb);
      *puVar22 = ((ushort)uVar12 & 0x7ff) * 0xd01 + 0x400 >> 0xb |
                 (((bVar3 & 0x3f) << 5 | (uint)(bVar6 >> 3)) * 0xd01 + 0x400 >> 0xb) << 0x10;
      puVar22[1] = ((uint)(bVar3 >> 6) | (uint)bVar4 << 2 | ((byte)uVar19 & 1) << 10) * 0xd01 +
                   0x400 >> 0xb |
                   (((bVar5 & 0xf) << 7 | (uint)(byte)((byte)uVar19 >> 1)) * 0xd01 + 0x400 >> 0xb)
                   << 0x10;
      puVar16 = puVar17;
      puVar22 = puVar22 + 4;
    } while (local_1f0c != puVar17);
    puVar23 = puVar23 + 0x80;
    local_1f0c = local_1f0c + 0x58;
  } while (param_2 + 0x1b8 != local_1f0c);
  puVar23 = param_2;
  puVar16 = local_2c0;
  do {
    bVar3 = *(byte *)((int)puVar23 + 0x581);
    puVar22 = puVar16 + 4;
    bVar4 = *(byte *)((int)puVar23 + 0x582);
    uVar19 = puVar23[0x160];
    bVar5 = *(byte *)((int)puVar23 + 0x583);
    uVar11 = puVar23[0x161];
    *(ushort *)(puVar16 + 2) = (ushort)(((bVar5 & 1) << 4 | (uint)(bVar4 >> 4)) * 0xd01 + 0x10 >> 5)
    ;
    *(ushort *)((int)puVar16 + 0xe) = (ushort)((uint)(byte)((byte)uVar11 >> 3) * 0xd01 + 0x10 >> 5);
    *(ushort *)((int)puVar16 + 10) = (ushort)(((bVar5 & 0x3f) >> 1) * 0xd01 + 0x10 >> 5);
    *(ushort *)(puVar16 + 3) =
         (ushort)((((byte)uVar11 & 7) << 2 | (uint)(bVar5 >> 6)) * 0xd01 + 0x10 >> 5);
    *puVar16 = ((byte)uVar19 & 0x1f) * 0xd01 + 0x10 >> 5 |
               (((bVar3 & 3) << 3 | (uint)(byte)((byte)uVar19 >> 5)) * 0xd01 + 0x10 >> 5) << 0x10;
    puVar16[1] = ((bVar3 & 0x7f) >> 2) * 0xd01 + 0x10 >> 5 |
                 (((bVar4 & 0xf) << 1 | (uint)(bVar3 >> 7)) * 0xd01 + 0x10 >> 5) << 0x10;
    puVar23 = (uint *)((int)puVar23 + 5);
    puVar16 = puVar22;
  } while (auStack_c0 != puVar22);
  pbVar25 = (byte *)(param_3 + 0x180);
  puVar21 = local_1f00;
  do {
    pbVar14 = pbVar25 + -0x180;
    puVar18 = puVar21;
    do {
      bVar3 = pbVar14[1];
      puVar18[1] = (ushort)pbVar14[2] << 4 | (ushort)(bVar3 >> 4);
      pbVar15 = pbVar14 + 3;
      *puVar18 = (ushort)*pbVar14 | (bVar3 & 0xf) << 8;
      pbVar14 = pbVar15;
      puVar18 = puVar18 + 2;
    } while (pbVar25 != pbVar15);
    pbVar25 = pbVar25 + 0x180;
    puVar21 = puVar21 + 0x100;
  } while ((byte *)(param_3 + 0x780) != pbVar25);
  FUN_017084e0(local_1700);
  puVar23 = local_1700;
  puVar16 = local_8c0;
  do {
    psVar24 = &DAT_00428fbe;
    puVar22 = puVar16;
    puVar17 = puVar23;
    do {
      psVar24 = psVar24 + 1;
      iVar13 = (int)*(short *)((int)puVar17 + 2) * (int)*psVar24;
      iVar10 = (int)*(short *)((int)puVar17 + 6) * (int)-*psVar24;
      *(short *)puVar22 = (short)((uint)((short)((short)iVar13 * -0xcff) * -0xd01 + iVar13) >> 0x10)
      ;
      *(short *)((int)puVar22 + 2) =
           (short)((uint)((short)((short)iVar10 * -0xcff) * -0xd01 + iVar10) >> 0x10);
      puVar22 = puVar22 + 1;
      puVar17 = puVar17 + 2;
    } while (psVar24 != (short *)&DAT_0042903e);
    puVar23 = puVar23 + 0x80;
    puVar16 = puVar16 + 0x40;
  } while (local_f00 != puVar23);
  FUN_01703610(local_4c0,local_1f00,local_1700,local_8c0);
  FUN_01703114(local_4c0);
  psVar24 = &sStack_4c2;
  puVar18 = &uStack_2c2;
  puVar21 = puVar18;
  do {
    puVar21 = puVar21 + 1;
    psVar24 = psVar24 + 1;
    *puVar21 = *puVar21 - *psVar24;
  } while (&uStack_c2 != puVar21);
  do {
    puVar18 = puVar18 + 1;
    uVar1 = *puVar18 + (short)((short)*puVar18 * 0x4ebf + 0x2000000 >> 0x1a) * -0xd01;
    *puVar18 = uVar1 ^ (uVar1 + 0xd01 ^ uVar1) &
                       (ushort)(-((uint)(int)(short)uVar1 >> 0x10) >> 0x10);
  } while (&uStack_c2 != puVar18);
  pbVar25 = &bStack_81;
  puVar23 = local_2c0;
  do {
    puVar16 = puVar23 + 4;
    pbVar25 = pbVar25 + 1;
    *pbVar25 = (byte)(((uint)(ushort)puVar23[1] * 0x13afb8 + 0x40000000 >> 0x1f) << 2) |
               (byte)(((uint)*(ushort *)((int)puVar23 + 2) * 0x13afb8 + 0x40000000 >> 0x1f) << 1) |
               (byte)((uint)(ushort)*puVar23 * 0x13afb8 + 0x40000000 >> 0x1f) |
               (byte)(((uint)*(ushort *)((int)puVar23 + 6) * 0x13afb8 + 0x40000000 >> 0x1f) << 3) |
               (byte)(((uint)(ushort)puVar23[2] * 0x13afb8 + 0x40000000 >> 0x1f) << 4) |
               (byte)(((uint)*(ushort *)((int)puVar23 + 10) * 0x13afb8 + 0x40000000 >> 0x1f) << 5) |
               (byte)(((uint)(ushort)puVar23[3] * 0x13afb8 + 0x40000000 >> 0x1f) << 6) |
               (byte)(((uint)*(ushort *)((int)puVar23 + 0xe) * 0x13afb8 + 0x40000000 >> 0x1f) << 7);
    puVar23 = puVar16;
  } while (auStack_c0 != puVar16);
  FUN_0177aaa0(local_1f00,0x800);
  FUN_0177aaa0(local_1700,0x800);
  FUN_0177aaa0(local_8c0,0x400);
  FUN_0177aaa0(local_2c0,0x200);
  FUN_0177aaa0(local_4c0,0x200);
  if ((auStack_40 <= puVar20 || puVar20 <= &local_60) &&
     ((puVar23 = (uint *)(param_3 + 0xc40), &local_60 <= puVar20 || (puVar23 <= &local_60)))) {
    local_60 = *(uint *)(param_3 + 0xc20);
    uStack_5c = *(undefined4 *)(param_3 + 0xc24);
    uStack_58 = *(undefined4 *)(param_3 + 0xc28);
    uStack_54 = *(undefined4 *)(param_3 + 0xc2c);
    uStack_4c = *(undefined4 *)(param_3 + 0xc34);
    uStack_48 = *(undefined4 *)(param_3 + 0xc38);
    local_50 = *(undefined4 *)(param_3 + 0xc30);
    uStack_44 = *(undefined4 *)(param_3 + 0xc3c);
    FUN_017573c4(local_80,0x40,auStack_c0);
    FUN_0176ae4c(local_f00,local_80,param_3 + 0x600,auStack_a0);
    uVar19 = 0;
    puVar20 = local_f00;
    puVar16 = param_2;
    do {
      puVar22 = puVar20 + 1;
      uVar19 = uVar19 | *puVar16 ^ *puVar20;
      puVar20 = puVar22;
      puVar16 = puVar16 + 1;
    } while (puVar22 != auStack_8e0);
    if ((puVar23 <= local_f00 || local_f00 + 8 <= puVar23) &&
       ((local_f00 <= puVar23 || ((uint *)(param_3 + 0xc60U) <= local_f00)))) {
      local_f00[0] = *(uint *)(param_3 + 0xc40);
      local_f00[1] = *(undefined4 *)(param_3 + 0xc44);
      local_f00[2] = *(undefined4 *)(param_3 + 0xc48);
      local_f00[3] = *(undefined4 *)(param_3 + 0xc4c);
      local_f00[4] = *(undefined4 *)(param_3 + 0xc50);
      puVar20 = local_f00 + 8;
      local_f00[5] = *(undefined4 *)(param_3 + 0xc54);
      local_f00[6] = *(undefined4 *)(param_3 + 0xc58);
      local_f00[7] = *(undefined4 *)(param_3 + 0xc5c);
      if ((param_2 <= puVar20 || local_8c0 <= param_2) &&
         ((puVar20 <= param_2 || (param_2 + 0x188 <= puVar20)))) {
        FUN_016dd1aa(local_f00 + 8,param_2,0x620);
        FUN_01757bf4(local_f00,0x640,param_1,0x20);
        pbVar25 = (byte *)(param_1 + -1);
        puVar20 = auStack_c0;
        do {
          puVar23 = (uint *)((int)puVar20 + 1);
          pbVar25 = pbVar25 + 1;
          *pbVar25 = (byte)*puVar20 ^
                     (*pbVar25 ^ (byte)*puVar20) &
                     (byte)(-(-(uVar19 & 0xff | (uVar19 & 0xffff) >> 8 | (uVar19 & 0xffffff) >> 0x10
                               | uVar19 >> 0x18) >> 0x18) >> 0x18);
          puVar20 = puVar23;
        } while (auStack_a0 != puVar23);
        FUN_0177aaa0(local_80,0x40);
        FUN_0177aaa0(auStack_c0,0x40);
        FUN_0177aaa0(local_f00,0x640);
        local_1f28 = 0;
        goto LAB_0176c910;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)software_udf(0,0x176c968);
  (*pcVar2)();
}

