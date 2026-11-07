// FUN_0062eb34 @ 0062eb34 size=1276 calls_out=2 calls_in=2
// strings: 

void FUN_0062eb34(int param_1,uint param_2,int param_3,uint param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  byte *pbVar16;
  int iVar17;
  undefined1 *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  
  uVar8 = param_2 - 0x1a;
  uVar21 = 0;
  if (param_2 < 0x1a) {
    uVar8 = 0;
  }
  uVar22 = 0;
  if (0x1a < param_2) {
    uVar13 = 0;
    do {
      if (param_2 < uVar21 + 0x1a) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar21,((param_2 - 2) / 0x18) * 0x18 + 0x1a,param_2,&DAT_01857b18);
      }
      uVar22 = uVar13 + 0x20;
      if (param_4 < uVar22) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar13,uVar22,param_4,&DAT_01857b08);
      }
      puVar14 = (uint *)(param_1 + uVar21);
      uVar10 = *puVar14;
      uVar21 = uVar21 + 0x18;
      uVar15 = (uVar10 >> 8 & 0xff) << 0x10;
      uVar7 = (uVar10 >> 0x10 & 0xff) << 8;
      uVar1 = (&DAT_0033db65)[((uVar10 & 3) << 0x18 | uVar15) >> 0x14];
      puVar18 = (undefined1 *)(param_3 + uVar13);
      *puVar18 = (&DAT_0033db65)[(uVar10 & 0xff) >> 2];
      puVar18[4] = (&DAT_0033db65)[uVar10 >> 0x1a];
      puVar18[3] = (&DAT_0033db65)[(uVar7 & 0x3fff) >> 8];
      puVar18[1] = uVar1;
      uVar12 = *(uint *)((int)puVar14 + 6);
      puVar18[2] = (&DAT_0033db65)[(uVar15 & 0xfffff | uVar7) >> 0xe];
      uVar13 = (uVar12 >> 8 & 0xff) << 0x10;
      uVar7 = (uVar12 >> 0x10 & 0xff) << 8;
      uVar11 = puVar14[1];
      uVar19 = *(uint *)((int)puVar14 + 10);
      uVar15 = (uVar11 >> 8 & 0xff) << 0x10;
      uVar20 = puVar14[3];
      puVar18[8] = (&DAT_0033db65)[(uVar12 & 0xff) >> 2];
      puVar18[7] = (&DAT_0033db65)[(uVar15 & 0x3fffff) >> 0x10];
      puVar18[6] = (&DAT_0033db65)[((uVar11 & 0xf) << 0x18 | uVar15) >> 0x16];
      uVar15 = (uVar19 >> 8 & 0xff) << 0x10;
      puVar18[0xf] = (&DAT_0033db65)[(uVar15 & 0x3fffff) >> 0x10];
      puVar18[0xe] = (&DAT_0033db65)[((uVar19 & 0xf) << 0x18 | uVar15) >> 0x16];
      puVar18[0xc] = (&DAT_0033db65)[uVar12 >> 0x1a];
      puVar18[0xb] = (&DAT_0033db65)[(uVar7 & 0x3fff) >> 8];
      puVar18[10] = (&DAT_0033db65)[(uVar13 & 0xfffff | uVar7) >> 0xe];
      uVar1 = (&DAT_0033db65)[((uVar12 & 3) << 0x18 | uVar13) >> 0x14];
      puVar18[0xd] = (&DAT_0033db65)[(uVar19 & 0xff) >> 4 | (uVar12 >> 0x18 & 3) << 4];
      puVar18[9] = uVar1;
      puVar18[5] = (&DAT_0033db65)[(uVar11 & 0xff) >> 4 | (uVar10 >> 0x18 & 3) << 4];
      uVar10 = puVar14[4];
      uVar13 = (uVar10 >> 8 & 0xff) << 0x10;
      puVar18[0x17] = (&DAT_0033db65)[(uVar13 & 0x3fffff) >> 0x10];
      uVar15 = (uVar20 >> 8 & 0xff) << 0x10;
      uVar7 = (uVar20 >> 0x10 & 0xff) << 8;
      uVar1 = (&DAT_0033db65)[(uVar10 & 0xff) >> 4 | (uVar20 >> 0x18 & 3) << 4];
      puVar18[0x16] = (&DAT_0033db65)[((uVar10 & 0xf) << 0x18 | uVar13) >> 0x16];
      puVar18[0x15] = uVar1;
      uVar1 = (&DAT_0033db65)[((uVar20 & 3) << 0x18 | uVar15) >> 0x14];
      puVar18[0x14] = (&DAT_0033db65)[uVar20 >> 0x1a];
      puVar18[0x13] = (&DAT_0033db65)[(uVar7 & 0x3fff) >> 8];
      uVar2 = (&DAT_0033db65)[(uVar20 & 0xff) >> 2];
      puVar18[0x11] = uVar1;
      uVar1 = (&DAT_0033db65)[(uVar15 & 0xfffff | uVar7) >> 0xe];
      puVar18[0x10] = uVar2;
      puVar18[0x12] = uVar1;
      uVar10 = *(uint *)((int)puVar14 + 0x12);
      uVar11 = *(uint *)((int)puVar14 + 0x16);
      uVar13 = (uVar10 >> 8 & 0xff) << 0x10;
      uVar7 = (uVar10 >> 0x10 & 0xff) << 8;
      puVar18[0x18] = (&DAT_0033db65)[(uVar10 & 0xff) >> 2];
      uVar15 = (uVar11 >> 8 & 0xff) << 0x10;
      uVar1 = (&DAT_0033db65)[(uVar11 & 0xff) >> 4 | (uVar10 >> 0x18 & 3) << 4];
      puVar18[0x1f] = (&DAT_0033db65)[(uVar15 & 0x3fffff) >> 0x10];
      uVar2 = (&DAT_0033db65)[((uVar10 & 3) << 0x18 | uVar13) >> 0x14];
      puVar18[0x1e] = (&DAT_0033db65)[((uVar11 & 0xf) << 0x18 | uVar15) >> 0x16];
      uVar3 = (&DAT_0033db65)[(uVar7 & 0x3fff) >> 8];
      puVar18[0x1a] = (&DAT_0033db65)[(uVar13 & 0xfffff | uVar7) >> 0xe];
      uVar4 = (&DAT_0033db65)[uVar10 >> 0x1a];
      puVar18[0x1d] = uVar1;
      puVar18[0x1c] = uVar4;
      puVar18[0x1b] = uVar3;
      puVar18[0x19] = uVar2;
      uVar13 = uVar22;
    } while (uVar21 <= uVar8);
  }
  uVar8 = (param_2 / 3) * 3;
  uVar13 = uVar22;
  if (uVar21 < uVar8) {
    do {
      uVar15 = uVar21 + 3;
      if (param_2 < uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar21,uVar15,param_2,&DAT_01857af8);
      }
      uVar22 = uVar13 + 4;
      if (param_4 < uVar22) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar13,uVar22,param_4,&DAT_01857ae8);
      }
      pbVar16 = (byte *)(param_1 + uVar21);
      uVar1 = (&DAT_0033db65)[pbVar16[2] & 0x3f];
      uVar2 = (&DAT_0033db65)[(uint)(pbVar16[1] >> 4) | (*pbVar16 & 3) << 4];
      uVar3 = (&DAT_0033db65)[(pbVar16[1] & 0xf) << 2 | (uint)(pbVar16[2] >> 6)];
      puVar18 = (undefined1 *)(param_3 + uVar13);
      *puVar18 = (&DAT_0033db65)[*pbVar16 >> 2];
      puVar18[2] = uVar3;
      puVar18[3] = uVar1;
      puVar18[1] = uVar2;
      uVar21 = uVar15;
      uVar13 = uVar22;
    } while (uVar15 < uVar8);
    if (param_2 % 3 != 1) goto LAB_0062ee1c;
