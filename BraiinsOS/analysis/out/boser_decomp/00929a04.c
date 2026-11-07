// FUN_00929a04 @ 00929a04 size=452 calls_out=3 calls_in=3
// strings: 

void FUN_00929a04(undefined4 *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_b8 [136];
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar6 = *param_2;
  uVar9 = param_2[2];
  if (*(uint *)(iVar6 + 0x900) != (uVar9 & 0xfffffff0)) {
    do {
      iVar6 = *(int *)(iVar6 + 0x904);
      DataMemoryBarrier(0xb);
      if (iVar6 == 0) {
        param_1[2] = 4;
        return;
      }
      *param_2 = iVar6;
      HintYield();
    } while (*(uint *)(iVar6 + 0x900) != (uVar9 & 0xfffffff0));
    uVar9 = param_2[2];
  }
  iVar2 = param_2[1];
  if (iVar2 != iVar6) {
    do {
      DataMemoryBarrier(0xb);
      if (((*(uint *)(iVar2 + 0x908) & 0x10000) == 0) || (uVar9 < *(uint *)(iVar2 + 0x90c))) break;
      iVar8 = *(int *)(iVar2 + 0x904);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2e16c);
      }
      iVar3 = 0;
      param_2[1] = iVar8;
      *(undefined4 *)(iVar2 + 0x900) = 0;
      *(undefined4 *)(iVar2 + 0x904) = 0;
      *(undefined4 *)(iVar2 + 0x908) = 0;
      iVar4 = *param_3;
      DataMemoryBarrier(0xb);
      do {
        if (iVar3 == 3) {
          thunk_FUN_01be4678();
          break;
        }
        *(int *)(iVar2 + 0x900) = *(int *)(iVar4 + 0x900) + 0x10;
        piVar5 = (int *)(iVar4 + 0x904);
        iVar4 = *piVar5;
        if (iVar4 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar5);
            if (bVar1) {
              *piVar5 = iVar2;
              bVar1 = true;
              goto LAB_00929af4;
            }
            iVar4 = *piVar5;
          } while (iVar4 == 0);
        }
        bVar1 = false;
        ClearExclusiveLocal();
LAB_00929af4:
        iVar3 = iVar3 + 1;
        DataMemoryBarrier(0xb);
      } while (!bVar1);
      HintYield();
      iVar2 = iVar8;
    } while (iVar8 != iVar6);
    iVar6 = *param_2;
    uVar9 = param_2[2];
  }
  DataMemoryBarrier(0xb);
  if ((*(uint *)(iVar6 + 0x908) >> (uVar9 & 0xf) & 1) == 0) {
    iVar2 = 3;
    if ((*(uint *)(iVar6 + 0x908) & 0x20000) == 0) {
      iVar2 = 4;
    }
  }
  else {
    puVar7 = (undefined4 *)(iVar6 + (uVar9 & 0xf) * 0x90);
    local_30 = *puVar7;
    local_2c = puVar7[1];
    iVar2 = puVar7[2];
    FUN_01bed4e2(auStack_b8,puVar7 + 3,0x84);
  }
  if (1 < iVar2 - 3U) {
    param_2[2] = uVar9 + 1;
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = iVar2;
  FUN_01bed4e2(param_1 + 3,auStack_b8,0x84);
  return;
}

