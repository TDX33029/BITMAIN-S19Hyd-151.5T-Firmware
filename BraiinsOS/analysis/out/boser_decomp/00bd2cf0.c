// FUN_00bd2cf0 @ 00bd2cf0 size=684 calls_out=1 calls_in=4
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00bd2cf0(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  bool bVar12;
  int local_94;
  int local_90;
  uint local_8c;
  int local_88;
  undefined1 local_84;
  int local_78;
  int iStack_74;
  int iStack_70;
  int local_68;
  int iStack_64;
  int iStack_60;
  int local_5c;
  int local_58;
  uint local_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int local_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_30;
  undefined3 uStack_2c;
  
  if (*param_2 == -0x7fffffff) {
    local_5c = -0x7fffffff;
  }
  else {
    if (*param_2 == -0x80000000) {
      local_5c = -0x80000000;
    }
    else {
      FUN_006666fc(&local_5c,param_2[1],param_2[2]);
    }
    if (param_2[3] == -0x80000000) {
      local_50 = -0x80000000;
    }
    else {
      FUN_006666fc(&local_50,param_2[4],param_2[5]);
    }
    if (param_2[6] == -0x80000000) {
      local_40 = -0x80000000;
    }
    else {
      FUN_006666fc(&local_40,param_2[7],param_2[8]);
    }
    bVar12 = *(char *)((int)param_2 + 0x2b) == '\0';
    if (bVar12) {
      local_90 = param_2[0xb];
      local_94 = param_2[0xc];
      uStack_30 = param_2[9];
      uStack_2c = (undefined3)((uint)*(undefined4 *)((int)param_2 + 0x27) >> 8);
    }
    local_84 = !bVar12;
    local_88 = local_58;
    local_8c = local_54;
    local_68 = local_50;
    iStack_64 = iStack_4c;
    iStack_60 = iStack_48;
    local_78 = local_40;
    iStack_74 = iStack_3c;
    iStack_70 = iStack_38;
  }
  piVar11 = (int *)param_2[0xd];
  do {
    iVar3 = *piVar11;
    bVar12 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar12);
  *piVar11 = iVar3 + 1;
  if (-1 < iVar3) {
    piVar10 = (int *)param_2[0xe];
    do {
      iVar3 = *piVar10;
      bVar12 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar12);
    *piVar10 = iVar3 + 1;
    if (-1 < iVar3) {
      piVar6 = (int *)param_2[0xf];
      do {
        iVar3 = *piVar6;
        bVar12 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar12);
      *piVar6 = iVar3 + 1;
      if (-1 < iVar3) {
        piVar7 = (int *)param_2[0x10];
        do {
          iVar3 = *piVar7;
          bVar12 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar12);
        *piVar7 = iVar3 + 1;
        if (-1 < iVar3) {
          piVar4 = (int *)param_2[0x11];
          do {
            iVar3 = *piVar4;
            bVar12 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar12);
          *piVar4 = iVar3 + 1;
          if (-1 < iVar3) {
            piVar8 = (int *)param_2[0x12];
            do {
              iVar3 = *piVar8;
              bVar12 = (bool)hasExclusiveAccess(piVar8);
            } while (!bVar12);
            *piVar8 = iVar3 + 1;
            if (-1 < iVar3) {
              piVar9 = (int *)param_2[0x13];
              do {
                iVar3 = *piVar9;
                bVar12 = (bool)hasExclusiveAccess(piVar9);
              } while (!bVar12);
              *piVar9 = iVar3 + 1;
              if (-1 < iVar3) {
                puVar5 = (uint *)param_2[0x14];
                do {
                  uVar2 = *puVar5;
                  bVar12 = (bool)hasExclusiveAccess(puVar5);
                } while (!bVar12);
                *puVar5 = uVar2 + 1;
                uVar1 = uVar2;
                if (uVar2 < 0x80000000) {
                  param_2 = param_1;
                  uVar1 = local_8c;
                }
                if (-1 < (int)uVar2) {
                  param_1[1] = local_88;
                  param_1[2] = uVar1;
                  *param_2 = local_5c;
                  param_2[3] = local_68;
                  param_2[4] = iStack_64;
                  param_2[5] = iStack_60;
                  param_2[6] = local_78;
                  param_2[7] = iStack_74;
                  param_2[8] = iStack_70;
                  param_1[0xb] = local_90;
                  param_1[0xc] = local_94;
                  *(uint *)((int)param_2 + 0x27) = CONCAT31(uStack_2c,uStack_30._3_1_);
                  *(undefined1 *)((int)param_2 + 0x2b) = local_84;
                  param_2[0xd] = (int)piVar11;
                  param_2[0xe] = (int)piVar10;
                  param_2[0xf] = (int)piVar6;
                  param_2[0x10] = (int)piVar7;
                  param_2[0x11] = (int)piVar4;
                  param_2[0x12] = (int)piVar8;
                  param_2[0x13] = (int)piVar9;
                  param_2[0x14] = (int)puVar5;
                  param_2[9] = uStack_30;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  software_udf(0xfdee,0xbd2f98);
  return;
}

