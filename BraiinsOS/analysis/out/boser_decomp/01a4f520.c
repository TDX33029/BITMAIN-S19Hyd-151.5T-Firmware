// FUN_01a4f520 @ 01a4f520 size=224 calls_out=3 calls_in=2
// strings: 

void FUN_01a4f520(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_40;
  uint uStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0xc);
  FUN_01a4f43c(&local_40);
  if (local_40 == 3) {
LAB_01a4f54c:
    iVar2 = 3;
  }
  else {
    if (local_40 == 1) {
      *(undefined4 *)(param_2 + 8) = uVar1;
      *(int *)(param_2 + 0xc) = iVar2;
      FUN_0134aee0(uStack_3c,iStack_38,4,0xc);
      FUN_012d40d0(iStack_30,iStack_2c);
      if (iVar2 == 0) goto LAB_01a4f54c;
      iStack_38 = 4;
      iStack_34 = 0;
      uStack_3c = (uint)(iVar2 == 0);
      local_40 = 1;
      iVar2 = 0;
    }
    else {
      iVar2 = 3;
      if (local_40 == 3) goto LAB_01a4f5f4;
      iVar2 = iStack_30;
      iStack_30 = iStack_2c;
    }
    param_1[1] = uStack_3c;
    param_1[2] = iStack_38;
    param_1[3] = iStack_34;
    param_1[4] = iVar2;
    param_1[5] = iStack_30;
    iVar2 = local_40;
  }
LAB_01a4f5f4:
  *param_1 = iVar2;
  return;
}

