// FUN_0062e67c @ 0062e67c size=1172 calls_out=2 calls_in=4
// strings: 

uint FUN_0062e67c(int param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  
  uVar13 = param_3 - 0x1a;
  uVar18 = 0;
  uVar14 = 0;
  if (param_3 < 0x1a) {
    uVar13 = 0;
  }
  if (0x1a < param_3) {
    iVar11 = param_1 + 3;
    uVar8 = 0;
    do {
      if (param_3 < uVar18 + 0x1a) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar18,((param_3 - 2) / 0x18) * 0x18 + 0x1a,param_3,&DAT_01857a78);
      }
      uVar14 = uVar8 + 0x20;
      if (param_5 < uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar8,uVar14,param_5,&DAT_01857a68);
      }
      puVar16 = (uint *)(param_2 + uVar18);
      uVar6 = *puVar16;
      uVar18 = uVar18 + 0x18;
      uVar9 = (uVar6 >> 8 & 0xff) << 0x10;
      uVar15 = (uVar6 >> 0x10 & 0xff) << 8;
      uVar1 = *(undefined1 *)(iVar11 + (uVar6 >> 0x1a));
      puVar10 = (undefined1 *)(param_4 + uVar8);
      *puVar10 = *(undefined1 *)(iVar11 + ((uVar6 & 0xff) >> 2));
      puVar10[1] = *(undefined1 *)(iVar11 + (((uVar6 & 3) << 0x18 | uVar9) >> 0x14));
      puVar10[2] = *(undefined1 *)(iVar11 + ((uVar9 & 0xfffff | uVar15) >> 0xe));
      puVar10[4] = uVar1;
      uVar17 = *(uint *)((int)puVar16 + 6);
      puVar10[3] = *(undefined1 *)(iVar11 + ((uVar15 & 0x3fff) >> 8));
      uVar9 = puVar16[1];
      uVar15 = *(uint *)((int)puVar16 + 10);
      uVar8 = (uVar9 >> 8 & 0xff) << 0x10;
      puVar10[6] = *(undefined1 *)(iVar11 + (((uVar9 & 0xf) << 0x18 | uVar8) >> 0x16));
      puVar10[7] = *(undefined1 *)(iVar11 + ((uVar8 & 0x3fffff) >> 0x10));
      puVar10[5] = *(undefined1 *)(iVar11 + ((uVar9 & 0xff) >> 4 | (uVar6 >> 0x18 & 3) << 4));
      uVar8 = (uVar17 >> 8 & 0xff) << 0x10;
      uVar9 = (uVar17 >> 0x10 & 0xff) << 8;
      puVar10[8] = *(undefined1 *)(iVar11 + ((uVar17 & 0xff) >> 2));
      puVar10[9] = *(undefined1 *)(iVar11 + (((uVar17 & 3) << 0x18 | uVar8) >> 0x14));
      puVar10[10] = *(undefined1 *)(iVar11 + ((uVar8 & 0xfffff | uVar9) >> 0xe));
      puVar10[0xb] = *(undefined1 *)(iVar11 + ((uVar9 & 0x3fff) >> 8));
      uVar8 = (uVar15 >> 8 & 0xff) << 0x10;
      uVar1 = *(undefined1 *)(iVar11 + ((uVar15 & 0xff) >> 4 | (uVar17 >> 0x18 & 3) << 4));
      puVar10[0xc] = *(undefined1 *)(iVar11 + (uVar17 >> 0x1a));
      uVar2 = *(undefined1 *)(iVar11 + ((uVar8 & 0x3fffff) >> 0x10));
      puVar10[0xd] = uVar1;
      uVar1 = *(undefined1 *)(iVar11 + (((uVar15 & 0xf) << 0x18 | uVar8) >> 0x16));
      puVar10[0xf] = uVar2;
      puVar10[0xe] = uVar1;
      uVar6 = puVar16[3];
      uVar15 = puVar16[4];
      uVar8 = (uVar6 >> 8 & 0xff) << 0x10;
      uVar9 = (uVar6 >> 0x10 & 0xff) << 8;
      puVar10[0x10] = *(undefined1 *)(iVar11 + ((uVar6 & 0xff) >> 2));
      puVar10[0x11] = *(undefined1 *)(iVar11 + (((uVar6 & 3) << 0x18 | uVar8) >> 0x14));
      puVar10[0x12] = *(undefined1 *)(iVar11 + ((uVar8 & 0xfffff | uVar9) >> 0xe));
      puVar10[0x13] = *(undefined1 *)(iVar11 + ((uVar9 & 0x3fff) >> 8));
      uVar8 = (uVar15 >> 8 & 0xff) << 0x10;
      uVar1 = *(undefined1 *)(iVar11 + ((uVar15 & 0xff) >> 4 | (uVar6 >> 0x18 & 3) << 4));
      puVar10[0x14] = *(undefined1 *)(iVar11 + (uVar6 >> 0x1a));
      uVar17 = *(uint *)((int)puVar16 + 0x16);
      uVar2 = *(undefined1 *)(iVar11 + (((uVar15 & 0xf) << 0x18 | uVar8) >> 0x16));
      puVar10[0x17] = *(undefined1 *)(iVar11 + ((uVar8 & 0x3fffff) >> 0x10));
      puVar10[0x16] = uVar2;
      uVar6 = *(uint *)((int)puVar16 + 0x12);
      puVar10[0x15] = uVar1;
      uVar8 = (uVar6 >> 8 & 0xff) << 0x10;
      uVar15 = (uVar6 >> 0x10 & 0xff) << 8;
      puVar10[0x18] = *(undefined1 *)(iVar11 + ((uVar6 & 0xff) >> 2));
      uVar9 = (uVar17 >> 8 & 0xff) << 0x10;
      puVar10[0x19] = *(undefined1 *)(iVar11 + (((uVar6 & 3) << 0x18 | uVar8) >> 0x14));
      puVar10[0x1a] = *(undefined1 *)(iVar11 + ((uVar8 & 0xfffff | uVar15) >> 0xe));
      puVar10[0x1b] = *(undefined1 *)(iVar11 + ((uVar15 & 0x3fff) >> 8));
      puVar10[0x1c] = *(undefined1 *)(iVar11 + (uVar6 >> 0x1a));
      puVar10[0x1d] = *(undefined1 *)(iVar11 + ((uVar17 & 0xff) >> 4 | (uVar6 >> 0x18 & 3) << 4));
      puVar10[0x1e] = *(undefined1 *)(iVar11 + (((uVar17 & 0xf) << 0x18 | uVar9) >> 0x16));
      puVar10[0x1f] = *(undefined1 *)(iVar11 + ((uVar9 & 0x3fffff) >> 0x10));
      uVar8 = uVar14;
    } while (uVar18 <= uVar13);
  }
  uVar13 = (param_3 / 3) * 3;
  if (uVar18 < uVar13) {
    iVar11 = param_1 + 3;
    uVar8 = uVar14;
    do {
      uVar9 = uVar18 + 3;
      if (param_3 < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar18,uVar9,param_3,&DAT_01857a58);
      }
      uVar14 = uVar8 + 4;
      if (param_5 < uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar8,uVar14,param_5,&DAT_01857a48);
      }
      pbVar7 = (byte *)(param_2 + uVar18);
      uVar1 = *(undefined1 *)(iVar11 + (pbVar7[2] & 0x3f));
      uVar2 = *(undefined1 *)(iVar11 + ((pbVar7[1] & 0xf) << 2 | (uint)(pbVar7[2] >> 6)));
      uVar3 = *(undefined1 *)(iVar11 + ((uint)(pbVar7[1] >> 4) | (*pbVar7 & 3) << 4));
      puVar10 = (undefined1 *)(param_4 + uVar8);
      *puVar10 = *(undefined1 *)(iVar11 + (uint)(*pbVar7 >> 2));
      puVar10[3] = uVar1;
      puVar10[2] = uVar2;
      puVar10[1] = uVar3;
      uVar8 = uVar14;
      uVar18 = uVar9;
    } while (uVar9 < uVar13);
  }
  if (param_3 % 3 == 1) {
    if (param_5 <= uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar14,param_5,&DAT_01857a28);
    }
    bVar4 = *(byte *)(param_2 + uVar13);
    *(undefined1 *)(param_4 + uVar14) = *(undefined1 *)(param_1 + (uint)(bVar4 >> 2) + 3);
    uVar18 = uVar14 + 1;
    if (param_5 <= uVar18) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar18,param_5,&DAT_01857a38);
    }
    iVar12 = (bVar4 & 3) << 4;
    iVar11 = 2;
  }
  else {
    if (param_3 % 3 != 2) {
      return uVar14;
    }
    if (param_5 <= uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar14,param_5,&DAT_018579f8);
    }
    bVar4 = *(byte *)(param_2 + uVar13);
    *(undefined1 *)(param_4 + uVar14) = *(undefined1 *)(param_1 + 3 + (uint)(bVar4 >> 2));
    uVar18 = uVar14 + 1;
    if (param_5 <= uVar18) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar18,param_5,&DAT_01857a08);
    }
    bVar5 = ((byte *)(param_2 + uVar13))[1];
    *(undefined1 *)(param_4 + uVar18) =
         *(undefined1 *)(param_1 + 3 + ((bVar4 & 3) << 4 | (uint)(bVar5 >> 4)));
    uVar18 = uVar14 + 2;
    if (param_5 <= uVar18) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar18,param_5,&DAT_01857a18);
    }
    iVar12 = (bVar5 & 0xf) << 2;
    iVar11 = 3;
  }
  *(undefined1 *)(param_4 + uVar18) = *(undefined1 *)(param_1 + iVar12 + 3);
  return uVar14 + iVar11;
}

