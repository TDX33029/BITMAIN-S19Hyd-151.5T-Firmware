// FUN_017075e4 @ 017075e4 size=448 calls_out=3 calls_in=3
// strings: 

void FUN_017075e4(uint *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_e0 [188];
  
  iVar6 = *param_2;
  uVar11 = param_2[2];
  if (*(uint *)(iVar6 + 0xc00) != (uVar11 & 0xfffffff0)) {
    do {
      iVar6 = *(int *)(iVar6 + 0xc04);
      DataMemoryBarrier(0xb);
      if (iVar6 == 0) {
        *param_1 = 4;
        param_1[1] = 0;
        return;
      }
      *param_2 = iVar6;
      HintYield();
    } while (*(uint *)(iVar6 + 0xc00) != (uVar11 & 0xfffffff0));
    uVar11 = param_2[2];
  }
  iVar2 = param_2[1];
  if (iVar2 != iVar6) {
    do {
      DataMemoryBarrier(0xb);
      if (((*(uint *)(iVar2 + 0xc08) & 0x10000) == 0) || (uVar11 < *(uint *)(iVar2 + 0xc0c))) break;
      iVar9 = *(int *)(iVar2 + 0xc04);
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2e16c);
      }
      iVar3 = 0;
      param_2[1] = iVar9;
      *(undefined4 *)(iVar2 + 0xc00) = 0;
      *(undefined4 *)(iVar2 + 0xc04) = 0;
      *(undefined4 *)(iVar2 + 0xc08) = 0;
      iVar4 = *param_3;
      DataMemoryBarrier(0xb);
      do {
        if (iVar3 == 3) {
          thunk_FUN_01be4678();
          break;
        }
        *(int *)(iVar2 + 0xc00) = *(int *)(iVar4 + 0xc00) + 0x10;
        piVar5 = (int *)(iVar4 + 0xc04);
        iVar4 = *piVar5;
        if (iVar4 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar5);
            if (bVar1) {
              *piVar5 = iVar2;
              bVar1 = true;
              goto LAB_017076d4;
            }
            iVar4 = *piVar5;
          } while (iVar4 == 0);
        }
        bVar1 = false;
        ClearExclusiveLocal();
LAB_017076d4:
        iVar3 = iVar3 + 1;
        DataMemoryBarrier(0xb);
      } while (!bVar1);
      HintYield();
      iVar2 = iVar9;
    } while (iVar9 != iVar6);
    iVar6 = *param_2;
    uVar11 = param_2[2];
  }
  DataMemoryBarrier(0xb);
  if ((*(uint *)(iVar6 + 0xc08) >> (uVar11 & 0xf) & 1) == 0) {
    uVar8 = 3;
    if ((*(uint *)(iVar6 + 0xc08) & 0x20000) == 0) {
      uVar8 = 4;
    }
    uVar10 = 0;
  }
  else {
    puVar7 = (uint *)(iVar6 + (uVar11 & 0xf) * 0xc0);
    uVar8 = *puVar7;
    uVar10 = puVar7[1];
    FUN_01bed4e2(auStack_e0,puVar7 + 2,0xb8);
  }
  if (uVar10 != uVar8 < 3 || uVar10 - (uVar8 < 3) < (uint)(1 < uVar8 - 3)) {
    param_2[2] = uVar11 + 1;
  }
  *param_1 = uVar8;
  param_1[1] = uVar10;
  FUN_01bed4e2(param_1 + 2,auStack_e0,0xb8);
  return;
}

