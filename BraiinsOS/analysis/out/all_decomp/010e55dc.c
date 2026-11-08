// FUN_010e55dc @ 010e55dc size=216 calls_out=2 calls_in=0
// strings: 

void FUN_010e55dc(undefined4 *param_1,undefined1 *param_2,int param_3,int *param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_2c [3];
  
  local_2c[0] = 0x80000002;
  FUN_00f2cc28(local_2c);
  iVar3 = param_4[2];
  if ((uint)(*param_4 - iVar3) < 2) {
    FUN_010e555c(param_4,iVar3,2,1,1);
    iVar3 = param_4[2];
  }
  iVar2 = iVar3 + 2;
  param_4[2] = iVar2;
  *(short *)(param_4[1] + iVar3) = (short)param_3;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = *param_2;
    if (*param_4 == iVar2) {
      FUN_010e555c(param_4,iVar2,1,1,1);
      iVar2 = param_4[2];
    }
    *(undefined1 *)(param_4[1] + iVar2) = uVar1;
    iVar2 = iVar2 + 1;
    param_4[2] = iVar2;
    param_2 = param_2 + 1;
  }
  *param_1 = 0x8000000a;
  return;
}

