// FUN_018c3ef4 @ 018c3ef4 size=244 calls_out=5 calls_in=2
// strings: 

void FUN_018c3ef4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  char local_2c;
  undefined2 local_2b;
  undefined1 local_29;
  undefined4 local_28;
  int local_24;
  
  FUN_018c2e04(&local_2c);
  if (local_2c == '\x14') {
    lVar5 = FUN_018beed0(param_2,local_28);
    local_24 = (int)((ulonglong)lVar5 >> 0x20);
    if ((int)lVar5 == 0) {
      uVar2 = 1;
      param_1[1] = 10;
      local_24 = 0;
    }
    else {
      uVar3 = 0;
      if (lVar5 < 0) {
LAB_018c3f3c:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar3,local_24);
      }
      uVar2 = 0;
      if (local_24 == 0) {
        iVar1 = 1;
        iVar4 = 0;
      }
      else {
        uVar3 = 1;
        iVar1 = FUN_01298504(local_24,1);
        iVar4 = local_24;
        if (iVar1 == 0) goto LAB_018c3f3c;
      }
      FUN_01bed4e2(iVar1,(int)lVar5,local_24);
      param_1[1] = iVar4;
      param_1[2] = iVar1;
    }
  }
  else {
    uVar2 = 1;
    *(undefined1 *)((int)param_1 + 7) = local_29;
    *(undefined2 *)((int)param_1 + 5) = local_2b;
    param_1[2] = local_28;
    *(char *)(param_1 + 1) = local_2c;
  }
  *param_1 = uVar2;
  param_1[3] = local_24;
  return;
}

