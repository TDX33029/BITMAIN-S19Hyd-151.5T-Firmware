// FUN_0181c4e4 @ 0181c4e4 size=1032 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_0181c4e4(int param_1,int param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined2 *puVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  
  uVar9 = *(uint *)(param_1 + 0x16a0);
  uVar12 = *(uint *)(param_1 + 0x16bc);
  uVar5 = (uint)*(ushort *)(param_1 + 0x16b8);
  if (uVar9 != 0) {
    puVar6 = (undefined2 *)(param_1 + 0x16b8);
    uVar15 = 0;
    do {
      while( true ) {
        uVar14 = (uint)*(byte *)(*(int *)(param_1 + 0x1698) + uVar15 + 2);
        puVar7 = (ushort *)(*(int *)(param_1 + 0x1698) + uVar15);
        uVar15 = uVar15 + 3;
        uVar3 = (uint)*puVar7;
        if (uVar3 != 0) break;
        uVar10 = (uint)*(ushort *)(param_2 + uVar14 * 4);
        uVar3 = (uint)*(ushort *)(param_2 + uVar14 * 4 + 2);
        uVar5 = uVar5 | uVar10 << (uVar12 & 0xff);
        if ((int)(0x10 - uVar3) < (int)uVar12) {
          iVar13 = *(int *)(param_1 + 0x14);
          *puVar6 = (short)uVar5;
          *(int *)(param_1 + 0x14) = iVar13 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar13) = (char)uVar5;
          iVar13 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = iVar13 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar13) = (char)((ushort)*puVar6 >> 8);
          uVar9 = *(uint *)(param_1 + 0x16a0);
          uVar12 = *(int *)(param_1 + 0x16bc) + -0x10 + uVar3;
          uVar5 = (int)uVar10 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff);
          *puVar6 = (short)uVar5;
          *(uint *)(param_1 + 0x16bc) = uVar12;
        }
        else {
          uVar12 = uVar12 + uVar3;
          *puVar6 = (short)uVar5;
          *(uint *)(param_1 + 0x16bc) = uVar12;
        }
