// FUN_00ef39b4 @ 00ef39b4 size=1976 calls_out=11 calls_in=1
// strings: 

void FUN_00ef39b4(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  undefined4 uVar13;
  uint uVar14;
  int *piVar15;
  undefined1 uVar16;
  int *piVar17;
  undefined4 *puVar18;
  uint uVar19;
  undefined1 unaff_r10;
  undefined8 uVar20;
  undefined1 auStack_398 [280];
  undefined1 auStack_280 [280];
  int *local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_38;
  undefined8 local_34;
  undefined2 uStack_2c;
  
  piVar15 = (int *)param_2[2];
  if (piVar15 != (int *)0x0) {
    piVar7 = param_2 + 1;
    piVar17 = (int *)*piVar7;
    if (*param_2 == 0) {
      piVar17 = piVar7;
    }
    FUN_00e4b730(&local_168,*piVar17 + 8);
    if (local_168 == (int *)0x3) {
      if ((char)local_164 == '\x02') {
        *param_1 = 3;
        return;
      }
      do {
        iVar5 = *piVar15;
        bVar4 = (bool)hasExclusiveAccess(piVar15);
      } while (!bVar4);
      *piVar15 = iVar5 + 1;
      if (-1 < iVar5) {
        puVar6 = (undefined4 *)*param_3;
        piVar12 = piVar15 + 0x4c;
        if ((char)*piVar12 != '\0') goto LAB_00ef42dc;
        while (bVar4 = (bool)hasExclusiveAccess(piVar12), !bVar4) {
          while( true ) {
            while ((char)*piVar12 != '\0') {
              HintYield();
            }
            if ((char)*piVar12 == '\0') break;
LAB_00ef42dc:
            ClearExclusiveLocal();
          }
        }
        *(char *)piVar12 = '\x01';
        DataMemoryBarrier(0xb);
        cVar2 = (char)piVar15[0x4f];
        DataMemoryBarrier(0xb);
        puVar18 = (undefined4 *)*puVar6;
        iVar5 = puVar6[1];
        if (piVar15[0x4e] == iVar5) {
          puVar6 = (undefined4 *)piVar15[0x4d];
        }
        if (piVar15[0x4e] == iVar5 && puVar6 == puVar18) {
          DataMemoryBarrier(0xb);
          *(char *)piVar12 = '\0';
          if (cVar2 == '\0') goto LAB_00ef3f18;
        }
        else {
          uVar20 = (*(code *)*puVar18)(iVar5);
          (**(code **)(piVar15[0x4d] + 0xc))(piVar15[0x4e]);
          *(undefined8 *)(piVar15 + 0x4d) = uVar20;
          if (cVar2 == '\0') {
            DataMemoryBarrier(0xb);
            *(char *)piVar12 = '\0';
            goto LAB_00ef3f18;
          }
          (*(code *)puVar18[2])(iVar5);
          DataMemoryBarrier(0xb);
          *(char *)piVar12 = '\0';
        }
        iVar5 = *piVar17;
        piVar17 = (int *)(iVar5 + 8);
        do {
          if (*piVar17 != 0) {
            ClearExclusiveLocal();
            FUN_015bf680(piVar17);
            goto LAB_00ef3e30;
          }
          bVar4 = (bool)hasExclusiveAccess(piVar17);
        } while (!bVar4);
        *piVar17 = 1;
        DataMemoryBarrier(0xb);
LAB_00ef3e30:
        uVar19 = 0;
        if ((DAT_018dd988 & 0x7fffffff) == 0) {
          cVar3 = *(char *)(iVar5 + 0xc);
        }
        else {
          uVar19 = FUN_015bf3f8();
          uVar19 = uVar19 ^ 1;
          cVar3 = *(char *)(iVar5 + 0xc);
        }
        if (cVar3 != '\0') {
          local_164._1_3_ = (undefined3)((uint)local_164 >> 8);
          local_164 = CONCAT31(local_164._1_3_,(char)uVar19);
          local_168 = piVar17;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_168,&DAT_0187c31c,&DAT_01886a4c);
        }
        uVar10 = *(uint *)(iVar5 + 0x20);
        uVar14 = *(uint *)(iVar5 + 0x2c);
        if (uVar14 == uVar10) {
          FUN_00aa2a4c();
          uVar10 = *(uint *)(iVar5 + 0x20);
          uVar14 = *(uint *)(iVar5 + 0x2c);
        }
        *(uint *)(iVar5 + 0x2c) = uVar14 + 1;
        uVar14 = *(int *)(iVar5 + 0x28) + uVar14;
        uVar11 = uVar14 - uVar10;
        if (uVar14 < uVar10) {
          uVar11 = uVar14;
        }
        puVar6 = (undefined4 *)(*(int *)(iVar5 + 0x24) + uVar11 * 8);
        *puVar6 = piVar15;
        puVar6[1] = &DAT_0187c32c;
        if (((uVar19 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar9 = FUN_015bf3f8(), iVar9 == 0)) {
          *(undefined1 *)(iVar5 + 0xc) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar17;
          bVar4 = (bool)hasExclusiveAccess(piVar17);
        } while (!bVar4);
        *piVar17 = 0;
        if (iVar5 == 2) {
          FUN_016d6968(0xf0,piVar17,0x81,1);
        }
LAB_00ef3f18:
        piVar12 = (int *)param_2[1];
        if (*param_2 == 0) {
          piVar12 = piVar7;
        }
        DataMemoryBarrier(0xb);
        if (*(char *)(*piVar12 + 0x4c) == '\0') {
          *param_1 = 4;
        }
        else {
          if (*param_2 != 0) {
            piVar7 = (int *)param_2[1];
          }
          FUN_00e4b730(&local_168,*piVar7 + 8);
          uVar16 = (char)piVar17;
          if (local_168 != (int *)0x3) {
            FUN_016dd1aa(auStack_398,(uint)&local_168 | 5,0x113);
            uVar16 = (char)local_164;
          }
          *(undefined1 *)(param_1 + 1) = uVar16;
          *param_1 = (int)local_168;
          FUN_016dd1aa((int)param_1 + 5,auStack_398,0x113);
        }
        if (cVar2 != '\0') {
          return;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar15;
          bVar4 = (bool)hasExclusiveAccess(piVar15);
        } while (!bVar4);
        *piVar15 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aa8be8(piVar15);
          return;
        }
        return;
      }
      goto LAB_00ef40d4;
    }
    uVar13 = 0x118;
    piVar15 = param_1;
    goto LAB_00ef3c84;
  }
  piVar15 = param_2 + 1;
  if (*param_2 != 0) {
    piVar15 = (int *)param_2[1];
  }
  iVar5 = *piVar15;
  piVar15 = (int *)(iVar5 + 8);
  do {
    if (*piVar15 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar15);
      goto LAB_00ef3b24;
    }
    bVar4 = (bool)hasExclusiveAccess(piVar15);
  } while (!bVar4);
  *piVar15 = 1;
  DataMemoryBarrier(0xb);
