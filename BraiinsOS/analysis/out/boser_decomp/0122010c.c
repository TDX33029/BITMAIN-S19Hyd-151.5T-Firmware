// FUN_0122010c @ 0122010c size=188 calls_out=1 calls_in=3
// strings: 

int FUN_0122010c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  if (param_1[7] != 2) {
    iVar3 = param_1[8];
    iVar2 = param_1[9];
    iVar4 = param_1[10];
    while( true ) {
      if (iVar2 != 0) {
        iVar1 = 0;
        if (iVar2 != iVar4) {
          iVar1 = iVar2 + 0x30;
        }
        param_1[9] = iVar1;
        if (iVar2 != iVar4) {
          return iVar2;
        }
      }
      bVar5 = (param_1[7] & 1U) != 0;
      if (bVar5) {
        param_1[8] = 0;
      }
      if (!bVar5 || iVar3 == 0) break;
      iVar4 = *(int *)(iVar3 + 8);
      iVar2 = *(int *)(iVar3 + 4);
      iVar3 = 0;
      param_1[9] = iVar2;
      iVar4 = iVar2 + iVar4 * 0x30;
      param_1[10] = iVar4;
    }
    iVar2 = param_1[0xb];
    if (iVar2 != 0) {
      iVar3 = 0;
      if (iVar2 != param_1[0xc]) {
        iVar3 = iVar2 + 0x30;
      }
      param_1[0xb] = iVar3;
      if (iVar2 != param_1[0xc]) {
        return iVar2;
      }
    }
    param_1[7] = 2;
  }
  if (*param_1 == 1) {
    iVar2 = FUN_012209b0(param_1 + 1);
    return iVar2;
  }
  return 0;
}

