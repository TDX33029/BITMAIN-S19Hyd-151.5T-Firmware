// FUN_008de424 @ 008de424 size=1952 calls_out=11 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

undefined4 FUN_008de424(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined4 *local_80;
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
  undefined **local_4c;
  undefined *local_48;
  code *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 ***local_30;
  int local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 8)) {
  case 0:
    *(undefined1 *)(param_1 + 0xc) = 0;
    param_1[10] = param_1;
    *param_1 = param_1[4];
    param_1[1] = param_1[5];
    param_1[2] = param_1[6];
    param_1[3] = param_1[7];
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018653ac);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018653ac);
  case 4:
    uVar9 = *(undefined8 *)(param_1 + 9);
    goto LAB_008de910;
  }
  uVar10 = FUN_008ddb38(param_1 + 10);
  puVar3 = (undefined4 *)(uVar10 >> 0x20);
  if ((uVar10 & 1) != 0) {
    *(undefined1 *)(param_1 + 8) = 3;
    return 1;
  }
  if (*(char *)(param_1 + 0xc) == '\x04') {
    FUN_00a07b4c(param_1 + 0xe);
  }
  else if (*(char *)(param_1 + 0xc) == '\x03') {
    puVar6 = (undefined4 *)param_1[0xe];
    uVar5 = param_1[0xd];
    pcVar4 = (code *)*puVar6;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
  }
  if (puVar3 != (undefined4 *)0x0) {
    local_80 = puVar3;
    if ((DAT_018d9130 < 4) && (DAT_018d96f8 != '\0')) {
      if (DAT_018d96f8 == '\x01') {
LAB_008de558:
        DataMemoryBarrier(0xb);
        puVar8 = &DAT_018ae394;
        pcVar7 = s_SetGloba_00414c05;
        if ((DAT_018dd984 == 2) && (pcVar7 = DAT_018daa74, puVar8 = DAT_018daa78, DAT_018daa70 != 0)
           ) {
          pcVar7 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        iVar2 = (**(code **)(puVar8 + 0x14))(pcVar7,DAT_018d96f0);
        if (iVar2 == 0) goto LAB_008de700;
      }
      else if (DAT_018d96f8 != '\x02') {
        cVar1 = FUN_0169ac90(&DAT_018d96f0);
        if (cVar1 == '\0') goto LAB_008de700;
        if (cVar1 != '\x02') goto LAB_008de558;
      }
      local_2c = DAT_018d96f0;
      local_60 = *(int *)(DAT_018d96f0 + 0x20);
      if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018653bc);
      }
      local_5c = *(undefined4 *)(DAT_018d96f0 + 0x24);
      local_58 = *(undefined4 *)(DAT_018d96f0 + 0x28);
      local_74 = (undefined4 *)(DAT_018d96f0 + 0x1c);
      local_64 = *local_74;
      local_6c = &local_50;
      local_70 = &local_64;
      local_7c = &local_70;
      local_4c = &local_48;
      local_54 = 0;
      local_78 = 1;
      local_68 = &DAT_018abb78;
      local_3c = 0;
      local_30 = &local_7c;
      local_50 = &DAT_0034629a;
      local_44 = FUN_00604528;
      local_40 = 1;
      DataMemoryBarrier(0xb);
      pcVar7 = s_SetGloba_00414c05;
      puVar8 = &DAT_018ae394;
      if ((DAT_018dd984 == 2) && (pcVar7 = DAT_018daa74, puVar8 = DAT_018daa78, DAT_018daa70 != 0))
      {
        pcVar7 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      local_48 = (undefined *)&local_80;
      iVar2 = (**(code **)(puVar8 + 0x28))(pcVar7,&local_40);
      if (iVar2 != 0) {
        (**(code **)(puVar8 + 0x2c))(pcVar7,&local_40);
      }
    }
LAB_008de700:
    (**(code **)*local_80)();
  }
  if ((DAT_018d9130 < 3) && (DAT_018d96ec != '\0')) {
    if (DAT_018d96ec == '\x01') {
LAB_008de764:
      DataMemoryBarrier(0xb);
      puVar8 = &DAT_018ae394;
      pcVar7 = s_SetGloba_00414c05;
      if ((DAT_018dd984 == 2) && (pcVar7 = DAT_018daa74, puVar8 = DAT_018daa78, DAT_018daa70 != 0))
      {
        pcVar7 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      iVar2 = (**(code **)(puVar8 + 0x14))(pcVar7,DAT_018d96e4);
      if (iVar2 == 0) goto LAB_008de8f4;
    }
    else if (DAT_018d96ec != '\x02') {
      cVar1 = FUN_0169ac90(&DAT_018d96e4);
      if (cVar1 == '\0') goto LAB_008de8f4;
      if (cVar1 != '\x02') goto LAB_008de764;
    }
    if (*(int *)(DAT_018d96e4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018653cc);
    }
    local_6c = &local_48;
    local_5c = *(undefined4 *)(DAT_018d96e4 + 0x24);
    local_58 = *(undefined4 *)(DAT_018d96e4 + 0x28);
    local_74 = (undefined4 *)(DAT_018d96e4 + 0x1c);
    local_64 = *local_74;
    local_70 = &local_64;
    local_7c = &local_70;
    local_54 = 0;
    local_3c = 0;
    local_30 = &local_7c;
    local_78 = 1;
    local_68 = &DAT_018abb78;
    local_44 = (code *)0x3b;
    local_48 = &DAT_00346398;
    local_40 = 1;
    DataMemoryBarrier(0xb);
    pcVar7 = s_SetGloba_00414c05;
    puVar8 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar7 = DAT_018daa74, puVar8 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar7 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    local_60 = *(int *)(DAT_018d96e4 + 0x20);
    local_2c = DAT_018d96e4;
    iVar2 = (**(code **)(puVar8 + 0x28))(pcVar7,&local_40);
    if (iVar2 != 0) {
      (**(code **)(puVar8 + 0x2c))(pcVar7,&local_40);
    }
  }
LAB_008de8f4:
  uVar9 = (**(code **)(param_1[1] + 0x30))(*param_1);
  *(undefined8 *)(param_1 + 9) = uVar9;
LAB_008de910:
  uVar10 = (**(code **)((int)((ulonglong)uVar9 >> 0x20) + 0xc))((int)uVar9,param_2);
  puVar3 = (undefined4 *)(uVar10 >> 0x20);
  if ((uVar10 & 1) != 0) {
    *(undefined1 *)(param_1 + 8) = 4;
    return 1;
  }
  uVar5 = param_1[9];
  puVar6 = (undefined4 *)param_1[10];
  pcVar4 = (code *)*puVar6;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(uVar5);
  }
  if (puVar6[1] != 0) {
    thunk_FUN_016d3fb4(uVar5);
  }
  if (puVar3 == (undefined4 *)0x0) goto LAB_008deb5c;
  local_80 = puVar3;
  if ((DAT_018d9130 < 4) && (DAT_018d96e0 != '\0')) {
    if (DAT_018d96e0 == '\x01') {
LAB_008de9dc:
      DataMemoryBarrier(0xb);
      pcVar7 = s_SetGloba_00414c05;
      puVar8 = &DAT_018ae394;
      if ((DAT_018dd984 == 2) && (pcVar7 = DAT_018daa74, puVar8 = DAT_018daa78, DAT_018daa70 != 0))
      {
        pcVar7 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      iVar2 = (**(code **)(puVar8 + 0x14))(pcVar7,DAT_018d96d8);
      if (iVar2 == 0) goto LAB_008deb4c;
    }
    else if (DAT_018d96e0 != '\x02') {
      cVar1 = FUN_0169ac90(&DAT_018d96d8);
      if (cVar1 == '\0') goto LAB_008deb4c;
      if (cVar1 != '\x02') goto LAB_008de9dc;
    }
    if (*(int *)(DAT_018d96d8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018653dc);
    }
    local_5c = *(undefined4 *)(DAT_018d96d8 + 0x24);
    local_58 = *(undefined4 *)(DAT_018d96d8 + 0x28);
    local_6c = &local_50;
    local_74 = (undefined4 *)(DAT_018d96d8 + 0x1c);
    local_64 = *local_74;
    local_70 = &local_64;
    local_7c = &local_70;
    local_54 = 0;
    local_4c = &local_48;
    local_78 = 1;
    local_68 = &DAT_018abb78;
    local_44 = FUN_00604528;
    local_50 = &DAT_003463b5;
    local_3c = 0;
    local_40 = 1;
    local_30 = &local_7c;
    DataMemoryBarrier(0xb);
    pcVar7 = s_SetGloba_00414c05;
    puVar8 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar7 = DAT_018daa74, puVar8 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar7 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    local_60 = *(int *)(DAT_018d96d8 + 0x20);
    local_48 = (undefined *)&local_80;
    local_2c = DAT_018d96d8;
    iVar2 = (**(code **)(puVar8 + 0x28))(pcVar7,&local_40);
    if (iVar2 != 0) {
      (**(code **)(puVar8 + 0x2c))(pcVar7,&local_40);
    }
  }
LAB_008deb4c:
  (**(code **)*local_80)();
LAB_008deb5c:
  FUN_008d8460(param_1);
  *(undefined1 *)(param_1 + 8) = 1;
  return 0;
}

