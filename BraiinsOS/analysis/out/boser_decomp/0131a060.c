// FUN_0131a060 @ 0131a060 size=352 calls_out=2 calls_in=3
// strings: 

void FUN_0131a060(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 uVar9;
  undefined1 auStack_c38 [1032];
  undefined4 auStack_830 [256];
  undefined1 auStack_430 [1028];
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar2 = 0;
  do {
    iVar3 = iVar2 + 1;
    auStack_830[iVar2 * 4] = &DAT_01348fc4;
    auStack_830[iVar2 * 4 + 1] = 0;
    auStack_830[iVar2 * 4 + 2] = 0;
    auStack_830[iVar2 * 4 + 3] = 0;
    iVar2 = iVar3;
  } while (iVar3 != 0x40);
  FUN_01bed4e2(auStack_c38,param_2,0x404);
  FUN_01bed4e2(param_2,auStack_830,0x400);
  *(undefined4 *)(param_2 + 0x400) = 0;
  DataMemoryBarrier(0xb);
  uVar9 = *(undefined4 *)(param_1 + 0x40);
  FUN_01bed4e2(auStack_430,auStack_c38,0x404);
  local_28 = 0;
  local_2c = uVar9;
  uVar4 = FUN_01319e48(auStack_430);
  puVar5 = (uint *)(param_1 + 0x20);
LAB_0131a10c:
  do {
    uVar6 = *puVar5;
    DataMemoryBarrier(0xb);
    uVar7 = *(uint *)((uVar6 & 0xfffffffc) + 0x408);
    DataMemoryBarrier(0xb);
    if (uVar7 < 4) {
      puVar8 = (uint *)((uVar6 & 0xfffffffc) + 0x408);
      if (*puVar8 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar8);
          if (bVar1) {
            *puVar8 = uVar4;
            if (*puVar5 == uVar6) {
              DataMemoryBarrier(0xb);
              do {
                bVar1 = (bool)hasExclusiveAccess(puVar5);
                if (bVar1) {
                  *puVar5 = uVar4;
                  return;
                }
              } while (*puVar5 == uVar6);
            }
            ClearExclusiveLocal();
            return;
          }
        } while (*puVar8 == 0);
      }
    }
    else if (*puVar5 == uVar6) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar5);
        if (bVar1) {
          *puVar5 = uVar7;
          goto LAB_0131a10c;
        }
      } while (*puVar5 == uVar6);
    }
    ClearExclusiveLocal();
  } while( true );
}

