// FUN_00b206d8 @ 00b206d8 size=1148 calls_out=14 calls_in=2
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

bool FUN_00b206d8(undefined8 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 **local_84;
  undefined4 local_80;
  undefined4 *local_7c;
  undefined4 *local_78;
  undefined **local_74;
  undefined *local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined *local_58;
  undefined8 **local_54;
  undefined8 *local_50;
  undefined4 *local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 ***local_38;
  int local_34;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x75)) {
  case 0:
    puVar6 = param_1 + 0xb;
    *(undefined4 *)puVar6 = *(undefined4 *)(param_1 + 0xd);
    *(undefined4 *)((int)param_1 + 0x5c) = *(undefined4 *)((int)param_1 + 0x6c);
    iVar10 = *(int *)((int)param_1 + 100);
    *(undefined1 *)((int)param_1 + 0x74) = 1;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0xe);
    if ((DAT_018d9130 < 3) && (DAT_018d9d94 != '\0')) {
      if (DAT_018d9d94 == '\x01') {
LAB_00b207a8:
        DataMemoryBarrier(0xb);
        pcVar9 = s_SetGloba_00414c05;
        puVar1 = &DAT_018ae394;
        if ((DAT_018dd984 == 2) && (pcVar9 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)
           ) {
          pcVar9 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        iVar4 = (**(code **)(puVar1 + 0x14))(pcVar9,DAT_018d9d8c);
        if (iVar4 == 0) goto LAB_00b20954;
      }
      else if (DAT_018d9d94 != '\x02') {
        cVar2 = FUN_0169ac90(&DAT_018d9d8c);
        if (cVar2 == '\0') goto LAB_00b20954;
        if (cVar2 != '\x02') goto LAB_00b207a8;
      }
      local_34 = DAT_018d9d8c;
      local_68 = *(int *)(DAT_018d9d8c + 0x20);
      if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186f490);
      }
      local_78 = &local_6c;
      local_7c = (undefined4 *)(DAT_018d9d8c + 0x1c);
      local_6c = *local_7c;
      local_74 = &local_58;
      local_84 = &local_78;
      local_64 = *(undefined4 *)(DAT_018d9d8c + 0x24);
      local_60 = *(undefined4 *)(DAT_018d9d8c + 0x28);
      local_5c = 0;
      local_80 = 1;
      local_70 = &DAT_018abb78;
      local_54 = &local_50;
      local_58 = &DAT_0058ec40;
      local_48 = 1;
      local_38 = &local_84;
      local_4c = &DAT_006043a8;
      local_44 = 0;
      DataMemoryBarrier(0xb);
      pcVar9 = s_SetGloba_00414c05;
      puVar1 = &DAT_018ae394;
      if ((DAT_018dd984 == 2) && (pcVar9 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0))
      {
        pcVar9 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      local_50 = puVar6;
      iVar4 = (**(code **)(puVar1 + 0x28))(pcVar9,&local_48);
      if (iVar4 != 0) {
        (**(code **)(puVar1 + 0x2c))(pcVar9,&local_48);
      }
    }
LAB_00b20954:
    uVar11 = 0;
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((int)param_1 + 4) = 0;
    *(undefined1 *)((int)param_1 + 0x74) = 0;
    *(int *)(param_1 + 8) = iVar10;
    *(undefined4 *)((int)param_1 + 0x44) = *(undefined4 *)puVar6;
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)((int)param_1 + 0x5c);
    *(undefined4 *)((int)param_1 + 0x4c) = *(undefined4 *)(param_1 + 0xc);
    *(undefined1 *)((int)param_1 + 0x51) = 0;
LAB_00b20980:
    uVar8 = *(undefined4 *)((int)param_1 + 0x44);
    uVar5 = *(undefined4 *)(param_1 + 9);
    uVar7 = *(undefined4 *)((int)param_1 + 0x4c);
    *(undefined1 *)(param_1 + 10) = 1;
    DataMemoryBarrier(0xb);
    if (DAT_018d8068 == 0) {
      FUN_009b3614((int)uVar11,DAT_018d8008);
    }
    iVar10 = *(int *)(iVar10 + 0x2f4);
    *(undefined1 *)((int)param_1 + 0x3d) = 0;
    iVar10 = iVar10 + 8;
    *(undefined4 *)((int)param_1 + 0x34) = uVar5;
    *(int *)((int)param_1 + 0x2c) = iVar10;
    *(undefined4 *)(param_1 + 6) = uVar8;
    *(undefined4 *)(param_1 + 7) = uVar7;
    *(undefined1 *)(param_1 + 10) = 0;
    param_1[1] = uVar11;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186f4a0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186f4a0);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0x51)) {
    case 0:
      iVar10 = *(int *)(param_1 + 8);
      uVar11 = *param_1;
      goto LAB_00b20980;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01871ec8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01871ec8);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_1 + 0x3d)) {
      case 0:
        iVar10 = *(int *)((int)param_1 + 0x2c);
        uVar11 = param_1[1];
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(0x1872228);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(0x1872228);
      case 3:
        goto switchD_00b20b04_caseD_3;
      }
    }
  }
  *(undefined1 *)((int)param_1 + 0x3c) = 1;
  *(int *)(param_1 + 3) = iVar10;
  param_1[2] = uVar11;
  *(undefined4 *)((int)param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)((int)param_1 + 0x24) = *(undefined4 *)((int)param_1 + 0x34);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_1 + 7);
switchD_00b20b04_caseD_3:
  iVar10 = FUN_00c81384(param_1 + 3,param_2);
  if (iVar10 == 0) {
    uVar3 = 3;
    *(undefined1 *)((int)param_1 + 0x51) = 3;
    *(undefined1 *)((int)param_1 + 0x3d) = 3;
  }
  else {
    iVar4 = *(int *)(param_1 + 3);
    if (iVar4 != 0) {
      FUN_00c81a4c(iVar4,*(undefined4 *)((int)param_1 + 0x1c),1);
    }
    *(undefined8 *)(iVar10 + 0x80) = param_1[2];
    local_48 = *(uint *)(param_1 + 4);
    local_44 = *(undefined4 *)((int)param_1 + 0x24);
    uStack_40 = *(undefined4 *)(param_1 + 5);
    *(undefined1 *)((int)param_1 + 0x3c) = 0;
    if ((*(uint *)(iVar10 + 0x88) & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar10 + 0x8c));
    }
    *(uint *)(iVar10 + 0x88) = local_48;
    *(undefined4 *)(iVar10 + 0x8c) = local_44;
    *(undefined4 *)(iVar10 + 0x90) = uStack_40;
    FUN_00bd4644(iVar10 + 0x20);
    FUN_00c822ec(iVar10);
    *(undefined2 *)((int)param_1 + 0x3c) = 0x100;
    FUN_00b214e8(param_1 + 1);
    *(undefined2 *)(param_1 + 10) = 0x100;
    *(undefined1 *)((int)param_1 + 0x74) = 0;
    uVar3 = 1;
  }
  *(undefined1 *)((int)param_1 + 0x75) = uVar3;
  return iVar10 == 0;
}

