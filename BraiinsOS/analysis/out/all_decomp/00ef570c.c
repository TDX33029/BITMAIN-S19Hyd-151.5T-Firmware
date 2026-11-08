// FUN_00ef570c @ 00ef570c size=1944 calls_out=10 calls_in=2
// strings: 

void FUN_00ef570c(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char extraout_r1;
  char cVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 unaff_r4;
  int *piVar14;
  uint uVar15;
  int *piVar16;
  int *piVar17;
  uint uVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  undefined4 local_68;
  undefined3 uStack_64;
  undefined4 local_58;
  char local_54;
  undefined2 uStack_53;
  undefined1 uStack_51;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int local_38;
  undefined8 local_34;
  undefined4 local_2c;
  
  piVar16 = (int *)param_2[2];
  if (piVar16 == (int *)0x0) {
    piVar16 = param_2 + 1;
    if (*param_2 != 0) {
      piVar16 = (int *)param_2[1];
    }
    iVar4 = *piVar16;
    piVar16 = (int *)(iVar4 + 8);
    do {
      if (*piVar16 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar16);
        goto LAB_00ef5814;
      }
      bVar3 = (bool)hasExclusiveAccess(piVar16);
    } while (!bVar3);
    *piVar16 = 1;
    DataMemoryBarrier(0xb);
LAB_00ef5814:
    uVar18 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar2 = *(char *)(iVar4 + 0xc);
    }
    else {
      uVar18 = FUN_015bf3f8();
      uVar18 = uVar18 ^ 1;
      cVar2 = *(char *)(iVar4 + 0xc);
    }
    if (cVar2 != '\0') {
      local_54 = (char)uVar18;
      local_58 = piVar16;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_58,&DAT_0187a7c0,&DAT_01886a4c);
    }
    FUN_00e480e8(iVar4 + 0x10,1);
    if (*(int *)(iVar4 + 0x1c) != 0) {
      *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + -1;
      uVar12 = *(int *)(iVar4 + 0x18) + 1;
      piVar6 = (int *)(*(int *)(iVar4 + 0x14) + *(int *)(iVar4 + 0x18) * 0xc);
      iVar9 = *piVar6;
      uVar15 = uVar12 - *(uint *)(iVar4 + 0x10);
      if (uVar12 < *(uint *)(iVar4 + 0x10)) {
        uVar15 = uVar12;
      }
      unaff_r4 = (undefined1)piVar6[1];
      *(uint *)(iVar4 + 0x18) = uVar15;
      if (iVar9 != -0x80000000) {
        iVar11 = *(int *)((int)piVar6 + 5);
        iVar7 = piVar6[2];
        if (((uVar18 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar8 = FUN_015bf3f8(), iVar8 == 0)) {
          *(undefined1 *)(iVar4 + 0xc) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar16;
          bVar3 = (bool)hasExclusiveAccess(piVar16);
        } while (!bVar3);
        *piVar16 = 0;
        if (iVar4 == 2) {
          FUN_016d6968(0xf0,piVar16,0x81,1);
        }
        if (iVar9 != -0x7fffffff) {
          local_54 = (char)((uint)iVar7 >> 8);
          uStack_53 = (undefined2)((uint)iVar7 >> 0x10);
          local_58 = (int *)iVar11;
          goto LAB_00ef59e0;
        }
        goto LAB_00ef5b4c;
      }
    }
    DataMemoryBarrier(0xb);
    if (*(char *)(iVar4 + 0x4c) != '\0') {
      if (((uVar18 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar9 = FUN_015bf3f8(), iVar9 == 0)) {
        *(undefined1 *)(iVar4 + 0xc) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar16;
        bVar3 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar3);
      *piVar16 = 0;
      if (iVar4 == 2) {
        FUN_016d6968(0xf0,piVar16,0x81,1);
      }
      iVar9 = -0x80000000;
LAB_00ef59e0:
      *(int **)((int)param_1 + 5) = local_58;
      *(undefined1 *)(param_1 + 1) = unaff_r4;
      *param_1 = iVar9;
      param_1[2] = CONCAT22(uStack_53,CONCAT11(local_54,local_58._3_1_));
      return;
    }
    local_34 = (*(code *)**(undefined4 **)*param_3)(((undefined4 *)*param_3)[1]);
    local_54 = '\x01';
    uStack_53 = 0;
    uStack_51 = 0;
    local_58 = (int *)0x1;
    local_2c = (uint)local_2c._2_2_ << 0x10;
    local_38 = 0;
    iStack_50 = 0;
    piVar6 = (int *)thunk_FUN_016d4a50(0x30);
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x30);
    }
    *piVar6 = (int)local_58;
    piVar6[1] = CONCAT13(uStack_51,CONCAT21(uStack_53,local_54));
    piVar6[2] = iStack_50;
    piVar6[3] = iStack_4c;
    piVar6[4] = iStack_48;
    piVar6[5] = iStack_44;
    piVar6[6] = local_40;
    piVar6[7] = iStack_3c;
    piVar6[8] = local_38;
    *(undefined8 *)(piVar6 + 9) = local_34;
    piVar6[0xb] = local_2c;
    do {
      iVar9 = *piVar6;
      bVar3 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar3);
    *piVar6 = iVar9 + 1;
    if (-1 < iVar9) {
      uVar15 = *(uint *)(iVar4 + 0x20);
      uVar12 = *(uint *)(iVar4 + 0x2c);
      if (uVar12 == uVar15) {
        FUN_00ef311c();
        uVar15 = *(uint *)(iVar4 + 0x20);
        uVar12 = *(uint *)(iVar4 + 0x2c);
      }
      uVar13 = *(int *)(iVar4 + 0x28) + uVar12;
      *(uint *)(iVar4 + 0x2c) = uVar12 + 1;
      uVar12 = uVar13 - uVar15;
      if (uVar13 < uVar15) {
        uVar12 = uVar13;
      }
      piVar17 = (int *)(*(int *)(iVar4 + 0x24) + uVar12 * 8);
      *piVar17 = (int)piVar6;
      piVar17[1] = (int)&DAT_0187a7e8;
      if ((uVar18 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) {
        iVar9 = FUN_015bf3f8();
        if (iVar9 == 0) {
          *(undefined1 *)(iVar4 + 0xc) = 1;
        }
      }
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar16;
        bVar3 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar3);
      *piVar16 = 0;
      if (iVar4 == 2) {
        FUN_016d6968(0xf0,piVar16,0x81,1);
        piVar16 = (int *)param_2[2];
      }
      else {
        piVar16 = (int *)param_2[2];
      }
      if (piVar16 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar16;
          bVar3 = (bool)hasExclusiveAccess(piVar16);
        } while (!bVar3);
        *piVar16 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00e45594(param_2[2]);
        }
      }
      param_2[2] = (int)piVar6;
