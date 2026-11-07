// FUN_012b67f0 @ 012b67f0 size=540 calls_out=5 calls_in=1
// strings: Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues

int FUN_012b67f0(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 *local_34;
  undefined1 *local_30;
  int *local_2c;
  undefined *local_28;
  
  if (*(int *)(param_1 + 8) != 0) {
    iVar5 = *(int *)(param_1 + 4);
    iVar4 = *(int *)(param_1 + 8) << 3;
    uVar6 = 0;
    do {
      if ((*(int *)(iVar5 + uVar6 * 8 + 4) == param_3) &&
         (iVar2 = thunk_FUN_01bed842(*(undefined4 *)(iVar5 + uVar6 * 8),param_2,param_3), iVar2 == 0
         )) {
        if (*(uint *)(param_1 + 0x14) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar6,*(uint *)(param_1 + 0x14),&DAT_01ce2514);
        }
        iVar5 = *(int *)(param_1 + 0x10) + uVar6 * 0x3c;
        FUN_012c03dc(&local_58,iVar5,&DAT_005681c8);
        iVar4 = local_58;
        if ((local_58 != 0x2aa46bdb || local_50 != -0x3fbc891a) ||
            (local_54 != 0x4d5c788c || iStack_4c != 0x596b48c)) {
          puVar7 = (undefined4 *)((uint)&local_58 | 4);
          local_50 = *puVar7;
          iStack_4c = puVar7[1];
          uStack_48 = puVar7[2];
          local_44 = 0x2aa46bdb;
          uStack_40 = 0x4d5c788c;
          uStack_3c = 0xc04376e6;
          uStack_38 = 0x596b48c;
          local_58 = 0;
          local_54 = iVar4;
          local_34 = &local_60;
          local_28 = &DAT_012b2444;
          local_30 = &LAB_018a13b8;
          local_60 = param_2;
          local_5c = param_3;
          local_2c = &local_58;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005a1fbf,&local_34,&DAT_01ce25a4);
        }
        iVar4 = *(int *)(iVar5 + 0x28) * 0xc;
        piVar1 = (int *)(*(int *)(iVar5 + 0x24) + 8);
        do {
          piVar3 = piVar1;
          if (iVar4 == 0) {
            return 0;
          }
          iVar4 = iVar4 + -0xc;
          piVar1 = piVar3 + 3;
        } while (*piVar3 == 0);
        iVar4 = ((int *)piVar3[-1])[1];
        iVar5 = *(int *)piVar3[-1] + (*(int *)(iVar4 + 8) - 1U & 0xfffffff8) + 8;
        (**(code **)(iVar4 + 0xc))(&local_58,iVar5);
        if ((local_58 != 0x2aa46bdb || local_50 != -0x3fbc891a) ||
            (local_54 != 0x4d5c788c || iStack_4c != 0x596b48c)) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues"
                       ,99,&DAT_01ce265c);
        }
        return iVar5;
      }
      uVar6 = uVar6 + 1;
      iVar4 = iVar4 + -8;
    } while (iVar4 != 0);
  }
  return 0;
}

