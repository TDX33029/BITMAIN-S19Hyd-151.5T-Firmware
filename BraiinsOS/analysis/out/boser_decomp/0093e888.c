// FUN_0093e888 @ 0093e888 size=376 calls_out=2 calls_in=3
// strings: 

undefined8 FUN_0093e888(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  iVar9 = *param_1;
  uVar10 = param_1[2];
  uVar3 = *(uint *)(iVar9 + 0x40);
  if (uVar3 != (uVar10 & 0xfffffff0)) {
    do {
      iVar9 = *(int *)(iVar9 + 0x44);
      DataMemoryBarrier(0xb);
      if (iVar9 == 0) {
        return CONCAT44(uVar3,2);
      }
      *param_1 = iVar9;
      HintYield();
      uVar3 = *(uint *)(iVar9 + 0x40);
    } while (uVar3 != (uVar10 & 0xfffffff0));
    uVar10 = param_1[2];
  }
  iVar2 = param_1[1];
  if (param_1[1] != iVar9) {
    do {
      DataMemoryBarrier(0xb);
      if (((*(uint *)(iVar2 + 0x48) & 0x10000) == 0) || (uVar10 < *(uint *)(iVar2 + 0x4c))) break;
      iVar8 = *(int *)(iVar2 + 0x44);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2e16c);
      }
      iVar4 = 0;
      param_1[1] = iVar8;
      *(undefined4 *)(iVar2 + 0x40) = 0;
      *(undefined4 *)(iVar2 + 0x44) = 0;
      *(undefined4 *)(iVar2 + 0x48) = 0;
      iVar6 = *param_2;
      DataMemoryBarrier(0xb);
      do {
        if (iVar4 == 3) {
          thunk_FUN_01be4678();
          break;
        }
        *(int *)(iVar2 + 0x40) = *(int *)(iVar6 + 0x40) + 0x10;
        piVar7 = (int *)(iVar6 + 0x44);
        iVar6 = *piVar7;
        if (iVar6 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar7);
            if (bVar1) {
              *piVar7 = iVar2;
              bVar1 = true;
              goto LAB_0093e96c;
            }
            iVar6 = *piVar7;
          } while (iVar6 == 0);
        }
        bVar1 = false;
        ClearExclusiveLocal();
LAB_0093e96c:
        iVar4 = iVar4 + 1;
        DataMemoryBarrier(0xb);
      } while (!bVar1);
      HintYield();
      iVar2 = iVar8;
    } while (iVar8 != iVar9);
    iVar9 = *param_1;
    uVar10 = param_1[2];
  }
  uVar5 = *(uint *)(iVar9 + 0x48);
  uVar3 = 1;
  DataMemoryBarrier(0xb);
  if ((uVar5 >> (uVar10 & 0xf) & 1) == 0) {
    if ((uVar5 & 0x20000) == 0) {
      uVar3 = 2;
    }
  }
  else {
    uVar5 = *(uint *)(iVar9 + (uVar10 & 0xf) * 4);
    uVar3 = 0;
  }
  if ((uVar3 != 2) && ((uVar3 & 1) == 0)) {
    param_1[2] = uVar10 + 1;
    uVar3 = 0;
  }
  return CONCAT44(uVar5,uVar3);
}

