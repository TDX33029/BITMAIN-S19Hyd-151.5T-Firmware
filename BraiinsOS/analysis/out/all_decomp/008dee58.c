// FUN_008dee58 @ 008dee58 size=1252 calls_out=11 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_008dee58(undefined4 *param_1,undefined8 *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 ****ppppuVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 **ppuVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined4 ***local_90;
  undefined **local_8c;
  undefined *local_88;
  undefined4 uStack_84;
  undefined4 *local_80 [3];
  undefined4 **local_74;
  code *local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined **local_64;
  int *local_60;
  undefined4 **local_5c;
  code *local_58;
  undefined4 **local_54;
  code *local_50;
  undefined4 local_4c;
  undefined *local_48;
  undefined4 ***local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 **local_30;
  int local_2c;
  
  ppppuVar6 = &local_90;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 4)) {
  case 0:
    *(int *)((int)param_2 + 0x1c) = *(int *)(param_2 + 3);
    param_2[1] = *param_2;
    FUN_008ef954(&local_90,*(int *)(*(int *)(param_2 + 3) + 8) + 8);
    ppuVar9 = (undefined4 **)(param_2 + 1);
    if (((uint)local_90 & 1) == 0) {
      if ((DAT_018d9130 < 3) && (DAT_018d96b0 != '\0')) {
        puVar10 = &DAT_018ae394;
        if (DAT_018d96b0 == '\x01') {
LAB_008def60:
          DataMemoryBarrier(0xb);
          pcVar7 = s_SetGloba_00414c05;
          if ((DAT_018dd984 == 2) &&
             (pcVar7 = DAT_018daa74, puVar10 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar7 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          iVar2 = (**(code **)(puVar10 + 0x14))(pcVar7,DAT_018d96a8);
          if (iVar2 == 0) goto LAB_008df248;
        }
        else if (DAT_018d96b0 != '\x02') {
          cVar1 = FUN_0169ac90(&DAT_018d96a8);
          if (cVar1 == '\0') goto LAB_008df248;
          if (cVar1 != '\x02') goto LAB_008def60;
        }
        local_2c = DAT_018d96a8;
        local_58 = *(code **)(DAT_018d96a8 + 0x20);
        if (local_58 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018652cc);
        }
        local_90 = &local_5c;
        local_50 = *(code **)(DAT_018d96a8 + 0x28);
        local_8c = &local_48;
        local_60 = (int *)(DAT_018d96a8 + 0x1c);
        local_5c = (undefined4 **)*local_60;
        local_4c = 0;
        local_54 = *(undefined4 ***)(DAT_018d96a8 + 0x24);
        local_64 = (undefined **)&DAT_00000001;
        local_88 = &DAT_018abb78;
        local_44 = &local_74;
        local_48 = &DAT_0034632b;
        local_40 = 1;
        local_30 = &local_68;
        local_70 = FUN_00f5cdb8;
        local_3c = 0;
        DataMemoryBarrier(0xb);
        pcVar7 = s_SetGloba_00414c05;
        puVar10 = &DAT_018ae394;
        if ((DAT_018dd984 == 2) &&
           (pcVar7 = DAT_018daa74, puVar10 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar7 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        local_74 = ppuVar9;
        local_68 = &local_90;
        iVar2 = (**(code **)(puVar10 + 0x28))(pcVar7,&local_40);
        if (iVar2 != 0) {
          (**(code **)(puVar10 + 0x2c))(pcVar7,&local_40);
        }
      }
    }
    else {
      if ((double)CONCAT44(uStack_84,local_88) == *(double *)ppuVar9) {
        uVar5 = 0;
        goto LAB_008df2f0;
      }
      if ((DAT_018d9130 < 3) && (DAT_018d96a4 != '\0')) {
        if (DAT_018d96a4 == '\x01') {
LAB_008df130:
          DataMemoryBarrier(0xb);
          puVar10 = &DAT_018ae394;
          pcVar7 = s_SetGloba_00414c05;
          if ((DAT_018dd984 == 2) &&
             (pcVar7 = DAT_018daa74, puVar10 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar7 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          iVar2 = (**(code **)(puVar10 + 0x14))(pcVar7,DAT_018d969c);
          if (iVar2 == 0) goto LAB_008df248;
        }
        else if (DAT_018d96a4 != '\x02') {
          cVar1 = FUN_0169ac90(&DAT_018d969c);
          if (cVar1 == '\0') goto LAB_008df248;
          if (cVar1 != '\x02') goto LAB_008df130;
        }
        local_6c = (undefined4 *)(DAT_018d969c + 0x1c);
        local_40 = *local_6c;
        local_3c = *(int *)(DAT_018d969c + 0x20);
        if (local_3c == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018652bc);
        }
        uStack_38 = *(undefined4 *)(DAT_018d969c + 0x24);
        local_64 = &local_48;
        local_34 = *(undefined4 *)(DAT_018d969c + 0x28);
        local_68 = &local_40;
        local_70 = (code *)0x1;
        local_44 = &local_5c;
        local_74 = &local_68;
        local_5c = local_80;
        local_30 = (undefined4 **)0x0;
        local_60 = (int *)&DAT_018abb78;
        local_48 = &DAT_00346301;
        local_50 = FUN_00f5cdb8;
        local_58 = FUN_00f5cdb8;
        local_54 = ppuVar9;
        FUN_008dfa50(&local_74);
      }
    }
LAB_008df248:
    uVar11 = (**(code **)((*(undefined4 **)((int)param_2 + 0x1c))[1] + 0x1c))
                       ((int)param_2[1],**(undefined4 **)((int)param_2 + 0x1c));
    param_2[2] = uVar11;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018652dc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018652dc);
  case 3:
    uVar11 = param_2[2];
  }
  uVar12 = (**(code **)((int)((ulonglong)uVar11 >> 0x20) + 0xc))((int)uVar11,param_3);
  ppppuVar6 = (undefined4 ****)(uVar12 >> 0x20);
  if ((uVar12 & 1) != 0) {
    *(undefined1 *)param_1 = 2;
    *(undefined1 *)(param_2 + 4) = 3;
    return;
  }
  puVar8 = *(undefined4 **)((int)param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 2);
  pcVar3 = (code *)*puVar8;
  uVar5 = 0;
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(uVar4);
    uVar5 = extraout_r1;
  }
  if (puVar8[1] != 0) {
    thunk_FUN_016d3fb4(uVar4);
    uVar5 = extraout_r1_00;
  }
  if (ppppuVar6 == (undefined4 ****)0x0) {
    FUN_008f0d24((int)param_2[1],*(int *)(*(int *)((int)param_2 + 0x1c) + 8) + 8,uVar5,1,0);
    uVar5 = 0x100;
  }
  else {
    uVar5 = 1;
  }
LAB_008df2f0:
  *param_1 = uVar5;
  param_1[1] = ppppuVar6;
  *(undefined1 *)(param_2 + 4) = 1;
  return;
}

