// FUN_0088c1c8 @ 0088c1c8 size=1056 calls_out=15 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

bool FUN_0088c1c8(int *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  undefined1 uVar9;
  undefined4 *local_a8;
  undefined4 **ppuStack_a4;
  undefined4 local_a0;
  undefined4 **local_9c;
  undefined4 local_98;
  undefined4 *local_94;
  undefined4 *local_90;
  undefined **local_8c;
  undefined *local_88;
  undefined4 local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined *local_70;
  int **local_6c;
  int *local_68;
  undefined4 *local_64;
  undefined4 **local_60;
  undefined1 *local_5c;
  undefined4 *local_58;
  code *local_54;
  int local_50;
  code *local_4c;
  uint local_48;
  undefined1 *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 ***local_30;
  int local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[3]) {
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01861ee8);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01861ee8);
  case '\x03':
    piVar7 = (int *)param_1[2];
    goto LAB_0088c21c;
  }
  while( true ) {
    param_1[2] = (int)param_1;
    piVar7 = param_1;
LAB_0088c21c:
    FUN_008b53c0(&local_68,piVar7,param_2);
    piVar7 = local_68;
    if (local_68 == (int *)&SUB_00000002) {
      uVar9 = 3;
      goto LAB_0088c5bc;
    }
    if (((uint)local_68 & 1) == 0) break;
    local_a8 = local_64;
    ppuStack_a4 = local_60;
    local_a0 = local_5c;
    if ((DAT_018d9130 < 4) && (DAT_018d95b4 != '\0')) {
      if (DAT_018d95b4 == '\x01') {
LAB_0088c2cc:
        DataMemoryBarrier(0xb);
        pcVar8 = s_SetGloba_00414c05;
        puVar2 = &DAT_018ae394;
        if ((DAT_018dd984 == 2) && (pcVar8 = DAT_018daa74, puVar2 = DAT_018daa78, DAT_018daa70 != 0)
           ) {
          pcVar8 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        iVar4 = (**(code **)(puVar2 + 0x14))(pcVar8,DAT_018d95ac);
        if (iVar4 == 0) goto LAB_0088c48c;
      }
      else if (DAT_018d95b4 != '\x02') {
        cVar3 = FUN_0169ac90(&DAT_018d95ac);
        if (cVar3 == '\0') goto LAB_0088c48c;
        if (cVar3 != '\x02') goto LAB_0088c2cc;
      }
      if (*(int *)(DAT_018d95ac + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01861ef8);
      }
      local_7c = *(undefined4 *)(DAT_018d95ac + 0x24);
      local_78 = *(undefined4 *)(DAT_018d95ac + 0x28);
      local_94 = (undefined4 *)(DAT_018d95ac + 0x1c);
      local_84 = *local_94;
      local_60 = &local_a8;
      local_48 = (uint)local_60 | 4;
      local_50 = (int)&local_a0 + 1;
      local_74 = 0;
      local_58 = &local_a0;
      local_70 = &DAT_00593f1f;
      local_4c = FUN_0078955c;
      local_54 = FUN_0078955c;
      local_44 = &LAB_00fac484;
      local_5c = &LAB_00fac484;
      local_64 = &DAT_00f5c97c;
      local_68 = param_1 + 1;
      local_88 = &DAT_018abb78;
      local_8c = &local_70;
      local_90 = &local_84;
      local_9c = &local_90;
      local_30 = &local_9c;
      local_98 = 1;
      local_3c = 0;
      local_40 = 1;
      DataMemoryBarrier(0xb);
      pcVar8 = s_SetGloba_00414c05;
      puVar2 = &DAT_018ae394;
      if ((DAT_018dd984 == 2) && (pcVar8 = DAT_018daa74, puVar2 = DAT_018daa78, DAT_018daa70 != 0))
      {
        pcVar8 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      local_80 = *(int *)(DAT_018d95ac + 0x20);
      local_6c = &local_68;
      local_2c = DAT_018d95ac;
      iVar4 = (**(code **)(puVar2 + 0x28))(pcVar8,&local_40);
      if (iVar4 != 0) {
        (**(code **)(puVar2 + 0x2c))(pcVar8,&local_40);
      }
    }
LAB_0088c48c:
    DataMemoryBarrier(0xb);
    if (DAT_018d8068 == 0) {
      FUN_009b3fb0(param_1[1],local_a8);
      FUN_009b41a0(param_1[1],(uint)local_a0 & 0xff);
      FUN_009b4394(param_1[1],local_a0._1_1_);
    }
  }
  iVar4 = *param_1;
  uVar9 = 1;
  if (iVar4 != 0) {
    DataMemoryBarrier(0xb);
    if (*(int *)(iVar4 + 0x10) < 0) {
      puVar5 = (uint *)(iVar4 + 0x10);
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar1);
      *puVar5 = *puVar5 & 0x7fffffff;
      DataMemoryBarrier(0xb);
      iVar4 = *param_1;
    }
    else {
      iVar4 = *param_1;
    }
    if (iVar4 != 0) {
      do {
        while (FUN_008b55d8(&local_68,param_1), local_68 == (int *)&SUB_00000002) {
          if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_0187bde8);
          }
          DataMemoryBarrier(0xb);
          if (*(int *)(*param_1 + 0x10) == 0) goto LAB_0088c584;
          FUN_016da3a8();
        }
      } while (((uint)local_68 & 1) != 0);
LAB_0088c584:
      piVar6 = (int *)*param_1;
      if (piVar6 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar6;
          bVar1 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar1);
        *piVar6 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089e44c(*param_1);
        }
      }
    }
  }
LAB_0088c5bc:
  *(undefined1 *)(param_1 + 3) = uVar9;
  return piVar7 == (int *)&SUB_00000002;
}

