// FUN_00a9eab4 @ 00a9eab4 size=5140 calls_out=32 calls_in=2
// strings: 

undefined8 FUN_00a9eab4(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined2 uVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint *puVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  byte bVar18;
  int *unaff_r5;
  undefined4 uVar19;
  int iVar20;
  undefined4 uVar21;
  int iVar22;
  int iVar23;
  undefined1 local_c6c;
  int local_c68;
  int local_c64;
  int local_c50;
  undefined1 *local_c4c;
  undefined1 *local_c44;
  int *local_c40;
  int *local_c30 [70];
  undefined1 auStack_b18 [280];
  undefined1 auStack_a00 [272];
  int *local_8f0;
  uint uStack_8ec;
  undefined4 uStack_8e8;
  undefined4 uStack_8e4;
  undefined4 uStack_8e0;
  undefined4 uStack_8dc;
  int *local_6b8;
  uint local_6b4;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined4 uStack_6a8;
  undefined4 uStack_6a4;
  undefined1 auStack_598 [280];
  undefined1 auStack_480 [280];
  undefined1 auStack_368 [276];
  int local_254;
  undefined1 auStack_250 [280];
  int *local_138;
  uint uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  
  if (*(uint *)(param_1 + 8) != 2) {
    iVar6 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 8) & 1) != 0) {
      iVar6 = iVar6 + (*(int *)(*(int *)(param_1 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x30))(iVar6,param_1);
  }
  puVar16 = (undefined4 *)(param_1 + 0x20);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x47)) {
  case 0:
    piVar8 = *(int **)(param_1 + 0x3c);
    piVar12 = *(int **)(param_1 + 0x40);
    unaff_r5 = (int *)0x0;
    *(undefined1 *)(param_1 + 0x44) = 0;
    *(undefined2 *)(param_1 + 0x45) = 0x100;
    *(int **)(param_1 + 0x30) = piVar8;
    *(int **)(param_1 + 0x34) = piVar12;
    if ((int *)piVar8[1] != piVar12) {
      *(int *)(param_1 + 0x48) = *piVar8 + 8;
      *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
      goto switchD_00a9eb20_caseD_3;
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01870954);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01870954);
  case 3:
switchD_00a9eb20_caseD_3:
    iVar6 = FUN_00aa1058((int *)(param_1 + 0x48),param_2);
    if (iVar6 != 0) {
      iVar7 = *(int *)(param_1 + 0x48);
      if (iVar7 != 0) {
        FUN_00aa0a58(iVar7,*(undefined4 *)(param_1 + 0x4c),1);
      }
      uVar11 = *(undefined4 *)(iVar6 + 0x24);
      *puVar16 = *(undefined4 *)(iVar6 + 0x20);
      *(undefined4 *)(param_1 + 0x24) = uVar11;
      *(undefined1 *)(iVar6 + 0x24) = 2;
      FUN_00aa13c0();
      *(undefined1 *)(param_1 + 0x78) = 0;
      *(undefined4 **)(param_1 + 0x48) = puVar16;
      puVar17 = puVar16;
LAB_00a9ec84:
      uVar11 = *puVar17;
      *(undefined4 *)(param_1 + 0x50) = puVar17[1];
      *(undefined1 *)(puVar17 + 1) = 2;
      bVar18 = *(byte *)(param_1 + 0x50);
      *(undefined4 *)(param_1 + 0x4c) = uVar11;
      cVar4 = bVar18 - 2;
      if (bVar18 < 2) {
        cVar4 = '\x02';
      }
      if (cVar4 == '\x01') {
        iVar6 = *(int *)(param_1 + 0x4c) + 8;
        *(int *)(param_1 + 0x58) = iVar6;
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x4c);
        *(undefined1 *)(param_1 + 0x74) = 0;
LAB_00a9ed78:
        *(undefined1 *)(param_1 + 0x70) = 0;
        piVar8 = (int *)(iVar6 + 4);
        *(int **)(param_1 + 0x5c) = piVar8;
LAB_00a9ed8c:
        *(undefined1 *)(param_1 + 0x6c) = 0;
        *(int **)(param_1 + 0x60) = piVar8;
LAB_00a9ed9c:
        *(int *)(param_1 + 100) = *piVar8 + 8;
        *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
        goto switchD_00a9fd18_caseD_3;
      }
      if (cVar4 != '\x02') {
        *(undefined1 *)(param_1 + 0x45) = 0;
        *(undefined4 *)(param_1 + 0x38) = 0;
        *(undefined1 *)(param_1 + 0x78) = 1;
        goto LAB_00a9fddc;
      }
      uVar11 = *(undefined4 *)(param_1 + 0x4c);
      bVar18 = bVar18 & 1;
      *(undefined1 *)(param_1 + 0x78) = 1;
      *(undefined1 *)(param_1 + 0x45) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
      goto LAB_00a9ef4c;
    }
    uVar5 = 3;
    goto LAB_00a9fa68;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x78)) {
    case 0:
      puVar17 = *(undefined4 **)(param_1 + 0x48);
      goto LAB_00a9ec84;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01870924);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01870924);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x74)) {
    case 0:
      iVar6 = *(int *)(param_1 + 0x58);
      goto LAB_00a9ed78;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01870934);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01870934);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x70)) {
    case 0:
      piVar8 = *(int **)(param_1 + 0x5c);
      goto LAB_00a9ed8c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018708e4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018708e4);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x6c)) {
    case 0:
      piVar8 = *(int **)(param_1 + 0x60);
      goto LAB_00a9ed9c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018708d4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018708d4);
    }
