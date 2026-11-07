// FUN_019a66e4 @ 019a66e4 size=332 calls_out=4 calls_in=37
// strings: 

void FUN_019a66e4(int *param_1,undefined4 param_2,int param_3,char *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int local_30;
  int local_2c;
  int local_28;
  
  if (param_3 == 0) {
    bVar3 = false;
    local_28 = 0;
    local_2c = 1;
  }
  else {
    iVar2 = FUN_01298504(param_3,1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,param_3);
    }
    FUN_01bed4e2(iVar2,param_2,param_3);
    bVar3 = *(char *)(iVar2 + param_3 + -1) != '/';
    local_2c = iVar2;
    local_28 = param_3;
  }
  iVar2 = param_3;
  local_30 = local_28;
  if ((param_5 == 0) || (iVar1 = 0, *param_4 != '/')) {
    if (!bVar3) goto LAB_019a67c4;
    FUN_0197ac30(&local_30,param_3,1,1,1);
    *(undefined1 *)(local_2c + local_28) = 0x2f;
    iVar1 = local_28 + 1;
    iVar2 = local_30;
  }
  param_3 = iVar1;
  local_28 = param_3;
LAB_019a67c4:
  if ((uint)(iVar2 - param_3) < param_5) {
    FUN_0197ac30(&local_30,param_3,param_5,1,1);
    param_3 = local_28;
  }
  FUN_01bed4e2(local_2c + param_3,param_4,param_5);
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = param_3 + param_5;
  return;
}

