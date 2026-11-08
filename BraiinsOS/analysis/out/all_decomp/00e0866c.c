// FUN_00e0866c @ 00e0866c size=4052 calls_out=39 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage | SetGloba | SetGloba | lDefaultError | Payload buffer is full. | lDefaultError

int FUN_00e0866c(int param_1,int *param_2)

{
  code *pcVar1;
  byte bVar2;
  uint *puVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  int *piVar16;
  int iVar17;
  bool bVar18;
  bool bVar19;
  char *pcVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 *puVar25;
  uint *puVar26;
  byte *pbVar27;
  int iVar28;
  undefined1 uVar29;
  undefined4 uVar30;
  uint *puVar31;
  undefined *puVar32;
  bool bVar33;
  undefined8 uVar34;
  int *local_544;
  undefined4 local_4f0;
  uint local_4e8;
  uint local_4e4;
  int *local_4e0;
  undefined1 auStack_4dc [4];
  undefined4 ***local_4d8;
  int local_4d4;
  undefined1 auStack_1f0 [200];
  uint local_128;
  uint local_124;
  undefined1 auStack_120 [200];
  undefined4 **local_58;
  undefined4 local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  char **local_48;
  undefined *local_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  char *local_2c;
  undefined4 local_28;
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("internal error: entered unreachable code: unexpected stage",0x75,&DAT_018ace94);
  }
  uVar34 = thunk_FUN_016de0ee(0,0x40);
  iVar28 = (int)uVar34 + (int)((ulonglong)uVar34 >> 0x20);
  uVar23 = *(undefined4 *)(param_1 + 8);
  uVar24 = *(undefined4 *)(param_1 + 0xc);
  if (*(char *)(iVar28 + 0x38) == '\x01') {
LAB_00e086f0:
    uVar30 = *(undefined4 *)(iVar28 + 0x18);
    local_4f0 = *(undefined4 *)(iVar28 + 0x1c);
    cVar5 = '\x01';
    *(undefined4 *)(iVar28 + 0x18) = uVar23;
    *(undefined4 *)(iVar28 + 0x1c) = uVar24;
  }
  else {
    if (*(char *)(iVar28 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar28,FUN_01655ec4);
      *(undefined1 *)(iVar28 + 0x38) = 1;
      goto LAB_00e086f0;
    }
    uVar30 = 0;
    local_4f0 = 0;
    cVar5 = '\x02';
  }
  puVar26 = (uint *)(param_1 + 0x18);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x302)) {
  case 0:
    pbVar27 = (byte *)(param_1 + 0x300);
    pbVar27[0] = 0;
    pbVar27[1] = 0;
    iVar12 = *(int *)(param_1 + 0x2fc);
    uVar6 = *(uint *)(iVar12 + 8);
    DataMemoryBarrier(0xb);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x2f0);
    *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x2f8) + 8;
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x2f4);
    *(uint **)(param_1 + 0x2ec) = puVar26;
    *(undefined1 *)(param_1 + 0x2e0) = 0;
    *(undefined4 *)(param_1 + 0x2dc) = 0;
    *(undefined1 *)(param_1 + 0x11e) = 0;
    cVar5 = *(char *)(iVar28 + 0x38);
    *(int **)(param_1 + 0x2c0) = (int *)(param_1 + 0x2fc);
    *(int *)(param_1 + 0x2c4) = iVar12 + 8;
    *(uint *)(param_1 + 0x2c8) = uVar6 >> 2;
    *(undefined4 *)(param_1 + 0x2cc) = 0;
    *(undefined4 *)(param_1 + 0x2d0) = 0;
    *(undefined4 *)(param_1 + 0x2d4) = 0;
    *(byte **)(param_1 + 0x2e8) = pbVar27;
    puVar3 = puVar26;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01878e88);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01878e88);
  case 3:
    pbVar27 = *(byte **)(param_1 + 0x2e8);
    puVar3 = *(uint **)(param_1 + 0x2ec);
  }
  if (cVar5 != '\x01') {
    if (cVar5 == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_015f853c(&DAT_018ae900);
    }
    FUN_015e8e6c(iVar28,FUN_005bc49c);
    *(undefined1 *)(iVar28 + 0x38) = 1;
  }
  cVar5 = *(char *)(iVar28 + 0x30);
  bVar33 = cVar5 == '\x01';
  if (bVar33) {
    cVar5 = *(char *)(iVar28 + 0x31);
  }
  if (bVar33 && cVar5 == '\0') {
    FUN_016455a4(*(undefined4 *)*param_2,((undefined4 *)*param_2)[1]);
LAB_00e09480:
    uVar29 = 3;
    iVar12 = 1;
  }
  else {
    if ((*(uint *)(iVar28 + 0x24) & 1) == 0) {
      uVar34 = FUN_0164e918();
      if ((uint)uVar34 < 2) {
        uVar34 = CONCAT44((int)((ulonglong)uVar34 >> 0x20),1);
      }
    }
    else {
      uVar34 = CONCAT44(*(undefined4 *)(iVar28 + 0x28),*(undefined4 *)(iVar28 + 0x2c));
    }
    uVar6 = (uint)((ulonglong)uVar34 >> 0x20);
    uVar21 = (uint)uVar34;
    uVar6 = uVar6 ^ uVar6 << 0x11;
    *(undefined4 *)(iVar28 + 0x24) = 1;
    uVar6 = uVar21 >> 0x10 ^ uVar6 >> 7 ^ uVar21 ^ uVar6;
    *(uint *)(iVar28 + 0x2c) = uVar6;
    bVar18 = false;
    puVar7 = puVar3 + 0x4e;
    *(uint *)(iVar28 + 0x28) = uVar21;
    puVar8 = puVar3 + 0x3a;
    puVar9 = puVar3 + 6;
    puVar10 = puVar3 + 0x42;
    puVar11 = puVar3 + 0x3f;
    iVar12 = 0;
    bVar33 = true;
    do {
      bVar19 = bVar33;
      if ((iVar12 - ((int)(uVar6 + uVar21) >> 0x1f) & 1U) == 0) {
        if ((*pbVar27 & 1) == 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*(undefined1 *)((int)puVar3 + 0x106)) {
          case 0:
            puVar3[0x38] = puVar3[0x3c];
            puVar3[0x39] = puVar3[0x3d];
            *(undefined1 *)((int)puVar3 + 0x105) = 0;
            puVar3[0x3e] = puVar3[0x40];
            uVar13 = thunk_FUN_016d4a50(0x19640);
            if (uVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(8,0x19640);
            }
            puVar3[1] = uVar13;
            puVar3[2] = 0;
            *puVar3 = 500;
            puVar3[3] = 0;
            puVar25 = (undefined4 *)thunk_FUN_016d4a50(0x60);
            if (puVar25 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(8,0x60);
            }
            puVar25[2] = 3;
            *puVar25 = 1;
            puVar25[1] = 1;
            *puVar8 = 0;
            puVar3[0x3b] = 0;
            *puVar11 = (uint)puVar25;
            break;
          case 1:
switchD_00e08980_caseD_1:
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xfdee,0xe096ec);
            (*pcVar1)();
          case 2:
                    /* WARNING: Subroutine does not return */
            FUN_00fb7cc0(&DAT_01878700);
          case 3:
            cVar5 = *(char *)(iVar28 + 0x38);
            puVar15 = (uint *)puVar3[0x57];
            puVar4 = (uint *)puVar3[0x58];
            goto joined_r0x00e08a34;
          case 4:
            goto switchD_00e08980_caseD_4;
          case 5:
            goto switchD_00e08980_caseD_5;
          }
LAB_00e08acc:
          *(undefined1 *)(puVar3 + 0x41) = 0;
          puVar3[0x43] = puVar3[0x3e] + 0x49c;
          puVar3[0x57] = (uint)(puVar3 + 0x41);
          puVar3[0x58] = (uint)puVar10;
          *(undefined1 *)(puVar3 + 0x56) = 0;
          puVar3[0x42] = 1;
          puVar3[0x44] = 0;
          puVar3[0x45] = (uint)(puVar3 + 0x38);
          cVar5 = *(char *)(iVar28 + 0x38);
          puVar15 = puVar3 + 0x41;
          puVar4 = puVar10;
joined_r0x00e08a34:
          if (cVar5 != '\x01') {
            if (cVar5 == '\x02') {
                    /* WARNING: Subroutine does not return */
              FUN_015f853c(&DAT_018ae900);
            }
            FUN_015e8e6c(iVar28,FUN_005bc49c);
            *(undefined1 *)(iVar28 + 0x38) = 1;
          }
          cVar5 = *(char *)(iVar28 + 0x30);
          bVar33 = cVar5 == '\x01';
          if (bVar33) {
            cVar5 = *(char *)(iVar28 + 0x31);
          }
          if (bVar33 && cVar5 == '\0') {
            uVar29 = 3;
            FUN_016455a4(*(undefined4 *)*param_2,((undefined4 *)*param_2)[1]);
            goto LAB_00e08914;
          }
          if ((*(uint *)(iVar28 + 0x24) & 1) == 0) {
            uVar34 = FUN_0164e918();
            if ((uint)uVar34 < 2) {
              uVar34 = CONCAT44((int)((ulonglong)uVar34 >> 0x20),1);
            }
          }
          else {
            uVar34 = CONCAT44(*(undefined4 *)(iVar28 + 0x28),*(undefined4 *)(iVar28 + 0x2c));
          }
          uVar13 = (uint)((ulonglong)uVar34 >> 0x20);
          uVar22 = (uint)uVar34;
          uVar13 = uVar13 ^ uVar13 << 0x11;
          *(undefined4 *)(iVar28 + 0x24) = 1;
          *(uint *)(iVar28 + 0x28) = uVar22;
          uVar13 = uVar22 >> 0x10 ^ uVar13 >> 7 ^ uVar22 ^ uVar13;
          *(uint *)(iVar28 + 0x2c) = uVar13;
          bVar2 = (byte)*puVar15;
          uVar14 = (uint)bVar2;
          if ((int)(uVar13 + uVar22) < 0) {
            uVar13 = (uVar14 & 2) >> 1;
            if ((bVar2 & 2) != 0) {
LAB_00e08d28:
              if ((uVar14 & 1) == 0) {
                FUN_00ef4d64(&local_4e8,puVar4,param_2);
                if (local_4e8 != 9 || local_4e4 != 0) goto LAB_00e08d78;
                uVar29 = 3;
              }
              else {
LAB_00e08d5c:
                uVar22 = 0;
                uVar14 = 10;
                uVar29 = 3;
                if (uVar13 == 1) goto LAB_00e08f68;
              }
              goto LAB_00e08914;
            }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch((char)puVar4[0x14]) {
            case '\0':
              piVar16 = (int *)puVar4[3];
              *(undefined1 *)(puVar4 + 0x13) = 0;
              puVar4[4] = (uint)piVar16;
              puVar4[5] = (uint)piVar16;
LAB_00e08ce4:
              iVar12 = *piVar16;
              *(undefined1 *)((int)puVar4 + 0x29) = 0;
              puVar4[8] = iVar12 + 8;
              puVar4[9] = (uint)(piVar16 + 1);
              break;
            case '\x01':
              goto switchD_00e08c00_caseD_1;
            case '\x02':
              goto switchD_00e08c00_caseD_2;
            case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
              switch((char)puVar4[0x13]) {
              case '\0':
                piVar16 = (int *)puVar4[5];
                goto LAB_00e08ce4;
              case '\x01':
                goto switchD_00e08cc4_caseD_1;
              case '\x02':
                goto switchD_00e08cc4_caseD_2;
              }
            }
            cVar5 = FUN_00e7db14(puVar4 + 6,*param_2);
            if (cVar5 == '\x02') {
              *(undefined1 *)(puVar4 + 0x14) = 3;
              *(undefined1 *)(puVar4 + 0x13) = 3;
              uVar14 = (uint)(byte)*puVar15;
              goto LAB_00e08d28;
            }
LAB_00e08e34:
            if (*(char *)((int)puVar4 + 0x29) == '\x04') {
              FUN_0163bdc0(puVar4 + 0xb);
              if (puVar4[0xf] != 0) {
                (**(code **)(puVar4[0xf] + 0xc))(puVar4[0x10]);
              }
              *(undefined1 *)(puVar4 + 10) = 0;
            }
            *(undefined1 *)(puVar4 + 0x13) = 1;
            iVar12 = *(int *)puVar4[4];
            puVar31 = (uint *)(iVar12 + 0x98);
            uVar13 = *(uint *)(iVar12 + 0x98);
            if ((uVar13 < 0xfffffff0) && ((uVar13 & 8) == 0)) {
              if (*puVar31 != uVar13) {
                ClearExclusiveLocal();
                goto LAB_00e08ec8;
              }
              bVar33 = (bool)hasExclusiveAccess(puVar31);
              if (!bVar33) goto LAB_00e08ec8;
              *puVar31 = uVar13 + 0x10;
              DataMemoryBarrier(0xb);
            }
            else {
LAB_00e08ec8:
              FUN_0127d66c(puVar31);
            }
            FUN_0128236c(puVar31);
            FUN_0128236c();
            DataMemoryBarrier(0xb);
            local_544 = *(int **)(iVar12 + 0x9c);
            do {
              iVar12 = *local_544;
              bVar33 = (bool)hasExclusiveAccess(local_544);
            } while (!bVar33);
            *local_544 = iVar12 + 1;
            if (iVar12 < 0) goto switchD_00e08980_caseD_1;
            FUN_01282570(puVar31);
            FUN_01282570((uint)puVar31 | 1);
            DataMemoryBarrier(0xb);
            do {
              uVar13 = *puVar31;
              bVar33 = (bool)hasExclusiveAccess(puVar31);
            } while (!bVar33);
            *puVar31 = uVar13 - 0x10;
            if ((uVar13 & 0xfffffff2) == 0x12) {
              FUN_0127d34c(puVar31);
            }
            uVar22 = 0;
            uVar14 = 9;
            *(undefined1 *)(puVar4 + 0x14) = 1;
            *(byte *)puVar15 = (byte)*puVar15 | 2;
LAB_00e08f68:
            *puVar9 = (uint)local_544;
            puVar3[4] = uVar14;
            puVar3[5] = uVar22;
            FUN_016dd1aa(puVar3 + 7,auStack_1f0,0xc4);
            FUN_00db2628(puVar10);
            uVar13 = puVar3[4];
            uVar14 = puVar3[5];
            iVar12 = 0;
            if ((uint)(uVar13 < 9) <= -uVar14) {
              iVar12 = uVar13 - 8;
            }
            if (iVar12 == 0) {
              if (uVar13 == 8 && uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00fb74f8("BUG: End of data from end_device_receiver",0x29,&local_4e8,
                             &DAT_018788d4,&DAT_01878710);
              }
              local_128 = uVar13;
              local_124 = uVar14;
              FUN_016dd1aa(auStack_120,puVar9,200);
              *(undefined1 *)((int)puVar3 + 0x105) = 1;
              if (puVar3[3] == 500) {
                if (DAT_018d9130 < 4) {
                  uVar13 = (uint)DAT_018da1cc;
                  if (uVar13 - 1 < 2) {
LAB_00e090b8:
                    if (uVar13 != 2) {
                      DataMemoryBarrier(0xb);
                      puVar32 = DAT_018daa78;
                      if (DAT_018dd984 != 2) {
                        puVar32 = &DAT_018ae394;
                      }
                      pcVar20 = s_SetGloba_00414c05;
                      if ((DAT_018dd984 == 2) && (pcVar20 = DAT_018daa74, DAT_018daa70 != 0)) {
                        pcVar20 = DAT_018daa74 + (*(int *)(puVar32 + 8) - 1U & 0xfffffff8) + 8;
                      }
                      iVar12 = (**(code **)(puVar32 + 0x14))(pcVar20);
                      if (iVar12 == 0) goto LAB_00e09284;
                    }
                    if (*(int *)(DAT_018da1c4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01878720);
                    }
                    uStack_38 = *(undefined4 *)(DAT_018da1c4 + 0x24);
                    local_48 = &local_2c;
                    local_4c = &uStack_40;
                    local_58 = &local_4c;
                    uStack_34 = *(undefined4 *)(DAT_018da1c4 + 0x28);
                    uStack_30 = 0;
                    local_54 = 1;
                    local_44 = &DAT_018abb78;
                    local_28 = 0x2f;
                    local_4e4 = 0;
                    local_2c = "Payload buffer is full.";
                    local_4d8 = &local_58;
                    local_4e8 = 1;
                    DataMemoryBarrier(0xb);
                    puVar32 = &DAT_018ae394;
                    pcVar20 = s_SetGloba_00414c05;
                    if ((DAT_018dd984 == 2) &&
                       (pcVar20 = DAT_018daa74, puVar32 = DAT_018daa78, DAT_018daa70 != 0)) {
                      pcVar20 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                    }
                    local_4d4 = DAT_018da1c4;
                    local_50 = (undefined4 *)(DAT_018da1c4 + 0x1c);
                    uStack_40 = *(undefined4 *)(DAT_018da1c4 + 0x1c);
                    iStack_3c = *(int *)(DAT_018da1c4 + 0x20);
                    iVar12 = (**(code **)(puVar32 + 0x28))(pcVar20,&local_4e8);
                    if (iVar12 != 0) {
                      (**(code **)(puVar32 + 0x2c))(pcVar20,&local_4e8);
                    }
                  }
                  else if (uVar13 != 0) {
                    uVar13 = FUN_0169ac90(&DAT_018da1c4);
                    uVar13 = uVar13 & 0xff;
                    if (uVar13 != 0) goto LAB_00e090b8;
                  }
                }
LAB_00e09284:
                if (puVar3[3] != 0) {
                  uVar22 = puVar3[2];
                  uVar14 = uVar22 + 1;
                  uVar13 = uVar14 - *puVar3;
                  if (uVar14 < *puVar3) {
                    uVar13 = uVar14;
                  }
                  puVar3[2] = uVar13;
                  puVar3[3] = puVar3[3] - 1;
                  FUN_016dd1aa(&local_4e8,uVar22 * 0xd0 + puVar3[1],0xd0);
                  if (local_4e8 != 8 || local_4e4 != 0) {
                    FUN_00db27ec(&local_4e8);
                  }
                }
                iVar12 = DAT_018d7d60;
                DataMemoryBarrier(0xb);
                if (DAT_018d7d14 == 0) {
                  puVar15 = (uint *)(DAT_018d7d60 + 8);
                  do {
                    uVar13 = *puVar15;
                    piVar16 = (int *)(DAT_018d7d60 + 0xc);
                    bVar33 = (bool)hasExclusiveAccess(puVar15);
                  } while (!bVar33);
                  *puVar15 = uVar13 + 1;
                  *(uint *)(iVar12 + 0xc) = *piVar16 + (uint)(0xfffffffe < uVar13);
                }
              }
              uVar13 = *puVar3;
              uVar14 = puVar3[3];
              *(undefined1 *)((int)puVar3 + 0x105) = 0;
              if (uVar14 == uVar13) {
                FUN_00aa25c8(puVar3);
                uVar13 = *puVar3;
                uVar14 = puVar3[3];
              }
              uVar22 = puVar3[2] + uVar14;
              puVar3[3] = uVar14 + 1;
              uVar14 = uVar22 - uVar13;
              if (uVar22 < uVar13) {
                uVar14 = uVar22;
              }
              FUN_016dd1aa(uVar14 * 0xd0 + puVar3[1],&local_128,0xd0);
              puVar3[0x42] = puVar3[0x3e];
              puVar3[0x43] = (uint)puVar11;
              *(undefined1 *)(puVar3 + 0x4c) = 0;
              puVar3[0x44] = (uint)puVar3;
              puVar3[0x45] = (uint)puVar8;
switchD_00e08980_caseD_4:
              iVar12 = FUN_00dae9a8(puVar10,param_2);
              uVar29 = 4;
              if (iVar12 != 0) goto LAB_00e08914;
              if ((char)puVar3[0x4c] == '\x04') {
                if (*(char *)((int)puVar3 + 0x2a1) == '\x03') {
                  FUN_00db2428(puVar3 + 0x52);
                  if ((char)puVar3[0x51] == '\0') {
                    puVar15 = (uint *)puVar3[0x50];
                    uVar13 = puVar3[0x4f];
                    *puVar15 = *puVar7;
                    puVar15[1] = uVar13;
                  }
                  *(undefined1 *)(puVar3 + 0xa8) = 0;
                }
              }
              else if ((char)puVar3[0x4c] == '\x03') {
                FUN_00db2358(puVar7);
              }
              *(undefined1 *)((int)puVar3 + 0x105) = 0;
            }
            else {
              if (iVar12 != 1) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa478("all branches are disabled and there is no else branch",0x6b,
                             &DAT_01878730);
              }
              piVar16 = (int *)*puVar11;
              uVar13 = *puVar9;
              DataMemoryBarrier(0xb);
              do {
                iVar12 = *piVar16;
                bVar33 = (bool)hasExclusiveAccess(piVar16);
              } while (!bVar33);
              *piVar16 = iVar12 + -1;
              if (iVar12 == 1) {
                DataMemoryBarrier(0xb);
                FUN_00aaca60(*puVar11);
              }
              *puVar11 = uVar13;
              piVar16 = (int *)(uVar13 + 8);
              if (*piVar16 != 3) {
                FUN_00a36f18(puVar3[0x3e],piVar16);
              }
              puVar3[0x42] = puVar3[0x3e];
              puVar3[0x43] = (uint)puVar11;
              *(undefined1 *)(puVar3 + 0x4c) = 0;
              puVar3[0x44] = (uint)puVar3;
              puVar3[0x45] = (uint)puVar8;
switchD_00e08980_caseD_5:
              iVar12 = FUN_00dae9a8(puVar10,param_2);
              uVar29 = 5;
              if (iVar12 != 0) goto LAB_00e08914;
              if ((char)puVar3[0x4c] == '\x04') {
                if (*(char *)((int)puVar3 + 0x2a1) == '\x03') {
                  FUN_00db2428(puVar3 + 0x52);
                  if ((char)puVar3[0x51] == '\0') {
                    puVar15 = (uint *)puVar3[0x50];
                    uVar13 = puVar3[0x4f];
                    *puVar15 = *puVar7;
                    puVar15[1] = uVar13;
                  }
                  *(undefined1 *)(puVar3 + 0xa8) = 0;
                }
              }
              else if ((char)puVar3[0x4c] == '\x03') {
                FUN_00db2358(puVar7);
              }
            }
            goto LAB_00e08acc;
          }
          uVar13 = uVar14 & 1;
          if ((bVar2 & 1) == 0) {
            FUN_00ef4d64(&local_4e8,puVar4,param_2);
            if (local_4e8 == 9 && local_4e4 == 0) {
              uVar14 = (uint)(byte)*puVar15;
              goto LAB_00e08c70;
            }
LAB_00e08d78:
            uVar22 = local_4e4;
            uVar14 = local_4e8;
            local_544 = local_4e0;
            FUN_016dd1aa(auStack_1f0,auStack_4dc,0xc4);
            *(byte *)puVar15 = (byte)*puVar15 | 1;
            uVar29 = 3;
            if (uVar14 == 0xb && uVar22 == 0) goto LAB_00e08914;
            goto LAB_00e08f68;
          }
LAB_00e08c70:
          if ((uVar14 & 2) != 0) goto LAB_00e08d5c;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((char)puVar4[0x14]) {
          case '\0':
            piVar16 = (int *)puVar4[3];
            *(undefined1 *)(puVar4 + 0x13) = 0;
            puVar4[4] = (uint)piVar16;
            puVar4[5] = (uint)piVar16;
LAB_00e08df4:
            iVar12 = *piVar16;
            *(undefined1 *)((int)puVar4 + 0x29) = 0;
            puVar4[8] = iVar12 + 8;
            puVar4[9] = (uint)(piVar16 + 1);
            break;
          case '\x01':
switchD_00e08c00_caseD_1:
                    /* WARNING: Subroutine does not return */
            FUN_00fb7ca0(&DAT_018786b0);
          case '\x02':
switchD_00e08c00_caseD_2:
                    /* WARNING: Subroutine does not return */
            FUN_00fb7cc0(&DAT_018786b0);
          case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch((char)puVar4[0x13]) {
            case '\0':
              piVar16 = (int *)puVar4[5];
              goto LAB_00e08df4;
            case '\x01':
switchD_00e08cc4_caseD_1:
                    /* WARNING: Subroutine does not return */
              FUN_00fb7ca0(&DAT_018acd5c);
            case '\x02':
switchD_00e08cc4_caseD_2:
                    /* WARNING: Subroutine does not return */
              FUN_00fb7cc0(&DAT_018acd5c);
            }
          }
          cVar5 = FUN_00e7db14(puVar4 + 6,*param_2);
          if (cVar5 != '\x02') goto LAB_00e08e34;
          uVar29 = 3;
          *(undefined1 *)(puVar4 + 0x14) = 3;
          *(undefined1 *)(puVar4 + 0x13) = 3;
LAB_00e08914:
          *(undefined1 *)((int)puVar3 + 0x106) = uVar29;
          bVar18 = true;
        }
      }
      else if ((*pbVar27 & 2) == 0) {
        iVar12 = FUN_016638c8(puVar3 + 0xaa,*param_2);
        bVar18 = true;
        if (iVar12 == 0) {
          bVar33 = true;
          *pbVar27 = *pbVar27 | 2;
          goto LAB_00e094c8;
        }
      }
      iVar12 = 1;
      bVar33 = false;
    } while (bVar19);
    bVar33 = false;
    if (bVar18) goto LAB_00e09480;
