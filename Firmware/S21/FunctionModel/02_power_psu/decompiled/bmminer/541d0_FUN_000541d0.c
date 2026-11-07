// FUN_000541d0 @ 000541d0  size=296  callers=0
// program: bmminer


void FUN_000541d0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  char acStack_2018 [8196];
  
  iVar1 = FUN_0002ae18();
  if (param_1 < iVar1) {
    iVar2 = FUN_0002ae18();
    iVar1 = param_1;
  }
  else {
    iVar1 = FUN_0002ae18();
    iVar2 = param_1;
  }
  if (3 < DAT_000be63c) {
    snprintf(acStack_2018,0x2000,"vol=%d\n",param_1);
    FUN_0004948c(3,acStack_2018,0);
  }
  iVar2 = iVar2 - iVar1;
  iVar1 = FUN_0002ae58();
  if (iVar1 < iVar2) {
    iVar1 = 1;
    while( true ) {
      uVar3 = FUN_0002ae58();
      iVar4 = FUN_00098658(iVar2,uVar3);
      if (iVar4 < iVar1) break;
      iVar4 = FUN_0002ae18();
      if (param_1 < iVar4) {
        iVar4 = FUN_0002ae18();
        iVar5 = FUN_0002ae58();
        FUN_000246cc(iVar4 - iVar1 * iVar5,3);
      }
      else {
        iVar4 = FUN_0002ae18();
        iVar5 = FUN_0002ae58();
        FUN_000246cc(iVar1 * iVar5 + iVar4,3);
      }
      iVar1 = iVar1 + 1;
    }
    uVar3 = FUN_0002ae58();
    FUN_000988ec(iVar2,uVar3);
    if (extraout_r1 < 1) {
      return;
    }
  }
  FUN_000246cc(param_1,3);
  return;
}

