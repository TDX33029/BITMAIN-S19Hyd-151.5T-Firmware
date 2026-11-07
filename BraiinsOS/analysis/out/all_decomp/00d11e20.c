// FUN_00d11e20 @ 00d11e20 size=324 calls_out=3 calls_in=0
// strings: assertion failed: snapshot.is_join_interested() | assertion failed: prev.ref_count() >= 1

void FUN_00d11e20(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_12d0 [1196];
  
  DataMemoryBarrier(0xb);
  uVar2 = *param_1;
  do {
    if ((uVar2 & 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: snapshot.is_join_interested()",0x2f,&DAT_018ad2ac);
    }
    uVar3 = 0xfffffff7;
    if ((uVar2 & 2) == 0) {
      uVar3 = 0xffffffe5;
    }
    uVar4 = *param_1;
    if (uVar4 == uVar2) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(param_1);
        if (bVar1) {
          *param_1 = uVar3 & uVar2;
          DataMemoryBarrier(0xb);
          if ((uVar2 & 2) != 0) {
            local_12d0[0] = 2;
            FUN_00c9ef68(param_1 + 6,local_12d0);
          }
          if ((uVar3 & uVar2 & 0x10) == 0) {
            uVar2 = param_1[0x4b8];
            if (uVar2 != 0) {
              (**(code **)(uVar2 + 0xc))(param_1[0x4b9]);
            }
            param_1[0x4b8] = 0;
          }
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
            FUN_00addba8(param_1);
          }
          return;
        }
        uVar4 = *param_1;
      } while (uVar4 == uVar2);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    uVar2 = uVar4;
  } while( true );
}

