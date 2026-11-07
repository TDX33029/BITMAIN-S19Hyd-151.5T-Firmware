// FUN_007364cc @ 007364cc size=1148 calls_out=2 calls_in=2
// strings: 

uint FUN_007364cc(int param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  undefined *puVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  
  uVar14 = param_3 - 0x1a;
  uVar19 = 0;
  uVar15 = 0;
  if (param_3 < 0x1a) {
    uVar14 = 0;
  }
  if (0x1a < param_3) {
    iVar12 = param_1 + 3;
    uVar9 = 0;
    do {
      if (param_3 < uVar19 + 0x1a) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar19,((param_3 - 2) / 0x18) * 0x18 + 0x1a,param_3,&DAT_01c07cd0);
      }
      uVar15 = uVar9 + 0x20;
      if (param_5 < uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar9,uVar15,param_5,&DAT_01c07ce0);
      }
      puVar17 = (uint *)(param_2 + uVar19);
      uVar6 = *puVar17;
      uVar19 = uVar19 + 0x18;
      uVar10 = (uVar6 >> 8 & 0xff) << 0x10;
      uVar16 = (uVar6 >> 0x10 & 0xff) << 8;
      uVar1 = *(undefined1 *)(iVar12 + (uVar6 >> 0x1a));
      puVar11 = (undefined1 *)(param_4 + uVar9);
      *puVar11 = *(undefined1 *)(iVar12 + ((uVar6 & 0xff) >> 2));
      puVar11[1] = *(undefined1 *)(iVar12 + (((uVar6 & 3) << 0x18 | uVar10) >> 0x14));
      puVar11[2] = *(undefined1 *)(iVar12 + ((uVar10 & 0xfffff | uVar16) >> 0xe));
      puVar11[4] = uVar1;
      uVar18 = *(uint *)((int)puVar17 + 6);
      puVar11[3] = *(undefined1 *)(iVar12 + ((uVar16 & 0x3fff) >> 8));
      uVar10 = puVar17[1];
      uVar16 = *(uint *)((int)puVar17 + 10);
      uVar9 = (uVar10 >> 8 & 0xff) << 0x10;
      puVar11[6] = *(undefined1 *)(iVar12 + (((uVar10 & 0xf) << 0x18 | uVar9) >> 0x16));
      puVar11[7] = *(undefined1 *)(iVar12 + ((uVar9 & 0x3fffff) >> 0x10));
      puVar11[5] = *(undefined1 *)(iVar12 + ((uVar10 & 0xff) >> 4 | (uVar6 >> 0x18 & 3) << 4));
      uVar9 = (uVar18 >> 8 & 0xff) << 0x10;
      uVar10 = (uVar18 >> 0x10 & 0xff) << 8;
      puVar11[8] = *(undefined1 *)(iVar12 + ((uVar18 & 0xff) >> 2));
      puVar11[9] = *(undefined1 *)(iVar12 + (((uVar18 & 3) << 0x18 | uVar9) >> 0x14));
      puVar11[10] = *(undefined1 *)(iVar12 + ((uVar9 & 0xfffff | uVar10) >> 0xe));
      puVar11[0xb] = *(undefined1 *)(iVar12 + ((uVar10 & 0x3fff) >> 8));
      uVar9 = (uVar16 >> 8 & 0xff) << 0x10;
      uVar1 = *(undefined1 *)(iVar12 + ((uVar16 & 0xff) >> 4 | (uVar18 >> 0x18 & 3) << 4));
      puVar11[0xc] = *(undefined1 *)(iVar12 + (uVar18 >> 0x1a));
      uVar2 = *(undefined1 *)(iVar12 + ((uVar9 & 0x3fffff) >> 0x10));
      puVar11[0xd] = uVar1;
      uVar1 = *(undefined1 *)(iVar12 + (((uVar16 & 0xf) << 0x18 | uVar9) >> 0x16));
      puVar11[0xf] = uVar2;
      puVar11[0xe] = uVar1;
      uVar6 = puVar17[3];
      uVar16 = puVar17[4];
      uVar9 = (uVar6 >> 8 & 0xff) << 0x10;
      uVar10 = (uVar6 >> 0x10 & 0xff) << 8;
      puVar11[0x10] = *(undefined1 *)(iVar12 + ((uVar6 & 0xff) >> 2));
      puVar11[0x11] = *(undefined1 *)(iVar12 + (((uVar6 & 3) << 0x18 | uVar9) >> 0x14));
      puVar11[0x12] = *(undefined1 *)(iVar12 + ((uVar9 & 0xfffff | uVar10) >> 0xe));
      puVar11[0x13] = *(undefined1 *)(iVar12 + ((uVar10 & 0x3fff) >> 8));
      uVar9 = (uVar16 >> 8 & 0xff) << 0x10;
      uVar1 = *(undefined1 *)(iVar12 + ((uVar16 & 0xff) >> 4 | (uVar6 >> 0x18 & 3) << 4));
      puVar11[0x14] = *(undefined1 *)(iVar12 + (uVar6 >> 0x1a));
      uVar18 = *(uint *)((int)puVar17 + 0x16);
      uVar2 = *(undefined1 *)(iVar12 + (((uVar16 & 0xf) << 0x18 | uVar9) >> 0x16));
      puVar11[0x17] = *(undefined1 *)(iVar12 + ((uVar9 & 0x3fffff) >> 0x10));
      puVar11[0x16] = uVar2;
      uVar6 = *(uint *)((int)puVar17 + 0x12);
      puVar11[0x15] = uVar1;
      uVar9 = (uVar6 >> 8 & 0xff) << 0x10;
      uVar16 = (uVar6 >> 0x10 & 0xff) << 8;
      puVar11[0x18] = *(undefined1 *)(iVar12 + ((uVar6 & 0xff) >> 2));
      uVar10 = (uVar18 >> 8 & 0xff) << 0x10;
      puVar11[0x19] = *(undefined1 *)(iVar12 + (((uVar6 & 3) << 0x18 | uVar9) >> 0x14));
      puVar11[0x1a] = *(undefined1 *)(iVar12 + ((uVar9 & 0xfffff | uVar16) >> 0xe));
      puVar11[0x1b] = *(undefined1 *)(iVar12 + ((uVar16 & 0x3fff) >> 8));
      puVar11[0x1c] = *(undefined1 *)(iVar12 + (uVar6 >> 0x1a));
      puVar11[0x1d] = *(undefined1 *)(iVar12 + ((uVar18 & 0xff) >> 4 | (uVar6 >> 0x18 & 3) << 4));
      puVar11[0x1e] = *(undefined1 *)(iVar12 + (((uVar18 & 0xf) << 0x18 | uVar10) >> 0x16));
      puVar11[0x1f] = *(undefined1 *)(iVar12 + ((uVar10 & 0x3fffff) >> 0x10));
      uVar9 = uVar15;
    } while (uVar19 <= uVar14);
  }
  uVar14 = (param_3 / 3) * 3;
  if (uVar19 < uVar14) {
    iVar12 = param_1 + 3;
    uVar9 = uVar15;
    do {
      uVar10 = uVar19 + 3;
      if (param_3 < uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar19,uVar10,param_3,&DAT_01c07cb0);
      }
      uVar15 = uVar9 + 4;
      if (param_5 < uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar9,uVar15,param_5,&DAT_01c07cc0);
      }
      pbVar8 = (byte *)(param_2 + uVar19);
      uVar1 = *(undefined1 *)(iVar12 + (pbVar8[2] & 0x3f));
      uVar2 = *(undefined1 *)(iVar12 + ((pbVar8[1] & 0xf) << 2 | (uint)(pbVar8[2] >> 6)));
      uVar3 = *(undefined1 *)(iVar12 + ((uint)(pbVar8[1] >> 4) | (*pbVar8 & 3) << 4));
      puVar11 = (undefined1 *)(param_4 + uVar9);
      *puVar11 = *(undefined1 *)(iVar12 + (uint)(*pbVar8 >> 2));
      puVar11[3] = uVar1;
      puVar11[2] = uVar2;
      puVar11[1] = uVar3;
      uVar9 = uVar15;
      uVar19 = uVar10;
    } while (uVar10 < uVar14);
  }
  if (param_3 % 3 == 1) {
    if (param_5 <= uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar15,param_5,&DAT_01c07c90);
    }
    bVar4 = *(byte *)(param_2 + uVar14);
    *(undefined1 *)(param_4 + uVar15) = *(undefined1 *)(param_1 + (uint)(bVar4 >> 2) + 3);
    uVar19 = uVar15 + 1;
    if (param_5 <= uVar19) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar19,param_5,&DAT_01c07ca0);
    }
    iVar13 = (bVar4 & 3) << 4;
    iVar12 = 2;
