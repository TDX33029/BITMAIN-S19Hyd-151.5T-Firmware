// FUN_017258b8 @ 017258b8 size=128 calls_out=3 calls_in=1
// strings: 

void FUN_017258b8(int param_1)

{
  bool bVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x1c);
  if (iVar5 != 0) {
    puVar4 = *(undefined4 **)(param_1 + 0x20);
    pcVar3 = (code *)*puVar4;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(iVar5);
    }
    if (puVar4[1] != 0) {
      thunk_FUN_01be4678(iVar5);
    }
  }
  piVar2 = *(int **)(param_1 + 0x24);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*(undefined4 *)(param_1 + 0x24));
  }
  FUN_01705050(param_1 + 0x10);
  return;
}

