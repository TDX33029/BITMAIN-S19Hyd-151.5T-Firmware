// FUN_00a06268 @ 00a06268 size=524 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_00a06268(uint *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  DataMemoryBarrier(0xb);
  uVar7 = param_1[1];
  uVar8 = 0;
  DataMemoryBarrier(0xb);
  uVar2 = *param_1;
  do {
    while (uVar5 = (uVar2 & 0x3f) >> 1, uVar5 == 0x1f) {
      if (uVar8 < 7) {
        uVar2 = 1;
        do {
          uVar7 = uVar2 >> (uVar8 & 0xff);
          uVar2 = uVar2 + 1;
          HintYield();
        } while (uVar7 == 0);
        goto LAB_00a06360;
      }
LAB_00a06298:
      FUN_016da3a8();
      if (uVar8 < 0xb) {
        uVar8 = uVar8 + 1;
      }
LAB_00a062a4:
      DataMemoryBarrier(0xb);
      uVar7 = param_1[1];
      DataMemoryBarrier(0xb);
      uVar2 = *param_1;
    }
    uVar6 = uVar2 + 2;
    if ((uVar2 & 1) == 0) {
      DataMemoryBarrier(0xb);
      uVar3 = param_1[8];
      if (uVar2 >> 1 == uVar3 >> 1) {
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        *(undefined4 *)(param_2 + 0x28) = 0;
        return 1;
      }
      if (0x3f < (uVar3 ^ uVar2)) {
        uVar6 = uVar6 | 1;
      }
    }
    if (uVar7 == 0) {
      if (6 < uVar8) goto LAB_00a06298;
      uVar2 = 1;
      do {
        uVar7 = uVar2 >> (uVar8 & 0xff);
        uVar2 = uVar2 + 1;
        HintYield();
      } while (uVar7 == 0);
LAB_00a06360:
      uVar8 = uVar8 + 1;
      goto LAB_00a062a4;
    }
    uVar3 = *param_1;
    if (uVar3 == uVar2) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = uVar6;
      }
      DataMemoryBarrier(0xb);
      if (bVar1) {
        if (uVar5 == 0x1e) {
          uVar2 = *(uint *)(uVar7 + 0x1f0);
          DataMemoryBarrier(0xb);
          if (uVar2 == 0) {
            uVar8 = 0;
            do {
              if (uVar8 < 7) {
                uVar2 = 1;
                do {
                  uVar3 = uVar2 >> (uVar8 & 0xff);
                  uVar2 = uVar2 + 1;
                  HintYield();
                } while (uVar3 == 0);
                uVar8 = uVar8 + 1;
                uVar2 = *(uint *)(uVar7 + 0x1f0);
                DataMemoryBarrier(0xb);
              }
              else {
                FUN_016da3a8();
                if (uVar8 < 0xb) {
                  uVar8 = uVar8 + 1;
                }
                uVar2 = *(uint *)(uVar7 + 0x1f0);
                DataMemoryBarrier(0xb);
              }
            } while (uVar2 == 0);
          }
          iVar4 = *(int *)(uVar2 + 0x1f0);
          DataMemoryBarrier(0xb);
          param_1[1] = uVar2;
          uVar6 = uVar6 & 0xfffffffe;
          DataMemoryBarrier(0xb);
          if (iVar4 != 0) {
            uVar6 = uVar6 | 1;
          }
          *param_1 = uVar6 + 2;
        }
        *(uint *)(param_2 + 0x28) = uVar7;
        *(uint *)(param_2 + 0x2c) = uVar5;
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    }
    uVar7 = param_1[1];
    uVar5 = 1;
    uVar2 = uVar8;
    if (5 < uVar8) {
      uVar2 = 6;
    }
    DataMemoryBarrier(0xb);
    do {
      uVar6 = uVar5 >> (uVar2 & 0xff);
      uVar5 = uVar5 + 1;
      HintYield();
    } while (uVar6 == 0);
    uVar2 = uVar3;
    if (uVar8 < 7) {
      uVar8 = uVar8 + 1;
    }
  } while( true );
}

