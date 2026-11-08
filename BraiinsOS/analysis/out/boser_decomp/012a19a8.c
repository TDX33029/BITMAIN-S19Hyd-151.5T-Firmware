// FUN_012a19a8 @ 012a19a8 size=732 calls_out=11 calls_in=1
// strings: Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues

void FUN_012a19a8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 int param_6,int *param_7,int param_8)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int *local_68;
  undefined4 local_64;
  int *local_60;
  undefined *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 uStack_25;
  
  if ((param_8 == 0) && ((*(uint *)(param_6 + 0x11c) & 0x80) != 0)) {
    if ((*(uint *)(param_6 + 8) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues"
                   ,99,&DAT_01ce26e4);
    }
    if (*(int *)(param_6 + 0xc) != 0) {
      local_60 = &local_38;
      local_30 = 0;
      local_38 = 0;
      local_54 = 0;
      local_34 = 1;
      local_58 = 0x60000020;
      local_5c = &DAT_01ce2354;
      iVar1 = FUN_012bb12c(param_6,&local_60);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&uStack_25,&DAT_01ce236c,&DAT_01d30334);
      }
      param_1[1] = local_38;
      param_1[2] = local_34;
      param_1[3] = local_30;
      *param_1 = 0x80000006;
      return;
    }
    local_74 = 4;
    local_70 = 0;
    local_78 = 0;
    FUN_012a1ccc(param_1,param_2,param_3,2,param_6,&local_78,0);
    if ((undefined1 *)*param_1 == &DAT_80000009) {
      return;
    }
    local_60 = (int *)*param_1;
    local_5c = (undefined *)param_1[1];
    local_58 = param_1[2];
    local_54 = param_1[3];
    local_50 = param_1[4];
    uStack_4c = param_1[5];
    uStack_48 = param_1[6];
    uStack_44 = param_1[7];
    uStack_40 = param_1[8];
    uVar3 = 0x80000003;
    if (param_4 == 0) {
      uVar3 = 0x80000002;
    }
  }
  else {
    if (param_4 == 0) {
      iVar1 = FUN_012a3520(param_2,param_7);
      if (iVar1 != 0) {
        *param_1 = &DAT_80000009;
        param_1[1] = iVar1;
        return;
      }
      iVar1 = *(int *)(param_6 + 0x114);
      iVar4 = *(int *)(param_6 + 0x118);
      if (*param_7 == 2) {
        *(char *)(param_7 + 7) = (char)param_3;
        param_7[2] = 0;
        param_7[3] = 4;
        param_7[4] = 0;
        param_7[5] = iVar1;
        param_7[6] = iVar4;
        *param_7 = 0;
      }
      param_1[1] = iVar1;
      param_1[2] = iVar4;
      *param_1 = 0x80000001;
      return;
    }
    piVar2 = (int *)thunk_FUN_01be5118(0xc);
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xc);
    }
    if (param_5 < 0) {
      uVar3 = 0;
LAB_012a1a88:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar3,param_5);
    }
    iVar4 = 1;
    iVar1 = 0;
    if (param_5 != 0) {
      uVar3 = 1;
      iVar4 = FUN_01298504(param_5,1);
      if (iVar4 == 0) goto LAB_012a1a88;
      iVar1 = param_5;
    }
    FUN_01bed4e2(iVar4,param_4,param_5);
    local_64 = 1;
    local_6c = 1;
    *piVar2 = iVar1;
    piVar2[1] = iVar4;
    piVar2[2] = param_5;
    local_68 = piVar2;
    FUN_012a1ccc(param_1,param_2,param_3,2,param_6,&local_6c,0);
    if ((undefined1 *)*param_1 == &DAT_80000009) {
      return;
    }
    local_60 = (int *)*param_1;
    local_5c = (undefined *)param_1[1];
    local_58 = param_1[2];
    local_54 = param_1[3];
    local_50 = param_1[4];
    uStack_4c = param_1[5];
    uStack_48 = param_1[6];
    uStack_44 = param_1[7];
    uStack_40 = param_1[8];
    uVar3 = 0x80000002;
  }
  *param_1 = uVar3;
  FUN_012a3b0c();
  return;
}

