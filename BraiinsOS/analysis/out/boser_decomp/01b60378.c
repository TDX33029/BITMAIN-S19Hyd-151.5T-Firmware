// FUN_01b60378 @ 01b60378 size=672 calls_out=7 calls_in=1
// strings: 

undefined4 FUN_01b60378(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 uVar7;
  byte bVar8;
  undefined4 *puVar9;
  undefined1 auStack_7500 [1244];
  undefined4 auStack_7024 [1225];
  undefined1 auStack_5d00 [6144];
  undefined1 auStack_4500 [6144];
  undefined1 auStack_2d00 [6144];
  undefined1 auStack_1500 [5120];
  undefined1 auStack_100 [64];
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [52];
  int local_2c;
  undefined4 uStack_28;
  
  puVar9 = (undefined4 *)(auStack_60 + 0x3c);
  do {
    puVar9 = puVar9 + -0x400;
    *puVar9 = param_1;
  } while (puVar9 != auStack_7024);
  bVar8 = 0;
  local_2c = DAT_01d53560;
  iVar6 = 0;
  FUN_01b26ac8(auStack_60,auStack_c0,auStack_80,auStack_4500,auStack_1500,auStack_2d00,param_2);
  puVar5 = auStack_1500;
  do {
    iVar6 = iVar6 + 1;
    bVar1 = FUN_01b1cf6c(puVar5,5);
    bVar8 = bVar8 | bVar1;
    puVar5 = puVar5 + 0x400;
  } while (iVar6 != 5);
  cVar2 = FUN_01b1d960(auStack_2d00,5);
  FUN_01b5fdb0(auStack_5d00,auStack_7500,auStack_100,param_1,auStack_60,auStack_1500,auStack_2d00);
  cVar3 = FUN_01b1c8dc(auStack_4500,auStack_5d00);
  cVar4 = FUN_01b1c8dc(auStack_c0,auStack_100,0x40);
  uVar7 = 0;
  if (((cVar3 != '\0' || cVar4 != '\0') || bVar8 != 0) || cVar2 != '\0') {
    uVar7 = 0xffffffff;
    FUN_01b6b174(param_1,0x7a0);
  }
  FUN_01b6b174(auStack_7500,0x1800);
  FUN_01b6b174(auStack_5d00,0x1800);
  FUN_01b6b174(auStack_4500,0x1800);
  FUN_01b6b174(auStack_2d00,0x1800);
  FUN_01b6b174(auStack_1500,0x1400);
  FUN_01b6b174(auStack_80,0x20);
  FUN_01b6b174(auStack_100,0x40);
  FUN_01b6b174(auStack_c0,0x40);
  FUN_01b6b174(auStack_60,0x20);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar7;
}

