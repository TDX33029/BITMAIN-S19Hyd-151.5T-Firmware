// FUN_01b5e718 @ 01b5e718 size=604 calls_out=6 calls_in=1
// strings: 

undefined4 FUN_01b5e718(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 auStack_5100 [220];
  undefined4 auStack_5024 [969];
  undefined1 auStack_4100 [4096];
  undefined1 auStack_3100 [4096];
  undefined1 auStack_2100 [4096];
  undefined1 auStack_1100 [4096];
  undefined1 auStack_100 [64];
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [52];
  int local_2c;
  undefined4 uStack_28;
  
  puVar6 = (undefined4 *)(auStack_60 + 0x3c);
  do {
    puVar6 = puVar6 + -0x400;
    *puVar6 = param_1;
  } while (puVar6 != auStack_5024);
  local_2c = DAT_01d53560;
  FUN_01b29678(auStack_60,auStack_c0,auStack_80,auStack_3100,auStack_1100,auStack_2100,param_2);
  cVar1 = FUN_01b1d31c(auStack_1100,3);
  cVar2 = FUN_01b1d31c(auStack_2100,3);
  FUN_01b5e160(auStack_4100,auStack_5100,auStack_100,param_1,auStack_60,auStack_1100,auStack_2100);
  cVar3 = FUN_01b1c8dc(auStack_3100,auStack_4100);
  cVar4 = FUN_01b1c8dc(auStack_c0,auStack_100,0x40);
  uVar5 = 0;
  if (((cVar3 != '\0' || cVar4 != '\0') || cVar1 != '\0') || cVar2 != '\0') {
    uVar5 = 0xffffffff;
    FUN_01b6b174(param_1,0x520);
  }
  FUN_01b6b174(auStack_5100,0x1000);
  FUN_01b6b174(auStack_4100,0x1000);
  FUN_01b6b174(auStack_3100,0x1000);
  FUN_01b6b174(auStack_2100,0x1000);
  FUN_01b6b174(auStack_1100,0x1000);
  FUN_01b6b174(auStack_80,0x20);
  FUN_01b6b174(auStack_100,0x40);
  FUN_01b6b174(auStack_c0,0x40);
  FUN_01b6b174(auStack_60,0x20);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar5;
}

