// FUN_00700b14 @ 00700b14 size=40 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_00700b14(char *param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 == 0) {
    return 0xffffffff00000000;
  }
  pcVar1 = param_1 + 1;
  if (*param_1 != '[') {
    pcVar1 = (char *)0x0;
  }
  return CONCAT44(param_2 + -1,pcVar1);
}

