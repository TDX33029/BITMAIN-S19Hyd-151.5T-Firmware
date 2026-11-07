// FUN_00813eec @ 00813eec size=1644 calls_out=17 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | SetGloba | SetGloba | lDefaultError

/* WARNING: Removing unreachable block (ram,0x00814094) */

int FUN_00813eec(int *param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  uint uVar11;
  undefined4 *unaff_r7;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  undefined1 *puVar17;
  bool bVar18;
  ulonglong uVar19;
  uint local_9c;
  undefined4 *local_94;
  undefined4 **local_90;
  undefined4 local_8c;
  undefined4 *local_88;
  undefined4 *local_84;
  undefined **local_80;
  undefined *local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined *local_60;
  undefined4 **local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  int local_50;
  undefined1 *local_4c;
  undefined4 **local_48;
  code *local_44;
  undefined8 local_40;
  int local_38;
  undefined4 ***local_30;
  int local_2c;
  
  if (*param_1 == 1) {
    uVar2 = FUN_01657fc4(param_1 + 2,*param_2);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    iVar12 = param_1[0x48];
    iVar9 = param_1[0x49];
    iVar8 = param_1[0x4a];
    if (*param_1 == 0) {
      if ((char)param_1[0x40] == '\x03') {
        FUN_008146ec(param_1 + 4);
      }
    }
    else {
      FUN_00a07b4c(param_1 + 2);
    }
    *(undefined1 *)(param_1 + 0x40) = 0;
    *param_1 = 0;
    param_1[1] = iVar12;
    param_1[2] = iVar9;
    param_1[3] = iVar8;
    iVar8 = FUN_00813eec(param_1,param_2);
    return iVar8;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0x40]) {
  case '\0':
    iVar8 = param_1[3];
    uVar3 = 0;
    iVar9 = *(int *)(iVar8 + 8);
    if (iVar9 < 0) {
LAB_00813f64:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar3,iVar9);
    }
    unaff_r7 = *(undefined4 **)(iVar8 + 4);
    iVar13 = *(int *)param_1[2];
    iVar15 = ((int *)param_1[2])[1];
    iVar12 = param_1[1];
    iVar4 = *(int *)(iVar8 + 0x10);
    iVar8 = *(int *)(iVar8 + 0xc);
    if (iVar9 == 0) {
      iVar5 = 1;
      iVar16 = 0;
    }
    else {
      iVar5 = thunk_FUN_016d4a50(iVar9);
      iVar16 = iVar9;
      if (iVar5 == 0) {
        uVar3 = 1;
        goto LAB_00813f64;
      }
    }
    FUN_016dd1aa(iVar5,unaff_r7,iVar9);
    param_1[7] = iVar5;
    *(undefined1 *)(param_1 + 0x19) = 0;
    param_1[4] = iVar13;
    param_1[5] = iVar15;
    param_1[6] = iVar16;
    param_1[9] = iVar8;
    param_1[10] = iVar4;
    param_1[8] = iVar9;
    param_1[0xb] = iVar12;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01864e0c);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01864e0c);
  }
  piVar14 = param_1 + 4;
  uVar19 = FUN_008147ac(piVar14,param_2);
  puVar7 = (undefined4 *)(uVar19 >> 0x20);
  if ((uVar19 & 1) == 0) {
    FUN_008146ec(piVar14);
    bVar18 = false;
    unaff_r7 = (undefined4 *)0x0;
    if (puVar7 != (undefined4 *)0x0) {
      iVar8 = param_1[1];
      iVar9 = param_1[3];
      local_94 = puVar7;
      if ((DAT_018d9130 < 4) && (DAT_018d989c != '\0')) {
        if (DAT_018d989c == '\x01') {
LAB_0081414c:
          pcVar6 = s_SetGloba_00414c05;
          puVar10 = &DAT_018ae394;
          DataMemoryBarrier(0xb);
          if (DAT_018dd984 == 2) {
            pcVar6 = DAT_018daa74;
            puVar10 = DAT_018daa78;
            if (DAT_018daa70 != 0) {
              pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
            }
          }
          iVar12 = (**(code **)(puVar10 + 0x14))(pcVar6,DAT_018d9894);
          if (iVar12 == 0) goto LAB_00814320;
        }
        else if (DAT_018d989c != '\x02') {
          cVar1 = FUN_0169ac90(&DAT_018d9894);
          if (cVar1 == '\0') goto LAB_00814320;
          if (cVar1 != '\x02') goto LAB_0081414c;
        }
        local_2c = DAT_018d9894;
        if (*(int *)(DAT_018d9894 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01864e1c);
        }
        local_50 = iVar9 + 0xc;
        local_74 = *(undefined4 *)(DAT_018d9894 + 0x20);
        local_70 = *(undefined4 *)(DAT_018d9894 + 0x24);
        local_6c = *(undefined4 *)(DAT_018d9894 + 0x28);
        local_88 = (undefined4 *)(DAT_018d9894 + 0x1c);
        local_78 = *local_88;
        local_48 = &local_94;
        local_5c = &local_58;
        local_68 = 0;
        local_60 = &DAT_0058a917;
        local_90 = &local_84;
        local_44 = FUN_00604528;
        local_4c = &LAB_00fac484;
        local_30 = &local_90;
        local_54 = &DAT_00f5c97c;
        local_7c = &DAT_018abb78;
        local_58 = (undefined4 *)(iVar8 + 8);
        local_80 = &local_60;
        local_84 = &local_78;
        local_8c = 1;
        local_40._4_4_ = 0;
        local_40._0_4_ = 1;
        DataMemoryBarrier(0xb);
        pcVar6 = s_SetGloba_00414c05;
        puVar10 = &DAT_018ae394;
        if (DAT_018dd984 == 2) {
          pcVar6 = DAT_018daa74;
          puVar10 = DAT_018daa78;
          if (DAT_018daa70 != 0) {
            pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
        }
        iVar8 = (**(code **)(puVar10 + 0x28))(pcVar6,&local_40);
        if (iVar8 != 0) {
          (**(code **)(puVar10 + 0x2c))(pcVar6,&local_40);
        }
      }
LAB_00814320:
      unaff_r7 = local_94;
    }
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  else {
    bVar18 = true;
    *(undefined1 *)(param_1 + 0x40) = 3;
  }
  iVar8 = 1;
  if (!bVar18) {
    if (unaff_r7 == (undefined4 *)0x0) {
      return 0;
    }
    local_58 = unaff_r7;
    iVar12 = (*(code *)param_1[0x4b])(&local_58);
    iVar8 = 0;
    iVar9 = 0;
    if (iVar12 != 0) {
      iVar9 = param_1[0x46];
    }
    if (iVar12 != 0 && iVar9 != 0) {
      uVar2 = param_1[0x42];
      uVar11 = param_1[0x43];
      iVar8 = param_1[0x44];
      param_1[0x46] = iVar9 + -1;
      FUN_0165a798(&local_40);
      local_9c = (uint)local_40 + uVar2;
      uVar2 = local_40._4_4_ + uVar11 + (uint)CARRY4((uint)local_40,uVar2);
      if ((int)uVar11 < 0 != (int)((local_40._4_4_ ^ uVar2) & ~(local_40._4_4_ ^ uVar11)) < 0) {
LAB_00814410:
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
      }
      puVar17 = (undefined1 *)(iVar8 + local_38);
      if (&DAT_3b9aca00 <= puVar17) {
        bVar18 = 0xfffffffe < local_9c;
        local_9c = local_9c + 1;
        uVar11 = uVar2 + bVar18;
        if ((int)((uVar2 ^ uVar11) & ~uVar2) < 0) goto LAB_00814410;
        puVar17 = puVar17 + -1000000000;
        uVar2 = uVar11;
      }
      uVar19 = FUN_0164ec90(&DAT_01864d8c);
      iVar8 = 0x180;
      if ((uVar19 & 1) != 0) {
        iVar8 = 0xb8;
      }
      local_40 = uVar19;
      if (*(undefined1 **)((int)(uVar19 >> 0x20) + iVar8 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                     ,0x73,&DAT_01864d8c);
      }
      if (*param_1 == 0) {
        if ((char)param_1[0x40] == '\x03') {
          FUN_008146ec(piVar14);
        }
      }
      else {
        FUN_00a07b4c(param_1 + 2);
      }
      *param_1 = 1;
      param_1[2] = 0;
      param_1[3] = 0;
      *(undefined1 *)(param_1 + 0x14) = 0;
      *(ulonglong *)(param_1 + 0xe) = uVar19;
      param_1[0x12] = (int)puVar17;
      param_1[0x10] = local_9c;
      param_1[0x11] = uVar2;
      iVar9 = FUN_00813eec(param_1,param_2);
      (**(code **)*unaff_r7)(unaff_r7);
      iVar8 = 0;
      if (iVar9 != 2) {
        iVar8 = iVar9;
      }
      return iVar8;
    }
  }
  return iVar8;
}

