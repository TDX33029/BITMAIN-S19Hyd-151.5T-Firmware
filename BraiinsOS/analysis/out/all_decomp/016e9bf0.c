// FUN_016e9bf0 @ 016e9bf0 size=220 calls_out=4 calls_in=4
// strings: 

undefined8 FUN_016e9bf0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar2 = (undefined4 *)FUN_01782028(0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_016d38c8(0x10c,1);
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    iVar3 = FUN_017820bc(0,puVar2,FUN_016e9958);
    if (iVar3 == 0) {
      return 0;
    }
  }
  puVar1 = puVar2;
  do {
    puVar4 = puVar1;
    thunk_FUN_016d3fb4(puVar4[1]);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar1 = puVar4 + 4;
  } while (puVar4 + 4 != puVar2 + 0x40);
  thunk_FUN_016d3fb4(puVar2[0x42]);
  puVar2[0x42] = 0;
  puVar2[0x40] = 0;
  puVar4[5] = 0;
  return 0;
}

