// FUN_00ce7a60 @ 00ce7a60 size=276 calls_out=3 calls_in=1
// strings: 

void FUN_00ce7a60(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint local_50;
  undefined4 *local_4c;
  undefined4 local_30;
  int local_2c;
  int local_28;
  
  uVar4 = param_3 - param_2;
  iVar1 = uVar4 * 0xc;
  if (0xaaaaaaa < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar1);
  }
  uVar3 = 0;
  if (iVar1 == 0) {
    local_4c = (undefined4 *)&DAT_00000004;
    local_50 = 0;
  }
  else {
    local_4c = (undefined4 *)thunk_FUN_016d4a50(iVar1);
    local_50 = uVar4;
    if (local_4c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar1);
    }
  }
  if (param_2 != param_3) {
    uVar3 = 0;
    puVar2 = local_4c;
    do {
      local_28 = 0;
      local_2c = 1;
      local_30 = 0;
      FUN_00d653ec(&local_30,0,1,1,1);
      uVar3 = uVar3 + 1;
      *(undefined1 *)(local_2c + local_28) = 0x3f;
      *puVar2 = local_30;
      puVar2[1] = local_2c;
      puVar2[2] = local_28 + 1;
      puVar2 = puVar2 + 3;
    } while (uVar4 != uVar3);
  }
  *param_1 = local_50;
  param_1[1] = (uint)local_4c;
  param_1[2] = uVar3;
  return;
}

