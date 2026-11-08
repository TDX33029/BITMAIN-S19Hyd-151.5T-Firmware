// FUN_01642d70 @ 01642d70 size=100 calls_out=4 calls_in=8
// strings: 

void FUN_01642d70(undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (param_2 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ad11c);
  }
  iVar2 = FUN_016d995c(param_2,1);
  if (iVar2 == -1) {
    puVar3 = (undefined4 *)FUN_016d2bc8();
    uVar4 = *puVar3;
    cVar1 = FUN_005bc530(uVar4);
    if (cVar1 != '\a') {
      *param_1 = 0;
      param_1[1] = uVar4;
      return;
    }
  }
  *(undefined1 *)param_1 = 4;
  return;
}

