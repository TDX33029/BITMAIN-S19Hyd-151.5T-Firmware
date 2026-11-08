// FUN_00835ea4 @ 00835ea4 size=240 calls_out=3 calls_in=1
// strings: 

void FUN_00835ea4(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint local_30;
  uint local_2c;
  
  uVar6 = param_3 - param_2;
  iVar1 = uVar6 * 0xc;
  if (0xaaaaaaa < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  uVar5 = 0;
  if (iVar1 == 0) {
    local_2c = 4;
    local_30 = 0;
  }
  else {
    local_2c = thunk_FUN_016d4a50(iVar1);
    local_30 = uVar6;
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar1);
    }
  }
  if (param_2 != param_3) {
    puVar4 = (undefined4 *)(local_2c + 4);
    uVar5 = 0;
    do {
      uVar2 = *(undefined1 *)(param_2 + uVar5);
      puVar3 = (undefined1 *)thunk_FUN_016d4a50(1);
      if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(1,1);
      }
      uVar5 = uVar5 + 1;
      puVar4[-1] = 1;
      *puVar4 = puVar3;
      puVar4[1] = 1;
      puVar4 = puVar4 + 3;
      *puVar3 = uVar2;
    } while (uVar6 != uVar5);
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = uVar5;
  return;
}