LAB_00ef3b24:
  uVar19 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = *(char *)(iVar5 + 0xc);
  }
  else {
    uVar19 = FUN_015bf3f8();
    uVar19 = uVar19 ^ 1;
    cVar2 = *(char *)(iVar5 + 0xc);
  }
  if (cVar2 != '\0') {
    local_164._1_3_ = (undefined3)((uint)local_164 >> 8);
    local_164 = CONCAT31(local_164._1_3_,(char)uVar19);
    local_168 = piVar15;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_168,&DAT_0187a7c0,&DAT_01886a4c);
  }
  FUN_00e4847c(iVar5 + 0x10,1);
  if (*(int *)(iVar5 + 0x1c) == 0) {
LAB_00ef3ba0:
    DataMemoryBarrier(0xb);
    if (*(char *)(iVar5 + 0x4c) == '\0') {
      local_34 = (*(code *)**(undefined4 **)*param_3)(((undefined4 *)*param_3)[1]);
      local_164 = 1;
      local_168 = (int *)0x1;
      uStack_2c = 0;
      local_15c = 0;
      local_160 = 0;
      local_38 = 0;
      piVar7 = (int *)thunk_FUN_016d4a50(0x140);
      if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x140);
      }
      FUN_016dd1aa(piVar7,&local_168,0x140);
      do {
        iVar9 = *piVar7;
        bVar4 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar4);
      *piVar7 = iVar9 + 1;
      if (-1 < iVar9) {
        uVar10 = *(uint *)(iVar5 + 0x20);
        uVar14 = *(uint *)(iVar5 + 0x2c);
        if (uVar14 == uVar10) {
          FUN_00aa2a4c();
          uVar10 = *(uint *)(iVar5 + 0x20);
          uVar14 = *(uint *)(iVar5 + 0x2c);
        }
        *(uint *)(iVar5 + 0x2c) = uVar14 + 1;
        uVar14 = *(int *)(iVar5 + 0x28) + uVar14;
        uVar11 = uVar14 - uVar10;
        if (uVar14 < uVar10) {
          uVar11 = uVar14;
        }
        piVar17 = (int *)(*(int *)(iVar5 + 0x24) + uVar11 * 8);
        *piVar17 = (int)piVar7;
        piVar17[1] = (int)&DAT_0187a7e8;
        if ((uVar19 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) {
          iVar9 = FUN_015bf3f8();
          if (iVar9 == 0) {
            *(undefined1 *)(iVar5 + 0xc) = 1;
          }
        }
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar15;
          bVar4 = (bool)hasExclusiveAccess(piVar15);
        } while (!bVar4);
        *piVar15 = 0;
        if (iVar5 == 2) {
          FUN_016d6968(0xf0,piVar15,0x81,1);
          piVar15 = (int *)param_2[2];
        }
        else {
          piVar15 = (int *)param_2[2];
        }
        if (piVar15 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar15;
            bVar4 = (bool)hasExclusiveAccess(piVar15);
          } while (!bVar4);
          *piVar15 = iVar5 + -1;
          if (iVar5 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00aa8be8(param_2[2]);
          }
        }
        param_2[2] = (int)piVar7;
