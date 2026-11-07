// FUN_0167bbc0 @ 0167bbc0 size=488 calls_out=4 calls_in=1
// strings: assertion failed: match track_edge_idx {     LeftOrRight::Left(idx) => idx <= old_left_len;     LeftOrRight::Right(idx) => idx <= right_len; } | assertion failed: new_left_len <= CAPACITY

void FUN_0167bbc0(int *param_1,int *param_2,uint param_3,uint param_4)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  
  iVar9 = param_2[3];
  uVar16 = (uint)*(ushort *)(iVar9 + 0x32);
  uVar10 = uVar16;
  if ((param_3 & 1) != 0) {
    uVar10 = (uint)*(ushort *)(param_2[5] + 0x32);
  }
  if (uVar10 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: match track_edge_idx {\n    LeftOrRight::Left(idx) => idx <= old_left_len,\n    LeftOrRight::Right(idx) => idx <= right_len,\n}"
                 ,0x8e,&DAT_01d2ff90);
  }
  iVar12 = param_2[5];
  iVar8 = uVar16 + 1;
  uVar11 = (uint)*(ushort *)(iVar12 + 0x32);
  uVar10 = iVar8 + uVar11;
  if (0xb < uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: new_left_len <= CAPACITY",0x2a,&DAT_01d2ffa0);
  }
  iVar14 = *param_2;
  uVar15 = param_2[2];
  uVar2 = param_2[1];
  iVar3 = param_2[4];
  uVar6 = (uint)*(ushort *)(iVar14 + 0x32);
  *(short *)(iVar9 + 0x32) = (short)uVar10;
  iVar4 = iVar14 + uVar15 * 4;
  puVar5 = (undefined4 *)(iVar4 + 4);
  uVar13 = *puVar5;
  FUN_01bed864(puVar5,iVar4 + 8);
  *(undefined4 *)(iVar9 + 4 + uVar16 * 4) = uVar13;
  FUN_01bed4e2(iVar9 + 4 + iVar8 * 4,iVar12 + 4,uVar11 << 2);
  iVar4 = iVar14 + (uVar15 + 1) * 4;
  FUN_01bed864(iVar4 + 0x34,iVar4 + 0x38,(~uVar15 + uVar6) * 4);
  if (uVar15 + 1 < uVar6) {
    do {
      iVar4 = uVar15 * 4;
      uVar15 = uVar15 + 1;
      piVar7 = *(int **)(iVar14 + iVar4 + 0x38);
      *(short *)(piVar7 + 0xc) = (short)uVar15;
      *piVar7 = iVar14;
    } while (uVar6 - 1 != uVar15);
  }
  *(short *)(iVar14 + 0x32) = *(short *)(iVar14 + 0x32) + -1;
  if (1 < uVar2) {
    iVar4 = uVar11 + 1;
    if (iVar4 != uVar10 - uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
    }
    FUN_01bed4e2(iVar9 + 0x34 + iVar8 * 4,iVar12 + 0x34,iVar4 * 4);
    iVar14 = uVar16 + 0xe;
    do {
      piVar7 = *(int **)(iVar9 + iVar14 * 4);
      sVar1 = (short)iVar14;
      iVar14 = iVar14 + 1;
      iVar4 = iVar4 + -1;
      *(short *)(piVar7 + 0xc) = sVar1 + -0xd;
      *piVar7 = iVar9;
    } while (iVar4 != 0);
  }
  thunk_FUN_01be4678(iVar12);
  if ((param_3 & 1) != 0) {
    param_4 = param_4 + iVar8;
  }
  *param_1 = iVar9;
  param_1[1] = iVar3;
  param_1[2] = param_4;
  return;
}

