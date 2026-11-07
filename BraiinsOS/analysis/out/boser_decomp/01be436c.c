// FUN_01be436c @ 01be436c size=718 calls_out=2 calls_in=2
// strings: 

int * FUN_01be436c(int *param_1,int *param_2,uint param_3)

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
        pcVar1 = (code *)software_udf(0xff,0x1be43a4);
        (*pcVar1)();
      }
      iVar12 = uVar11 + 0xc;
      if ((int *)(&DAT_01d535b8)[iVar12] == param_2) goto LAB_01be43da;
      if (param_2[1] == 0) {
        if (*param_2 != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x1be43be);
          (*pcVar1)();
        }
        piVar6 = (int *)(&DAT_01d535b8)[iVar12];
        if (piVar6 == (int *)0x0) {
          *param_2 = (int)param_2;
          param_2[1] = (int)param_2;
          (&DAT_01d535b8)[iVar12] = param_2;
        }
        else {
          param_2[1] = (int)piVar6;
          iVar12 = *piVar6;
          *param_2 = iVar12;
          *(int **)(iVar12 + 4) = param_2;
          *(int **)param_2[1] = param_2;
        }
        goto LAB_01be43da;
      }
      goto LAB_01be43b8;
    }
    goto LAB_01be43da;
  }
  piVar6 = (int *)param_2[1];
  if (0x2f < uVar11) {
    if (piVar6 != (int *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x1be4576);
      (*pcVar1)();
    }
    goto LAB_01be45be;
  }
  uVar14 = param_2[5] & 0xfffff000;
  if ((bVar2 & 0x1f) == 0) {
    if ((uVar14 != 0) && ((uint)*(ushort *)(&DAT_0056569c + uVar11 * 2) << 4 <= uVar14 - 0x10))
    goto LAB_01be4460;
LAB_01be443c:
    if (piVar6 == (int *)0x0) goto LAB_01be4444;
    piVar8 = (int *)(&DAT_01d535b8)[uVar11 + 0xc];
    if (param_2 != piVar6) goto LAB_01be458a;
LAB_01be4632:
    (&DAT_01d535b8)[uVar11 + 0xc] = 0;
LAB_01be45a8:
    *param_2 = 0;
    param_2[1] = 0;
    if ((param_2 == piVar8) && (iVar12 = (&DAT_01d535b8)[uVar11 + 0xc], iVar12 != 0)) {
      if (*(int *)(iVar12 + 0xc) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x1be44d2);
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
          if (uVar4 != uVar9) goto LAB_01be44f2;
          bVar3 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar3);
        *puVar7 = -iVar15 & uVar4;
LAB_01be44f2:
        DataMemoryBarrier(0x1b);
      } while (uVar4 != uVar9);
      *(uint *)(iVar12 + 0xc) = iVar15 - 1U & uVar4;
    }
    uVar11 = (*(ushort *)(param_2 + 5) & 0xfff) >> 6;
    if (0x2f < uVar11) goto LAB_01be45be;
    uVar13 = *(byte *)(param_2 + 5) & 0x1f;
  }
  else {
    if (uVar14 == 0) goto LAB_01be443c;
LAB_01be4460:
    if (param_2 == piVar6) {
      if (((uVar11 - 7 < 0x20) && (99 < (byte)(&DAT_01d53781)[uVar11])) &&
         (0x13 < uVar13 + 1 || (uint)(&DAT_01d535b8)[uVar11 + 0x3c] < (uVar13 + 1) * 9)) {
        if ((uVar4 == 0) && (param_2 != (int *)(&DAT_01d535b8)[uVar11 + 0xc])) {
LAB_01be43b8:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x1be43b8);
          (*pcVar1)();
        }
LAB_01be43da:
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
      piVar8 = (int *)(&DAT_01d535b8)[uVar11 + 0xc];
      goto LAB_01be4632;
    }
    if (piVar6 != (int *)0x0) {
      piVar8 = (int *)(&DAT_01d535b8)[uVar11 + 0xc];
LAB_01be458a:
      *(int **)(*param_2 + 4) = piVar6;
      *piVar6 = *param_2;
      if (param_2 == (int *)(&DAT_01d535b8)[uVar11 + 0xc]) {
        (&DAT_01d535b8)[uVar11 + 0xc] = param_2[1];
      }
      goto LAB_01be45a8;
    }
  }
LAB_01be4444:
  (&DAT_01d535b8)[uVar11 + 0x3c] = ((&DAT_01d535b8)[uVar11 + 0x3c] + -1) - uVar13;
LAB_01be45be:
  if ((param_2[5] & 0xfffff000U) == 0) {
    iVar12 = param_2[2];
    uVar5 = FUN_01be428c(iVar12);
    bVar2 = *(byte *)(iVar12 + -3);
    *(undefined4 *)param_2[2] = 0;
    FUN_01be436c(&local_20,uVar5,bVar2 & 0x1f);
  }
  else {
    if (DAT_01d537a8 == -1) {
      puVar10 = (undefined1 *)0x1d53767;
      do {
        puVar10 = puVar10 + 1;
        *puVar10 = 0;
      } while (puVar10 != &DAT_01d53787);
      DAT_01d537a8 = '\x01';
    }
    else {
      DAT_01d537a8 = DAT_01d537a8 + '\x01';
    }
    if (uVar11 - 7 < 0x20) {
      (&DAT_01d53761)[uVar11] = DAT_01d537a8;
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
  piVar6 = DAT_01d535c8;
  if (DAT_01d535c8 == (int *)0x0) {
    *param_2 = (int)param_2;
    param_2[1] = (int)param_2;
    DAT_01d535c8 = param_2;
  }
  else {
    param_2[1] = (int)DAT_01d535c8;
    iVar12 = *piVar6;
    *param_2 = iVar12;
    *(int **)(iVar12 + 4) = param_2;
    *(int **)param_2[1] = param_2;
  }
  *param_1 = local_20;
  param_1[1] = uStack_1c;
  return param_1;
}

