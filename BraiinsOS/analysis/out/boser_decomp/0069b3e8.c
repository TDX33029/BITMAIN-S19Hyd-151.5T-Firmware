// FUN_0069b3e8 @ 0069b3e8 size=440 calls_out=3 calls_in=3
// strings: 

void FUN_0069b3e8(uint *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_a8 [132];
  
  iVar8 = *param_2;
  uVar11 = param_2[2];
  if (*(uint *)(iVar8 + 0x880) != (uVar11 & 0xfffffff0)) {
    do {
      iVar8 = *(int *)(iVar8 + 0x884);
      DataMemoryBarrier(0xb);
      if (iVar8 == 0) {
        *param_1 = 3;
        param_1[1] = 0;
        return;
      }
      *param_2 = iVar8;
      HintYield();
    } while (*(uint *)(iVar8 + 0x880) != (uVar11 & 0xfffffff0));
    uVar11 = param_2[2];
  }
  iVar2 = param_2[1];
  if (iVar2 != iVar8) {
    do {
      DataMemoryBarrier(0xb);
      if (((*(uint *)(iVar2 + 0x888) & 0x10000) == 0) || (uVar11 < *(uint *)(iVar2 + 0x88c))) break;
      iVar7 = *(int *)(iVar2 + 0x884);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2e16c);
      }
      iVar3 = 0;
      param_2[1] = iVar7;
      *(undefined4 *)(iVar2 + 0x880) = 0;
      *(undefined4 *)(iVar2 + 0x884) = 0;
      *(undefined4 *)(iVar2 + 0x888) = 0;
      iVar5 = *param_3;
      DataMemoryBarrier(0xb);
      do {
        if (iVar3 == 3) {
          thunk_FUN_01be4678();
          break;
        }
        *(int *)(iVar2 + 0x880) = *(int *)(iVar5 + 0x880) + 0x10;
        piVar6 = (int *)(iVar5 + 0x884);
        iVar5 = *piVar6;
        if (iVar5 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar6);
            if (bVar1) {
              *piVar6 = iVar2;
              bVar1 = true;
              goto LAB_0069b4d8;
            }
            iVar5 = *piVar6;
          } while (iVar5 == 0);
        }
        bVar1 = false;
        ClearExclusiveLocal();
LAB_0069b4d8:
        iVar3 = iVar3 + 1;
        DataMemoryBarrier(0xb);
      } while (!bVar1);
      HintYield();
      iVar2 = iVar7;
    } while (iVar7 != iVar8);
    iVar8 = *param_2;
    uVar11 = param_2[2];
  }
  uVar4 = uVar11 & 0xf;
  DataMemoryBarrier(0xb);
  if ((*(uint *)(iVar8 + 0x888) >> uVar4 & 1) == 0) {
    uVar4 = 2;
    if ((*(uint *)(iVar8 + 0x888) & 0x20000) == 0) {
      uVar4 = 3;
    }
    uVar10 = 0;
  }
  else {
    puVar9 = (uint *)(iVar8 + (uVar4 | uVar4 << 4) * 8);
    uVar4 = *puVar9;
    uVar10 = puVar9[1];
    FUN_01bed4e2(auStack_a8,puVar9 + 2,0x80);
    if (uVar10 == 0 && (1 < uVar4) <= uVar10) {
      param_2[2] = uVar11 + 1;
    }
  }
  *param_1 = uVar4;
  param_1[1] = uVar10;
  FUN_01bed4e2(param_1 + 2,auStack_a8,0x80);
  return;
}

