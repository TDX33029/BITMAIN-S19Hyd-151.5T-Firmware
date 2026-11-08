// FUN_01684408 @ 01684408 size=76 calls_out=1 calls_in=3
// strings: no in-progress search to finish

void FUN_01684408(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0xb4);
  uVar3 = *(uint *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("no in-progress search to finish",0x1f,&DAT_01d075fc);
  }
  iVar1 = param_2 - uVar2;
  if (param_2 < uVar2) {
    iVar1 = uVar2 - param_2;
  }
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + iVar1;
  return;
}

