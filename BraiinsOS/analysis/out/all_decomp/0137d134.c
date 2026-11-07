// FUN_0137d134 @ 0137d134 size=192 calls_out=3 calls_in=1
// strings: no quit in start without look-behind

void FUN_0137d134(int param_1,uint *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *param_2;
  iVar1 = 2;
  if (2 < uVar3) {
    iVar1 = uVar3 - 3;
  }
  if (iVar1 == 0) {
    puVar2 = (undefined1 *)thunk_FUN_016d4a50(0xc);
    if (puVar2 != (undefined1 *)0x0) {
      *(int *)(puVar2 + 4) = param_1;
      *puVar2 = 1;
      return;
    }
  }
  else if (iVar1 == 1) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("no quit in start without look-behind",0x24,&DAT_01892a10);
    }
    uVar3 = param_2[1];
    puVar2 = (undefined1 *)thunk_FUN_016d4a50(0xc);
    if (puVar2 != (undefined1 *)0x0) {
      *(int *)(puVar2 + 4) = param_1 + -1;
      puVar2[1] = (char)uVar3;
      *puVar2 = 0;
      return;
    }
  }
  else {
    uVar4 = param_2[1];
    puVar2 = (undefined1 *)thunk_FUN_016d4a50(0xc);
    if (puVar2 != (undefined1 *)0x0) {
      *(uint *)(puVar2 + 4) = uVar3;
      *(uint *)(puVar2 + 8) = uVar4;
      *puVar2 = 3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00600874(4,0xc);
}

