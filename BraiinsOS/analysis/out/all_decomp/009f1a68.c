// FUN_009f1a68 @ 009f1a68 size=376 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_009f1a68(uint *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = 0;
  uVar3 = *param_1;
  while( true ) {
    while( true ) {
      uVar5 = param_1[0x12] - 1 & uVar3;
      uVar7 = *(uint *)(param_1[0x25] + uVar5 * 0x10);
      DataMemoryBarrier(0xb);
      if (uVar3 + 1 == uVar7) break;
      if (uVar7 == uVar3) {
        DataMemoryBarrier(0xb);
        if ((param_1[8] & ~param_1[0x12]) == uVar3) {
          iVar4 = 0;
          if ((param_1[0x12] & param_1[8]) == 0) {
            return 0;
          }
          *(undefined4 *)(param_2 + 0x20) = 0;
          goto LAB_009f1bd4;
        }
        uVar3 = 6;
        if (uVar8 < 6) {
          uVar3 = uVar8;
        }
        uVar5 = 1;
        do {
          uVar7 = uVar5 >> (uVar3 & 0xff);
          uVar5 = uVar5 + 1;
          HintYield();
        } while (uVar7 == 0);
        uVar3 = *param_1;
        if (uVar8 < 7) {
          uVar8 = uVar8 + 1;
        }
      }
      else {
        if (uVar8 < 7) {
          uVar3 = 1;
          do {
            uVar5 = uVar3 >> (uVar8 & 0xff);
            uVar3 = uVar3 + 1;
            HintYield();
          } while (uVar5 == 0);
          uVar8 = uVar8 + 1;
        }
        else {
          FUN_016da3a8();
          if (uVar8 < 0xb) {
            uVar8 = uVar8 + 1;
          }
        }
        uVar3 = *param_1;
      }
    }
    if (param_1[0x10] <= uVar5 + 1) {
      uVar7 = param_1[0x11] + (uVar3 & -param_1[0x11]);
    }
    uVar6 = *param_1;
    if (uVar6 == uVar3) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = uVar7;
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
    if (bVar2) break;
    uVar3 = 6;
    if (uVar8 < 6) {
      uVar3 = uVar8;
    }
    uVar5 = 1;
    do {
      uVar7 = uVar5 >> (uVar3 & 0xff);
      uVar5 = uVar5 + 1;
      HintYield();
    } while (uVar7 == 0);
    uVar3 = uVar6;
    if (uVar8 < 7) {
      uVar8 = uVar8 + 1;
    }
  }
  uVar8 = param_1[0x11];
  *(uint *)(param_2 + 0x20) = param_1[0x25] + uVar5 * 0x10;
  iVar4 = uVar8 + uVar3;
LAB_009f1bd4:
  *(int *)(param_2 + 0x24) = iVar4;
  return 1;
}

