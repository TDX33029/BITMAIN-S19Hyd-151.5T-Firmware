// FUN_0176df0c @ 0176df0c size=1988 calls_out=12 calls_in=0
// strings: 

undefined4 FUN_0176df0c(int param_1,uint *param_2,int param_3)

{
  ushort uVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  ushort *puVar11;
  ushort *puVar10;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  short *psVar16;
  uint *puVar17;
  undefined4 local_184c;
  ushort local_1820 [768];
  uint auStack_1220 [127];
  int local_1024;
  uint local_c20;
  undefined4 uStack_c1c;
  undefined4 uStack_c18;
  undefined4 uStack_c14;
  undefined4 local_c10;
  undefined4 uStack_c0c;
  undefined4 uStack_c08;
  undefined4 uStack_c04;
  uint auStack_c00 [264];
  uint auStack_7e0 [8];
  uint local_7c0 [191];
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
  FUN_017572d0(param_3 + 0x480,0x4a0,&local_c20,0);
  puVar12 = (uint *)(param_3 + 0x920);
  iVar5 = FUN_016dd50a(puVar12,&local_c20,0x20);
  if (iVar5 != 0) {
    FUN_0177aaa0(&local_c20,0x20);
    local_184c = 0xffffffff;
LAB_0176e63c:
    if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2b78();
    }
    return local_184c;
  }
  FUN_0177aaa0(&local_c20,0x20);
  puVar14 = param_2;
  puVar13 = auStack_1220;
  do {
    puVar15 = puVar14 + 0x50;
    FUN_01703054(puVar13,puVar14);
    puVar13 = puVar13 + 0x80;
    puVar14 = puVar15;
  } while (param_2 + 0xf0 != puVar15);
  pbVar6 = (byte *)((int)param_2 + 0x3bf);
  puVar11 = local_2c0 + 1;
  do {
    pbVar6 = pbVar6 + 1;
    bVar3 = *pbVar6;
    puVar11[-1] = (ushort)((bVar3 & 0xf) * 0xd01 + 8 >> 4);
    puVar10 = puVar11 + 2;
    *puVar11 = (ushort)((uint)(bVar3 >> 4) * 0xd01 + 8 >> 4);
    puVar11 = puVar10;
  } while (auStack_be != puVar10);
  pbVar6 = (byte *)(param_3 + 0x180);
  puVar11 = local_1820;
  do {
    pbVar7 = pbVar6 + -0x180;
    puVar10 = puVar11;
    do {
      bVar3 = pbVar7[1];
      puVar10[1] = (ushort)pbVar7[2] << 4 | (ushort)(bVar3 >> 4);
      pbVar8 = pbVar7 + 3;
      *puVar10 = (ushort)*pbVar7 | (bVar3 & 0xf) << 8;
      pbVar7 = pbVar8;
      puVar10 = puVar10 + 2;
    } while (pbVar6 != pbVar8);
    pbVar6 = pbVar6 + 0x180;
    puVar11 = puVar11 + 0x100;
  } while ((byte *)(param_3 + 0x600) != pbVar6);
  FUN_01708628(auStack_1220);
  puVar14 = local_7c0;
  puVar13 = auStack_1220;
  do {
    psVar16 = &DAT_00428fbe;
    puVar15 = puVar14;
    puVar17 = puVar13;
    do {
      psVar16 = psVar16 + 1;
      iVar5 = (int)*(short *)((int)puVar17 + 2) * (int)*psVar16;
      iVar4 = (int)*(short *)((int)puVar17 + 6) * (int)-*psVar16;
      *(short *)puVar15 = (short)((uint)((short)((short)iVar5 * -0xcff) * -0xd01 + iVar5) >> 0x10);
      *(short *)((int)puVar15 + 2) =
           (short)((uint)((short)((short)iVar4 * -0xcff) * -0xd01 + iVar4) >> 0x10);
      puVar15 = puVar15 + 1;
      puVar17 = puVar17 + 2;
    } while (psVar16 != (short *)&DAT_0042903e);
    puVar13 = puVar13 + 0x80;
    puVar14 = puVar14 + 0x40;
  } while (&local_c20 != puVar13);
  FUN_01703498(local_4c0,local_1820,auStack_1220,local_7c0);
  FUN_01703114(local_4c0);
  psVar16 = &sStack_4c2;
  puVar10 = &uStack_2c2;
  puVar11 = puVar10;
  do {
    puVar11 = puVar11 + 1;
    psVar16 = psVar16 + 1;
    *puVar11 = *puVar11 - *psVar16;
  } while (puVar11 != local_2c0 + 0xff);
  do {
    puVar10 = puVar10 + 1;
    uVar1 = *puVar10 + (short)((short)*puVar10 * 0x4ebf + 0x2000000 >> 0x1a) * -0xd01;
    *puVar10 = uVar1 ^ (uVar1 + 0xd01 ^ uVar1) &
                       (ushort)(-((uint)(int)(short)uVar1 >> 0x10) >> 0x10);
  } while (puVar10 != local_2c0 + 0xff);
  pbVar6 = &bStack_81;
  puVar11 = local_2c0;
  do {
    puVar10 = puVar11 + 8;
    pbVar6 = pbVar6 + 1;
    *pbVar6 = (byte)(((uint)puVar11[2] * 0x13afb8 + 0x40000000 >> 0x1f) << 2) |
              (byte)(((uint)puVar11[1] * 0x13afb8 + 0x40000000 >> 0x1f) << 1) |
              (byte)((uint)*puVar11 * 0x13afb8 + 0x40000000 >> 0x1f) |
              (byte)(((uint)puVar11[3] * 0x13afb8 + 0x40000000 >> 0x1f) << 3) |
              (byte)(((uint)puVar11[4] * 0x13afb8 + 0x40000000 >> 0x1f) << 4) |
              (byte)(((uint)puVar11[5] * 0x13afb8 + 0x40000000 >> 0x1f) << 5) |
              (byte)(((uint)puVar11[6] * 0x13afb8 + 0x40000000 >> 0x1f) << 6) |
              (byte)(((uint)puVar11[7] * 0x13afb8 + 0x40000000 >> 0x1f) << 7);
    puVar11 = puVar10;
  } while (&uStack_c0 != puVar10);
  FUN_0177aaa0(local_1820,0x600);
  FUN_0177aaa0(auStack_1220,0x600);
  FUN_0177aaa0(local_7c0,0x300);
  FUN_0177aaa0(local_2c0,0x200);
  FUN_0177aaa0(local_4c0,0x200);
  if ((auStack_40 <= puVar12 || puVar12 <= &local_60) &&
     ((puVar14 = (uint *)(param_3 + 0x940), &local_60 <= puVar12 || (puVar14 <= &local_60)))) {
    local_60 = *(uint *)(param_3 + 0x920);
    uStack_5c = *(undefined4 *)(param_3 + 0x924);
    uStack_58 = *(undefined4 *)(param_3 + 0x928);
    uStack_54 = *(undefined4 *)(param_3 + 0x92c);
    uStack_4c = *(undefined4 *)(param_3 + 0x934);
    uStack_48 = *(undefined4 *)(param_3 + 0x938);
    local_50 = *(undefined4 *)(param_3 + 0x930);
    uStack_44 = *(undefined4 *)(param_3 + 0x93c);
    FUN_017573c4(local_80,0x40,&uStack_c0);
    FUN_0176d520(&local_c20,local_80,param_3 + 0x480,auStack_a0);
    uVar9 = 0;
    puVar12 = &local_c20;
    puVar13 = param_2;
    do {
      puVar15 = puVar12 + 1;
      uVar9 = uVar9 | *puVar13 ^ *puVar12;
      puVar12 = puVar15;
      puVar13 = puVar13 + 1;
    } while (puVar15 != auStack_7e0);
    if ((puVar14 <= &local_c20 || auStack_c00 <= puVar14) &&
       ((&local_c20 <= puVar14 || ((uint *)(param_3 + 0x960) <= &local_c20)))) {
      local_c20 = *(uint *)(param_3 + 0x940);
      uStack_c1c = *(undefined4 *)(param_3 + 0x944);
      uStack_c18 = *(undefined4 *)(param_3 + 0x948);
      uStack_c14 = *(undefined4 *)(param_3 + 0x94c);
      local_c10 = *(undefined4 *)(param_3 + 0x950);
      uStack_c0c = *(undefined4 *)(param_3 + 0x954);
      uStack_c08 = *(undefined4 *)(param_3 + 0x958);
      uStack_c04 = *(undefined4 *)(param_3 + 0x95c);
      if ((param_2 <= auStack_c00 || local_7c0 <= param_2) &&
         ((auStack_c00 <= param_2 || (param_2 + 0x110 <= auStack_c00)))) {
        FUN_016dd1aa(auStack_c00,param_2,0x440);
        FUN_01757bf4(&local_c20,0x460,param_1,0x20);
        pbVar6 = (byte *)(param_1 + -1);
        puVar11 = &uStack_c0;
        do {
          puVar10 = (ushort *)((int)puVar11 + 1);
          pbVar6 = pbVar6 + 1;
          *pbVar6 = (byte)*puVar11 ^
                    (*pbVar6 ^ (byte)*puVar11) &
                    (byte)(-(-(uVar9 & 0xff | (uVar9 & 0xffff) >> 8 | (uVar9 & 0xffffff) >> 0x10 |
                              uVar9 >> 0x18) >> 0x18) >> 0x18);
          puVar11 = puVar10;
        } while (auStack_a0 != puVar10);
        FUN_0177aaa0(local_80,0x40);
        FUN_0177aaa0(&uStack_c0,0x40);
        FUN_0177aaa0(&local_c20,0x460);
        local_184c = 0;
        goto LAB_0176e63c;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)software_udf(0,0x176e694);
  (*pcVar2)();
}

