// FUN_00023d4c @ 00023d4c  size=168  callers=2
// program: bmminer


int FUN_00023d4c(int param_1)

{
  int iVar1;
  char local_2008 [8192];
  
  if ((param_1 == 3) && (3 < DAT_000be63c)) {
    builtin_strncpy(local_2008,"enc/dec undefined data type, use default key!\n",0x2f);
    FUN_0004948c(3,local_2008,0);
  }
  if (DAT_000bd318 == 1) {
    return param_1 * 0x10 + 0xbd32c;
  }
  if (DAT_000bd318 == 2) {
    iVar1 = param_1 * 4 + 0xbd31c;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

