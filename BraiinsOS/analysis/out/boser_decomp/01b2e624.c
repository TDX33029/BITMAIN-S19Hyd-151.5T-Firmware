// FUN_01b2e624 @ 01b2e624 size=176 calls_out=1 calls_in=1
// strings: 

bool FUN_01b2e624(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_01b2b88c();
  if (iVar1 == 0) {
    return false;
  }
  if (param_1[3] == 0) {
    iVar2 = 0;
    while( true ) {
      if (iVar1 + -1 <= iVar2) {
        uVar3 = *(uint *)(*param_1 + (iVar1 + 0x3fffffff) * 4);
        return (uVar3 - 1 & uVar3) == 0;
      }
      if (*(int *)(*param_1 + iVar2 * 4) != 0) break;
      iVar2 = iVar2 + 1;
    }
  }
  return false;
}

