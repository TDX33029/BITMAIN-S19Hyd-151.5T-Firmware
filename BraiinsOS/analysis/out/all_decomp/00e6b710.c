// FUN_00e6b710 @ 00e6b710 size=760 calls_out=9 calls_in=1
// strings: fw_version | model_name | min_voltage | max_voltage | calibration_table_raw | calibration_curve_raw

int FUN_00e6b710(char *param_1,int *param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  
  if (*param_1 != '\0') goto LAB_00e6b970;
  iVar2 = FUN_00e5b230(param_1,&DAT_00569998,8);
  if (iVar2 == 0) {
    if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
    }
    puVar5 = *(undefined4 **)(param_1 + 4);
    piVar4 = (int *)*puVar5;
    iVar2 = piVar4[2];
    if ((uint)(*piVar4 - iVar2) < 2) {
      FUN_00edff4c(piVar4,iVar2,2,1,1);
      iVar2 = piVar4[2];
    }
    iVar6 = *param_2;
    iVar7 = param_2[1];
    piVar4[2] = iVar2 + 2;
    *(undefined2 *)(piVar4[1] + iVar2) = 0x203a;
    if (iVar6 == 2 && iVar7 == 0) {
      piVar4 = (int *)*puVar5;
      iVar2 = piVar4[2];
      if ((uint)(*piVar4 - iVar2) < 4) {
        FUN_00edff4c(piVar4,iVar2,4,1,1);
        iVar2 = piVar4[2];
      }
      *(undefined4 *)(piVar4[1] + iVar2) = 0x6c6c756e;
      piVar4[2] = iVar2 + 4;
LAB_00e6b7d0:
      *(undefined1 *)(puVar5 + 4) = 1;
      return 0;
    }
    piVar4 = (int *)*puVar5;
    iVar2 = piVar4[2];
    iVar3 = *piVar4;
    *(undefined1 *)(puVar5 + 4) = 0;
    puVar5[3] = puVar5[3] + 1;
    if (iVar3 == iVar2) {
      FUN_00edff4c(piVar4,iVar2,1,1,1);
      iVar2 = piVar4[2];
    }
    iVar3 = param_2[0x14];
    uVar1 = *(undefined2 *)((int)param_2 + 0x52);
    *(undefined1 *)(piVar4[1] + iVar2) = 0x7b;
    piVar4[2] = iVar2 + 1;
    local_38 = CONCAT22(local_38._2_2_,0x100);
    local_34 = puVar5;
    iVar2 = FUN_00e6c758(&local_38,&DAT_00410ff9,7,(short)iVar3,uVar1);
    if (iVar2 == 0) {
      iVar2 = FUN_00e6c758(&local_38,"fw_version",10,(short)param_2[0x15],
                           *(undefined2 *)((int)param_2 + 0x56));
      if (iVar2 == 0) {
        if ((char)local_38 != '\0') {
LAB_00e6b970:
          local_30 = 10;
          iVar2 = FUN_0157c50c(&local_30,0,0);
          return iVar2;
        }
        iVar2 = FUN_00e5b468(&local_38,&DAT_00409140,0xd,param_2 + 8);
        if (iVar2 == 0) {
          if ((char)local_38 != '\0') goto LAB_00e6b970;
          iVar2 = FUN_00e5b468(&local_38,"model_name",10,param_2 + 0xb);
          if ((((iVar2 == 0) &&
               (iVar2 = FUN_00e6ca14((int)*(undefined8 *)(param_2 + 2),&local_38,"min_voltage",iVar6
                                     ,iVar7), iVar2 == 0)) &&
              (iVar2 = FUN_00e6ca14((int)*(undefined8 *)(param_2 + 6),&local_38,"max_voltage",
                                    param_2[4],param_2[5]), iVar2 == 0)) &&
             ((iVar2 = FUN_00e6cb7c(&local_38,"calibration_table_raw",param_2 + 0xe), iVar2 == 0 &&
              (iVar2 = FUN_00e6cb7c(&local_38,"calibration_curve_raw",param_2 + 0x11), iVar2 == 0)))
             ) {
            local_30 = local_38;
            local_2c = local_34;
            FUN_00e5c7e0(&local_30);
            goto LAB_00e6b7d0;
          }
        }
      }
    }
  }
  return iVar2;
}

