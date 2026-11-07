// FUN_00651ef4 @ 00651ef4 size=328 calls_out=6 calls_in=1
// strings: 

void FUN_00651ef4(uint *param_1,char *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  
  if ((param_3 != 0) && ((*param_2 == '/' || (iVar1 = FUN_0065203c(param_2,param_3), iVar1 != 0))))
  {
    uVar5 = 0;
    if (-1 < (int)param_3) {
      uVar5 = 1;
      uVar2 = FUN_01298504(param_3,1);
      if (uVar2 != 0) {
        FUN_01bed4e2(uVar2,param_2,param_3);
        FUN_019bb7e0(*param_1,param_1[1]);
        *param_1 = param_3;
        param_1[1] = uVar2;
        param_1[2] = param_3;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar5,param_3);
  }
  uVar2 = param_1[1];
  uVar6 = param_1[2];
  iVar1 = FUN_0065203c(uVar2,uVar6);
  if (uVar6 == 0) {
    uVar6 = 0;
  }
  else {
    cVar4 = '/';
    if (iVar1 != 0) {
      cVar4 = '\\';
    }
    if (cVar4 != *(char *)(uVar2 + uVar6 + -1)) {
      uVar3 = uVar6;
      if (*param_1 == uVar6) {
        FUN_00651ed0(param_1,uVar6,1);
        uVar2 = param_1[1];
        uVar3 = param_1[2];
      }
      uVar6 = uVar6 + 1;
      *(char *)(uVar2 + uVar3) = cVar4;
      param_1[2] = uVar6;
    }
  }
  if (*param_1 - uVar6 < param_3) {
    FUN_00651ed0(param_1,uVar6,param_3);
    uVar2 = param_1[1];
    uVar6 = param_1[2];
  }
  FUN_01bed4e2(uVar2 + uVar6,param_2,param_3);
  param_1[2] = param_1[2] + param_3;
  return;
}

