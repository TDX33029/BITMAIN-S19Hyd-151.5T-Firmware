// FUN_010e19c0 @ 010e19c0 size=224 calls_out=2 calls_in=0
// strings: 

void FUN_010e19c0(undefined4 *param_1,int *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_2c [3];
  
  local_2c[0] = 0x80000002;
  FUN_00f2cc28(local_2c);
  iVar2 = param_2[2];
  if ((uint)(*param_2 - iVar2) < 2) {
    FUN_010e555c(param_2,iVar2,2,1,1);
    iVar2 = param_2[2];
  }
  iVar1 = iVar2 + 2;
  param_2[2] = iVar1;
  *(short *)(param_2[1] + iVar2) = (short)param_4;
  if (param_4 != 0) {
    param_4 = param_4 << 2;
    do {
      uVar3 = *param_3;
      if ((uint)(*param_2 - iVar1) < 4) {
        FUN_010e555c(param_2,iVar1,4,1,1);
        iVar1 = param_2[2];
      }
      param_4 = param_4 + -4;
      *(undefined4 *)(param_2[1] + iVar1) = uVar3;
      iVar1 = iVar1 + 4;
      param_2[2] = iVar1;
      param_3 = param_3 + 1;
    } while (param_4 != 0);
  }
  *param_1 = 0x8000000a;
  return;
}

