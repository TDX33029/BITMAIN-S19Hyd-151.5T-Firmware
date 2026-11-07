// FUN_00d9d450 @ 00d9d450 size=944 calls_out=12 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

undefined4 FUN_00d9d450(int *param_1,int *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 **local_e8;
  undefined4 local_e4;
  undefined4 *local_e0;
  undefined4 *local_dc;
  undefined **local_d8;
  undefined *local_d4;
  undefined *local_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 ***local_68;
  int local_64;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 5)) {
  case 0:
    *(undefined1 *)(param_1 + 1) = 1;
    if (DAT_018d9130 < 3) {
      uVar5 = (uint)DAT_018da340;
      if (uVar5 - 1 < 2) {
LAB_00d9d4b8:
        if (uVar5 != 2) {
          DataMemoryBarrier(0xb);
          pcVar6 = s_SetGloba_00414c05;
          puVar4 = &DAT_018ae394;
          if ((DAT_018dd984 == 2) &&
             (pcVar6 = DAT_018daa74, puVar4 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          iVar7 = (**(code **)(puVar4 + 0x14))(pcVar6);
          if (iVar7 == 0) goto LAB_00d9d648;
        }
        local_e0 = (undefined4 *)(DAT_018da338 + 0x1c);
        uStack_c8 = *local_e0;
        iStack_c4 = *(int *)(DAT_018da338 + 0x20);
        if (iStack_c4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01879f20);
        }
        local_d8 = &local_d0;
        local_dc = &uStack_c8;
        uStack_c0 = *(undefined4 *)(DAT_018da338 + 0x24);
        uStack_bc = *(undefined4 *)(DAT_018da338 + 0x28);
        local_e8 = &local_dc;
        local_b8 = 0;
        local_e4 = 1;
        local_d4 = &DAT_018abb78;
        local_cc = 0x11;
        local_d0 = &DAT_00569f10;
        local_74 = 0;
        local_78 = 1;
        local_68 = &local_e8;
        DataMemoryBarrier(0xb);
        pcVar6 = s_SetGloba_00414c05;
        puVar4 = &DAT_018ae394;
        if ((DAT_018dd984 == 2) && (pcVar6 = DAT_018daa74, puVar4 = DAT_018daa78, DAT_018daa70 != 0)
           ) {
          pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        local_64 = DAT_018da338;
        iVar7 = (**(code **)(puVar4 + 0x28))(pcVar6,&local_78);
        if (iVar7 != 0) {
          (**(code **)(puVar4 + 0x2c))(pcVar6,&local_78);
        }
      }
      else if (uVar5 != 0) {
        uVar5 = FUN_0169ac90(&DAT_018da338);
        uVar5 = uVar5 & 0xff;
        if (uVar5 != 0) goto LAB_00d9d4b8;
      }
    }
LAB_00d9d648:
    FUN_01656eb8(&local_78,&DAT_01879f30,1,0,0,&DAT_01879f30);
    FUN_016dd1aa(&uStack_c8,&local_78,0x50);
    FUN_016dd1aa(param_1 + 2,&uStack_c8,0x50);
  case 3:
    iVar7 = FUN_01657fc4(param_1 + 2,*param_2);
    if (iVar7 != 0) {
      *(undefined1 *)((int)param_1 + 5) = 3;
      return 1;
    }
    FUN_00a07b4c(param_1 + 2);
    iVar7 = *param_1;
    *(undefined1 *)(param_1 + 1) = 0;
    param_1[2] = iVar7;
    break;
  case 1:
    goto switchD_00d9d46c_caseD_1;
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01879f40);
  case 4:
    iVar7 = param_1[2];
  }
  DataMemoryBarrier(0xb);
  if (*(char *)(iVar7 + 0x22) == '\0') {
    uVar8 = (*(code *)**(undefined4 **)*param_2)(((undefined4 *)*param_2)[1]);
    pcVar6 = (char *)(iVar7 + 0x10);
    DataMemoryBarrier(0xb);
    do {
      cVar2 = *pcVar6;
      bVar3 = (bool)hasExclusiveAccess(pcVar6);
    } while (!bVar3);
    *pcVar6 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar2 == '\0') {
      if (*(int *)(iVar7 + 8) != 0) {
        (**(code **)(*(int *)(iVar7 + 8) + 0xc))(*(undefined4 *)(iVar7 + 0xc));
      }
      *(undefined8 *)(iVar7 + 8) = uVar8;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar7 + 0x10) = 0;
      DataMemoryBarrier(0xb);
      DataMemoryBarrier(0xb);
      if (*(char *)(iVar7 + 0x22) == '\0') {
        *(undefined1 *)((int)param_1 + 5) = 4;
        return 1;
      }
    }
    else {
      (**(code **)((int)uVar8 + 0xc))((int)((ulonglong)uVar8 >> 0x20));
    }
  }
  pcVar6 = (char *)(iVar7 + 0x20);
  DataMemoryBarrier(0xb);
  do {
    cVar2 = *pcVar6;
    bVar3 = (bool)hasExclusiveAccess(pcVar6);
  } while (!bVar3);
  *pcVar6 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar2 == '\0') {
    *(undefined1 *)(iVar7 + 0x21) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar7 + 0x20) = 0;
    DataMemoryBarrier(0xb);
  }
  FUN_00d90fa0(param_1 + 2);
  FUN_015fc8dc(0);
switchD_00d9d46c_caseD_1:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xd9d810);
  (*pcVar1)();
}

