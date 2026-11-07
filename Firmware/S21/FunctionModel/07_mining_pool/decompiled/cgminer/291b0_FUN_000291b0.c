// FUN_000291b0 @ 000291b0  size=104  callers=0
// program: cgminer


char * FUN_000291b0(char *param_1)

{
  int iVar1;
  
  iVar1 = sscanf(param_1,"%d:%d",(int *)&DAT_00074f4c,(int *)&DAT_00074f48);
  if (iVar1 != 2) {
    return "Invalid time set, should be HH:MM";
  }
  if ((DAT_00074f4c < 0x18) && (DAT_00074f48 < 0x3c)) {
    DAT_00074f40 = 1;
    return (char *)0x0;
  }
  return "Invalid time set.";
}

