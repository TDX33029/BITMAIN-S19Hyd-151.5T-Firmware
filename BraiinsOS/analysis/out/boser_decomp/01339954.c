// FUN_01339954 @ 01339954 size=96 calls_out=2 calls_in=2
// strings: mutating instruction other than Split

void FUN_01339954(int param_1,uint param_2,uint param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(param_3,param_2,&DAT_01ce6744);
  }
  piVar1 = (int *)(param_1 + param_3 * 0x28);
  if (*piVar1 != 7) {
                    /* WARNING: Subroutine does not return */
    FUN_01979f74("mutating instruction other than Split",0x25,&DAT_01ce6754);
  }
  iVar2 = 4;
  if (param_5 != 0) {
    iVar2 = 8;
  }
  *(undefined4 *)((int)piVar1 + iVar2) = param_4;
  return;
}

