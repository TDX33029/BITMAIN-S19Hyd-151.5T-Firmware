// FUN_00705ab4 @ 00705ab4 size=260 calls_out=6 calls_in=1
// strings: 

void FUN_00705ab4(undefined4 *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_20;
  undefined4 local_1c;
  
  iVar4 = *(int *)(" " + (param_2 & 0xff) * 4);
  local_20 = 0;
  if ((param_4 == iVar4 * 2) && (iVar1 = FUN_01b2ba40(param_3,iVar4,0), iVar1 != 0)) {
    iVar4 = FUN_01b2ba40(param_3 + iVar4,param_4 - iVar4,0);
    if (iVar4 != 0) {
      iVar2 = FUN_01b3cb78();
      if (iVar2 != 0) {
        iVar3 = FUN_01b3cbfc(iVar2,iVar1,iVar4);
        if (iVar3 == 1) {
          iVar4 = FUN_01b03cb4(&local_20,&local_1c,iVar2);
          if ((iVar4 == 1) && (local_20 != 0)) {
            *param_1 = 0;
            param_1[1] = local_20;
            param_1[2] = local_1c;
          }
          else {
            *param_1 = 1;
          }
          FUN_01b3cb34(iVar2);
          return;
        }
        FUN_01b3cb34(iVar2);
      }
      FUN_01b1f904(iVar4);
    }
    FUN_01b1f904(iVar1);
  }
  *param_1 = 1;
  return;
}

