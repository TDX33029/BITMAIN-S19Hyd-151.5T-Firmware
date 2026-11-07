// FUN_014bef28 @ 014bef28 size=92 calls_out=2 calls_in=0
// strings: 

void FUN_014bef28(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = *(int *)*param_1;
  *(int *)*param_1 = 0;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d293f0);
  }
  if (*(char *)(param_2 + 4) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_019b06e8();
  }
  (**(code **)(iVar1 + 4))(&local_20);
  *(undefined4 *)(iVar1 + 4) = local_20;
  *(undefined4 *)(iVar1 + 8) = uStack_1c;
  *(undefined4 *)(iVar1 + 0xc) = uStack_18;
  return;
}

