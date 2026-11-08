// FUN_01280668 @ 01280668 size=116 calls_out=2 calls_in=0
// strings: 

void FUN_01280668(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  cVar1 = *(char *)(param_1 + 0x34);
  *(undefined1 *)(param_1 + 0x34) = 2;
  if (cVar1 == '\x01') {
    do {
      iVar3 = DAT_018dd954 + -1;
      bVar2 = (bool)hasExclusiveAccess(0x18dd954);
    } while (!bVar2);
    DAT_018dd954 = iVar3;
    if (*(int *)(param_1 + 0x1c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x20));
    }
    if (*(int *)(param_1 + 0x14) == 3) {
      return;
    }
    FUN_0128155c(*(int *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
  }
  return;
}

