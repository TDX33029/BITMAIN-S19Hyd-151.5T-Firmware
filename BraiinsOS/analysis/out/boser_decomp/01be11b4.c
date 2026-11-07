// FUN_01be11b4 @ 01be11b4 size=106 calls_out=5 calls_in=1
// strings: libunwind: _Unwind_GetRegionStart(context=%p) => 0x%llX 

undefined4 FUN_01be11b4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_3c [10];
  int local_14;
  
  local_14 = DAT_01d53560;
  iVar1 = FUN_01be23a0(param_1,local_3c,&PTR_01d3b2b0,0);
  uVar2 = local_3c[0];
  if (iVar1 != 0) {
    uVar2 = 0;
  }
  iVar1 = FUN_01be2734();
  if (iVar1 != 0) {
    FUN_01beb3de(&DAT_01d50fd8,"libunwind: _Unwind_GetRegionStart(context=%p) => 0x%llX\n",param_1,
                 &DAT_01d3b288,uVar2,0);
    FUN_01beb1cc(&DAT_01d50fd8);
  }
  if (DAT_01d53560 != local_14) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar2;
}

