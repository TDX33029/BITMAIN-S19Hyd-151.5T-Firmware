// FUN_00cec1d8 @ 00cec1d8 size=1152 calls_out=13 calls_in=2
// strings: SetGloba | SetGloba | lDefaultError | Interrupted by PAUSE command | lDefaultError | SetGloba

char FUN_00cec1d8(undefined4 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint *puVar7;
  bool bVar8;
  undefined4 **local_74;
  undefined4 local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  char **local_64;
  undefined *local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  char *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 ***local_30;
  int local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x14)) {
  case 0:
    param_1[1] = (int *)*param_1;
    iVar4 = *(int *)*param_1;
    puVar7 = (uint *)(iVar4 + 0x98);
    uVar5 = *(uint *)(iVar4 + 0x98);
    if ((uVar5 < 0xfffffff0) && ((uVar5 & 8) == 0)) {
      if (*puVar7 != uVar5) {
        ClearExclusiveLocal();
        goto LAB_00cec254;
      }
      bVar8 = (bool)hasExclusiveAccess(puVar7);
      if (!bVar8) goto LAB_00cec254;
      *puVar7 = uVar5 + 0x10;
      DataMemoryBarrier(0xb);
    }
    else {
LAB_00cec254:
      FUN_0127d66c(puVar7);
    }
    FUN_0128236c(puVar7);
    FUN_0128236c((uint)puVar7 | 1);
    DataMemoryBarrier(0xb);
    cVar2 = *(char *)(iVar4 + 0x9c);
    FUN_01282570(puVar7);
    FUN_01282570((uint)puVar7 | 1);
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *puVar7;
      bVar8 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar8);
    *puVar7 = uVar5 - 0x10;
    if ((uVar5 & 0xfffffff2) == 0x12) {
      FUN_0127d34c(puVar7);
    }
    if (cVar2 == '\x04') {
      *(undefined2 *)((int)param_1 + 0x11) = 0x100;
      param_1[3] = param_1[1];
      goto switchD_00cec1f4_caseD_3;
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01877390);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01877390);
  case 3:
switchD_00cec1f4_caseD_3:
    iVar4 = FUN_00cebb04(param_1 + 2,param_2);
    if (iVar4 != 0) {
      *(undefined1 *)(param_1 + 0x14) = 3;
      return '\x04';
    }
    if (*(char *)((int)param_1 + 0x11) == '\x03') {
      cVar2 = *(char *)(param_1 + 0x13);
      bVar8 = cVar2 == '\x03';
      if (bVar8) {
        cVar2 = *(char *)((int)param_1 + 0x29);
      }
      if (bVar8 && cVar2 == '\x04') {
        FUN_0163bdc0(param_1 + 0xb);
        if (param_1[0xf] != 0) {
          (**(code **)(param_1[0xf] + 0xc))(param_1[0x10]);
        }
        *(undefined1 *)(param_1 + 10) = 0;
      }
    }
    iVar4 = DAT_018d7d50;
    DataMemoryBarrier(0xb);
    if (DAT_018d7d14 == 0) {
      do {
        bVar8 = (bool)hasExclusiveAccess((undefined4 *)(DAT_018d7d50 + 8));
      } while (!bVar8);
      *(undefined4 *)(DAT_018d7d50 + 8) = 1;
      *(undefined4 *)(iVar4 + 0xc) = 0;
      iVar4 = DAT_018d7d54;
      do {
        bVar8 = (bool)hasExclusiveAccess((undefined4 *)(DAT_018d7d54 + 8));
      } while (!bVar8);
      *(undefined4 *)(DAT_018d7d54 + 8) = 1;
      *(undefined4 *)(iVar4 + 0xc) = 0;
    }
    if (DAT_018d9130 < 3) {
      cVar2 = FUN_0169ac90(&DAT_018da050);
      if (cVar2 != '\0') {
        if (cVar2 != '\x02') {
          DataMemoryBarrier(0xb);
          pcVar6 = s_SetGloba_00414c05;
          puVar1 = &DAT_018ae394;
          if ((DAT_018dd984 == 2) &&
             (pcVar6 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          iVar4 = (**(code **)(puVar1 + 0x14))(pcVar6,DAT_018da050);
          if (iVar4 == 0) break;
        }
        local_2c = DAT_018da050;
        local_58 = *(int *)(DAT_018da050 + 0x20);
        if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018773a0);
        }
        local_64 = &local_48;
        local_54 = *(undefined4 *)(DAT_018da050 + 0x24);
        local_50 = *(undefined4 *)(DAT_018da050 + 0x28);
        local_6c = (undefined4 *)(DAT_018da050 + 0x1c);
        local_5c = *local_6c;
        local_68 = &local_5c;
        local_74 = &local_68;
        local_4c = 0;
        local_70 = 1;
        local_40 = 1;
        local_30 = &local_74;
        local_60 = &DAT_018abb78;
        local_44 = 0x39;
        local_48 = "Interrupted by PAUSE command";
        local_3c = 0;
        DataMemoryBarrier(0xb);
        pcVar6 = s_SetGloba_00414c05;
        puVar1 = &DAT_018ae394;
        if ((DAT_018dd984 == 2) && (pcVar6 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)
           ) {
          pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        iVar4 = (**(code **)(puVar1 + 0x28))(pcVar6,&local_40);
        if (iVar4 != 0) {
          (**(code **)(puVar1 + 0x2c))(pcVar6,&local_40);
        }
      }
    }
  }
  iVar4 = *(int *)param_1[1];
  puVar7 = (uint *)(iVar4 + 0x98);
  uVar5 = *(uint *)(iVar4 + 0x98);
  if ((uVar5 < 0xfffffff0) && ((uVar5 & 8) == 0)) {
    if (*puVar7 == uVar5) {
      bVar8 = (bool)hasExclusiveAccess(puVar7);
      if (bVar8) {
        *puVar7 = uVar5 + 0x10;
        DataMemoryBarrier(0xb);
        goto LAB_00cec588;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
  FUN_0127d66c(puVar7);
LAB_00cec588:
  FUN_0128236c(puVar7);
  FUN_0128236c((uint)puVar7 | 1);
  DataMemoryBarrier(0xb);
  cVar2 = *(char *)(iVar4 + 0x9c);
  FUN_01282570(puVar7);
  FUN_01282570((uint)puVar7 | 1);
  DataMemoryBarrier(0xb);
  do {
    uVar5 = *puVar7;
    bVar8 = (bool)hasExclusiveAccess(puVar7);
  } while (!bVar8);
  *puVar7 = uVar5 - 0x10;
  if ((uVar5 & 0xfffffff2) == 0x12) {
    FUN_0127d34c(puVar7);
  }
  cVar3 = '\0';
  if (cVar2 != '\x04') {
    cVar3 = cVar2;
  }
  *(undefined1 *)(param_1 + 0x14) = 1;
  return cVar3;
}

