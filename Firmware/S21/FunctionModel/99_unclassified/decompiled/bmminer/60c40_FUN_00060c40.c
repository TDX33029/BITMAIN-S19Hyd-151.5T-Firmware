// FUN_00060c40 @ 00060c40  size=152  callers=2
// program: bmminer


int FUN_00060c40(int param_1)

{
  int iVar1;
  int local_c;
  
  if (param_1 == 0) {
    local_c = FUN_00062388(0x3ba,1);
  }
  else if (param_1 == 1) {
    local_c = FUN_00062388(0x3bb,1);
  }
  else {
    local_c = FUN_00062388(0x3ba,1);
    iVar1 = FUN_00062388(0x3bb,1);
    local_c = local_c + iVar1;
  }
  return local_c;
}

