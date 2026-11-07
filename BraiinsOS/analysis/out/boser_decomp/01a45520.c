// FUN_01a45520 @ 01a45520 size=228 calls_out=3 calls_in=1
// strings: 

void FUN_01a45520(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  int local_28;
  int local_24;
  
  FUN_01a47010(&local_50);
  if (local_50 == 3) {
    iVar1 = *(int *)(param_2 + 0xc);
    while( true ) {
      uVar2 = *(undefined4 *)(param_2 + 8);
      FUN_01a47010(&local_38,param_2);
      if (local_38 != 3) break;
      if (*(int *)(param_2 + 0xc) == iVar1) {
        *param_1 = 2;
        param_1[1] = 0;
        param_1[2] = 4;
        param_1[3] = 0;
        param_1[4] = 0;
        return;
      }
      iVar1 = *(int *)(param_2 + 0xc);
    }
    if (local_38 == 1) {
      *param_1 = 3;
      *(undefined4 *)(param_2 + 8) = uVar2;
      *(int *)(param_2 + 0xc) = iVar1;
      FUN_0134aee0(local_34,local_30,4,0xc);
      FUN_012d40d0(local_28,local_24);
    }
    else {
      *param_1 = local_38;
      param_1[1] = local_34;
      param_1[2] = local_30;
      param_1[3] = iStack_2c;
      param_1[4] = local_28;
      param_1[5] = local_24;
    }
  }
  else {
    param_1[1] = local_4c;
    param_1[2] = iStack_48;
    param_1[3] = iStack_44;
    param_1[4] = iStack_40;
    param_1[5] = iStack_3c;
    *param_1 = local_50;
  }
  return;
}