switchD_00a9fd18_caseD_3:
    unaff_r5 = (int *)(param_1 + 100);
    iVar6 = FUN_00aa1bac(unaff_r5,*param_2);
    if (iVar6 != 0) {
      if (*unaff_r5 != 0) {
        FUN_00aa190c(*unaff_r5,*(undefined4 *)(param_1 + 0x68),1);
      }
      *(undefined1 *)(param_1 + 0x6c) = 1;
      iVar7 = *(int *)(iVar6 + 0x124);
      uVar15 = *(uint *)(iVar6 + 0x100);
      uVar19 = *(undefined4 *)(iVar6 + 0x104);
      uVar11 = *(undefined4 *)(iVar6 + 0x128);
      *(undefined4 *)(iVar6 + 0x124) = 0x80000000;
      if (iVar7 != -0x80000000) {
        iVar9 = *(int *)(iVar6 + 0x10c);
        uVar21 = *(undefined4 *)(iVar6 + 0x110);
        iVar14 = *(int *)(iVar6 + 0x118);
        uVar13 = *(undefined4 *)(iVar6 + 0x11c);
        if ((*(uint *)(iVar6 + 0x28) & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(iVar6 + 0x2c));
        }
        if (iVar9 != 0) {
          thunk_FUN_016d3fb4(uVar21);
        }
        if ((uVar15 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(uVar19);
        }
        if (iVar14 != 0) {
          thunk_FUN_016d3fb4(uVar13);
        }
        if (iVar7 != 0) {
          thunk_FUN_016d3fb4(uVar11);
        }
      }
      piVar8 = *(int **)(iVar6 + 0x138);
      *(undefined4 *)(iVar6 + 0x138) = 0;
      if (piVar8 != (int *)0x0) {
        local_6b8 = piVar8;
        FUN_01662df8(piVar8);
        FUN_01663cc4(piVar8);
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar8;
          bVar3 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar3);
        *piVar8 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01665328(&local_6b8);
        }
      }
      bVar18 = *(byte *)(iVar6 + 0x24);
      uVar11 = *(undefined4 *)(iVar6 + 0x20);
      *(undefined1 *)(iVar6 + 0x24) = 2;
      FUN_00aa13c0(iVar6);
      *(undefined1 *)(param_1 + 0x74) = 1;
      *(undefined1 *)(param_1 + 0x70) = 1;
      *(undefined1 *)(param_1 + 0x78) = 1;
      *(undefined1 *)(param_1 + 0x45) = 0;
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x54);
      if (bVar18 == 2) {
LAB_00a9fddc:
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_0034f529,0x13,&DAT_01870964);
      }
