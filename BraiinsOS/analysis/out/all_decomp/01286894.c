// FUN_01286894 @ 01286894 size=380 calls_out=0 calls_in=14
// strings: 

/* WARNING: Removing unreachable block (ram,0x01286900) */

void FUN_01286894(uint *param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_stack_00000000;
  
  uVar3 = *param_1;
  do {
    uVar7 = uVar3;
    if (uVar7 < 4) {
      return;
    }
    if ((uVar7 & 2) != 0) {
      return;
    }
    uVar3 = *param_1;
    if (uVar3 == uVar7) {
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = uVar7 | 2;
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
  } while (!bVar2);
  do {
    uVar3 = uVar7 & 0xfffffffc;
    puVar4 = *(undefined4 **)(uVar3 + 4);
    if (puVar4 == (undefined4 *)0x0) {
      uVar6 = uVar3;
      do {
        uVar5 = *(uint *)(uVar6 + 0xc);
        puVar4 = *(undefined4 **)(uVar5 + 4);
        *(uint *)(uVar5 + 8) = uVar6;
        uVar6 = uVar5;
      } while (puVar4 == (undefined4 *)0x0);
    }
    *(undefined4 **)(uVar3 + 4) = puVar4;
    if ((uVar7 & 1) == 0) {
      if (puVar4[2] != 0) {
        *(undefined4 *)(uVar3 + 4) = puVar4[2];
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(param_1);
        } while (!bVar2);
        *param_1 = *param_1 & 0xfffffffd;
LAB_012869f0:
        DataMemoryBarrier(0xb);
        *puVar4 = 0;
        software_interrupt(0);
        FUN_016d3496(puVar4,0x81,1,in_stack_00000000);
        return;
      }
      do {
        uVar3 = *param_1;
        if (uVar3 == uVar7) {
          DataMemoryBarrier(0xb);
          bVar2 = (bool)hasExclusiveAccess(param_1);
          if (bVar2) {
            *param_1 = uVar7 & 1;
            goto LAB_012869f0;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        uVar7 = uVar3;
      } while (uVar3 < 4);
    }
    else {
      uVar3 = *param_1;
      if (uVar3 == uVar7) {
        DataMemoryBarrier(0xb);
        bVar2 = (bool)hasExclusiveAccess(param_1);
        if (bVar2) {
          *param_1 = uVar7 & 0xfffffffd;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    }
    DataMemoryBarrier(0xb);
    uVar7 = uVar3;
  } while( true );
}

