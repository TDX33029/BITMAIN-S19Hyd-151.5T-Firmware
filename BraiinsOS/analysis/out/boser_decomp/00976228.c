// FUN_00976228 @ 00976228 size=80 calls_out=2 calls_in=2
// strings: 

int FUN_00976228(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00ab28c0();
  *(undefined4 *)(&DAT_00001398 + iVar1) = 0;
  *(int *)(iVar1 + 0x1428) = param_1;
  *(undefined2 *)(iVar1 + 0x1422) = 0;
  if (param_2 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d305e8,0);
  }
  *(undefined2 *)(&DAT_00001420 + param_1) = 0;
  *(int *)(&DAT_00001398 + param_1) = iVar1;
  return iVar1;
}

