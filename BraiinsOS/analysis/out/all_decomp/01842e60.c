// FUN_01842e60 @ 01842e60 size=130 calls_out=7 calls_in=6
// strings: _Unwind_Resume() can't return | _Unwind_Resume | libunwind: %s - %s  | libunwind: _Unwind_Resume(ex_obj=%p) 

void FUN_01842e60(int param_1)

{
  int iVar1;
  undefined1 auStack_2f0 [336];
  undefined1 auStack_1a0 [396];
  undefined4 local_14;
  
  local_14 = DAT_018ddaf8;
  iVar1 = FUN_01845188();
  if (iVar1 != 0) {
    FUN_016db0c6(&DAT_018db5c0,"libunwind: _Unwind_Resume(ex_obj=%p)\n",param_1);
    FUN_016daeb4(&DAT_018db5c0);
  }
  FUN_018425c8(auStack_2f0);
  if (*(int *)(param_1 + 0xc) == 0) {
    FUN_018425f8(auStack_2f0,auStack_1a0,param_1,1);
  }
  else {
    FUN_018428b8(auStack_2f0,auStack_1a0,param_1,*(int *)(param_1 + 0xc),
                 *(undefined4 *)(param_1 + 0x14));
  }
  FUN_016db0c6(&DAT_018db5c0,"libunwind: %s - %s\n","_Unwind_Resume",
               "_Unwind_Resume() can\'t return");
  FUN_016daeb4(&DAT_018db5c0);
                    /* WARNING: Subroutine does not return */
  FUN_016d2c24();
}

