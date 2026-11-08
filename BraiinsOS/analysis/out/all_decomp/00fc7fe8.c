// FUN_00fc7fe8 @ 00fc7fe8 size=280 calls_out=4 calls_in=1
// strings: 

void FUN_00fc7fe8(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_30;
  int *local_2c;
  uint local_28;
  
  uVar4 = *(uint *)(param_2 + 0x200);
  if (uVar4 < 2) {
    param_1[1] = 2;
    param_1[2] = uVar4;
    *param_1 = 1;
    return;
  }
  if (0x80 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar4,0x80,&DAT_01881474);
  }
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(uVar4 * 0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,uVar4 * 0xc);
  }
  uVar2 = 0;
  puVar3 = puVar1;
  do {
    iVar5 = *(int *)(param_2 + uVar2 * 4);
    local_28 = 0;
    local_2c = (int *)&DAT_00000004;
    local_30 = 0;
    if (iVar5 != 0) {
      FUN_0127ac28(&local_30);
      *local_2c = iVar5;
    }
    local_28 = (uint)(iVar5 != 0);
    uVar2 = uVar2 + 1;
    *puVar3 = local_30;
    puVar3[1] = local_2c;
    puVar3[2] = local_28;
    puVar3 = puVar3 + 3;
  } while (uVar4 != uVar2);
  param_1[1] = uVar4;
  param_1[2] = puVar1;
  param_1[3] = uVar4;
  *param_1 = 0;
  return;
}

