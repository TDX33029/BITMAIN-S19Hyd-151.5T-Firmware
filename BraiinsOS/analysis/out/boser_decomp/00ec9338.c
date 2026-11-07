// FUN_00ec9338 @ 00ec9338 size=1380 calls_out=6 calls_in=2
// strings: a UUID string | a UUID string | internal error: entered unreachable code | internal error: entered unreachable code

/* WARNING: Removing unreachable block (ram,0x00ec986c) */

int FUN_00ec9338(char *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  piVar2 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar4 = 1;
    pcVar8 = ",";
    iVar6 = *piVar2;
    do {
      uVar11 = *(uint *)(iVar6 + 4);
      uVar7 = uVar11 ^ 0x7fffffff;
      if (uVar4 < uVar7) {
        uVar7 = uVar4;
      }
      FUN_01284394(iVar6,pcVar8,uVar7);
      if (uVar11 == 0x7fffffff) goto LAB_00ec982c;
      pcVar8 = pcVar8 + uVar7;
      uVar4 = uVar4 - uVar7;
    } while (uVar4 != 0);
  }
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,*piVar2,param_2,param_3);
  if ((char)local_30 == '\x04') {
    uVar4 = 1;
    iVar6 = *piVar2;
    pcVar8 = ":";
    do {
      uVar11 = *(uint *)(iVar6 + 4);
      uVar7 = uVar11 ^ 0x7fffffff;
      if (uVar4 < uVar7) {
        uVar7 = uVar4;
      }
      FUN_01284394(iVar6,pcVar8,uVar7);
      if (uVar11 == 0x7fffffff) goto LAB_00ec982c;
      pcVar8 = pcVar8 + uVar7;
      uVar4 = uVar4 - uVar7;
    } while (uVar4 != 0);
    local_3c = param_4[1];
    uVar4 = 1;
    iVar6 = *param_4;
    local_34 = param_4[2];
    iVar9 = *piVar2;
    if (iVar6 == 0) {
      local_34 = 0;
    }
    bVar10 = iVar6 != 0;
    pcVar8 = "{";
    do {
      uVar11 = *(uint *)(iVar9 + 4);
      uVar7 = uVar11 ^ 0x7fffffff;
      if (uVar4 < uVar7) {
        uVar7 = uVar4;
      }
      FUN_01284394(iVar9,pcVar8,uVar7);
      if (uVar11 == 0x7fffffff) goto LAB_00ec982c;
      pcVar8 = pcVar8 + uVar7;
      uVar4 = uVar4 - uVar7;
    } while (uVar4 != 0);
    local_38 = 0x100;
    if (local_34 == 0) {
      uVar4 = 1;
      pcVar8 = "}";
      do {
        uVar11 = *(uint *)(iVar9 + 4);
        uVar7 = uVar11 ^ 0x7fffffff;
        if (uVar4 < uVar7) {
          uVar7 = uVar4;
        }
        FUN_01284394(iVar9,pcVar8,uVar7);
        bVar5 = false;
        if (uVar11 == 0x7fffffff) goto LAB_00ec982c;
        pcVar8 = pcVar8 + uVar7;
        uVar4 = uVar4 - uVar7;
      } while (uVar4 != 0);
      local_38 = 0;
    }
    else {
      bVar5 = true;
    }
    iVar9 = 0;
    do {
      if (local_34 == 0) {
        if (local_38 == 0) {
          return 0;
        }
        uVar4 = 1;
        iVar6 = *piVar2;
        pcVar8 = "}";
        while( true ) {
          uVar11 = *(uint *)(iVar6 + 4);
          uVar7 = uVar11 ^ 0x7fffffff;
          if (uVar4 < uVar7) {
            uVar7 = uVar4;
          }
          FUN_01284394(iVar6,pcVar8,uVar7);
          if (uVar11 == 0x7fffffff) break;
          pcVar8 = pcVar8 + uVar7;
          uVar4 = uVar4 - uVar7;
          if (uVar4 == 0) {
            return 0;
          }
        }
LAB_00ec9844:
        local_30 = 2;
        local_2c = &DAT_01d2e7b8;
        break;
      }
      if (!bVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2ffe0);
      }
      if (iVar9 == 0) {
        uVar4 = 0;
        iVar9 = iVar6;
        for (; local_3c != 0; local_3c = local_3c - 1) {
          iVar9 = *(int *)(iVar9 + 0x10b8);
        }
        iVar6 = 0;
      }
      else {
        uVar4 = local_3c;
      }
      iVar12 = iVar9;
      if (*(ushort *)(iVar9 + 0x10b2) <= uVar4) {
        do {
          iVar9 = *(int *)(&DAT_00001028 + iVar12);
          if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d2fff0);
          }
          uVar4 = (uint)*(ushort *)(&DAT_000010b0 + iVar12);
          iVar6 = iVar6 + 1;
          iVar12 = iVar9;
        } while (*(ushort *)(iVar9 + 0x10b2) <= uVar4);
      }
      if (iVar6 == 0) {
        local_3c = uVar4 + 1;
        iVar12 = iVar9;
      }
      else {
        piVar3 = (int *)(iVar9 + uVar4 * 4 + 0x10bc);
        do {
          iVar12 = *piVar3;
          iVar6 = iVar6 + -1;
          piVar3 = (int *)(iVar12 + 0x10b8);
        } while (iVar6 != 0);
        local_3c = 0;
      }
      if (!bVar5) {
        uVar7 = 1;
        iVar6 = *piVar2;
        pcVar8 = ",";
        do {
          uVar13 = *(uint *)(iVar6 + 4);
          uVar11 = uVar13 ^ 0x7fffffff;
          if (uVar7 < uVar11) {
            uVar11 = uVar7;
          }
          FUN_01284394(iVar6,pcVar8,uVar11);
          if (uVar13 == 0x7fffffff) goto LAB_00ec9844;
          pcVar8 = pcVar8 + uVar11;
          uVar7 = uVar7 - uVar11;
        } while (uVar7 != 0);
      }
      iVar6 = iVar9 + uVar4 * 0xc;
      FUN_0096b2b0(&local_30,*piVar2,*(undefined4 *)(iVar6 + 0x1030),*(undefined4 *)(iVar6 + 0x1034)
                  );
      if ((char)local_30 != '\x04') break;
      uVar7 = 1;
      local_34 = local_34 + -1;
      iVar6 = *piVar2;
      local_38 = 0x200;
      pcVar8 = ":";
      do {
        uVar13 = *(uint *)(iVar6 + 4);
        uVar11 = uVar13 ^ 0x7fffffff;
        if (uVar7 < uVar11) {
          uVar11 = uVar7;
        }
        FUN_01284394(iVar6,pcVar8,uVar11);
        if (uVar13 == 0x7fffffff) goto LAB_00ec9844;
        pcVar8 = pcVar8 + uVar11;
        uVar7 = uVar7 - uVar11;
      } while (uVar7 != 0);
      iVar1 = FUN_00d91e78(uVar4 * 0x178 + iVar9,piVar2);
      iVar6 = 0;
      bVar10 = true;
      bVar5 = false;
      iVar9 = iVar12;
      if (iVar1 != 0) {
        return iVar1;
      }
    } while( true );
  }
LAB_00ec9848:
  iVar6 = FUN_01966f50(local_30,local_2c);
  return iVar6;
LAB_00ec982c:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
  goto LAB_00ec9848;
}

