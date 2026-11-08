// FUN_016d3ca8 @ 016d3ca8 size=718 calls_out=2 calls_in=2
// strings: 

int * FUN_016d3ca8(int *param_1,int *param_2,uint param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int local_20;
  uint uStack_1c;
  
  bVar2 = *(byte *)(param_2 + 5);
  uVar9 = 1 << (param_3 & 0xff);
  uVar4 = param_2[4] | param_2[3];
  uVar13 = bVar2 & 0x1f;
  uVar11 = (*(ushort *)(param_2 + 5) & 0xfff) >> 6;
  if ((uVar9 + uVar4 != (2 << uVar13) + -1) || ((bVar2 & 0x20) == 0)) {
    if (uVar4 == 0) {
      if (0x2f < uVar11) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d3ce0);
        (*pcVar1)();
      }
      iVar12 = uVar11 + 0xc;
      if ((int *)(&DAT_018ddb50)[iVar12] == param_2) goto LAB_016d3d16;
      if (param_2[1] == 0) {
        if (*param_2 != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d3cfa);
          (*pcVar1)();
        }
        piVar6 = (int *)(&DAT_018ddb50)[iVar12];
        if (piVar6 == (int *)0x0) {
          *param_2 = (int)param_2;
          param_2[1] = (int)param_2;
          (&DAT_018ddb50)[iVar12] = param_2;
        }
        else {
          param_2[1] = (int)piVar6;
          iVar12 = *piVar6;
          *param_2 = iVar12;
          *(int **)(iVar12 + 4) = param_2;
          *(int **)param_2[1] = param_2;
        }
        goto LAB_016d3d16;
      }
      goto LAB_016d3cf4;
    }
    goto LAB_016d3d16;
  }
  piVar6 = (int *)param_2[1];
  if (0x2f < uVar11) {
    if (piVar6 != (int *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d3eb2);
      (*pcVar1)();
    }
    goto LAB_016d3efa;
  }
  uVar14 = param_2[5] & 0xfffff000;
  if ((bVar2 & 0x1f) == 0) {
    if ((uVar14 != 0) && ((uint)*(ushort *)(&DAT_0042567c + uVar11 * 2) << 4 <= uVar14 - 0x10))
    goto LAB_016d3d9c;
LAB_016d3d78:
    if (piVar6 == (int *)0x0) goto LAB_016d3d80;
    piVar8 = (int *)(&DAT_018ddb50)[uVar11 + 0xc];
    if (param_2 != piVar6) goto LAB_016d3ec6;
LAB_016d3f6e:
    (&DAT_018ddb50)[uVar11 + 0xc] = 0;
LAB_016d3ee4:
    *param_2 = 0;
    param_2[1] = 0;
    if ((param_2 == piVar8) && (iVar12 = (&DAT_018ddb50)[uVar11 + 0xc], iVar12 != 0)) {
      if (*(int *)(iVar12 + 0xc) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d3e0e);
        (*pcVar1)();
      }
      puVar7 = (uint *)(iVar12 + 0x10);
      iVar15 = 2 << (*(byte *)(*(int *)(iVar12 + 8) + 4) & 0x1f);
      do {
        uVar4 = *(uint *)(iVar12 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar7);
          uVar9 = *puVar7;
          if (uVar4 != uVar9) goto LAB_016d3e2e;
          bVar3 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar3);
        *puVar7 = -iVar15 & uVar4;
LAB_016d3e2e:
        DataMemoryBarrier(0x1b);
      } while (uVar4 != uVar9);
      *(uint *)(iVar12 + 0xc) = iVar15 - 1U & uVar4;
    }
    uVar11 = (*(ushort *)(param_2 + 5) & 0xfff) >> 6;
    if (0x2f < uVar11) goto LAB_016d3efa;
    uVar13 = *(byte *)(param_2 + 5) & 0x1f;
  }
  else {
    if (uVar14 == 0) goto LAB_016d3d78;
LAB_016d3d9c:
    if (param_2 == piVar6) {
      if (((uVar11 - 7 < 0x20) && (99 < (byte)(&DAT_018ddd19)[uVar11])) &&
         (0x13 < uVar13 + 1 || (uint)(&DAT_018ddb50)[uVar11 + 0x3c] < (uVar13 + 1) * 9)) {
        if ((uVar4 == 0) && (param_2 != (int *)(&DAT_018ddb50)[uVar11 + 0xc])) {
LAB_016d3cf4:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d3cf4);
          (*pcVar1)();
        }
LAB_016d3d16:
        puVar7 = (uint *)(param_2 + 4);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar7);
          bVar3 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar3);
        *puVar7 = *puVar7 | uVar9;
        DataMemoryBarrier(0x1b);
        *param_1 = 0;
        param_1[1] = 0;
        return param_1;
      }
      piVar8 = (int *)(&DAT_018ddb50)[uVar11 + 0xc];
      goto LAB_016d3f6e;
    }
    if (piVar6 != (int *)0x0) {
      piVar8 = (int *)(&DAT_018ddb50)[uVar11 + 0xc];
LAB_016d3ec6:
      *(int **)(*param_2 + 4) = piVar6;
      *piVar6 = *param_2;
      if (param_2 == (int *)(&DAT_018ddb50)[uVar11 + 0xc]) {
        (&DAT_018ddb50)[uVar11 + 0xc] = param_2[1];
      }
      goto LAB_016d3ee4;
    }
  }
LAB_016d3d80:
  (&DAT_018ddb50)[uVar11 + 0x3c] = ((&DAT_018ddb50)[uVar11 + 0x3c] + -1) - uVar13;
LAB_016d3efa:
  if ((param_2[5] & 0xfffff000U) == 0) {
    iVar12 = param_2[2];
    uVar5 = FUN_016d3bc8(iVar12);
    bVar2 = *(byte *)(iVar12 + -3);
    *(undefined4 *)param_2[2] = 0;
    FUN_016d3ca8(&local_20,uVar5,bVar2 & 0x1f);
  }
  else {
    if (DAT_018ddd40 == -1) {
      puVar10 = (undefined1 *)0x18ddcff;
      do {
        puVar10 = puVar10 + 1;
        *puVar10 = 0;
      } while (puVar10 != &DAT_018ddd1f);
      DAT_018ddd40 = '\x01';
    }
    else {
      DAT_018ddd40 = DAT_018ddd40 + '\x01';
    }
    if (uVar11 - 7 < 0x20) {
      (&DAT_018ddcf9)[uVar11] = DAT_018ddd40;
    }
    local_20 = param_2[2];
    uStack_1c = param_2[5] & 0xfffff000;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  piVar6 = DAT_018ddb60;
  if (DAT_018ddb60 == (int *)0x0) {
    *param_2 = (int)param_2;
    param_2[1] = (int)param_2;
    DAT_018ddb60 = param_2;
  }
  else {
    param_2[1] = (int)DAT_018ddb60;
    iVar12 = *piVar6;
    *param_2 = iVar12;
    *(int **)(iVar12 + 4) = param_2;
    *(int **)param_2[1] = param_2;
  }
  *param_1 = local_20;
  param_1[1] = uStack_1c;
  return param_1;
}

