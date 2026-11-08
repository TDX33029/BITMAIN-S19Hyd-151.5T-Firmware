// FUN_013cd970 @ 013cd970 size=144 calls_out=1 calls_in=0
// strings: 

void FUN_013cd970(undefined4 *param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6
                 )

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_6 < param_5) || (param_4 < param_6)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(param_5,param_6,param_4,&DAT_01894828);
  }
  uVar2 = 0;
  if (param_6 != param_5) {
    iVar1 = 0;
    while (*(char *)(param_2 + (uint)*(byte *)(param_3 + param_5 + iVar1)) == '\0') {
      iVar1 = iVar1 + 1;
      if (param_6 - param_5 == iVar1) {
        *param_1 = 0;
        return;
      }
    }
    param_1[1] = iVar1 + param_5;
    param_1[2] = iVar1 + param_5 + 1;
    uVar2 = 1;
  }
  *param_1 = uVar2;
  return;
}

