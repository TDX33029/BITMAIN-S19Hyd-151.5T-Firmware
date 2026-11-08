// FUN_017c52b8 @ 017c52b8 size=448 calls_out=3 calls_in=3
// strings: 

void FUN_017c52b8(uint *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  undefined1 auStack_c0 [160];
  
  iVar3 = *param_2;
  uVar6 = *(uint *)(iVar3 + 0xa80);
  while (uVar6 != (param_2[2] & 0xfffffff0U)) {
    iVar3 = *(int *)(iVar3 + 0xa84);
    DataMemoryBarrier(0xb);
    if (iVar3 == 0) {
      *param_1 = 5;
      param_1[1] = 0;
      return;
    }
    *param_2 = iVar3;
    HintYield();
    uVar6 = *(uint *)(iVar3 + 0xa80);
  }
  iVar2 = param_2[1];
  if (iVar2 != iVar3) {
    do {
      DataMemoryBarrier(0xb);
      if (((*(uint *)(iVar2 + 0xa88) & 0x10000) == 0) ||
         ((uint)param_2[2] < *(uint *)(iVar2 + 0xa8c))) break;
      iVar3 = *(int *)(iVar2 + 0xa84);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2e16c);
      }
      iVar4 = 0;
      param_2[1] = iVar3;
      *(undefined4 *)(iVar2 + 0xa80) = 0;
      *(undefined4 *)(iVar2 + 0xa84) = 0;
      *(undefined4 *)(iVar2 + 0xa88) = 0;
      iVar7 = *param_3;
      DataMemoryBarrier(0xb);
      do {
        if (iVar4 == 3) {
          thunk_FUN_01be4678();
          break;
        }
        *(int *)(iVar2 + 0xa80) = *(int *)(iVar7 + 0xa80) + 0x10;
        piVar8 = (int *)(iVar7 + 0xa84);
        iVar7 = *piVar8;
        if (iVar7 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar8);
            if (bVar1) {
              *piVar8 = iVar2;
              bVar1 = true;
              goto LAB_017c53a4;
            }
            iVar7 = *piVar8;
          } while (iVar7 == 0);
        }
        bVar1 = false;
        ClearExclusiveLocal();
LAB_017c53a4:
        iVar4 = iVar4 + 1;
        DataMemoryBarrier(0xb);
      } while (!bVar1);
      HintYield();
      iVar2 = iVar3;
    } while (iVar3 != *param_2);
    iVar3 = *param_2;
  }
  DataMemoryBarrier(0xb);
  if ((*(uint *)(iVar3 + 0xa88) >> (param_2[2] & 0xfU) & 1) == 0) {
    uVar6 = 4;
    if ((*(uint *)(iVar3 + 0xa88) & 0x20000) == 0) {
      uVar6 = 5;
    }
    uVar9 = 0;
  }
  else {
    puVar5 = (uint *)(iVar3 + (short)(param_2[2] & 0xfU) * 0xa8);
    uVar6 = *puVar5;
    uVar9 = puVar5[1];
    FUN_01bed4e2(auStack_c0,puVar5 + 2,0xa0);
    if ((uVar6 & 6) != 4) {
      param_2[2] = param_2[2] + 1;
    }
  }
  *param_1 = uVar6;
  param_1[1] = uVar9;
  FUN_01bed4e2(param_1 + 2,auStack_c0,0xa0);
  return;
}

