// FUN_01b468e0 @ 01b468e0 size=268 calls_out=6 calls_in=0
// strings: 

undefined8
FUN_01b468e0(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_14c [48];
  undefined1 auStack_11c [48];
  undefined1 auStack_ec [48];
  undefined1 auStack_bc [48];
  undefined1 auStack_8c [48];
  undefined1 auStack_5c [48];
  int local_2c;
  
  local_2c = DAT_01d53560;
  FUN_01bed93e(auStack_14c,0,0x90,0);
  FUN_01b19bd0(auStack_bc,param_4);
  FUN_01b19bd0(auStack_8c,param_4 + 0x44);
  FUN_01b19bd0(auStack_5c,param_4 + 0x88);
  uVar1 = FUN_01b40c4c();
  FUN_01b4639c(uVar1,auStack_14c,auStack_11c,auStack_ec,param_3,auStack_bc,auStack_8c,auStack_5c,
               param_5);
  FUN_01b19a24(param_2,auStack_14c);
  FUN_01b19a24(param_2 + 0x44,auStack_11c);
  FUN_01b19a24(param_2 + 0x88,auStack_ec);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

