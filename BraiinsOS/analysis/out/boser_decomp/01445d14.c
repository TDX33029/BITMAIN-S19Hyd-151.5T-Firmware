// FUN_01445d14 @ 01445d14 size=468 calls_out=4 calls_in=1
// strings: 

void FUN_01445d14(undefined4 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int unaff_r4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 local_50;
  char *local_4c;
  int local_48;
  char *local_44;
  int local_40;
  char *local_3c;
  char *local_38;
  undefined4 local_34;
  int local_30;
  undefined2 local_2c;
  undefined4 local_28;
  
  uVar6 = FUN_0073498c(*(undefined4 *)param_2,*(undefined4 *)((int)param_2 + 4));
  local_48 = (int)((ulonglong)uVar6 >> 0x20);
  local_44 = (char *)uVar6;
  if (local_48 == 0) {
LAB_01445d90:
    uVar4 = 0;
    *(undefined4 *)param_2 = 1;
    *(undefined4 *)((int)param_2 + 4) = 0;
  }
  else {
    cVar1 = *local_44;
    if (cVar1 == '\"') {
      if ((local_48 != 1) && (local_44[1] < -0x40)) {
        puVar3 = &DAT_01cf8fb4;
LAB_01445ed0:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(local_44,local_48,1,local_48,puVar3);
      }
      local_50 = 0x22;
LAB_01445dd4:
      local_28 = 2;
      local_2c = 1;
      local_38 = (char *)CONCAT31(local_38._1_3_,1);
      local_48 = local_48 + -1;
      local_34 = 0;
      local_4c = local_44 + 1;
      local_44 = (char *)0x0;
      local_40 = local_48;
      local_3c = (char *)local_50;
      local_30 = local_48;
      uVar7 = FUN_01aa510c(&local_50);
      uVar6 = FUN_01aa510c(&local_50);
      bVar5 = (int)uVar7 != 0;
      if (bVar5) {
        unaff_r4 = (int)uVar6;
      }
      uVar8 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),unaff_r4);
      if (!bVar5 || (int)uVar6 == 0) {
        uVar4 = 1;
        *(undefined4 *)param_2 = 1;
        *(undefined4 *)((int)param_2 + 4) = 0;
        param_1[1] = 0;
        goto LAB_01445eb0;
      }
LAB_01445ea0:
      uVar6 = uVar7;
      uVar2 = uVar8;
    }
    else {
      if (cVar1 == '#') goto LAB_01445d90;
      if (cVar1 == '\'') {
        if ((local_48 != 1) && (local_44[1] < -0x40)) {
          puVar3 = &DAT_01cf8fc4;
          goto LAB_01445ed0;
        }
        local_50 = 0x27;
        goto LAB_01445dd4;
      }
      local_38 = local_44 + local_48;
      uVar2 = 1;
      local_50 = 2;
      local_30 = CONCAT22(local_30._2_2_,1);
      local_34 = 0;
      local_4c = (char *)0x0;
      local_40 = local_48;
      local_3c = local_44;
      uVar7 = FUN_01445ef0(&local_50);
      uVar8 = FUN_01445ef0(&local_50);
      if ((int)uVar7 != 0 && (int)uVar8 != 0) goto LAB_01445ea0;
    }
    *param_2 = uVar2;
    uVar4 = 1;
    *(undefined8 *)(param_1 + 1) = uVar6;
  }
LAB_01445eb0:
  *param_1 = uVar4;
  return;
}

