// FUN_01b5c214 @ 01b5c214 size=600 calls_out=7 calls_in=2
// strings: 

undefined8
FUN_01b5c214(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
            undefined1 param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_a50;
  undefined1 auStack_a40 [160];
  undefined1 auStack_9a0 [160];
  undefined1 auStack_900 [160];
  undefined1 auStack_860 [160];
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
  FUN_01b5c1a4(auStack_a40,auStack_9a0,auStack_900,auStack_860,1,auStack_630);
  local_a50 = FUN_01b2314c(param_1,0,auStack_a40);
  uVar2 = FUN_01b2314c(param_2,0,auStack_9a0);
  uVar3 = 0;
  while( true ) {
    uVar3 = FUN_01b2314c(param_3,uVar3,auStack_900);
    uVar4 = FUN_01b2314c(param_4,uVar4,auStack_860);
    uVar1 = local_a50;
    if (0xff < local_a50) {
      uVar1 = uVar2;
    }
    if (0xff < uVar4 && (0xff < uVar3 && 0xff < uVar1)) break;
    FUN_01b5c1a4(auStack_a40,auStack_9a0,auStack_900,auStack_860,1,auStack_630);
    local_a50 = FUN_01b2314c(param_1,local_a50,auStack_a40);
    uVar2 = FUN_01b2314c(param_2,uVar2,auStack_9a0);
  }
  FUN_01b6b174(auStack_a40,0x280);
  FUN_01b6b174(auStack_7c0,0x180);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

