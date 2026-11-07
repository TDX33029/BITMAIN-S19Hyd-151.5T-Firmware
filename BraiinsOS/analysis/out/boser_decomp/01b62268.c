// FUN_01b62268 @ 01b62268 size=528 calls_out=6 calls_in=3
// strings: 

undefined8
FUN_01b62268(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint local_b6c;
  undefined1 auStack_b60 [512];
  undefined1 auStack_960 [512];
  undefined1 auStack_760 [512];
  undefined1 auStack_560 [528];
  undefined1 auStack_350 [804];
  int local_2c;
  
  local_2c = DAT_01d53560;
  FUN_01b5c8e8(auStack_350,param_2,&PTR_01d3b2b0,0);
  FUN_01b5c920(auStack_350,param_5,param_5 + 0x40,param_5 + 0x80,param_5 + 0xc0,0x22);
  FUN_01b5c97c(auStack_b60,auStack_960,auStack_760,auStack_560,auStack_350,3);
  uVar2 = FUN_01b22ff8(param_1,0,auStack_b60,0x1f8);
  uVar3 = FUN_01b22ff8(param_2,0,auStack_960,0x1f8);
  local_b6c = FUN_01b22ff8(param_3,0,auStack_760,0x1f8);
  uVar5 = 0x1f8;
  uVar4 = 0;
  while( true ) {
    uVar4 = FUN_01b22ff8(param_4,uVar4,auStack_560,uVar5);
    uVar1 = uVar2;
    if (0xff < uVar2) {
      uVar1 = uVar3;
    }
    if (0xff < uVar4 && (0xff < local_b6c && 0xff < uVar1)) break;
    FUN_01b5c97c(auStack_b60,auStack_960,auStack_760,auStack_560,auStack_350,1);
    uVar2 = FUN_01b22ff8(param_1,uVar2,auStack_b60,0xa8);
    uVar3 = FUN_01b22ff8(param_2,uVar3,auStack_960,0xa8);
    local_b6c = FUN_01b22ff8(param_3,local_b6c,auStack_760,0xa8);
    uVar5 = 0xa8;
  }
  FUN_01b6b174(auStack_b60,0x800);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

