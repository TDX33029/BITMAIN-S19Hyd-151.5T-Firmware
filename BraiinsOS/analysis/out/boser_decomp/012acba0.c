// FUN_012acba0 @ 012acba0 size=44 calls_out=0 calls_in=0
// strings: 

void FUN_012acba0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  param_1[1] = 0;
  param_1[2] = 1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  param_1[3] = 0;
  *param_1 = uVar2;
  return;
}

