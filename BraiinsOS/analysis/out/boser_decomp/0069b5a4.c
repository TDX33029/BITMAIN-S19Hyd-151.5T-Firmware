// FUN_0069b5a4 @ 0069b5a4 size=468 calls_out=2 calls_in=3
// strings: 

void FUN_0069b5a4(uint *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint local_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  iVar8 = *param_2;
  uVar10 = param_2[2];
  if (*(uint *)(iVar8 + 0x400) != (uVar10 & 0xfffffff0)) {
    do {
      iVar8 = *(int *)(iVar8 + 0x404);
      DataMemoryBarrier(0xb);
      if (iVar8 == 0) {
        *param_1 = 0;
        param_1[1] = 0;
        return;
      }
      *param_2 = iVar8;
      HintYield();
    } while (*(uint *)(iVar8 + 0x400) != (uVar10 & 0xfffffff0));
    uVar10 = param_2[2];
  }
  iVar2 = param_2[1];
  if (iVar2 != iVar8) {
    do {
      DataMemoryBarrier(0xb);
      if (((*(uint *)(iVar2 + 0x408) & 0x10000) == 0) || (uVar10 < *(uint *)(iVar2 + 0x40c))) break;
      iVar7 = *(int *)(iVar2 + 0x404);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2e16c);
      }
      iVar4 = 0;
      param_2[1] = iVar7;
      *(undefined4 *)(iVar2 + 0x400) = 0;
      *(undefined4 *)(iVar2 + 0x404) = 0;
      *(undefined4 *)(iVar2 + 0x408) = 0;
      iVar5 = *param_3;
      DataMemoryBarrier(0xb);
      do {
        if (iVar4 == 3) {
          thunk_FUN_01be4678();
          break;
        }
        *(int *)(iVar2 + 0x400) = *(int *)(iVar5 + 0x400) + 0x10;
        piVar6 = (int *)(iVar5 + 0x404);
        iVar5 = *piVar6;
        if (iVar5 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar6);
            if (bVar1) {
              *piVar6 = iVar2;
              bVar1 = true;
              goto LAB_0069b694;
            }
            iVar5 = *piVar6;
          } while (iVar5 == 0);
        }
        bVar1 = false;
        ClearExclusiveLocal();
LAB_0069b694:
        iVar4 = iVar4 + 1;
        DataMemoryBarrier(0xb);
      } while (!bVar1);
      HintYield();
      iVar2 = iVar7;
    } while (iVar7 != iVar8);
    iVar8 = *param_2;
    uVar10 = param_2[2];
  }
  uVar3 = 1;
  DataMemoryBarrier(0xb);
  if ((*(uint *)(iVar8 + 0x408) >> (uVar10 & 0xf) & 1) == 0) {
    uVar3 = (*(uint *)(iVar8 + 0x408) & 0x3ffff) >> 0x11;
    uVar11 = 0;
  }
  else {
    puVar9 = (uint *)(iVar8 + (uVar10 & 0xf) * 0x40);
    uVar11 = *puVar9;
    local_60 = puVar9[1];
    uStack_5c = puVar9[2];
    uStack_58 = puVar9[3];
    uStack_54 = puVar9[4];
    uStack_50 = puVar9[5];
    local_4c = puVar9[6];
    uStack_48 = puVar9[7];
    uStack_44 = puVar9[8];
    uStack_40 = puVar9[9];
    uStack_3c = puVar9[10];
    local_38 = puVar9[0xb];
    uStack_34 = puVar9[0xc];
    uStack_30 = puVar9[0xd];
    uStack_2c = puVar9[0xe];
    uStack_28 = puVar9[0xf];
    if (uVar11 != 0) {
      param_2[2] = uVar10 + 1;
    }
  }
  *param_1 = uVar3;
  param_1[1] = 0;
  param_1[2] = uVar11;
  param_1[3] = local_60;
  param_1[4] = uStack_5c;
  param_1[5] = uStack_58;
  param_1[6] = uStack_54;
  param_1[7] = uStack_50;
  param_1[8] = local_4c;
  param_1[9] = uStack_48;
  param_1[10] = uStack_44;
  param_1[0xb] = uStack_40;
  param_1[0xc] = uStack_3c;
  param_1[0xd] = local_38;
  param_1[0xe] = uStack_34;
  param_1[0xf] = uStack_30;
  param_1[0x10] = uStack_2c;
  param_1[0x11] = uStack_28;
  return;
}

