// FUN_012b9828 @ 012b9828 size=124 calls_out=3 calls_in=1
// strings: 

void FUN_012b9828(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_1 + 4)) {
  case 2:
  case 4:
    FUN_0134bd64(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    return;
  case 3:
    FUN_006a41c0(param_1 + 8);
    return;
  case 5:
    iVar2 = *(int *)(param_1 + 0xc);
    puVar1 = (undefined4 *)(iVar2 + 4);
    break;
  default:
    return;
  }
  for (iVar3 = *(int *)(param_1 + 0x10); iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_0134bd64(puVar1[-1],*puVar1);
    puVar1 = puVar1 + 3;
  }
  FUN_0134aee0(*(undefined4 *)(param_1 + 8),iVar2,4,0xc);
  return;
}