LAB_0062ee90:
    if (param_4 <= uVar22) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar22,param_4,&DAT_01857ac8);
    }
    bVar5 = *(byte *)(param_1 + uVar8);
    *(undefined *)(param_3 + uVar22) = (&DAT_0033db65)[bVar5 >> 2];
    uVar21 = uVar22 + 1;
    if (param_4 <= uVar21) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar21,param_4,&DAT_01857ad8);
    }
    iVar9 = (bVar5 & 3) << 4;
    iVar17 = 2;
  }
  else {
    if (param_2 % 3 == 1) goto LAB_0062ee90;
LAB_0062ee1c:
    if (param_2 % 3 != 2) {
      if (param_2 % 3 == 0) {
        return;
      }
      goto LAB_0062eef8;
    }
    if (param_4 <= uVar22) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar22,param_4,&DAT_01857a98);
    }
    bVar5 = *(byte *)(param_1 + uVar8);
    *(undefined *)(param_3 + uVar22) = (&DAT_0033db65)[bVar5 >> 2];
    uVar21 = uVar22 + 1;
    if (param_4 <= uVar21) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar21,param_4,&DAT_01857aa8);
    }
    bVar6 = ((byte *)(param_1 + uVar8))[1];
    *(undefined *)(param_3 + uVar21) = (&DAT_0033db65)[(bVar5 & 3) << 4 | (uint)(bVar6 >> 4)];
    uVar21 = uVar22 + 2;
    if (param_4 <= uVar21) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar21,param_4,&DAT_01857ab8);
    }
    iVar9 = (bVar6 & 0xf) << 2;
    iVar17 = 3;
  }
  *(undefined *)(param_3 + uVar21) = (&DAT_0033db65)[iVar9];
  uVar22 = uVar22 + iVar17;
  if (param_4 < uVar22) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar22,param_4,param_4,&DAT_01857b28);
  }
LAB_0062eef8:
  param_4 = param_4 - uVar22;
  uVar21 = 0;
  do {
    if (param_4 == uVar21) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(param_4,param_4,&DAT_01857a88);
    }
    *(undefined1 *)(param_3 + uVar22 + uVar21) = 0x3d;
    uVar21 = uVar21 + 1;
  } while ((param_2 % 3 ^ uVar21) != 3);
  return;
}

