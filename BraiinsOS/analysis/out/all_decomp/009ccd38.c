// FUN_009ccd38 @ 009ccd38 size=208 calls_out=1 calls_in=4
// strings: 

void FUN_009ccd38(int param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(*(int *)(param_1 + 8) + 4);
  thunk_FUN_016d3fb4();
  do {
    if (piVar3 == (int *)0x0) {
      return;
    }
    while( true ) {
      piVar2 = (int *)*piVar3;
      thunk_FUN_016d3fb4(piVar3);
      if ((piVar2[1] & 1U) != 0) break;
      iVar4 = *piVar2;
      if ((*(uint *)(iVar4 + 4) & 0x7fffffff) == 0) {
        if ((*(uint *)(iVar4 + 0x10) & 0x7fffffff) != 0) goto LAB_009ccde4;
LAB_009ccda8:
        uVar1 = *(uint *)(iVar4 + 0x1c);
      }
      else {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar4 + 8));
        if ((*(uint *)(iVar4 + 0x10) & 0x7fffffff) == 0) goto LAB_009ccda8;
LAB_009ccde4:
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar4 + 0x14));
        uVar1 = *(uint *)(iVar4 + 0x1c);
      }
      if ((uVar1 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar4 + 0x20));
      }
      thunk_FUN_016d3fb4(iVar4);
      piVar3 = (int *)piVar2[1];
      thunk_FUN_016d3fb4(piVar2);
      if (piVar3 == (int *)0x0) {
        return;
      }
    }
    piVar3 = (int *)(piVar2[1] & 0xfffffffe);
    thunk_FUN_016d3fb4(piVar2);
  } while( true );
}

