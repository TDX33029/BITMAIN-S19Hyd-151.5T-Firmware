// FUN_00060cd8 @ 00060cd8  size=152  callers=0
// program: bmminer


int FUN_00060cd8(int param_1)

{
  int iVar1;
  int local_c;
  
  if (param_1 == 0) {
    local_c = FUN_00062388(0x3ba,0);
  }
  else if (param_1 == 1) {
    local_c = FUN_00062388(0x3bb,0);
  }
  else {
    local_c = FUN_00062388(0x3ba,0);
    iVar1 = FUN_00062388(0x3bb,0);
    local_c = local_c + iVar1;
  }
  return local_c;
}

