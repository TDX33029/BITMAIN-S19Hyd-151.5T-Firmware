// FUN_00a21500 @ 00a21500 size=2320 calls_out=21 calls_in=1
// strings: 

undefined4 FUN_00a21500(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  char cVar4;
  char cVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  uint *puVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  bool bVar19;
  undefined8 uVar20;
  uint local_2a0;
  uint local_29c;
  undefined4 local_298;
  undefined4 local_294;
  int local_290;
  int local_28c;
  undefined4 local_288;
  uint local_284;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x87)) {
  case 0:
    param_1[0x10] = *param_1;
    param_1[0x11] = param_1[1];
    param_1[0x12] = param_1[2];
    param_1[0x13] = param_1[3];
    param_1[0x14] = param_1[4];
    param_1[0x15] = param_1[5];
    param_1[0x16] = param_1[6];
    param_1[0x17] = param_1[7];
    param_1[0x18] = param_1[8];
    param_1[0x19] = param_1[9];
    param_1[0x1a] = param_1[10];
    param_1[0x1b] = param_1[0xb];
    param_1[0x1c] = param_1[0xc];
    param_1[0x1d] = param_1[0xd];
    param_1[0x1e] = param_1[0xe];
    param_1[0x1f] = param_1[0xf];
    iVar14 = param_1[0x14];
    param_1[0x44] = &DAT_3b9aca00;
    param_1[0x40] = &DAT_3b9aca00;
    puVar13 = (uint *)(iVar14 + 0x98);
    uVar8 = *(uint *)(iVar14 + 0x98);
    if ((uVar8 < 0xfffffff0) && ((uVar8 & 8) == 0)) {
      if (*puVar13 != uVar8) {
        ClearExclusiveLocal();
        goto LAB_00a21608;
      }
      bVar19 = (bool)hasExclusiveAccess(puVar13);
      if (!bVar19) goto LAB_00a21608;
      *puVar13 = uVar8 + 0x10;
      DataMemoryBarrier(0xb);
    }
    else {
LAB_00a21608:
      FUN_0127d66c(puVar13);
    }
    FUN_0128236c(puVar13);
    FUN_0128236c((uint)puVar13 | 1);
    DataMemoryBarrier(0xb);
    uVar2 = *(ushort *)(iVar14 + 0x9e);
    sVar3 = *(short *)(iVar14 + 0x9c);
    FUN_01282570(puVar13);
    FUN_01282570((uint)puVar13 | 1);
    DataMemoryBarrier(0xb);
    do {
      uVar8 = *puVar13;
      bVar19 = (bool)hasExclusiveAccess(puVar13);
    } while (!bVar19);
    *puVar13 = uVar8 - 0x10;
    if ((uVar8 & 0xfffffff2) == 0x12) {
      FUN_0127d34c(puVar13);
    }
    iVar14 = param_1[0x18];
    param_1[0x48] = (uint)(sVar3 != 0);
    param_1[0x49] = (uint)uVar2;
    puVar13 = (uint *)(iVar14 + 0x98);
    uVar8 = *(uint *)(iVar14 + 0x98);
    if ((uVar8 < 0xfffffff0) && ((uVar8 & 8) == 0)) {
      if (*puVar13 != uVar8) {
        ClearExclusiveLocal();
        goto LAB_00a216c8;
      }
      bVar19 = (bool)hasExclusiveAccess(puVar13);
      if (!bVar19) goto LAB_00a216c8;
      *puVar13 = uVar8 + 0x10;
      DataMemoryBarrier(0xb);
    }
    else {
LAB_00a216c8:
      FUN_0127d66c(puVar13);
    }
    FUN_0128236c(puVar13);
    FUN_0128236c((uint)puVar13 | 1);
    DataMemoryBarrier(0xb);
    if (*(int *)(iVar14 + 0x9c) == -0x80000000) {
      param_1[0x4a] = 0x80000000;
    }
    else {
      iVar18 = *(int *)(iVar14 + 0xa4);
      iVar16 = *(int *)(iVar14 + 0xa0);
      if (iVar18 == 0) {
        iVar7 = 1;
      }
      else {
        iVar7 = thunk_FUN_016d4a50(iVar18);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar18);
        }
      }
      FUN_016dd1aa(iVar7,iVar16,iVar18);
      if (*(int *)(iVar14 + 0xa8) == -0x80000000) {
        iVar14 = -0x80000000;
      }
      else {
        uVar15 = *(undefined4 *)(iVar14 + 0xac);
        iVar14 = *(int *)(iVar14 + 0xb0);
        if (iVar14 == 0) {
          iVar16 = 1;
        }
        else {
          iVar16 = thunk_FUN_016d4a50(iVar14);
          if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar14);
          }
        }
        FUN_016dd1aa(iVar16,uVar15,iVar14);
      }
      param_1[0x4a] = iVar18;
      param_1[0x4b] = iVar7;
      param_1[0x4c] = iVar18;
      param_1[0x4d] = iVar14;
      param_1[0x4e] = iVar16;
      param_1[0x4f] = iVar14;
    }
    FUN_01282570(puVar13);
    FUN_01282570((uint)puVar13 | 1);
    DataMemoryBarrier(0xb);
    do {
      uVar8 = *puVar13;
      bVar19 = (bool)hasExclusiveAccess(puVar13);
    } while (!bVar19);
    *puVar13 = uVar8 - 0x10;
    if ((uVar8 & 0xfffffff2) == 0x12) {
      FUN_0127d34c(puVar13);
    }
    *(undefined1 *)((int)param_1 + 0x21d) = 0;
    FUN_00a83070(param_1 + 0x10,param_1 + 0x20,param_1 + 0x42,param_1[0x48]);
    pbVar12 = (byte *)((int)param_1 + 0x21e);
    *pbVar12 = 0;
    param_1[0x69] = param_1 + 0x1a;
    param_1[100] = param_1 + 0x42;
    *(undefined1 *)(param_1 + 0x77) = 0;
    *(undefined1 *)(param_1 + 0x65) = 0;
    *(undefined1 *)(param_1 + 0x86) = 0;
    *(undefined1 *)(param_1 + 99) = 0;
    puVar6 = param_1 + 0x14;
    param_1[0x78] = param_1 + 0x18;
    piVar17 = param_1 + 0x52;
    *piVar17 = (int)puVar6;
    param_1[0x50] = pbVar12;
    param_1[0x51] = piVar17;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186ba64);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186ba64);
  case 3:
    pbVar12 = (byte *)param_1[0x50];
    piVar17 = (int *)param_1[0x51];
    puVar6 = (undefined4 *)0x0;
  }
  uVar20 = thunk_FUN_016de0ee(puVar6,0x40);
  iVar14 = (int)uVar20 + (int)((ulonglong)uVar20 >> 0x20);
  if (*(char *)(iVar14 + 0x38) != '\x01') {
    if (*(char *)(iVar14 + 0x38) == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_015f853c(&DAT_018ae900);
    }
    FUN_015e8e6c(iVar14,FUN_00a303f4);
    *(undefined1 *)(iVar14 + 0x38) = 1;
  }
  cVar4 = *(char *)(iVar14 + 0x30);
  bVar19 = cVar4 == '\x01';
  if (bVar19) {
    cVar4 = *(char *)(iVar14 + 0x31);
  }
  if (bVar19 && cVar4 == '\0') {
    FUN_016455a4(*param_2,param_2[1]);
LAB_00a2211c:
    *(undefined1 *)(param_1 + 0x87) = 3;
    return 1;
  }
  if ((*(uint *)(iVar14 + 0x24) & 1) == 0) {
    uVar20 = FUN_0164e918();
    if ((uint)uVar20 < 2) {
      uVar20 = CONCAT44((int)((ulonglong)uVar20 >> 0x20),1);
    }
  }
  else {
    uVar20 = CONCAT44(*(undefined4 *)(iVar14 + 0x28),*(undefined4 *)(iVar14 + 0x2c));
  }
  uVar8 = (uint)((ulonglong)uVar20 >> 0x20);
  uVar10 = (uint)uVar20;
  uVar8 = uVar8 ^ uVar8 << 0x11;
  puVar13 = (uint *)(piVar17 + 0x2c);
  iVar16 = 0;
  *(undefined4 *)(iVar14 + 0x24) = 1;
  uVar8 = uVar10 >> 0x10 ^ uVar8 >> 7 ^ uVar10 ^ uVar8;
  *(uint *)(iVar14 + 0x2c) = uVar8;
  bVar19 = false;
  *(uint *)(iVar14 + 0x28) = uVar10;
