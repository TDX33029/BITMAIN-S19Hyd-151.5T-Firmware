// FUN_0133f41c @ 0133f41c size=92 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_0133f41c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  if ((param_3 != 0) && (iVar1 = FUN_0100fa18(param_2,param_3), iVar1 != 0)) {
    piVar2 = (int *)thunk_FUN_016d4a50(4);
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,4);
    }
    *piVar2 = iVar1;
  }
  return CONCAT44(&DAT_01891fcc,piVar2);
}

