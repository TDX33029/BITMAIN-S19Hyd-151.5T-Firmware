// FUN_01a4f7a8 @ 01a4f7a8 size=260 calls_out=6 calls_in=2
// strings: 

void FUN_01a4f7a8(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_50 [16];
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  
  iVar1 = *param_2;
  iVar2 = param_2[2];
  FUN_01a4e62c(&local_40);
  iVar3 = local_40;
  if (local_40 == 3) {
    iVar3 = param_2[2];
    iVar4 = param_2[3];
    FUN_01a4f390(&local_40,param_2);
    if (local_40 == 1) {
      param_2[2] = iVar3;
      param_2[3] = iVar4;
      FUN_0134aee0(local_3c,local_38,4,0xc);
      FUN_012d40d0(local_30,local_2c);
    }
    else {
      iVar3 = local_40;
      if (local_40 != 3) goto LAB_01a4f808;
      iVar3 = param_2[2];
    }
    iVar4 = *param_2;
    FUN_01a4f520(&local_40,param_2);
    if (local_40 == 3) {
      *param_1 = 3;
      param_1[1] = iVar2 - iVar1;
      param_1[2] = iVar3 - iVar4;
    }
    else {
      *param_1 = local_40;
      param_1[1] = local_3c;
      param_1[2] = local_38;
      param_1[3] = local_34;
      param_1[4] = local_30;
      param_1[5] = local_2c;
    }
  }
  else {
LAB_01a4f808:
    FUN_01bed4e2(auStack_50,(int)&local_34 + 1,0xb);
    *(undefined1 *)(param_1 + 3) = (undefined1)local_34;
    *param_1 = iVar3;
    param_1[1] = local_3c;
    param_1[2] = local_38;
    FUN_01bed4e2((int)param_1 + 0xd,auStack_50,0xb);
  }
  return;
}

