// FUN_006cbcf4 @ 006cbcf4 size=156 calls_out=1 calls_in=1
// strings: 

void FUN_006cbcf4(uint *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [16];
  undefined4 local_30;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
    uVar4 = *(undefined8 *)(param_2 + 2);
    uVar2 = 0x80000000;
    if (((uint)((ulonglong)uVar4 >> 0x20) & 0x7fffffff) < 0x7ff00000) {
      local_30 = 0x80000000;
      FUN_00fe40e4(auStack_40);
      uVar2 = 0x80000001;
    }
    *param_1 = 2;
    param_1[1] = 0;
    *(undefined8 *)(param_1 + 2) = uVar4;
  }
  else {
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    if (iVar1 != 1) {
      *param_1 = uVar3 >> 0x1f;
    }
    param_1[2] = uVar2;
    if (iVar1 == 1) {
      *param_1 = 0;
    }
    param_1[1] = 0;
    uVar2 = 0x80000001;
    param_1[3] = uVar3;
  }
  param_1[4] = uVar2;
  return;
}

