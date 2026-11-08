// FUN_00e480e8 @ 00e480e8 size=516 calls_out=6 calls_in=3
// strings: 

void FUN_00e480e8(uint *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  
  if (param_1[9] != 0x80000000) {
    uVar6 = param_1[8];
    uVar2 = param_1[3];
    while ((uVar2 < uVar6 + param_2 && (param_1[0xc] != 0))) {
      uVar3 = param_1[0xb] + 1;
      puVar7 = (undefined4 *)(param_1[10] + param_1[0xb] * 8);
      piVar9 = (int *)*puVar7;
      iVar10 = puVar7[1];
      uVar2 = uVar3 - param_1[9];
      if (uVar3 < param_1[9]) {
        uVar2 = uVar3;
      }
      param_1[0xb] = uVar2;
      uVar3 = *(uint *)(iVar10 + 8);
      param_1[0xc] = param_1[0xc] - 1;
      uVar2 = uVar3;
      if (uVar3 < 5) {
        uVar2 = 4;
      }
      iVar12 = (int)piVar9 + (uVar2 - 1 & 0xfffffff8) + 8;
      uVar15 = FUN_00e48374(iVar12);
      piVar8 = (int *)uVar15;
      if (((uint)(uVar15 >> 0x20) & 0xff) == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01886ab4);
      }
      iVar13 = piVar8[2];
      iVar11 = piVar8[3];
      iVar14 = piVar8[4];
      piVar8[2] = -0x80000000;
      if (iVar13 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01886ac4);
      }
      if ((((uVar15 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar4 = FUN_015bf3f8(), iVar4 == 0)) {
        *(undefined1 *)(piVar8 + 1) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar8;
        bVar1 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar1);
      *piVar8 = 0;
      if (iVar4 == 2) {
        FUN_016d6968(0xf0,piVar8,0x81,1);
      }
      (**(code **)(iVar10 + 0xc))(iVar12 + (uVar3 - 1 & 0xffffffe8) + 0x18);
      uVar2 = *param_1;
      uVar3 = param_1[3];
      if (uVar3 == uVar2) {
        FUN_01561020(param_1);
        uVar2 = *param_1;
        uVar3 = param_1[3];
      }
      uVar5 = param_1[2] + uVar3;
      param_1[3] = uVar3 + 1;
      uVar3 = uVar5 - uVar2;
      if (uVar5 < uVar2) {
        uVar3 = uVar5;
      }
      piVar8 = (int *)(param_1[1] + uVar3 * 0xc);
      *piVar8 = iVar13;
      piVar8[1] = iVar11;
      piVar8[2] = iVar14;
      DataMemoryBarrier(0xb);
      do {
        iVar12 = *piVar9;
        bVar1 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar1);
      *piVar9 = iVar12 + -1;
      if (iVar12 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aac624(piVar9,iVar10);
      }
      uVar2 = param_1[3];
    }
  }
  return;
}

