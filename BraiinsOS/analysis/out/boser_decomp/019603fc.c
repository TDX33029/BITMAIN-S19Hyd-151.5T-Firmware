// FUN_019603fc @ 019603fc size=352 calls_out=5 calls_in=1
// strings: 

bool FUN_019603fc(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  
  iVar6 = param_1[1];
  uVar5 = 0;
  if (iVar6 < 0) {
LAB_01960414:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar5,iVar6);
  }
  uVar3 = *param_1;
  uVar8 = 0;
  if (iVar6 == 0) {
    iVar1 = 1;
    iVar7 = 0;
  }
  else {
    uVar5 = 1;
    iVar1 = FUN_01298504(iVar6,1);
    iVar7 = iVar6;
    if (iVar1 == 0) goto LAB_01960414;
  }
  FUN_01bed4e2(iVar1,uVar3,iVar6);
  iVar4 = param_1[3];
  if (iVar4 < 0) {
LAB_0196047c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar8,iVar4);
  }
  uVar5 = param_1[2];
  if (iVar4 == 0) {
    iVar9 = 0;
    iVar2 = 1;
  }
  else {
    uVar8 = 1;
    iVar2 = FUN_01298504(iVar4,1);
    if (iVar2 == 0) goto LAB_0196047c;
    iVar9 = iVar4;
  }
  FUN_01bed4e2(iVar2,uVar5,iVar4);
  if (*(int *)(param_2 + 0xc4) == -0x80000000) {
    bVar11 = true;
  }
  else {
    bVar11 = true;
    if (*(int *)(param_2 + 0xcc) == iVar6) {
      iVar6 = thunk_FUN_01bed842(*(undefined4 *)(param_2 + 200),iVar1,iVar6);
      bVar10 = iVar6 == 0;
      if (bVar10) {
        iVar6 = *(int *)(param_2 + 0xc0);
      }
      if (bVar10 && iVar6 == iVar4) {
        iVar6 = thunk_FUN_01bed842(*(undefined4 *)(param_2 + 0xbc),iVar2,iVar4);
        bVar11 = iVar6 != 0;
      }
    }
  }
  FUN_019bb7e0(iVar9,iVar2);
  FUN_019bb7e0(iVar7,iVar1);
  return bVar11;
}

