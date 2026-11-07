// FUN_0001d594 @ 0001d594  size=132  callers=1
// program: bmminer


int FUN_0001d594(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_c;
  
  local_c = 0;
  if (DAT_00087dec == 2) {
    iVar3 = (&DAT_000891dc)[param_1];
    iVar1 = FUN_0002002c();
    iVar2 = FUN_0002006c();
    return (iVar2 * iVar1 * iVar3) / 1000 + local_c;
  }
  FUN_0001bf4c(param_1,(undefined1)DAT_0008a848,&local_c);
  return local_c;
}

