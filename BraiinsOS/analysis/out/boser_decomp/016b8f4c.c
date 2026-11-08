// FUN_016b8f4c @ 016b8f4c size=88 calls_out=1 calls_in=1
// strings: 

bool FUN_016b8f4c(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = *(int *)(param_1 + 0xc) * param_2 + param_3;
  uVar1 = uVar2 >> 5;
  if (*(uint *)(param_1 + 8) <= uVar2 >> 5) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar1,*(uint *)(param_1 + 8),&DAT_01d08b58);
  }
  uVar2 = 1 << (uVar2 & 0x1f);
  uVar4 = *(uint *)(*(int *)(param_1 + 4) + uVar1 * 4);
  uVar3 = uVar4 & uVar2;
  if (uVar3 == 0) {
    *(uint *)(*(int *)(param_1 + 4) + uVar1 * 4) = uVar4 | uVar2;
  }
  return uVar3 == 0;
}

