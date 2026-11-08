// FUN_0163f3e0 @ 0163f3e0 size=2724 calls_out=18 calls_in=0
// strings: task was cancelled | task panicked | assertion failed: inner.last_write_err.is_none()

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0163f3e0(uint *param_1,int param_2,undefined4 param_3,int *param_4)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 ****ppppuVar5;
  undefined **ppuVar6;
  undefined1 uVar7;
  int *piVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  char *pcVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  int *piVar21;
  uint uVar22;
  int *piVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  undefined *puVar28;
  undefined4 *puVar29;
  int *piVar30;
  ulonglong uVar31;
  int *local_fc;
  undefined4 ****local_e0;
  code *local_dc;
  undefined **local_d8;
  undefined4 local_d4;
  int local_d0;
  undefined4 *local_cc;
  int *local_c8;
  int *local_c4;
  uint *local_c0;
  undefined4 local_bc;
  uint local_b8;
  int iStack_b4;
  undefined4 local_b0;
  undefined4 ***local_ac;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  uint *local_78;
  undefined4 local_74;
  uint ***local_48;
  undefined1 uStack_44;
  undefined2 local_43;
  undefined1 local_41;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_28;
  
  piVar8 = (int *)((uint)&local_48 | 4);
  puVar9 = (uint *)(param_2 + 0x20);
LAB_0163f474:
  while (iVar26 = *(int *)(param_2 + 0x18), iVar26 != -0x7fffffff) {
    *(undefined4 *)(param_2 + 0x18) = 0x80000000;
    if (iVar26 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018ac87c);
    }
    iVar27 = *(int *)(param_2 + 0x1c);
    uVar24 = *(uint *)(param_2 + 0x20);
    uVar25 = *(uint *)(param_2 + 0x24);
    uVar20 = param_4[1];
    uVar10 = param_4[2];
    if (uVar24 != uVar25) {
      uVar16 = uVar24 - uVar25;
      if (uVar20 - uVar10 < uVar24 - uVar25) {
        uVar16 = uVar20 - uVar10;
      }
      if (uVar24 < uVar25) {
        puVar28 = &DAT_018ac77c;
        uVar22 = uVar24;
        goto LAB_0163ff2c;
      }
LAB_0163fbe0:
      uVar22 = uVar16 + uVar10;
      puVar28 = &DAT_018ac78c;
      if ((uVar22 < uVar10) || (uVar20 < uVar22)) {
        uVar24 = uVar20;
        uVar25 = uVar10;
LAB_0163ff2c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar25,uVar22,uVar24,puVar28);
      }
      FUN_016dd1aa(*param_4 + uVar10,iVar27 + uVar25);
      param_4[2] = uVar22;
      uVar10 = *(uint *)(param_2 + 0x18);
      if ((uint)param_4[3] < uVar22) {
        param_4[3] = uVar22;
      }
      uVar16 = uVar16 + uVar25;
      if (uVar16 == uVar24) {
        uVar24 = 0;
        uVar16 = 0;
      }
      if ((uVar10 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x1c));
      }
      *(int *)(param_2 + 0x1c) = iVar27;
      uVar7 = 4;
      *(int *)(param_2 + 0x18) = iVar26;
      *(uint *)(param_2 + 0x20) = uVar24;
      *(uint *)(param_2 + 0x24) = uVar16;
