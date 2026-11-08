// FUN_01027b5c @ 01027b5c size=1180 calls_out=5 calls_in=2
// strings: 

void FUN_01027b5c(undefined2 *param_1,int *param_2,uint param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined1 uVar13;
  uint uVar14;
  int local_30;
  int *local_2c;
  code *local_28;
  
  if ((int)param_3 < 0) {
    *param_1 = 0x403;
    return;
  }
  iVar9 = *param_2;
  piVar7 = (int *)(iVar9 + 8);
  do {
    if (*piVar7 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar7);
      goto LAB_01027b94;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = 1;
  DataMemoryBarrier(0xb);
LAB_01027b94:
  uVar8 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(iVar9 + 0xc);
  }
  else {
    uVar8 = FUN_015bf3f8();
    uVar8 = uVar8 ^ 1;
    cVar1 = *(char *)(iVar9 + 0xc);
  }
  if (cVar1 != '\0') {
    uVar3 = (uint)local_28 >> 8;
    local_28 = (code *)CONCAT31((int3)uVar3,(char)uVar8);
    local_2c = piVar7;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_01882f54,&DAT_01882ea4);
  }
  uVar12 = param_2[1];
  iVar11 = param_2[2];
  uVar3 = *(uint *)(iVar9 + 0x198);
  local_30 = iVar11;
  if (((uVar12 < uVar3) &&
      (piVar5 = (int *)(*(int *)(iVar9 + 0x194) + uVar12 * 0xf8), *piVar5 != 3 || piVar5[1] != 0))
     && (piVar5[0x35] == iVar11)) {
    uVar14 = piVar5[0x39];
    uVar13 = 4;
    if (uVar14 < param_3) goto LAB_01027ea0;
    iVar6 = *(int *)(iVar9 + 100);
    *(uint *)(iVar9 + 0xbc) = *(int *)(iVar9 + 0xbc) - param_3;
    if (!SCARRY4(iVar6,param_3)) {
      *(uint *)(iVar9 + 100) = iVar6 + param_3;
      iVar6 = iVar6 + param_3;
    }
    iVar10 = *(int *)(iVar9 + 0x60);
    if ((iVar10 < iVar6) && (iVar10 / 2 <= iVar6 - iVar10)) {
      iVar6 = *(int *)(iVar9 + 0xe8);
      *(undefined4 *)(iVar9 + 0xe8) = 0;
      if (iVar6 != 0) {
        (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar9 + 0xec));
        uVar3 = *(uint *)(iVar9 + 0x198);
      }
    }
    local_30 = iVar11;
    if (((uVar12 < uVar3) &&
        (piVar5 = (int *)(*(int *)(iVar9 + 0x194) + uVar12 * 0xf8), *piVar5 != 3 || piVar5[1] != 0))
       && (piVar5[0x35] == iVar11)) {
      piVar5[0x39] = piVar5[0x39] - param_3;
      uVar3 = *(uint *)(iVar9 + 0x198);
      if (((uVar12 < uVar3) &&
          (piVar5 = (int *)(*(int *)(iVar9 + 0x194) + uVar12 * 0xf8), *piVar5 != 3 || piVar5[1] != 0
          )) && (piVar5[0x35] == iVar11)) {
        if (!SCARRY4(piVar5[0x13],param_3)) {
          piVar5[0x13] = piVar5[0x13] + param_3;
          uVar3 = *(uint *)(iVar9 + 0x198);
        }
        if (((uVar12 < uVar3) &&
            (piVar5 = (int *)(*(int *)(iVar9 + 0x194) + uVar12 * 0xf8),
            *piVar5 != 3 || piVar5[1] != 0)) && (piVar5[0x35] == iVar11)) {
          iVar6 = piVar5[0x12];
          uVar13 = 0xc;
          if ((piVar5[0x13] <= iVar6) || (piVar5[0x13] - iVar6 < iVar6 / 2)) goto LAB_01027ea0;
          if (*(char *)((int)piVar5 + 0xef) == '\0') {
            iVar6 = *(int *)(iVar9 + 0x68);
            *(undefined1 *)((int)piVar5 + 0xef) = 1;
            if (iVar6 == 0) {
              *(undefined4 *)(iVar9 + 0x68) = 1;
              *(uint *)(iVar9 + 0x6c) = uVar12;
              *(int *)(iVar9 + 0x70) = iVar11;
            }
            else {
              local_30 = *(int *)(iVar9 + 0x78);
              if (((*(uint *)(iVar9 + 0x198) <= *(uint *)(iVar9 + 0x74)) ||
                  (piVar5 = (int *)(*(int *)(iVar9 + 0x194) + *(uint *)(iVar9 + 0x74) * 0xf8),
                  *piVar5 == 3 && piVar5[1] == 0)) || (piVar5[0x35] != local_30)) goto LAB_01027fd0;
              piVar5[0x28] = uVar12;
              piVar5[0x27] = 1;
              piVar5[0x29] = iVar11;
            }
            *(uint *)(iVar9 + 0x74) = uVar12;
            *(int *)(iVar9 + 0x78) = iVar11;
          }
          iVar11 = *(int *)(iVar9 + 0xe8);
          *(undefined4 *)(iVar9 + 0xe8) = 0;
          if (iVar11 != 0) {
            (**(code **)(iVar11 + 4))(*(undefined4 *)(iVar9 + 0xec));
          }
LAB_01027ea0:
          if (((uVar8 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
             (iVar11 = FUN_015bf3f8(), iVar11 == 0)) {
            *(undefined1 *)(iVar9 + 0xc) = 1;
          }
          DataMemoryBarrier(0xb);
          do {
            iVar9 = *piVar7;
            bVar2 = (bool)hasExclusiveAccess(piVar7);
          } while (!bVar2);
          *piVar7 = 0;
          if (iVar9 == 2) {
            FUN_016d6968(0xf0,piVar7,0x81,1);
          }
          if (uVar14 < param_3) {
            *(undefined1 *)((int)param_1 + 1) = uVar13;
            uVar13 = 3;
          }
          else {
            uVar13 = 5;
          }
          *(undefined1 *)param_1 = uVar13;
          return;
        }
        goto LAB_01027fc4;
      }
    }
LAB_01027fd0:
    puVar4 = &DAT_01882560;
  }
  else {
LAB_01027fc4:
    puVar4 = &DAT_01882550;
    local_30 = iVar11;
  }
  local_28 = FUN_0101a4ac;
  local_2c = &local_30;
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_00599806,&local_2c,puVar4);
}

