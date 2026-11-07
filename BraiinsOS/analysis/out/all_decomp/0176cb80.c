// FUN_0176cb80 @ 0176cb80 size=1584 calls_out=7 calls_in=2
// strings: 

undefined8 FUN_0176cb80(int param_1,int param_2,undefined4 *param_3)

{
  ushort uVar1;
  code *pcVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  ushort *puVar8;
  ushort *puVar9;
  undefined2 *puVar10;
  ushort *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined2 *puVar14;
  undefined1 *puVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  short *psVar18;
  undefined2 *puVar19;
  undefined2 *puVar20;
  undefined4 *puVar21;
  undefined2 auStack_27a0 [958];
  int local_2024;
  undefined2 local_15a0 [255];
  ushort uStack_13a2;
  undefined1 auStack_13a0 [512];
  undefined1 auStack_11a0 [380];
  int local_1024;
  undefined2 local_fa0 [255];
  ushort auStack_da2 [512];
  short sStack_9a2;
  undefined1 local_9a0 [510];
  ushort uStack_7a2;
  undefined1 auStack_7a0 [512];
  undefined1 auStack_5a0 [512];
  undefined2 local_3a0 [384];
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
    local_40[0] = 3;
    puVar17 = local_fa0;
    FUN_017573c4(&local_60,0x21,&local_a0);
    FUN_01769a98(auStack_27a0,&local_a0,0);
    FUN_0176a0c0(local_15a0,auStack_13a0,auStack_11a0,puVar17,auStack_80,0,1,2,0xff);
    FUN_0176a0c0(local_9a0,auStack_7a0,auStack_5a0,puVar17,auStack_80,3,4,5,0xff);
    FUN_01708628(local_15a0);
    FUN_01708628(local_9a0);
    puVar16 = local_15a0;
    puVar14 = local_15a0;
    puVar10 = local_3a0;
    do {
      psVar18 = &DAT_00428fbe;
      puVar19 = puVar16;
      puVar20 = puVar10;
      do {
        psVar18 = psVar18 + 1;
        iVar5 = (int)(short)puVar19[1] * (int)*psVar18;
        iVar6 = (int)(short)puVar19[3] * (int)-*psVar18;
        *puVar20 = (short)((uint)((short)((short)iVar5 * -0xcff) * -0xd01 + iVar5) >> 0x10);
        puVar20[1] = (short)((uint)((short)((short)iVar6 * -0xcff) * -0xd01 + iVar6) >> 0x10);
        puVar19 = puVar19 + 4;
        puVar20 = puVar20 + 2;
      } while (psVar18 != (short *)&DAT_0042903e);
      puVar10 = puVar10 + 0x80;
      puVar16 = puVar16 + 0x100;
    } while (puVar17 != puVar16);
    puVar10 = auStack_27a0;
    puVar16 = puVar17;
    do {
      puVar19 = puVar10 + 0x300;
      FUN_01703498(puVar16,puVar10,local_15a0,local_3a0);
      puVar16 = puVar16 + 0x100;
      puVar10 = puVar19;
    } while (local_15a0 != puVar19);
    puVar9 = auStack_da2;
    puVar8 = puVar9;
    do {
      puVar11 = puVar8 + -0x100;
      do {
        puVar11 = puVar11 + 1;
        iVar5 = (short)*puVar11 * 0x549;
        *puVar11 = (ushort)((uint)((short)((short)iVar5 + *puVar11 * 0x4b00) * -0xd01 + iVar5) >>
                           0x10);
      } while (puVar8 != puVar11);
      puVar8 = puVar8 + 0x100;
    } while (&uStack_7a2 != puVar8);
    psVar18 = &sStack_9a2;
    puVar8 = puVar9;
    do {
      puVar11 = puVar8 + -0x100;
      psVar7 = psVar18;
      do {
        puVar11 = puVar11 + 1;
        psVar7 = psVar7 + 1;
        *puVar11 = *puVar11 + *psVar7;
      } while (puVar8 != puVar11);
      puVar8 = puVar8 + 0x100;
      psVar18 = psVar18 + 0x100;
    } while (&uStack_7a2 != puVar8);
    do {
      puVar8 = puVar9 + -0x100;
      do {
        puVar8 = puVar8 + 1;
        uVar1 = *puVar8 + (short)((short)*puVar8 * 0x4ebf + 0x2000000 >> 0x1a) * -0xd01;
        *puVar8 = uVar1 ^ (uVar1 + 0xd01 ^ uVar1) &
                          (ushort)(-((uint)(int)(short)uVar1 >> 0x10) >> 0x10);
      } while (puVar9 != puVar8);
      puVar9 = puVar9 + 0x100;
    } while (&uStack_7a2 != puVar9);
    puVar8 = &uStack_13a2;
    do {
      puVar9 = puVar8 + -0x100;
      do {
        puVar9 = puVar9 + 1;
        uVar1 = *puVar9 + (short)((short)*puVar9 * 0x4ebf + 0x2000000 >> 0x1a) * -0xd01;
        *puVar9 = uVar1 ^ (uVar1 + 0xd01 ^ uVar1) &
                          (ushort)(-((uint)(int)(short)uVar1 >> 0x10) >> 0x10);
      } while (puVar8 != puVar9);
      puVar8 = puVar8 + 0x100;
    } while (auStack_da2 != puVar8);
    puVar15 = (undefined1 *)(param_2 + 0x180);
    do {
      puVar10 = puVar14;
      puVar12 = puVar15 + -0x180;
      do {
        sVar3 = puVar10[1];
        puVar13 = puVar12 + 3;
        uVar4 = *puVar10;
        puVar10 = puVar10 + 2;
        *puVar12 = (char)uVar4;
        puVar12[2] = (char)((uint)(int)sVar3 >> 4);
        puVar12[1] = (byte)((int)sVar3 << 4) | (byte)((ushort)uVar4 >> 8);
        puVar12 = puVar13;
      } while (puVar15 != puVar13);
      puVar15 = puVar15 + 0x180;
      puVar14 = puVar14 + 0x100;
    } while ((undefined1 *)(param_2 + 0x600) != puVar15);
    puVar15 = (undefined1 *)(param_1 + 0x180);
    do {
      puVar10 = puVar17;
      puVar12 = puVar15 + -0x180;
      do {
        uVar4 = *puVar10;
        puVar13 = puVar12 + 3;
        sVar3 = puVar10[1];
        puVar10 = puVar10 + 2;
        *puVar12 = (char)uVar4;
        puVar12[2] = (char)((uint)(int)sVar3 >> 4);
        puVar12[1] = (byte)((int)sVar3 << 4) | (byte)((ushort)uVar4 >> 8);
        puVar12 = puVar13;
      } while (puVar15 != puVar13);
      puVar15 = puVar15 + 0x180;
      puVar17 = puVar17 + 0x100;
    } while ((undefined1 *)(param_1 + 0x600) != puVar15);
    puVar21 = (undefined4 *)(param_1 + 0x480);
    if (((&local_a0 <= puVar21) || ((undefined4 *)(param_1 + 0x4a0U) <= &local_a0)) &&
       (auStack_80 <= puVar21 || puVar21 <= &local_a0)) {
      *(undefined4 *)(param_1 + 0x480) = local_a0;
      *(undefined4 *)(param_1 + 0x484) = uStack_9c;
      *(undefined4 *)(param_1 + 0x488) = uStack_98;
      *(undefined4 *)(param_1 + 0x48c) = uStack_94;
      *(undefined4 *)(param_1 + 0x490) = local_90;
      *(undefined4 *)(param_1 + 0x498) = uStack_88;
      *(undefined4 *)(param_1 + 0x494) = uStack_8c;
      *(undefined4 *)(param_1 + 0x49c) = uStack_84;
      FUN_0177aaa0(&local_a0,0x40);
      FUN_0177aaa0(&local_60,0x21);
      FUN_0177aaa0(auStack_27a0,0x1200);
      FUN_0177aaa0(local_9a0,0x600);
      FUN_0177aaa0(local_15a0,0x600);
      FUN_0177aaa0(local_3a0,0x300);
      if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2b78();
      }
      return 0;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)software_udf(0,0x176d1ac);
  (*pcVar2)();
}

