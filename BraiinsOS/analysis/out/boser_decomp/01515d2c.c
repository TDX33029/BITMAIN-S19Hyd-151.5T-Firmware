// FUN_01515d2c @ 01515d2c size=700 calls_out=11 calls_in=0
// strings: 

int FUN_01515d2c(int param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  undefined8 uVar17;
  uint local_90 [3];
  undefined4 local_84;
  uint local_80;
  undefined4 local_7c;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c [3];
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
  local_90[2] = *(uint *)(param_2 + 4);
  local_84 = *(undefined4 *)(param_2 + 8);
  iVar8 = *(int *)(param_1 + 8);
  local_70 = *(undefined4 *)(param_2 + 0xc);
  if (local_90[2] == 0) {
    local_70 = 0;
  }
  local_90[0] = (uint)(local_90[2] != 0);
  iVar14 = *(int *)(param_1 + 4);
  iVar16 = iVar14 + iVar8 * 0x28;
  local_7c = 0;
  local_90[1] = 0;
  local_80 = local_90[0];
  local_78 = local_90[2];
  local_74 = local_84;
LAB_01515da4:
  do {
    uVar17 = FUN_01a41998(local_90);
    iVar3 = (int)uVar17;
    if (iVar3 == 0) {
      return 0;
    }
    local_68 = *(undefined4 *)(iVar3 + 4);
    local_64 = *(undefined4 *)(iVar3 + 8);
    local_6c = 0x80000000;
    local_60 = param_3;
    if (iVar8 == 0) break;
    bVar11 = false;
    iVar6 = iVar14;
    do {
      iVar4 = iVar6;
      while( true ) {
        cVar2 = FUN_015050f0(iVar4,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
        iVar6 = iVar4 + 0x28;
        if (cVar2 != '\0') break;
        iVar4 = iVar6;
        if (iVar6 == iVar16) {
          if (!bVar11) goto LAB_01515e5c;
          goto LAB_01515da4;
        }
      }
      iVar4 = FUN_015776f4(iVar4 + 0x14,(int)((ulonglong)uVar17 >> 0x20),&local_6c,param_4,param_5);
      if (iVar4 != 0) {
        return iVar4;
      }
      bVar11 = true;
    } while (iVar6 != iVar16);
  } while( true );
LAB_01515e5c:
  piVar7 = *(int **)(param_1 + 0xc);
  do {
    iVar8 = *piVar7;
    bVar11 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar11);
  *piVar7 = iVar8 + 1;
  if (iVar8 < 0) {
LAB_01515fd4:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1515fd4);
    (*pcVar1)();
  }
  uVar13 = *(uint *)(param_1 + 0x10);
  if (param_4 == 0) {
    local_5c[0] = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar10 = *(int **)(param_4 + 0xc);
    do {
      iVar8 = *piVar10;
      bVar11 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar11);
    *piVar10 = iVar8 + 1;
    if (iVar8 < 0) goto LAB_01515fd4;
    uVar15 = *(undefined4 *)(param_4 + 0x10);
    piVar9 = piVar7 + 2;
    uVar12 = (*(int **)(param_4 + 4))[1];
    if (uVar13 < uVar12) {
      uVar12 = 0;
    }
    else {
      iVar8 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar9,uVar12);
      if (iVar8 != 0) {
        uVar12 = 0;
      }
      piVar9 = (int *)((int)piVar9 + uVar12);
    }
    local_44 = FUN_016bc0ec(piVar9,uVar13 - uVar12);
    local_50 = 3;
    local_5c[0] = 2;
    local_4c = piVar10;
    local_48 = uVar15;
  }
  uVar17 = FUN_01531840(param_3);
  puVar5 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  FUN_006666fc(&local_30,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
  *puVar5 = local_30;
  puVar5[1] = uStack_2c;
  puVar5[2] = uStack_28;
  local_34 = 1;
  local_3c = 1;
  local_38 = puVar5;
  iVar8 = FUN_01595b0c(piVar7,uVar13,local_5c,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20),param_2,
                       &local_3c);
  return iVar8;
}

