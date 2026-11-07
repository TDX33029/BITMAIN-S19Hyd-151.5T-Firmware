// FUN_012a3520 @ 012a3520 size=224 calls_out=4 calls_in=3
// strings: Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues

undefined4 FUN_012a3520(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined1 *local_54;
  undefined4 local_50;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  iVar8 = *param_2;
  uVar7 = 0;
  *param_2 = 2;
  if (iVar8 != 2) {
    iVar2 = param_2[1];
    iVar4 = param_2[2];
    iVar5 = param_2[3];
    iVar3 = param_2[4];
    uVar6 = param_2[7];
    iVar9 = iVar8;
    iVar1 = FUN_012a4878(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),
                         *(undefined4 *)(*(int *)(param_1 + 8) + 0x4c),param_2[5],param_2[6]);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues"
                   ,99,&DAT_01ce22b4);
    }
    local_30 = param_2[2];
    iStack_2c = param_2[3];
    iStack_28 = param_2[4];
    FUN_012a1ccc(&local_54,param_1,uVar6 & 0xff,2,iVar1,&local_30,iVar8,iVar2,param_2,iVar9,iVar2,
                 iVar4,iVar5,iVar3);
    if (local_54 == &DAT_80000009) {
      uVar7 = local_50;
    }
    else {
      FUN_012a3b0c(&local_54);
    }
  }
  return uVar7;
}

