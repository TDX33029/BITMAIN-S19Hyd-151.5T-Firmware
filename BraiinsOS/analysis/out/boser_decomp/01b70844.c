// FUN_01b70844 @ 01b70844 size=132 calls_out=2 calls_in=2
// strings: 

undefined4 FUN_01b70844(int param_1)

{
  int iVar1;
  
  FUN_01b70810(&DAT_01d53348,FUN_01b704ac);
  if ((DAT_01d53340 == 0) || (iVar1 = FUN_01beed8c(DAT_01d53344), iVar1 == 0)) {
    return 0;
  }
  return *(undefined4 *)(iVar1 + param_1 * 4);
}

