// FUN_012bf574 @ 012bf574 size=300 calls_out=4 calls_in=1
// strings: Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues | Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues

void FUN_012bf574(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  int iVar17;
  
  iVar1 = FUN_012b1bf4(param_1 + 0x20);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues"
                 ,99,&DAT_01ce2764);
  }
  iVar15 = *(int *)(iVar1 + 0x24) + *(int *)(iVar1 + 0x28) * 0xc;
  iVar7 = param_5[1];
  uVar10 = param_4[1];
  uVar12 = *param_5;
  uVar4 = (uint)(*(int *)(iVar1 + 0x28) == 0 || iVar15 == 0xc);
  iVar17 = iVar7;
  if (uVar4 == 0) {
    iVar14 = *(int *)(iVar15 + -4);
    if (iVar14 == *(int *)(iVar15 + -0xc)) {
      FUN_015f5b18();
      iVar17 = iVar7;
    }
    puVar2 = (undefined4 *)(*(int *)(iVar15 + -8) + iVar14 * 0x18);
    uVar5 = param_4[1];
    uVar8 = param_4[2];
    uVar9 = param_4[3];
    uVar11 = param_4[4];
    uVar13 = param_4[5];
    *puVar2 = *param_4;
    puVar2[1] = uVar5;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    puVar2[4] = uVar11;
    puVar2[5] = uVar13;
    iVar7 = iVar14 + 1;
    iVar3 = *(int *)(iVar1 + 0x30);
    bVar16 = *(int *)(iVar1 + 0x34) == 0;
    iVar14 = 0;
    if (!bVar16) {
      iVar14 = *(int *)(iVar1 + 0x34) * 3;
    }
    *(int *)(iVar15 + -4) = iVar7;
    if (!bVar16) {
      param_4 = (undefined4 *)(iVar3 + iVar14 * 4);
      bVar16 = param_4 == (undefined4 *)&DAT_0000000c;
    }
    puVar6 = &DAT_01ce27a4;
    if (!bVar16) {
      iVar1 = param_4[-1];
      if (iVar1 == param_4[-3]) {
        FUN_019abd3c();
      }
      puVar2 = (undefined4 *)(param_4[-2] + iVar1 * 0xc);
      uVar10 = param_5[1];
      uVar12 = param_5[2];
      *puVar2 = *param_5;
      puVar2[1] = uVar10;
      puVar2[2] = uVar12;
      param_4[-1] = iVar1 + 1;
      return;
    }
  }
  else {
    puVar6 = &DAT_01ce2794;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0130739c("Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues"
               ,99,puVar6,iVar7,uVar10,uVar4,uVar12,iVar17);
}

