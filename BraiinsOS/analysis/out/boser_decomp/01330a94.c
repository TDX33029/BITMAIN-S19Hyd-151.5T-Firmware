// FUN_01330a94 @ 01330a94 size=292 calls_out=3 calls_in=1
// strings: 

void FUN_01330a94(undefined4 *param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  int local_20;
  int local_1c;
  int *local_18;
  undefined1 *local_14;
  
  if (param_3 <= param_5) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(param_5,param_3,&DAT_01ce613c);
  }
  bVar1 = *(byte *)(param_2 + param_5);
  iVar2 = 1;
  if (((0x7fffffff < (uint)(int)(char)bVar1) && (iVar2 = 2, 0xdf < bVar1)) &&
     (iVar2 = 4, bVar1 < 0xf0)) {
    iVar2 = 3;
  }
  param_5 = iVar2 + param_5;
  if (param_5 < param_4) goto LAB_01330b34;
  if (param_4 != 0) {
    if (param_4 < param_3) {
      if (*(char *)(param_2 + param_4) < -0x40) goto LAB_01330b34;
    }
    else if (param_4 != param_3) goto LAB_01330b34;
  }
  if (param_5 != 0) {
    if (param_5 < param_3) {
      if (*(char *)(param_2 + param_5) < -0x40) {
LAB_01330b34:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(param_2,param_3,param_4,param_5,&DAT_01ce614c);
      }
    }
    else if (param_5 != param_3) goto LAB_01330b34;
  }
  local_1c = param_5 - param_4;
  local_20 = param_2 + param_4;
  local_14 = &LAB_018a13b8;
  local_18 = &local_20;
  FUN_00664898(param_1 + 1,&DAT_005918d2,&local_18);
  param_1[4] = param_4;
  *param_1 = 10;
  return;
}

