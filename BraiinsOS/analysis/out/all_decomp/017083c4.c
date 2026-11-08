// FUN_017083c4 @ 017083c4 size=284 calls_out=3 calls_in=1
// strings: 

bool FUN_017083c4(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_1[1];
  if (iVar4 != 0) {
    iVar5 = *param_1;
    do {
      iVar1 = FUN_016dd48a(iVar5,0x20,iVar4);
      iVar2 = FUN_016dd8a2(param_2);
      iVar3 = iVar1 - iVar5;
      if (iVar1 == 0) {
        if (iVar2 == iVar4) {
          iVar4 = FUN_016dd50a(iVar5,param_2,iVar4);
          return iVar4 == 0;
        }
        return false;
      }
      if ((iVar3 == iVar2) && ((iVar3 == 0 || (iVar1 = FUN_016dd50a(iVar5,param_2), iVar1 == 0)))) {
        return true;
      }
      iVar5 = iVar5 + iVar3 + 1;
      iVar4 = (iVar4 + -1) - iVar3;
    } while (iVar4 != 0);
  }
  return false;
}

