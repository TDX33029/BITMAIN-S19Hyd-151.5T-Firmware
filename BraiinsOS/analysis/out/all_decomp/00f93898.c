// FUN_00f93898 @ 00f93898 size=728 calls_out=4 calls_in=1
// strings: 

int FUN_00f93898(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  int *local_2c;
  undefined1 *local_28;
  
  if (*(int *)(param_1 + 8) != 0) {
    iVar7 = *(int *)(param_1 + 4);
    iVar5 = *(int *)(param_1 + 8) << 3;
    uVar8 = 0;
    do {
      puVar1 = (undefined4 *)(iVar7 + uVar8 * 8);
      if ((puVar1[1] == param_3) &&
         (iVar2 = thunk_FUN_016dd50a(*puVar1,param_2,param_3), iVar2 == 0)) {
        if (*(uint *)(param_1 + 0x14) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar8,*(uint *)(param_1 + 0x14),&DAT_01880824);
        }
        piVar3 = (int *)(*(int *)(param_1 + 0x10) + uVar8 * 0x3c);
        iVar5 = piVar3[10];
        iVar7 = piVar3[9];
        if (*piVar3 == 0) {
          if (iVar5 != 0) {
            local_64 = iVar7;
            do {
              if (*(int *)(local_64 + 8) != 0) {
                iVar2 = *(int *)(local_64 + 8) * 0x18;
                piVar3 = (int *)(*(int *)(local_64 + 4) + 8);
                do {
                  iStack_48 = piVar3[3];
                  iVar6 = *piVar3;
                  if ((iVar6 != 0x2aa46bdb || piVar3[2] != -0x3fbc891a) ||
                      (piVar3[1] != 0x4d5c788c || iStack_48 != 0x596b48c)) goto LAB_00f93990;
                  piVar3 = piVar3 + 6;
                  iVar2 = iVar2 + -0x18;
                } while (iVar2 != 0);
              }
              local_64 = local_64 + 0xc;
            } while (local_64 != iVar7 + iVar5 * 0xc);
          }
        }
        else {
          iVar6 = piVar3[1];
          iStack_48 = piVar3[4];
          if ((iVar6 != 0x2aa46bdb || piVar3[3] != -0x3fbc891a) ||
              (piVar3[2] != 0x4d5c788c || iStack_48 != 0x596b48c)) {
LAB_00f93990:
            local_58 = 0;
            local_2c = &local_58;
            local_34 = &local_60;
            local_44 = 0x2aa46bdb;
            local_40 = 0x4d5c788c;
            local_3c = 0xc04376e6;
            local_38 = 0x596b48c;
            local_28 = &LAB_00f9c598;
            local_30 = &DAT_0157d360;
            local_60 = param_2;
            local_5c = param_3;
            local_54 = iVar6;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_005767ed,&local_34,&DAT_01880884);
          }
        }
        iVar5 = iVar5 * 0xc;
        piVar3 = (int *)(iVar7 + 8);
        do {
          piVar4 = piVar3;
          if (iVar5 == 0) {
            return 0;
          }
          iVar5 = iVar5 + -0xc;
          piVar3 = piVar4 + 3;
        } while (*piVar4 == 0);
        iVar5 = ((int *)piVar4[-1])[1];
        iVar7 = *(int *)piVar4[-1] + (*(int *)(iVar5 + 8) - 1U & 0xfffffff8) + 8;
        (**(code **)(iVar5 + 0xc))(&local_58,iVar7);
        if (((local_58 != 0x2aa46bdb || local_50 != -0x3fbc891a) ||
             (local_54 != 0x4d5c788c || iStack_4c != 0x596b48c)) || (iVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_0035e2fc,99,&DAT_01880744);
        }
        return iVar7;
      }
      uVar8 = uVar8 + 1;
      iVar5 = iVar5 + -8;
    } while (iVar5 != 0);
  }
  return 0;
}

