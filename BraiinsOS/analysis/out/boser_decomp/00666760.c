// FUN_00666760 @ 00666760 size=92 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_00666760(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_01298504(param_2,1);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(1,param_2);
    }
  }
  FUN_01bed4e2(iVar1,param_1,param_2);
  return CONCAT44(param_2,iVar1);
}

