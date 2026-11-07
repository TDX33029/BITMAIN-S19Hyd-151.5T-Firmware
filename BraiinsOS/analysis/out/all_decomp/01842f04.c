// FUN_01842f04 @ 01842f04 size=106 calls_out=5 calls_in=3
// strings: libunwind: _Unwind_GetLanguageSpecificData(context=%p) => 0x%llx 

undefined4 FUN_01842f04(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_3c [8];
  undefined4 local_34;
  int local_14;
  
  local_14 = DAT_018ddaf8;
  iVar1 = FUN_01844df4(param_1,auStack_3c,&PTR_018bc3f4,0);
  uVar2 = local_34;
  if (iVar1 != 0) {
    uVar2 = 0;
  }
  iVar1 = FUN_01845188();
  if (iVar1 != 0) {
    FUN_016db0c6(&DAT_018db5c0,"libunwind: _Unwind_GetLanguageSpecificData(context=%p) => 0x%llx\n",
                 param_1,&DAT_018b5bec,uVar2,0);
    FUN_016daeb4(&DAT_018db5c0);
  }
  if (DAT_018ddaf8 != local_14) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar2;
}

