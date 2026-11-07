// FUN_00683830 @ 00683830 size=200 calls_out=2 calls_in=1
// strings: 

void FUN_00683830(undefined4 *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)(param_2 + 0x90);
  puVar2 = (uint *)(param_2 + 0x90);
  DataMemoryBarrier(0xb);
  while( true ) {
    if ((uVar4 & 1) != 0) {
      FUN_01bed4e2(param_1 + 2,param_3,0x88);
      uVar3 = 1;
      goto LAB_006838f0;
    }
    if (uVar4 < 2) break;
    uVar5 = *puVar2;
    if (uVar5 == uVar4) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
        if (bVar1) {
          *puVar2 = uVar4 - 2;
          bVar1 = true;
          uVar4 = uVar5;
          goto LAB_00683894;
        }
        uVar5 = *puVar2;
      } while (uVar5 == uVar4);
    }
    bVar1 = false;
    ClearExclusiveLocal();
    uVar4 = uVar5;
LAB_00683894:
    DataMemoryBarrier(0xb);
    if (bVar1) {
      FUN_0068d1b8(param_2,param_3);
      uVar3 = 2;
LAB_006838f0:
      *param_1 = uVar3;
      param_1[1] = 0;
      return;
    }
  }
  FUN_01bed4e2(param_1 + 2,param_3,0x88);
  uVar3 = 0;
  goto LAB_006838f0;
}

