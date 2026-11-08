// FUN_0140b4bc @ 0140b4bc size=1404 calls_out=18 calls_in=3
// strings: assertion failed: !bucket::is_tombstone(current_bucket_ptr) | assertion failed: bucket::is_tombstone(previous_bucket_ptr)

void FUN_0140b4bc(uint *param_1,int *param_2,uint *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  char cVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  uint **ppuVar11;
  int *piVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined *puVar18;
  int *piVar19;
  uint *puVar20;
  int *piVar21;
  int *piVar22;
  uint *puVar23;
  undefined8 uVar24;
  int local_68;
  undefined4 local_64;
  int local_60;
  uint *local_5c;
  int *local_58;
  int local_54;
  int local_50;
  undefined4 *local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  undefined4 local_3c;
  undefined1 local_38;
  int local_34;
  uint *local_30;
  uint local_28;
  
  piVar19 = param_2 + 2;
  uVar24 = FUN_013f5d14(*piVar19,param_2[3],param_2[4],param_2[5],param_3);
  uVar15 = (uint)((ulonglong)uVar24 >> 0x20);
  uVar13 = (uint)uVar24;
  piVar5 = (int *)thunk_FUN_01be5118(8);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  *piVar5 = 1;
  piVar5[1] = 0;
  do {
    uVar6 = *param_3;
    bVar2 = (bool)hasExclusiveAccess(param_3);
  } while (!bVar2);
  *param_3 = uVar6 + 1;
  if (-1 < (int)uVar6) {
    do {
      iVar7 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar7 + 1;
    if (-1 < iVar7) {
      uVar17 = param_2[7] & 0x3f;
      uVar6 = uVar13 >> uVar17 | uVar15 << (0x20 - uVar17 & 0xff);
      if (-1 < (int)(uVar17 - 0x20)) {
        uVar6 = uVar15 >> (uVar17 - 0x20 & 0xff);
      }
      uVar17 = 0;
      if (param_2[7] != 0x40) {
        uVar17 = uVar6;
      }
      if ((uint)param_2[1] <= uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar17,param_2[1],&DAT_01cf3dd8);
      }
      iVar7 = *param_2;
      uVar8 = FUN_013f0d78();
      iVar7 = iVar7 + uVar17 * 8;
      local_64 = uVar8;
      piVar9 = (int *)FUN_0140b398(iVar7);
      piVar10 = (int *)(iVar7 + 4);
      local_68 = 2;
      puVar23 = param_3;
      piVar21 = piVar9;
      piVar22 = piVar5;
      do {
        uVar6 = piVar21[1];
        if ((uVar6 ^ uVar6 - 1) <= uVar6 - 1) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(&DAT_00475d7a,0x36,&DAT_01cf35b0);
        }
        cVar4 = FUN_0160a118(uVar6 >> 1,piVar21 + 5,piVar10);
        if (cVar4 == '\x03') {
          iVar16 = piVar21[1];
          local_60 = local_68;
          uVar6 = iVar16 - 1U & uVar13;
          local_5c = puVar23;
          local_58 = piVar22;
          if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar6,0,&DAT_01cf3570);
          }
          local_4c = &local_64;
          local_38 = 1;
          local_3c = 0;
          local_54 = *piVar21;
          local_44 = local_54 + uVar6 * 4;
          local_50 = iVar16;
          local_48 = uVar6;
          local_40 = uVar6;
LAB_0140b668:
          FUN_013f4d28(&local_34,&local_54);
          uVar6 = local_28;
          puVar3 = local_30;
          piVar22 = local_58;
          puVar23 = local_5c;
          if ((local_34 == 1) && (local_30 != (uint *)0x0)) {
            piVar22 = (int *)(local_28 & 0xfffffff8);
            if (piVar22 != (int *)0x0) goto code_r0x0140b698;
            goto LAB_0140b730;
          }
          piVar12 = (int *)FUN_013f653c(piVar21,&local_64,*piVar19,param_2[3],param_2[4],param_2[5],
                                        0);
        }
        else {
          piVar12 = (int *)FUN_013f653c(piVar21,&local_64,*piVar19,param_2[3],param_2[4],param_2[5],
                                        cVar4);
        }
        if (piVar12 != (int *)0x0) {
          piVar21 = piVar12;
        }
      } while( true );
    }
LAB_0140b88c:
                    /* WARNING: Subroutine does not return */
    FUN_0197a954();
  }
  goto LAB_0140ba48;
LAB_0140b828:
  do {
    bVar2 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar2);
  *piVar10 = *piVar10 + 1;
  puVar23 = (uint *)0x0;
  goto LAB_0140b8c8;
