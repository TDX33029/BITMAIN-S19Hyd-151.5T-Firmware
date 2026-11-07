// FUN_013cf980 @ 013cf980 size=116 calls_out=3 calls_in=0
// strings: 

void FUN_013cf980(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_24 [2];
  int local_1c;
  
  while( true ) {
    FUN_013cda04(local_24,param_1);
    iVar2 = local_1c;
    iVar1 = local_24[0];
    if (local_24[0] == 0) break;
    iVar3 = local_24[0] + local_1c * 0xc;
    if (*(int *)(iVar3 + 4) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 8));
    }
    piVar4 = *(int **)(iVar1 + 0x88 + iVar2 * 4);
    iVar3 = *piVar4 + -1;
    *piVar4 = iVar3;
    if (iVar3 == 0) {
      FUN_013cd780(*(undefined4 *)(iVar1 + 0x88 + iVar2 * 4));
    }
  }
  return;
}