LAB_0163fc68:
      *(undefined1 *)param_1 = uVar7;
      return;
    }
    if (uVar20 == uVar10) {
      uVar16 = 0;
      uVar10 = uVar20;
      uVar25 = uVar24;
      goto LAB_0163fbe0;
    }
    piVar21 = *(int **)(param_2 + 0x3c);
    do {
      iVar17 = *piVar21;
      bVar2 = (bool)hasExclusiveAccess(piVar21);
    } while (!bVar2);
    *piVar21 = iVar17 + 1;
    if (iVar17 < 0) goto LAB_0163ff80;
    iVar17 = *(int *)(param_2 + 0x3c);
    uVar25 = uVar20 - uVar10;
    if (*(uint *)(param_2 + 0x38) < uVar20 - uVar10) {
      uVar25 = *(uint *)(param_2 + 0x38);
    }
    uVar31 = FUN_0164ec90(&DAT_018ac88c);
    piVar21 = (int *)(uVar31 >> 0x20);
    do {
      do {
        iVar4 = DAT_018d9204;
        uVar10 = DAT_018d9200;
        uVar20 = DAT_018d9200 + 1;
        iVar14 = DAT_018d9204 + (uint)(0xfffffffe < DAT_018d9200);
        bVar2 = (bool)hasExclusiveAccess(0x18d9200);
      } while (!bVar2);
      bVar2 = DAT_018d9200 == 0;
      bVar3 = DAT_018d9204 == 0;
      DAT_018d9200 = uVar20;
      DAT_018d9204 = iVar14;
    } while (bVar2 && bVar3);
    iVar14 = 0x248;
    if ((uVar31 & 1) == 0) {
      piVar30 = piVar21 + 0x60;
      if ((char)*piVar30 == '\0') {
        bVar2 = (bool)hasExclusiveAccess(piVar30);
        if (!bVar2) goto LAB_0163f708;
        *(char *)piVar30 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_0163f708:
        FUN_01280da8(piVar30);
      }
      FUN_0128236c(piVar30);
      piVar21[0x6a] = piVar21[0x6a] + 1;
      FUN_01282570(piVar30);
      if ((char)*piVar30 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(piVar30);
          if (bVar2) {
            *(char *)piVar30 = '\0';
            uVar19 = extraout_r3_00;
            goto LAB_0163f760;
          }
        } while ((char)*piVar30 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_01280a5c(piVar30);
      uVar19 = extraout_r3_01;
LAB_0163f760:
      do {
        iVar11 = *piVar21;
        bVar2 = (bool)hasExclusiveAccess(piVar21);
      } while (!bVar2);
      *piVar21 = iVar11 + 1;
      if (iVar11 < 0) goto LAB_0163ff80;
      piVar30 = (int *)0x0;
      iVar11 = 0x230;
    }
    else {
      iVar14 = 0x178;
      do {
        iVar11 = *piVar21;
        bVar2 = (bool)hasExclusiveAccess(piVar21);
      } while (!bVar2);
      *piVar21 = iVar11 + 1;
      if (iVar11 < 0) goto LAB_0163ff80;
      piVar30 = (int *)&DAT_00000001;
      iVar11 = 0x168;
      uVar19 = extraout_r3;
    }
    piVar12 = *(int **)((int)piVar21 + iVar11 + 8);
    if (piVar12 == (int *)0x0) {
      puVar15 = (uint *)0x0;
    }
    else {
      do {
        iVar18 = *piVar12;
        bVar2 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar2);
      *piVar12 = iVar18 + 1;
      if (iVar18 < 0) {
LAB_0163ff80:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x163ff80);
        (*pcVar1)();
      }
      puVar15 = *(uint **)((int)piVar21 + iVar11 + 8);
      uVar19 = *(undefined4 *)((int)piVar21 + iVar11 + 0xc);
      do {
        uVar20 = *puVar15;
        bVar2 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar2);
      *puVar15 = uVar20 + 1;
      if (0x7fffffff < uVar20) goto LAB_0163ff80;
    }
    *piVar8 = iVar26;
    piVar8[1] = iVar27;
    piVar8[2] = uVar24;
    piVar8[3] = uVar24;
    piVar8[4] = iVar17;
    piVar8[5] = uVar25;
    *(undefined4 *)((uint)&local_e0 | 0x10) = 0;
    ((undefined4 *)((uint)&local_e0 | 0x10))[1] = 0;
    local_b8 = uVar10;
    iStack_b4 = iVar4;
    local_dc = (code *)0x0;
    local_d8 = &PTR_LAB_018ace44;
    local_b0 = 0;
    local_e0 = (undefined4 ****)0xcc;
    local_ac = local_48;
    uStack_a4 = uStack_40;
    local_a0 = local_3c;
    uStack_9c = uStack_38;
    uStack_98 = uStack_34;
    uStack_94 = uStack_30;
    local_80 = 0;
    local_84 = 0;
    local_88 = 0;
    local_28 = 0;
    local_c8 = piVar30;
    local_c4 = piVar21;
    local_c0 = puVar15;
    local_bc = uVar19;
    local_78 = puVar15;
    local_74 = uVar19;
    iVar27 = FUN_016d51b0(&local_28,0x20,0x80);
    iVar26 = local_28;
    if ((iVar27 != 0) || (local_28 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x80);
    }
    FUN_016dd1aa(local_28,&local_e0,0x80);
    FUN_0164f1a8(&local_e0,*(undefined4 *)((int)piVar21 + iVar14),iVar26,1,uVar31);
    if (((uint)local_e0 & 0xfe) != 4) {
      uStack_44 = SUB41(local_dc,0);
      local_41 = (undefined1)((uint)local_dc >> 0x18);
      local_43 = (undefined2)((uint)local_dc >> 8);
      local_48 = (uint ***)local_e0;
      local_dc = FUN_015ef5b4;
      local_e0 = &local_48;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00582d59,&local_e0,&DAT_018ac88c);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar27 = *piVar21;
      bVar2 = (bool)hasExclusiveAccess(piVar21);
    } while (!bVar2);
    *piVar21 = iVar27 + -1;
    if ((int)uVar31 == 0) {
      if (iVar27 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01659344(piVar21);
      }
    }
    else if (iVar27 == 1) {
      DataMemoryBarrier(0xb);
      FUN_016586fc(piVar21);
    }
    iVar27 = *(int *)(param_2 + 0x18);
    if (iVar27 != -0x80000000) {
      if (iVar27 == -0x7fffffff) {
        piVar21 = *(int **)(param_2 + 0x1c);
        if (*piVar21 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar2 = (bool)hasExclusiveAccess(piVar21);
          if (bVar2) {
            *piVar21 = 0x84;
            goto LAB_0163f468;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        (**(code **)(piVar21[2] + 0x10))();
      }
      else if (iVar27 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x1c));
      }
    }
