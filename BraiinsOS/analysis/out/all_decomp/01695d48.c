// FUN_01695d48 @ 01695d48 size=432 calls_out=1 calls_in=2
// strings: 

undefined4 FUN_01695d48(int *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  
  uVar4 = param_1[0x12];
  if ((uVar4 & param_1[8]) == 0) {
    puVar8 = (uint *)(param_1 + 8);
    uVar7 = 0;
    uVar3 = param_1[8];
    do {
      uVar4 = uVar4 - 1 & uVar3;
      uVar5 = *(uint *)(param_1[0x25] + uVar4 * 0x10);
      DataMemoryBarrier(0xb);
      if (uVar3 == uVar5) {
        if (uVar4 + 1 < (uint)param_1[0x10]) {
          uVar6 = uVar3 + 1;
          uVar5 = *puVar8;
          if (uVar5 == uVar3) goto LAB_01695e64;
LAB_01695de0:
          bVar2 = false;
          ClearExclusiveLocal();
        }
        else {
          uVar6 = param_1[0x11] + (uVar3 & -param_1[0x11]);
          uVar5 = *puVar8;
          if (uVar5 != uVar3) goto LAB_01695de0;
LAB_01695e64:
          DataMemoryBarrier(0xb);
          bVar1 = (bool)hasExclusiveAccess(puVar8);
          if (bVar1) {
            *puVar8 = uVar6;
          }
          bVar2 = false;
          if (bVar1) {
            DataMemoryBarrier(0xb);
            bVar2 = true;
          }
        }
        if (bVar2) {
          *(uint *)(param_2 + 0x20) = param_1[0x25] + uVar4 * 0x10;
          *(uint *)(param_2 + 0x24) = uVar3 + 1;
          return 1;
        }
        uVar4 = 6;
        if (uVar7 < 6) {
          uVar4 = uVar7;
        }
        uVar3 = 1;
        do {
          uVar6 = uVar3 >> (uVar4 & 0xff);
          uVar3 = uVar3 + 1;
          HintYield();
        } while (uVar6 == 0);
        if (uVar7 < 7) {
          uVar7 = uVar7 + 1;
        }
      }
      else if (param_1[0x11] + uVar5 == uVar3 + 1) {
        DataMemoryBarrier(0xb);
        if (param_1[0x11] + *param_1 == uVar3) {
          return 0;
        }
        uVar4 = 6;
        if (uVar7 < 6) {
          uVar4 = uVar7;
        }
        uVar3 = 1;
        do {
          uVar5 = uVar3 >> (uVar4 & 0xff);
          uVar3 = uVar3 + 1;
          HintYield();
        } while (uVar5 == 0);
        uVar5 = *puVar8;
        if (uVar7 < 7) {
          uVar7 = uVar7 + 1;
        }
      }
      else {
        if (uVar7 < 7) {
          uVar4 = 1;
          do {
            uVar3 = uVar4 >> (uVar7 & 0xff);
            uVar4 = uVar4 + 1;
            HintYield();
          } while (uVar3 == 0);
          uVar7 = uVar7 + 1;
        }
        else {
          FUN_016da3a8();
          if (uVar7 < 0xb) {
            uVar7 = uVar7 + 1;
          }
        }
        uVar5 = *puVar8;
      }
      uVar4 = param_1[0x12];
      uVar3 = uVar5;
    } while ((uVar4 & uVar5) == 0);
  }
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  return 1;
}

