// FUN_00783694 @ 00783694 size=180 calls_out=2 calls_in=2
// strings: 

void FUN_00783694(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_1a0 [196];
  int local_dc;
  undefined1 auStack_d8 [192];
  
  iVar1 = *param_2;
  *param_2 = -0x80000000;
  if (iVar1 != -0x80000000) {
    *param_1 = iVar1;
    FUN_01bed4e2(param_1 + 1,param_2 + 1,0xc0);
    return;
  }
  if ((char)param_2[0x32] == '\0') {
    FUN_0076dc84(&local_dc,param_2 + 0x31);
    if (local_dc != -0x7fffffff) {
      FUN_01bed4e2(auStack_1a0,auStack_d8,0xc0);
      *param_1 = local_dc;
      if (local_dc == -0x80000000) {
        *(undefined1 *)(param_2 + 0x32) = 1;
      }
      FUN_01bed4e2(param_1 + 1,auStack_1a0,0xc0);
      return;
    }
    iVar1 = -0x7fffffff;
  }
  else {
    iVar1 = -0x80000000;
  }
  *param_1 = iVar1;
  return;
}

