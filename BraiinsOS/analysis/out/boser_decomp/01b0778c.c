// FUN_01b0778c @ 01b0778c size=76 calls_out=0 calls_in=0
// strings: 

bool FUN_01b0778c(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if ((*piVar1 == 0) || (piVar1[1] == 0)) {
    return true;
  }
  return piVar1[2] == 0;
}

