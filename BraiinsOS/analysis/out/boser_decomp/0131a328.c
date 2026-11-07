// FUN_0131a328 @ 0131a328 size=224 calls_out=1 calls_in=1
// strings: 

uint FUN_0131a328(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  
  uVar8 = *(uint *)(param_1 + 0x40);
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  uVar6 = *param_2;
  uVar5 = *(uint *)(param_1 + 0x60);
  puVar7 = (uint *)(param_1 + 0x60);
  do {
    while( true ) {
      puVar1 = (uint *)(uVar5 & 0xfffffffc);
      if (puVar1 == (uint *)0x0) {
        DataMemoryBarrier(0xb);
        *(uint *)(param_1 + 0x40) = uVar8 + 2;
        return uVar8 + 2;
      }
      uVar2 = *puVar1;
      DataMemoryBarrier(0xb);
      if ((uVar2 & 3) == 1) break;
      uVar5 = uVar2;
      puVar7 = puVar1;
      if (((puVar1[0x108] & 1) != 0) && ((puVar1[0x108] & 0xfffffffe) != uVar8)) {
        return uVar8;
      }
    }
    do {
      uVar3 = *puVar7;
      if (uVar3 != uVar5) {
        bVar4 = false;
        ClearExclusiveLocal();
        goto LAB_0131a394;
      }
      bVar4 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar4);
    *puVar7 = uVar2 & 0xfffffffc;
    bVar4 = true;
LAB_0131a394:
    DataMemoryBarrier(0xb);
    if (bVar4) {
      FUN_01319dbc(puVar1,uVar6);
      uVar3 = uVar2 & 0xfffffffc;
    }
    uVar5 = uVar3;
    if ((uVar3 & 3) != 0) {
      DataMemoryBarrier(0xb);
      return uVar8;
    }
  } while( true );
}

