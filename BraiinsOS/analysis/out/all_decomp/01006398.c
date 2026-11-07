// FUN_01006398 @ 01006398 size=208 calls_out=5 calls_in=2
// strings: 

void FUN_01006398(undefined2 *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = *(uint *)(param_2 + 0x24);
  if (uVar5 != 0) {
    iVar6 = *(int *)(param_2 + 0x18);
    iVar4 = *(int *)(param_2 + 0x20);
    while( true ) {
      if (iVar6 == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01881ea8);
      }
      uVar1 = FUN_016e034e(iVar6,iVar4,uVar5);
      if (uVar1 == 0xffffffff) {
        puVar2 = (undefined4 *)FUN_016d2bc8();
        uVar3 = *puVar2;
        *(undefined1 *)param_1 = 0;
        *(undefined4 *)(param_1 + 2) = uVar3;
        return;
      }
      if (uVar1 == 0) {
        *param_1 = 0x1701;
        return;
      }
      if (uVar5 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar1,uVar5,&DAT_018af198);
      }
      uVar5 = uVar5 - uVar1;
      *(undefined4 *)(param_2 + 0x24) = 0;
      if (uVar5 == 0) break;
      FUN_016dd52c(iVar4,iVar4 + uVar1,uVar5);
      *(uint *)(param_2 + 0x24) = uVar5;
    }
  }
  *(undefined1 *)param_1 = 4;
  return;
}

