// FUN_017091a8 @ 017091a8 size=572 calls_out=2 calls_in=2
// strings: 

void FUN_017091a8(uint *param_1)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  ushort *puVar6;
  uint uVar7;
  undefined4 extraout_r1;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  undefined1 *puVar11;
  ushort *puVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  ushort local_740 [255];
  ushort auStack_542 [271];
  uint local_324 [96];
  undefined1 auStack_1a4 [384];
  uint local_24;
  
  puVar10 = param_1 + 0x60;
  local_24 = DAT_018ddaf8;
  puVar12 = local_740;
  do {
    puVar6 = puVar12;
    puVar8 = puVar10 + -0x60;
    do {
      bVar2 = *(byte *)((int)puVar8 + 1);
      puVar9 = (uint *)((int)puVar8 + 3);
      uVar7 = *puVar8;
      puVar6[1] = (ushort)*(byte *)((int)puVar8 + 2) << 4 | (ushort)(bVar2 >> 4);
      *puVar6 = (ushort)(byte)uVar7 | (bVar2 & 0xf) << 8;
      puVar6 = puVar6 + 2;
      puVar8 = puVar9;
    } while (puVar10 != puVar9);
    puVar10 = puVar10 + 0x60;
    puVar12 = puVar12 + 0x100;
  } while (param_1 + 0x120 != puVar10);
  iVar13 = 2;
  puVar12 = auStack_542;
  while( true ) {
    puVar6 = puVar12 + -0x100;
    do {
      puVar6 = puVar6 + 1;
      uVar1 = *puVar6 + (short)((short)*puVar6 * 0x4ebf + 0x2000000 >> 0x1a) * -0xd01;
      *puVar6 = uVar1 ^ (uVar1 + 0xd01 ^ uVar1) &
                        (ushort)(-((uint)(int)(short)uVar1 >> 0x10) >> 0x10);
    } while (puVar12 != puVar6);
    puVar12 = puVar12 + 0x100;
    if (iVar13 == 1) break;
    iVar13 = 1;
  }
  puVar15 = auStack_1a4;
  iVar13 = 2;
  puVar12 = local_740;
  while( true ) {
    puVar6 = puVar12;
    puVar4 = puVar15 + -0x180;
    do {
      puVar11 = puVar4;
      uVar1 = puVar6[1];
      uVar3 = *puVar6;
      puVar6 = puVar6 + 2;
      *puVar11 = (char)uVar3;
      puVar11[2] = (char)((uint)(int)(short)uVar1 >> 4);
      puVar11[1] = (byte)((int)(short)uVar1 << 4) | (byte)(uVar3 >> 8);
      puVar4 = puVar11 + 3;
    } while (puVar11 + 3 != puVar15);
    puVar12 = puVar12 + 0x100;
    puVar15 = puVar11 + 0x183;
    if (iVar13 == 1) break;
    iVar13 = 1;
  }
  uVar14 = 0;
  uVar7 = 0;
  puVar10 = local_324;
  do {
    puVar8 = puVar10 + 1;
    uVar14 = uVar14 | *param_1 ^ *puVar10;
    uVar7 = uVar7 ^ *param_1 ^ *puVar10;
    puVar10 = puVar8;
    param_1 = param_1 + 1;
  } while (puVar8 != &local_24);
  uVar7 = ((uVar7 & 0xffff) >> 8 ^ uVar7 ^ (uVar7 & 0xffffff) >> 0x10 ^ uVar7 >> 0x18) & 0xff;
  FUN_0177aaa0(local_324,0x300);
  FUN_0177aaa0(local_740,0x400);
  uVar5 = 0;
  if ((uVar7 ^ -(uVar14 & 0xff | (uVar14 & 0xffff) >> 8 | (uVar14 & 0xffffff) >> 0x10 |
                uVar14 >> 0x18) >> 0x18) != uVar7) {
    uVar5 = 0xffffffff;
  }
  if ((local_24 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar5,extraout_r1,local_24 ^ DAT_018ddaf8,0);
  }
  return;
}

