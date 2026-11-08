// FUN_0176a368 @ 0176a368 size=1908 calls_out=7 calls_in=2
// strings: 

undefined8 FUN_0176a368(int param_1,int param_2,undefined4 *param_3)

{
  ushort uVar1;
  code *pcVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  short *psVar11;
  ushort *puVar12;
  ushort *puVar13;
  undefined2 *puVar14;
  ushort *puVar15;
  undefined2 *puVar16;
  undefined1 *puVar17;
  uint uVar18;
  undefined2 *puVar19;
  short *psVar20;
  undefined1 *puVar21;
  uint uVar22;
  undefined4 *puVar23;
  undefined2 *puVar24;
  undefined2 *puVar25;
  undefined4 *puVar26;
  undefined1 auStack_3da0 [3452];
  int local_3024;
  int local_2024;
  undefined2 local_1da0 [255];
  ushort uStack_1ba2;
  undefined1 local_1ba0 [512];
  undefined1 auStack_19a0 [512];
  undefined1 auStack_17a0 [512];
  undefined2 local_15a0 [255];
  ushort auStack_13a2 [447];
  int local_1024;
  short sStack_da2;
  undefined2 local_da0 [255];
  ushort uStack_ba2;
  undefined1 auStack_ba0 [512];
  undefined1 auStack_9a0 [512];
  undefined1 auStack_7a0 [512];
  undefined2 local_5a0 [512];
  undefined4 local_1a0 [8];
  undefined1 local_180;
  undefined1 local_17f;
  undefined1 local_140;
  undefined1 local_13f;
  undefined1 local_100;
  undefined1 local_ff;
  undefined1 local_c0;
  undefined1 local_bf;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 auStack_80 [8];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_40 [20];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  local_3024 = param_1;
  local_2024 = param_1;
  local_1024 = param_1;
  if ((param_3 <= &local_60 || local_40 <= param_3) &&
     ((&local_60 <= param_3 || (param_3 + 8 <= &local_60)))) {
    uStack_5c = param_3[1];
    local_60 = *param_3;
    uStack_58 = param_3[2];
    uStack_54 = param_3[3];
    local_50 = param_3[4];
    uStack_4c = param_3[5];
    uStack_48 = param_3[6];
    uStack_44 = param_3[7];
    local_40[0] = 4;
    FUN_017573c4(&local_60,0x21,&local_a0);
    puVar26 = local_1a0;
    do {
      uVar9 = uStack_94;
      uVar8 = uStack_98;
      uVar7 = uStack_9c;
      if (((puVar26 < &local_a0) && (&local_a0 < puVar26 + 8)) ||
         (puVar26 < auStack_80 && &local_a0 < puVar26)) goto LAB_0176aad8;
      puVar23 = puVar26 + 0x10;
      *puVar26 = local_a0;
      puVar26[1] = uVar7;
      puVar26[2] = uVar8;
      puVar26[3] = uVar9;
      uVar9 = uStack_84;
      uVar8 = uStack_88;
      uVar7 = uStack_8c;
      puVar26[4] = local_90;
      puVar26[5] = uVar7;
      puVar26[6] = uVar8;
      puVar26[7] = uVar9;
      puVar26 = puVar23;
    } while (&local_a0 != puVar23);
    uVar22 = 0;
    puVar21 = auStack_3da0;
    do {
      local_180 = 0;
      local_13f = (undefined1)(uVar22 + 1 >> 2);
      local_140 = 1;
      local_100 = 2;
      local_ff = (undefined1)(uVar22 + 2 >> 2);
      uVar18 = uVar22 + 3;
      local_17f = (undefined1)(uVar22 >> 2);
      uVar22 = uVar22 + 4;
      local_c0 = 3;
      local_bf = (undefined1)(uVar18 >> 2);
      FUN_017694a0(puVar21,puVar21 + 0x200,puVar21 + 0x400,puVar21 + 0x600);
      puVar21 = puVar21 + 0x800;
    } while (uVar22 != 0x10);
    FUN_0177aaa0(local_1a0,0x100);
    puVar24 = local_15a0;
    FUN_0176a0c0(local_1da0,local_1ba0,auStack_19a0,auStack_17a0,auStack_80,0,1,2,3);
    FUN_0176a0c0(local_da0,auStack_ba0,auStack_9a0,auStack_7a0,auStack_80,4,5,6,7);
    FUN_017084e0(local_1da0);
    FUN_017084e0(local_da0);
    puVar16 = local_5a0;
    puVar14 = local_1da0;
    do {
      psVar20 = &DAT_00428fbe;
      puVar19 = puVar16;
      puVar25 = puVar14;
      do {
        psVar20 = psVar20 + 1;
        iVar5 = (int)(short)puVar25[1] * (int)*psVar20;
        iVar6 = (int)(short)puVar25[3] * (int)-*psVar20;
        *puVar19 = (short)((uint)((short)((short)iVar5 * -0xcff) * -0xd01 + iVar5) >> 0x10);
        puVar19[1] = (short)((uint)((short)((short)iVar6 * -0xcff) * -0xd01 + iVar6) >> 0x10);
        puVar19 = puVar19 + 2;
        puVar25 = puVar25 + 4;
      } while (psVar20 != (short *)&DAT_0042903e);
      puVar14 = puVar14 + 0x100;
      puVar16 = puVar16 + 0x80;
    } while (puVar24 != puVar14);
    puVar21 = auStack_3da0;
    puVar16 = puVar24;
    do {
      puVar14 = puVar16 + 0x100;
      FUN_01703610(puVar16,puVar21,local_1da0,local_5a0);
      puVar21 = puVar21 + 0x800;
      puVar16 = puVar14;
    } while (local_da0 != puVar14);
    puVar13 = auStack_13a2;
    puVar12 = puVar13;
    do {
      puVar15 = puVar12 + -0x100;
      do {
        puVar15 = puVar15 + 1;
        iVar5 = (short)*puVar15 * 0x549;
        *puVar15 = (ushort)((uint)((short)((short)iVar5 + *puVar15 * 0x4b00) * -0xd01 + iVar5) >>
                           0x10);
      } while (puVar12 != puVar15);
      puVar12 = puVar12 + 0x100;
    } while (&uStack_ba2 != puVar12);
    psVar20 = &sStack_da2;
    puVar12 = puVar13;
    do {
      puVar15 = puVar12 + -0x100;
      psVar11 = psVar20;
      do {
        puVar15 = puVar15 + 1;
        psVar11 = psVar11 + 1;
        *puVar15 = *puVar15 + *psVar11;
      } while (puVar12 != puVar15);
      puVar12 = puVar12 + 0x100;
      psVar20 = psVar20 + 0x100;
    } while (&uStack_ba2 != puVar12);
    do {
      puVar12 = puVar13 + -0x100;
      do {
        puVar12 = puVar12 + 1;
        uVar1 = *puVar12 + (short)((short)*puVar12 * 0x4ebf + 0x2000000 >> 0x1a) * -0xd01;
        *puVar12 = uVar1 ^ (uVar1 + 0xd01 ^ uVar1) &
                           (ushort)(-((uint)(int)(short)uVar1 >> 0x10) >> 0x10);
      } while (puVar13 != puVar12);
      puVar13 = puVar13 + 0x100;
    } while (&uStack_ba2 != puVar13);
    puVar12 = &uStack_1ba2;
    do {
      puVar13 = puVar12 + -0x100;
      do {
        puVar13 = puVar13 + 1;
        uVar1 = *puVar13 + (short)((short)*puVar13 * 0x4ebf + 0x2000000 >> 0x1a) * -0xd01;
        *puVar13 = uVar1 ^ (uVar1 + 0xd01 ^ uVar1) &
                           (ushort)(-((uint)(int)(short)uVar1 >> 0x10) >> 0x10);
      } while (puVar12 != puVar13);
      puVar12 = puVar12 + 0x100;
    } while (auStack_13a2 != puVar12);
    puVar21 = (undefined1 *)(param_2 + 0x180);
    puVar16 = local_1da0;
    do {
      puVar14 = puVar16;
      puVar10 = puVar21 + -0x180;
      do {
        puVar17 = puVar10;
        sVar3 = puVar14[1];
        uVar4 = *puVar14;
        puVar14 = puVar14 + 2;
        *puVar17 = (char)uVar4;
        puVar17[2] = (char)((uint)(int)sVar3 >> 4);
        puVar17[1] = (byte)((int)sVar3 << 4) | (byte)((ushort)uVar4 >> 8);
        puVar10 = puVar17 + 3;
      } while (puVar17 + 3 != puVar21);
      puVar21 = puVar17 + 0x183;
      puVar16 = puVar16 + 0x100;
    } while (puVar21 != (undefined1 *)(param_2 + 0x780));
    puVar21 = (undefined1 *)(param_1 + 0x180);
    do {
      puVar16 = puVar24;
      puVar10 = puVar21 + -0x180;
      do {
        puVar17 = puVar10;
        uVar4 = *puVar16;
        sVar3 = puVar16[1];
        puVar16 = puVar16 + 2;
        *puVar17 = (char)uVar4;
        puVar17[2] = (char)((uint)(int)sVar3 >> 4);
        puVar17[1] = (byte)((int)sVar3 << 4) | (byte)((ushort)uVar4 >> 8);
        puVar10 = puVar17 + 3;
      } while (puVar17 + 3 != puVar21);
      puVar21 = puVar17 + 0x183;
      puVar24 = puVar24 + 0x100;
    } while (puVar21 != (undefined1 *)(param_1 + 0x780));
    puVar26 = (undefined4 *)(param_1 + 0x600);
    if (((&local_a0 <= puVar26) || ((undefined4 *)(param_1 + 0x620U) <= &local_a0)) &&
       (puVar26 <= &local_a0 || auStack_80 <= puVar26)) {
      *(undefined4 *)(param_1 + 0x600) = local_a0;
      *(undefined4 *)(param_1 + 0x604) = uStack_9c;
      *(undefined4 *)(param_1 + 0x608) = uStack_98;
      *(undefined4 *)(param_1 + 0x60c) = uStack_94;
      *(undefined4 *)(param_1 + 0x610) = local_90;
      *(undefined4 *)(param_1 + 0x618) = uStack_88;
      *(undefined4 *)(param_1 + 0x614) = uStack_8c;
      *(undefined4 *)(param_1 + 0x61c) = uStack_84;
      FUN_0177aaa0(&local_a0,0x40);
      FUN_0177aaa0(&local_60,0x21);
      FUN_0177aaa0(auStack_3da0,0x2000);
      FUN_0177aaa0(local_da0,0x800);
      FUN_0177aaa0(local_1da0,0x800);
      FUN_0177aaa0(local_5a0,0x400);
      if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2b78();
      }
      return 0;
    }
  }
LAB_0176aad8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)software_udf(0,0x176aad8);
  (*pcVar2)();
}

