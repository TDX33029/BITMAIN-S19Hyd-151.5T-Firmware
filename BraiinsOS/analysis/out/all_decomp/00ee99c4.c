// FUN_00ee99c4 @ 00ee99c4 size=1164 calls_out=14 calls_in=1
// strings: session_id | platform_name | devfee_worker_identity | bosminer_version | tuner_mode | stage

void FUN_00ee99c4(int *param_1,int *param_2)

{
  int **ppiVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_50;
  undefined1 *local_4c;
  int local_48;
  int *local_44;
  undefined4 local_40;
  int **local_3c;
  undefined4 local_38;
  int **local_34;
  undefined4 local_30;
  int **local_2c;
  
  local_4c = (undefined1 *)thunk_FUN_016d4a50(0x80);
  if (local_4c == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x80);
  }
  local_44 = &local_50;
  *local_4c = 0x7b;
  local_48 = 1;
  local_3c = &local_44;
  local_50 = 0x80;
  local_40 = CONCAT22(local_40._2_2_,0x100);
  iVar2 = FUN_00e63424(&local_40,param_2 + 0x24);
  ppiVar1 = local_3c;
  if (iVar2 == 0) {
    if ((char)local_40 == '\x01') {
      local_30 = 10;
      iVar2 = FUN_0157c50c(&local_30,0,0);
    }
    else {
      if (local_40._1_1_ != '\x01') {
        piVar6 = *local_3c;
        iVar2 = piVar6[2];
        if (*piVar6 == iVar2) {
          FUN_00edff4c(piVar6,iVar2,1,1,1);
          iVar2 = piVar6[2];
        }
        *(undefined1 *)(piVar6[1] + iVar2) = 0x2c;
        piVar6[2] = iVar2 + 1;
      }
      local_40._0_2_ = CONCAT11(2,(char)local_40);
      FUN_00e5d350(&local_30,*ppiVar1,&DAT_00569478,4);
      if ((char)local_30 == '\x04') {
        piVar6 = *ppiVar1;
        iVar2 = piVar6[2];
        if (*piVar6 == iVar2) {
          FUN_00edff4c(piVar6,iVar2,1,1,1);
          iVar2 = piVar6[2];
        }
        *(undefined1 *)(piVar6[1] + iVar2) = 0x3a;
        piVar6[2] = iVar2 + 1;
        piVar6 = *ppiVar1;
        iVar2 = piVar6[2];
        if (*piVar6 == iVar2) {
          FUN_00edff4c(piVar6,iVar2,1,1,1);
          iVar2 = piVar6[2];
        }
        iVar4 = *param_2;
        iVar5 = param_2[1];
        local_34 = ppiVar1;
        *(undefined1 *)(piVar6[1] + iVar2) = 0x7b;
        piVar6[2] = iVar2 + 1;
        local_38 = CONCAT22(local_38._2_2_,0x100);
        if ((((((iVar4 == 0 && iVar5 == 0) ||
               (iVar2 = FUN_00e64458(&local_38,"session_id",10,iVar5,iVar4,iVar5,param_2[2],
                                     param_2[3]), iVar2 == 0)) &&
              ((param_2[0x14] == -0x80000000 ||
               (iVar2 = FUN_00e61384(&local_38,&DAT_0056a108,8), iVar2 == 0)))) &&
             ((param_2[0x17] == -0x80000000 ||
              (iVar2 = FUN_00e61384(&local_38,"platform_name",0xd), iVar2 == 0)))) &&
            ((param_2[0x1a] == -0x80000000 ||
             (iVar2 = FUN_00e61384(&local_38,"devfee_worker_identity",0x16), iVar2 == 0)))) &&
           (((((param_2[0x1d] == -0x80000000 ||
               (iVar2 = FUN_00e61384(&local_38,"bosminer_version",0x10), iVar2 == 0)) &&
              ((param_2[0x20] == -0x80000000 ||
               (iVar2 = FUN_00e61384(&local_38,"tuner_mode",10), iVar2 == 0)))) &&
             (((undefined1 *)param_2[0x10] == &DAT_3b9aca00 ||
              (iVar2 = FUN_00e611cc(&local_38,&DAT_3b9aca00,param_2[0xe],param_2[0xf],
                                    (undefined1 *)param_2[0x10]), iVar2 == 0)))) &&
            ((((short)param_2[0x12] == 0 ||
              (iVar2 = FUN_00e64138(&local_38,"stage",5,(short)param_2[0x12],
                                    *(undefined2 *)((int)param_2 + 0x4a)), iVar2 == 0)) &&
             ((param_2[4] == 0 ||
              (iVar2 = FUN_00e66024(&local_38,&DAT_00567b50,4,param_2[4],param_2[5]), iVar2 == 0))))
            )))) {
          uVar3 = param_2[6];
          if (uVar3 != 0x11) {
            iVar2 = 7;
            if (1 < uVar3) {
              iVar2 = uVar3 - 2;
            }
                    /* WARNING: Could not recover jumptable at 0x00ee9dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&DAT_00ee9db0 + *(int *)(&DAT_00ee9db0 + iVar2 * 4)))
                      (&DAT_00ee9db0,
                       "InPauseResumePausePauseQuicklyPauseUltraQuicklyTargetSwitchOverheating",7);
            return;
          }
          local_2c = local_34;
          local_30 = local_38;
          FUN_00ecfa80(&local_30);
          if (((local_40 & 0xff00) != 0) && ((local_40 & 1) == 0)) {
            piVar6 = *ppiVar1;
            iVar2 = piVar6[2];
            if (*piVar6 == iVar2) {
              FUN_00edff4c(piVar6,iVar2,1,1,1);
              iVar2 = piVar6[2];
            }
            *(undefined1 *)(piVar6[1] + iVar2) = 0x7d;
            piVar6[2] = iVar2 + 1;
          }
          *param_1 = local_50;
          param_1[1] = (int)local_4c;
          param_1[2] = local_48;
          return;
        }
      }
      else {
        iVar2 = FUN_0157c4a0(local_30,local_2c);
      }
    }
  }
  *param_1 = -0x80000000;
  param_1[1] = iVar2;
  if (local_50 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(local_4c);
  return;
}

