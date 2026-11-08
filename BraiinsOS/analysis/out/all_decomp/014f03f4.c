// FUN_014f03f4 @ 014f03f4 size=292 calls_out=1 calls_in=3
// strings: assertion failed: prev.ref_count() >= 1 | assertion failed: prev.ref_count() >= 1

void FUN_014f03f4(uint *param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar3 = param_1[3];
  iVar5 = 0;
  iVar8 = 0;
  uVar6 = 0;
  uVar7 = 0;
  if (uVar3 != 0) {
    uVar6 = *param_1;
    uVar4 = param_1[2];
    uVar7 = uVar4 - uVar6;
    if (uVar4 < uVar6) {
      uVar7 = uVar4;
    }
    if (uVar6 - uVar7 < uVar3) {
      iVar8 = uVar3 - (uVar6 - uVar7);
    }
    else {
      uVar6 = uVar7 + uVar3;
    }
  }
  uVar3 = param_1[1];
  while( true ) {
    if (iVar5 == uVar6 - uVar7) {
      iVar5 = 0;
      while( true ) {
        if (iVar5 == iVar8) {
          return;
        }
        puVar2 = *(uint **)(uVar3 + iVar5 * 4);
        iVar5 = iVar5 + 1;
        DataMemoryBarrier(0xb);
        do {
          uVar7 = *puVar2;
          bVar1 = (bool)hasExclusiveAccess(puVar2);
        } while (!bVar1);
        *puVar2 = uVar7 - 0x40;
        DataMemoryBarrier(0xb);
        if (uVar7 < 0x40) break;
        if ((uVar7 & 0xffffffc0) == 0x40) {
          (**(code **)(puVar2[2] + 8))();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: prev.ref_count() >= 1",0x27,&DAT_018ad2bc);
    }
    puVar2 = *(uint **)(uVar3 + uVar7 * 4 + iVar5 * 4);
    iVar5 = iVar5 + 1;
    DataMemoryBarrier(0xb);
    do {
      uVar4 = *puVar2;
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = uVar4 - 0x40;
    DataMemoryBarrier(0xb);
    if (uVar4 < 0x40) break;
    if ((uVar4 & 0xffffffc0) == 0x40) {
      (**(code **)(puVar2[2] + 8))();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa464("assertion failed: prev.ref_count() >= 1",0x27,&DAT_018ad2bc);
}

