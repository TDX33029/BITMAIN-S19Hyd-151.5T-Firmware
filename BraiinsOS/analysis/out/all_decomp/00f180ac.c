// FUN_00f180ac @ 00f180ac size=196 calls_out=3 calls_in=3
// strings: 

void FUN_00f180ac(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int local_2c;
  int local_28;
  
  if (param_2 == 0) {
    return;
  }
  iVar1 = 0;
  do {
    puVar3 = (ushort *)(param_1 + iVar1);
    if (4 < *puVar3) {
      puVar3[1] = 0;
    }
    iVar2 = *(int *)(puVar3 + 2);
    if (iVar2 != 0) {
      iVar4 = *(int *)(puVar3 + 4);
      local_28 = iVar2 + iVar4 * 0x14;
      local_2c = iVar2;
      FUN_00f30554(&local_2c);
      puVar3[2] = 0;
      puVar3[3] = 0;
      FUN_00f2c6d0(iVar2,iVar4);
    }
    *(undefined1 *)(puVar3 + 2) = 0;
    *(undefined1 *)((int)puVar3 + 5) = 0;
    *(undefined1 *)(puVar3 + 3) = 0;
    *(undefined1 *)((int)puVar3 + 7) = 0;
    *(undefined1 *)(puVar3 + 4) = 0;
    *(undefined1 *)((int)puVar3 + 9) = 0;
    *(undefined1 *)(puVar3 + 5) = 0;
    *(undefined1 *)((int)puVar3 + 0xb) = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(ushort **)(puVar3 + 4) = puVar3 + 6;
    FUN_00f36024();
    iVar1 = iVar1 + 0x14;
  } while (param_2 * 0x14 != iVar1);
  return;
}

