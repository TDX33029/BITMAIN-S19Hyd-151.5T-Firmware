// FUN_016cf98c @ 016cf98c size=144 calls_out=3 calls_in=2
// strings: 

void FUN_016cf98c(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_2 + 0x20) == 0) {
    *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
    if (*(int *)(param_2 + 0x24) != 0) {
      uVar2 = *(uint *)(param_2 + 0x28);
      if (*(uint *)(param_2 + 0x48) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar2,*(uint *)(param_2 + 0x48),&DAT_01d07a1c);
      }
      *(undefined4 *)(*(int *)(param_2 + 0x44) + uVar2 * 4) = param_3;
      *(undefined4 *)(param_2 + 0x24) = 0;
      iVar1 = *(int *)(param_2 + 0x20);
      *param_1 = 0x2a;
      param_1[1] = uVar2;
      *(int *)(param_2 + 0x20) = iVar1 + 1;
      return;
    }
  }
  else {
    FUN_01306fc8(&DAT_01d09b68);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0130739c(&DAT_004ce2b9,0x1f,&DAT_01d07a4c);
}

