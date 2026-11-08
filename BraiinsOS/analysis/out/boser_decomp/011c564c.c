// FUN_011c564c @ 011c564c size=56 calls_out=2 calls_in=2
// strings: 

void FUN_011c564c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 == -0x80000000) {
    return;
  }
  iVar2 = param_1[1];
  FUN_00dcd0bc(iVar2,param_1[2]);
  FUN_0132b958(iVar1,iVar2,4,0x18);
  return;
}

