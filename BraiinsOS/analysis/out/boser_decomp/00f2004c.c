// FUN_00f2004c @ 00f2004c size=84 calls_out=3 calls_in=2
// strings: 

int * FUN_00f2004c(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_01427b74(1,0);
  iVar2 = FUN_00715ebc(param_1,param_2);
  if (*piVar1 != 0) {
    FUN_00f80320(*piVar1,piVar1[1]);
  }
  *piVar1 = iVar2;
  piVar1[1] = (int)&DAT_01c07620;
  return piVar1;
}

