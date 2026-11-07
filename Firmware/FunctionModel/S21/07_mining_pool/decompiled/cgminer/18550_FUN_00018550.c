// FUN_00018550 @ 00018550  size=260  callers=1
// program: cgminer


void FUN_00018550(char *param_1,int *param_2)

{
  char *param3;
  int iVar1;
  ulong param3_00;
  longlong param3_01;
  char local_110 [4];
  ushort local_10c;
  
  memset(local_110,0,0x100);
  if (param_2 != (int *)0x0) {
    iVar1 = *param_2;
    if (iVar1 == 6) {
      builtin_strncpy(local_110,"fals",4);
      local_10c = 0x65;
    }
    else if (iVar1 == 5) {
      builtin_strncpy(local_110,"true",4);
      local_10c = local_10c & 0xff00;
    }
    else if (iVar1 == 3) {
      param3_01 = FUN_0004943c(param_2);
      snprintf(local_110,0x100,"%lld",param3_01);
    }
    else if (iVar1 == 4) {
      FUN_000494e8(param_2);
      snprintf(local_110,0x100,"%.2lf",param3_00);
    }
    else if (iVar1 == 2) {
      param3 = (char *)FUN_000491e0(param_2);
      snprintf(local_110,0x100,"%s",param3);
    }
    strcat(param_1,local_110);
  }
  return;
}

