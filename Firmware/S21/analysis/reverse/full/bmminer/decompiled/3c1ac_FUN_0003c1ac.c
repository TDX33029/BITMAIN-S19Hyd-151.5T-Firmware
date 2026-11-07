// FUN_0003c1ac @ 0003c1ac  size=136  callers=1
// program: bmminer


void FUN_0003c1ac(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      FUN_0003a96c();
      goto LAB_0003c1d0;
    }
    if (iVar1 != 0) goto LAB_0003c1d0;
    FUN_0003a904();
    *(undefined4 *)(param_1 + 0x60) = 1;
    iVar1 = *(int *)(*(int *)(param_1 + 0x6c) + 0xc);
    bVar2 = *(int *)(*(int *)(param_1 + 0x6c) + 8) == 0;
    if ((int)(iVar1 - (bVar2 + 1)) < 0 == (SBORROW4(iVar1,1) != SBORROW4(iVar1 + -1,(uint)bVar2))) {
      FUN_0003bc8c(param_1,0x1f7,"Service Unavailable");
      return;
    }
  }
  FUN_0003bcf0(param_1);
LAB_0003c1d0:
  if ((*(byte *)(param_1 + 0x7c) & 2) == 0) {
    return;
  }
  FUN_0003c13c(param_1);
  return;
}

