// FUN_0002a1a4 @ 0002a1a4  size=104  callers=0
// program: cgminer


char * FUN_0002a1a4(char *param_1)

{
  int iVar1;
  
  iVar1 = sscanf(param_1,"%d:%d",(int *)&DAT_0007604c,(int *)&DAT_00076048);
  if (iVar1 != 2) {
    return "Invalid time set, should be HH:MM";
  }
  if ((DAT_0007604c < 0x18) && (DAT_00076048 < 0x3c)) {
    DAT_00076040 = 1;
    return (char *)0x0;
  }
  return "Invalid time set.";
}

