// FUN_0004a85c @ 0004a85c  size=52  callers=0
// program: bmminer


bool FUN_0004a85c(uint param_1)

{
  uint local_c;
  
  FUN_00045bc4(3,&local_c);
  return (local_c & 1 << (param_1 & 0xff)) != 0;
}

