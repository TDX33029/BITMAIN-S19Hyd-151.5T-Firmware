// FUN_01286a10 @ 01286a10 size=344 calls_out=2 calls_in=12
// strings: 

/* WARNING: Removing unreachable block (ram,0x01286b1c) */

void FUN_01286a10(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined4 uVar8;
  int local_30;
  int *local_2c;
  undefined4 local_28;
  uint local_24;
  
  uVar2 = *param_1;
  do {
    uVar6 = 0;
    do {
      while( true ) {
        while( true ) {
          while ((uVar2 & 1) == 0) {
            uVar3 = *param_1;
            if (uVar3 == uVar2) {
              bVar1 = (bool)hasExclusiveAccess(param_1);
              if (bVar1) {
                *param_1 = uVar2 | 1;
              }
              bVar7 = false;
              if (bVar1) {
                DataMemoryBarrier(0xb);
                bVar7 = true;
              }
            }
            else {
              bVar7 = false;
              ClearExclusiveLocal();
            }
            uVar2 = uVar3;
            if (bVar7) {
              return;
            }
          }
          bVar7 = 2 < uVar2;
          if (uVar2 < 4) {
            bVar7 = 9 < uVar6;
          }
          if (bVar7) break;
          if (uVar6 < 3) {
            iVar4 = 2 << (uVar6 & 0xff);
            do {
              iVar4 = iVar4 + -1;
              HintYield();
            } while (iVar4 != 0);
          }
          else {
            FUN_016da3a8();
          }
          uVar6 = uVar6 + 1;
          uVar2 = *param_1;
        }
        uVar3 = uVar2 & 0xfffffffc;
        local_2c = &local_30;
        if (uVar3 != 0) {
          local_2c = (int *)0x0;
        }
        local_24 = 0;
        uVar8 = 1;
        local_30 = 1;
        if (uVar3 != 0) {
          local_24 = uVar3;
        }
        local_28 = 0;
        uVar3 = *param_1;
        if (uVar3 == uVar2) break;
        ClearExclusiveLocal();
        uVar2 = uVar3;
      }
      uVar5 = uVar2 & 3;
      DataMemoryBarrier(0xb);
      bVar7 = (bool)hasExclusiveAccess(param_1);
      uVar2 = uVar3;
    } while (!bVar7);
    *param_1 = uVar5 | (uint)&local_30;
    DataMemoryBarrier(0xb);
    while (DataMemoryBarrier(0xb), local_30 != 0) {
      FUN_016d6968(0xf0,&local_30,0x80,1,0,uVar8);
    }
    uVar2 = *param_1;
  } while( true );
}

