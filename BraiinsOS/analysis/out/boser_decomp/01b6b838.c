// FUN_01b6b838 @ 01b6b838 size=128 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_01b6b838(char *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = FUN_01b6b7c8(param_2);
  cVar2 = (char)param_2;
  if (iVar1 == 0) {
    if (param_2 - 0x61U < 6) {
      cVar2 = cVar2 + -0x57;
    }
    else {
      if (5 < param_2 - 0x41U) {
        return 0;
      }
      cVar2 = cVar2 + -0x37;
    }
  }
  else {
    cVar2 = cVar2 + -0x30;
  }
  *param_1 = cVar2;
  return 1;
}

