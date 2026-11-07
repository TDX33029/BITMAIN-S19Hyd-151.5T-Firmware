// FUN_017c4408 @ 017c4408 size=124 calls_out=1 calls_in=6
// strings: 

void FUN_017c4408(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  if (iVar2 == param_1[1]) {
    uVar1 = 0;
  }
  else {
    iVar3 = ((uint)(param_1[1] - iVar2) >> 3) * -0x33333333;
    uVar1 = 0;
    do {
      uVar1 = FUN_017c4388(uVar1,iVar2);
      iVar2 = iVar2 + 0x28;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar2 = param_1[2];
  if (iVar2 != param_1[3]) {
    iVar3 = ((uint)(param_1[3] - iVar2) >> 3) * -0x33333333;
    do {
      uVar1 = FUN_017c4388(uVar1,iVar2);
      iVar2 = iVar2 + 0x28;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

