// FUN_0002ace4 @ 0002ace4  size=136  callers=1
// program: bmminer


int FUN_0002ace4(int param_1,char *param_2)

{
  int iVar1;
  
  if ((DAT_00a4eda8 <= param_1) || (param_2 == (char *)0x0 || param_1 < 0)) {
    return -0x7ffffbff;
  }
  iVar1 = 0;
  if ((DAT_00a4ee08 == 0) && (iVar1 = FUN_0002998c(), iVar1 < 0)) {
    return iVar1;
  }
  snprintf(param_2,0x200,"%s",(char *)(DAT_00a4ee10 + param_1 * 0x210 + 0x10));
  return iVar1;
}

