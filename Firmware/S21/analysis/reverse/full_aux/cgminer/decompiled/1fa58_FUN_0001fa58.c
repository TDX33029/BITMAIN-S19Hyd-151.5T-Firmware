// FUN_0001fa58 @ 0001fa58  size=112  callers=4
// program: cgminer


void FUN_0001fa58(char *param_1,int param_2,int param_3)

{
  char *pcVar1;
  byte *pbVar2;
  
  if (param_3 < 1) {
    *param_1 = '\0';
    return;
  }
  pbVar2 = (byte *)(param_2 + -1);
  pcVar1 = param_1;
  do {
    pbVar2 = pbVar2 + 1;
    *pcVar1 = "0123456789abcdefbin2hex"[*pbVar2 >> 4];
    pcVar1[1] = "0123456789abcdefbin2hex"[*pbVar2 & 0xf];
    pcVar1 = pcVar1 + 2;
  } while (pbVar2 != (byte *)(param_2 + param_3 + -1));
  param_1[param_3 * 2] = '\0';
  return;
}

