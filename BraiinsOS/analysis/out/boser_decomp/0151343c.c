// FUN_0151343c @ 0151343c size=712 calls_out=10 calls_in=0
// strings: 

int FUN_0151343c(int param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  undefined8 uVar18;
  uint local_80 [3];
  undefined4 local_74;
  uint local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  int *local_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*param_2 != '\x05') {
    return 0;
  }
  local_80[2] = *(uint *)(param_2 + 4);
  local_74 = *(undefined4 *)(param_2 + 8);
  iVar7 = *(int *)(param_1 + 8);
  local_60 = *(undefined4 *)(param_2 + 0xc);
  if (local_80[2] == 0) {
    local_60 = 0;
  }
  iVar6 = *(int *)(param_1 + 4);
  local_80[0] = (uint)(local_80[2] != 0);
  local_6c = 0;
  local_80[1] = 0;
  local_70 = local_80[0];
  local_68 = local_80[2];
  local_64 = local_74;
LAB_015134c4:
  uVar18 = FUN_01a41998(local_80);
  iVar4 = (int)uVar18;
  if (iVar4 == 0) {
    return 0;
  }
  if (iVar7 != 0) {
    uVar8 = *(undefined4 *)(iVar4 + 4);
    iVar10 = *(int *)(iVar4 + 8);
    iVar13 = iVar7 << 5;
    iVar17 = iVar6;
    do {
      if (*(int *)(iVar17 + 8) == iVar10) {
        uVar15 = *(undefined4 *)(iVar17 + 4);
        iVar3 = thunk_FUN_01bed842(uVar15,uVar8,iVar10);
        if (iVar3 == 0) goto LAB_01513528;
      }
      iVar17 = iVar17 + 0x20;
      iVar13 = iVar13 + -0x20;
      if (iVar13 == 0) break;
    } while( true );
  }
  piVar9 = *(int **)(param_1 + 0xc);
  do {
    iVar7 = *piVar9;
    bVar2 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar2);
  *piVar9 = iVar7 + 1;
  if (iVar7 < 0) {
LAB_015136f0:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x15136f0);
    (*pcVar1)();
  }
  uVar11 = *(uint *)(param_1 + 0x10);
  if (param_4 == 0) {
    local_5c = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar12 = *(int **)(param_4 + 0xc);
    do {
      iVar7 = *piVar12;
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = iVar7 + 1;
    if (iVar7 < 0) goto LAB_015136f0;
    uVar8 = *(undefined4 *)(param_4 + 0x10);
    piVar14 = piVar9 + 2;
    uVar16 = (*(int **)(param_4 + 4))[1];
    if (uVar11 < uVar16) {
      uVar16 = 0;
    }
    else {
      iVar7 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar14,uVar16);
      if (iVar7 != 0) {
        uVar16 = 0;
      }
      piVar14 = (int *)((int)piVar14 + uVar16);
    }
    local_44 = FUN_016bc0ec(piVar14,uVar11 - uVar16);
    local_50 = 3;
    local_5c = 2;
    local_4c = piVar12;
    local_48 = uVar8;
  }
  uVar18 = FUN_01531840(param_3);
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
  iVar7 = FUN_01595b0c(piVar9,uVar11,&local_5c,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20),param_2,
                       &local_3c);
  return iVar7;
LAB_01513528:
  local_5c = 0x80000000;
  local_58 = uVar15;
  local_54 = iVar10;
  local_50 = param_3;
  iVar4 = FUN_015776f4(iVar17 + 0xc,(int)((ulonglong)uVar18 >> 0x20),&local_5c,param_4,param_5);
  if (iVar4 != 0) {
    return iVar4;
  }
  goto LAB_015134c4;
}

