// FUN_01194b1c @ 01194b1c size=436 calls_out=2 calls_in=3
// strings: 

void FUN_01194b1c(uint *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  bool bVar6;
  uint uVar7;
  int *piVar8;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  
  iVar3 = *param_2;
  uVar1 = param_2[2];
  uVar7 = *(uint *)(iVar3 + 0x280);
  while (uVar7 != (uVar1 & 0xfffffff0)) {
    iVar3 = *(int *)(iVar3 + 0x284);
    DataMemoryBarrier(0xb);
    if (iVar3 == 0) {
      *param_1 = 5;
      return;
    }
    *param_2 = iVar3;
    HintYield();
    uVar7 = *(uint *)(iVar3 + 0x280);
  }
  iVar2 = param_2[1];
  if (iVar2 != iVar3) {
    do {
      DataMemoryBarrier(0xb);
      if ((*(uint *)(iVar2 + 0x288) & 0x10000) == 0) break;
      uVar1 = param_2[2];
      if (uVar1 < *(uint *)(iVar2 + 0x28c)) goto LAB_01194c40;
      if (*(int *)(iVar2 + 0x284) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2e16c);
      }
      iVar3 = 0;
      param_2[1] = *(int *)(iVar2 + 0x284);
      *(undefined4 *)(iVar2 + 0x280) = 0;
      *(undefined4 *)(iVar2 + 0x284) = 0;
      *(undefined4 *)(iVar2 + 0x288) = 0;
      iVar4 = *param_3;
      DataMemoryBarrier(0xb);
      do {
        if (iVar3 == 3) {
          thunk_FUN_01be4678(iVar2);
          break;
        }
        *(int *)(iVar2 + 0x280) = *(int *)(iVar4 + 0x280) + 0x10;
        piVar8 = (int *)(iVar4 + 0x284);
        iVar4 = *piVar8;
        if (iVar4 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar6 = (bool)hasExclusiveAccess(piVar8);
            if (bVar6) {
              *piVar8 = iVar2;
              bVar6 = true;
              goto LAB_01194c04;
            }
            iVar4 = *piVar8;
          } while (iVar4 == 0);
        }
        bVar6 = false;
        ClearExclusiveLocal();
LAB_01194c04:
        iVar3 = iVar3 + 1;
        DataMemoryBarrier(0xb);
      } while (!bVar6);
      HintYield();
      iVar3 = *param_2;
      iVar2 = param_2[1];
    } while (iVar2 != iVar3);
    uVar1 = param_2[2];
  }
LAB_01194c40:
  DataMemoryBarrier(0xb);
  if ((*(uint *)(iVar3 + 0x288) >> (uVar1 & 0xf) & 1) == 0) {
    uVar7 = 4;
    if ((*(uint *)(iVar3 + 0x288) & 0x20000) == 0) {
      uVar7 = 5;
    }
  }
  else {
    puVar5 = (uint *)(iVar3 + (uVar1 & 0xf) * 0x28);
    uVar7 = *puVar5;
    local_40 = puVar5[1];
    uStack_3c = puVar5[2];
    uStack_38 = puVar5[3];
    uStack_34 = puVar5[4];
    local_30 = puVar5[5];
    uStack_2c = puVar5[6];
    uStack_28 = puVar5[7];
    uStack_24 = puVar5[8];
    uStack_20 = puVar5[9];
  }
  *param_1 = uVar7;
  if ((uVar7 & 6) != 4) {
    param_2[2] = uVar1 + 1;
  }
  param_1[1] = local_40;
  param_1[2] = uStack_3c;
  param_1[3] = uStack_38;
  param_1[4] = uStack_34;
  param_1[5] = local_30;
  param_1[6] = uStack_2c;
  param_1[7] = uStack_28;
  param_1[8] = uStack_24;
  param_1[9] = uStack_20;
  return;
}

