// FUN_00a70ba4 @ 00a70ba4 size=844 calls_out=13 calls_in=0
// strings: 

void FUN_00a70ba4(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  bool bVar13;
  int local_21c;
  int local_218;
  int local_214;
  int local_210;
  int local_20c;
  int local_208;
  int local_204;
  int local_200;
  int local_1fc;
  undefined1 auStack_1f8 [208];
  int local_128;
  undefined1 auStack_110 [208];
  int local_40;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 1)) {
  case 0:
    *(undefined1 *)(param_2 + 0x34) = 0;
    param_2[2] = *param_2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c0f56c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0f56c);
  case 4:
    goto switchD_00a70bc4_caseD_4;
  }
  FUN_00a6fd0c(&local_210,param_2 + 2,param_3);
  iVar5 = local_1fc;
  iVar8 = local_200;
  iVar9 = local_204;
  iVar11 = local_208;
  iVar10 = local_20c;
  iVar6 = local_210;
  if (local_210 == 3) {
    uVar3 = 3;
    *param_1 = 3;
  }
  else {
    cVar1 = *(char *)(param_2 + 0x34);
    bVar13 = cVar1 == '\x03';
    if (bVar13) {
      cVar1 = *(char *)(param_2 + 0x33);
    }
    if (bVar13 && cVar1 == '\x03') {
      FUN_00b99500(param_2 + 4);
    }
    if (iVar6 == 2) {
      param_2[2] = iVar10;
      param_2[3] = iVar11;
      param_2[4] = iVar9;
      *(undefined2 *)(param_2 + 0x16f) = 0x100;
      param_2[0x16e] = param_2 + 2;
switchD_00a70bc4_caseD_4:
      puVar12 = param_2 + 6;
      FUN_00a70fd4(&local_210,puVar12,param_3);
      iVar11 = local_208;
      iVar10 = local_20c;
      iVar6 = local_210;
      if (local_210 == 3) {
        *param_1 = 3;
        uVar3 = 4;
        goto LAB_00a70ed4;
      }
      if (*(char *)(param_2 + 0x16f) == '\x03') {
        FUN_00a7389c(puVar12);
      }
      if (iVar6 == 2) {
        local_214 = local_204;
        local_21c = iVar10;
        puVar7 = (undefined4 *)0x0;
        iVar6 = iVar11 + local_204 * 0x28;
        local_204 = local_204 * 0x28;
        iVar9 = 0;
        local_218 = iVar11;
        while (puVar7 == (undefined4 *)0x0 || puVar7 == puVar12) {
          iVar8 = 8;
          if (iVar11 == 0) {
            iVar10 = 0;
            goto LAB_00a70ea4;
          }
          iVar10 = 0;
          if (local_204 == 0) goto LAB_00a70ea4;
          puVar7 = *(undefined4 **)(iVar11 + 0x20);
          piVar2 = (int *)(iVar11 + 0x24);
          local_204 = local_204 + -0x28;
          iVar11 = iVar11 + 0x28;
          puVar12 = puVar7 + *piVar2 * 0x76;
        }
        iVar9 = 0;
        FUN_00a5d610(auStack_1f8,0,puVar7);
        iVar8 = 8;
        iVar10 = 0;
        if (local_128 != -0x80000000) {
          puVar7 = puVar7 + 0x76;
          uVar4 = ((uint)((int)puVar12 - (int)puVar7) >> 3) * -0x5f75270d;
          if (uVar4 < 4) {
            uVar4 = 3;
          }
          iVar10 = (uVar4 + 1) * 0xe8;
          iVar8 = FUN_01298504(iVar10,8);
          if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(8,iVar10);
          }
          iVar10 = FUN_01bed4e2(iVar8,auStack_1f8,0xe8);
          local_208 = 1;
          iVar9 = 1;
          local_210 = uVar4 + 1;
          local_20c = iVar8;
          while( true ) {
            while (puVar7 == puVar12) {
              if (iVar11 != 0) {
                iVar10 = iVar6;
              }
              if (iVar11 == 0 || iVar11 == iVar10) goto LAB_00a70ea0;
              piVar2 = (int *)(iVar11 + 0x24);
              puVar7 = *(undefined4 **)(iVar11 + 0x20);
              iVar11 = iVar11 + 0x28;
              puVar12 = puVar7 + *piVar2 * 0x76;
            }
            FUN_00a5d610(auStack_110,iVar9,puVar7);
            if (local_40 == -0x80000000) break;
            puVar7 = puVar7 + 0x76;
            if (iVar9 == local_210) {
              FUN_0132b898(&local_210,iVar9,
                           ((uint)((int)puVar12 - (int)puVar7) >> 3) * -0x5f75270d + 1,8,0xe8);
              iVar8 = local_20c;
            }
            iVar5 = iVar9 + 1;
            iVar10 = FUN_01bed4e2(iVar9 * 0xe8 + iVar8,auStack_110,0xe8);
            iVar9 = iVar5;
            local_208 = iVar5;
          }
LAB_00a70ea0:
          iVar10 = local_210;
        }
LAB_00a70ea4:
        FUN_00a573e8(&local_21c);
        iVar5 = FUN_0084ec48(param_2 + 2);
        iVar6 = 2;
        iVar11 = iVar8;
      }
      else {
        FUN_0084ec48(param_2 + 2);
        iVar5 = local_1fc;
        iVar8 = local_200;
        iVar9 = local_204;
      }
    }
    param_1[5] = iVar5;
    uVar3 = 1;
    *param_1 = iVar6;
    param_1[1] = iVar10;
    param_1[2] = iVar11;
    param_1[3] = iVar9;
    param_1[4] = iVar8;
  }
LAB_00a70ed4:
  *(undefined1 *)(param_2 + 1) = uVar3;
  return;
}

