// FUN_0167b3a4 @ 0167b3a4 size=508 calls_out=4 calls_in=1
// strings: assertion failed: new_left_len <= CAPACITY

undefined8 FUN_0167b3a4(int *param_1)

{
  short sVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  
  iVar16 = param_1[3];
  iVar18 = param_1[5];
  uVar7 = (uint)*(ushort *)(iVar16 + 0xb6);
  uVar13 = (uint)*(ushort *)(iVar18 + 0xb6);
  iVar8 = uVar7 + 1;
  uVar9 = iVar8 + uVar13;
  if (0xb < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: new_left_len <= CAPACITY",0x2a,&DAT_01d2ffa0);
  }
  iVar10 = *param_1;
  uVar15 = param_1[2];
  uVar5 = param_1[1];
  uVar2 = *(undefined8 *)param_1;
  uVar11 = (uint)*(ushort *)(iVar10 + 0xb6);
  iVar3 = iVar10 + uVar15 * 4;
  *(short *)(iVar16 + 0xb6) = (short)uVar9;
  puVar4 = (undefined4 *)(iVar3 + 4);
  uVar17 = *puVar4;
  FUN_01bed864(puVar4,iVar3 + 8);
  *(undefined4 *)(iVar16 + 4 + uVar7 * 4) = uVar17;
  FUN_01bed4e2(iVar16 + 4 + iVar8 * 4,iVar18 + 4,uVar13 << 2);
  iVar3 = iVar10 + uVar15 * 0xc;
  uVar17 = *(undefined4 *)(iVar3 + 0x30);
  uVar12 = *(undefined4 *)(iVar3 + 0x34);
  uVar14 = *(undefined4 *)(iVar3 + 0x38);
  FUN_01bed864((undefined4 *)(iVar3 + 0x30),iVar3 + 0x3c,(~uVar15 + uVar11) * 0xc);
  puVar4 = (undefined4 *)(iVar16 + 0x30 + uVar7 * 0xc);
  *puVar4 = uVar17;
  puVar4[1] = uVar12;
  puVar4[2] = uVar14;
  FUN_01bed4e2(iVar16 + 0x30 + iVar8 * 0xc,iVar18 + 0x30,uVar13 * 0xc);
  iVar3 = iVar10 + (uVar15 + 1) * 4;
  FUN_01bed864(iVar3 + 0xb8,iVar3 + 0xbc,(~uVar15 + uVar11) * 4);
  if (uVar15 + 1 < uVar11) {
    do {
      iVar3 = uVar15 * 4;
      uVar15 = uVar15 + 1;
      piVar6 = *(int **)(iVar10 + iVar3 + 0xbc);
      *(short *)(piVar6 + 0x2d) = (short)uVar15;
      *piVar6 = iVar10;
    } while (uVar11 - 1 != uVar15);
  }
  *(short *)(iVar10 + 0xb6) = *(short *)(iVar10 + 0xb6) + -1;
  if (1 < uVar5) {
    iVar3 = uVar13 + 1;
    if (iVar3 != uVar9 - uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
    }
    FUN_01bed4e2(iVar16 + 0xb8 + iVar8 * 4,iVar18 + 0xb8,iVar3 * 4);
    iVar8 = uVar7 + 0x2f;
    do {
      piVar6 = *(int **)(iVar16 + iVar8 * 4);
      sVar1 = (short)iVar8;
      iVar8 = iVar8 + 1;
      iVar3 = iVar3 + -1;
      *(short *)(piVar6 + 0x2d) = sVar1 + -0x2e;
      *piVar6 = iVar16;
    } while (iVar3 != 0);
  }
  thunk_FUN_01be4678(iVar18);
  return uVar2;
}

