// FUN_01b22780 @ 01b22780 size=172 calls_out=4 calls_in=1
// strings: 

void FUN_01b22780(undefined4 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_5c [40];
  undefined1 auStack_34 [32];
  uint local_14;
  
  local_14 = DAT_01d53560;
  FUN_01b2233c(auStack_5c,param_1,&PTR_01d3b2b0,0);
  FUN_01b21754(auStack_34,auStack_5c);
  uVar1 = FUN_01b6b750(auStack_34,&DAT_0053a315,0x20);
  if ((local_14 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4((int)uVar1 != 0,(int)((ulonglong)uVar1 >> 0x20),local_14 ^ DAT_01d53560,0);
  }
  return;
}

