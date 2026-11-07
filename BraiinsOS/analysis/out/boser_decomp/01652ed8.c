// FUN_01652ed8 @ 01652ed8 size=340 calls_out=2 calls_in=16
// strings: 

void FUN_01652ed8(uint *param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int local_30;
  int *local_2c;
  undefined4 local_28;
  uint local_24;
  
  uVar3 = *param_1;
  do {
    uVar6 = 0;
    do {
      while( true ) {
        while ((uVar3 & 1) == 0) {
          uVar4 = *param_1;
          if (uVar4 == uVar3) {
            bVar1 = (bool)hasExclusiveAccess(param_1);
            if (bVar1) {
              *param_1 = uVar3 | 1;
            }
            bVar2 = false;
            if (bVar1) {
              DataMemoryBarrier(0xb);
              bVar2 = true;
            }
          }
          else {
            bVar2 = false;
            ClearExclusiveLocal();
          }
          uVar3 = uVar4;
          if (bVar2) {
            return;
          }
        }
        uVar4 = uVar3 & 0xfffffffc;
        if ((uVar4 != 0) || (9 < uVar6)) break;
        if (uVar6 < 3) {
          iVar5 = 2 << (uVar6 & 0xff);
          do {
            iVar5 = iVar5 + -1;
            HintYield();
          } while (iVar5 != 0);
        }
        else {
          FUN_01bea67c();
        }
        uVar6 = uVar6 + 1;
        uVar3 = *param_1;
      }
      local_2c = &local_30;
      if (uVar4 != 0) {
        local_2c = (int *)0x0;
      }
      local_24 = 0;
      uVar7 = 1;
      local_30 = 1;
      if (uVar4 != 0) {
        local_24 = uVar4;
      }
      local_28 = 0;
      uVar4 = *param_1;
      if (uVar4 == uVar3) {
        DataMemoryBarrier(0xb);
        bVar1 = (bool)hasExclusiveAccess(param_1);
        if (bVar1) {
          *param_1 = uVar3 & 3 | (uint)&local_30;
        }
        bVar2 = false;
        if (bVar1) {
          DataMemoryBarrier(0xb);
          bVar2 = true;
        }
      }
      else {
        bVar2 = false;
        ClearExclusiveLocal();
      }
      uVar3 = uVar4;
    } while (!bVar2);
    while (DataMemoryBarrier(0xb), local_30 != 0) {
      FUN_01be6c3c(0xf0,&local_30,0x80,1,0,uVar7);
    }
    uVar3 = *param_1;
  } while( true );
}

