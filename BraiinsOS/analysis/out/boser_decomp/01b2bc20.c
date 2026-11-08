// FUN_01b2bc20 @ 01b2bc20 size=212 calls_out=6 calls_in=0
// strings: 

undefined8 FUN_01b2bc20(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_98 [48];
  undefined1 auStack_68 [68];
  int local_24;
  
  local_24 = DAT_01d53560;
  uVar1 = FUN_01b2b938(param_1 + 0x118,param_2,&PTR_01d3b2b0,0);
  FUN_01b19bd0(auStack_98,param_4);
  FUN_01b17f88(auStack_98,auStack_98);
  FUN_01b19a24(auStack_68,auStack_98);
  FUN_01b2bb74(param_2,uVar1,auStack_68,*(undefined4 *)(param_1 + 0xec));
  *param_3 = uVar1;
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

