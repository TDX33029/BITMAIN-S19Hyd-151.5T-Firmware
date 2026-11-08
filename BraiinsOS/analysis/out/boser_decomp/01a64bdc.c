// FUN_01a64bdc @ 01a64bdc size=152 calls_out=2 calls_in=2
// strings: 

int FUN_01a64bdc(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x34);
  uVar1 = param_2;
  if (iVar3 != 0) {
    uVar1 = (uint)*(byte *)(param_1 + 0x48);
  }
  if (iVar3 != 0 && (uVar1 & 1) != 0) {
    if (iVar3 == *(int *)(param_1 + 0x2c)) {
      FUN_01a70d68();
    }
    iVar2 = iVar3 + -1;
    iVar4 = iVar2 * 0x4c + *(int *)(param_1 + 0x30);
    FUN_01bed4e2(iVar4 + 0x4c,iVar4,0x4c);
  }
  else {
    if (iVar3 == *(int *)(param_1 + 0x2c)) {
      FUN_01a70d68();
    }
    iVar4 = iVar3 * 0x4c + *(int *)(param_1 + 0x30);
    iVar2 = iVar3;
  }
  FUN_01bed4e2(iVar4,param_2,0x4c);
  *(int *)(param_1 + 0x34) = iVar3 + 1;
  return iVar2;
}

