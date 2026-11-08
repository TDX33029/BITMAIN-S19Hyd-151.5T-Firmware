// FUN_0145ad54 @ 0145ad54 size=76 calls_out=3 calls_in=0
// strings: 

void FUN_0145ad54(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_2 + 0xc) == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ad11c);
  }
  iVar1 = FUN_016d995c(*(int *)(param_2 + 0xc),1);
  if (iVar1 == -1) {
    puVar2 = (undefined4 *)FUN_016d2bc8();
    uVar3 = *puVar2;
    *param_1 = 0;
    param_1[1] = uVar3;
    return;
  }
  *(undefined1 *)param_1 = 4;
  return;
}

