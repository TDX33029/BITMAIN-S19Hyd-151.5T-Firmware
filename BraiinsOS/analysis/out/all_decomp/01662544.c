// FUN_01662544 @ 01662544 size=124 calls_out=1 calls_in=0
// strings: assertion failed: prev.ref_count() >= 2

void FUN_01662544(int param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  while( true ) {
    if (iVar4 == param_2) {
      return;
    }
    puVar2 = *(uint **)(param_1 + iVar4 * 8);
    iVar4 = iVar4 + 1;
    DataMemoryBarrier(0xb);
    do {
      uVar3 = *puVar2;
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = uVar3 - 0x80;
    DataMemoryBarrier(0xb);
    if (uVar3 < 0x80) break;
    if ((uVar3 & 0xffffffc0) == 0x80) {
      (**(code **)(puVar2[2] + 8))();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa464("assertion failed: prev.ref_count() >= 2",0x27,&DAT_018ad1fc);
}

