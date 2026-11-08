// FUN_01689cf8 @ 01689cf8 size=112 calls_out=3 calls_in=1
// strings: 

void FUN_01689cf8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_24 [2];
  int local_1c;
  
  while( true ) {
    FUN_0167d0b4(local_24,param_1);
    iVar2 = local_1c;
    iVar1 = local_24[0];
    if (local_24[0] == 0) break;
    iVar3 = local_24[0] + local_1c * 0xc;
    FUN_0134aee0(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8),4,4);
    piVar4 = *(int **)(iVar1 + 0x88 + iVar2 * 4);
    iVar3 = *piVar4 + -1;
    *piVar4 = iVar3;
    if (iVar3 == 0) {
      FUN_016cc498(*(undefined4 *)(iVar1 + 0x88 + iVar2 * 4));
    }
  }
  return;
}

