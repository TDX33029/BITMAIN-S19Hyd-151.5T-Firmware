// FUN_01b951dc @ 01b951dc size=68 calls_out=0 calls_in=1
// strings: 

int FUN_01b951dc(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 0xc);
  uVar3 = param_2 - iVar2;
  uVar1 = 1 << (param_3 & 0xff);
  if (uVar1 < uVar3) {
    param_2 = param_2 - (1 << (param_3 & 0xff));
  }
  if (uVar3 <= uVar1) {
    param_2 = iVar2;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar2 = param_2;
  }
  return iVar2;
}

