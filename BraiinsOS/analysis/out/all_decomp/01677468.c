// FUN_01677468 @ 01677468 size=132 calls_out=2 calls_in=0
// strings: 

void FUN_01677468(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar3 = *(uint *)(param_1 + 0x20);
    uVar1 = 0;
    if (uVar3 != 0) {
      FUN_016dd606(*(undefined4 *)(param_1 + 0x1c),0xff,uVar3 + 5);
      uVar1 = uVar3;
      if (7 < uVar3) {
        uVar1 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
      }
    }
    *(uint *)(param_1 + 0x24) = uVar1;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18) + 1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x14);
  while (iVar4 = iVar4 + -1, iVar4 != 0) {
    FUN_01681c48(iVar2);
    iVar2 = iVar2 + 0xc0;
  }
  return;
}

