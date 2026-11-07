// FUN_008ddb38 @ 008ddb38 size=912 calls_out=12 calls_in=2
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

longlong FUN_008ddb38(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined *puVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  code *pcVar6;
  undefined4 *unaff_r6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined4 **local_e8;
  undefined4 local_e4;
  undefined4 *local_e0;
  undefined4 *local_dc;
  undefined **local_d8;
  undefined *local_d4;
  undefined *local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 ***local_68;
  int local_64;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 2)) {
  case 0:
    param_1[1] = *param_1;
    if ((DAT_018d9130 < 3) && (DAT_018d96d4 != '\0')) {
      unaff_r6 = &DAT_018daa64;
      if (DAT_018d96d4 == '\x01') {
LAB_008ddbe0:
        DataMemoryBarrier(0xb);
        pcVar10 = s_SetGloba_00414c05;
        puVar2 = &DAT_018ae394;
        if ((DAT_018dd984 == 2) &&
           (pcVar10 = DAT_018daa74, puVar2 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar10 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        iVar5 = (**(code **)(puVar2 + 0x14))(pcVar10,DAT_018d96cc);
        if (iVar5 == 0) goto LAB_008ddd54;
      }
      else if (DAT_018d96d4 != '\x02') {
        cVar3 = FUN_0169ac90(&DAT_018d96cc);
        if (cVar3 == '\0') goto LAB_008ddd54;
        if (cVar3 != '\x02') goto LAB_008ddbe0;
      }
      local_64 = DAT_018d96cc;
      local_c4 = *(int *)(DAT_018d96cc + 0x20);
      if (local_c4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186535c);
      }
      local_dc = &local_c8;
      local_c0 = *(undefined4 *)(DAT_018d96cc + 0x24);
      local_bc = *(undefined4 *)(DAT_018d96cc + 0x28);
      local_d8 = &local_d0;
      local_e0 = (undefined4 *)(DAT_018d96cc + 0x1c);
      local_c8 = *local_e0;
      local_e8 = &local_dc;
      unaff_r6 = (undefined4 *)&DAT_018dd940;
      local_b8 = 0;
      local_e4 = 1;
      local_d4 = &DAT_018abb78;
      local_cc = 0x19;
      local_78 = 1;
      local_68 = &local_e8;
      local_d0 = &DAT_0034638c;
      local_74 = 0;
      DataMemoryBarrier(0xb);
      pcVar10 = s_SetGloba_00414c05;
      puVar2 = &DAT_018ae394;
      if ((DAT_018dd984 == 2) && (pcVar10 = DAT_018daa74, puVar2 = DAT_018daa78, DAT_018daa70 != 0))
      {
        pcVar10 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      iVar5 = (**(code **)(puVar2 + 0x28))(pcVar10,&local_78);
      if (iVar5 != 0) {
        (**(code **)(puVar2 + 0x2c))(pcVar10,&local_78);
      }
    }
LAB_008ddd54:
    uVar11 = (**(code **)(((undefined4 *)param_1[1])[1] + 0x18))(*(undefined4 *)param_1[1]);
    *(undefined8 *)(param_1 + 3) = uVar11;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186536c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186536c);
  case 3:
    uVar11 = *(undefined8 *)(param_1 + 3);
    break;
  case 4:
    goto switchD_008ddb54_caseD_4;
  }
  uVar12 = (**(code **)((int)((ulonglong)uVar11 >> 0x20) + 0xc))((int)uVar11,param_2);
  uVar7 = (uint)(uVar12 >> 0x20);
  if ((uVar12 & 1) != 0) {
    uVar4 = 3;
LAB_008dde6c:
    *(undefined1 *)(param_1 + 2) = uVar4;
    return CONCAT44(unaff_r6,1);
  }
  uVar8 = param_1[3];
  puVar9 = (undefined4 *)param_1[4];
  pcVar6 = (code *)*puVar9;
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(uVar8);
  }
  if (puVar9[1] != 0) {
    thunk_FUN_016d3fb4(uVar8);
  }
  iVar5 = DAT_018d7fb4;
  if (uVar7 == 0) {
    DataMemoryBarrier(0xb);
    if (DAT_018d8068 == 0) {
      do {
        bVar1 = (bool)hasExclusiveAccess((undefined4 *)(DAT_018d7fb4 + 8));
      } while (!bVar1);
      *(undefined4 *)(DAT_018d7fb4 + 8) = 0;
      *(undefined4 *)(iVar5 + 0xc) = 0;
    }
    iVar5 = param_1[1];
    if (*(char *)(iVar5 + 0xc) != '\0') {
      iVar5 = *(int *)(iVar5 + 8);
      FUN_01656eb8(&local_78,&DAT_0186537c,*(undefined4 *)(iVar5 + 0x178),
                   *(undefined4 *)(iVar5 + 0x17c),*(undefined4 *)(iVar5 + 0x180),&DAT_0186537c);
      FUN_016dd1aa(&local_c8,&local_78,0x50);
      FUN_016dd1aa(param_1 + 4,&local_c8,0x50);
switchD_008ddb54_caseD_4:
      unaff_r6 = param_1 + 4;
      iVar5 = FUN_01657fc4(unaff_r6,*param_2);
      if (iVar5 != 0) {
        uVar4 = 4;
        goto LAB_008dde6c;
      }
      FUN_00a07b4c(unaff_r6);
      iVar5 = param_1[1];
    }
    uVar7 = 0;
    *(undefined1 *)(iVar5 + 0xc) = 0;
  }
  *(undefined1 *)(param_1 + 2) = 1;
  return (ulonglong)uVar7 << 0x20;
}

