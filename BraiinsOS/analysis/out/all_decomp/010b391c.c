// FUN_010b391c @ 010b391c size=132 calls_out=1 calls_in=3
// strings: 

void FUN_010b391c(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((*(int *)(param_1 + 0x90) == 0) && (iVar5 = *(int *)(param_1 + 0x94), iVar5 != -0x80000000)) {
    iVar3 = *(int *)(param_1 + 0x98);
    iVar2 = *(int *)(param_1 + 0x9c) + 1;
    iVar4 = 0;
    while (iVar2 = iVar2 + -1, iVar2 != 0) {
      piVar1 = (int *)(iVar3 + iVar4);
      iVar4 = iVar4 + 0x14;
      (**(code **)(*piVar1 + 0x10))(piVar1 + 3,piVar1[1],piVar1[2]);
    }
    if (iVar5 != 0) {
      thunk_FUN_016d3fb4(iVar3);
    }
  }
  *(undefined1 *)(param_1 + 0xf7) = 2;
  *(undefined4 *)(param_1 + 0x90) = 6;
  return;
}

