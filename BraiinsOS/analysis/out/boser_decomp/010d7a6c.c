// FUN_010d7a6c @ 010d7a6c size=124 calls_out=2 calls_in=1
// strings: 

void FUN_010d7a6c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_r6;
  int iVar2;
  bool bVar3;
  byte local_38;
  undefined4 local_37 [4];
  byte local_25;
  undefined4 local_24;
  
  iVar2 = 0;
  do {
    iVar1 = *(int *)(param_2 + iVar2 * -4);
    FUN_01304e7c(&local_25,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
    *(byte *)((int)local_37 + iVar2 * -5 + -1) = local_25 ^ 1;
    if (local_25 == 0) {
      unaff_r6 = local_24;
    }
    bVar3 = iVar2 != -2;
    *(undefined4 *)((int)local_37 + iVar2 * -5) = unaff_r6;
    iVar2 = iVar2 + -1;
  } while (bVar3);
  FUN_01bed4e2(param_1,&local_38,0xf);
  return;
}

