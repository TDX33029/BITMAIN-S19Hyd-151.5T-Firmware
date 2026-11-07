// FUN_0001c2ec @ 0001c2ec  size=168  callers=2
// program: bmminer


int FUN_0001c2ec(int param_1)

{
  int iVar1;
  char local_808 [2048];
  
  if ((param_1 == 3) && (3 < DAT_00087bbc)) {
    builtin_strncpy(local_808,"enc/dec undefined data type, use default key!\n",0x2f);
    FUN_00032218(3,local_808,0);
  }
  if (DAT_000872a4 == 2) {
    return param_1 * 0x10 + 0x872b8;
  }
  if (DAT_000872a4 == 3) {
    iVar1 = param_1 * 4 + 0x872a8;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