LAB_0140b89c:
  do {
    bVar2 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar2);
  *piVar10 = *piVar10 + 1;
  puVar23 = (uint *)0x0;
  FUN_013f4e60(uVar8,uVar6);
  goto LAB_0140b8c8;
code_r0x0140b698:
  ppuVar11 = (uint **)((uint)local_5c & 0xfffffff8);
  puVar23 = (uint *)*piVar22;
  if (local_68 == 2) {
    ppuVar11 = &local_5c;
  }
  puVar20 = *ppuVar11;
  if ((puVar23 != puVar20) &&
     (((((iVar16 = FUN_013cad2c(puVar23 + 2,puVar20 + 2), iVar16 == 0 ||
         ((short)puVar23[0x14] != (short)puVar20[0x14])) ||
        (((short)puVar23[0x14] == 0x24 &&
         (*(short *)((int)puVar23 + 0x52) != *(short *)((int)puVar20 + 0x52))))) ||
       ((uint)(ushort)puVar23[0x13] != (uint)(ushort)puVar20[0x13])) ||
      (((ushort)puVar23[0x13] - 5 < 2 &&
       (*(short *)((int)puVar23 + 0x4e) != *(short *)((int)puVar20 + 0x4e))))))) goto LAB_0140b668;
  if ((uVar6 & 2) != 0) {
LAB_0140b730:
    piVar22 = local_58;
    puVar23 = local_5c;
    if (local_68 == 2) {
      puVar20 = (uint *)thunk_FUN_01be5118(8);
      if (puVar20 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,8);
      }
      *puVar20 = (uint)puVar23;
      puVar20[1] = (uint)piVar22;
    }
    else {
      puVar20 = local_5c;
    }
    if (*puVar3 == uVar6) {
      DataMemoryBarrier(0xb);
      bVar2 = (bool)hasExclusiveAccess(puVar3);
      if (bVar2) {
        *puVar3 = (uint)puVar20;
        DataMemoryBarrier(0xb);
        if (uVar6 < 8) goto LAB_0140b828;
        if ((uVar6 & 2) != 0) goto LAB_0140b89c;
        puVar18 = &DAT_01cf3d98;
        pcVar14 = "assertion failed: bucket::is_tombstone(previous_bucket_ptr)";
        goto LAB_0140ba18;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    local_68 = 3;
    local_60 = 3;
    local_38 = 1;
    local_5c = puVar20;
    goto LAB_0140b668;
  }
  FUN_013f56dc(&local_60);
  if (piVar22 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01cf3d78);
  }
  if ((uVar6 & 2) != 0) {
    puVar18 = &DAT_01cf3d88;
    pcVar14 = "assertion failed: !bucket::is_tombstone(current_bucket_ptr)";
LAB_0140ba18:
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(pcVar14,0x3b,puVar18);
  }
  puVar23 = (uint *)piVar22[1];
  do {
    uVar6 = *puVar23;
    bVar2 = (bool)hasExclusiveAccess(puVar23);
  } while (!bVar2);
  *puVar23 = uVar6 + 1;
  if (0x7fffffff < uVar6) goto LAB_0140b88c;
LAB_0140b8c8:
  FUN_0140b280(iVar7,uVar8,piVar9,piVar21);
  FUN_013f0f2c(uVar8);
  if (puVar23 == (uint *)0x0) {
    piVar19 = param_2 + 6;
    do {
      bVar2 = (bool)hasExclusiveAccess(piVar19);
    } while (!bVar2);
    *piVar19 = *piVar19 + 1;
    do {
      uVar13 = *param_3;
      bVar2 = (bool)hasExclusiveAccess(param_3);
    } while (!bVar2);
    *param_3 = uVar13 + 1;
    if (-1 < (int)uVar13) {
      param_1[2] = (uint)param_2;
      *(undefined8 *)param_1 = uVar24;
      param_1[3] = (uint)param_3;
      param_1[4] = (uint)piVar5;
      return;
    }
  }
  else {
    do {
      uVar6 = *param_3;
      bVar2 = (bool)hasExclusiveAccess(param_3);
    } while (!bVar2);
    *param_3 = uVar6 + 1;
    if (-1 < (int)uVar6) {
      *param_1 = uVar13;
      param_1[4] = (uint)puVar23;
      param_1[1] = uVar15;
      param_1[2] = (uint)param_2;
      param_1[3] = (uint)param_3;
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        thunk_FUN_01be4678(piVar5);
      }
      return;
    }
  }
LAB_0140ba48:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x140ba48);
  (*pcVar1)();
}