LAB_0163f468:
    *(undefined4 *)(param_2 + 0x18) = 0x80000001;
    *(int *)(param_2 + 0x1c) = iVar26;
  }
  FUN_016626bc(&local_e0,*(undefined4 *)(param_2 + 0x1c),param_3);
  piVar21 = local_c4;
  piVar30 = local_c8;
  puVar29 = local_cc;
  iVar26 = local_d0;
  uVar19 = local_d4;
  ppuVar6 = local_d8;
  pcVar1 = local_dc;
  ppppuVar5 = local_e0;
  if (local_e0 == (undefined4 ****)0x5) {
    uVar7 = 5;
    goto LAB_0163fc68;
  }
  if (local_e0 == (undefined4 ****)0x4) {
    uVar19 = 0xd;
    pcVar13 = "task panicked";
    if (local_d0 == 0) {
      uVar19 = 0x12;
      pcVar13 = "task was cancelled";
    }
    FUN_015e79d4(param_1,0x28,pcVar13,uVar19);
    if (local_d0 == 0) {
      return;
    }
    if ((code *)*local_cc != (code *)0x0) {
      (*(code *)*local_cc)(local_d0);
    }
    if (local_cc[1] == 0) {
      return;
    }
    thunk_FUN_016d3fb4(local_d0);
    return;
  }
  iVar27 = (int)local_e0 - 2;
  if (local_e0 < (uint ***)0x2) {
    iVar27 = 2;
  }
  local_fc = local_c4;
  if (iVar27 == 1) {
    uVar24 = (uint)local_dc & 0xff;
    if (uVar24 == 4) {
      if (local_c8 != local_c4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00565a70,0x20,&DAT_018ac8ac);
      }
      iVar27 = *(int *)(param_2 + 0x18);
      if (iVar27 != -0x80000000) {
        if (iVar27 == -0x7fffffff) {
          piVar12 = *(int **)(param_2 + 0x1c);
          if (*piVar12 == 0xcc) {
            DataMemoryBarrier(0xb);
            bVar2 = (bool)hasExclusiveAccess(piVar12);
            if (bVar2) {
              *piVar12 = 0x84;
              goto LAB_0163fa9c;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          (**(code **)(piVar12[2] + 0x10))();
        }
        else if (iVar27 != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x1c));
        }
      }
LAB_0163fa9c:
      *(int *)(param_2 + 0x18) = iVar26;
      *(undefined4 **)(param_2 + 0x1c) = puVar29;
      *puVar9 = (uint)piVar30;
      *(int **)(param_2 + 0x24) = piVar21;
      goto LAB_0163f474;
    }
    if (*(char *)(param_2 + 0x30) != '*') {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: inner.last_write_err.is_none()",0x30,&DAT_018ac8bc);
    }
    uVar7 = (undefined1)((uint)local_dc >> 8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar24) {
    case 0:
      uVar7 = FUN_005bc530(local_d8);
      iVar27 = *(int *)(param_2 + 0x18);
      *(undefined1 *)(param_2 + 0x30) = uVar7;
      break;
    default:
      uVar7 = *(undefined1 *)(local_d8 + 2);
    case 1:
      iVar27 = *(int *)(param_2 + 0x18);
      *(undefined1 *)(param_2 + 0x30) = uVar7;
    }
    if (iVar27 != -0x80000000) {
      if (iVar27 == -0x7fffffff) {
        piVar12 = *(int **)(param_2 + 0x1c);
        if (*piVar12 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar2 = (bool)hasExclusiveAccess(piVar12);
          if (bVar2) {
            *piVar12 = 0x84;
            goto code_r0x0163fad0;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        (**(code **)(piVar12[2] + 0x10))();
      }
      else if (iVar27 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x1c));
      }
    }
