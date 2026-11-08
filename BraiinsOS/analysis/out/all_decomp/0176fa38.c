// FUN_0176fa38 @ 0176fa38 size=1980 calls_out=12 calls_in=0
// strings: 

undefined4 FUN_0176fa38(int param_1,uint *param_2,int param_3)

{
  ushort uVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  ushort *puVar12;
  ushort *puVar11;
  uint *puVar13;
  uint *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint *puVar18;
  short *psVar19;
  undefined4 local_120c;
  ushort local_11e0 [222];
  int local_1024;
  undefined1 auStack_de0 [512];
  undefined1 auStack_be0 [512];
  uint local_9e0;
  undefined4 uStack_9dc;
  undefined4 uStack_9d8;
  undefined4 uStack_9d4;
  undefined4 local_9d0;
  undefined4 uStack_9cc;
  undefined4 uStack_9c8;
  undefined4 uStack_9c4;
  uint auStack_9c0 [184];
  uint auStack_6e0 [8];
  uint local_6c0 [127];
  short sStack_4c2;
  short local_4c0 [255];
  ushort uStack_2c2;
  ushort local_2c0 [256];
  ushort uStack_c0;
  ushort auStack_be [15];
  ushort auStack_a0 [15];
  byte bStack_81;
  byte local_80 [32];
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
  FUN_017572d0(param_3 + 0x300,800,&local_9e0,0);
  puVar14 = (uint *)(param_3 + 0x620);
  iVar6 = FUN_016dd50a(puVar14,&local_9e0,0x20);
  if (iVar6 != 0) {
    FUN_0177aaa0(&local_9e0,0x20);
    local_120c = 0xffffffff;
LAB_01770158:
    if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2b78();
    }
    return local_120c;
  }
  FUN_0177aaa0(&local_9e0,0x20);
  FUN_01703054(auStack_de0,param_2);
  FUN_01703054(auStack_be0,param_2 + 0x50);
  pbVar7 = (byte *)((int)param_2 + 0x27f);
  puVar12 = local_2c0 + 1;
  do {
    pbVar7 = pbVar7 + 1;
    bVar3 = *pbVar7;
    puVar12[-1] = (ushort)((bVar3 & 0xf) * 0xd01 + 8 >> 4);
    puVar11 = puVar12 + 2;
    *puVar12 = (ushort)((uint)(bVar3 >> 4) * 0xd01 + 8 >> 4);
    puVar12 = puVar11;
  } while (auStack_be != puVar11);
  pbVar7 = (byte *)(param_3 + 0x180);
  puVar12 = local_11e0;
  do {
    pbVar8 = pbVar7 + -0x180;
    puVar11 = puVar12;
    do {
      bVar3 = pbVar8[1];
      puVar11[1] = (ushort)pbVar8[2] << 4 | (ushort)(bVar3 >> 4);
      pbVar9 = pbVar8 + 3;
      *puVar11 = (ushort)*pbVar8 | (bVar3 & 0xf) << 8;
      pbVar8 = pbVar9;
      puVar11 = puVar11 + 2;
    } while (pbVar7 != pbVar9);
    pbVar7 = pbVar7 + 0x180;
    puVar12 = puVar12 + 0x100;
  } while ((byte *)(param_3 + 0x480) != pbVar7);
  FUN_01708030(auStack_de0);
  iVar6 = 2;
  puVar15 = auStack_de0;
  puVar18 = local_6c0;
  while( true ) {
    psVar19 = &DAT_00428fbe;
    puVar16 = puVar15;
    puVar17 = puVar18;
    do {
      psVar19 = psVar19 + 1;
      iVar4 = (int)*(short *)(puVar16 + 2) * (int)*psVar19;
      iVar5 = (int)*(short *)(puVar16 + 6) * (int)-*psVar19;
      *(short *)puVar17 = (short)((uint)((short)((short)iVar4 * -0xcff) * -0xd01 + iVar4) >> 0x10);
      *(short *)((int)puVar17 + 2) =
           (short)((uint)((short)((short)iVar5 * -0xcff) * -0xd01 + iVar5) >> 0x10);
      puVar16 = puVar16 + 8;
      puVar17 = puVar17 + 1;
    } while (psVar19 != (short *)&DAT_0042903e);
    puVar18 = puVar18 + 0x40;
    puVar15 = puVar15 + 0x200;
    if (iVar6 == 1) break;
    iVar6 = 1;
  }
  FUN_017032a0(local_4c0,local_11e0,auStack_de0,local_6c0);
  FUN_01703114(local_4c0);
  psVar19 = &sStack_4c2;
  puVar11 = &uStack_2c2;
  puVar12 = puVar11;
  do {
    puVar12 = puVar12 + 1;
    psVar19 = psVar19 + 1;
    *puVar12 = *puVar12 - *psVar19;
  } while (puVar12 != local_2c0 + 0xff);
  do {
    puVar11 = puVar11 + 1;
    uVar1 = *puVar11 + (short)((short)*puVar11 * 0x4ebf + 0x2000000 >> 0x1a) * -0xd01;
    *puVar11 = uVar1 ^ (uVar1 + 0xd01 ^ uVar1) &
                       (ushort)(-((uint)(int)(short)uVar1 >> 0x10) >> 0x10);
  } while (puVar11 != local_2c0 + 0xff);
  pbVar7 = &bStack_81;
  puVar12 = local_2c0;
  do {
    puVar11 = puVar12 + 8;
    pbVar7 = pbVar7 + 1;
    *pbVar7 = (byte)(((uint)puVar12[2] * 0x13afb8 + 0x40000000 >> 0x1f) << 2) |
              (byte)(((uint)puVar12[1] * 0x13afb8 + 0x40000000 >> 0x1f) << 1) |
              (byte)((uint)*puVar12 * 0x13afb8 + 0x40000000 >> 0x1f) |
              (byte)(((uint)puVar12[3] * 0x13afb8 + 0x40000000 >> 0x1f) << 3) |
              (byte)(((uint)puVar12[4] * 0x13afb8 + 0x40000000 >> 0x1f) << 4) |
              (byte)(((uint)puVar12[5] * 0x13afb8 + 0x40000000 >> 0x1f) << 5) |
              (byte)(((uint)puVar12[6] * 0x13afb8 + 0x40000000 >> 0x1f) << 6) |
              (byte)(((uint)puVar12[7] * 0x13afb8 + 0x40000000 >> 0x1f) << 7);
    puVar12 = puVar11;
  } while (&uStack_c0 != puVar11);
  FUN_0177aaa0(local_11e0,0x400);
  FUN_0177aaa0(auStack_de0,0x400);
  FUN_0177aaa0(local_6c0,0x200);
  FUN_0177aaa0(local_2c0,0x200);
  FUN_0177aaa0(local_4c0,0x200);
  if ((auStack_40 <= puVar14 || puVar14 <= &local_60) &&
     ((puVar18 = (uint *)(param_3 + 0x640), &local_60 <= puVar14 || (puVar18 <= &local_60)))) {
    local_60 = *(uint *)(param_3 + 0x620);
    uStack_5c = *(undefined4 *)(param_3 + 0x624);
    uStack_58 = *(undefined4 *)(param_3 + 0x628);
    uStack_54 = *(undefined4 *)(param_3 + 0x62c);
    uStack_4c = *(undefined4 *)(param_3 + 0x634);
    uStack_48 = *(undefined4 *)(param_3 + 0x638);
    local_50 = *(undefined4 *)(param_3 + 0x630);
    uStack_44 = *(undefined4 *)(param_3 + 0x63c);
    FUN_017573c4(local_80,0x40,&uStack_c0);
    FUN_0176e8ac(&local_9e0,local_80,param_3 + 0x300,auStack_a0);
    uVar10 = 0;
    puVar14 = &local_9e0;
    puVar17 = param_2;
    do {
      puVar13 = puVar14 + 1;
      uVar10 = uVar10 | *puVar17 ^ *puVar14;
      puVar14 = puVar13;
      puVar17 = puVar17 + 1;
    } while (puVar13 != auStack_6e0);
    if ((puVar18 <= &local_9e0 || auStack_9c0 <= puVar18) &&
       ((&local_9e0 <= puVar18 || ((uint *)(param_3 + 0x660) <= &local_9e0)))) {
      local_9e0 = *(uint *)(param_3 + 0x640);
      uStack_9dc = *(undefined4 *)(param_3 + 0x644);
      uStack_9d8 = *(undefined4 *)(param_3 + 0x648);
      uStack_9d4 = *(undefined4 *)(param_3 + 0x64c);
      local_9d0 = *(undefined4 *)(param_3 + 0x650);
      uStack_9cc = *(undefined4 *)(param_3 + 0x654);
      uStack_9c8 = *(undefined4 *)(param_3 + 0x658);
      uStack_9c4 = *(undefined4 *)(param_3 + 0x65c);
      if ((param_2 <= auStack_9c0 || local_6c0 <= param_2) &&
         ((auStack_9c0 <= param_2 || (param_2 + 0xc0 <= auStack_9c0)))) {
        FUN_016dd1aa(auStack_9c0,param_2,0x300);
        FUN_01757bf4(&local_9e0,800,param_1,0x20);
        pbVar7 = (byte *)(param_1 + -1);
        puVar12 = &uStack_c0;
        do {
          puVar11 = (ushort *)((int)puVar12 + 1);
          pbVar7 = pbVar7 + 1;
          *pbVar7 = (byte)*puVar12 ^
                    (*pbVar7 ^ (byte)*puVar12) &
                    (byte)(-(-(uVar10 & 0xff | (uVar10 & 0xffff) >> 8 | (uVar10 & 0xffffff) >> 0x10
                              | uVar10 >> 0x18) >> 0x18) >> 0x18);
          puVar12 = puVar11;
        } while (auStack_a0 != puVar11);
        FUN_0177aaa0(local_80,0x40);
        FUN_0177aaa0(&uStack_c0,0x40);
        FUN_0177aaa0(&local_9e0,800);
        local_120c = 0;
        goto LAB_01770158;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)software_udf(0,0x17701b8);
  (*pcVar2)();
}

