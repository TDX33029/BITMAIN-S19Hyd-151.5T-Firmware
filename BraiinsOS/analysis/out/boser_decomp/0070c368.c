// FUN_0070c368 @ 0070c368 size=380 calls_out=4 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0070c368(int *param_1)

{
  code *pcVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  uint local_30;
  int *local_2c;
  uint local_28;
  
  if (*param_1 == -0x80000000) {
    local_2c = (int *)param_1[1];
    do {
      iVar5 = *local_2c;
      bVar13 = (bool)hasExclusiveAccess(local_2c);
    } while (!bVar13);
    *local_2c = iVar5 + 1;
    if (iVar5 < 0) {
LAB_0070c4e0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x70c4e0);
      (*pcVar1)();
    }
    local_28 = param_1[2];
    local_30 = 0x80000000;
  }
  else {
    local_28 = param_1[2];
    uVar7 = 0;
    bVar14 = 0xffffffe < local_28;
    bVar13 = local_28 == 0xfffffff;
    uVar12 = local_28 * 0x10;
    if (local_28 < 0x10000000) {
      bVar14 = 0x7ffffffb < uVar12;
      bVar13 = uVar12 == 0x7ffffffc;
    }
    if (bVar14 && !bVar13) {
LAB_0070c3cc:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar7,uVar12);
    }
    if (uVar12 == 0) {
      local_2c = (int *)&SUB_00000004;
      local_30 = 0;
    }
    else {
      puVar9 = (undefined4 *)param_1[1];
      uVar7 = 4;
      local_2c = (int *)FUN_01298504(uVar12,4);
      if (local_2c == (int *)0x0) goto LAB_0070c3cc;
      if (local_28 != 0) {
        iVar5 = 0;
        puVar10 = puVar9;
        uVar12 = local_28;
        do {
          if (puVar10 == puVar9 + local_28 * 4) break;
          uVar12 = uVar12 - 1;
          piVar8 = (int *)*puVar10;
          do {
            iVar3 = *piVar8;
            bVar13 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar13);
          *piVar8 = iVar3 + 1;
          if (iVar3 < 0) goto LAB_0070c4e0;
          iVar3 = puVar10[1];
          piVar11 = (int *)puVar10[2];
          do {
            iVar4 = *piVar11;
            bVar13 = (bool)hasExclusiveAccess(piVar11);
          } while (!bVar13);
          *piVar11 = iVar4 + 1;
          if (iVar4 < 0) goto LAB_0070c4e0;
          iVar4 = puVar10[3];
          piVar6 = local_2c + iVar5 * 4;
          *piVar6 = (int)piVar8;
          piVar6[1] = iVar3;
          piVar6[2] = (int)piVar11;
          piVar6[3] = iVar4;
          iVar5 = iVar5 + 1;
          puVar10 = puVar10 + 4;
        } while (uVar12 != 0);
      }
      local_30 = local_28;
    }
  }
  puVar2 = (uint *)thunk_FUN_01be5118(0xc);
  if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  *puVar2 = local_30;
  puVar2[1] = (uint)local_2c;
  puVar2[2] = local_28;
  return;
}

