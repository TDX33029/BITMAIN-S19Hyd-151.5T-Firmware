// FUN_013e0a2c @ 013e0a2c size=132 calls_out=1 calls_in=1
// strings: 

void FUN_013e0a2c(int *param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = (int)param_3 - (int)param_2;
  iVar2 = param_1[2];
  if ((uint)(*param_1 - iVar2) < uVar4) {
    FUN_01af7b44(param_1,iVar2,uVar4,1,1);
    iVar2 = param_1[2];
  }
  if (param_2 != param_3) {
    iVar1 = param_1[1];
    do {
      bVar3 = *param_2;
      if (bVar3 - 0x41 < 0x1a) {
        bVar3 = bVar3 | 0x20;
      }
      *(byte *)(iVar1 + iVar2) = bVar3;
      iVar2 = iVar2 + 1;
      uVar4 = uVar4 - 1;
      param_2 = param_2 + 1;
    } while (uVar4 != 0);
  }
  param_1[2] = iVar2;
  return;
}

