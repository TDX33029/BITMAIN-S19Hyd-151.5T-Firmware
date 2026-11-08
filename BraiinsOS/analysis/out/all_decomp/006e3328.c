// FUN_006e3328 @ 006e3328 size=308 calls_out=4 calls_in=0
// strings: assertion failed: prev.ref_count() >= 1

void FUN_006e3328(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 extraout_r1;
  uint uVar4;
  undefined4 local_960 [2];
  uint local_958;
  uint local_954;
  undefined4 local_950;
  undefined4 local_94c;
  undefined4 local_4b8 [298];
  
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
            local_4b8[0] = 2;
            FUN_0067de5c(param_1 + 6,local_4b8);
            local_958 = param_1[8];
            local_954 = param_1[9];
            local_950 = 0;
            local_960[0] = 1;
            local_94c = extraout_r1;
            FUN_0067de5c(param_1 + 6,local_960);
            FUN_00651b68(param_1);
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
              FUN_0064d374(param_1);
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

