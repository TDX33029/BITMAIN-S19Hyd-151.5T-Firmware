// FUN_0129bb0c @ 0129bb0c size=424 calls_out=6 calls_in=1
// strings: Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues

void FUN_0129bb0c(uint *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar9 = *param_2;
  iVar7 = param_2[1];
  uVar10 = 0;
  uVar2 = iVar7 - iVar9;
  uVar1 = uVar2 >> 3;
  iVar6 = uVar1 * 0xc;
  if (0x55555550 < uVar2) {
LAB_0129bb4c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar10,iVar6);
  }
  uVar2 = 0;
  if (iVar6 == 0) {
    puVar3 = (undefined4 *)&SUB_00000004;
    uVar4 = 0;
  }
  else {
    uVar10 = 4;
    puVar3 = (undefined4 *)FUN_01298504(iVar6,4);
    uVar4 = uVar1;
    if (puVar3 == (undefined4 *)0x0) goto LAB_0129bb4c;
  }
  if (iVar9 != iVar7) {
    iVar6 = param_2[2];
    uVar2 = 0;
    puVar8 = puVar3;
    do {
      puVar5 = (undefined4 *)(iVar9 + uVar2 * 8);
      iVar7 = FUN_012a4878(*(undefined4 *)(iVar6 + 0x48),*(undefined4 *)(iVar6 + 0x4c),*puVar5,
                           puVar5[1]);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues"
                     ,99,&DAT_01ce247c);
      }
      local_38 = 0;
      local_3c = 1;
      local_40 = 0;
      local_28 = 0;
      local_2c = 0x60000020;
      local_30 = &DAT_01ce248c;
      local_34 = &local_40;
      iVar7 = FUN_012bb12c(iVar7,&local_34);
      if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&local_50,&DAT_01ce24a4,&DAT_01d30334);
      }
      uVar2 = uVar2 + 1;
      local_50 = local_40;
      uStack_4c = local_3c;
      uStack_48 = local_38;
      *puVar8 = local_40;
      puVar8[1] = local_3c;
      puVar8[2] = local_38;
      puVar8 = puVar8 + 3;
    } while (uVar1 != uVar2);
  }
  *param_1 = uVar4;
  param_1[1] = (uint)puVar3;
  param_1[2] = uVar2;
  return;
}