LAB_00a9ef4c:
      puVar17 = (undefined4 *)(param_1 + 0x28);
      *puVar17 = uVar11;
      *(undefined1 *)(param_1 + 0x44) = 1;
      *(byte *)(param_1 + 0x2c) = bVar18;
      if ((bVar18 & 1) != 0) {
        puVar10 = (uint *)(uint)DAT_018dd947;
        *(undefined1 *)(param_1 + 0x52) = 0;
        *(undefined4 **)(param_1 + 0x4c) = puVar17;
        goto LAB_00a9ef84;
      }
LAB_00a9f370:
      *(int *)(param_1 + 0x48) = **(int **)(param_1 + 0x30) + 8;
      *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
      goto switchD_00a9eb20_caseD_6;
    }
    *(undefined1 *)(param_1 + 0x78) = 3;
    *(undefined1 *)(param_1 + 0x74) = 3;
    *(undefined1 *)(param_1 + 0x70) = 3;
    *(undefined1 *)(param_1 + 0x6c) = 3;
    *(undefined1 *)(param_1 + 0x47) = 4;
    uVar15 = *(uint *)(param_1 + 8);
    goto joined_r0x00a9f0c4;
  case 5:
    puVar10 = &switchD_00a9ec38::switchdataD_00a9ec3c;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x52)) {
    case 0:
      puVar17 = *(undefined4 **)(param_1 + 0x4c);
LAB_00a9ef84:
      *(undefined4 **)(param_1 + 0x48) = puVar17;
      *(undefined2 *)(param_1 + 0x50) = 0;
      if (*(char *)(puVar17 + 1) != '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_0034f59f,0x4d,&DAT_01870994);
      }
      piVar8 = (int *)thunk_FUN_016d4a50(0x20,puVar10);
      if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x20);
      }
      piVar8[2] = 0;
      *piVar8 = 1;
      piVar8[1] = 1;
      piVar8[3] = 0;
      piVar8[4] = 0;
      piVar8[5] = 0;
      piVar8[6] = 0;
      *(undefined1 *)(piVar8 + 7) = 0;
      do {
        iVar6 = *piVar8;
        bVar3 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar3);
      *piVar8 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_00aa0000;
      *(int **)(param_1 + 0x54) = piVar8;
      *(undefined2 *)(param_1 + 0x50) = 1;
      *(undefined4 *)(param_1 + 0x58) = 1;
      *(undefined4 **)(param_1 + 0x5c) = puVar17;
      *(undefined4 *)(param_1 + 0x60) = 1;
      *(int **)(param_1 + 100) = piVar8;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018709a4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018709a4);
    case 4:
      uVar11 = *param_2;
      goto LAB_00a9f180;
    }
    uVar11 = *param_2;
    unaff_r5 = (int *)(param_1 + 0x58);
    FUN_00a8fc10(&local_6b8,unaff_r5,uVar11);
    piVar8 = local_6b8;
    if (local_6b8 == (int *)&DAT_00000004) {
      uVar5 = 3;
LAB_00a9f1a4:
      *(undefined1 *)(param_1 + 0x52) = uVar5;
      uVar5 = 5;
      goto LAB_00a9fa68;
    }
    FUN_016dd1aa(&local_138,(uint)&local_6b8 | 4,0x114);
    FUN_00a1f280(unaff_r5);
    if (piVar8 == (int *)0x3) {
      *(undefined1 *)(param_1 + 0x50) = 0;
LAB_00a9f180:
      local_c40 = (int *)(param_1 + 0x48);
      unaff_r5 = (int *)(param_1 + 0x54);
      cVar4 = FUN_00a7ebe8(unaff_r5,uVar11);
      uVar5 = 4;
      if (cVar4 == '\x02') goto LAB_00a9f1a4;
      iVar6 = *unaff_r5;
      if (iVar6 != 0) {
        puVar10 = (uint *)(iVar6 + 0x18);
        do {
          uVar15 = *puVar10;
          bVar3 = (bool)hasExclusiveAccess(puVar10);
        } while (!bVar3);
        *puVar10 = uVar15 | 4;
        DataMemoryBarrier(0xb);
        if ((uVar15 & 10) == 8) {
          (**(code **)(*(int *)(iVar6 + 8) + 8))(*(undefined4 *)(iVar6 + 0xc));
        }
        if ((uVar15 & 2) != 0) {
          *(undefined1 *)(iVar6 + 0x1c) = 0;
        }
        piVar8 = (int *)*unaff_r5;
        if (piVar8 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar8;
            bVar3 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar3);
          *piVar8 = iVar6 + -1;
          if (iVar6 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0165863c(*unaff_r5);
          }
        }
      }
      piVar8 = (int *)0x3;
      *(undefined1 *)(*local_c40 + 4) = 0;
    }
    else {
      FUN_016dd1aa(&local_8f0,&local_138,0x114);
      iVar6 = *(int *)(param_1 + 0x54);
      if (iVar6 != 0) {
        puVar10 = (uint *)(iVar6 + 0x18);
        do {
          uVar15 = *puVar10;
          bVar3 = (bool)hasExclusiveAccess(puVar10);
        } while (!bVar3);
        *puVar10 = uVar15 | 4;
        DataMemoryBarrier(0xb);
        if ((uVar15 & 10) == 8) {
          (**(code **)(*(int *)(iVar6 + 8) + 8))(*(undefined4 *)(iVar6 + 0xc));
        }
        if ((uVar15 & 2) != 0) {
          *(undefined1 *)(iVar6 + 0x1c) = 0;
        }
        piVar12 = *(int **)(param_1 + 0x54);
        if (piVar12 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar12;
            bVar3 = (bool)hasExclusiveAccess(piVar12);
          } while (!bVar3);
          *piVar12 = iVar6 + -1;
          if (iVar6 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0165863c(*(undefined4 *)(param_1 + 0x54));
          }
        }
      }
    }
    *(undefined2 *)(param_1 + 0x50) = 0;
    FUN_016dd1aa(auStack_250,&local_8f0,0x114);
    *(undefined1 *)(param_1 + 0x52) = 1;
    local_c30[0] = piVar8;
    FUN_016dd1aa((uint)local_c30 | 4,auStack_250,0x114);
    FUN_00a9b07c(param_1 + 0x48);
    if (local_c30[0] == (int *)0x3) goto LAB_00a9f370;
    FUN_01602d08(&local_6b8);
    local_8f0 = local_6b8;
    uStack_8ec = local_6b4;
    uStack_8e8 = uStack_6b0;
    uStack_8e4 = uStack_6ac;
    uStack_8e0 = uStack_6a8;
    uStack_8dc = uStack_6a4;
    local_6b4 = 0x1b;
    local_6b8 = (int *)&DAT_0034f53c;
    FUN_016dd1aa(&uStack_6b0,local_c30,0x118);
    unaff_r5 = (int *)FUN_00abfef8(&local_6b8,&local_8f0);
    cVar4 = *(char *)(param_1 + 0x44);
