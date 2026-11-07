// FUN_01b63cfc @ 01b63cfc size=712 calls_out=13 calls_in=1
// strings: 

undefined8 FUN_01b63cfc(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 auStack_27a0 [1916];
  int local_2024;
  undefined1 auStack_15a0 [512];
  undefined1 auStack_13a0 [512];
  undefined1 auStack_11a0 [380];
  int local_1024;
  undefined1 auStack_fa0 [512];
  undefined1 auStack_da0 [512];
  undefined1 auStack_ba0 [512];
  undefined1 auStack_9a0 [512];
  undefined1 auStack_7a0 [512];
  undefined1 auStack_5a0 [512];
  undefined1 auStack_3a0 [768];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 local_40;
  int local_2c;
  
  iVar3 = 0;
  local_2c = DAT_01d53560;
  local_2024 = param_1;
  local_1024 = param_1;
  FUN_01b269d8(auStack_60,param_3,0x20);
  local_40 = 3;
  FUN_01b5b204(auStack_60,0x21,auStack_a0);
  FUN_01b625a0(auStack_27a0,auStack_a0,0);
  FUN_01b62ad4(auStack_15a0,auStack_13a0,auStack_11a0,auStack_fa0,auStack_80,0,1,2,0xff);
  FUN_01b62ad4(auStack_9a0,auStack_7a0,auStack_5a0,auStack_fa0,auStack_80,3,4,5,0xff);
  FUN_01b29364(auStack_15a0);
  FUN_01b29364(auStack_9a0);
  FUN_01b295d8(auStack_3a0,auStack_15a0);
  puVar1 = auStack_27a0;
  puVar2 = auStack_fa0;
  do {
    iVar3 = iVar3 + 1;
    FUN_01b1e484(puVar2,puVar1,auStack_15a0,auStack_3a0);
    puVar1 = puVar1 + 0x600;
    puVar2 = puVar2 + 0x200;
  } while (iVar3 != 3);
  iVar3 = 0;
  FUN_01b1e0b8(auStack_fa0);
  FUN_01b1e0b8(auStack_da0);
  FUN_01b1e0b8(auStack_ba0);
  do {
    puVar1 = auStack_fa0 + iVar3;
    puVar2 = auStack_9a0 + iVar3;
    iVar3 = iVar3 + 0x200;
    FUN_01b1e118(puVar1,puVar2);
  } while (iVar3 != 0x600);
  FUN_01b28b28(auStack_fa0);
  FUN_01b28b28(auStack_15a0);
  FUN_01b1e3e4(param_2,auStack_15a0);
  FUN_01b1e3e4(param_1,auStack_fa0);
  FUN_01b269d8(param_1 + 0x480,auStack_a0,0x20);
  FUN_01b6b174(auStack_a0,0x40);
  FUN_01b6b174(auStack_60,0x21);
  FUN_01b6b174(auStack_27a0,0x1200);
  FUN_01b6b174(auStack_9a0,0x600);
  FUN_01b6b174(auStack_15a0,0x600);
  FUN_01b6b174(auStack_3a0,0x300);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

