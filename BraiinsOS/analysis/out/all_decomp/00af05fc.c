// FUN_00af05fc @ 00af05fc size=764 calls_out=9 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

int FUN_00af05fc(int *param_1,undefined4 param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 **local_7c;
  undefined4 local_78;
  undefined4 *local_74;
  undefined4 *local_70;
  undefined **local_6c;
  undefined *local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined *local_50;
  int **local_4c;
  int *local_48;
  code *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 ***local_30;
  int local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x7d)) {
  case 0:
    *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)((int)param_1 + 0x7e);
    iVar5 = param_1[0x1e];
    if ((DAT_018d9130 < 3) && (DAT_018d9dc4 != '\0')) {
      if (DAT_018d9dc4 == '\x01') {
LAB_00af06b0:
        DataMemoryBarrier(0xb);
        pcVar6 = s_SetGloba_00414c05;
        puVar1 = &DAT_018ae394;
        if ((DAT_018dd984 == 2) && (pcVar6 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)
           ) {
          pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        iVar3 = (**(code **)(puVar1 + 0x14))(pcVar6,DAT_018d9dbc);
        if (iVar3 == 0) goto LAB_00af0864;
      }
      else if (DAT_018d9dc4 != '\x02') {
        cVar2 = FUN_0169ac90(&DAT_018d9dbc);
        if (cVar2 == '\0') goto LAB_00af0864;
        if (cVar2 != '\x02') goto LAB_00af06b0;
      }
      local_2c = DAT_018d9dbc;
      local_60 = *(int *)(DAT_018d9dbc + 0x20);
      if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186f500);
      }
      local_70 = &local_64;
      local_74 = (undefined4 *)(DAT_018d9dbc + 0x1c);
      local_64 = *local_74;
      local_6c = &local_50;
      local_7c = &local_70;
      local_5c = *(undefined4 *)(DAT_018d9dbc + 0x24);
      local_58 = *(undefined4 *)(DAT_018d9dbc + 0x28);
      local_54 = 0;
      local_78 = 1;
      local_68 = &DAT_018abb78;
      local_4c = &local_48;
      local_50 = &DAT_005899f4;
      local_40 = 1;
      local_30 = &local_7c;
      local_44 = FUN_00b24cd8;
      local_3c = 0;
      DataMemoryBarrier(0xb);
      pcVar6 = s_SetGloba_00414c05;
      puVar1 = &DAT_018ae394;
      if ((DAT_018dd984 == 2) && (pcVar6 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0))
      {
        pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      local_48 = param_1 + 0x1f;
      iVar3 = (**(code **)(puVar1 + 0x28))(pcVar6,&local_40);
      if (iVar3 != 0) {
        (**(code **)(puVar1 + 0x2c))(pcVar6,&local_40);
      }
    }
LAB_00af0864:
    iVar5 = *(int *)(iVar5 + 0x2ec) + 8;
    *param_1 = iVar5;
    *(undefined1 *)(param_1 + 0x1d) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186f510);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186f510);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x1d]) {
    case '\0':
      iVar5 = *param_1;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01871670);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01871670);
    case '\x03':
      goto switchD_00af083c_caseD_3;
    }
  }
  param_1[0x1b] = iVar5;
  *(undefined2 *)(param_1 + 0x1c) = 0;
switchD_00af083c_caseD_3:
  iVar5 = FUN_00aefa78(param_1 + 1,param_2);
  uVar4 = 3;
  if ((iVar5 == 0) && (uVar4 = 1, *(char *)((int)param_1 + 0x71) == '\x03')) {
    FUN_00accc50(param_1 + 1);
  }
  *(undefined1 *)((int)param_1 + 0x7d) = uVar4;
  *(undefined1 *)(param_1 + 0x1d) = uVar4;
  return iVar5;
}

