// FUN_0133f334 @ 0133f334 size=140 calls_out=4 calls_in=2
// strings: 

void FUN_0133f334(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piStack_18;
  undefined *puStack_14;
  undefined1 *local_10;
  code *local_c;
  
  if ((param_3 == 0) || (iVar1 = FUN_0100fa18(param_2,param_3), iVar1 == 0)) {
    return;
  }
  piStack_18 = (int *)thunk_FUN_016d4a50(4);
  if (piStack_18 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,4);
  }
  *piStack_18 = iVar1;
  puStack_14 = &DAT_01891fcc;
  local_c = FUN_0133f2dc;
  local_10 = (undefined1 *)&piStack_18;
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_0056c71f,&local_10,&DAT_01891fac);
}

