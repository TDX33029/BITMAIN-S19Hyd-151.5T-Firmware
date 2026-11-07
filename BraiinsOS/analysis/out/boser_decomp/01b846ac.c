// FUN_01b846ac @ 01b846ac size=96 calls_out=0 calls_in=5
// strings: 

uint FUN_01b846ac(byte *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  uVar3 = 0;
  if (param_3 < 0) {
    return 0;
  }
  do {
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 4;
    uVar3 = *(int *)(param_2 + iVar1) * (uint)*param_1 + uVar3;
  } while (iVar2 <= param_3);
  return uVar3 >> 3;
}

