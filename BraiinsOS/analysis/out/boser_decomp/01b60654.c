// FUN_01b60654 @ 01b60654 size=296 calls_out=6 calls_in=3
// strings: 

undefined8 FUN_01b60654(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 extraout_r1;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 auStack_140 [284];
  int local_24;
  
  iVar3 = 0;
  local_24 = DAT_01d53560;
  puVar5 = auStack_140;
  do {
    iVar3 = iVar3 + 1;
    FUN_01b269d8(puVar5,param_2,0x20);
    puVar5 = puVar5 + 0x40;
  } while (iVar3 != 4);
  iVar3 = 0;
  do {
    iVar4 = 0;
    puVar5 = auStack_140;
    do {
      FUN_01bf0fd4(iVar3 + iVar4,7);
      iVar2 = iVar3 + iVar4;
      puVar5[0x20] = extraout_r1;
      iVar4 = iVar4 + 1;
      uVar1 = FUN_01bf1250(iVar2,7);
      puVar5[0x21] = uVar1;
      puVar5 = puVar5 + 0x40;
    } while (iVar4 != 4);
    iVar3 = iVar3 + 4;
    FUN_01b5c9d8(param_1,param_1 + 0x400,param_1 + 0x800,param_1 + 0xc00,auStack_140);
    param_1 = param_1 + 0x1000;
  } while (iVar3 != 0x38);
  FUN_01b6b174(auStack_140,0x100);
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

