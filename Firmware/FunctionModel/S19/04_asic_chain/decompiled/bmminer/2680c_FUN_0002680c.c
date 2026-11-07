// FUN_0002680c @ 0002680c  size=256  callers=0
// program: bmminer


void FUN_0002680c(char *param_1)

{
  int param3;
  int iVar1;
  int iVar2;
  int param2;
  int iVar3;
  int param2_00;
  char *param0;
  
  param2_00 = 0;
  iVar3 = 0;
  param3 = FUN_0001cf54();
  iVar1 = 0;
  param0 = param_1;
  do {
    param2 = iVar1 + 1;
    iVar1 = FUN_000201d8(iVar1);
    if (iVar1 != 0) {
      iVar1 = sprintf(param0,"chain%d_voltage=%d;",param2,param3);
      param2_00 = param2_00 + 1;
      iVar2 = sprintf(param_1 + iVar1 + iVar3,"chain%d_voladded=%d;",param2,0);
      iVar2 = iVar1 + iVar3 + iVar2;
      iVar1 = sprintf(param_1 + iVar2,"chain%d_basefreq=%d;",param2,300);
      iVar2 = iVar2 + iVar1;
      iVar3 = sprintf(param_1 + iVar2,"chain%d_badcore=%d;",param2,0);
      iVar3 = iVar2 + iVar3;
      param0 = param_1 + iVar3;
    }
    iVar1 = param2;
  } while (param2 != 4);
  iVar1 = sprintf(param0,"chainnum=%d;",param2_00);
  sprintf(param_1 + iVar3 + iVar1,"version=%s;",&DAT_0008a428);
  return;
}

