// FUN_00a7ee68 @ 00a7ee68 size=376 calls_out=0 calls_in=0
// strings: 

void FUN_00a7ee68(uint *param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = *param_2;
  uVar3 = uVar5 / 10;
  iVar4 = 9;
  if (uVar5 % 10 == 0) {
    iVar4 = 8;
    if ((uVar3 * -0x33333333 >> 1 | uVar3 * -0x80000000) < 0x1999999a) {
      iVar4 = 7;
      uVar3 = uVar5 / 100;
      if ((uVar3 * -0x33333333 >> 1 | uVar3 * -0x80000000) < 0x1999999a) {
        iVar4 = 6;
        uVar3 = uVar5 / 1000;
        if ((uVar3 * -0x33333333 >> 1 | uVar3 * -0x80000000) < 0x1999999a) {
          iVar4 = 5;
          uVar3 = uVar5 / 10000;
          if ((uVar3 * -0x33333333 >> 1 | uVar3 * -0x80000000) < 0x1999999a) {
            iVar4 = 4;
            uVar3 = uVar5 / 100000;
            if ((uVar3 * -0x33333333 >> 1 | uVar3 * -0x80000000) < 0x1999999a) {
              iVar4 = 3;
              uVar3 = uVar5 / 1000000;
              if ((uVar3 * -0x33333333 >> 1 | uVar3 * -0x80000000) < 0x1999999a) {
                uVar3 = uVar5 / 10000000;
                iVar4 = 2;
                if (uVar3 % 10 == 0) {
                  uVar3 = uVar5 / 100000000;
                  iVar4 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar3 = uVar5;
  }
  bVar1 = *(byte *)((int)param_2 + 6);
  *param_1 = uVar3;
  *(char *)(param_1 + 1) = (char)iVar4;
  iVar2 = (bVar1 + 0xf6 >> 8) + 1;
  if (bVar1 == 0) {
    iVar2 = 1;
  }
  param_1[2] = iVar2 + iVar4 + 7;
  return;
}

