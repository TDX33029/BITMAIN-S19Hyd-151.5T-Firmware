// FUN_01b82658 @ 01b82658 size=40 calls_out=0 calls_in=1
// strings: 

int FUN_01b82658(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0x200;
  }
  else {
    iVar1 = (param_1 * param_2 + param_2 + 6U >> 3) + 3;
  }
  return iVar1;
}

