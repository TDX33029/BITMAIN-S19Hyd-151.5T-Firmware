// FUN_01b7dd90 @ 01b7dd90 size=232 calls_out=5 calls_in=1
// strings: 

undefined8 FUN_01b7dd90(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined1 auStack_2c [32];
  int local_c;
  
  local_c = DAT_01d53560;
  FUN_01b802c0(*param_1,auStack_2c);
  if (param_3 != 0) {
    FUN_01bed4e2(param_2,auStack_2c,param_3);
  }
  FUN_01b80120(*param_1,auStack_2c,0x20);
  FUN_01b7d3cc(auStack_2c,0x20);
  if (local_c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

