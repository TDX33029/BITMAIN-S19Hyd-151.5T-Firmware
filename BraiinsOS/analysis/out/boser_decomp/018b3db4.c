// FUN_018b3db4 @ 018b3db4 size=132 calls_out=3 calls_in=1
// strings: 

void FUN_018b3db4(int param_1,int *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  int iVar4;
  
  uVar3 = 1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x10)) {
  case 1:
    uVar3 = 2;
    break;
  case 2:
    uVar3 = 3;
    break;
  case 3:
    uVar3 = *(undefined1 *)(param_1 + 0x11);
  }
  iVar4 = param_2[2];
  if (iVar4 == *param_2) {
    FUN_006666a0(param_2);
  }
  uVar1 = *(undefined2 *)(param_1 + 0xe);
  uVar2 = *(undefined2 *)(param_1 + 0xc);
  *(undefined1 *)(param_2[1] + iVar4) = uVar3;
  param_2[2] = iVar4 + 1;
  FUN_018be354(uVar2,uVar1,param_2);
  FUN_018c42d4(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),param_2);
  return;
}

