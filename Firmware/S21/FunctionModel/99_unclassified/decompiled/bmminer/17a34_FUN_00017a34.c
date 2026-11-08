// FUN_00017a34 @ 00017a34  size=148  callers=2
// program: bmminer


int FUN_00017a34(int param_1)

{
  int iVar1;
  int iVar2;
  int local_18;
  undefined2 local_14;
  undefined1 local_12;
  undefined1 local_11;
  
  iVar1 = param_1 * 8;
  iVar2 = *(int *)(&DAT_000bfb18 + iVar1);
  local_11 = (undefined1)param_1;
  if (*(int *)(&DAT_000bfb1c + iVar1) == 0) {
    local_14 = 0;
    local_12 = 0xe;
    local_18 = param_1;
    iVar2 = FUN_0006256c(&local_18);
    if (-1 < iVar2) {
      *(int *)(&DAT_000bfb18 + iVar1) = iVar2;
      *(undefined4 *)(&DAT_000bfb1c + iVar1) = 1;
      return iVar2;
    }
  }
  return iVar2;
}

