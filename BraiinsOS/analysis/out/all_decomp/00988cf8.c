// FUN_00988cf8 @ 00988cf8 size=304 calls_out=4 calls_in=0
// strings: assertion failed: prev.ref_count() >= 1

void FUN_00988cf8(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 extraout_r1;
  uint uVar4;
  undefined4 local_220 [2];
  uint local_218;
  uint local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_118 [66];
  
  DataMemoryBarrier(0xb);
  uVar2 = *param_1;
  do {
    uVar4 = uVar2;
    if ((uVar2 & 3) == 0) {
      uVar4 = uVar2 | 1;
    }
    uVar3 = *param_1;
    if (uVar3 == uVar2) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(param_1);
        if (bVar1) {
          *param_1 = uVar4 | 0x20;
          DataMemoryBarrier(0xb);
          if ((uVar2 & 3) == 0) {
            local_118[0] = 2;
            FUN_0097b5a4(param_1 + 6,local_118);
            local_218 = param_1[8];
            local_214 = param_1[9];
            local_210 = 0;
            local_220[0] = 1;
            local_20c = extraout_r1;
            FUN_0097b5a4(param_1 + 6,local_220);
            FUN_009718e0(param_1);
          }
          else {
            DataMemoryBarrier(0xb);
            do {
              uVar2 = *param_1;
              bVar1 = (bool)hasExclusiveAccess(param_1);
            } while (!bVar1);
            *param_1 = uVar2 - 0x40;
            DataMemoryBarrier(0xb);
            if (uVar2 < 0x40) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464("assertion failed: prev.ref_count() >= 1",0x27,&DAT_018ad2bc);
            }
            if ((uVar2 & 0xffffffc0) == 0x40) {
              FUN_00adf950(param_1);
              return;
            }
          }
          return;
        }
        uVar3 = *param_1;
      } while (uVar3 == uVar2);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    uVar2 = uVar3;
  } while( true );
}

