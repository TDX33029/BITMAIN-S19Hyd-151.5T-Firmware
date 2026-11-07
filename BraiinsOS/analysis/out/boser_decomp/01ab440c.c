// FUN_01ab440c @ 01ab440c size=360 calls_out=1 calls_in=12
// strings: 

void FUN_01ab440c(int *param_1,int *param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_1c;
  undefined4 *local_18;
  code *local_14;
  
  uVar2 = (param_3 & 0x3fffffff) >> 0x16;
  if (uVar2 < (uint)param_2[1]) {
    iVar8 = *(int *)(*param_2 + uVar2 * 4);
    DataMemoryBarrier(0xb);
    if (iVar8 != 0) {
      uVar2 = 0x20 - LZCOUNT((param_3 & 0x3fffff) + 0x20 >> 6);
      if (uVar2 < *(uint *)(iVar8 + 0xc)) {
        piVar3 = (int *)(*(int *)(iVar8 + 8) + uVar2 * 0x14);
        if ((*piVar3 != 0) &&
           (uVar2 = (param_3 & 0x3fffff) - piVar3[4], iVar4 = *piVar3 + uVar2 * 0x40,
           uVar2 < (uint)piVar3[1])) {
          uVar2 = *(uint *)(iVar4 + 0x38);
          puVar5 = (uint *)(iVar4 + 0x38);
          DataMemoryBarrier(0xb);
          do {
            if ((uVar2 & 3) == 2) {
              local_1c = 2;
              local_14 = FUN_012fd72c;
              local_18 = &local_1c;
                    /* WARNING: Subroutine does not return */
              FUN_012fb100(&DAT_005315bb,&local_18,&DAT_01d2ecb0);
            }
            uVar7 = (uVar2 & 0x3fffffff) >> 2;
            if (((0x3fffffff < (uVar2 ^ param_3)) || ((uVar2 & 3) != 0)) || (0xffffffd < uVar7))
            goto LAB_01ab4530;
            uVar6 = *puVar5;
            if (uVar6 == uVar2) {
              DataMemoryBarrier(0xb);
              do {
                bVar1 = (bool)hasExclusiveAccess(puVar5);
                if (bVar1) {
                  *puVar5 = uVar2 & 0xc0000000 | (uVar7 + 1) * 4;
                  bVar1 = true;
                  uVar2 = uVar6;
                  goto LAB_01ab450c;
                }
                uVar6 = *puVar5;
              } while (uVar6 == uVar2);
            }
            bVar1 = false;
            ClearExclusiveLocal();
            uVar2 = uVar6;
LAB_01ab450c:
            DataMemoryBarrier(0xb);
          } while (!bVar1);
          if (iVar4 != 0) {
            *param_1 = iVar4;
            param_1[1] = iVar8;
            param_1[2] = param_3;
            return;
          }
        }
      }
    }
  }
LAB_01ab4530:
  *param_1 = 0;
  return;
}

