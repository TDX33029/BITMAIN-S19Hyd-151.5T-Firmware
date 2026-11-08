// FUN_01b5cc70 @ 01b5cc70 size=316 calls_out=4 calls_in=3
// strings: 

undefined8 FUN_01b5cc70(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 auStack_140 [284];
  int local_24;
  
  iVar4 = 0;
  local_24 = DAT_01d53560;
  puVar6 = auStack_140;
  do {
    iVar4 = iVar4 + 1;
    FUN_01b269d8(puVar6,param_2,0x20);
    puVar6 = puVar6 + 0x40;
  } while (iVar4 != 4);
  uVar2 = 0;
  do {
    uVar5 = uVar2 + 4;
    puVar6 = auStack_140;
    uVar3 = uVar2;
    do {
      puVar6[0x20] = (byte)uVar3 & 3;
      uVar1 = uVar3 >> 2;
      uVar3 = uVar3 + 1;
      puVar6[0x21] = (char)uVar1;
      puVar6 = puVar6 + 0x40;
    } while (uVar5 != uVar3);
    FUN_01b5c9d8(param_1 + uVar2 * 0x400,param_1 + (uVar2 + 1 >> 2) * 0x1000 + 0x400,
                 param_1 + (uVar2 + 2 >> 2) * 0x1000 + 0x800,
                 param_1 + (uVar2 + 3 >> 2) * 0x1000 + 0xc00,auStack_140);
    uVar2 = uVar5;
  } while (uVar5 != 0x10);
  FUN_01b6b174(auStack_140,0x100);
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

