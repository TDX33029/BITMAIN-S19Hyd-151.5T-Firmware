// FUN_012edecc @ 012edecc size=92 calls_out=0 calls_in=0
// strings: 

int FUN_012edecc(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*param_2 == 0x58434c9e && param_2[2] == 0x28f4e2fc) &&
      (param_2[1] == 0x6f9d6ce9 && param_2[3] == 0x481fb735)) {
    iVar1 = param_1 + 0x1c;
  }
  return iVar1;
}