code_r0x0163fad0:
    *(int *)(param_2 + 0x18) = iVar26;
    *(undefined4 **)(param_2 + 0x1c) = puVar29;
    *puVar9 = (uint)piVar30;
    *(int **)(param_2 + 0x24) = piVar21;
    if (uVar24 != 3) goto LAB_0163f474;
    puVar28 = *ppuVar6;
    puVar29 = (undefined4 *)ppuVar6[1];
    if ((code *)*puVar29 != (code *)0x0) {
      (*(code *)*puVar29)(puVar28);
    }
  }
  else {
    if (iVar27 != 2) {
      if (((uint)local_dc & 0xff) == 4) {
        piVar8 = (int *)param_4[1];
        piVar12 = (int *)param_4[2];
        uVar24 = (int)local_c8 - (int)local_c4;
        if ((uint)((int)piVar8 - (int)piVar12) < (uint)((int)local_c8 - (int)local_c4)) {
          uVar24 = (int)piVar8 - (int)piVar12;
        }
        if (local_c8 < local_c4) {
          puVar28 = &DAT_018ac77c;
          piVar23 = local_c8;
          piVar8 = local_c8;
        }
        else {
          piVar23 = (int *)(uVar24 + (int)piVar12);
          puVar28 = &DAT_018ac78c;
          if ((piVar12 <= piVar23) && (piVar23 <= piVar8)) {
            FUN_016dd1aa((undefined1 *)(*param_4 + (int)piVar12),
                         (undefined1 *)((int)local_cc + (int)local_c4),uVar24);
            if ((int *)param_4[3] < piVar23) {
              param_4[3] = (int)piVar23;
            }
            param_4[2] = (int)piVar23;
            piVar21 = (int *)(uVar24 + (int)piVar21);
            iVar26 = *(int *)(param_2 + 0x18);
            if (piVar21 == piVar30) {
              uVar24 = 0;
              piVar21 = (int *)0x0;
            }
            else {
              uVar24 = (uint)piVar30 & 0x7fffffff;
            }
            if (iVar26 != -0x80000000) {
              if (iVar26 == -0x7fffffff) {
                piVar8 = *(int **)(param_2 + 0x1c);
                if (*piVar8 == 0xcc) {
                  DataMemoryBarrier(0xb);
                  bVar2 = (bool)hasExclusiveAccess(piVar8);
                  if (bVar2) {
                    *piVar8 = 0x84;
                    goto LAB_0163fe24;
                  }
                }
                else {
                  ClearExclusiveLocal();
                }
                (**(code **)(piVar8[2] + 0x10))();
              }
              else if (iVar26 != 0) {
                thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x1c));
              }
            }
LAB_0163fe24:
            *(int *)(param_2 + 0x18) = local_d0;
            *(undefined4 **)(param_2 + 0x1c) = local_cc;
            *(undefined1 *)param_1 = 4;
            *puVar9 = uVar24;
            *(int **)(param_2 + 0x24) = piVar21;
            return;
          }
          local_fc = piVar12;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(local_fc,piVar23,piVar8,puVar28);
      }
      if (local_c8 != local_c4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00565a70,0x20,&DAT_018ac89c);
      }
      iVar26 = *(int *)(param_2 + 0x18);
      if (iVar26 != -0x80000000) {
        if (iVar26 == -0x7fffffff) {
          piVar8 = *(int **)(param_2 + 0x1c);
          if (*piVar8 == 0xcc) {
            DataMemoryBarrier(0xb);
            bVar2 = (bool)hasExclusiveAccess(piVar8);
            if (bVar2) {
              *piVar8 = 0x84;
              goto LAB_0163fdd8;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          (**(code **)(piVar8[2] + 0x10))();
        }
        else if (iVar26 != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x1c));
        }
      }
