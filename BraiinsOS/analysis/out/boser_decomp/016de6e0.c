// FUN_016de6e0 @ 016de6e0 size=172 calls_out=3 calls_in=1
// strings: 

void FUN_016de6e0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_40;
  int iStack_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_28;
  undefined2 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  
  local_24 = *(undefined2 *)(param_2 + 1);
  local_28 = *param_2;
  iStack_3c = FUN_01298504(6,1);
  if (iStack_3c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,6);
  }
  local_20 = 3;
  local_18 = 0;
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 2;
    *(undefined2 *)(iStack_3c + iVar1) = *(undefined2 *)((int)&local_28 + iVar1);
    iVar1 = iVar2;
  } while (iVar2 != 6);
  local_40 = 3;
  local_34 = local_34 & 0xffffff00;
  local_38 = 3;
  local_1c = iStack_3c;
  FUN_016f6050(&local_40);
  *param_1 = local_40;
  param_1[1] = iStack_3c;
  param_1[2] = local_38;
  param_1[3] = local_34;
  return;
}

