// FUN_0176d520 @ 0176d520 size=2076 calls_out=9 calls_in=3
// strings: 

undefined8 FUN_0176d520(int param_1,int param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  code *pcVar2;
  byte bVar3;
  ushort *puVar4;
  ushort *puVar5;
  short *psVar6;
  ushort *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  short *psVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined2 *puVar18;
  undefined2 *puVar19;
  undefined1 *puVar20;
  undefined2 *puVar21;
  uint *puVar22;
  uint *puVar23;
  undefined2 *puVar24;
  undefined1 auStack_3360 [828];
  int local_3024;
  undefined1 local_2160 [316];
  int local_2024;
  ushort uStack_1f62;
  undefined1 auStack_1f60 [512];
  undefined1 auStack_1d60 [510];
  short sStack_1b62;
  undefined1 local_1b60 [510];
  ushort uStack_1962;
  undefined1 auStack_1960 [512];
  undefined1 auStack_1760 [512];
  ushort local_1560 [670];
  int local_1024;
  undefined2 auStack_f60 [256];
  undefined1 auStack_d60 [512];
  undefined1 auStack_b60 [512];
  undefined2 local_960 [383];
  short sStack_662;
  undefined1 local_660 [510];
  short sStack_462;
  uint local_460 [127];
  ushort uStack_262;
  undefined1 local_260 [8];
  uint auStack_258 [125];
  ushort uStack_62;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 auStack_40 [5];
  int local_2c;
  
  pbVar12 = (byte *)(param_3 + 0x180);
  local_2c = DAT_018ddaf8;
  puVar7 = local_1560;
  local_1024 = param_1;
  do {
    puVar4 = puVar7;
    pbVar8 = pbVar12 + -0x180;
    do {
      bVar3 = pbVar8[1];
      puVar4[1] = (ushort)pbVar8[2] << 4 | (ushort)(bVar3 >> 4);
      pbVar9 = pbVar8 + 3;
      *puVar4 = (ushort)*pbVar8 | (bVar3 & 0xf) << 8;
      puVar4 = puVar4 + 2;
      pbVar8 = pbVar9;
    } while (pbVar12 != pbVar9);
    pbVar12 = pbVar12 + 0x180;
    puVar7 = puVar7 + 0x100;
  } while ((byte *)(param_3 + 0x600) != pbVar12);
  puVar17 = (undefined4 *)(param_3 + 0x480);
  local_3024 = param_1;
  local_2024 = param_1;
  if ((&local_60 < puVar17 && puVar17 < auStack_40) ||
     ((puVar17 < &local_60 && (&local_60 < (undefined4 *)(param_3 + 0x4a0U))))) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0,0x176dd38);
    (*pcVar2)();
  }
  local_60 = *(undefined4 *)(param_3 + 0x480);
  uStack_58 = *(undefined4 *)(param_3 + 0x488);
  pbVar12 = (byte *)(param_2 + -1);
  uStack_5c = *(undefined4 *)(param_3 + 0x484);
  uStack_54 = *(undefined4 *)(param_3 + 0x48c);
  uStack_4c = *(undefined4 *)(param_3 + 0x494);
  uStack_48 = *(undefined4 *)(param_3 + 0x498);
  local_50 = *(undefined4 *)(param_3 + 0x490);
  uStack_44 = *(undefined4 *)(param_3 + 0x49c);
  puVar22 = local_460 + 2;
  do {
    pbVar12 = pbVar12 + 1;
    uVar10 = (uint)*pbVar12;
    puVar23 = puVar22 + 4;
    puVar22[-2] = (-(uVar10 & 1) >> 0x10 | -(uVar10 & 2) & 0xffff0000) & 0x6810681;
    puVar22[-1] = (-(uVar10 & 4) >> 0x10 | -(uVar10 & 8) & 0xffff0000) & 0x6810681;
    puVar22[1] = (-(uVar10 & 0x40) >> 0x10 | -(uVar10 & 0x80) & 0xffff0000) & 0x6810681;
    *puVar22 = (-(uVar10 & 0x10) >> 0x10 | -(uVar10 & 0x20) & 0xffff0000) & 0x6810681;
    puVar22 = puVar23;
  } while (auStack_258 != puVar23);
  FUN_01769a98(auStack_3360,&local_60,1);
  FUN_0176a0c0(auStack_f60,auStack_d60,auStack_b60,local_2160,param_4,0,1,2,0xff);
  FUN_0176a0c0(local_1b60,auStack_1960,auStack_1760,local_660,param_4,3,4,5,6);
  FUN_01708628(auStack_f60);
  puVar18 = auStack_f60;
  puVar19 = local_960;
  do {
    psVar11 = &DAT_00428fbe;
    puVar21 = puVar18;
    puVar24 = puVar19;
    do {
      psVar11 = psVar11 + 1;
      iVar15 = (int)(short)puVar21[1] * (int)*psVar11;
      iVar16 = (int)(short)puVar21[3] * (int)-*psVar11;
      *puVar24 = (short)((uint)((short)((short)iVar15 * -0xcff) * -0xd01 + iVar15) >> 0x10);
      puVar24[1] = (short)((uint)((short)((short)iVar16 * -0xcff) * -0xd01 + iVar16) >> 0x10);
      puVar21 = puVar21 + 4;
      puVar24 = puVar24 + 2;
    } while (psVar11 != (short *)&DAT_0042903e);
    puVar18 = puVar18 + 0x100;
    puVar19 = puVar19 + 0x80;
  } while (local_960 != puVar18);
  puVar20 = auStack_3360;
  puVar14 = local_2160;
  do {
    puVar13 = puVar20 + 0x600;
    FUN_01703498(puVar14,puVar20,auStack_f60,local_960);
    puVar14 = puVar14 + 0x200;
    puVar20 = puVar13;
  } while (local_2160 != puVar13);
  FUN_01703498(local_260,local_1560,auStack_f60,local_960);
  FUN_01703114(local_2160);
  FUN_01703114(auStack_1f60);
  FUN_01703114(auStack_1d60);
  FUN_01703114(local_260);
  puVar4 = &uStack_1f62;
  psVar11 = &sStack_1b62;
  puVar7 = puVar4;
  do {
    puVar5 = puVar7 + -0x100;
    psVar6 = psVar11;
    do {
      puVar5 = puVar5 + 1;
      psVar6 = psVar6 + 1;
      *puVar5 = *puVar5 + *psVar6;
    } while (puVar7 != puVar5);
    puVar7 = puVar7 + 0x100;
    psVar11 = psVar11 + 0x100;
  } while (&uStack_1962 != puVar7);
  puVar5 = &uStack_262;
  psVar11 = &sStack_662;
  puVar7 = puVar5;
  do {
    puVar7 = puVar7 + 1;
    psVar11 = psVar11 + 1;
    *puVar7 = *puVar7 + *psVar11;
  } while (&uStack_62 != puVar7);
  psVar11 = &sStack_462;
  puVar7 = puVar5;
  do {
    puVar7 = puVar7 + 1;
    psVar11 = psVar11 + 1;
    *puVar7 = *puVar7 + *psVar11;
  } while (&uStack_62 != puVar7);
  do {
    puVar7 = puVar4 + -0x100;
    do {
      puVar7 = puVar7 + 1;
      uVar1 = *puVar7 + (short)((short)*puVar7 * 0x4ebf + 0x2000000 >> 0x1a) * -0xd01;
      *puVar7 = uVar1 ^ (uVar1 + 0xd01 ^ uVar1) &
                        (ushort)(-((uint)(int)(short)uVar1 >> 0x10) >> 0x10);
    } while (puVar4 != puVar7);
    puVar4 = puVar4 + 0x100;
  } while (&uStack_1962 != puVar4);
  do {
    puVar5 = puVar5 + 1;
    uVar1 = *puVar5 + (short)((short)*puVar5 * 0x4ebf + 0x2000000 >> 0x1a) * -0xd01;
    *puVar5 = uVar1 ^ (uVar1 + 0xd01 ^ uVar1) & (ushort)(-((uint)(int)(short)uVar1 >> 0x10) >> 0x10)
    ;
  } while (&uStack_62 != puVar5);
  iVar15 = param_1;
  puVar20 = local_2160;
  do {
    iVar16 = iVar15 + 0x140;
    FUN_01702f8c(iVar15,puVar20);
    puVar20 = puVar20 + 0x200;
    iVar15 = iVar16;
  } while (param_1 + 0x3c0 != iVar16);
  FUN_01702e90(param_1 + 0x3c0,local_260);
  FUN_0177aaa0(&local_60,0x20);
  FUN_0177aaa0(auStack_f60,0x600);
  FUN_0177aaa0(local_960,0x300);
  FUN_0177aaa0(local_2160,0x600);
  FUN_0177aaa0(local_260,0x200);
  FUN_0177aaa0(auStack_3360,0x1200);
  FUN_0177aaa0(local_460,0x200);
  FUN_0177aaa0(local_1b60,0x600);
  FUN_0177aaa0(local_660,0x200);
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

