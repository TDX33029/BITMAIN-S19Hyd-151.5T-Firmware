// FUN_009491b8 @ 009491b8 size=288 calls_out=2 calls_in=9
// strings: 

void FUN_009491b8(undefined4 param_1,int param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_3) {
  case 0:
    iVar1 = param_2 + 0x20;
    if (*(int *)(param_2 + 0x13c) != -0x7fffffff) {
      FUN_0094938c(iVar1);
    }
    break;
  case 1:
    iVar1 = param_2 + 0x280;
    if (*(int *)(param_2 + 0x39c) != -0x7fffffff) {
      FUN_0094938c(iVar1);
    }
    break;
  case 2:
    iVar1 = param_2 + 0x150;
    if (*(int *)(param_2 + 0x26c) != -0x7fffffff) {
      FUN_0094938c(iVar1);
    }
    break;
  case 3:
    iVar1 = param_2 + 0x3b0;
    if (*(int *)(param_2 + 0x4cc) != -0x7fffffff) {
      FUN_0094938c(iVar1);
    }
    break;
  case 4:
    iVar1 = param_2 + 0x4e0;
    if (*(int *)(param_2 + 0x5fc) != -0x7fffffff) {
      FUN_0094938c(iVar1);
    }
    break;
  case 5:
    iVar1 = param_2 + 0x610;
    if (*(int *)(param_2 + 0x72c) != -0x7fffffff) {
      FUN_0094938c(iVar1);
    }
    break;
  case 6:
    iVar1 = param_2 + 0x740;
    if (*(int *)(param_2 + 0x85c) != -0x7fffffff) {
      FUN_0094938c(iVar1);
    }
    break;
  case 7:
    iVar1 = param_2 + 0x870;
    if (*(int *)(param_2 + 0x98c) != -0x7fffffff) {
      FUN_0094938c(iVar1);
    }
  }
  FUN_01bed4e2(iVar1,param_4,0x130);
  FUN_01bed4e2(param_1,param_2,0x9d0);
  return;
}

