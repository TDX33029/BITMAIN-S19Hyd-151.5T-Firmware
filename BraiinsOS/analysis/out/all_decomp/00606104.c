// FUN_00606104 @ 00606104 size=276 calls_out=6 calls_in=2
// strings: 

void FUN_00606104(undefined4 *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_20;
  undefined4 local_1c;
  
  iVar4 = *(int *)(" " + (param_2 & 0xff) * 4);
  local_20 = 0;
  if ((param_4 == iVar4 * 2) && (iVar1 = FUN_017150f4(param_3,iVar4,0), iVar1 != 0)) {
    iVar4 = FUN_017150f4(param_3 + iVar4,param_4 - iVar4,0);
    if (iVar4 != 0) {
      iVar2 = FUN_0172bfe0();
      if (iVar2 != 0) {
        iVar3 = FUN_0172c088(iVar2,iVar1,iVar4);
        if (iVar3 == 1) {
          iVar4 = FUN_016e85e8(&local_20,&local_1c,iVar2);
          if ((iVar4 == 1) && (local_20 != 0)) {
            *param_1 = 0;
            param_1[1] = local_20;
            param_1[2] = local_1c;
            FUN_0172bf9c(iVar2);
            return;
          }
          *param_1 = 1;
          FUN_0172bf9c(iVar2);
          return;
        }
        FUN_0172bf9c(iVar2);
      }
      FUN_017046e0(iVar4);
    }
    FUN_017046e0(iVar1);
  }
  *param_1 = 1;
  return;
}

