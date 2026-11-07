// FUN_0188e740 @ 0188e740 size=104 calls_out=2 calls_in=1
// strings: 

void FUN_0188e740(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x3c);
  if (iVar2 != -0x80000000) {
    iVar3 = *(int *)(param_1 + 0x40);
    puVar1 = (undefined4 *)(iVar3 + 4);
    for (iVar4 = *(int *)(param_1 + 0x44); iVar4 != 0; iVar4 = iVar4 + -1) {
      FUN_0134bd64(puVar1[-1],*puVar1);
      puVar1 = puVar1 + 3;
    }
    FUN_0134aee0(iVar2,iVar3,4,0xc);
  }
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  *(int *)(param_1 + 0x3c) = *param_2;
  *(int *)(param_1 + 0x40) = iVar2;
  *(int *)(param_1 + 0x44) = iVar3;
  *(undefined1 *)(param_1 + 0x61) = 2;
  return;
}

