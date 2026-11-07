// FUN_0177b2b4 @ 0177b2b4 size=152 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_0177b2b4(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_0177b23c(param_2);
  cVar1 = (char)param_2;
  if (iVar2 == 0) {
    if (param_2 - 0x61U < 6) {
      *param_1 = cVar1 + -0x57;
    }
    else {
      if (5 < param_2 - 0x41U) {
        return 0;
      }
      *param_1 = cVar1 + -0x37;
    }
  }
  else {
    *param_1 = cVar1 + -0x30;
  }
  return 1;
}

