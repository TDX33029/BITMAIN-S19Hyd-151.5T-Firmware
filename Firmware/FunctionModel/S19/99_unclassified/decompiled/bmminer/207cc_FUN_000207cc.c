// FUN_000207cc @ 000207cc  size=136  callers=2
// program: bmminer


int FUN_000207cc(int param_1,char *param_2)

{
  int iVar1;
  
  if ((param_1 < DAT_0071c3ec) && (param_2 != (char *)0x0 && -1 < param_1)) {
    iVar1 = 0;
    if ((DAT_0071c440 == 0) && (iVar1 = FUN_0001ea90(), iVar1 < 0)) {
      return iVar1;
    }
    snprintf(param_2,0x200,"%s",(char *)(DAT_0071c448 + param_1 * 0x210 + 0x10));
  }
  else {
    iVar1 = -0x7ffffbff;
  }
  return iVar1;
}

