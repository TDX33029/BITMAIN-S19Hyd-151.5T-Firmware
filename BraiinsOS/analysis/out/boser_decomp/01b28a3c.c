// FUN_01b28a3c @ 01b28a3c size=224 calls_out=6 calls_in=1
// strings: 

int FUN_01b28a3c(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_720 [1028];
  undefined1 auStack_31c [768];
  int local_1c;
  
  local_1c = DAT_01d53560;
  FUN_01b1e194(auStack_720,param_1,&PTR_01d3b2b0,0);
  FUN_01b28a10(auStack_720);
  FUN_01b1e160(auStack_31c,auStack_720);
  iVar1 = FUN_01b1db34(param_1,auStack_31c,0x300);
  FUN_01b6b174(auStack_31c,0x300);
  FUN_01b6b174(auStack_720,0x400);
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return -(uint)(iVar1 != 0);
}

