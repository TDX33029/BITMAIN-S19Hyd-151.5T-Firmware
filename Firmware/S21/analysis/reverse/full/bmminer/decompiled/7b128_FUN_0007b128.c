// FUN_0007b128 @ 0007b128  size=120  callers=1
// program: bmminer


int FUN_0007b128(void)

{
  int iVar1;
  int local_10;
  int local_c;
  
  local_10 = 0;
  local_c = 0;
  iVar1 = FUN_0007b018(&local_10);
  if (iVar1 == 0) {
    local_c = 1;
  }
  if (local_c == 0) {
    FUN_0007b0c0(&local_10);
  }
  if (local_10 == 0) {
    local_10 = 1;
  }
  return local_10;
}

