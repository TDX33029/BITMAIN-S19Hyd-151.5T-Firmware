// FUN_007d3c44 @ 007d3c44 size=1056 calls_out=17 calls_in=1
// strings: 

void FUN_007d3c44(int *param_1,undefined4 *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int local_c8;
  int *local_c4;
  int *local_78;
  undefined4 *local_74;
  int iStack_70;
  int local_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[2]) {
  case '\x01':
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x7d40d0);
    (*pcVar1)();
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0185e984);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x49]) {
    case '\0':
      iVar4 = param_1[0x48];
      goto LAB_007d3e28;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0185e8e4);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0185e8e4);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x46]) {
    case '\0':
      iVar4 = param_1[0x44];
      iVar14 = param_1[0x45];
      goto LAB_007d3e84;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0185f9d0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0185f9d0);
    case '\x03':
      goto switchD_007d3cc4_caseD_3;
    }
  case '\x04':
    goto switchD_007d3c64_caseD_4;
  case '\x05':
    goto switchD_007d3c64_caseD_5;
  }
  do {
    iVar4 = *param_1;
    piVar9 = (int *)(iVar4 + 0x38);
    do {
      if (*piVar9 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar9);
        goto LAB_007d3dac;
      }
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = 1;
    DataMemoryBarrier(0xb);
LAB_007d3dac:
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      if (*(char *)(iVar4 + 0x3c) != '\0') {
        uVar7 = 0;
LAB_007d4034:
        local_74 = (undefined4 *)CONCAT31(local_74._1_3_,(char)uVar7);
        local_78 = piVar9;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00342b23,9,&local_78,&DAT_0185eb78,&DAT_0185e8f4);
      }
      cVar11 = *(char *)(iVar4 + 0x3d);
LAB_007d3dd4:
      if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar14 = FUN_015bf3f8(), iVar14 == 0)) {
        *(undefined1 *)(iVar4 + 0x3c) = 1;
      }
    }
    else {
      uVar7 = FUN_015bf3f8();
      uVar7 = uVar7 ^ 1;
      if (*(char *)(iVar4 + 0x3c) != '\0') goto LAB_007d4034;
      cVar11 = *(char *)(iVar4 + 0x3d);
      if (uVar7 == 0) goto LAB_007d3dd4;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = 0;
    if (iVar4 == 2) {
      FUN_016d6968(0xf0,piVar9,0x81,1);
    }
    if (cVar11 != '\0') {
      *(undefined1 *)(param_1 + 0x49) = 0;
      iVar4 = param_1[1] + 8;
      param_1[0x48] = iVar4;
LAB_007d3e28:
      iVar4 = *(int *)(iVar4 + 0x6c);
      puVar5 = (undefined1 *)thunk_FUN_016d4a50(1);
      if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(1,1);
      }
      iVar4 = iVar4 + 8;
      *(undefined1 *)(param_1 + 0x46) = 0;
      iVar14 = 6;
      param_1[0x44] = iVar4;
      *puVar5 = 0;
      param_1[0x45] = 6;
      *(undefined2 *)(param_1 + 9) = 0x1600;
      param_1[4] = 1;
      param_1[5] = (int)puVar5;
      param_1[6] = 1;
      param_1[7] = (int)FUN_007d4260;
      param_1[8] = 1;
LAB_007d3e84:
      iVar6 = param_1[5];
      iVar8 = param_1[6];
      iVar10 = param_1[7];
      iVar12 = param_1[8];
      iVar13 = param_1[9];
      piVar9 = (int *)((uint)&local_78 | 4);
      *piVar9 = param_1[4];
      piVar9[1] = iVar6;
      piVar9[2] = iVar8;
      piVar9[3] = iVar10;
      piVar9[4] = iVar12;
      piVar9[5] = iVar13;
      param_1[0xc] = (int)&DAT_3b9aca00;
      param_1[0xd] = (int)local_78;
      param_1[0xe] = (int)local_74;
      param_1[0xf] = iStack_70;
      param_1[0x10] = local_6c;
      param_1[0x11] = iStack_68;
      param_1[0x12] = iStack_64;
      param_1[0x13] = iStack_60;
      param_1[0x18] = iVar4;
      *(undefined1 *)(param_1 + 0x1c) = 0;
      param_1[0x19] = iVar14;
switchD_007d3cc4_caseD_3:
      FUN_007d4540(&local_c8,param_1 + 10,param_2);
      iVar4 = local_c8;
      if (local_c8 == -0x7fffffff) {
        *(undefined1 *)(param_1 + 0x46) = 3;
        *(undefined1 *)(param_1 + 0x49) = 3;
        *(undefined1 *)(param_1 + 2) = 3;
        return;
      }
      FUN_007d42e4(param_1 + 10);
      *(undefined1 *)(param_1 + 0x46) = 1;
      if (iVar4 != 0) {
        if (iVar4 == -0x80000000) {
          *(undefined1 *)(param_1 + 0x49) = 1;
          local_78 = local_c4;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_00342f28,0x1b,&local_78,&DAT_0185eb58,&DAT_0185e994);
        }
        thunk_FUN_016d3fb4();
      }
      *(undefined1 *)(param_1 + 0x49) = 1;
      *(undefined1 *)((int)param_1 + 0x6d) = 0;
      param_1[0x1a] = param_1[1] + 8;
switchD_007d3c64_caseD_4:
      FUN_007d5850(&local_78,param_1 + 4,param_2);
      puVar3 = local_74;
      uVar7 = (uint)local_78 & 0xff;
      if (uVar7 == 5) {
        *(undefined1 *)(param_1 + 2) = 4;
        return;
      }
      if (*(char *)((int)param_1 + 0x6d) == '\x03') {
        FUN_007d56a8(param_1 + 7);
      }
      if (uVar7 == 3) {
        (**(code **)*puVar3)(puVar3);
      }
    }
    FUN_01656eb8(&local_78,&DAT_0185e9a4,10,0,0,&DAT_0185e9a4);
    FUN_016dd1aa(&local_c8,&local_78,0x50);
    FUN_016dd1aa(param_1 + 4,&local_c8,0x50);
switchD_007d3c64_caseD_5:
    iVar4 = FUN_01657fc4(param_1 + 4,*param_2);
    if (iVar4 != 0) {
      *(undefined1 *)(param_1 + 2) = 5;
      return;
    }
    FUN_00a07b4c(param_1 + 4);
  } while( true );
}

