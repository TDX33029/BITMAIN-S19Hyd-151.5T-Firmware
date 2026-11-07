// FUN_01abed88 @ 01abed88 size=220 calls_out=5 calls_in=1
// strings: 

void FUN_01abed88(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint local_38;
  int local_34;
  uint local_30;
  uint local_28;
  int local_24;
  uint local_20;
  
  iVar2 = thunk_FUN_01be5118(0x200);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,0x200);
  }
  local_30 = 0;
  local_38 = 0x80;
  local_34 = iVar2;
  do {
    uVar1 = local_30;
    if (local_30 == local_38) {
      FUN_01a54b48(&local_38);
      iVar2 = local_34;
    }
    local_30 = uVar1 + 1;
    *(undefined4 *)(iVar2 + uVar1 * 4) = 0;
  } while (local_30 != 0x80);
  local_28 = local_38;
  local_24 = local_34;
  local_20 = local_30;
  if ((0x80 < local_38) && (iVar2 = FUN_006641a8(&local_28,0x80,4,4), iVar2 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620();
  }
  uVar1 = local_20;
  iVar2 = local_24;
  FUN_01bed93e(param_1 + 3,0,0x80);
  *(undefined1 *)(param_1 + 0x23) = 0;
  *param_1 = iVar2;
  param_1[1] = uVar1;
  param_1[2] = 0;
  return;
}