LAB_0163fdd8:
      *(int *)(param_2 + 0x18) = local_d0;
      *(undefined4 **)(param_2 + 0x1c) = local_cc;
      *param_1 = (uint)pcVar1;
      param_1[1] = (uint)ppuVar6;
      *puVar9 = (uint)piVar30;
      *(int **)(param_2 + 0x24) = piVar21;
      return;
    }
    if (local_c8 != local_c4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00565a70,0x20,&DAT_018ac8cc);
    }
    iVar27 = *(int *)(param_2 + 0x18);
    if (iVar27 != -0x80000000) {
      if (iVar27 == -0x7fffffff) {
        piVar12 = *(int **)(param_2 + 0x1c);
        if (*piVar12 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar2 = (bool)hasExclusiveAccess(piVar12);
          if (bVar2) {
            *piVar12 = 0x84;
            goto LAB_0163fa08;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        (**(code **)(piVar12[2] + 0x10))();
      }
      else if (iVar27 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x1c));
      }
    }
LAB_0163fa08:
    *(int *)(param_2 + 0x18) = iVar26;
    *(undefined4 **)(param_2 + 0x1c) = puVar29;
    *puVar9 = (uint)piVar30;
    *(int **)(param_2 + 0x24) = piVar21;
    if (((uint)ppppuVar5 & 1) == 0) {
      *(undefined ***)(param_2 + 0x28) = ppuVar6;
      *(undefined4 *)(param_2 + 0x2c) = uVar19;
      goto LAB_0163f474;
    }
    if (((uint)pcVar1 & 0xff) != 3) goto LAB_0163f474;
    puVar28 = *ppuVar6;
    puVar29 = (undefined4 *)ppuVar6[1];
    if ((code *)*puVar29 != (code *)0x0) {
      (*(code *)*puVar29)(puVar28);
    }
  }
  if (puVar29[1] != 0) {
    thunk_FUN_016d3fb4(puVar28);
  }
  thunk_FUN_016d3fb4(ppuVar6);
  goto LAB_0163f474;
}

