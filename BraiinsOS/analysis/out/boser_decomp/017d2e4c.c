// FUN_017d2e4c @ 017d2e4c size=2812 calls_out=29 calls_in=1
// strings: reqwest::blocking::client | reqwest::blocking::client | reqwest::blocking::client | reqwest::blocking::client | assertion failed: self.inner.semaphore.is_idle() | reqwest::blocking::client

undefined4 FUN_017d2e4c(int param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined4 uVar10;
  int iVar11;
  undefined1 uVar12;
  uint uVar13;
  int *piVar14;
  int *unaff_r6;
  int *piVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined4 local_f34;
  undefined1 auStack_f20 [192];
  int *local_e60;
  int local_e5c;
  undefined1 auStack_e58 [196];
  undefined4 local_d94;
  undefined1 auStack_d90 [208];
  uint local_cc0;
  int local_cbc;
  undefined1 auStack_cb8 [424];
  undefined4 local_b10;
  undefined1 local_b04;
  uint *local_b00;
  undefined1 *local_afc;
  int local_af8;
  int local_af4;
  int *local_938;
  code *local_934;
  undefined4 *local_780;
  undefined1 auStack_778 [440];
  int *local_5c0;
  int local_5bc;
  int **local_5b8;
  undefined4 local_5b4;
  undefined *local_5b0;
  int *local_5a8;
  undefined4 local_598;
  undefined1 auStack_594 [156];
  undefined4 local_4f8;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0;
  int *local_3c8;
  int local_3c4;
  undefined1 auStack_3a8 [448];
  int *local_1e8 [112];
  undefined1 uStack_25;
  
  puVar4 = (undefined4 *)((uint)&local_5c0 | 0x10);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x1c4)) {
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d1ca6c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d1ca6c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x1c0)) {
    case 0:
      piVar5 = *(int **)(param_1 + 0x1b8);
      goto LAB_017d31cc;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d1f140);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d1f140);
    case 3:
      piVar5 = *(int **)(param_1 + 0x1bc);
      goto LAB_017d31d0;
    }
  }
  *(undefined2 *)(param_1 + 0x1c5) = 0x101;
  FUN_01bed4e2(&local_5c0,param_1,0x1a8);
  uVar17 = FUN_01785c7c(&local_5c0);
  if ((uVar17 & 1) == 0) {
    *(int *)(param_1 + 0x1b0) = (int)(uVar17 >> 0x20);
    *(undefined1 *)(param_1 + 0x1c6) = 0;
    uVar17 = FUN_017cccc8(*(undefined4 *)(param_1 + 0x1ac),0);
    iVar8 = (int)(uVar17 >> 0x20);
    if ((uVar17 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_1 + 0x1a8);
      *(undefined1 *)(param_1 + 0x1c5) = 0;
      while( true ) {
        *(undefined1 *)(param_1 + 0x1c0) = 0;
        piVar5 = (int *)(param_1 + 0x1b4);
        *(int **)(param_1 + 0x1b8) = piVar5;
LAB_017d31cc:
        *(int **)(param_1 + 0x1bc) = piVar5;
LAB_017d31d0:
        iVar8 = *piVar5;
        uVar6 = FUN_019ec670(param_2);
        uVar13 = 0;
        if ((uVar6 & 0xff) != 2) break;
LAB_017d3200:
        FUN_017c50ec(&local_5c0,iVar8 + 0x70,iVar8 + 0x20);
        if (((uint)local_5c0 & 7) == 3) {
          iVar11 = 0;
          piVar5 = (int *)&DAT_00000003;
          DataMemoryBarrier(0xb);
          if (1 < *(uint *)(iVar8 + 0x80)) {
            puVar9 = &DAT_01d2e18c;
LAB_017d3310:
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("assertion failed: self.inner.semaphore.is_idle()",0x30,puVar9);
          }
LAB_017d336c:
          uVar13 = 0;
        }
        else {
          if (local_5c0 != (int *)&SUB_00000004) {
            puVar16 = (uint *)(iVar8 + 0x80);
            DataMemoryBarrier(0xb);
            do {
              uVar13 = *puVar16;
              bVar2 = (bool)hasExclusiveAccess(puVar16);
            } while (!bVar2);
            *puVar16 = uVar13 - 2;
            piVar5 = local_5c0;
            iVar11 = local_5bc;
joined_r0x017d32d8:
            local_5c0 = piVar5;
            local_5bc = iVar11;
            if (uVar13 < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_0197a954();
            }
            FUN_01bed4e2(&local_938,&local_5b8,0xc0);
            local_f34 = local_4f8;
            goto LAB_017d336c;
          }
          FUN_019f79e0(iVar8 + 0x40,param_2);
          FUN_017c50ec(&local_5c0,iVar8 + 0x70,iVar8 + 0x20);
          if (((uint)local_5c0 & 7) == 3) {
            iVar11 = 0;
            piVar5 = (int *)&DAT_00000003;
            DataMemoryBarrier(0xb);
            if (1 < *(uint *)(iVar8 + 0x80)) {
              puVar9 = &DAT_01d2e17c;
              goto LAB_017d3310;
            }
            goto LAB_017d336c;
          }
          if (local_5c0 != (int *)&SUB_00000004) {
            puVar16 = (uint *)(iVar8 + 0x80);
            DataMemoryBarrier(0xb);
            do {
              uVar13 = *puVar16;
              bVar2 = (bool)hasExclusiveAccess(puVar16);
            } while (!bVar2);
            *puVar16 = uVar13 - 2;
            piVar5 = local_5c0;
            iVar11 = local_5bc;
            goto joined_r0x017d32d8;
          }
          iVar11 = 0;
          piVar5 = (int *)&SUB_00000004;
          if ((*(char *)(iVar8 + 0x7c) == '\x01') &&
             (DataMemoryBarrier(0xb), *(uint *)(iVar8 + 0x80) < 2)) {
            piVar5 = (int *)&DAT_00000003;
            uVar13 = 0;
          }
        }
        FUN_019edbc4(uVar13,unaff_r6);
        uVar12 = 1;
        if (piVar5 == (int *)&SUB_00000004 && iVar11 == 0) {
          uVar12 = 3;
        }
        *(undefined1 *)(param_1 + 0x1c0) = uVar12;
        if (piVar5 == (int *)&SUB_00000004 && iVar11 == 0) goto LAB_017d35b8;
        FUN_01bed4e2(auStack_f20,&local_938,0xc0);
        if (piVar5 == (int *)&DAT_00000003 && iVar11 == 0) {
          if (4 < DAT_01d51b00) {
            uVar18 = thunk_FUN_01bee35a(DAT_01d51b00,0x240);
            uVar13 = *(uint *)((int)uVar18 + (int)((ulonglong)uVar18 >> 0x20));
            if (uVar13 < 3) {
              piVar5 = (int *)FUN_019b03e8();
            }
            else {
              piVar5 = (int *)(uVar13 - 8);
              do {
                iVar8 = *piVar5;
                bVar2 = (bool)hasExclusiveAccess(piVar5);
              } while (!bVar2);
              *piVar5 = iVar8 + 1;
              if (iVar8 < 0) {
LAB_017d3a30:
                    /* WARNING: Does not return */
                pcVar1 = (code *)software_udf(0xfdee,0x17d3a30);
                (*pcVar1)();
              }
            }
            local_af8 = piVar5[2];
            local_af4 = piVar5[3];
            local_934 = FUN_01203168;
            local_938 = &local_af8;
            local_5b0 = &DAT_01d1ca8c;
            local_5b4 = 0x19;
            local_5b8 = (int **)0x50c15b;
            local_5bc = 0x19;
            local_5c0 = (int *)0x50c15b;
            FUN_0193b350(&DAT_005871b3,&local_938,5,&local_5c0);
            DataMemoryBarrier(0xb);
            do {
              iVar8 = *piVar5;
              bVar2 = (bool)hasExclusiveAccess(piVar5);
            } while (!bVar2);
            *piVar5 = iVar8 + -1;
            if (iVar8 == 1) {
              DataMemoryBarrier(0xb);
              FUN_019a2ffc(piVar5);
            }
          }
          FUN_017cbd88(param_1 + 0x1b4);
          piVar5 = *(int **)(param_1 + 0x1b0);
          DataMemoryBarrier(0xb);
          do {
            iVar8 = *piVar5;
            bVar2 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar2);
          *piVar5 = iVar8 + -1;
          uVar10 = 0;
          uVar12 = 1;
          if (iVar8 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01784968(*(undefined4 *)(param_1 + 0x1b0));
          }
          goto LAB_017d3080;
        }
        local_e60 = piVar5;
        local_e5c = iVar11;
        FUN_01bed4e2(auStack_e58,auStack_f20,0xc0);
        local_d94 = local_f34;
        FUN_0178234c(auStack_d90,*(undefined4 *)(param_1 + 0x1b0),&local_e60);
        do {
          do {
            local_cc0 = DAT_01d50470;
            local_cbc = DAT_01d50474;
            uVar13 = DAT_01d50470 + 1;
            iVar8 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
            bVar2 = (bool)hasExclusiveAccess(0x1d50470);
          } while (!bVar2);
          bVar2 = DAT_01d50470 == 0;
          bVar3 = DAT_01d50474 == 0;
          DAT_01d50470 = uVar13;
          DAT_01d50474 = iVar8;
        } while (bVar2 && bVar3);
        FUN_01bed4e2(auStack_cb8,auStack_d90,0xd0);
        local_afc = &uStack_25;
        local_b00 = &local_cc0;
        uVar18 = thunk_FUN_01bee35a(local_b00,0x20);
        puVar16 = (uint *)((int)uVar18 + (int)((ulonglong)uVar18 >> 0x20));
        local_b04 = 0;
        local_b10 = local_f34;
        if ((char)puVar16[0xe] != '\x01') {
          if ((char)puVar16[0xe] == '\x02') {
            uVar12 = 1;
            FUN_017ca070(auStack_cb8);
            goto LAB_017d3478;
          }
          FUN_019a2bcc(puVar16,&LAB_019efb68);
          *(undefined1 *)(puVar16 + 0xe) = 1;
        }
        FUN_01bed4e2(&local_af8,auStack_cb8,0x1c0);
        if (0x7ffffffe < *puVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_0130701c(&DAT_01d2e14c);
        }
        *puVar16 = *puVar16 + 1;
        uVar13 = puVar16[1];
        FUN_01bed4e2(&local_938,auStack_cb8,0x1c0);
        if (uVar13 == 2) {
          FUN_017ca070(&local_938);
          uVar12 = 0;
          *puVar16 = *puVar16 - 1;
LAB_017d3478:
          local_5c0 = (int *)CONCAT31(local_5c0._1_3_,uVar12);
                    /* WARNING: Subroutine does not return */
          FUN_0068d4ec(&local_5c0,&DAT_01d1ca7c);
        }
        FUN_01bed4e2(auStack_778,auStack_cb8,0x1b8);
        piVar5 = (int *)*local_780;
        iVar11 = local_780[1];
        if ((uVar13 & 1) == 0) {
          unaff_r6 = (int *)puVar16[2];
          do {
            iVar8 = *unaff_r6;
            bVar2 = (bool)hasExclusiveAccess(unaff_r6);
          } while (!bVar2);
          *unaff_r6 = iVar8 + 1;
          if (iVar8 < 0) goto LAB_017d3a30;
          piVar14 = (int *)unaff_r6[0x82];
          iVar8 = param_1;
          if (piVar14 != (int *)0x0) {
            do {
              iVar8 = *piVar14;
              bVar2 = (bool)hasExclusiveAccess(piVar14);
            } while (!bVar2);
            *piVar14 = iVar8 + 1;
            if (iVar8 < 0) goto LAB_017d3a30;
            iVar8 = unaff_r6[0x83];
          }
          FUN_01bed4e2((uint)local_1e8 | 4,auStack_778,0x1b8);
          FUN_01bed4e2(auStack_3a8,local_1e8,0x1bc);
          local_598 = 0;
          FUN_01bed4e2(auStack_594,auStack_3a8,0x1bc);
          local_5b8 = (int **)&PTR_LAB_01d1c328;
          local_5c0 = (int *)0xcc;
          puVar4[4] = piVar5;
          puVar4[5] = iVar11;
          *puVar4 = 0;
          puVar4[1] = 0;
          local_5bc = 0;
          local_3d0 = 0;
          local_3d4 = 0;
          local_3d8 = 0;
          local_1e8[0] = (int *)0x0;
          local_5a8 = unaff_r6;
          local_3c8 = piVar14;
          local_3c4 = iVar8;
          iVar8 = FUN_01be5878(local_1e8,0x20,0x200);
          piVar14 = local_1e8[0];
          if ((iVar8 != 0) || (local_1e8[0] == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(0x20,0x200);
          }
          FUN_01bed4e2(local_1e8[0],&local_5c0,0x200);
          iVar8 = FUN_01816510(unaff_r6 + 0x40,piVar14,piVar14);
          local_5c0 = piVar5;
          local_5bc = iVar11;
          if (unaff_r6[0x80] != 0) {
            (**(code **)(unaff_r6[0x81] + 0x14))
                      (unaff_r6[0x80] + (*(int *)(unaff_r6[0x81] + 8) - 1U & 0xfffffff8) + 8,
                       &local_5c0);
          }
          if (iVar8 != 0) {
            FUN_019dc904(puVar16[2],iVar8);
          }
        }
        else {
          piVar15 = (int *)puVar16[2];
          do {
            iVar7 = *piVar15;
            bVar2 = (bool)hasExclusiveAccess(piVar15);
          } while (!bVar2);
          *piVar15 = iVar7 + 1;
          if (iVar7 < 0) goto LAB_017d3a30;
          unaff_r6 = (int *)piVar15[0x50];
          if (unaff_r6 != (int *)0x0) {
            do {
              iVar8 = *unaff_r6;
              bVar2 = (bool)hasExclusiveAccess(unaff_r6);
            } while (!bVar2);
            *unaff_r6 = iVar8 + 1;
            if (iVar8 < 0) goto LAB_017d3a30;
            iVar8 = piVar15[0x51];
          }
          FUN_01bed4e2((uint)local_1e8 | 4,auStack_778,0x1b8);
          FUN_01bed4e2(auStack_3a8,local_1e8,0x1bc);
          local_598 = 0;
          FUN_01bed4e2(auStack_594,auStack_3a8,0x1bc);
          local_5bc = 0;
          local_3d0 = 0;
          *puVar4 = 0;
          puVar4[1] = 0;
          local_3d4 = 0;
          local_3d8 = 0;
          local_1e8[0] = (int *)0x0;
          local_5b8 = (int **)&PTR_LAB_01d1c3f0;
          puVar4[4] = piVar5;
          puVar4[5] = iVar11;
          local_5c0 = (int *)0xcc;
          local_5a8 = piVar15;
          local_3c8 = unaff_r6;
          local_3c4 = iVar8;
          iVar8 = FUN_01be5878(local_1e8,0x20,0x200);
          piVar14 = local_1e8[0];
          if ((iVar8 != 0) || (local_1e8[0] == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(0x20,0x200);
          }
          FUN_01bed4e2(local_1e8[0],&local_5c0,0x200);
          iVar8 = FUN_0181628c(piVar15 + 0x14,piVar14,piVar14);
          local_5c0 = piVar5;
          local_5bc = iVar11;
          if (piVar15[0x4e] != 0) {
            (**(code **)(piVar15[0x4f] + 0x14))
                      (piVar15[0x4e] + (*(int *)(piVar15[0x4f] + 8) - 1U & 0xfffffff8) + 8,
                       &local_5c0);
          }
          if (iVar8 != 0) {
            local_1e8[0] = (int *)((uint)local_1e8[0] & 0xffffff00);
            local_5c0 = piVar15 + 2;
            local_5bc = iVar8;
            local_5b8 = local_1e8;
            FUN_019ee860(&local_5c0);
          }
        }
        *puVar16 = *puVar16 - 1;
        if (*piVar14 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar2 = (bool)hasExclusiveAccess(piVar14);
          if (!bVar2) goto LAB_017d39d8;
          *piVar14 = 0x84;
        }
        else {
          ClearExclusiveLocal();
LAB_017d39d8:
          (**(code **)(piVar14[2] + 0x10))(piVar14);
        }
      }
      unaff_r6 = (int *)((uVar6 & 0xffffff) >> 0x10);
      uVar13 = (uVar6 & 0xffffff) >> 8;
      if ((uVar6 & 1) == 0) goto LAB_017d3200;
      *(undefined1 *)(param_1 + 0x1c0) = 3;
LAB_017d35b8:
      uVar10 = 1;
      uVar12 = 3;
      goto LAB_017d3080;
    }
    local_af8 = iVar8;
    if (DAT_01d51b00 != 0) {
      local_938 = &local_af8;
      local_934 = FUN_017d26c0;
      local_5b0 = &DAT_01d1ca4c;
      local_5b4 = 0x19;
      local_5b8 = (int **)0x50c15b;
      local_5bc = 0x19;
      local_5c0 = (int *)0x50c15b;
      FUN_0193b350(&DAT_005b5343,&local_938,1,&local_5c0);
    }
    if (local_af8 != 0) {
      FUN_017c21dc(local_af8);
    }
    piVar5 = *(int **)(param_1 + 0x1b0);
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01784968(*(undefined4 *)(param_1 + 0x1b0));
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x1c6) = 0;
    uVar17 = FUN_017cccc8(*(undefined4 *)(param_1 + 0x1ac));
    iVar8 = (int)(uVar17 >> 0x20);
    if ((uVar17 & 1) != 0) {
      local_af8 = iVar8;
      if (DAT_01d51b00 != 0) {
        local_938 = &local_af8;
        local_934 = FUN_017d26c0;
        local_5b0 = &DAT_01d1ca5c;
        local_5b4 = 0x19;
        local_5b8 = (int **)0x50c15b;
        local_5bc = 0x19;
        local_5c0 = (int *)0x50c15b;
        FUN_0193b350(&DAT_00596e89,&local_938,1,&local_5c0);
      }
      if (local_af8 != 0) {
        FUN_017c21dc(local_af8);
      }
    }
  }
  FUN_017cbd88(param_1 + 0x1a8);
  uVar10 = 0;
  uVar12 = 1;
LAB_017d3080:
  *(undefined1 *)(param_1 + 0x1c4) = uVar12;
  return uVar10;
}

