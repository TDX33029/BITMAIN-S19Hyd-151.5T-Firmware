// FUN_0167bdc0 @ 0167bdc0 size=536 calls_out=4 calls_in=1
// strings: assertion failed: match track_edge_idx {     LeftOrRight::Left(idx) => idx <= old_left_len;     LeftOrRight::Right(idx) => idx <= right_len; } | assertion failed: new_left_len <= CAPACITY

void FUN_0167bdc0(int *param_1,int *param_2,uint param_3,uint param_4)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  
  iVar9 = param_2[3];
  uVar8 = (uint)*(ushort *)(iVar9 + 0x8a);
  uVar11 = uVar8;
  if ((param_3 & 1) != 0) {
    uVar11 = (uint)*(ushort *)(param_2[5] + 0x8a);
  }
  if (uVar11 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: match track_edge_idx {\n    LeftOrRight::Left(idx) => idx <= old_left_len,\n    LeftOrRight::Right(idx) => idx <= right_len,\n}"
                 ,0x8e,&DAT_01d2ff90);
  }
  iVar16 = param_2[5];
  iVar10 = uVar8 + 1;
  uVar17 = (uint)*(ushort *)(iVar16 + 0x8a);
  uVar11 = iVar10 + uVar17;
  if (0xb < uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: new_left_len <= CAPACITY",0x2a,&DAT_01d2ffa0);
  }
  iVar15 = *param_2;
  uVar14 = param_2[2];
  uVar2 = param_2[1];
  iVar3 = param_2[4];
  uVar7 = (uint)*(ushort *)(iVar15 + 0x8a);
  iVar4 = iVar15 + uVar14 * 4;
  *(short *)(iVar9 + 0x8a) = (short)uVar11;
  puVar5 = (undefined4 *)(iVar4 + 0x5c);
  uVar13 = *puVar5;
  FUN_01bed864(puVar5,iVar4 + 0x60);
  *(undefined4 *)(iVar9 + 0x5c + uVar8 * 4) = uVar13;
  FUN_01bed4e2(iVar9 + 0x5c + iVar10 * 4,iVar16 + 0x5c,uVar17 << 2);
  puVar5 = (undefined4 *)(iVar15 + uVar14 * 8);
  uVar12 = *puVar5;
  uVar13 = puVar5[1];
  FUN_01bed864(puVar5,puVar5 + 2,(~uVar14 + uVar7) * 8);
  puVar5 = (undefined4 *)(iVar9 + uVar8 * 8);
  *puVar5 = uVar12;
  puVar5[1] = uVar13;
  FUN_01bed4e2(iVar9 + iVar10 * 8,iVar16,uVar17 << 3);
  iVar4 = iVar15 + (uVar14 + 1) * 4;
  FUN_01bed864(iVar4 + 0x8c,iVar4 + 0x90,(~uVar14 + uVar7) * 4);
  if (uVar14 + 1 < uVar7) {
    do {
      iVar4 = uVar14 * 4;
      uVar14 = uVar14 + 1;
      iVar4 = *(int *)(iVar15 + iVar4 + 0x90);
      *(short *)(iVar4 + 0x88) = (short)uVar14;
      *(int *)(iVar4 + 0x58) = iVar15;
    } while (uVar7 - 1 != uVar14);
  }
  *(short *)(iVar15 + 0x8a) = *(short *)(iVar15 + 0x8a) + -1;
  if (1 < uVar2) {
    iVar4 = uVar17 + 1;
    if (iVar4 != uVar11 - uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
    }
    FUN_01bed4e2(iVar9 + 0x8c + iVar10 * 4,iVar16 + 0x8c,iVar4 * 4);
    iVar15 = uVar8 + 0x24;
    do {
      iVar6 = *(int *)(iVar9 + iVar15 * 4);
      sVar1 = (short)iVar15;
      iVar15 = iVar15 + 1;
      iVar4 = iVar4 + -1;
      *(short *)(iVar6 + 0x88) = sVar1 + -0x23;
      *(int *)(iVar6 + 0x58) = iVar9;
    } while (iVar4 != 0);
  }
  thunk_FUN_01be4678(iVar16);
  if ((param_3 & 1) != 0) {
    param_4 = param_4 + iVar10;
  }
  *param_1 = iVar9;
  param_1[1] = iVar3;
  param_1[2] = param_4;
  return;
}

