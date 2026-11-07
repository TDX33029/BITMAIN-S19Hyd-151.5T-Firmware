// FUN_0177b47c @ 0177b47c size=384 calls_out=7 calls_in=1
// strings: 

void FUN_0177b47c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  
  uVar1 = DAT_018ddaf8;
  if (param_4 == 0) {
    pcVar6 = FUN_0177aafc;
    pcVar8 = FUN_0177a6c0;
    pcVar7 = FUN_0177ad5c;
  }
  else {
    pcVar6 = thunk_FUN_016d3fb4 + 1;
    pcVar8 = thunk_FUN_016d4a50 + 1;
    pcVar7 = thunk_FUN_016d4ea4 + 1;
  }
  iVar2 = (*pcVar8)(0x40);
  if (iVar2 != 0) {
    uVar9 = FUN_016dcc14(iVar2,0x40,param_2,param_3);
    uVar3 = (uint)uVar9;
    if (-1 < (int)uVar3) {
      iVar4 = iVar2;
      if (uVar3 < 0x40) {
LAB_0177b564:
        *param_1 = iVar4;
        goto LAB_0177b568;
      }
      iVar4 = (*pcVar7)(iVar2);
      if (iVar4 != 0) {
        uVar5 = FUN_016dcc14(iVar4,uVar3 + 1,param_2,param_3);
        iVar2 = iVar4;
        if (uVar5 < uVar3 + 1 && -1 < (int)uVar5) {
          uVar9 = (ulonglong)uVar5;
          goto LAB_0177b564;
        }
      }
    }
  }
  (*pcVar6)(iVar2);
  *param_1 = 0;
  uVar10 = FUN_016d2bc8();
  uVar9 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),0xffffffff);
  *(undefined4 *)uVar10 = 0xc;
LAB_0177b568:
  if ((uVar1 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)uVar9,(int)(uVar9 >> 0x20),uVar1 ^ DAT_018ddaf8,0);
  }
  return;
}

