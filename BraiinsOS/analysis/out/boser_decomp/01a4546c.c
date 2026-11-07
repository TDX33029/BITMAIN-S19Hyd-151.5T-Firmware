// FUN_01a4546c @ 01a4546c size=180 calls_out=3 calls_in=2
// strings: 

void FUN_01a4546c(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int local_20;
  int local_1c;
  
  iVar1 = *(int *)(param_2 + 0xc);
  while( true ) {
    uVar2 = *(undefined4 *)(param_2 + 8);
    FUN_01a47010(&local_30,param_2);
    if (local_30 != 3) {
      if (local_30 == 1) {
        *param_1 = 3;
        *(undefined4 *)(param_2 + 8) = uVar2;
        *(int *)(param_2 + 0xc) = iVar1;
        FUN_0134aee0(iStack_2c,iStack_28,4,0xc);
        FUN_012d40d0(local_20,local_1c);
        return;
      }
      *param_1 = local_30;
      param_1[1] = iStack_2c;
      param_1[2] = iStack_28;
      param_1[3] = iStack_24;
      param_1[4] = local_20;
      param_1[5] = local_1c;
      return;
    }
    if (*(int *)(param_2 + 0xc) == iVar1) break;
    iVar1 = *(int *)(param_2 + 0xc);
  }
  *param_1 = 2;
  param_1[1] = 0;
  param_1[2] = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

