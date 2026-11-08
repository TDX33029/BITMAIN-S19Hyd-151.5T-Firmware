// FUN_0157a500 @ 0157a500 size=1544 calls_out=6 calls_in=8
// strings: Array  | Object  | attempted to begin a new map entry without completing the previous one | attempted to finish a map with a partial entry

undefined4 FUN_0157a500(undefined1 *param_1,int *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined *puVar8;
  char cVar9;
  bool bVar10;
  undefined8 uVar11;
  char local_68;
  undefined1 local_65;
  int **local_64;
  code *local_60;
  int local_5c;
  int local_58;
  int **local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int *local_38;
  int *local_34;
  undefined *local_30;
  int *local_2c;
  int iStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x0157a550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00566f58,4);
    return uVar6;
  case 1:
    local_34 = (int *)(param_1 + 1);
    iVar4 = *param_2;
    iVar5 = param_2[1];
    local_60 = (code *)&LAB_010b9d64;
    puVar8 = &DAT_0058d922;
    break;
  case 2:
    local_34 = (int *)(param_1 + 8);
    local_64 = &local_34;
    local_60 = FUN_0157fa7c;
    uVar6 = FUN_00fa948c(*param_2,param_2[1],&DAT_005846db,&local_64);
    return uVar6;
  case 3:
    local_34 = (int *)(param_1 + 4);
    iVar4 = *param_2;
    iVar5 = param_2[1];
    local_60 = (code *)&LAB_0157d350;
    puVar8 = &DAT_0058e6f9;
    break;
  case 4:
    iVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,"Array ",6);
    if (iVar4 != 0) {
      return 1;
    }
    iVar4 = *(int *)(param_1 + 8);
    iVar5 = *(int *)(param_1 + 0xc);
    uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418df9,1);
    if (iVar5 != 0) {
      bVar10 = uVar3 == 0;
      uVar3 = 1;
      if (bVar10) {
        if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
          uVar3 = FUN_0157a500(iVar4,param_2);
        }
        else {
          uVar3 = 1;
          iVar7 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950e,1);
          if (iVar7 == 0) {
            uVar3 = 1;
            local_5c = param_2[2];
            local_58 = param_2[3];
            local_2c = &local_40;
            local_34 = (int *)*param_2;
            local_30 = (undefined *)param_2[1];
            local_60 = (code *)&DAT_01880dc4;
            local_64 = &local_34;
            local_40 = CONCAT31(local_40._1_3_,1);
            iVar7 = FUN_0157a500(iVar4,&local_64);
            if (iVar7 == 0) {
              uVar3 = (**(code **)(local_60 + 0xc))(local_64,&DAT_00414a81,2);
            }
          }
        }
      }
      if (iVar5 != 1) {
        iVar5 = iVar5 * 0x18 + -0x18;
        do {
          iVar4 = iVar4 + 0x18;
          uVar1 = uVar3 & 1;
          uVar3 = 1;
          if (uVar1 == 0) {
            if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
              iVar7 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
              uVar3 = 1;
              if (iVar7 == 0) {
                uVar3 = FUN_0157a500(iVar4,param_2);
              }
            }
            else {
              local_5c = param_2[2];
              local_58 = param_2[3];
              local_40 = CONCAT31(local_40._1_3_,1);
              local_2c = &local_40;
              local_34 = (int *)*param_2;
              local_30 = (undefined *)param_2[1];
              local_60 = (code *)&DAT_01880dc4;
              local_64 = &local_34;
              iVar7 = FUN_0157a500(iVar4,&local_64);
              if (iVar7 == 0) {
                uVar3 = (**(code **)(local_60 + 0xc))(local_64,&DAT_00414a81,2);
              }
              else {
                uVar3 = 1;
              }
            }
          }
          iVar5 = iVar5 + -0x18;
        } while (iVar5 != 0);
      }
    }
    if (uVar3 == 0) {
      uVar6 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418ec5,1);
      return uVar6;
    }
    return 1;
  case 5:
    iVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,"Object ",7);
    if (iVar4 != 0) {
      return 1;
    }
    local_68 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_004144eb,1);
    local_5c = *(int *)(param_1 + 4);
    local_58 = *(int *)(param_1 + 8);
    local_44 = *(undefined4 *)(param_1 + 0xc);
    if (local_5c == 0) {
      local_44 = 0;
    }
    local_64 = (int **)(uint)(local_5c != 0);
    local_65 = 1;
    bVar2 = false;
    bVar10 = false;
    local_50 = 0;
    local_60 = (code *)0x0;
    local_54 = local_64;
    local_4c = local_5c;
    local_48 = local_58;
    do {
      uVar11 = FUN_00f45584(&local_64);
      uVar6 = (undefined4)((ulonglong)uVar11 >> 0x20);
      iVar4 = (int)uVar11;
      if (iVar4 == 0) {
        if (local_68 != '\0') {
          return 1;
        }
        if (!bVar10) {
          uVar6 = (**(code **)(param_2[1] + 0xc))(*param_2,"}",1);
          return uVar6;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("attempted to finish a map with a partial entry",0x5d,&DAT_01880ddc);
      }
      cVar9 = '\x01';
      if (local_68 == '\0') {
        if (bVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478("attempted to begin a new map entry without completing the previous one",0x8d
                       ,&DAT_01880dec);
        }
        if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
          if ((((!bVar2) ||
               (iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2), iVar5 == 0)) &&
              (iVar4 = FUN_00faa4e8(*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8),*param_2,
                                    param_2[1]), iVar4 == 0)) &&
             (iVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2), iVar4 == 0)) {
LAB_0157a848:
            bVar10 = true;
            if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
              iVar4 = FUN_0157a500(uVar6);
              cVar9 = '\x01';
              if (iVar4 != 0) goto LAB_0157a728;
            }
            else {
              local_40 = *param_2;
              local_3c = param_2[1];
              local_2c = (int *)param_2[2];
              iStack_28 = param_2[3];
              local_30 = &DAT_01880dc4;
              local_34 = &local_40;
              local_38 = (int *)&local_65;
              iVar4 = FUN_0157a500(uVar6,&local_34);
              if ((iVar4 != 0) ||
                 (iVar4 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2), iVar4 != 0))
              goto LAB_0157a724;
            }
            cVar9 = '\0';
            bVar10 = false;
          }
        }
        else if ((bVar2) ||
                (iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950e,1), iVar5 == 0)) {
          local_34 = (int *)*param_2;
          local_30 = (undefined *)param_2[1];
          local_65 = 1;
          local_2c = (int *)&local_65;
          iVar4 = FUN_00faa4e8(*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8),&local_34,
                               &DAT_01880dc4);
          if ((iVar4 == 0) && (iVar4 = FUN_00fb1f64(&local_34,&DAT_00414a7c,2), iVar4 == 0))
          goto LAB_0157a848;
LAB_0157a724:
          cVar9 = '\x01';
        }
      }
LAB_0157a728:
      bVar2 = true;
      local_68 = cVar9;
    } while( true );
  }
  local_64 = &local_34;
  uVar6 = FUN_00fa948c(iVar4,iVar5,puVar8,&local_64);
  return uVar6;
}

