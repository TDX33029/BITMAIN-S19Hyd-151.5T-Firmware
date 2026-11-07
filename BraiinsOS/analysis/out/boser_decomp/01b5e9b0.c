// FUN_01b5e9b0 @ 01b5e9b0 size=496 calls_out=10 calls_in=3
// strings: 

undefined8 FUN_01b5e9b0(int param_1,undefined4 param_2)

{
  undefined1 extraout_r1;
  int extraout_r1_00;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_620 [864];
  undefined1 auStack_2c0 [32];
  undefined1 local_2a0;
  undefined1 local_29f;
  undefined1 auStack_1b0 [388];
  int local_2c;
  
  local_2c = DAT_01d53560;
  iVar3 = 0;
  puVar5 = auStack_2c0;
  do {
    iVar3 = iVar3 + 1;
    FUN_01b269d8(puVar5,param_2,0x20);
    puVar5 = puVar5 + 0x40;
  } while (iVar3 != 4);
  iVar4 = 0;
  iVar3 = param_1;
  do {
    iVar6 = 0;
    puVar5 = auStack_2c0;
    do {
      uVar1 = iVar4 + iVar6;
      FUN_01bf0fd4(uVar1,5);
      iVar6 = iVar6 + 1;
      puVar5[0x20] = extraout_r1;
      puVar5[0x21] = (char)(uVar1 / 5);
      puVar5 = puVar5 + 0x40;
    } while (iVar6 != 4);
    iVar4 = iVar4 + 4;
    FUN_01b5c9d8(iVar3,iVar3 + 0x400,iVar3 + 0x800,iVar3 + 0xc00,auStack_2c0);
    iVar3 = iVar3 + 0x1000;
  } while (iVar4 != 0x1c);
  do {
    FUN_01bf0f98(iVar4,5);
    local_2a0 = (undefined1)extraout_r1_00;
    local_29f = 5;
    FUN_01b5b4e4(auStack_1b0,0xa8);
    FUN_01b5b638(auStack_1b0,auStack_2c0,0x22);
    FUN_01b5b9d0(auStack_620,auStack_1b0,0x348);
    uVar2 = 0x348;
    uVar1 = 0;
    while (uVar1 = FUN_01b231f0(param_1 + (extraout_r1_00 + 0x19) * 0x400,uVar1,auStack_620,uVar2),
          uVar1 < 0x100) {
      FUN_01b5b9d0(auStack_620,auStack_1b0,0xa8);
      uVar2 = 0xa8;
    }
    FUN_01b6b174(auStack_620,0x348);
    bVar7 = iVar4 != 0x1d;
    iVar4 = 0x1d;
  } while (bVar7);
  FUN_01b6b174(auStack_2c0,0x100);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

