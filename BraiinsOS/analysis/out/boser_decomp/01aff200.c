// FUN_01aff200 @ 01aff200 size=376 calls_out=7 calls_in=2
// strings: 

undefined8
FUN_01aff200(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            uint param_5,undefined4 param_6,int param_7,undefined4 param_8,int param_9)

{
  uint uVar1;
  undefined1 auStack_250 [36];
  undefined1 auStack_22c [512];
  int local_2c;
  
  local_2c = DAT_01d53560;
  FUN_01aff1e4(auStack_250,0x20,param_3,0);
  FUN_01afe5b4(auStack_250,auStack_250,0x20,param_2,param_3,0);
  FUN_01b6c6f0(auStack_22c,auStack_250);
  FUN_01b6c814(auStack_22c,param_4,param_5);
  if ((param_5 & 0xf) != 0) {
    FUN_01b6c814(auStack_22c,&DAT_00539c99,0x10 - (param_5 & 0xf));
  }
  FUN_01b6c814(auStack_22c,param_6,param_7);
  FUN_01b6c814(auStack_22c,param_8,param_9);
  uVar1 = param_7 + param_9 & 0xf;
  if (uVar1 != 0) {
    FUN_01b6c814(auStack_22c,&DAT_00539c99,0x10 - uVar1);
  }
  FUN_01aff134(auStack_22c,param_5);
  FUN_01aff134(auStack_22c,param_7 + param_9);
  FUN_01b6c97c(auStack_22c,param_1);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

