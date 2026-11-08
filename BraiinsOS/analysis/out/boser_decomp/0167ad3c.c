// FUN_0167ad3c @ 0167ad3c size=396 calls_out=4 calls_in=1
// strings: assertion failed: new_left_len <= CAPACITY

undefined8 FUN_0167ad3c(int *param_1)

{
  short sVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  
  iVar12 = param_1[3];
  iVar5 = param_1[5];
  uVar14 = (uint)*(ushort *)(iVar12 + 0x32);
  uVar15 = (uint)*(ushort *)(iVar5 + 0x32);
  iVar13 = uVar14 + 1;
  uVar9 = iVar13 + uVar15;
  if (0xb < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: new_left_len <= CAPACITY",0x2a,&DAT_01d2ffa0);
  }
  iVar11 = *param_1;
  uVar16 = param_1[2];
  uVar7 = param_1[1];
  uVar2 = *(undefined8 *)param_1;
  uVar8 = (uint)*(ushort *)(iVar11 + 0x32);
  *(short *)(iVar12 + 0x32) = (short)uVar9;
  iVar10 = (~uVar16 + uVar8) * 4;
  iVar3 = iVar11 + uVar16 * 4;
  puVar4 = (undefined4 *)(iVar3 + 4);
  uVar17 = *puVar4;
  FUN_01bed864(puVar4,iVar3 + 8,iVar10);
  *(undefined4 *)(iVar12 + 4 + uVar14 * 4) = uVar17;
  FUN_01bed4e2(iVar12 + 4 + iVar13 * 4,iVar5 + 4,uVar15 << 2);
  iVar3 = iVar11 + (uVar16 + 1) * 4;
  FUN_01bed864(iVar3 + 0x34,iVar3 + 0x38,iVar10);
  if (uVar16 + 1 < uVar8) {
    do {
      iVar10 = uVar16 * 4;
      uVar16 = uVar16 + 1;
      piVar6 = *(int **)(iVar11 + iVar10 + 0x38);
      *(short *)(piVar6 + 0xc) = (short)uVar16;
      *piVar6 = iVar11;
    } while (uVar8 - 1 != uVar16);
  }
  *(short *)(iVar11 + 0x32) = *(short *)(iVar11 + 0x32) + -1;
  if (1 < uVar7) {
    iVar10 = uVar15 + 1;
    if (iVar10 != uVar9 - uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
    }
    FUN_01bed4e2(iVar12 + 0x34 + iVar13 * 4,iVar5 + 0x34,iVar10 * 4);
    iVar13 = uVar14 + 0xe;
    do {
      piVar6 = *(int **)(iVar12 + iVar13 * 4);
      sVar1 = (short)iVar13;
      iVar13 = iVar13 + 1;
      iVar10 = iVar10 + -1;
      *(short *)(piVar6 + 0xc) = sVar1 + -0xd;
      *piVar6 = iVar12;
    } while (iVar10 != 0);
  }
  thunk_FUN_01be4678(iVar5);
  return uVar2;
}

