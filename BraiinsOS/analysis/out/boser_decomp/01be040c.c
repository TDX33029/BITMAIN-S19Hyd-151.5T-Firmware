// FUN_01be040c @ 01be040c size=130 calls_out=7 calls_in=29
// strings: _Unwind_Resume() can't return | _Unwind_Resume | libunwind: %s - %s  | libunwind: _Unwind_Resume(ex_obj=%p) 

void FUN_01be040c(int param_1)

{
  int iVar1;
  undefined1 auStack_2f0 [336];
  undefined1 auStack_1a0 [396];
  undefined4 local_14;
  
  local_14 = DAT_01d53560;
  iVar1 = FUN_01be2734();
  if (iVar1 != 0) {
    FUN_01beb3de(&DAT_01d50fd8,"libunwind: _Unwind_Resume(ex_obj=%p)\n",param_1);
    FUN_01beb1cc(&DAT_01d50fd8);
  }
  FUN_01bdfb74(auStack_2f0);
  if (*(int *)(param_1 + 0xc) == 0) {
    FUN_01bdfba4(auStack_2f0,auStack_1a0,param_1,1);
  }
  else {
    FUN_01bdfe64(auStack_2f0,auStack_1a0,param_1,*(int *)(param_1 + 0xc),
                 *(undefined4 *)(param_1 + 0x14));
  }
  FUN_01beb3de(&DAT_01d50fd8,"libunwind: %s - %s\n","_Unwind_Resume",
               "_Unwind_Resume() can\'t return");
  FUN_01beb1cc(&DAT_01d50fd8);
                    /* WARNING: Subroutine does not return */
  FUN_01be32a0();
}

