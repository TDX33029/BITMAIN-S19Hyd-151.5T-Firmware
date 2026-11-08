// FUN_01a4f600 @ 01a4f600 size=420 calls_out=3 calls_in=1
// strings: 

void FUN_01a4f600(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_r6;
  int iVar4;
  int iVar5;
  bool bVar6;
  int local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int local_2c;
  
  FUN_01a4f43c(&local_40);
  if (local_40 == 3) {
    iVar5 = *(int *)(param_2 + 0xc);
    do {
      iVar4 = *(int *)(param_2 + 8);
      FUN_01a4f43c(&local_40,param_2);
      iVar2 = local_2c;
      iVar1 = iStack_30;
      if (local_40 != 3) {
        unaff_r6 = iVar1;
        if (local_40 == 1) {
          *(int *)(param_2 + 8) = iVar4;
          *(int *)(param_2 + 0xc) = iVar5;
          if (iVar5 == 0) {
LAB_01a4f744:
            FUN_0134aee0(local_3c,iStack_38,4,0xc);
            FUN_012d40d0(iStack_30,local_2c);
            *(int *)(param_2 + 8) = iVar4;
            *(int *)(param_2 + 0xc) = iVar5;
            FUN_0134aee0(0,4,4,0xc);
            FUN_012d40d0(0);
            *param_1 = 3;
            return;
          }
          iVar3 = 0;
          do {
            if (*(char *)(iVar4 + iVar3) != ' ' && *(char *)(iVar4 + iVar3) != '\t')
            goto LAB_01a4f6c0;
            iVar3 = iVar3 + 1;
          } while (iVar5 != iVar3);
          iVar3 = iVar5;
LAB_01a4f6c0:
          if (iVar3 == 0) goto LAB_01a4f744;
          *(int *)(param_2 + 8) = iVar4 + iVar3;
          *(int *)(param_2 + 0xc) = iVar5 - iVar3;
          FUN_0134aee0(local_3c,iStack_38,4,0xc);
          FUN_012d40d0(iVar1,iVar2);
        }
        else if (local_40 != 3) goto LAB_01a4f730;
      }
      bVar6 = *(int *)(param_2 + 0xc) != iVar5;
      iVar5 = *(int *)(param_2 + 0xc);
    } while (bVar6);
    local_40 = 2;
    local_3c = 0;
    iStack_38 = 4;
    iStack_34 = 0;
    iStack_30 = 0;
    local_2c = unaff_r6;
  }
LAB_01a4f730:
  *param_1 = local_40;
  param_1[1] = local_3c;
  param_1[2] = iStack_38;
  param_1[3] = iStack_34;
  param_1[4] = iStack_30;
  param_1[5] = local_2c;
  return;
}

