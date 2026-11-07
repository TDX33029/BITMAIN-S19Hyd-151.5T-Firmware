// FUN_01b28c90 @ 01b28c90 size=232 calls_out=6 calls_in=1
// strings: 

int FUN_01b28c90(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_e20 [2052];
  undefined1 auStack_61c [1536];
  int local_1c;
  
  local_1c = DAT_01d53560;
  FUN_01b1e5fc(auStack_e20,param_1,&PTR_01d3b2b0,0);
  FUN_01b28c50(auStack_e20);
  FUN_01b1e5ac(auStack_61c,auStack_e20);
  iVar1 = FUN_01b1db34(param_1,auStack_61c,0x600);
  FUN_01b6b174(auStack_61c,0x600);
  FUN_01b6b174(auStack_e20,0x800);
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return -(uint)(iVar1 != 0);
}

