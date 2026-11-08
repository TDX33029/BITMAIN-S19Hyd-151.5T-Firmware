// FUN_00667650 @ 00667650 size=68 calls_out=2 calls_in=1
// strings: 

void FUN_00667650(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x14);
  iVar1 = iVar2;
  for (iVar3 = *(int *)(param_1 + 0x18); iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_00667694(iVar1);
    iVar1 = iVar1 + 0x2c;
  }
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x10),iVar2,4,0x2c);
  return;
}

