// FUN_010fc484 @ 010fc484 size=3404 calls_out=17 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010fc484(char *param_1,int param_2,uint *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  char cVar10;
  int *piVar11;
  int *piVar12;
  uint *puVar13;
  int *piVar14;
  uint uVar15;
  uint *puVar16;
  undefined *puVar17;
  bool bVar18;
  undefined8 uVar19;
  uint local_98;
  uint *local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint *local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined4 local_60;
  uint *local_58;
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  int *local_30;
  int *local_2c;
  undefined1 local_28;
  
  puVar16 = (uint *)(param_2 + 8);
  do {
    if (*puVar16 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(puVar16);
      goto LAB_010fc4bc;
    }
    bVar18 = (bool)hasExclusiveAccess(puVar16);
  } while (!bVar18);
  *puVar16 = 1;
  DataMemoryBarrier(0xb);
LAB_010fc4bc:
  local_98 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar10 = *(char *)(param_2 + 0xc);
  }
  else {
    local_98 = FUN_015bf3f8();
    local_98 = local_98 ^ 1;
    cVar10 = *(char *)(param_2 + 0xc);
  }
  if (cVar10 != '\0') {
    local_54._1_3_ = (undefined3)(local_54 >> 8);
    local_54 = CONCAT31(local_54._1_3_,(char)local_98);
    local_58 = puVar16;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_58,&DAT_01886a2c,&DAT_01886a4c);
  }
  DataMemoryBarrier(0xb);
  if (*(char *)(param_2 + 0x4c) == '\0') {
    iVar7 = *(int *)(param_2 + 0x2c);
    if (iVar7 != 0) {
      local_70 = (uint *)*param_3;
      uStack_6c = param_3[1];
      uStack_68 = param_3[2];
      uStack_64 = param_3[3];
      local_60 = param_3[4];
      uVar8 = (uint)&local_70 | 1;
      while (cVar10 = (char)local_70, iVar7 != 0) {
        *(int *)(param_2 + 0x2c) = iVar7 + -1;
        uVar3 = *(int *)(param_2 + 0x28) + 1;
        puVar9 = (undefined4 *)(*(int *)(param_2 + 0x24) + *(int *)(param_2 + 0x28) * 8);
        piVar12 = (int *)*puVar9;
        uVar4 = uVar3 - *(uint *)(param_2 + 0x20);
        if (uVar3 < *(uint *)(param_2 + 0x20)) {
          uVar4 = uVar3;
        }
        uVar3 = (uint)local_70 & 0xff;
        *(uint *)(param_2 + 0x28) = uVar4;
        iVar7 = puVar9[1];
        local_70 = (uint *)CONCAT31(local_70._1_3_,5);
        if (uVar3 == 5) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01886a84);
        }
        uVar15 = *(uint *)(iVar7 + 8);
        local_58 = (uint *)CONCAT31(local_58._1_3_,cVar10);
        FUN_016dd1aa((uint)&local_58 | 1,uVar8,0x13);
        uVar4 = uVar15;
        if (uVar15 < 5) {
          uVar4 = 4;
        }
        uVar4 = uVar4 - 1 & 0xfffffff8;
        piVar14 = (int *)((int)piVar12 + uVar4 + 8);
        if (*piVar14 == 1) {
          piVar11 = (int *)((int)piVar12 + uVar4 + 0xc);
          goto LAB_010fc850;
        }
        if (uVar3 == 6) {
          bVar18 = true;
          goto LAB_010fca20;
        }
        local_88 = (uint *)CONCAT31(local_88._1_3_,cVar10);
        FUN_016dd1aa((uint)&local_88 | 1,uVar8,0x13);
        iVar5 = (**(code **)(iVar7 + 0xc))((int)piVar14 + (uVar15 - 1 & 0xffffffe0) + 0x20);
        puVar13 = local_70;
        if (iVar5 == 0) {
          uVar8 = *(uint *)(param_2 + 0x10);
          uVar4 = *(uint *)(param_2 + 0x1c);
          if (uVar4 == uVar8) {
            FUN_010ff4f0();
            uVar8 = *(uint *)(param_2 + 0x10);
            uVar4 = *(uint *)(param_2 + 0x1c);
          }
          uVar3 = *(int *)(param_2 + 0x18) + uVar4;
          *(uint *)(param_2 + 0x1c) = uVar4 + 1;
          uVar4 = uVar3 - uVar8;
          if (uVar3 < uVar8) {
            uVar4 = uVar3;
          }
          puVar13 = (uint *)(*(int *)(param_2 + 0x14) + uVar4 * 0x14);
          *puVar13 = (uint)local_88;
          puVar13[1] = uStack_84;
          puVar13[2] = uStack_80;
          puVar13[3] = uStack_7c;
          puVar13[4] = uStack_78;
          if (((local_98 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
             (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
            *(undefined1 *)(param_2 + 0xc) = 1;
          }
          DataMemoryBarrier(0xb);
          do {
            uVar8 = *puVar16;
            bVar18 = (bool)hasExclusiveAccess(puVar16);
          } while (!bVar18);
          *puVar16 = 0;
          bVar18 = false;
          if (uVar8 == 2) {
            FUN_016d6968(0xf0,puVar16,0x81,1);
          }
          goto LAB_010fca20;
        }
        local_58 = local_70;
        local_54 = uStack_6c;
        local_50 = uStack_68;
        local_4c = uStack_64;
        local_48 = local_60;
        local_70 = local_88;
        uStack_6c = uStack_84;
        uStack_68 = uStack_80;
        uStack_64 = uStack_7c;
        local_60 = uStack_78;
        local_58._0_1_ = (char)puVar13;
        bVar18 = (char)local_58 != '\x05';
        local_58 = puVar13;
        if (bVar18) {
          FUN_010fd504(&local_58);
        }
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar12;
          bVar18 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar18);
        *piVar12 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_010ff130(piVar12,iVar7);
        }
        iVar7 = *(int *)(param_2 + 0x2c);
      }
      if ((char)local_70 != '\x05') {
        FUN_016dd1aa((uint)&local_58 | 1,uVar8,0x13);
        local_58 = (uint *)CONCAT31(local_58._1_3_,cVar10);
        uVar8 = *(uint *)(param_2 + 0x10);
        uVar4 = *(uint *)(param_2 + 0x1c);
        if (uVar4 == uVar8) {
          FUN_010ff4f0();
          uVar8 = *(uint *)(param_2 + 0x10);
          uVar4 = *(uint *)(param_2 + 0x1c);
        }
        uVar3 = *(int *)(param_2 + 0x18) + uVar4;
        *(uint *)(param_2 + 0x1c) = uVar4 + 1;
        uVar4 = uVar3 - uVar8;
        if (uVar3 < uVar8) {
          uVar4 = uVar3;
        }
        puVar13 = (uint *)(*(int *)(param_2 + 0x14) + uVar4 * 0x14);
        *puVar13 = (uint)local_58;
        puVar13[1] = local_54;
        puVar13[2] = local_50;
        puVar13[3] = local_4c;
        puVar13[4] = local_48;
      }
      goto LAB_010fca70;
    }
    puVar13 = (uint *)(param_2 + 0x34);
    if (*puVar13 == 0x80000000) {
      uVar8 = *(uint *)(param_2 + 0x1c);
LAB_010fc758:
      uVar4 = *(uint *)(param_2 + 0x10);
      if (uVar8 == uVar4) {
        FUN_010ff4f0();
        uVar4 = *(uint *)(param_2 + 0x10);
        uVar8 = *(uint *)(param_2 + 0x1c);
      }
      cVar10 = '\0';
      uVar3 = *(int *)(param_2 + 0x18) + uVar8;
      *(uint *)(param_2 + 0x1c) = uVar8 + 1;
      uVar8 = uVar3 - uVar4;
      if (uVar3 < uVar4) {
        uVar8 = uVar3;
      }
      puVar13 = (uint *)(*(int *)(param_2 + 0x14) + uVar8 * 0x14);
      uVar8 = param_3[1];
      uVar4 = param_3[2];
      uVar3 = param_3[3];
      uVar15 = param_3[4];
      *puVar13 = *param_3;
      puVar13[1] = uVar8;
      puVar13[2] = uVar4;
      puVar13[3] = uVar3;
      puVar13[4] = uVar15;
      puVar13 = (uint *)0x3;
      goto joined_r0x010fc518;
    }
    uVar8 = *(uint *)(param_2 + 0x1c);
    if (uVar8 < *(uint *)(param_2 + 0x30)) goto LAB_010fc758;
    uVar19 = thunk_FUN_016de0ee(*(uint *)(param_2 + 0x30),0x248);
    uVar8 = *(uint *)((int)uVar19 + (int)((ulonglong)uVar19 >> 0x20));
    if (uVar8 < 3) {
      piVar12 = (int *)FUN_015f7ed0();
    }
    else {
      piVar12 = (int *)(uVar8 - 8);
      do {
        iVar7 = *piVar12;
        bVar18 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar18);
      *piVar12 = iVar7 + 1;
      if (iVar7 < 0) goto LAB_010fd1d8;
    }
    FUN_016dd1aa((uint)&local_70 | 3,param_3,0x14);
    local_48 = local_48 & 0xffffff00;
    local_4c = 0;
    local_50 = 1;
    local_54 = 1;
    local_58 = (uint *)0x1;
    FUN_016dd1aa((int)&local_48 + 1,&local_70,0x17);
    local_30 = piVar12;
    puVar6 = (uint *)thunk_FUN_016d4a50(0x2c);
    if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x2c);
    }
    *puVar6 = (uint)local_58;
    puVar6[1] = local_54;
    puVar6[2] = local_50;
    puVar6[3] = local_4c;
    puVar6[4] = local_48;
    puVar6[5] = local_44;
    puVar6[6] = uStack_40;
    puVar6[7] = uStack_3c;
    puVar6[8] = uStack_38;
    puVar6[9] = uStack_34;
    puVar6[10] = (uint)local_30;
    uVar8 = *puVar13;
    if (uVar8 == 0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01886a74);
    }
    do {
      uVar4 = *puVar6;
      bVar18 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar18);
    *puVar6 = uVar4 + 1;
    if ((int)uVar4 < 0) {
LAB_010fd1d8:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x10fd1d8);
      (*pcVar1)();
    }
    uVar4 = *(uint *)(param_2 + 0x40);
    if (uVar4 == uVar8) {
      FUN_010ff478(puVar13);
      uVar8 = *(uint *)(param_2 + 0x34);
      uVar4 = *(uint *)(param_2 + 0x40);
    }
    uVar3 = *(int *)(param_2 + 0x3c) + uVar4;
    *(uint *)(param_2 + 0x40) = uVar4 + 1;
    uVar4 = uVar3 - uVar8;
    if (uVar3 < uVar8) {
      uVar4 = uVar3;
    }
    piVar12 = (int *)(*(int *)(param_2 + 0x38) + uVar4 * 8);
    *piVar12 = (int)puVar6;
    piVar12[1] = (int)&DAT_01886a5c;
    if (((local_98 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
      *(undefined1 *)(param_2 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      uVar8 = *puVar16;
      bVar18 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar18);
    *puVar16 = 0;
    if (uVar8 == 2) {
      FUN_016d6968(0xf0,puVar16,0x81,1);
    }
    puVar16 = puVar6 + 3;
    DataMemoryBarrier(0xb);
    if (*(char *)(param_2 + 0x4c) == '\0') {
      puVar17 = &DAT_01886af4;
LAB_010fcc58:
      if (puVar6[2] == 1) {
        do {
          if (*puVar16 != 0) {
            ClearExclusiveLocal();
            FUN_015bf680(puVar16);
            goto LAB_010fcc80;
          }
          bVar18 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar18);
        *puVar16 = 1;
        DataMemoryBarrier(0xb);
LAB_010fcc80:
        uVar8 = 0;
        if ((DAT_018dd988 & 0x7fffffff) == 0) {
          cVar10 = (char)puVar6[4];
        }
        else {
          uVar8 = FUN_015bf3f8();
          uVar8 = uVar8 ^ 1;
          cVar10 = (char)puVar6[4];
        }
        if (cVar10 != '\0') {
          local_54._1_3_ = (undefined3)(local_54 >> 8);
          local_54 = CONCAT31(local_54._1_3_,(char)uVar8);
          local_58 = puVar16;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_58,&DAT_01886a1c,&DAT_01886a94);
        }
        if ((char)puVar6[5] != '\x05') goto code_r0x010fccb0;
        if (((uVar8 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
          *(undefined1 *)(puVar6 + 4) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          uVar8 = *puVar16;
          bVar18 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar18);
        *puVar16 = 0;
        if (uVar8 != 2) goto LAB_010fcd94;
        FUN_016d6968(0xf0,puVar16,0x81,1);
        uVar8 = puVar6[2];
        goto joined_r0x010fd1c4;
      }
      goto LAB_010fd1d0;
    }
LAB_010fcd94:
    uVar8 = puVar6[2];
joined_r0x010fd1c4:
    if (uVar8 != 1) {
      puVar17 = &DAT_01886aa4;
LAB_010fd1d0:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(puVar17);
    }
    do {
      if (*puVar16 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(puVar16);
        goto LAB_010fcdc0;
      }
      bVar18 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar18);
    *puVar16 = 1;
    DataMemoryBarrier(0xb);
LAB_010fcdc0:
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      if ((char)puVar6[4] != '\0') {
        uVar8 = 0;
LAB_010fd0e4:
        local_54 = CONCAT31(local_54._1_3_,(char)uVar8);
        local_58 = puVar16;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_58,&DAT_01886a1c,&DAT_01886a94);
      }
      cVar10 = (char)puVar6[5];
      FUN_016dd1aa(&local_58,(int)puVar6 + 0x15,0x13);
      *(undefined1 *)(puVar6 + 5) = 5;
LAB_010fce00:
      if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
        *(undefined1 *)(puVar6 + 4) = 1;
      }
    }
    else {
      uVar8 = FUN_015bf3f8();
      uVar8 = uVar8 ^ 1;
      if ((char)puVar6[4] != '\0') goto LAB_010fd0e4;
      cVar10 = (char)puVar6[5];
      FUN_016dd1aa(&local_58,(int)puVar6 + 0x15,0x13);
      *(undefined1 *)(puVar6 + 5) = 5;
      if (uVar8 == 0) goto LAB_010fce00;
    }
    DataMemoryBarrier(0xb);
    do {
      uVar8 = *puVar16;
      bVar18 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar18);
    *puVar16 = 0;
    if (uVar8 == 2) {
      FUN_016d6968(0xf0,puVar16,0x81,1);
    }
    puVar13 = (uint *)0x3;
    if (cVar10 != '\x05') {
      puVar13 = (uint *)0x1;
      uVar8 = local_60 >> 0x18;
      local_60._3_1_ = (undefined1)uVar8;
      local_60._0_3_ = (undefined3)local_48;
      local_70 = local_58;
      uStack_6c = local_54;
      uStack_68 = local_50;
      uStack_64 = local_4c;
    }
    DataMemoryBarrier(0xb);
    do {
      uVar8 = *puVar6;
      bVar18 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar18);
    *puVar6 = uVar8 - 1;
    if (uVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010fe698(puVar6);
    }
  }
  else {
    cVar10 = (char)*param_3;
    FUN_016dd1aa(&local_70,(char *)((int)param_3 + 1),0x13);
    puVar13 = (uint *)0x1;
joined_r0x010fc518:
    if (((local_98 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
      *(undefined1 *)(param_2 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      uVar8 = *puVar16;
      bVar18 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar18);
    *puVar16 = 0;
    if (uVar8 == 2) {
      FUN_016d6968(0xf0,puVar16,0x81,1);
    }
  }
  if (puVar13 != (uint *)0x3) {
    local_54 = CONCAT31(local_54._1_3_,cVar10);
    FUN_016dd1aa((int)&local_54 + 1,&local_70,0x13);
    local_58 = puVar13;
    if (puVar13 != (uint *)0x1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_01886a3c);
    }
    *param_1 = cVar10;
    FUN_016dd1aa(param_1 + 1,&local_70,0x13);
    return;
  }
LAB_010fcab4:
  *param_1 = '\x05';
  return;
  while (bVar18 = (bool)hasExclusiveAccess(piVar11), !bVar18) {
LAB_010fc850:
    if (*piVar11 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar11);
      goto LAB_010fc86c;
    }
  }
  *piVar11 = 1;
  DataMemoryBarrier(0xb);
LAB_010fc86c:
  uVar8 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar10 = *(char *)((int)piVar12 + uVar4 + 0x10);
  }
  else {
    uVar8 = FUN_015bf3f8();
    uVar8 = uVar8 ^ 1;
    cVar10 = *(char *)((int)piVar12 + uVar4 + 0x10);
  }
  if (cVar10 != '\0') {
    local_28 = (undefined1)uVar8;
    local_2c = piVar11;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_01886a1c,&DAT_01886a94);
  }
  puVar13 = (uint *)((int)piVar12 + uVar4 + 0x14);
  if ((char)*puVar13 != '\x05') {
    FUN_010fd504(puVar13);
  }
  *puVar13 = (uint)local_58;
  *(uint *)((int)piVar12 + uVar4 + 0x18) = local_54;
  *(uint *)((int)piVar12 + uVar4 + 0x1c) = local_50;
  *(uint *)((int)piVar12 + uVar4 + 0x20) = local_4c;
  *(uint *)((int)piVar12 + uVar4 + 0x24) = local_48;
  if (((uVar8 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar5 = FUN_015bf3f8(), iVar5 == 0))
  {
    *(undefined1 *)((int)piVar12 + uVar4 + 0x10) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar11;
    bVar18 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar18);
  *piVar11 = 0;
  if (iVar5 == 2) {
    FUN_016d6968(0xf0,piVar11,0x81,1);
  }
  if (((local_98 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
    *(undefined1 *)(param_2 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    uVar8 = *puVar16;
    bVar18 = (bool)hasExclusiveAccess(puVar16);
  } while (!bVar18);
  *puVar16 = 0;
  if (uVar8 == 2) {
    FUN_016d6968(0xf0,puVar16,0x81,1);
  }
  bVar18 = false;
  (**(code **)(iVar7 + 0xc))((int)piVar14 + (uVar15 - 1 & 0xffffffe0) + 0x20);
LAB_010fca20:
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar12;
    bVar2 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar2);
  *piVar12 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_010ff130(piVar12,iVar7);
  }
  if ((char)local_70 != '\x05') {
    FUN_010fd504(&local_70);
  }
  if (!bVar18) goto LAB_010fcab4;
LAB_010fca70:
  if (((local_98 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
    *(undefined1 *)(param_2 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    uVar8 = *puVar16;
    bVar18 = (bool)hasExclusiveAccess(puVar16);
  } while (!bVar18);
  *puVar16 = 0;
  if (uVar8 == 2) {
    FUN_016d6968(0xf0,puVar16,0x81,1);
    *param_1 = '\x05';
    return;
  }
  goto LAB_010fcab4;
code_r0x010fccb0:
  if (((uVar8 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar7 = FUN_015bf3f8(), iVar7 == 0))
  {
    *(undefined1 *)(puVar6 + 4) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    uVar8 = *puVar16;
    bVar18 = (bool)hasExclusiveAccess(puVar16);
  } while (!bVar18);
  *puVar16 = 0;
  if (uVar8 == 2) {
    FUN_016d6968(0xf0,puVar16,0x81,1);
  }
  FUN_015fbbf8();
  DataMemoryBarrier(0xb);
  if (*(char *)(param_2 + 0x4c) != '\0') goto LAB_010fcd94;
  goto LAB_010fcc58;
}

