// FUN_01aa24b4 @ 01aa24b4 size=216 calls_out=3 calls_in=0
// strings: assertion failed: prev.ref_count() >= 1

void FUN_01aa24b4(uint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  undefined4 auStack_378 [219];
  
  DataMemoryBarrier(0xb);
  uVar4 = *param_1;
  do {
    uVar3 = uVar4;
    uVar6 = uVar3;
    if ((uVar3 & 3) == 0) {
      uVar6 = uVar3 | 1;
    }
    uVar4 = *param_1;
    if (uVar4 == uVar3) {
      DataMemoryBarrier(0xb);
      do {
        bVar5 = (bool)hasExclusiveAccess(param_1);
        if (bVar5) {
          *param_1 = uVar6 | 0x20;
          bVar5 = true;
          goto LAB_01aa2510;
        }
        uVar4 = *param_1;
      } while (uVar4 == uVar3);
    }
    bVar5 = false;
    ClearExclusiveLocal();
LAB_01aa2510:
    DataMemoryBarrier(0xb);
    if (bVar5) {
      if ((uVar3 & 3) == 0) {
        FUN_01a8cfa8(param_1 + 6);
        uVar4 = FUN_019d8b4c();
        if ((uVar4 & 8) == 0) {
          auStack_378[0] = 2;
          FUN_01a9a724(param_1 + 6,auStack_378);
        }
        else if ((uVar4 & 0x10) != 0) {
          if (param_1[0xe6] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
          }
          (**(code **)(param_1[0xe6] + 8))(param_1[0xe7]);
          uVar4 = FUN_019d8c50(param_1);
          if ((uVar4 & 8) == 0) {
            if (param_1[0xe6] != 0) {
              (**(code **)(param_1[0xe6] + 0xc))(param_1[0xe7]);
            }
            param_1[0xe6] = 0;
          }
        }
        iVar1 = FUN_019dc584(param_1[6],param_1);
        uVar2 = 2;
        if (iVar1 == 0) {
          uVar2 = 1;
        }
        iVar1 = FUN_019d8bc0(param_1,uVar2);
        if (iVar1 != 0) {
          FUN_01a8d7c0(param_1);
        }
        return;
      }
      DataMemoryBarrier(0xb);
      do {
        uVar4 = *param_1;
        bVar5 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar5);
      *param_1 = uVar4 - 0x40;
      DataMemoryBarrier(0xb);
      if (uVar4 < 0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("assertion failed: prev.ref_count() >= 1",0x27,&DAT_01d28de4);
      }
      if ((uVar4 & 0xffffffc0) == 0x40) {
        FUN_01a8d7c0(param_1);
        return;
      }
      return;
    }
  } while( true );
}

