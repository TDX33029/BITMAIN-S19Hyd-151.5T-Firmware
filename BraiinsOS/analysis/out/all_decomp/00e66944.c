// FUN_00e66944 @ 00e66944 size=284 calls_out=2 calls_in=1
// strings: 

void FUN_00e66944(int *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  if (*param_2 == -0x80000000) {
    iVar2 = param_1[2];
    if (*param_1 == iVar2) {
      FUN_00edff4c(param_1,iVar2,1,1,1);
      iVar2 = param_1[2];
    }
    *(undefined1 *)(param_1[1] + iVar2) = 0;
    param_1[2] = iVar2 + 1;
  }
  else {
    iVar2 = param_1[2];
    puVar4 = (undefined1 *)param_2[1];
    iVar3 = param_2[2];
    if (*param_1 == iVar2) {
      FUN_00edff4c(param_1,iVar2,1,1,1);
      iVar2 = param_1[2];
    }
    *(undefined1 *)(param_1[1] + iVar2) = 1;
    param_1[2] = iVar2 + 1;
    FUN_00f09308(param_1,iVar2,iVar3,0);
    if (iVar3 != 0) {
      iVar2 = param_1[2];
      do {
        uVar1 = *puVar4;
        if (*param_1 == iVar2) {
          FUN_00edff4c(param_1,iVar2,1,1,1);
          iVar2 = param_1[2];
        }
        iVar3 = iVar3 + -1;
        *(undefined1 *)(param_1[1] + iVar2) = uVar1;
        iVar2 = iVar2 + 1;
        param_1[2] = iVar2;
        puVar4 = puVar4 + 1;
      } while (iVar3 != 0);
    }
  }
  return;
}