LAB_00ef5b4c:
      *param_1 = -0x7fffffff;
      return;
    }
  }
  else {
    piVar6 = param_2 + 1;
    piVar17 = (int *)*piVar6;
    if (*param_2 == 0) {
      piVar17 = piVar6;
    }
    FUN_00e4b41c(&local_58,*piVar17 + 8);
    if (local_58 != (int *)0x80000000) {
      *param_1 = (int)local_58;
      param_1[1] = CONCAT13(uStack_51,CONCAT21(uStack_53,local_54));
      param_1[2] = iStack_50;
      return;
    }
    if (local_54 == '\x02') {
      *param_1 = -0x80000000;
      return;
    }
    do {
      iVar4 = *piVar16;
      bVar3 = (bool)hasExclusiveAccess(piVar16);
    } while (!bVar3);
    *piVar16 = iVar4 + 1;
    if (-1 < iVar4) {
      puVar5 = (undefined4 *)*param_3;
      piVar14 = piVar16 + 8;
      do {
        if ((char)*piVar14 == '\0') {
          bVar3 = (bool)hasExclusiveAccess(piVar14);
          if (bVar3) goto code_r0x00ef57b4;
        }
        else {
          ClearExclusiveLocal();
        }
        while ((char)*piVar14 != '\0') {
          HintYield();
        }
      } while( true );
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xef5e34);
  (*pcVar1)();
code_r0x00ef57b4:
  *(char *)piVar14 = '\x01';
  DataMemoryBarrier(0xb);
  cVar2 = (char)piVar16[0xb];
  DataMemoryBarrier(0xb);
  iVar4 = puVar5[1];
  puVar19 = (undefined4 *)*puVar5;
  if (piVar16[10] == iVar4) {
    puVar5 = (undefined4 *)piVar16[9];
  }
  if (piVar16[10] == iVar4 && puVar5 == puVar19) {
    DataMemoryBarrier(0xb);
    *(char *)piVar14 = '\0';
    if (cVar2 == '\0') goto LAB_00ef5c70;
  }
  else {
    uVar20 = (*(code *)*puVar19)(iVar4);
    (**(code **)(piVar16[9] + 0xc))(piVar16[10]);
    *(undefined8 *)(piVar16 + 9) = uVar20;
    if (cVar2 == '\0') {
      DataMemoryBarrier(0xb);
      *(char *)piVar14 = '\0';
      goto LAB_00ef5c70;
    }
    (*(code *)puVar19[2])(iVar4);
    DataMemoryBarrier(0xb);
    *(char *)piVar14 = '\0';
  }
  iVar4 = *piVar17;
  piVar17 = (int *)(iVar4 + 8);
  do {
    if (*piVar17 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar17);
      goto LAB_00ef5b9c;
    }
    bVar3 = (bool)hasExclusiveAccess(piVar17);
  } while (!bVar3);
  *piVar17 = 1;
  DataMemoryBarrier(0xb);