joined_r0x00a9f5a4:
    if (cVar4 != '\0') {
      iVar6 = *(int *)(param_1 + 0x28);
      piVar8 = (int *)(iVar6 + 0x44);
      do {
        iVar7 = *piVar8;
        bVar3 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar3);
      *piVar8 = iVar7 + -1;
      if (iVar7 == 1) {
        FUN_00a8cda4(iVar6 + 8);
      }
      piVar8 = *(int **)(param_1 + 0x28);
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar8;
        bVar3 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar3);
      *piVar8 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aa79bc(*(undefined4 *)(param_1 + 0x28));
      }
    }
    piVar8 = *(int **)(param_1 + 0x38);
    *(undefined2 *)(param_1 + 0x44) = 0;
    if (piVar8 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar8;
        bVar3 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar3);
      *piVar8 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aa7b14(*(undefined4 *)(param_1 + 0x38));
      }
    }
    FUN_00a1f528(puVar16);
    piVar12 = *(int **)(param_1 + 0x34);
    break;
  case 6:
switchD_00a9eb20_caseD_6:
    iVar6 = FUN_00aa1058((int *)(param_1 + 0x48),param_2);
    if (iVar6 != 0) {
      iVar7 = *(int *)(param_1 + 0x48);
      if (iVar7 != 0) {
        FUN_00aa0a58(iVar7,*(undefined4 *)(param_1 + 0x4c),1);
      }
      piVar8 = *(int **)(param_1 + 0x34);
      do {
        iVar7 = *piVar8;
        bVar3 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar3);
      *piVar8 = iVar7 + 1;
      if (iVar7 < 0) {
LAB_00aa0000:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xaa0000);
        (*pcVar1)();
      }
      local_6b8 = *(int **)(iVar6 + 0x20);
      local_6b4 = *(uint *)(iVar6 + 0x24);
      *(int **)(iVar6 + 0x20) = piVar8;
      *(undefined1 *)(iVar6 + 0x24) = 3;
      if ((local_6b4 & 0xff) != 2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_0034e253,0x3b,&DAT_0186e014);
      }
      FUN_00a1f528(&local_6b8);
      FUN_00aa13c0(iVar6);
      *(undefined1 *)(param_1 + 0x4dc) = 0;
      uVar5 = *(undefined1 *)(param_1 + 0x2c);
      uVar11 = *(undefined4 *)(param_1 + 0x28);
      *(undefined1 *)(param_1 + 0x44) = 0;
      iVar6 = *(int *)(param_1 + 0x34) + 8;
      *(undefined1 *)(param_1 + 0x4c) = uVar5;
      *(undefined4 *)(param_1 + 0x48) = uVar11;
      *(int *)(param_1 + 0x4d8) = iVar6;
