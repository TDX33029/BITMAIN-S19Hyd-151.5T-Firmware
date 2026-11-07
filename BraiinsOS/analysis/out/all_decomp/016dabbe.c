// FUN_016dabbe @ 016dabbe size=68 calls_out=0 calls_in=5
// strings: 

undefined8 FUN_016dabbe(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_1 + 0x4c);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(puVar4);
    puVar2 = (undefined4 *)*puVar4;
    bVar1 = (bool)hasExclusiveAccess(puVar4);
  } while (!bVar1);
  *puVar4 = 0;
  DataMemoryBarrier(0x1b);
  uVar3 = 0;
  if ((int)puVar2 << 1 < 0) {
    uVar3 = 0x81;
    software_interrupt(0);
    puVar2 = (undefined4 *)(param_1 + 0x72);
    if ((undefined4 *)(param_1 + 0x72) == (undefined4 *)0x0) {
      uVar3 = 1;
      software_interrupt(0);
      puVar2 = puVar4;
    }
  }
  return CONCAT44(uVar3,puVar2);
}

