// FUN_019618d0 @ 019618d0 size=76 calls_out=0 calls_in=2
// strings: 

int FUN_019618d0(char *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((uint)(int)*param_1 < 0x80000000) {
    return 0;
  }
  iVar1 = 0;
  uVar2 = 0;
  uVar3 = (int)*param_1;
  do {
    param_1 = param_1 + 1;
    uVar4 = uVar2 & 0x1f;
    uVar2 = uVar2 + 7;
    iVar1 = iVar1 + ((uVar3 & 0x7f) << uVar4);
    uVar3 = (int)*param_1;
  } while (*param_1 < 0);
  return iVar1;
}

