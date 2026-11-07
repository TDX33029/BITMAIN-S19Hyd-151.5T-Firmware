// FUN_01b628dc @ 01b628dc size=488 calls_out=6 calls_in=3
// strings: 

undefined8
FUN_01b628dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,int param_7,int param_8,int param_9,uint param_10)

{
  int iVar1;
  undefined1 auStack_570 [804];
  undefined1 auStack_24c [136];
  undefined1 auStack_1c4 [136];
  undefined1 auStack_13c [136];
  undefined1 auStack_b4 [136];
  int local_2c;
  
  local_2c = DAT_01d53560;
  FUN_01b257dc(auStack_570,0,800);
  FUN_01b59e4c(auStack_570,param_1,param_2,param_3,param_4,param_5,0x88,0x1f);
  FUN_01b59ec0(auStack_570,param_6,param_7,param_8,param_9,param_10 / 0x88,0x88);
  iVar1 = (param_10 / 0x88) * 0x88;
  param_10 = param_10 % 0x88;
  if (param_10 != 0) {
    FUN_01b59ec0(auStack_570,auStack_24c,auStack_1c4,auStack_13c,auStack_b4,1,0x88);
    FUN_01b26974(param_6 + iVar1,auStack_24c,param_10);
    FUN_01b26974(param_7 + iVar1,auStack_1c4,param_10);
    FUN_01b26974(param_8 + iVar1,auStack_13c,param_10);
    FUN_01b26974(param_9 + iVar1,auStack_b4,param_10);
  }
  FUN_01b6b174(auStack_24c,0x88);
  FUN_01b6b174(auStack_1c4,0x88);
  FUN_01b6b174(auStack_13c,0x88);
  FUN_01b6b174(auStack_b4,0x88);
  FUN_01b6b174(auStack_570,800);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 1;
}