LAB_00736854:
    *(undefined1 *)(param_4 + uVar19) = *(undefined1 *)(param_1 + iVar13 + 3);
    return uVar15 + iVar12;
  }
  if (param_3 % 3 != 2) {
    return uVar15;
  }
  if (uVar15 < param_5) {
    bVar4 = *(byte *)(param_2 + uVar14);
    *(undefined1 *)(param_4 + uVar15) = *(undefined1 *)(param_1 + 3 + (uint)(bVar4 >> 2));
    uVar19 = uVar15 + 1;
    if (uVar19 < param_5) {
      bVar5 = ((byte *)(param_2 + uVar14))[1];
      *(undefined1 *)(param_4 + uVar19) =
           *(undefined1 *)(param_1 + 3 + ((bVar4 & 3) << 4 | (uint)(bVar5 >> 4)));
      uVar19 = uVar15 + 2;
      if (uVar19 < param_5) {
        iVar13 = (bVar5 & 0xf) << 2;
        iVar12 = 3;
        goto LAB_00736854;
      }
      puVar7 = &DAT_01c07c80;
      uVar15 = uVar19;
    }
    else {
      puVar7 = &DAT_01c07c70;
      uVar15 = uVar19;
    }
  }
  else {
    puVar7 = &DAT_01c07c60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(uVar15,param_5,puVar7);
}

