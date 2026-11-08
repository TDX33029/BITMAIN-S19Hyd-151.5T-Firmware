// FUN_01b408c0 @ 01b408c0 size=192 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_01b408c0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_7c [32];
  undefined1 auStack_5c [32];
  undefined1 auStack_3c [32];
  int local_1c;
  
  local_1c = DAT_01d53560;
  uVar1 = FUN_01b40538();
  FUN_01b3e4e0(uVar1,auStack_7c,auStack_5c,auStack_3c,param_3);
  FUN_01b28344(param_2,auStack_7c);
  FUN_01b28344(param_2 + 0x44,auStack_5c);
  FUN_01b28344(param_2 + 0x88,auStack_3c);
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

