// FUN_00017954 @ 00017954  size=208  callers=2
// program: bmminer


void FUN_00017954(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_18;
  undefined2 local_14;
  undefined1 local_12;
  byte local_11;
  
  local_14 = 0;
  local_11 = (byte)param_1;
  local_18 = param_1;
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (DAT_000be63c < 5) {
        return;
      }
      FUN_0001790c(param_1);
      return;
    }
    local_11 = local_11 + 4;
  }
  local_11 = local_11 & 7;
  local_12 = 9;
  iVar1 = (param_2 + param_1 * 2) * 8;
  if (*(int *)(&DAT_000bfad8 + iVar1) != 0) {
    return;
  }
  iVar2 = FUN_0006256c(&local_18);
  if (-1 < iVar2) {
    *(int *)(&DAT_000bfad4 + iVar1) = iVar2;
    *(undefined4 *)(&DAT_000bfad8 + iVar1) = 1;
  }
  return;
}

