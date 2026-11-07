// FUN_01b5c478 @ 01b5c478 size=644 calls_out=7 calls_in=1
// strings: 

undefined8
FUN_01b5c478(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
            undefined1 param_9)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint local_c50;
  uint local_c4c;
  undefined1 auStack_c40 [288];
  undefined1 auStack_b20 [288];
  undefined1 auStack_a00 [288];
  undefined1 auStack_8e0 [288];
  undefined1 auStack_7c0 [64];
  undefined1 local_780;
  undefined1 local_77f;
  undefined1 auStack_760 [64];
  undefined1 local_720;
  undefined1 local_71f;
  undefined1 auStack_700 [64];
  undefined1 local_6c0;
  undefined1 local_6bf;
  undefined1 auStack_6a0 [64];
  undefined1 local_660;
  undefined1 local_65f;
  undefined1 auStack_630 [1540];
  int local_2c;
  
  local_2c = DAT_01d53560;
  FUN_01b269d8(auStack_7c0,param_5,0x40,0);
  FUN_01b269d8(auStack_760,param_5,0x40);
  FUN_01b269d8(auStack_700,param_5,0x40);
  FUN_01b269d8(auStack_6a0,param_5,0x40);
  local_780 = param_6;
  uVar4 = 0;
  local_720 = param_7;
  local_6c0 = param_8;
  local_660 = param_9;
  local_77f = 0;
  local_71f = 0;
  local_6bf = 0;
  local_65f = 0;
  FUN_01b5b5fc(auStack_630);
  FUN_01b5b678(auStack_630,auStack_7c0,auStack_760,auStack_700,auStack_6a0);
  FUN_01b5c1a4(auStack_c40,auStack_b20,auStack_a00,auStack_8e0,2,auStack_630);
  local_c50 = FUN_01b230d4(param_1,0,auStack_c40,0x110);
  uVar2 = FUN_01b230d4(param_2,0,auStack_b20,0x110);
  local_c4c = FUN_01b230d4(param_3,0,auStack_a00,0x110);
  uVar3 = 0x110;
  while( true ) {
    uVar4 = FUN_01b230d4(param_4,uVar4,auStack_8e0,uVar3);
    uVar1 = local_c50;
    if (0xff < local_c50) {
      uVar1 = uVar2;
    }
    if (0xff < uVar4 && (0xff < local_c4c && 0xff < uVar1)) break;
    FUN_01b5c1a4(auStack_c40,auStack_b20,auStack_a00,auStack_8e0,1,auStack_630);
    local_c50 = FUN_01b230d4(param_1,local_c50,auStack_c40,0x88);
    uVar2 = FUN_01b230d4(param_2,uVar2,auStack_b20,0x88);
    local_c4c = FUN_01b230d4(param_3,local_c4c,auStack_a00,0x88);
    uVar3 = 0x88;
  }
  FUN_01b6b174(auStack_c40,0x480);
  FUN_01b6b174(auStack_7c0,0x180);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

