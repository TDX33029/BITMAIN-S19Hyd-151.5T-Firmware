// FUN_012f8028 @ 012f8028 size=180 calls_out=1 calls_in=0
// strings: 

void FUN_012f8028(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*param_1 == 1) {
    uVar1 = param_1[1];
    iVar3 = 2;
    if (0x7f < uVar1) {
      iVar3 = 3;
    }
    if (0x3fff < uVar1) {
      iVar3 = 4;
      if (0x1fffff < uVar1) {
        iVar3 = 5;
      }
      if ((0xfffffff < uVar1) && (iVar3 = 0xb, uVar1 < 0x80000000)) {
        iVar3 = 6;
      }
    }
  }
  if (param_1[2] == 1) {
    uVar1 = param_1[3];
    iVar2 = 2;
    if (0x7f < uVar1) {
      iVar2 = 3;
    }
    if (0x3fff < uVar1) {
      iVar2 = 4;
      if (0x1fffff < uVar1) {
        iVar2 = 5;
      }
      if ((0xfffffff < uVar1) && (iVar2 = 0xb, uVar1 < 0x80000000)) {
        iVar2 = 6;
      }
    }
    iVar3 = iVar2 + iVar3;
  }
  iVar2 = FUN_01337c54(param_1[4]);
  param_1[5] = iVar2 + iVar3;
  return;
}