LAB_00a21964:
  uVar9 = (uVar8 + uVar10 >> 0x1e) + iVar16;
  iVar16 = iVar16 + 1;
  switch(uVar9 & 3) {
  case 0:
    if ((*pbVar12 & 1) != 0) break;
    iVar18 = FUN_00a7df24(piVar17 + 0x12,param_2);
    bVar19 = true;
    if (iVar18 == 0) {
      *pbVar12 = *pbVar12 | 1;
      uVar8 = 2;
      goto LAB_00a21cc4;
    }
    break;
  case 1:
    if ((*pbVar12 & 2) == 0) {
      cVar4 = FUN_00a7e67c(piVar17 + 0x17,param_2);
      bVar19 = true;
      if (cVar4 != '\x02') {
        *pbVar12 = *pbVar12 | 2;
        uVar8 = 3;
        goto LAB_00a21cc4;
      }
    }
    break;
  case 2:
    if ((*pbVar12 & 4) == 0) {
      FUN_00a7e068(&local_2a0,piVar17,param_2);
      if ((short)local_2a0 != 2) {
        *pbVar12 = *pbVar12 | 4;
        uVar8 = local_2a0;
        if ((local_2a0 & 0xffff) == 7) goto LAB_00a2211c;
        goto LAB_00a21cc4;
      }
      bVar19 = true;
    }
    break;
  case 3:
    if ((*pbVar12 & 8) != 0) break;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)piVar17[0x34]) {
    case '\0':
      iVar18 = *(int *)piVar17[0x26];
      *(undefined1 *)((int)piVar17 + 0xad) = 0;
      piVar17[0x29] = iVar18 + 8;
      piVar17[0x2a] = (int)((int *)piVar17[0x26] + 1);
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018acd5c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018acd5c);
    }
    if (*(char *)(iVar14 + 0x38) != '\x01') {
      if (*(char *)(iVar14 + 0x38) == '\x02') {
        cVar4 = '\0';
        cVar1 = '\0';
        cVar5 = '\x02';
        goto LAB_00a21ab8;
      }
      FUN_015e8e6c(iVar14,FUN_00a303f4);
      *(undefined1 *)(iVar14 + 0x38) = 1;
    }
    cVar4 = *(char *)(iVar14 + 0x31);
    cVar1 = *(char *)(iVar14 + 0x30);
    cVar5 = cVar4;
    if (cVar1 != '\x01') {
LAB_00a21ab0:
      *(char *)(iVar14 + 0x31) = cVar5;
      cVar5 = '\x01';
LAB_00a21ab8:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)piVar17 + 0xad)) {
      case 0:
        *(undefined1 *)(piVar17 + 0x2b) = 0;
        piVar17[0x27] = piVar17[0x29];
        piVar17[0x28] = piVar17[0x2a];
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_018ad404);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_018ad404);
      case 4:
        goto switchD_00a21ac8_caseD_4;
      }
      do {
        iVar18 = piVar17[0x27];
        if (cVar5 != '\x01') {
          if (cVar5 == '\x02') {
                    /* WARNING: Subroutine does not return */
            FUN_015f853c(&DAT_018ae900);
          }
          FUN_015e8e6c(iVar14,FUN_01655ec4);
          *(undefined1 *)(iVar14 + 0x38) = 1;
        }
        if ((*(uint *)(iVar14 + 0x24) & 1) == 0) {
          uVar20 = FUN_0164e918();
          if ((uint)uVar20 < 2) {
            uVar20 = CONCAT44((int)((ulonglong)uVar20 >> 0x20),1);
          }
        }
        else {
          uVar20 = CONCAT44(*(undefined4 *)(iVar14 + 0x28),*(undefined4 *)(iVar14 + 0x2c));
        }
        uVar9 = (uint)((ulonglong)uVar20 >> 0x20);
        uVar11 = (uint)uVar20;
        uVar9 = uVar9 ^ uVar9 << 0x11;
        *(undefined4 *)(iVar14 + 0x24) = 1;
        *(uint *)(iVar14 + 0x28) = uVar11;
        uVar9 = uVar11 >> 0x10 ^ uVar9 >> 7 ^ uVar11 ^ uVar9;
        *(uint *)(iVar14 + 0x2c) = uVar9;
        local_2a0 = uVar9 + uVar11 >> 0x19 & 0x70;
        local_29c = *(uint *)(iVar18 + local_2a0);
        DataMemoryBarrier(0xb);
        local_2a0 = iVar18 + local_2a0;
        *(undefined1 *)(piVar17 + 0x2b) = 1;
        local_29c = local_29c >> 2;
        local_284 = local_284 & 0xffffff00;
        local_288 = 0;
        local_290 = 0;
        local_294 = 0;
        local_298 = 0;
        DataMemoryBarrier(0xb);
        uVar9 = *(uint *)(piVar17[0x27] + 0xac) & 0xfffffffe;
        if (*(uint *)piVar17[0x28] != uVar9) {
          *(uint *)piVar17[0x28] = uVar9;
LAB_00a22810:
          FUN_0163bdc0(&local_2a0);
          if (local_290 != 0) {
            (**(code **)(local_290 + 0xc))(local_28c);
          }
          *(undefined1 *)(piVar17 + 0x2b) = 0;
          *(undefined1 *)(piVar17 + 0x34) = 1;
          *(undefined1 *)((int)piVar17 + 0xad) = 1;
          *pbVar12 = *pbVar12 | 8;
          uVar8 = 5;
          goto LAB_00a21cc4;
        }
        if ((*(uint *)(piVar17[0x27] + 0xac) & 1) != 0) goto LAB_00a22810;
        *(undefined1 *)(piVar17 + 0x2b) = 0;
        *puVar13 = local_2a0;
        piVar17[0x2d] = local_29c;
        piVar17[0x2e] = 0;
        piVar17[0x2f] = 0;
        piVar17[0x30] = 0;
        piVar17[0x31] = local_28c;
        piVar17[0x32] = 0;
        piVar17[0x33] = local_284;
switchD_00a21ac8_caseD_4:
        iVar18 = FUN_0163c044(puVar13,param_2);
        if (iVar18 != 0) goto code_r0x00a21c30;
        FUN_0163bdc0(puVar13);
        if (piVar17[0x30] != 0) {
          (**(code **)(piVar17[0x30] + 0xc))(piVar17[0x31]);
        }
        *(undefined1 *)(piVar17 + 0x2b) = 0;
        cVar5 = *(char *)(iVar14 + 0x38);
      } while( true );
    }
    if (cVar4 != '\0') {
      cVar5 = cVar4 + -1;
      goto LAB_00a21ab0;
    }
    FUN_016455a4(*param_2,param_2[1]);
    goto LAB_00a21950;
  }
