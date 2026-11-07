// FUN_014ef364 @ 014ef364 size=72 calls_out=1 calls_in=1
// strings: 

void FUN_014ef364(int *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = 0x15;
  if ((int)*param_2 < 0) {
    uVar2 = *param_2 ^ 0x80000000;
  }
  iVar1 = 0;
  if (uVar2 != 0x10 && uVar2 != 0x12) {
    if (uVar2 == 0x11) {
      param_2 = (uint *)param_2[1];
    }
    uVar3 = FUN_014c93b8(param_2);
    iVar1 = (int)uVar3 + 1;
    param_1[1] = (int)((ulonglong)uVar3 >> 0x20);
  }
  *param_1 = iVar1;
  return;
}

