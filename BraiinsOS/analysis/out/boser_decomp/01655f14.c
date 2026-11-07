// FUN_01655f14 @ 01655f14 size=172 calls_out=2 calls_in=1
// strings: 

void FUN_01655f14(int *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int local_30;
  int local_2c;
  
  iVar6 = *param_2;
  uVar5 = 0;
  local_30 = param_2[1] - iVar6;
  if (local_30 < 0) {
LAB_01655f2c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar5,local_30);
  }
  if (param_2[1] == iVar6) {
    iVar1 = 0;
    local_2c = 1;
    local_30 = 0;
  }
  else {
    uVar5 = 1;
    local_2c = FUN_01298504(local_30,1);
    if (local_2c == 0) goto LAB_01655f2c;
    pcVar2 = (char *)param_2[2];
    pcVar3 = (char *)param_2[3];
    iVar1 = 0;
    do {
      cVar4 = *(char *)(iVar6 + iVar1);
      if (cVar4 == *pcVar2) {
        cVar4 = *pcVar3;
      }
      *(char *)(local_2c + iVar1) = cVar4;
      iVar1 = iVar1 + 1;
    } while (local_30 != iVar1);
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = iVar1;
  return;
}

