// FUN_01b62c68 @ 01b62c68 size=708 calls_out=13 calls_in=1
// strings: 

undefined8 FUN_01b62c68(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 auStack_3ca0 [3196];
  int local_3024;
  int local_2024;
  undefined1 auStack_1ca0 [512];
  undefined1 auStack_1aa0 [512];
  undefined1 auStack_18a0 [512];
  undefined1 auStack_16a0 [512];
  undefined1 auStack_14a0 [1148];
  int local_1024;
  undefined1 auStack_ca0 [512];
  undefined1 auStack_aa0 [512];
  undefined1 auStack_8a0 [512];
  undefined1 auStack_6a0 [512];
  undefined1 auStack_4a0 [1024];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 local_40;
  int local_2c;
  
  iVar3 = 0;
  local_2c = DAT_01d53560;
  local_3024 = param_1;
  local_2024 = param_1;
  local_1024 = param_1;
  FUN_01b269d8(auStack_60,param_3,0x20);
  local_40 = 4;
  FUN_01b5b204(auStack_60,0x21,auStack_a0);
  FUN_01b627a8(auStack_3ca0,auStack_a0,0);
  FUN_01b62ad4(auStack_1ca0,auStack_1aa0,auStack_18a0,auStack_16a0,auStack_80,0,1,2,3);
  FUN_01b62ad4(auStack_ca0,auStack_aa0,auStack_8a0,auStack_6a0,auStack_80,4,5,6,7);
  FUN_01b29398(auStack_1ca0);
  FUN_01b29398(auStack_ca0);
  FUN_01b29628(auStack_4a0,auStack_1ca0);
  puVar1 = auStack_14a0;
  puVar2 = auStack_3ca0;
  do {
    iVar3 = iVar3 + 1;
    FUN_01b1e64c(puVar1,puVar2,auStack_1ca0,auStack_4a0);
    puVar1 = puVar1 + 0x200;
    puVar2 = puVar2 + 0x800;
  } while (iVar3 != 4);
  iVar3 = 0;
  puVar1 = auStack_14a0;
  do {
    iVar3 = iVar3 + 1;
    FUN_01b1e0b8(puVar1);
    puVar1 = puVar1 + 0x200;
  } while (iVar3 != 4);
  iVar3 = 0;
  do {
    puVar2 = auStack_ca0 + iVar3;
    puVar1 = auStack_14a0 + iVar3;
    iVar3 = iVar3 + 0x200;
    FUN_01b1e118(puVar1,puVar2);
  } while (iVar3 != 0x800);
  FUN_01b28c50(auStack_14a0);
  FUN_01b28c50(auStack_1ca0);
  FUN_01b1e5ac(param_2,auStack_1ca0);
  FUN_01b1e5ac(param_1,auStack_14a0);
  FUN_01b269d8(param_1 + 0x600,auStack_a0,0x20);
  FUN_01b6b174(auStack_a0,0x40);
  FUN_01b6b174(auStack_60,0x21);
  FUN_01b6b174(auStack_3ca0,0x2000);
  FUN_01b6b174(auStack_ca0,0x800);
  FUN_01b6b174(auStack_1ca0,0x800);
  FUN_01b6b174(auStack_4a0,0x400);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

