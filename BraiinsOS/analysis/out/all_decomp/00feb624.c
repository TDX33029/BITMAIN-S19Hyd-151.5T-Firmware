// FUN_00feb624 @ 00feb624 size=292 calls_out=3 calls_in=1
// strings: 

void FUN_00feb624(undefined4 *param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  int local_20;
  int local_1c;
  int *local_18;
  undefined4 *local_14;
  
  if (param_3 <= param_5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(param_5,param_3,&DAT_018817a8);
  }
  bVar1 = *(byte *)(param_2 + param_5);
  iVar2 = 1;
  if (((0x7fffffff < (uint)(int)(char)bVar1) && (iVar2 = 2, 0xdf < bVar1)) &&
     (iVar2 = 4, bVar1 < 0xf0)) {
    iVar2 = 3;
  }
  param_5 = iVar2 + param_5;
  if (param_5 < param_4) goto LAB_00feb6c4;
  if (param_4 != 0) {
    if (param_4 < param_3) {
      if (*(char *)(param_2 + param_4) < -0x40) goto LAB_00feb6c4;
    }
    else if (param_4 != param_3) goto LAB_00feb6c4;
  }
  if (param_5 != 0) {
    if (param_5 < param_3) {
      if (*(char *)(param_2 + param_5) < -0x40) {
LAB_00feb6c4:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(param_2,param_3,param_4,param_5,&DAT_018817b8);
      }
    }
    else if (param_5 != param_3) goto LAB_00feb6c4;
  }
  local_1c = param_5 - param_4;
  local_20 = param_2 + param_4;
  local_14 = &DAT_0157d360;
  local_18 = &local_20;
  FUN_00600d2c(param_1 + 1,&DAT_00591e7a,&local_18);
  param_1[4] = param_4;
  *param_1 = 10;
  return;
}

