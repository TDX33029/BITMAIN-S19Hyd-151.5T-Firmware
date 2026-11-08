// FUN_01345634 @ 01345634 size=88 calls_out=1 calls_in=1
// strings: 

void FUN_01345634(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = FUN_01344ae8(param_1,":",1);
  if (iVar1 == 0) {
    return;
  }
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  if (uVar3 < uVar2) {
    do {
      if (9 < *(byte *)(*param_1 + uVar3) - 0x30) goto LAB_01345684;
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
    uVar3 = uVar2;
  }
LAB_01345684:
  param_1[2] = uVar3;
  return;
}

