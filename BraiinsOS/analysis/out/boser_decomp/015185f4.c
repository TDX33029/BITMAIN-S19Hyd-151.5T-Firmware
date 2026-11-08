// FUN_015185f4 @ 015185f4 size=956 calls_out=12 calls_in=0
// strings: 

int FUN_015185f4(int param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined8 uVar20;
  uint local_84 [3];
  undefined4 local_78;
  uint local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  int *local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*param_2 != '\x05') {
    return 0;
  }
  local_84[2] = *(uint *)(param_2 + 4);
  local_78 = *(undefined4 *)(param_2 + 8);
  iVar6 = *(int *)(param_1 + 8);
  local_64 = *(undefined4 *)(param_2 + 0xc);
  iVar12 = *(int *)(param_1 + 4);
  if (local_84[2] == 0) {
    local_64 = 0;
  }
  uVar9 = *(undefined4 *)(param_1 + 0x10);
  iVar13 = *(int *)(param_1 + 0x14);
  local_84[0] = (uint)(local_84[2] != 0);
  local_70 = 0;
  bVar2 = false;
  local_84[1] = 0;
  local_74 = local_84[0];
  local_6c = local_84[2];
  local_68 = local_78;
LAB_01518688:
  uVar20 = FUN_01a41998(local_84);
  iVar4 = (int)uVar20;
  if (iVar4 == 0) {
    if (bVar2) {
      return 0;
    }
    piVar11 = *(int **)(param_1 + 0x20);
    do {
      iVar6 = *piVar11;
      bVar2 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar2);
    *piVar11 = iVar6 + 1;
    if (-1 < iVar6) {
      uVar7 = *(undefined4 *)(param_1 + 0x24);
      FUN_01508624(local_84,param_4,piVar11,uVar7);
      uVar20 = FUN_01531840(param_3);
      FUN_006666fc(&local_30,uVar9,iVar13);
      puVar5 = (undefined4 *)((uint)&local_60 | 4);
      *puVar5 = local_30;
      puVar5[1] = uStack_2c;
      puVar5[2] = uStack_28;
      local_60 = CONCAT31(local_60._1_3_,3);
      iVar6 = FUN_015963e0(piVar11,uVar7,local_84,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20),
                           param_2,&local_60);
      return iVar6;
    }
  }
  else {
    if (iVar6 != 0) {
      uVar7 = *(undefined4 *)(iVar4 + 4);
      iVar10 = *(int *)(iVar4 + 8);
      iVar14 = iVar6 << 5;
      iVar18 = iVar12;
      do {
        if (*(int *)(iVar18 + 8) == iVar10) {
          uVar16 = *(undefined4 *)(iVar18 + 4);
          iVar3 = thunk_FUN_01bed842(uVar16,uVar7,iVar10);
          if (iVar3 == 0) goto LAB_015186f8;
        }
        iVar18 = iVar18 + 0x20;
        iVar14 = iVar14 + -0x20;
        if (iVar14 == 0) break;
      } while( true );
    }
    piVar11 = *(int **)(param_1 + 0x18);
    do {
      iVar6 = *piVar11;
      bVar2 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar2);
    *piVar11 = iVar6 + 1;
    if (-1 < iVar6) {
      uVar19 = *(uint *)(param_1 + 0x1c);
      if (param_4 == 0) {
        local_60 = 0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar8 = *(int **)(param_4 + 0xc);
        do {
          iVar6 = *piVar8;
          bVar2 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar2);
        *piVar8 = iVar6 + 1;
        if (iVar6 < 0) goto LAB_0151899c;
        uVar9 = *(undefined4 *)(param_4 + 0x10);
        piVar15 = piVar11 + 2;
        uVar17 = (*(int **)(param_4 + 4))[1];
        if (uVar19 < uVar17) {
          uVar17 = 0;
        }
        else {
          iVar6 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar15,uVar17);
          if (iVar6 != 0) {
            uVar17 = 0;
          }
          piVar15 = (int *)((int)piVar15 + uVar17);
        }
        local_48 = FUN_016bc0ec(piVar15,uVar19 - uVar17);
        local_54 = 3;
        local_60 = 2;
        local_50 = piVar8;
        local_4c = uVar9;
      }
      uVar20 = FUN_01531840(param_3);
      puVar5 = (undefined4 *)thunk_FUN_01be5118(0xc);
      if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0xc);
      }
      FUN_006666fc(&local_30,*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8));
      *puVar5 = local_30;
      puVar5[1] = uStack_2c;
      puVar5[2] = uStack_28;
      local_34 = 1;
      local_3c = 1;
      local_38 = puVar5;
      iVar6 = FUN_01595b0c(piVar11,uVar19,&local_60,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20),
                           param_2,&local_3c);
      return iVar6;
    }
  }
LAB_0151899c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x151899c);
  (*pcVar1)();
LAB_015186f8:
  local_60 = 0x80000000;
  local_5c = uVar16;
  local_58 = iVar10;
  local_54 = param_3;
  iVar14 = FUN_015776f4(iVar18 + 0xc,(int)((ulonglong)uVar20 >> 0x20),&local_60,param_4,param_5);
  if (iVar14 != 0) {
    return iVar14;
  }
  if (*(int *)(iVar4 + 8) == iVar13) {
    iVar4 = thunk_FUN_01bed842(*(undefined4 *)(iVar4 + 4),uVar9,iVar13);
    bVar2 = (bool)(iVar4 == 0 | bVar2);
  }
  goto LAB_01518688;
}

