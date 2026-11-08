// FUN_01288888 @ 01288888 size=148 calls_out=1 calls_in=0
// strings: 

void FUN_01288888(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  
  bVar5 = param_2 + 0x30;
  uVar4 = 2;
  iVar3 = param_1[2];
  if ((uint)(int)(char)bVar5 < 0x80000000) {
    uVar4 = 1;
  }
  iVar1 = iVar3;
  if ((uint)(*param_1 - iVar3) < uVar4) {
    FUN_006520b4(param_1,iVar3,uVar4,1,1);
    iVar1 = param_1[2];
  }
  iVar2 = param_1[1];
  if (0x7fffffff < (uint)(int)(char)bVar5) {
    ((byte *)(iVar2 + iVar1))[1] = bVar5 & 0xbf;
    bVar5 = bVar5 >> 6 | 0xc0;
  }
  param_1[2] = iVar3 + uVar4;
  *(byte *)(iVar2 + iVar1) = bVar5;
  return;
}

