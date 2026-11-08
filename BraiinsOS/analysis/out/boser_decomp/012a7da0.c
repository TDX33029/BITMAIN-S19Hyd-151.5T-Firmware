// FUN_012a7da0 @ 012a7da0 size=528 calls_out=8 calls_in=5
// strings: Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012a7da0(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *local_4c;
  int local_3c;
  undefined4 *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar10 = 4;
  local_4c = (undefined4 *)thunk_FUN_01be5118(4);
  if (local_4c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,4);
  }
  iVar11 = 0;
  *local_4c = param_3;
  iVar12 = 1;
  uVar1 = *(undefined4 *)(param_2 + 0x48);
  uVar4 = *(undefined4 *)(param_2 + 0x4c);
  local_3c = 1;
  iVar2 = *(int *)(param_2 + 0x6c);
  iVar5 = *(int *)(param_2 + 0x70);
  local_28 = 0;
  local_2c = 4;
  local_30 = 0;
  local_38 = local_4c;
  do {
    iVar12 = iVar12 + -1;
    puVar9 = (undefined4 *)local_4c[iVar12];
    iVar6 = iVar2;
    iVar8 = iVar5 * 0x30;
    local_34 = iVar12;
    while( true ) {
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues"
                     ,99,&DAT_01ce23ac);
      }
      if ((*(int *)(iVar6 + 0x28) == puVar9[1]) &&
         (iVar3 = thunk_FUN_01bed842(*(undefined4 *)(iVar6 + 0x24),*puVar9), iVar3 == 0)) break;
      iVar8 = iVar8 + -0x30;
      iVar6 = iVar6 + 0x30;
    }
    iVar8 = *(int *)(iVar6 + 8);
    if (iVar8 != 0) {
      puVar13 = *(undefined4 **)(iVar6 + 4);
      puVar9 = puVar13;
      do {
        uVar7 = *puVar9;
        iVar12 = puVar9[1];
        puVar14 = puVar9 + 2;
        for (iVar6 = 0; iVar11 * 8 != iVar6; iVar6 = iVar6 + 8) {
          if ((*(int *)(iVar10 + iVar6 + 4) == iVar12) &&
             (iVar3 = thunk_FUN_01bed842(*(undefined4 *)(iVar10 + iVar6),uVar7,iVar12), iVar3 == 0))
          goto LAB_012a7f48;
        }
        iVar3 = FUN_012a4878(uVar1,uVar4,uVar7,iVar12);
        iVar6 = local_34;
        if (iVar3 == 0) {
          if (local_34 == local_3c) {
            FUN_01a54b48(&local_3c);
          }
          local_4c = local_38;
          local_38[iVar6] = puVar9;
          local_34 = iVar6 + 1;
        }
        else {
          if (iVar11 == local_30) {
            FUN_015f5ab8(&local_30);
            iVar10 = local_2c;
          }
          puVar9 = (undefined4 *)(iVar10 + iVar11 * 8);
          *puVar9 = uVar7;
          iVar11 = iVar11 + 1;
          puVar9[1] = iVar12;
          local_28 = iVar11;
        }
LAB_012a7f48:
        puVar9 = puVar14;
      } while (puVar14 != puVar13 + iVar8 * 2);
      iVar12 = local_34;
    }
    if (iVar12 == 0) {
      *param_1 = local_30;
      param_1[1] = local_2c;
      param_1[2] = local_28;
      FUN_0134aee0(local_3c,local_38,4,4);
      return;
    }
  } while( true );
}

