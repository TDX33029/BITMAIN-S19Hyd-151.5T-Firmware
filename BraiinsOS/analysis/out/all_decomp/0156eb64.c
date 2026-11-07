// FUN_0156eb64 @ 0156eb64 size=116 calls_out=2 calls_in=0
// strings: 

void FUN_0156eb64(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,param_2,uVar1,&DAT_018af198);
  }
  iVar2 = uVar1 - param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 != 0) {
    if (uVar1 == param_2) {
      return;
    }
    FUN_016dd52c(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + param_2 * 0x14,iVar2 * 0x14);
    *(int *)(param_1 + 8) = iVar2;
    return;
  }
  if (uVar1 != 0) {
    *(int *)(param_1 + 8) = iVar2;
  }
  return;
}

