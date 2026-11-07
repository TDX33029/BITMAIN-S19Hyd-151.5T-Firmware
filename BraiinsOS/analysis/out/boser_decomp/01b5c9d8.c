// FUN_01b5c9d8 @ 01b5c9d8 size=652 calls_out=6 calls_in=3
// strings: 

undefined8
FUN_01b5c9d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 local_10f8;
  undefined4 local_10f4;
  undefined4 local_10f0;
  uint local_10ec;
  undefined1 auStack_10e0 [188];
  undefined4 local_1024;
  undefined1 auStack_d80 [864];
  undefined1 auStack_a20 [864];
  undefined1 auStack_6c0 [880];
  undefined1 auStack_350 [804];
  int local_2c;
  
  local_2c = DAT_01d53560;
  local_10f8 = param_3;
  local_10f4 = param_2;
  local_10f0 = param_1;
  local_1024 = param_1;
  FUN_01b5c8e8(auStack_350,&local_10f8,&PTR_01d3b2b0,0);
  FUN_01b5c920(auStack_350,param_5,param_5 + 0x40,param_5 + 0x80,param_5 + 0xc0,0x22);
  FUN_01b5c97c(auStack_10e0,auStack_d80,auStack_a20,auStack_6c0,auStack_350,5);
  uVar2 = FUN_01b231f0(local_10f0,0,auStack_10e0,0x348);
  uVar3 = FUN_01b231f0(local_10f4,0,auStack_d80,0x348);
  local_10ec = FUN_01b231f0(local_10f8,0,auStack_a20,0x348);
  uVar4 = 0;
  uVar5 = 0x348;
  while( true ) {
    uVar4 = FUN_01b231f0(param_4,uVar4,auStack_6c0,uVar5);
    uVar1 = uVar2;
    if (0xff < uVar2) {
      uVar1 = uVar3;
    }
    if (0xff < uVar4 && (0xff < local_10ec && 0xff < uVar1)) break;
    FUN_01b5c97c(auStack_10e0,auStack_d80,auStack_a20,auStack_6c0,auStack_350,1);
    uVar2 = FUN_01b231f0(local_10f0,uVar2,auStack_10e0,0xa8);
    uVar3 = FUN_01b231f0(local_10f4,uVar3,auStack_d80,0xa8);
    local_10ec = FUN_01b231f0(local_10f8,local_10ec,auStack_a20,0xa8);
    uVar5 = 0xa8;
  }
  FUN_01b6b174(auStack_10e0,0xd80);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

