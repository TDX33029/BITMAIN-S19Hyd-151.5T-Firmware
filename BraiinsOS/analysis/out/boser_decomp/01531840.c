// FUN_01531840 @ 01531840 size=1340 calls_out=15 calls_in=148
// strings: 

undefined8 FUN_01531840(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 local_a0;
  undefined8 *local_98;
  int *local_94;
  undefined8 *local_90;
  int *local_8c [16];
  undefined8 *local_4c;
  int *local_48;
  undefined8 *local_44;
  
  piVar12 = (int *)param_1[3];
  if (piVar12 == (int *)0x0) {
    uVar14 = FUN_015321a0();
    return uVar14;
  }
  iVar9 = *param_1;
  if (piVar12[3] == 0 && iVar9 == -0x7fffffff) {
    uVar7 = param_1[1];
    if (uVar7 < 0x10) {
      DataMemoryBarrier(0xb);
      if (DAT_01d4ecc0 != 0) {
        FUN_01551f20();
      }
      piVar12 = *(int **)(&DAT_01d4ec40 + uVar7 * 8);
      do {
        iVar9 = *piVar12;
        bVar2 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar2);
      *piVar12 = iVar9 + 1;
      if (iVar9 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1531d7c);
        (*pcVar1)();
      }
      return CONCAT44(*(undefined4 *)(&DAT_01d4ec44 + uVar7 * 8),piVar12);
    }
    local_a0 = FUN_0141621c(local_8c,uVar7);
    local_98 = &local_a0;
    local_94 = (int *)&DAT_0132b6a0;
    FUN_00664898(&local_4c,&DAT_00586e68,&local_98);
    piVar12 = local_48;
    uVar14 = FUN_016bc0ec(local_48,local_44);
    puVar10 = local_4c;
  }
  else {
    puVar10 = (undefined8 *)0x0;
    puVar11 = (undefined8 *)&DAT_00000001;
    piVar4 = piVar12;
    piVar5 = param_1;
    while( true ) {
      piVar6 = piVar4;
      if (iVar9 == -0x7fffffff) {
        uVar7 = piVar5[1];
        if (uVar7 == 0) {
          iVar9 = 2;
        }
        else {
          uVar8 = uVar7;
          if (99999 < uVar7) {
            uVar8 = uVar7 / 100000;
          }
          uVar3 = uVar8 + 0x5fff6 & uVar8 + 0x7ff9c ^ uVar8 + 0xdfc18 & uVar8 + 0x7d8f0;
          uVar8 = uVar3 >> 0x11;
          if (99999 < uVar7) {
            uVar8 = (uVar3 >> 0x11) + 5;
          }
          iVar9 = uVar8 + 2;
        }
      }
      else {
        iVar9 = piVar5[2] + 1;
      }
      puVar10 = (undefined8 *)(iVar9 + (int)puVar10);
      if ((int *)piVar6[3] == (int *)0x0) break;
      iVar9 = *piVar6;
      puVar11 = (undefined8 *)((int)puVar11 + 1);
      piVar4 = (int *)piVar6[3];
      piVar5 = piVar6;
    }
    uVar13 = 0;
    if ((int)puVar10 < 0) {
LAB_01531998:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar13,puVar10);
    }
    if (puVar10 == (undefined8 *)0x0) {
      local_94 = (int *)&DAT_00000001;
      puVar10 = (undefined8 *)0x0;
    }
    else {
      uVar13 = 1;
      local_94 = (int *)FUN_01298504(puVar10,1);
      if (local_94 == (int *)0x0) goto LAB_01531998;
    }
    local_90 = (undefined8 *)0x0;
    local_98 = puVar10;
    if (&DAT_00000010 < puVar11) {
      uVar13 = 0;
      if (((undefined8 *)0x3fffffff < puVar11) ||
         (puVar10 = (undefined8 *)((int)puVar11 * 4), (undefined8 *)0x7ffffffc < puVar10)) {
LAB_01531d58:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar13,puVar10);
      }
      uVar13 = 4;
      piVar4 = (int *)FUN_01298504(puVar10,4);
      if (piVar4 == (int *)0x0) goto LAB_01531d58;
      *piVar4 = (int)param_1;
      local_44 = (undefined8 *)&DAT_00000001;
      local_4c = puVar11;
      local_48 = piVar4;
      do {
        puVar10 = local_44;
        if (piVar12[3] == 0) break;
        if (local_44 == local_4c) {
          FUN_0155a420(&local_4c);
          piVar4 = local_48;
        }
        piVar4[(int)puVar10] = (int)piVar12;
        local_44 = (undefined8 *)((int)puVar10 + 1);
        piVar12 = (int *)piVar12[3];
      } while (piVar12 != (int *)0x0);
      piVar12 = local_48;
      if (local_44 != (undefined8 *)0x0) {
        iVar9 = (int)local_44 * -4 + 4;
        do {
          puVar10 = local_90;
          if (local_98 == local_90) {
            FUN_01af7b44(&local_98,local_90,1,1,1);
          }
          piVar4 = local_94;
          puVar10 = (undefined8 *)((int)puVar10 + 1);
          *(undefined1 *)((int)local_94 + (int)local_90) = 0x2f;
          piVar5 = *(int **)((int)piVar12 - iVar9);
          local_90 = puVar10;
          if (*piVar5 == -0x7fffffff) {
            uVar14 = FUN_0141621c(local_8c,piVar5[1]);
            uVar7 = (uint)((ulonglong)uVar14 >> 0x20);
            if ((uint)((int)local_98 - (int)puVar10) < uVar7) {
              FUN_01af7b44(&local_98,puVar10,uVar7,1,1);
              puVar10 = local_90;
              piVar4 = local_94;
            }
            FUN_01bed4e2((undefined1 *)((int)piVar4 + (int)puVar10),(int)uVar14,uVar7);
            local_90 = (undefined8 *)((int)puVar10 + uVar7);
          }
          else {
            FUN_015321f0(&local_98,piVar5[1],piVar5[2]);
          }
          iVar9 = iVar9 + 4;
        } while (iVar9 != 4);
      }
      FUN_01af7af8(local_4c,piVar12,4,4);
    }
    else {
      FUN_01bed93e(local_8c + 1,0,0x3c);
      local_8c[0] = param_1;
      iVar9 = 0;
      while (piVar4 = (int *)piVar12[3], piVar4 != (int *)0x0) {
        if (iVar9 == -0x3c) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(0x10,0x10,&DAT_01cfb690);
        }
        *(int **)((int)local_8c + (4 - iVar9)) = piVar12;
        iVar9 = iVar9 + -4;
        piVar12 = piVar4;
      }
      for (; puVar10 = local_90, iVar9 != 4; iVar9 = iVar9 + 4) {
        if (*(int *)((int)local_8c - iVar9) != 0) {
          if (local_98 == local_90) {
            FUN_01af7b44(&local_98,local_90,1,1,1);
          }
          piVar12 = local_94;
          puVar10 = (undefined8 *)((int)puVar10 + 1);
          piVar4 = *(int **)((int)local_8c - iVar9);
          *(undefined1 *)((int)local_94 + (int)local_90) = 0x2f;
          local_90 = puVar10;
          if (*piVar4 == -0x7fffffff) {
            uVar14 = FUN_0141621c(&local_4c,piVar4[1]);
            uVar7 = (uint)((ulonglong)uVar14 >> 0x20);
            if ((uint)((int)local_98 - (int)puVar10) < uVar7) {
              FUN_01af7b44(&local_98,puVar10,uVar7,1,1);
              puVar10 = local_90;
              piVar12 = local_94;
            }
            FUN_01bed4e2((undefined1 *)((int)piVar12 + (int)puVar10),(int)uVar14,uVar7);
            local_90 = (undefined8 *)((int)puVar10 + uVar7);
          }
          else {
            FUN_015321f0(&local_98,piVar4[1],piVar4[2]);
          }
        }
      }
    }
    piVar12 = local_94;
    puVar10 = local_98;
    uVar14 = FUN_016bc0ec(local_94,local_90);
  }
  FUN_019bb7e0(puVar10,piVar12);
  return uVar14;
}