LAB_00ef5b9c:
  uVar18 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar10 = *(char *)(iVar4 + 0xc);
  }
  else {
    uVar18 = FUN_015bf3f8();
    uVar18 = uVar18 ^ 1;
    cVar10 = *(char *)(iVar4 + 0xc);
  }
  if (cVar10 != '\0') {
    local_54 = (char)uVar18;
    local_58 = piVar17;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_58,&DAT_0187c31c,&DAT_01886a4c);
  }
  uVar12 = *(uint *)(iVar4 + 0x20);
  uVar15 = *(uint *)(iVar4 + 0x2c);
  if (uVar15 == uVar12) {
    FUN_00ef311c();
    uVar12 = *(uint *)(iVar4 + 0x20);
    uVar15 = *(uint *)(iVar4 + 0x2c);
  }
  *(uint *)(iVar4 + 0x2c) = uVar15 + 1;
  uVar15 = *(int *)(iVar4 + 0x28) + uVar15;
  uVar13 = uVar15 - uVar12;
  if (uVar15 < uVar12) {
    uVar13 = uVar15;
  }
  puVar5 = (undefined4 *)(*(int *)(iVar4 + 0x24) + uVar13 * 8);
  *puVar5 = piVar16;
  puVar5[1] = &DAT_0187c32c;
  if (((uVar18 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar9 = FUN_015bf3f8(), iVar9 == 0))
  {
    *(undefined1 *)(iVar4 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar17;
    bVar3 = (bool)hasExclusiveAccess(piVar17);
  } while (!bVar3);
  *piVar17 = 0;
  if (iVar4 == 2) {
    FUN_016d6968(0xf0,piVar17,0x81,1);
  }
LAB_00ef5c70:
  piVar17 = (int *)param_2[1];
  if (*param_2 == 0) {
    piVar17 = piVar6;
  }
  DataMemoryBarrier(0xb);
  if (*(char *)(*piVar17 + 0x4c) == '\0') {
    *param_1 = -0x7fffffff;
  }
  else {
    if (*param_2 != 0) {
      piVar6 = (int *)param_2[1];
    }
    FUN_00e4b41c(&local_58,*piVar6 + 8);
    cVar10 = extraout_r1;
    if (local_58 != (int *)0x80000000) {
      local_68._3_1_ = (undefined1)iStack_50;
      local_68 = CONCAT13(local_68._3_1_,CONCAT12(uStack_51,uStack_53));
      uStack_64 = (undefined3)((uint)iStack_50 >> 8);
      cVar10 = local_54;
    }
    *(undefined4 *)((int)param_1 + 5) = local_68;
    *(char *)(param_1 + 1) = cVar10;
    *param_1 = (int)local_58;
    param_1[2] = CONCAT31(uStack_64,local_68._3_1_);
  }
  if (cVar2 == '\0') {
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar16;
      bVar3 = (bool)hasExclusiveAccess(piVar16);
    } while (!bVar3);
    *piVar16 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00e45594(piVar16);
      return;
    }
  }
  return;
}

