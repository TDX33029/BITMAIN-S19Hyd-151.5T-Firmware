// FUN_0177b1cc @ 0177b1cc size=112 calls_out=0 calls_in=3
// strings: 

char * FUN_0177b1cc(int param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  if (param_2 == (char *)0x0) {
    return (char *)0x0;
  }
  pcVar1 = (char *)(param_1 + -1);
  do {
    pcVar2 = pcVar1 + 1;
    if (*pcVar2 == '\0') {
      return pcVar1 + (1 - param_1);
    }
    pcVar1 = pcVar2;
  } while (pcVar2 != param_2 + param_1 + -1);
  return param_2;
}

