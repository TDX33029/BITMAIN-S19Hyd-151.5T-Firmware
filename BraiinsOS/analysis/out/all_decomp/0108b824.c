// FUN_0108b824 @ 0108b824 size=1000 calls_out=10 calls_in=2
// strings: 

void FUN_0108b824(int *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  undefined8 uVar13;
  int *local_38;
  int *local_34;
  int *local_30;
  int local_2c;
  undefined4 local_28;
  
  DataMemoryBarrier(0xb);
  if ((char)param_1[8] == '\0') {
    do {
      if (*param_1 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(param_1);
        goto LAB_0108b868;
      }
      bVar2 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar2);
    *param_1 = 1;
    DataMemoryBarrier(0xb);
LAB_0108b868:
    uVar12 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar1 = (char)param_1[1];
    }
    else {
      uVar12 = FUN_015bf3f8();
      uVar12 = uVar12 ^ 1;
      cVar1 = (char)param_1[1];
    }
    if (cVar1 != '\0') {
      uVar9 = (uint)local_34 >> 8;
      local_34 = (int *)CONCAT31((int3)uVar9,(char)uVar12);
      local_38 = param_1;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_38,&DAT_01883e50,&DAT_018ae230);
    }
    DataMemoryBarrier(0xb);
    if ((char)param_1[8] == '\0') {
      iVar6 = param_1[4];
      if (iVar6 != 0) {
        uVar13 = thunk_FUN_016de0ee(0,0x288);
        piVar3 = (int *)((int)uVar13 + (int)((ulonglong)uVar13 >> 0x20));
        if ((char)piVar3[2] == '\0') {
          piVar3 = (int *)FUN_009e3710();
        }
        uVar9 = 0;
        piVar11 = (int *)param_1[3];
        do {
          piVar10 = piVar11 + 3;
          iVar7 = *piVar11;
          if (*(int *)(iVar7 + 8) != *piVar3 || *(int *)(iVar7 + 0xc) != piVar3[1]) {
            piVar4 = (int *)(iVar7 + 0x14);
            if (*piVar4 == 0) {
              DataMemoryBarrier(0xb);
LAB_0108b938:
              bVar2 = (bool)hasExclusiveAccess(piVar4);
              if (!bVar2) goto code_r0x0108b944;
              *piVar4 = piVar11[1];
              DataMemoryBarrier(0xb);
              if (piVar11[2] != 0) {
                DataMemoryBarrier(0xb);
                *(int *)(iVar7 + 0x18) = piVar11[2];
              }
              DataMemoryBarrier(0xb);
              piVar3 = (int *)(*(int *)(iVar7 + 0x10) + 0x18);
              do {
                iVar6 = *piVar3;
                bVar2 = (bool)hasExclusiveAccess(piVar3);
              } while (!bVar2);
              *piVar3 = 1;
              if (iVar6 == -1) {
                FUN_016d6968(0xf0,piVar3,0x81,1);
              }
              uVar8 = param_1[4];
              if (uVar8 <= uVar9) {
LAB_0108bbfc:
                    /* WARNING: Subroutine does not return */
                FUN_00602938(uVar9,uVar8,&DAT_018ae220);
              }
              puVar5 = (undefined4 *)(param_1[3] + uVar9 * 0xc);
              piVar3 = (int *)*puVar5;
              FUN_016dd52c(puVar5,puVar5 + 3,(uVar8 + ~uVar9) * 0xc);
              uVar8 = uVar8 - 1;
              param_1[4] = uVar8;
              if (piVar3 == (int *)0x0) goto LAB_0108bbfc;
              DataMemoryBarrier(0xb);
              do {
                iVar6 = *piVar3;
                bVar2 = (bool)hasExclusiveAccess(piVar3);
              } while (!bVar2);
              *piVar3 = iVar6 + -1;
              if (iVar6 == 1) {
                DataMemoryBarrier(0xb);
                FUN_00fbaa00(piVar3);
              }
              break;
            }
LAB_0108b8ec:
            ClearExclusiveLocal();
            DataMemoryBarrier(0xb);
          }
          uVar9 = uVar9 + 1;
          piVar11 = piVar10;
        } while (piVar10 != (int *)param_1[3] + iVar6 * 3);
      }
      local_38 = (int *)param_1[6];
      local_2c = param_1[7];
      param_1[7] = 0;
      local_28 = 0;
      local_30 = param_1 + 5;
      local_34 = local_38 + local_2c * 3;
      if (local_2c != 0) {
        do {
          piVar10 = (int *)*local_38;
          piVar3 = local_38 + 1;
          local_38 = local_38 + 3;
          piVar11 = piVar10 + 5;
          if (*piVar11 == 0) {
            DataMemoryBarrier(0xb);
LAB_0108ba7c:
            bVar2 = (bool)hasExclusiveAccess(piVar11);
            if (!bVar2) goto code_r0x0108ba88;
            *piVar11 = *piVar3;
            DataMemoryBarrier(0xb);
            DataMemoryBarrier(0xb);
            piVar3 = (int *)(piVar10[4] + 0x18);
            do {
              iVar6 = *piVar3;
              bVar2 = (bool)hasExclusiveAccess(piVar3);
            } while (!bVar2);
            *piVar3 = 1;
            if (iVar6 == -1) {
              FUN_016d6968(0xf0,piVar3,0x81,1);
            }
            goto LAB_0108ba9c;
          }
LAB_0108ba94:
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
LAB_0108ba9c:
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar10;
            bVar2 = (bool)hasExclusiveAccess(piVar10);
          } while (!bVar2);
          *piVar10 = iVar6 + -1;
          if (iVar6 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00fbaa00(piVar10);
          }
        } while (local_38 != local_34);
      }
      FUN_0063e6b8(&local_38);
      uVar9 = 0;
      if (param_1[4] == 0) {
        uVar9 = param_1[7];
      }
      DataMemoryBarrier(0xb);
      if (param_1[4] == 0) {
        uVar9 = (uint)(uVar9 == 0);
      }
      *(char *)(param_1 + 8) = (char)uVar9;
      DataMemoryBarrier(0xb);
    }
    if (((uVar12 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar6 = FUN_015bf3f8(), iVar6 == 0)) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *param_1;
      bVar2 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar2);
    *param_1 = 0;
    if (iVar6 == 2) {
      FUN_016d6968(0xf0,param_1,0x81,1);
      return;
    }
  }
  return;
code_r0x0108b944:
  if (*piVar4 != 0) goto LAB_0108b8ec;
  goto LAB_0108b938;
code_r0x0108ba88:
  if (*piVar11 != 0) goto LAB_0108ba94;
  goto LAB_0108ba7c;
}

