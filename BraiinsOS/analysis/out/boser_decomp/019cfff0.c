// FUN_019cfff0 @ 019cfff0 size=412 calls_out=2 calls_in=3
// strings: 

void FUN_019cfff0(uint *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  
  iVar9 = *param_2;
  uVar13 = param_2[2];
  if (*(uint *)(iVar9 + 0x80) != (uVar13 & 0xfffffff0)) {
    do {
      iVar9 = *(int *)(iVar9 + 0x84);
      DataMemoryBarrier(0xb);
      if (iVar9 == 0) {
        *param_1 = 2;
        param_1[1] = 0;
        return;
      }
      *param_2 = iVar9;
      HintYield();
    } while (*(uint *)(iVar9 + 0x80) != (uVar13 & 0xfffffff0));
    uVar13 = param_2[2];
  }
  iVar2 = param_2[1];
  if (param_2[1] != iVar9) {
    do {
      DataMemoryBarrier(0xb);
      if (((*(uint *)(iVar2 + 0x88) & 0x10000) == 0) || (uVar13 < *(uint *)(iVar2 + 0x8c))) break;
      iVar11 = *(int *)(iVar2 + 0x84);
      if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2e16c);
      }
      iVar4 = 0;
      param_2[1] = iVar11;
      *(undefined4 *)(iVar2 + 0x80) = 0;
      *(undefined4 *)(iVar2 + 0x84) = 0;
      *(undefined4 *)(iVar2 + 0x88) = 0;
      iVar6 = *param_3;
      DataMemoryBarrier(0xb);
      do {
        if (iVar4 == 3) {
          thunk_FUN_01be4678();
          break;
        }
        *(int *)(iVar2 + 0x80) = *(int *)(iVar6 + 0x80) + 0x10;
        piVar8 = (int *)(iVar6 + 0x84);
        iVar6 = *piVar8;
        if (iVar6 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar8);
            if (bVar1) {
              *piVar8 = iVar2;
              bVar1 = true;
              goto LAB_019d00d8;
            }
            iVar6 = *piVar8;
          } while (iVar6 == 0);
        }
        bVar1 = false;
        ClearExclusiveLocal();
LAB_019d00d8:
        iVar4 = iVar4 + 1;
        DataMemoryBarrier(0xb);
      } while (!bVar1);
      HintYield();
      iVar2 = iVar11;
    } while (iVar11 != iVar9);
    iVar9 = *param_2;
    uVar13 = param_2[2];
  }
  uVar7 = uVar13 & 0xf;
  uVar3 = 1;
  DataMemoryBarrier(0xb);
  if ((*(uint *)(iVar9 + 0x88) >> uVar7 & 1) == 0) {
    uVar5 = *(uint *)(iVar9 + 0x88) & 0x20000;
    uVar12 = uVar5 >> 0x11 ^ 1;
    if (uVar5 == 0) {
      uVar3 = 2;
    }
  }
  else {
    puVar10 = (uint *)(iVar9 + uVar7 * 8);
    uVar5 = *puVar10;
    uVar12 = 0;
    uVar3 = 0;
    uVar7 = puVar10[1];
  }
  *param_1 = uVar3;
  param_1[1] = 0;
  if (uVar12 == 0 && (uVar3 & 1) == 0) {
    param_2[2] = uVar13 + 1;
  }
  param_1[2] = uVar5;
  param_1[3] = uVar7;
  return;
}

