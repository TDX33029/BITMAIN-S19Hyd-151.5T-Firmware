// FUN_014bfb48 @ 014bfb48 size=100 calls_out=4 calls_in=0
// strings: 

void FUN_014bfb48(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (*param_2 != 2) {
    FUN_014c9fbc();
    return;
  }
  if (param_2[4] == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ad11c);
  }
  iVar1 = FUN_016d995c(param_2[4],1);
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

