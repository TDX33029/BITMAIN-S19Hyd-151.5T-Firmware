// FUN_0088dbc0 @ 0088dbc0 size=2892 calls_out=17 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_0088dbc0(int param_1,undefined4 *param_2)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  undefined1 uVar8;
  uint uVar9;
  code *pcVar10;
  char *pcVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined4 *unaff_r9;
  undefined8 uVar18;
  ulonglong uVar19;
  int local_8c;
  undefined1 *local_88;
  undefined4 *local_80;
  undefined4 **local_7c;
  undefined4 ***local_78;
  undefined ***local_74;
  undefined4 local_70;
  undefined4 *local_6c;
  undefined **local_68;
  undefined4 ***local_64;
  undefined *local_60;
  undefined *local_5c;
  int local_58;
  byte *local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 **local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  byte *local_3c;
  undefined1 *local_38;
  undefined ****local_30;
  int local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x20)) {
  case 0:
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
    FUN_01651a54(param_1,&DAT_01861e98,1,0,0,&DAT_01861e98);
    while( true ) {
      *(undefined1 *)(param_1 + 0x30) = 0;
      *(int *)(param_1 + 0x28) = param_1;
      *(int *)(param_1 + 0x2c) = param_1;
      iVar5 = param_1;
LAB_0088e2d8:
      FUN_016510c8(&local_40,iVar5,*param_2);
      uVar8 = 1;
      if (local_38 == &DAT_3b9aca00) {
        uVar8 = 3;
      }
      *(undefined1 *)(param_1 + 0x30) = uVar8;
      if (local_38 == &DAT_3b9aca00) {
        *(undefined1 *)(param_1 + 0x20) = 3;
        return;
      }
      *(undefined1 *)(param_1 + 0x31) = 0;
      iVar5 = *(int *)(param_1 + 0x1c) + 8;
      *(int *)(param_1 + 0x2c) = iVar5;
LAB_0088de48:
      puVar13 = (undefined1 *)0x1;
      *(int *)(param_1 + 0x28) = iVar5;
      uVar8 = 0x49;
      uVar9 = *(uint *)(iVar5 + 0xc);
      puVar15 = &DAT_0041121f;
      *(undefined2 *)(param_1 + 0x48) = 0x49;
      *(undefined1 **)(param_1 + 0x3c) = &DAT_0041121f;
      *(undefined4 *)(param_1 + 0x40) = 1;
      *(int *)(param_1 + 0x44) = iVar5;
      *(char *)(param_1 + 0x30) = (char)(1 << (uVar9 & 7));
      iVar17 = *(int *)(*(int *)(iVar5 + 4) + 8);
      unaff_r9 = *(undefined4 **)(*(int *)(iVar5 + 4) + 0xc);
LAB_0088de90:
      pbVar4 = (byte *)thunk_FUN_016d4a50(puVar13);
      if (pbVar4 == (byte *)0x0) break;
LAB_0088dea0:
      local_40 = puVar13;
      local_3c = pbVar4;
      FUN_016dd1aa(pbVar4,puVar15,puVar13);
      local_38 = puVar13;
      uVar18 = (*(code *)unaff_r9[5])(iVar17 + (unaff_r9[2] - 1 & 0xfffffff8) + 8,uVar8,&local_40);
      *(undefined8 *)(param_1 + 0x34) = uVar18;
switchD_0088dca8_caseD_3:
      local_88 = (undefined1 *)(param_1 + 0x49);
      uVar19 = (**(code **)(*(int *)(param_1 + 0x38) + 0xc))
                         (*(undefined4 *)(param_1 + 0x34),param_2);
      pbVar4 = (byte *)(uVar19 >> 0x20);
      if ((uVar19 & 1) == 0) {
        uVar14 = *(undefined4 *)(param_1 + 0x34);
        puVar16 = *(undefined4 **)(param_1 + 0x38);
        pcVar10 = (code *)*puVar16;
        if (pcVar10 != (code *)0x0) {
          (*pcVar10)(uVar14);
        }
        if (puVar16[1] != 0) {
          thunk_FUN_016d3fb4(uVar14);
        }
        if (pbVar4 != (byte *)0x0) {
          local_40 = (undefined1 *)0x3;
          local_58 = 0xf;
          local_5c = &DAT_00344a2a;
          local_54 = pbVar4;
          unaff_r9 = (undefined4 *)FUN_0080807c(&local_5c,&local_40);
          goto LAB_0088e084;
        }
        *(undefined1 *)(param_1 + 0x49) = 1;
        uVar8 = 0x49;
        iVar5 = *(int *)(param_1 + 0x28);
        *(undefined2 *)(param_1 + 0x40) = 0x49;
        *(int *)(param_1 + 0x3c) = iVar5;
LAB_0088df98:
        iVar17 = *(int *)(*(int *)(iVar5 + 4) + 0xc);
        uVar18 = (**(code **)(iVar17 + 0x10))
                           (*(int *)(*(int *)(iVar5 + 4) + 8) +
                            (*(int *)(iVar17 + 8) - 1U & 0xfffffff8) + 8,uVar8,1);
        uVar14 = (undefined4)uVar18;
        *(undefined8 *)(param_1 + 0x34) = uVar18;
LAB_0088dfd0:
        local_88 = (undefined1 *)(param_1 + 0x41);
        (**(code **)(*(int *)(param_1 + 0x38) + 0xc))(&local_40,uVar14,param_2);
        puVar15 = local_38;
        pbVar4 = local_3c;
        puVar13 = local_40;
        if (local_40 == (undefined1 *)0x80000001) {
          *local_88 = 3;
          *(undefined1 *)(param_1 + 0x31) = 4;
          goto LAB_0088e008;
        }
        puVar16 = *(undefined4 **)(param_1 + 0x38);
        pcVar10 = (code *)*puVar16;
        uVar14 = *(undefined4 *)(param_1 + 0x34);
        if (pcVar10 != (code *)0x0) {
          (*pcVar10)(uVar14);
        }
        if (puVar16[1] != 0) {
          thunk_FUN_016d3fb4(uVar14);
        }
        if (puVar13 == (undefined1 *)0x80000000) {
          local_40 = (undefined1 *)0x3;
          local_54 = pbVar4;
          local_58 = 0xe;
          local_5c = &DAT_00344a39;
          unaff_r9 = (undefined4 *)FUN_0080807c(&local_5c,&local_40);
LAB_0088e084:
          *local_88 = 1;
        }
        else {
          if (puVar15 != (undefined1 *)0x1) {
            unaff_r9 = (undefined4 *)FUN_00809ef8();
            if (puVar13 != (undefined1 *)0x0) {
              thunk_FUN_016d3fb4(pbVar4);
            }
            goto LAB_0088e084;
          }
          bVar1 = *pbVar4;
          if (puVar13 != (undefined1 *)0x0) {
            thunk_FUN_016d3fb4(pbVar4);
          }
          *(undefined1 *)(param_1 + 0x41) = 1;
          bVar1 = *(byte *)(param_1 + 0x30) & bVar1;
          if (bVar1 == 0) {
            if ((DAT_018d9130 < 5) && (DAT_018d950c != '\0')) {
              if (DAT_018d950c == '\x01') {
LAB_0088e5bc:
                DataMemoryBarrier(0xb);
                puVar12 = DAT_018daa78;
                if (DAT_018dd984 != 2) {
                  puVar12 = &DAT_018ae394;
                }
                pcVar11 = s_SetGloba_00414c05;
                if ((DAT_018dd984 == 2) && (pcVar11 = DAT_018daa74, DAT_018daa70 != 0)) {
                  pcVar11 = DAT_018daa74 + (*(int *)(puVar12 + 8) - 1U & 0xfffffff8) + 8;
                }
                iVar5 = (**(code **)(puVar12 + 0x14))(pcVar11,DAT_018d9504);
                if (iVar5 == 0) goto LAB_0088e740;
              }
              else if (DAT_018d950c != '\x02') {
                cVar3 = FUN_0169ac90(&DAT_018d9504);
                if (cVar3 == '\0') goto LAB_0088e740;
                if (cVar3 != '\x02') goto LAB_0088e5bc;
              }
              if (*(int *)(DAT_018d9504 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01861e78);
              }
              local_64 = &local_48;
              local_54 = *(byte **)(DAT_018d9504 + 0x24);
              uStack_50 = *(undefined4 *)(DAT_018d9504 + 0x28);
              local_6c = (undefined4 *)(DAT_018d9504 + 0x1c);
              local_5c = (undefined *)*local_6c;
              local_68 = &local_5c;
              local_74 = &local_68;
              uStack_4c = 0;
              local_70 = 1;
              local_40 = (undefined1 *)0x1;
              local_30 = &local_74;
              local_60 = &DAT_018abb78;
              local_48 = (undefined4 **)&DAT_003449de;
              local_44 = (undefined1 *)0x3b;
              local_3c = (byte *)0x0;
              DataMemoryBarrier(0xb);
              pcVar11 = s_SetGloba_00414c05;
              puVar12 = &DAT_018ae394;
              if (DAT_018dd984 == 2) {
                pcVar11 = DAT_018daa74;
                puVar12 = DAT_018daa78;
                if (DAT_018daa70 != 0) {
                  pcVar11 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                }
              }
              local_58 = *(int *)(DAT_018d9504 + 0x20);
              local_2c = DAT_018d9504;
              iVar5 = (**(code **)(puVar12 + 0x28))(pcVar11,&local_40);
              if (iVar5 != 0) {
                (**(code **)(puVar12 + 0x2c))(pcVar11,&local_40);
              }
            }
          }
          else if ((DAT_018d9130 < 3) && (DAT_018d9518 != '\0')) {
            if (DAT_018d9518 == '\x01') {
LAB_0088e3b8:
              DataMemoryBarrier(0xb);
              puVar12 = DAT_018daa78;
              if (DAT_018dd984 != 2) {
                puVar12 = &DAT_018ae394;
              }
              pcVar11 = s_SetGloba_00414c05;
              if ((DAT_018dd984 == 2) && (pcVar11 = DAT_018daa74, DAT_018daa70 != 0)) {
                pcVar11 = DAT_018daa74 + (*(int *)(puVar12 + 8) - 1U & 0xfffffff8) + 8;
              }
              iVar5 = (**(code **)(puVar12 + 0x14))(pcVar11,DAT_018d9510);
              if (iVar5 == 0) goto LAB_0088e740;
            }
            else if (DAT_018d9518 != '\x02') {
              cVar3 = FUN_0169ac90(&DAT_018d9510);
              if (cVar3 == '\0') goto LAB_0088e740;
              if (cVar3 != '\x02') goto LAB_0088e3b8;
            }
            if (*(int *)(DAT_018d9510 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01861e88);
            }
            local_64 = &local_48;
            local_54 = *(byte **)(DAT_018d9510 + 0x24);
            uStack_50 = *(undefined4 *)(DAT_018d9510 + 0x28);
            local_6c = (undefined4 *)(DAT_018d9510 + 0x1c);
            local_5c = (undefined *)*local_6c;
            local_68 = &local_5c;
            local_74 = &local_68;
            uStack_4c = 0;
            local_70 = 1;
            local_40 = (undefined1 *)0x1;
            local_30 = &local_74;
            local_60 = &DAT_018abb78;
            local_48 = (undefined4 **)&DAT_003449fb;
            local_44 = (undefined1 *)0x5f;
            local_3c = (byte *)0x0;
            DataMemoryBarrier(0xb);
            pcVar11 = s_SetGloba_00414c05;
            puVar12 = &DAT_018ae394;
            if (DAT_018dd984 == 2) {
              pcVar11 = DAT_018daa74;
              puVar12 = DAT_018daa78;
              if (DAT_018daa70 != 0) {
                pcVar11 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
              }
            }
            local_58 = *(int *)(DAT_018d9510 + 0x20);
            local_2c = DAT_018d9510;
            iVar5 = (**(code **)(puVar12 + 0x28))(pcVar11,&local_40);
            if (iVar5 != 0) {
              (**(code **)(puVar12 + 0x2c))(pcVar11,&local_40);
            }
          }
LAB_0088e740:
          unaff_r9 = (undefined4 *)0x0;
          DataMemoryBarrier(0xb);
          if (DAT_018d8068 == 0) {
            piVar6 = (int *)FUN_009b9180(&DAT_018d7f60);
            iVar5 = *piVar6;
            puVar7 = (uint *)(iVar5 + 8);
            do {
              unaff_r9 = (undefined4 *)0x0;
              bVar2 = (bool)hasExclusiveAccess(puVar7);
            } while (!bVar2);
            *puVar7 = (uint)(bVar1 != 0);
            *(undefined4 *)(iVar5 + 0xc) = 0;
          }
        }
        *(undefined1 *)(param_1 + 0x31) = 1;
        bVar2 = false;
      }
      else {
        *(undefined1 *)(param_1 + 0x31) = 3;
        *local_88 = 3;
LAB_0088e008:
        bVar2 = true;
      }
      local_8c = param_1 + 0x28;
      if (bVar2) {
        *(undefined1 *)(param_1 + 0x20) = 4;
        return;
      }
      FUN_00886c98(local_8c);
      if (unaff_r9 != (undefined4 *)0x0) {
        local_80 = unaff_r9;
        if ((DAT_018d9130 < 5) && (DAT_018d9524 != '\0')) {
          if (DAT_018d9524 == '\x01') {
LAB_0088e11c:
            DataMemoryBarrier(0xb);
            puVar12 = DAT_018daa78;
            if (DAT_018dd984 != 2) {
              puVar12 = &DAT_018ae394;
            }
            pcVar11 = s_SetGloba_00414c05;
            if ((DAT_018dd984 == 2) && (pcVar11 = DAT_018daa74, DAT_018daa70 != 0)) {
              pcVar11 = DAT_018daa74 + (*(int *)(puVar12 + 8) - 1U & 0xfffffff8) + 8;
            }
            iVar5 = (**(code **)(puVar12 + 0x14))(pcVar11,DAT_018d951c);
            if (iVar5 == 0) goto LAB_0088e2a4;
          }
          else if (DAT_018d9524 != '\x02') {
            cVar3 = FUN_0169ac90(&DAT_018d951c);
            if (cVar3 == '\0') goto LAB_0088e2a4;
            if (cVar3 != '\x02') goto LAB_0088e11c;
          }
          if (*(int *)(DAT_018d951c + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01861eb8);
          }
          local_64 = &local_7c;
          local_54 = *(byte **)(DAT_018d951c + 0x24);
          uStack_50 = *(undefined4 *)(DAT_018d951c + 0x28);
          local_6c = (undefined4 *)(DAT_018d951c + 0x1c);
          local_5c = (undefined *)*local_6c;
          local_68 = &local_5c;
          local_74 = &local_68;
          uStack_4c = 0;
          local_70 = 1;
          local_40 = (undefined1 *)0x1;
          local_30 = &local_74;
          local_60 = &DAT_018abb78;
          local_78 = &local_48;
          local_48 = &local_80;
          local_7c = (undefined4 **)&DAT_00591f14;
          local_44 = &LAB_00604520;
          local_3c = (byte *)0x0;
          DataMemoryBarrier(0xb);
          pcVar11 = s_SetGloba_00414c05;
          puVar12 = &DAT_018ae394;
          if (DAT_018dd984 == 2) {
            pcVar11 = DAT_018daa74;
            puVar12 = DAT_018daa78;
            if (DAT_018daa70 != 0) {
              pcVar11 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
            }
          }
          local_58 = *(int *)(DAT_018d951c + 0x20);
          local_2c = DAT_018d951c;
          iVar5 = (**(code **)(puVar12 + 0x28))(pcVar11,&local_40);
          if (iVar5 != 0) {
            (**(code **)(puVar12 + 0x2c))(pcVar11,&local_40);
          }
        }
LAB_0088e2a4:
        (**(code **)*local_80)();
      }
    }
    uVar14 = 1;
    break;
  case 1:
                    /* WARNING: Does not return */
    pcVar10 = (code *)software_udf(0xfdee,0x88e804);
    (*pcVar10)();
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01861ea8);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x30)) {
    case 0:
      iVar5 = *(int *)(param_1 + 0x28);
      *(int *)(param_1 + 0x2c) = iVar5;
      goto LAB_0088e2d8;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01879154);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01879154);
    case 3:
      iVar5 = *(int *)(param_1 + 0x2c);
      goto LAB_0088e2d8;
    }
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x31)) {
    case 0:
      iVar5 = *(int *)(param_1 + 0x2c);
      goto LAB_0088de48;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01861e68);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01861e68);
    case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x41)) {
      case 0:
        uVar8 = *(undefined1 *)(param_1 + 0x40);
        iVar5 = *(int *)(param_1 + 0x3c);
        goto LAB_0088df98;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01861ed8);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01861ed8);
      case 3:
        uVar14 = *(undefined4 *)(param_1 + 0x34);
        goto LAB_0088dfd0;
      }
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x49)) {
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01861ec8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01861ec8);
    case 3:
      goto switchD_0088dca8_caseD_3;
    }
    puVar13 = *(undefined1 **)(param_1 + 0x40);
    if (-1 < (int)puVar13) {
      puVar15 = *(undefined1 **)(param_1 + 0x3c);
      uVar8 = *(undefined1 *)(param_1 + 0x48);
      iVar5 = *(int *)(*(int *)(param_1 + 0x44) + 4);
      iVar17 = *(int *)(iVar5 + 8);
      unaff_r9 = *(undefined4 **)(iVar5 + 0xc);
      if (puVar13 != (undefined1 *)0x0) goto LAB_0088de90;
      pbVar4 = &DAT_00000001;
      puVar13 = (undefined1 *)0x0;
      goto LAB_0088dea0;
    }
    uVar14 = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(uVar14,puVar13);
}

