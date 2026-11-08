// FUN_01756284 @ 01756284 size=204 calls_out=5 calls_in=0
// strings: 

undefined4 FUN_01756284(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_8c [112];
  int local_1c;
  
  local_1c = DAT_018ddaf8;
  iVar1 = FUN_017553cc(auStack_8c,param_2,&PTR_018bc3f4,0);
  if ((iVar1 != 0) && (iVar1 = FUN_01755b10(auStack_8c,param_1,param_2), iVar1 != 0)) {
    FUN_01755df8(param_3,auStack_8c);
  }
  FUN_0177aaa0(auStack_8c,0x70);
  if (local_1c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return param_3;
}

