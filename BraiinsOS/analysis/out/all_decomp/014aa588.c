// FUN_014aa588 @ 014aa588 size=176 calls_out=2 calls_in=0
// strings: 

void FUN_014aa588(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  iVar1 = *param_2;
  bVar3 = iVar1 != 2;
  if (bVar3) {
    iVar1 = param_2[0x8b];
  }
  if (((bVar3 && iVar1 != -0x80000000) && (param_2[0x8d] == 2)) &&
     (*(short *)param_2[0x8c] == 0x3268)) {
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar2 + 2) = 0;
      *puVar2 = 1;
      puVar2[1] = 1;
      *(undefined2 *)(param_1 + 3) = 0;
      param_1[2] = puVar2;
      *param_1 = 0;
      return;
    }
  }
  else {
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar2 + 2) = 0;
      *puVar2 = 1;
      puVar2[1] = 1;
      *(undefined2 *)(param_1 + 3) = 1;
      param_1[2] = puVar2;
      *param_1 = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00600874(4,0xc);
}

