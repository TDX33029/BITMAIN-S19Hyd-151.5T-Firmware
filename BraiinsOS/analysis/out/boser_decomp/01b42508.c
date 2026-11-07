// FUN_01b42508 @ 01b42508 size=204 calls_out=4 calls_in=1
// strings: 

undefined8 FUN_01b42508(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_e8 [204];
  int local_1c;
  
  local_1c = DAT_01d53560;
  FUN_01b424bc(param_2,param_3,&PTR_01d3b2b0,0);
  FUN_01b3ee18(param_1,auStack_e8,param_3);
  iVar1 = param_2 + 0xcc;
  do {
    iVar2 = iVar1 + 0xcc;
    FUN_01b3f8c0(param_1,iVar1,iVar1 + -0xcc,auStack_e8);
    iVar1 = iVar2;
  } while (iVar2 != param_2 + 0x660);
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