LAB_00a9f440:
      *(undefined4 *)(param_1 + 0x50) = uVar11;
      piVar8 = (int *)(iVar6 + 4);
      *(int **)(param_1 + 0x58) = piVar8;
      *(undefined1 *)(param_1 + 0x54) = uVar5;
      *(undefined1 *)(param_1 + 0x68) = 0;
LAB_00a9f464:
      *(undefined1 *)(param_1 + 0x78) = 0;
      *(undefined1 *)(param_1 + 0x60) = uVar5;
      *(int **)(param_1 + 0x6c) = piVar8;
      *(undefined4 *)(param_1 + 0x5c) = uVar11;
      *(undefined2 *)(param_1 + 0x69) = 0x100;
LAB_00a9f484:
      *(int *)(param_1 + 0x70) = *piVar8 + 8;
      *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
switchD_00a9f29c_caseD_3:
      unaff_r5 = (int *)(param_1 + 0x70);
      iVar6 = FUN_00aa1bac(unaff_r5,*param_2);
      if (iVar6 != 0) {
        if (*unaff_r5 != 0) {
          FUN_00aa190c(*unaff_r5,*(undefined4 *)(param_1 + 0x74),1);
        }
        *(int *)(param_1 + 100) = iVar6;
        *(undefined1 *)(param_1 + 0x78) = 1;
        if (*(char *)(iVar6 + 0x24) != '\x02') {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0034f4ea,0x5b,&DAT_01870904);
        }
        *(undefined4 *)(param_1 + 0x70) = 3;
        if (*(int *)(iVar6 + 0x124) == -0x80000000) {
          *(undefined4 *)(param_1 + 0x284) = 0x80000000;
        }
        else {
          if (*(int *)(iVar6 + 0x28) == -0x80000000) {
            iVar7 = -0x80000000;
          }
          else {
            iVar7 = *(int *)(iVar6 + 0x30);
            uVar11 = *(undefined4 *)(iVar6 + 0x2c);
            if (iVar7 == 0) {
              local_c64 = 1;
            }
            else {
              local_c64 = thunk_FUN_016d4a50(iVar7);
              if (local_c64 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(1,iVar7);
              }
            }
            FUN_016dd1aa(local_c64,uVar11,iVar7);
            local_c6c = *(undefined1 *)(iVar6 + 0x34);
          }
          iVar14 = *(int *)(iVar6 + 0x114);
          uVar11 = *(undefined4 *)(iVar6 + 0x110);
          if (iVar14 == 0) {
            iVar9 = 1;
          }
          else {
            iVar9 = thunk_FUN_016d4a50(iVar14);
            if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,iVar14);
            }
          }
          FUN_016dd1aa(iVar9,uVar11,iVar14);
          if (*(int *)(iVar6 + 0x100) == -0x80000000) {
            local_c50 = -0x80000000;
          }
          else {
            local_c50 = *(int *)(iVar6 + 0x108);
            uVar11 = *(undefined4 *)(iVar6 + 0x104);
            if (local_c50 == 0) {
              local_c68 = 1;
            }
            else {
              local_c68 = thunk_FUN_016d4a50(local_c50);
              if (local_c68 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(1,local_c50);
              }
            }
            FUN_016dd1aa(local_c68,uVar11,local_c50);
          }
          unaff_r5 = *(int **)(iVar6 + 0x120);
          iVar23 = 1;
          uVar11 = *(undefined4 *)(iVar6 + 0x11c);
          iVar20 = 1;
          if ((unaff_r5 != (int *)0x0) && (iVar20 = thunk_FUN_016d4a50(unaff_r5), iVar20 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,unaff_r5);
          }
          FUN_016dd1aa(iVar20,uVar11,unaff_r5);
          iVar22 = *(int *)(iVar6 + 300);
          uVar11 = *(undefined4 *)(iVar6 + 0x128);
          uVar2 = *(undefined2 *)(iVar6 + 0x130);
          if ((iVar22 != 0) && (iVar23 = thunk_FUN_016d4a50(iVar22), iVar23 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar22);
          }
          FUN_016dd1aa(iVar23,uVar11,iVar22);
          FUN_016dd1aa(&local_6b8,iVar6 + 0x38,200);
          *(undefined1 *)(param_1 + 0x194) = local_c6c;
          *(int *)(param_1 + 0x188) = iVar7;
          *(int *)(param_1 + 400) = iVar7;
          *(int *)(param_1 + 0x18c) = local_c64;
          FUN_016dd1aa(param_1 + 0x198,&local_6b8,200);
          *(int *)(param_1 + 0x28c) = iVar22;
          *(undefined2 *)(param_1 + 0x290) = uVar2;
          *(int **)(param_1 + 0x280) = unaff_r5;
          *(int *)(param_1 + 0x284) = iVar22;
          *(int *)(param_1 + 0x288) = iVar23;
          *(int *)(param_1 + 0x264) = local_c68;
          *(int *)(param_1 + 0x260) = local_c50;
          *(int *)(param_1 + 0x268) = local_c50;
          *(int *)(param_1 + 0x270) = iVar9;
          *(int *)(param_1 + 0x26c) = iVar14;
          *(int *)(param_1 + 0x274) = iVar14;
          *(int **)(param_1 + 0x278) = unaff_r5;
          *(int *)(param_1 + 0x27c) = iVar20;
          if (iVar22 != -0x80000000) {
            *(undefined1 *)(param_1 + 0x69) = 1;
            FUN_016dd1aa(auStack_a00,param_1 + 0x188,0x110);
            iVar7 = *(int *)(*(int *)(param_1 + 100) + 0x138);
            if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_0034f517,0x12,&DAT_01870914);
            }
            FUN_01663af4(iVar7);
            *(undefined1 *)(param_1 + 0x69) = 0;
            FUN_016dd1aa(auStack_598,auStack_a00,0x110);
            FUN_016dd1aa(&local_8f0,&local_6b8,0x234);
            FUN_016dd1aa(param_1 + 0x298,&local_8f0,0x234);
            *(undefined1 *)(param_1 + 0x4d6) = 0;
            iVar6 = param_1 + 0x5c;
            *(int *)(param_1 + 0x4cc) = iVar6;
            *(int *)(param_1 + 0x4d0) = iVar7;
