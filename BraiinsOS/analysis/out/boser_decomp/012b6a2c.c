// FUN_012b6a2c @ 012b6a2c size=584 calls_out=7 calls_in=2
// strings: Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues

void FUN_012b6a2c(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar1 = FUN_012a4878(*(undefined4 *)(param_2 + 0x48),*(undefined4 *)(param_2 + 0x4c));
  if (iVar1 == 0) {
    iVar12 = *(int *)(param_2 + 0x6c);
    for (iVar1 = *(int *)(param_2 + 0x70) * 0x30; iVar1 != 0; iVar1 = iVar1 + -0x30) {
      if ((*(int *)(iVar12 + 0x28) == param_4) &&
         (iVar7 = thunk_FUN_01bed842(*(undefined4 *)(iVar12 + 0x24),param_3,param_4), iVar7 == 0)) {
        FUN_012993c4(param_1,*(undefined4 *)(iVar12 + 0x1c),*(undefined4 *)(iVar12 + 0x20));
        return;
      }
      iVar12 = iVar12 + 0x30;
    }
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
  }
  else {
    FUN_012993c4(&local_30,*(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x44));
    iVar7 = *(int *)(param_2 + 0x70);
    uVar2 = *(undefined4 *)(iVar1 + 0x114);
    iVar10 = *(int *)(param_2 + 0x6c);
    uVar3 = *(undefined4 *)(iVar1 + 0x118);
    iVar12 = iVar10;
    while (iVar8 = iVar12, iVar8 != iVar10 + iVar7 * 0x30) {
      iVar4 = FUN_012a949c(uVar2,uVar3,*(undefined4 *)(iVar8 + 4),*(undefined4 *)(iVar8 + 8));
      iVar12 = iVar8 + 0x30;
      if (iVar4 != 0) {
        uVar9 = *(undefined4 *)(iVar8 + 0x24);
        iVar13 = *(int *)(iVar8 + 0x28);
        iVar8 = iVar10;
        iVar4 = iVar7 * 0x30;
        while( true ) {
          if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues"
                         ,99,&DAT_01ce266c);
          }
          if ((*(int *)(iVar8 + 0x28) == iVar13) &&
             (iVar5 = thunk_FUN_01bed842(*(undefined4 *)(iVar8 + 0x24),uVar9,iVar13), iVar5 == 0))
          break;
          iVar8 = iVar8 + 0x30;
          iVar4 = iVar4 + -0x30;
        }
        FUN_0129ba74(&local_30,*(int *)(iVar8 + 0x1c),
                     *(int *)(iVar8 + 0x1c) + *(int *)(iVar8 + 0x20) * 8);
        if (*(char *)(iVar8 + 0x2d) == '\0') {
          iVar4 = *(int *)(iVar8 + 8) << 3;
          if (*(int *)(iVar8 + 8) != 0) {
            piVar11 = (int *)(*(int *)(iVar8 + 4) + 4);
            do {
              iVar13 = piVar11[-1];
              iVar8 = *piVar11;
              if ((iVar8 != *(int *)(iVar1 + 0x118)) ||
                 (iVar5 = thunk_FUN_01bed842(iVar13,*(undefined4 *)(iVar1 + 0x114),iVar8),
                 iVar5 != 0)) {
                iVar5 = local_28;
                if (local_28 == local_30) {
                  FUN_015f5ab8(&local_30);
                }
                piVar6 = (int *)(local_2c + iVar5 * 8);
                *piVar6 = iVar13;
                piVar6[1] = iVar8;
                local_28 = iVar5 + 1;
              }
              piVar11 = piVar11 + 2;
              iVar4 = iVar4 + -8;
            } while (iVar4 != 0);
          }
        }
      }
    }
    FUN_0129ba74(&local_30,*(int *)(iVar1 + 0x4c),
                 *(int *)(iVar1 + 0x4c) + *(int *)(iVar1 + 0x50) * 8);
    *param_1 = local_30;
    param_1[1] = local_2c;
    param_1[2] = local_28;
  }
  return;
}