LAB_00e094c8:
    FUN_00de0c9c(puVar26);
    FUN_0163bdc0(param_1 + 0x2c4);
    if (*(int *)(param_1 + 0x2d4) != 0) {
      (**(code **)(*(int *)(param_1 + 0x2d4) + 0xc))(*(undefined4 *)(param_1 + 0x2d8));
    }
    if (!bVar33) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("all branches are disabled and there is no else branch",0x6b,&DAT_01878e98);
    }
    piVar16 = *(int **)(param_1 + 0x2f8);
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar16;
      bVar33 = (bool)hasExclusiveAccess(piVar16);
    } while (!bVar33);
    *piVar16 = iVar12 + -1;
    if (iVar12 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00e45d08(*(undefined4 *)(param_1 + 0x2f8));
    }
    puVar25 = (undefined4 *)(param_1 + 0x2fc);
    FUN_01663cc4(*puVar25);
    piVar16 = (int *)*puVar25;
    DataMemoryBarrier(0xb);
    do {
      iVar17 = *piVar16;
      bVar33 = (bool)hasExclusiveAccess(piVar16);
    } while (!bVar33);
    *piVar16 = iVar17 + -1;
    uVar29 = 1;
    iVar12 = 0;
    if (iVar17 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01665328(puVar25);
    }
  }
  cVar5 = *(char *)(iVar28 + 0x38);
  *(undefined1 *)(param_1 + 0x302) = uVar29;
  if (cVar5 != '\x01') {
    if (cVar5 == '\x02') goto joined_r0x00e094a4;
    FUN_015e8e6c(iVar28,FUN_01655ec4);
    *(undefined1 *)(iVar28 + 0x38) = 1;
  }
  *(undefined4 *)(iVar28 + 0x18) = uVar30;
  *(undefined4 *)(iVar28 + 0x1c) = local_4f0;
joined_r0x00e094a4:
  if (iVar12 == 0) {
    local_4e8 = 2;
    FUN_00e09b24(param_1,&local_4e8);
    return 0;
  }
  return iVar12;
}

