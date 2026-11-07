// FUN_01194610 @ 01194610 size=412 calls_out=2 calls_in=3
// strings: 

void FUN_01194610(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int *piVar7;
  int local_28;
  int iStack_24;
  int iStack_20;
  
  iVar1 = *param_2;
  uVar3 = param_2[2];
  uVar6 = *(uint *)(iVar1 + 0x100);
  while (uVar6 != (uVar3 & 0xfffffff0)) {
    iVar1 = *(int *)(iVar1 + 0x104);
    DataMemoryBarrier(0xb);
    if (iVar1 == 0) {
      *param_1 = 4;
      return;
    }
    *param_2 = iVar1;
    HintYield();
    uVar6 = *(uint *)(iVar1 + 0x100);
  }
  iVar2 = param_2[1];
  if (iVar2 != iVar1) {
    do {
      DataMemoryBarrier(0xb);
      if ((*(uint *)(iVar2 + 0x108) & 0x10000) == 0) break;
      uVar3 = param_2[2];
      if (uVar3 < *(uint *)(iVar2 + 0x10c)) goto LAB_01194730;
      if (*(int *)(iVar2 + 0x104) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2e16c);
      }
      iVar1 = 0;
      param_2[1] = *(int *)(iVar2 + 0x104);
      *(undefined4 *)(iVar2 + 0x100) = 0;
      *(undefined4 *)(iVar2 + 0x104) = 0;
      *(undefined4 *)(iVar2 + 0x108) = 0;
      iVar4 = *param_3;
      DataMemoryBarrier(0xb);
      do {
        if (iVar1 == 3) {
          thunk_FUN_01be4678(iVar2);
          break;
        }
        *(int *)(iVar2 + 0x100) = *(int *)(iVar4 + 0x100) + 0x10;
        piVar7 = (int *)(iVar4 + 0x104);
        iVar4 = *piVar7;
        if (iVar4 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar5 = (bool)hasExclusiveAccess(piVar7);
            if (bVar5) {
              *piVar7 = iVar2;
              bVar5 = true;
              goto LAB_011946f8;
            }
            iVar4 = *piVar7;
          } while (iVar4 == 0);
        }
        bVar5 = false;
        ClearExclusiveLocal();
LAB_011946f8:
        iVar1 = iVar1 + 1;
        DataMemoryBarrier(0xb);
      } while (!bVar5);
      HintYield();
      iVar1 = *param_2;
      iVar2 = param_2[1];
    } while (iVar2 != iVar1);
    uVar3 = param_2[2];
  }
LAB_01194730:
  DataMemoryBarrier(0xb);
  if ((*(uint *)(iVar1 + 0x108) >> (uVar3 & 0xf) & 1) == 0) {
    iVar2 = 3;
    if ((*(uint *)(iVar1 + 0x108) & 0x20000) == 0) {
      iVar2 = 4;
    }
  }
  else {
    piVar7 = (int *)(iVar1 + (uVar3 & 0xf) * 0x10);
    iVar2 = *piVar7;
    local_28 = piVar7[1];
    iStack_24 = piVar7[2];
    iStack_20 = piVar7[3];
  }
  *param_1 = iVar2;
  if (1 < iVar2 - 3U) {
    param_2[2] = uVar3 + 1;
  }
  param_1[1] = local_28;
  param_1[2] = iStack_24;
  param_1[3] = iStack_20;
  return;
}

