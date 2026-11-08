// FUN_00e6a804 @ 00e6a804 size=1568 calls_out=12 calls_in=1
// strings: tuner_info | NotRunning | TestingPerformanceProfile | OptimizingEfficiency | TuningIndividualChips | RunningWithFixedSettings

int FUN_00e6a804(char *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  
  if (*param_1 != '\0') {
    local_30 = 10;
    iVar2 = FUN_0157c50c(&local_30,0,0);
    return iVar2;
  }
  iVar2 = FUN_00e5b230(param_1,"tuner_info",10);
  if (iVar2 != 0) {
    return iVar2;
  }
  if (*param_1 == '\x01') goto LAB_00e6adac;
  puVar9 = *(undefined4 **)(param_1 + 4);
  piVar7 = (int *)*puVar9;
  iVar2 = piVar7[2];
  if ((uint)(*piVar7 - iVar2) < 2) {
    FUN_00edff4c(piVar7,iVar2,2,1,1);
    iVar2 = piVar7[2];
  }
  iVar3 = *param_2;
  iVar5 = param_2[1];
  piVar7[2] = iVar2 + 2;
  *(undefined2 *)(piVar7[1] + iVar2) = 0x203a;
  if (iVar3 == 7 && iVar5 == 0) {
    piVar7 = (int *)*puVar9;
    iVar2 = piVar7[2];
    if ((uint)(*piVar7 - iVar2) < 4) {
      FUN_00edff4c(piVar7,iVar2,4,1,1);
      iVar2 = piVar7[2];
    }
    *(undefined4 *)(piVar7[1] + iVar2) = 0x6c6c756e;
    piVar7[2] = iVar2 + 4;
LAB_00e6a8c4:
    *(undefined1 *)(puVar9 + 4) = 1;
    return 0;
  }
  piVar7 = (int *)*puVar9;
  iVar2 = piVar7[2];
  iVar3 = *piVar7;
  *(undefined1 *)(puVar9 + 4) = 0;
  puVar9[3] = puVar9[3] + 1;
  if (iVar3 == iVar2) {
    FUN_00edff4c(piVar7,iVar2,1,1,1);
    iVar2 = piVar7[2];
  }
  iVar3 = param_2[0x13];
  *(undefined1 *)(piVar7[1] + iVar2) = 0x7b;
  piVar7[2] = iVar2 + 1;
  local_38 = CONCAT22(local_38._2_2_,0x100);
  local_34 = puVar9;
  iVar2 = FUN_00e5b230(&local_38,&DAT_00410ad4,6);
  puVar1 = local_34;
  if (iVar2 == 0) {
    if ((char)local_38 == '\x01') {
LAB_00e6adac:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
    }
    piVar7 = (int *)*local_34;
    iVar2 = piVar7[2];
    if ((uint)(*piVar7 - iVar2) < 2) {
      FUN_00edff4c(piVar7,iVar2,2,1,1);
      iVar2 = piVar7[2];
    }
    piVar7[2] = iVar2 + 2;
    *(undefined2 *)(piVar7[1] + iVar2) = 0x203a;
    uVar8 = *puVar1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)iVar3) {
    case '\0':
      FUN_00f1f6ac(uVar8,&DAT_004144ec,1);
      local_30 = CONCAT31(local_30._1_3_,4);
      pcVar4 = "NotRunning";
      uVar6 = 10;
      break;
    case '\x01':
      FUN_00f1f6ac(uVar8,&DAT_004144ec,1);
      local_30 = CONCAT31(local_30._1_3_,4);
      pcVar4 = "StabilizingTemperature";
      uVar6 = 0x16;
      break;
    case '\x02':
      FUN_00f1f6ac(uVar8,&DAT_004144ec,1);
      local_30 = CONCAT31(local_30._1_3_,4);
      pcVar4 = "OptimizingEfficiency";
      uVar6 = 0x14;
      break;
    case '\x03':
      FUN_00f1f6ac(uVar8,&DAT_004144ec,1);
      local_30 = CONCAT31(local_30._1_3_,4);
      pcVar4 = "TuningIndividualChips";
      uVar6 = 0x15;
      break;
    case '\x04':
      FUN_00f1f6ac(uVar8,&DAT_004144ec,1);
      local_30 = CONCAT31(local_30._1_3_,4);
      pcVar4 = "TestingPerformanceProfile";
      uVar6 = 0x19;
      break;
    case '\x05':
      FUN_00f1f6ac(uVar8,&DAT_004144ec,1);
      local_30 = CONCAT31(local_30._1_3_,4);
      pcVar4 = "Stable";
      uVar6 = 6;
      break;
    case '\x06':
      FUN_00f1f6ac(uVar8,&DAT_004144ec,1);
      local_30 = CONCAT31(local_30._1_3_,4);
      pcVar4 = &DAT_00564310;
      uVar6 = 0x10;
      break;
    case '\a':
      FUN_00f1f6ac(uVar8,&DAT_004144ec,1);
      local_30 = CONCAT31(local_30._1_3_,4);
      pcVar4 = "RunningWithFixedSettings";
      uVar6 = 0x18;
    }
    FUN_00e57bb4(&local_30,uVar8,pcVar4,uVar6);
    if ((char)local_30 == '\x04') {
      FUN_00f1f6ac(uVar8,&DAT_004144ec,1);
    }
    else {
      iVar2 = FUN_0157c4a0(local_30,local_2c);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    *(undefined1 *)(puVar1 + 4) = 1;
    iVar2 = FUN_00e5b230(&local_38,&DAT_00569a90,8);
    puVar1 = local_34;
    if (iVar2 == 0) {
      if ((char)local_38 == '\x01') goto LAB_00e6adac;
      FUN_00f1f6ac(*local_34,&DAT_00414a7c,2);
      if ((undefined1 *)param_2[8] == &DAT_3b9aca00) {
        FUN_00f1f6ac(*puVar1,&DAT_00567318,4);
      }
      else {
        iVar2 = FUN_00e953fc(param_2[6],param_2[7],(undefined1 *)param_2[8],puVar1);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      *(undefined1 *)(puVar1 + 4) = 1;
      iVar2 = FUN_00e5b230(&local_38,"stage_duration_s",0x10);
      puVar1 = local_34;
      if (iVar2 == 0) {
        if ((char)local_38 == '\x01') goto LAB_00e6adac;
        FUN_00f1f6ac(*local_34,&DAT_00414a7c,2);
        if ((undefined1 *)param_2[0xc] == &DAT_3b9aca00) {
          FUN_00f1f6ac(*puVar1,&DAT_00567318,4);
        }
        else {
          iVar2 = FUN_00e953fc(param_2[10],param_2[0xb],(undefined1 *)param_2[0xc],puVar1);
          if (iVar2 != 0) {
            return iVar2;
          }
        }
        *(undefined1 *)(puVar1 + 4) = 1;
        iVar2 = FUN_00e5b230(&local_38,"loaded_profile_timestamp",0x18);
        puVar1 = local_34;
        if (iVar2 == 0) {
          if ((char)local_38 == '\x01') goto LAB_00e6adac;
          FUN_00f1f6ac(*local_34,&DAT_00414a7c,2);
          if ((undefined1 *)param_2[0x10] == &DAT_3b9aca00) {
            FUN_00f1f6ac(*puVar1,&DAT_00567318,4);
          }
          else {
            iVar2 = FUN_00e95744(param_2 + 0xe,puVar1);
            if (iVar2 != 0) {
              return iVar2;
            }
          }
          iVar2 = param_2[0x12];
          *(undefined1 *)(puVar1 + 4) = 1;
          iVar2 = FUN_00e5b648(&local_38,"iteration",9,iVar2);
          if ((iVar2 == 0) && (iVar2 = FUN_00e5e024(&local_38,&DAT_005675d0,4,param_2), iVar2 == 0))
          {
            local_30 = local_38;
            local_2c = local_34;
            FUN_00e5c7e0(&local_30);
            goto LAB_00e6a8c4;
          }
        }
      }
    }
  }
  return iVar2;
}

