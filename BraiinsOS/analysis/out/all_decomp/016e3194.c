// FUN_016e3194 @ 016e3194 size=420 calls_out=6 calls_in=1
// strings: 

undefined8
FUN_016e3194(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            uint param_5,undefined4 param_6,int param_7,undefined4 param_8,int param_9)

{
  uint uVar1;
  undefined1 auStack_260 [44];
  uint local_234 [2];
  undefined1 auStack_22c [512];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  FUN_016dd606(auStack_260,0,0x20,0);
  FUN_016e2d10(auStack_260,auStack_260,0x20,param_2,param_3,0);
  FUN_0177c24c(auStack_22c,auStack_260);
  FUN_0177c534(auStack_22c,param_4,param_5);
  if ((param_5 & 0xf) != 0) {
    FUN_0177c534(auStack_22c,&DAT_00428070,0x10 - (param_5 & 0xf));
  }
  FUN_0177c534(auStack_22c,param_6,param_7);
  FUN_0177c534(auStack_22c,param_8,param_9);
  uVar1 = param_7 + param_9 & 0xf;
  if (uVar1 != 0) {
    FUN_0177c534(auStack_22c,&DAT_00428070,0x10 - uVar1);
  }
  local_234[0] = param_5;
  local_234[1] = 0;
  FUN_0177c534(auStack_22c,local_234,8);
  local_234[1] = 0;
  local_234[0] = param_7 + param_9;
  FUN_0177c534(auStack_22c,local_234,8);
  FUN_0177ca24(auStack_22c,param_1);
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

