// FUN_009cce08 @ 009cce08 size=188 calls_out=1 calls_in=3
// strings: 

void FUN_009cce08(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(*(int *)(param_1 + 8) + 4);
  thunk_FUN_016d3fb4();
  do {
    if (piVar2 == (int *)0x0) {
      return;
    }
    while( true ) {
      piVar1 = (int *)*piVar2;
      thunk_FUN_016d3fb4(piVar2);
      if ((piVar1[1] & 1U) != 0) break;
      iVar3 = *piVar1;
      if (*(int *)(iVar3 + 8) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 0xc));
      }
      if (*(int *)(iVar3 + 0x14) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 0x18));
      }
      if (*(int *)(iVar3 + 0x20) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 0x24));
      }
      if (*(int *)(iVar3 + 0x2c) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 0x30));
      }
      thunk_FUN_016d3fb4(iVar3);
      piVar2 = (int *)piVar1[1];
      thunk_FUN_016d3fb4(piVar1);
      if (piVar2 == (int *)0x0) {
        return;
      }
    }
    piVar2 = (int *)(piVar1[1] & 0xfffffffe);
    thunk_FUN_016d3fb4(piVar1);
  } while( true );
}