LAB_0181c5e8:
        if (uVar9 <= uVar15) goto LAB_0181c834;
      }
      uVar9 = (uint)(byte)(&DAT_004530a0)[uVar14];
      iVar13 = (uVar9 + 0x101) * 4;
      uVar11 = (uint)*(ushort *)(param_2 + iVar13);
      uVar10 = (uint)*(ushort *)(param_2 + iVar13 + 2);
      uVar5 = uVar5 | uVar11 << (uVar12 & 0xff);
      if ((int)(0x10 - uVar10) < (int)uVar12) {
        iVar13 = *(int *)(param_1 + 0x14);
        *puVar6 = (short)uVar5;
        *(int *)(param_1 + 0x14) = iVar13 + 1;
        *(char *)(*(int *)(param_1 + 8) + iVar13) = (char)uVar5;
        iVar13 = *(int *)(param_1 + 0x14);
        *(int *)(param_1 + 0x14) = iVar13 + 1;
        *(char *)(*(int *)(param_1 + 8) + iVar13) = (char)((ushort)*puVar6 >> 8);
        uVar12 = *(int *)(param_1 + 0x16bc) - 0x10;
        uVar5 = (int)uVar11 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff);
      }
      uVar10 = uVar10 + uVar12;
      *(uint *)(param_1 + 0x16bc) = uVar10;
      iVar13 = *(int *)(&DAT_00453970 + uVar9 * 4);
      if (iVar13 != 0) {
        uVar9 = uVar14 - *(int *)(&DAT_0045302c + uVar9 * 4) & 0xffff;
        uVar5 = uVar5 | uVar9 << (uVar10 & 0xff);
        if (0x10 - iVar13 < (int)uVar10) {
          iVar8 = *(int *)(param_1 + 0x14);
          *puVar6 = (short)uVar5;
          *(int *)(param_1 + 0x14) = iVar8 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar8) = (char)uVar5;
          iVar8 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = iVar8 + 1;
          *(char *)(*(int *)(param_1 + 8) + iVar8) = (char)((ushort)*puVar6 >> 8);
          iVar8 = *(int *)(param_1 + 0x16bc);
          uVar10 = iVar8 + -0x10 + iVar13;
          *(uint *)(param_1 + 0x16bc) = uVar10;
          uVar5 = (int)uVar9 >> (0x10U - iVar8 & 0xff);
        }
        else {
          uVar10 = uVar10 + iVar13;
          *(uint *)(param_1 + 0x16bc) = uVar10;
        }
      }
      uVar9 = uVar3 - 1;
      if (uVar9 < 0x100) {
        bVar1 = (&DAT_0045319f)[uVar3];
      }
      else {
        bVar1 = (&DAT_004532a0)[uVar9 >> 7];
      }
      uVar14 = (uint)bVar1;
      uVar3 = (uint)*(ushort *)(param_3 + uVar14 * 4);
      uVar12 = (uint)*(ushort *)(param_3 + uVar14 * 4 + 2);
      uVar5 = uVar5 | uVar3 << (uVar10 & 0xff);
      if ((int)(0x10 - uVar12) < (int)uVar10) {
        iVar13 = *(int *)(param_1 + 0x14);
        *puVar6 = (short)uVar5;
        *(int *)(param_1 + 0x14) = iVar13 + 1;
        *(char *)(*(int *)(param_1 + 8) + iVar13) = (char)uVar5;
        iVar13 = *(int *)(param_1 + 0x14);
        *(int *)(param_1 + 0x14) = iVar13 + 1;
        *(char *)(*(int *)(param_1 + 8) + iVar13) = (char)((ushort)*puVar6 >> 8);
        uVar10 = *(int *)(param_1 + 0x16bc) - 0x10;
        uVar5 = (int)uVar3 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff);
      }
      uVar12 = uVar12 + uVar10;
      *puVar6 = (short)uVar5;
      *(uint *)(param_1 + 0x16bc) = uVar12;
      iVar13 = *(int *)(&DAT_004538f8 + uVar14 * 4);
      if (iVar13 == 0) {
LAB_0181c8d4:
        uVar9 = *(uint *)(param_1 + 0x16a0);
        goto LAB_0181c5e8;
      }
      uVar3 = uVar9 - *(int *)(&DAT_00452fb4 + uVar14 * 4) & 0xffff;
      uVar5 = uVar5 | uVar3 << (uVar12 & 0xff);
      if ((int)uVar12 <= 0x10 - iVar13) {
        uVar12 = uVar12 + iVar13;
        *puVar6 = (short)uVar5;
        *(uint *)(param_1 + 0x16bc) = uVar12;
        goto LAB_0181c8d4;
      }
      iVar8 = *(int *)(param_1 + 0x14);
      *puVar6 = (short)uVar5;
      *(int *)(param_1 + 0x14) = iVar8 + 1;
      *(char *)(*(int *)(param_1 + 8) + iVar8) = (char)uVar5;
      iVar8 = *(int *)(param_1 + 0x14);
      *(int *)(param_1 + 0x14) = iVar8 + 1;
      *(char *)(*(int *)(param_1 + 8) + iVar8) = (char)((ushort)*puVar6 >> 8);
      uVar9 = *(uint *)(param_1 + 0x16a0);
      uVar12 = *(int *)(param_1 + 0x16bc) + -0x10 + iVar13;
      uVar5 = (int)uVar3 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff);
      *puVar6 = (short)uVar5;
      *(uint *)(param_1 + 0x16bc) = uVar12;
    } while (uVar15 < uVar9);
  }
LAB_0181c834:
  uVar9 = (uint)*(ushort *)(param_2 + 0x402);
  uVar2 = *(ushort *)(param_2 + 0x400);
  uVar5 = uVar5 | (uint)uVar2 << (uVar12 & 0xff);
  uVar4 = (undefined2)uVar5;
  if ((int)(0x10 - uVar9) < (int)uVar12) {
    iVar13 = *(int *)(param_1 + 0x14);
    *(undefined2 *)(param_1 + 0x16b8) = uVar4;
    *(int *)(param_1 + 0x14) = iVar13 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar13) = (char)uVar5;
    iVar13 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar13 + 1;
    *(char *)(*(int *)(param_1 + 8) + iVar13) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x16b8) >> 8);
    iVar13 = *(int *)(param_1 + 0x16bc) + uVar9 + -0x10;
    uVar4 = (undefined2)((int)(uint)uVar2 >> (0x10U - *(int *)(param_1 + 0x16bc) & 0xff));
  }
  else {
    iVar13 = uVar9 + uVar12;
  }
  *(int *)(param_1 + 0x16bc) = iVar13;
  *(undefined2 *)(param_1 + 0x16b8) = uVar4;
  return 0;
}

