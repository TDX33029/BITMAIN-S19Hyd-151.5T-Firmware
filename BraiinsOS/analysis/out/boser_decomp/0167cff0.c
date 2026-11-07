// FUN_0167cff0 @ 0167cff0 size=140 calls_out=1 calls_in=5
// strings: 

void FUN_0167cff0(undefined4 *param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6
                 )

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_6 < param_5) || (param_4 < param_6)) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(param_5,param_6,param_4,&DAT_01d0748c);
  }
  uVar2 = 0;
  if (param_6 != param_5) {
    iVar1 = 0;
    do {
      if (*(char *)(param_2 + (uint)*(byte *)(param_3 + param_5 + iVar1)) != '\0') {
        param_1[1] = iVar1 + param_5;
        param_1[2] = iVar1 + param_5 + 1;
        uVar2 = 1;
        goto LAB_0167d058;
      }
      iVar1 = iVar1 + 1;
    } while (param_6 - param_5 != iVar1);
    uVar2 = 0;
  }
LAB_0167d058:
  *param_1 = uVar2;
  return;
}

