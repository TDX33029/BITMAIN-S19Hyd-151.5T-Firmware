// FUN_00675680 @ 00675680 size=436 calls_out=6 calls_in=2
// strings: __typename

void FUN_00675680(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_24;
  int local_20;
  int local_1c;
  
  uVar1 = 7;
  if ((int)*(uint *)(param_2 + 0x10) < 0) {
    uVar1 = *(uint *)(param_2 + 0x10) ^ 0x80000000;
  }
  if (uVar1 == 6) {
    iVar4 = *(int *)(param_2 + 4);
    iVar2 = *(int *)(param_2 + 8) * 0x30;
    do {
      if (iVar2 == 0) goto LAB_00675778;
      FUN_00675680(param_1,iVar4);
      iVar2 = iVar2 + -0x30;
      iVar4 = iVar4 + 0x30;
    } while (*param_1 == -0x80000000);
  }
  else {
    if (uVar1 == 7) {
      iVar2 = FUN_007017a8(param_2,"__typename",10);
      if ((((iVar2 != 0) && (*(int *)(iVar2 + 0x10) == -0x7ffffffe)) && (4 < *(uint *)(iVar2 + 8)))
         && (iVar2 = thunk_FUN_01bed842(&DAT_005333ba,
                                        *(int *)(iVar2 + 4) + *(uint *)(iVar2 + 8) + -5,5),
            iVar2 == 0)) {
        iVar2 = FUN_007017a8(param_2,&DAT_005325f1,7);
        iVar4 = 1;
        iVar3 = 0;
        if ((iVar2 == 0) || (*(int *)(iVar2 + 0x10) != -0x7ffffffe)) {
          uVar5 = 1;
        }
        else {
          iVar3 = *(int *)(iVar2 + 8);
          uVar6 = 0;
          if (iVar3 < 0) {
LAB_006757d8:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar6,iVar3);
          }
          uVar5 = *(undefined4 *)(iVar2 + 4);
          if (iVar3 == 0) {
            iVar3 = 0;
          }
          else {
            uVar6 = 1;
            iVar4 = FUN_01298504(iVar3,1);
            if (iVar4 == 0) goto LAB_006757d8;
          }
        }
        FUN_01bed4e2(iVar4,uVar5,iVar3);
        *param_1 = iVar3;
        param_1[1] = iVar4;
        param_1[2] = iVar3;
        return;
      }
      iVar4 = *(int *)(param_2 + 0x14);
      for (iVar2 = *(int *)(param_2 + 0x18) << 6; iVar2 != 0; iVar2 = iVar2 + -0x40) {
        FUN_00675680(&local_24,iVar4);
        if (local_24 != -0x80000000) {
          *param_1 = local_24;
          param_1[1] = local_20;
          param_1[2] = local_1c;
          return;
        }
        iVar4 = iVar4 + 0x40;
      }
    }
LAB_00675778:
    *param_1 = -0x80000000;
  }
  return;
}

