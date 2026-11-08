// FUN_00a677cc @ 00a677cc size=428 calls_out=3 calls_in=4
// strings: 

void FUN_00a677cc(int *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  
  if (param_3 != 0) {
    iVar2 = param_2 + param_3 * 0x18;
    puVar3 = (uint *)(iVar2 + -0x18);
    if (param_3 != 1) {
      uVar10 = *puVar3;
      uVar11 = *(uint *)(iVar2 + -0x14);
      param_3 = param_3 * 0x18;
      do {
        puVar6 = (uint *)(param_2 + -0x30 + param_3);
        param_3 = param_3 + -0x18;
        uVar7 = puVar6[1];
        uVar12 = (uint)((int)uVar7 >> 0x1f) >> 1 ^ uVar7;
        uVar5 = (uint)((int)uVar11 >> 0x1f) >> 1 ^ uVar11;
        bVar16 = (((uint)((byte)((int)uVar7 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar7 >> 0x1f) >> 1)
                 ^ *puVar6) <
                 (((uint)((byte)((int)uVar11 >> 0x1f) & 1) << 0x1f |
                  (uint)((int)uVar11 >> 0x1f) >> 1) ^ uVar10);
        if ((int)(uVar12 - (uVar5 + bVar16)) < 0 ==
            (SBORROW4(uVar12,uVar5) != SBORROW4(uVar12 - uVar5,(uint)bVar16))) {
          uVar10 = *puVar6;
          uVar11 = uVar7;
          puVar3 = puVar6;
        }
      } while (param_3 != 0x18);
    }
    if (puVar3[4] != 0) {
      uVar11 = puVar3[3];
      iVar8 = 1;
      iVar2 = 1;
      uVar13 = *(undefined4 *)(uVar11 + 4);
      iVar14 = *(int *)(uVar11 + 8);
      if ((iVar14 != 0) && (iVar2 = thunk_FUN_016d4a50(iVar14), iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar14);
      }
      FUN_016dd1aa(iVar2,uVar13,iVar14);
      iVar15 = *(int *)(uVar11 + 0x14);
      uVar13 = *(undefined4 *)(uVar11 + 0x10);
      if ((iVar15 != 0) && (iVar8 = thunk_FUN_016d4a50(iVar15), iVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar15);
      }
      FUN_016dd1aa(iVar8,uVar13,iVar15);
      iVar9 = *(int *)(uVar11 + 0x20);
      uVar13 = *(undefined4 *)(uVar11 + 0x1c);
      if (iVar9 == 0) {
        iVar4 = 1;
      }
      else {
        iVar4 = thunk_FUN_016d4a50(iVar9);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar9);
        }
      }
      FUN_016dd1aa(iVar4,uVar13,iVar9);
      uVar1 = *(undefined1 *)(uVar11 + 0x24);
      param_1[8] = iVar9;
      *param_1 = iVar14;
      param_1[1] = iVar2;
      param_1[2] = iVar14;
      param_1[3] = iVar15;
      param_1[4] = iVar8;
      param_1[5] = iVar15;
      param_1[6] = iVar9;
      param_1[7] = iVar4;
      *(undefined1 *)(param_1 + 9) = uVar1;
      return;
    }
  }
  *param_1 = -0x80000000;
  return;
}

