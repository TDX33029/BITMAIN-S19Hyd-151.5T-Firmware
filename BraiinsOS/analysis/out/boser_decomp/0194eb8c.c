// FUN_0194eb8c @ 0194eb8c size=548 calls_out=4 calls_in=1
// strings: assertion failed: new_left_len <= CAPACITY

undefined8 FUN_0194eb8c(int *param_1)

{
  undefined8 uVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 auStack_120 [252];
  
  iVar5 = param_1[3];
  iVar14 = param_1[5];
  uVar7 = (uint)*(ushort *)(iVar5 + 0xb8a);
  uVar3 = (uint)*(ushort *)(iVar14 + 0xb8a);
  iVar15 = uVar7 + 1;
  uVar8 = iVar15 + uVar3;
  if (0xb < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: new_left_len <= CAPACITY",0x2a,&DAT_01d2ffa0);
  }
  iVar6 = *param_1;
  uVar12 = param_1[2];
  uVar4 = param_1[1];
  uVar1 = *(undefined8 *)param_1;
  puVar2 = (ushort *)(iVar6 + 0xb8a);
  uVar10 = (uint)*puVar2;
  *(ushort *)(iVar5 + 0xb8a) = (ushort)uVar8;
  iVar9 = iVar6 + uVar12 * 0x10;
  FUN_01bed4e2(auStack_120,iVar9,0x10);
  iVar11 = ~uVar12 + uVar10;
  FUN_01bed864(iVar9,iVar9 + 0x10,iVar11 * 0x10);
  FUN_01bed4e2(iVar5 + uVar7 * 0x10,auStack_120,0x10);
  FUN_01bed4e2(iVar5 + iVar15 * 0x10,iVar14,uVar3 << 4);
  iVar13 = iVar6 + uVar12 * 0xfc;
  iVar9 = iVar13 + 0xb4;
  FUN_01bed4e2(auStack_120,iVar9,0xfc);
  FUN_01bed864(iVar9,iVar13 + 0x1b0,iVar11 * 0xfc);
  FUN_01bed4e2(iVar5 + 0xb4 + uVar7 * 0xfc,auStack_120,0xfc);
  FUN_01bed4e2(iVar5 + 0xb4 + iVar15 * 0xfc,iVar14 + 0xb4,uVar3 * 0xfc);
  iVar9 = iVar6 + (uVar12 + 1) * 4;
  FUN_01bed864(iVar9 + 0xb8c,iVar9 + 0xb90,iVar11 * 4);
  if (uVar12 + 1 < uVar10) {
    do {
      iVar9 = uVar12 * 4;
      uVar12 = uVar12 + 1;
      iVar9 = *(int *)(iVar6 + iVar9 + 0xb90);
      *(short *)(iVar9 + 0xb88) = (short)uVar12;
      *(int *)(iVar9 + 0xb0) = iVar6;
    } while (uVar10 - 1 != uVar12);
  }
  *puVar2 = *puVar2 - 1;
  if (1 < uVar4) {
    iVar9 = uVar3 + 1;
    if (iVar9 != uVar8 - uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
    }
    FUN_01bed4e2(iVar5 + 0xb8c + iVar15 * 4,iVar14 + 0xb8c,iVar9 * 4);
    do {
      iVar15 = uVar7 * 4;
      uVar7 = uVar7 + 1;
      iVar9 = iVar9 + -1;
      iVar15 = *(int *)(iVar5 + iVar15 + 0xb90);
      *(short *)(iVar15 + 0xb88) = (short)uVar7;
      *(int *)(iVar15 + 0xb0) = iVar5;
    } while (iVar9 != 0);
  }
  thunk_FUN_01be4678(iVar14);
  return uVar1;
}