LAB_00a9f844:
            *(int *)(param_1 + 0x4c8) = iVar6;
            *(undefined1 *)(param_1 + 0x4d5) = 1;
            FUN_016dd1aa(auStack_368,param_1 + 0x3b8,0x110);
            *(undefined1 *)(param_1 + 0x4d4) = 1;
            local_254 = iVar7;
            if (*(char *)(iVar6 + 4) != '\0') {
                    /* WARNING: Subroutine does not return */
              FUN_00faa478(&DAT_0034f575,0x55,&DAT_01870974);
            }
            *(undefined2 *)(param_1 + 0x4d4) = 0;
            *(undefined4 *)(param_1 + 0x2a0) = 0;
            *(undefined4 *)(param_1 + 0x298) = 1;
            *(int *)(param_1 + 0x29c) = iVar6;
            *(int *)(param_1 + 0x2a4) = iVar7;
            FUN_016dd1aa(param_1 + 0x2a8,param_1 + 0x3b8,0x110);
            goto LAB_00a9f8ac;
          }
        }
        goto LAB_00a9f98c;
      }
      *(undefined1 *)(param_1 + 0x78) = 3;
      *(undefined1 *)(param_1 + 0x68) = 3;
      goto LAB_00a9fa5c;
    }
    uVar5 = 6;
    unaff_r5 = (int *)0x0;