LAB_00a2195c:
  if (iVar16 == 4) goto LAB_00a21cb8;
  goto LAB_00a21964;
code_r0x00a21c30:
  *(undefined1 *)((int)piVar17 + 0xad) = 4;
  if (cVar1 != '\0') {
    if (*(char *)(iVar14 + 0x38) != '\x01') {
      if (*(char *)(iVar14 + 0x38) == '\x02') goto LAB_00a21950;
      FUN_015e8e6c(iVar14,FUN_01655ec4);
      *(undefined1 *)(iVar14 + 0x38) = 1;
    }
    *(char *)(iVar14 + 0x31) = cVar4;
    *(undefined1 *)(iVar14 + 0x30) = 1;
  }
LAB_00a21950:
  bVar19 = true;
  *(undefined1 *)(piVar17 + 0x34) = 3;
  goto LAB_00a2195c;
LAB_00a21cb8:
  uVar8 = 6;
  if (!bVar19) {
LAB_00a21cc4:
    FUN_00a0b348(param_1 + 0x52);
    uVar10 = uVar8 - 2;
    if ((uVar8 & 0xffff) < 2) {
      uVar10 = 2;
    }
                    /* WARNING: Could not recover jumptable at 0x00a21cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar15 = (*(code *)(&DAT_00a21cfc + *(int *)(&DAT_00a21cfc + (uVar10 & 0xffff) * 4)))();
    return uVar15;
  }
  goto LAB_00a2211c;
}

