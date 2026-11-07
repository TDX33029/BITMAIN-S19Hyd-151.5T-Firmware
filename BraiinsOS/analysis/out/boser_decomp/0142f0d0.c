// FUN_0142f0d0 @ 0142f0d0 size=188 calls_out=2 calls_in=5
// strings: 

void FUN_0142f0d0(int *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = param_1[2];
  if ((uint)(*param_1 - iVar4) < param_3) {
    FUN_016092cc(param_1,iVar4,param_3,1,1);
    iVar4 = param_1[2];
  }
  else if (param_3 == 0) {
    return;
  }
  bVar3 = 0x2d;
  do {
    bVar1 = *param_2;
    bVar2 = bVar1;
    if ((byte)(bVar1 + 0x9f) < 0x1a) {
      bVar2 = bVar1 ^ 0x20;
    }
    bVar5 = bVar3 != 0x2d;
    bVar3 = bVar2;
    if (bVar5) {
      bVar3 = bVar1;
    }
    if (iVar4 == *param_1) {
      FUN_006666a0(param_1);
    }
    param_3 = param_3 - 1;
    *(byte *)(param_1[1] + iVar4) = bVar3;
    iVar4 = iVar4 + 1;
    param_1[2] = iVar4;
    param_2 = param_2 + 1;
  } while (param_3 != 0);
  return;
}

