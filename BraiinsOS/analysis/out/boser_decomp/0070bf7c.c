// FUN_0070bf7c @ 0070bf7c size=668 calls_out=8 calls_in=1
// strings: __private__axum_nest_tail_param | __private__axum_fallback

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0070bf7c(int *param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 local_38 [8];
  int local_30;
  int local_2c;
  uint local_28;
  
  piVar5 = (int *)*param_2;
  puVar6 = (undefined4 *)param_2[1];
  puVar13 = (undefined4 *)param_2[2];
LAB_0070bfa4:
  do {
    if (puVar6 == (undefined4 *)0x0) {
      if (puVar13 == (undefined4 *)param_2[3]) goto LAB_0070c1b0;
      puVar12 = puVar13 + 4;
      param_2[2] = (int)puVar12;
      puVar4 = (undefined4 *)0x0;
    }
    else {
      iVar10 = 0;
      if ((param_2[3] == 0) || (param_2[3] = param_2[3] + -1, puVar6 == puVar13)) goto LAB_0070c1b4;
      param_2[1] = (int)(puVar6 + 4);
      puVar4 = puVar6 + 4;
      puVar12 = puVar13;
      puVar13 = puVar6;
    }
    puVar6 = puVar4;
    FUN_012fbd94(&local_30,*puVar13,puVar13[1]);
    uVar2 = local_28;
    iVar10 = local_2c;
    if (local_30 == 1) {
      puVar11 = &DAT_01cfc698;
LAB_0070c1f0:
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,local_38,&DAT_01cfc638,puVar11);
    }
    FUN_012fbd94(&local_30,puVar13[2],puVar13[3]);
    uVar3 = local_28;
    iVar8 = local_2c;
    if (local_30 == 1) {
      puVar11 = &DAT_01cfc6a8;
      goto LAB_0070c1f0;
    }
    puVar13 = puVar12;
    if (uVar2 < 0x1f) {
      if (uVar2 < 0x18) break;
    }
    else {
      iVar7 = thunk_FUN_01bed842("__private__axum_nest_tail_param",iVar10,0x1f);
      if (iVar7 == 0) goto LAB_0070bfa4;
    }
    iVar7 = thunk_FUN_01bed842("__private__axum_fallback",iVar10,0x18);
  } while (iVar7 == 0);
  FUN_01655afc(&local_30,iVar8,iVar8 + uVar3);
  if (local_30 != -0x7fffffff) {
    uVar14 = FUN_0071155c(local_28);
    FUN_01bed4e2((int)uVar14 + 8,local_2c,local_28);
    if (local_30 != -0x80000000) {
      FUN_019bb7e0(local_30,local_2c);
    }
    if ((int)uVar14 != 0) {
      uVar15 = FUN_0071155c(uVar2);
      iVar8 = (int)uVar15;
      FUN_01bed4e2(iVar8 + 8,iVar10,uVar2);
      iVar10 = 0;
      if (iVar8 != 0) {
        param_1[1] = (int)((ulonglong)uVar15 >> 0x20);
        *(undefined8 *)(param_1 + 2) = uVar14;
        iVar10 = iVar8;
      }
      goto LAB_0070c1b4;
    }
  }
  uVar14 = FUN_0071155c(uVar2);
  FUN_01bed4e2((int)uVar14 + 8,iVar10,uVar2);
  piVar9 = (int *)*piVar5;
  if (piVar9 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar9;
      bVar1 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar1);
    *piVar9 = iVar10 + -1;
    if (iVar10 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(*piVar5,piVar5[1]);
    }
  }
  *(undefined8 *)piVar5 = uVar14;
LAB_0070c1b0:
  iVar10 = 0;
LAB_0070c1b4:
  *param_1 = iVar10;
  return;
}