LAB_00ef3de0:
        *param_1 = 4;
        return;
      }
LAB_00ef40d4:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xef40d4);
      (*pcVar1)();
    }
    if (((uVar19 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar9 = FUN_015bf3f8(), iVar9 == 0)) {
      *(undefined1 *)(iVar5 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar15;
      bVar4 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar4);
    *piVar15 = 0;
    if (iVar5 == 2) {
      FUN_016d6968(0xf0,piVar15,0x81,1);
    }
    iVar9 = 3;
  }
  else {
    *(int *)(iVar5 + 0x1c) = *(int *)(iVar5 + 0x1c) + -1;
    uVar10 = *(int *)(iVar5 + 0x18) + 1;
    uVar14 = uVar10 - *(uint *)(iVar5 + 0x10);
    if (uVar10 < *(uint *)(iVar5 + 0x10)) {
      uVar14 = uVar10;
    }
    piVar7 = (int *)(*(int *)(iVar5 + 0x14) + *(int *)(iVar5 + 0x18) * 0x118);
    iVar9 = *piVar7;
    unaff_r10 = (undefined1)piVar7[1];
    *(uint *)(iVar5 + 0x18) = uVar14;
    if (iVar9 == 3) goto LAB_00ef3ba0;
    FUN_016dd1aa(auStack_280,(int)piVar7 + 5,0x113);
    if (((uVar19 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar8 = FUN_015bf3f8(), iVar8 == 0)) {
      *(undefined1 *)(iVar5 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar15;
      bVar4 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar4);
    *piVar15 = 0;
    if (iVar5 == 2) {
      FUN_016d6968(0xf0,piVar15,0x81,1);
    }
    if (iVar9 == 4) goto LAB_00ef3de0;
    FUN_016dd1aa(&local_168,auStack_280,0x113);
  }
  *(undefined1 *)(param_1 + 1) = unaff_r10;
  piVar15 = (int *)((int)param_1 + 5);
  *param_1 = iVar9;
  uVar13 = 0x113;
LAB_00ef3c84:
  FUN_016dd1aa(piVar15,&local_168,uVar13);
  return;
}