LAB_00a9fa68:
    *(undefined1 *)(param_1 + 0x47) = uVar5;
    uVar15 = *(uint *)(param_1 + 8);
joined_r0x00a9f0c4:
    uVar11 = 1;
    if (uVar15 == 2) goto LAB_00a9fcf0;
    goto LAB_00a9fcc4;
  case 7:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x4dc)) {
    case 0:
      uVar5 = *(undefined1 *)(param_1 + 0x4c);
      uVar11 = *(undefined4 *)(param_1 + 0x48);
      iVar6 = *(int *)(param_1 + 0x4d8);
      goto LAB_00a9f440;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01870944);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01870944);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x68)) {
      case 0:
        uVar5 = *(undefined1 *)(param_1 + 0x54);
        uVar11 = *(undefined4 *)(param_1 + 0x50);
        piVar8 = *(int **)(param_1 + 0x58);
        goto LAB_00a9f464;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_018708f4);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_018708f4);
      case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_1 + 0x78)) {
        case 0:
          piVar8 = *(int **)(param_1 + 0x6c);
          goto LAB_00a9f484;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_018708d4);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_018708d4);
        }
        goto switchD_00a9f29c_caseD_3;
      case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_1 + 0x4d6)) {
        case 0:
          iVar6 = *(int *)(param_1 + 0x4cc);
          iVar7 = *(int *)(param_1 + 0x4d0);
          goto LAB_00a9f844;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_01870984);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_01870984);
        case 3:
        }
      }
    }
LAB_00a9f8ac:
    local_c4c = (undefined1 *)(param_1 + 0x68);
    iVar6 = param_1 + 0x298;
    FUN_00a8fc10(&local_6b8,iVar6,*param_2);
    unaff_r5 = local_6b8;
    if (local_6b8 == (int *)&DAT_00000004) {
      *(undefined1 *)(param_1 + 0x4d6) = 3;
      *local_c4c = 4;
LAB_00a9fa5c:
      *(undefined1 *)(param_1 + 0x4dc) = 3;
      uVar5 = 7;
      goto LAB_00a9fa68;
    }
    FUN_016dd1aa(auStack_250,(uint)&local_6b8 | 4,0x114);
    FUN_00a1f280(iVar6);
    if (unaff_r5 == (int *)0x3) {
      *(undefined1 *)(*(int *)(param_1 + 0x4c8) + 4) = 1;
    }
    else {
      FUN_016dd1aa(&local_138,auStack_250,0x114);
    }
    *(undefined2 *)(param_1 + 0x4d4) = 0;
    *(undefined1 *)(param_1 + 0x4d6) = 1;
    FUN_00a9b4b4(iVar6);
    if (*(int *)(param_1 + 0x70) != 3) {
      FUN_00b510e8();
    }
    *(int **)(param_1 + 0x70) = unaff_r5;
    FUN_016dd1aa(param_1 + 0x74,&local_138,0x114);
    *(undefined1 *)(param_1 + 0x69) = 0;
