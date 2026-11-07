// FUN_01343b04 @ 01343b04 size=44 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01343b04(char *param_1,int param_2,char param_3)

{
  char *pcVar1;
  
  if (param_2 == 0) {
    return 0xffffffff00000000;
  }
  pcVar1 = param_1 + 1;
  if (*param_1 != param_3) {
    pcVar1 = (char *)0x0;
  }
  return CONCAT44(param_2 + -1,pcVar1);
}

