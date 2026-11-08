// FUN_01652d70 @ 01652d70 size=360 calls_out=0 calls_in=18
// strings: 

void FUN_01652d70(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_stack_00000000;
  
  uVar2 = *param_1;
  do {
    uVar7 = uVar2;
    if (uVar7 < 4) {
      return;
    }
    if ((uVar7 & 2) != 0) {
      return;
    }
    uVar2 = *param_1;
    if (uVar2 == uVar7) {
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = uVar7 | 2;
      }
      bVar4 = false;
      if (bVar1) {
        DataMemoryBarrier(0xb);
        bVar4 = true;
      }
    }
    else {
      bVar4 = false;
      ClearExclusiveLocal();
    }
  } while (!bVar4);
  do {
    uVar2 = uVar7 & 0xfffffffc;
    puVar3 = *(undefined4 **)(uVar2 + 4);
    if (puVar3 == (undefined4 *)0x0) {
      uVar6 = uVar2;
      do {
        uVar5 = *(uint *)(uVar6 + 0xc);
        puVar3 = *(undefined4 **)(uVar5 + 4);
        *(uint *)(uVar5 + 8) = uVar6;
        uVar6 = uVar5;
      } while (puVar3 == (undefined4 *)0x0);
    }
    *(undefined4 **)(uVar2 + 4) = puVar3;
    if ((uVar7 & 1) == 0) {
      if (puVar3[2] != 0) {
        *(undefined4 *)(uVar2 + 4) = puVar3[2];
        DataMemoryBarrier(0xb);
        do {
          bVar4 = (bool)hasExclusiveAccess(param_1);
        } while (!bVar4);
        *param_1 = *param_1 & 0xfffffffd;
LAB_01652eb4:
        DataMemoryBarrier(0xb);
        *puVar3 = 0;
        software_interrupt(0);
        FUN_01be3b5a(puVar3,0x81,1,in_stack_00000000);
        return;
      }
      do {
        uVar2 = *param_1;
        if (uVar2 == uVar7) {
          DataMemoryBarrier(0xb);
          bVar4 = (bool)hasExclusiveAccess(param_1);
          if (bVar4) {
            *param_1 = uVar7 & 1;
          }
        }
        else {
          bVar4 = false;
          ClearExclusiveLocal();
        }
        if (bVar4) goto LAB_01652eb4;
        uVar7 = uVar2;
      } while (uVar2 < 4);
    }
    else {
      uVar2 = *param_1;
      if (uVar2 == uVar7) {
        DataMemoryBarrier(0xb);
        bVar4 = (bool)hasExclusiveAccess(param_1);
        if (bVar4) {
          *param_1 = uVar7 & 0xfffffffd;
        }
      }
      else {
        bVar4 = false;
        ClearExclusiveLocal();
      }
      if (bVar4) {
        return;
      }
    }
    DataMemoryBarrier(0xb);
    uVar7 = uVar2;
  } while( true );
}

