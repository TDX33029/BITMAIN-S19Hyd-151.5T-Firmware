// FUN_005ed754 @ 005ed754 size=188 calls_out=1 calls_in=2
// strings: 

void FUN_005ed754(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar4 = *(uint *)(param_1 + 0x2fc);
  if (*(uint *)(param_1 + 0x1ac) <= uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar4,*(uint *)(param_1 + 0x1ac),&DAT_01856b48);
  }
  uVar1 = *(uint *)(*(int *)(param_1 + 0x1a8) + uVar4 * 0x14);
  if (uVar1 == 0) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x1b8);
  if (uVar1 < uVar2) {
    iVar3 = *(int *)(param_1 + 0x1b4);
    puVar5 = (uint *)(iVar3 + uVar1 * 9 + 1);
    if (*puVar5 == 1) {
      *puVar5 = uVar4;
    }
    while( true ) {
      if (uVar2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar1,uVar2,&DAT_01856b58);
      }
      uVar1 = *(uint *)(iVar3 + uVar1 * 9 + 5);
      if (uVar1 == 0) {
        return;
      }
      if (uVar2 <= uVar1) break;
      puVar5 = (uint *)(iVar3 + uVar1 * 9 + 1);
      if (*puVar5 == 1) {
        *puVar5 = uVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(uVar1,uVar2,&DAT_01856c08);
}

