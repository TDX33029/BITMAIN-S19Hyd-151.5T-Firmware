// FUN_0069b77c @ 0069b77c size=432 calls_out=2 calls_in=3
// strings: 

void FUN_0069b77c(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  iVar7 = *param_2;
  uVar8 = param_2[2];
  if (*(uint *)(iVar7 + 0x240) != (uVar8 & 0xfffffff0)) {
    do {
      iVar7 = *(int *)(iVar7 + 0x244);
      DataMemoryBarrier(0xb);
      if (iVar7 == 0) {
        *param_1 = -0x7fffffff;
        return;
      }
      *param_2 = iVar7;
      HintYield();
    } while (*(uint *)(iVar7 + 0x240) != (uVar8 & 0xfffffff0));
    uVar8 = param_2[2];
  }
  iVar2 = param_2[1];
  if (param_2[1] != iVar7) {
    do {
      DataMemoryBarrier(0xb);
      if (((*(uint *)(iVar2 + 0x248) & 0x10000) == 0) || (uVar8 < *(uint *)(iVar2 + 0x24c))) break;
      iVar6 = *(int *)(iVar2 + 0x244);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2e16c);
      }
      iVar3 = 0;
      param_2[1] = iVar6;
      *(undefined4 *)(iVar2 + 0x240) = 0;
      *(undefined4 *)(iVar2 + 0x244) = 0;
      *(undefined4 *)(iVar2 + 0x248) = 0;
      iVar4 = *param_3;
      DataMemoryBarrier(0xb);
      do {
        if (iVar3 == 3) {
          thunk_FUN_01be4678();
          break;
        }
        *(int *)(iVar2 + 0x240) = *(int *)(iVar4 + 0x240) + 0x10;
        piVar5 = (int *)(iVar4 + 0x244);
        iVar4 = *piVar5;
        if (iVar4 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar5);
            if (bVar1) {
              *piVar5 = iVar2;
              bVar1 = true;
              goto LAB_0069b868;
            }
            iVar4 = *piVar5;
          } while (iVar4 == 0);
        }
        bVar1 = false;
        ClearExclusiveLocal();
LAB_0069b868:
        iVar3 = iVar3 + 1;
        DataMemoryBarrier(0xb);
      } while (!bVar1);
      HintYield();
      iVar2 = iVar6;
    } while (iVar6 != iVar7);
    iVar7 = *param_2;
    uVar8 = param_2[2];
  }
  DataMemoryBarrier(0xb);
  if ((*(uint *)(iVar7 + 0x248) >> (uVar8 & 0xf) & 1) == 0) {
    iVar2 = -0x80000000;
    if ((*(uint *)(iVar7 + 0x248) & 0x20000) == 0) {
      iVar2 = -0x7fffffff;
    }
  }
  else {
    piVar5 = (int *)(iVar7 + (uVar8 & 0xf) * 0x24);
    iVar2 = *piVar5;
    local_40 = piVar5[1];
    iStack_3c = piVar5[2];
    iStack_38 = piVar5[3];
    iStack_34 = piVar5[4];
    local_30 = piVar5[5];
    iStack_2c = piVar5[6];
    iStack_28 = piVar5[7];
    iStack_24 = piVar5[8];
    if (-0x7fffffff < iVar2) {
      param_2[2] = uVar8 + 1;
    }
  }
  *param_1 = iVar2;
  param_1[1] = local_40;
  param_1[2] = iStack_3c;
  param_1[3] = iStack_38;
  param_1[4] = iStack_34;
  param_1[5] = local_30;
  param_1[6] = iStack_2c;
  param_1[7] = iStack_28;
  param_1[8] = iStack_24;
  return;
}