LAB_00a9f98c:
    local_c40 = (int *)(param_1 + 0x50);
    local_c44 = (undefined1 *)(param_1 + 0x4dc);
    iVar6 = *(int *)(param_1 + 100);
    *(undefined1 *)(param_1 + 0x6a) = 0;
    uVar5 = *(undefined1 *)(param_1 + 0x60);
    uVar11 = *(undefined4 *)(param_1 + 0x5c);
    if (*(char *)(iVar6 + 0x24) != '\x02') {
      iVar7 = *(int *)(iVar6 + 0x20);
      piVar8 = (int *)(iVar7 + 0x44);
      do {
        iVar14 = *piVar8;
        bVar3 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar3);
      *piVar8 = iVar14 + -1;
      if (iVar14 == 1) {
        FUN_00a8cda4(iVar7 + 8);
      }
      piVar8 = *(int **)(iVar6 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar8;
        bVar3 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar3);
      *piVar8 = iVar7 + -1;
      unaff_r5 = (int *)&DAT_018dd940;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aa79bc(*(undefined4 *)(iVar6 + 0x20));
      }
    }
    *(undefined1 *)(iVar6 + 0x24) = uVar5;
    *(undefined4 *)(iVar6 + 0x20) = uVar11;
    piVar8 = *(int **)(param_1 + 0x70);
    FUN_016dd1aa(auStack_480,param_1 + 0x74,0x114);
    FUN_00aa13c0(*(undefined4 *)(param_1 + 100));
    *(undefined1 *)(param_1 + 0x6a) = 0;
    FUN_016dd1aa(auStack_b18,auStack_480,0x114);
    *(undefined1 *)(param_1 + 0x68) = 1;
    if (piVar8 == (int *)&DAT_00000004) goto LAB_00a9fa5c;
    FUN_00a9b298(local_c40);
    *local_c44 = 1;
    local_8f0 = piVar8;
    FUN_016dd1aa((uint)&local_8f0 | 4,auStack_b18,0x114);
    if (piVar8 != (int *)0x3) {
      FUN_01602d08(&local_6b8);
      local_138 = local_6b8;
      uStack_134 = local_6b4;
      uStack_130 = uStack_6b0;
      uStack_12c = uStack_6ac;
      uStack_128 = uStack_6a8;
      uStack_124 = uStack_6a4;
      local_6b4 = 0x1e;
      local_6b8 = (int *)&DAT_0034f557;
      FUN_016dd1aa(&uStack_6b0,&local_8f0,0x118);
      unaff_r5 = (int *)FUN_00abfef8(&local_6b8,&local_138);
      cVar4 = *(char *)(param_1 + 0x44);
      goto joined_r0x00a9f5a4;
    }
    *(undefined1 *)(param_1 + 0x46) = 0;
    piVar8 = *(int **)(*(int *)(param_1 + 0x30) + 4);
    *(undefined4 *)(*(int *)(param_1 + 0x30) + 4) = *(undefined4 *)(param_1 + 0x34);
    if (piVar8 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar8;
        bVar3 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar3);
      *piVar8 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aa7b14();
      }
    }
    piVar8 = *(int **)(param_1 + 0x38);
    *(undefined2 *)(param_1 + 0x44) = 0;
    if (piVar8 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar8;
        bVar3 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar3);
      *piVar8 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aa7b14(*(undefined4 *)(param_1 + 0x38));
      }
    }
    FUN_00a1f528(puVar16);
    unaff_r5 = (int *)0x0;
    *(undefined1 *)(param_1 + 0x46) = 0;
    goto LAB_00a9fcac;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar12;
    bVar3 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar3);
  *piVar12 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aa7b14(*(undefined4 *)(param_1 + 0x34));
  }
  *(undefined1 *)(param_1 + 0x46) = 0;
LAB_00a9fcac:
  uVar11 = 0;
  *(undefined1 *)(param_1 + 0x47) = 1;
  uVar15 = *(uint *)(param_1 + 8);
  if (uVar15 != 2) {
LAB_00a9fcc4:
    iVar6 = *(int *)(param_1 + 0xc);
    if ((uVar15 & 1) != 0) {
      iVar6 = iVar6 + (*(int *)(*(int *)(param_1 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x34))(iVar6,param_1);
  }
LAB_00a9fcf0:
  return CONCAT44(unaff_r5,uVar11);
}

