// FUN_018d8784 @ 018d8784 size=112 calls_out=1 calls_in=1
// strings: 

void FUN_018d8784(undefined1 param_1,undefined1 param_2,int *param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  uVar1 = 0x14;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_1) {
  case 1:
    uVar1 = 0x15;
    break;
  case 2:
    uVar1 = 0x16;
    break;
  case 3:
    uVar1 = 0x17;
    break;
  case 4:
    uVar1 = 0x18;
    break;
  case 5:
    uVar1 = param_2;
  }
  iVar2 = param_3[2];
  if (iVar2 == *param_3) {
    FUN_006666a0(param_3);
  }
  *(undefined1 *)(param_3[1] + iVar2) = uVar1;
  param_3[2] = iVar2 + 1;
  return;
}

