// FUN_00809fc4 @ 00809fc4 size=92 calls_out=0 calls_in=0
// strings: 

int FUN_00809fc4(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*param_2 == 0x1f4ef4a && param_2[2] == 0x1b54ca4e) &&
      (param_2[1] == 0x56eca01a && param_2[3] == 0x40839982)) {
    iVar1 = param_1 + 0x1c;
  }
  return iVar1;
}

