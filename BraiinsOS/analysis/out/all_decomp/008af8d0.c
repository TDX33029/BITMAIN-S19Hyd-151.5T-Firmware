// FUN_008af8d0 @ 008af8d0 size=696 calls_out=8 calls_in=2
// strings: 

undefined4 FUN_008af8d0(double *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  double *pdVar3;
  uint uVar4;
  uint *puVar5;
  double *pdVar6;
  uint *puVar7;
  double *pdVar8;
  undefined1 uVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 extraout_s1;
  double dVar12;
  double dVar13;
  ulonglong uVar14;
  undefined1 auStack_4c [12];
  double local_40;
  double *local_38;
  undefined1 *local_34;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x104)) {
  case 0:
    dVar13 = *param_1;
    puVar7 = *(uint **)(param_1 + 0x1f);
    param_1[1] = dVar13;
    if ((*puVar7 & 1) == 0) {
      uVar14 = (ulonglong)(uint)(float)dVar13;
    }
    else {
      uVar11 = FUN_016d6168(SUB84(*(double *)(puVar7 + 2) - dVar13 * *(double *)(puVar7 + 4),0));
      dVar12 = (double)CONCAT44(extraout_s1,uVar11);
      uVar14 = FUN_01845ca8(uVar11,extraout_s1);
      if (dVar12 < -9.223372036854776e+18) {
        uVar14 = 0x8000000000000000;
      }
      if (9.223372036854775e+18 < dVar12) {
        uVar14 = 0x7fffffffffffffff;
      }
      if (NAN(dVar12)) {
        uVar14 = 0;
      }
    }
    uVar1 = (uint)uVar14;
    uVar4 = 0xff;
    if ((char)puVar7[0x3c] == '\x01') {
      uVar4 = 0xffffffff;
    }
    if (((longlong)uVar14 < 0) ||
       (bVar10 = uVar1 <= uVar4, uVar4 = uVar4 - uVar1, (uint)bVar10 <= (uint)-(int)(uVar14 >> 0x20)
       )) {
      local_34 = &LAB_00fb1f30;
      local_38 = &local_40;
      local_40 = dVar13;
      FUN_00600d2c(auStack_4c,&DAT_00577a7a,&local_38,uVar4);
      FUN_00808de4(auStack_4c);
      goto LAB_008afae8;
    }
    puVar5 = (uint *)((int)param_1 + 0xfc);
    *puVar5 = uVar1;
    pdVar3 = param_1 + 0x20;
    *(uint *)pdVar3 = uVar1;
    *(uint **)(param_1 + 0x1d) = puVar7;
    *(double **)((int)param_1 + 0xec) = pdVar3;
    *(uint **)(param_1 + 0x1e) = puVar5;
    *(undefined1 *)((int)param_1 + 0xf4) = 0;
LAB_008afa1c:
    uVar9 = (undefined1)puVar7[0x3c];
    *(undefined1 *)((int)param_1 + 0xe1) = 0;
    puVar7 = puVar7 + 0x3e;
    *(undefined1 *)((int)param_1 + 0xe2) = uVar9;
    *(uint **)((int)param_1 + 0xd4) = puVar7;
    *(double **)(param_1 + 0x1b) = pdVar3;
    *(uint **)((int)param_1 + 0xdc) = puVar5;
LAB_008afa3c:
    pdVar8 = param_1 + 0x1c;
    *(undefined1 *)pdVar8 = uVar9;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    *(undefined4 *)((int)param_1 + 0x14) = 0;
    pdVar6 = param_1 + 0x1a;
    *(uint **)pdVar6 = puVar5;
    *(undefined4 *)(param_1 + 0x14) = 2;
    *(undefined4 *)(param_1 + 0x16) = 2;
    *(undefined4 *)(param_1 + 2) = 0;
    *(uint **)(param_1 + 0x17) = puVar7;
    *(double **)((int)param_1 + 0xbc) = pdVar3;
    *(double **)(param_1 + 0x18) = pdVar8;
    *(double **)((int)param_1 + 0xc4) = pdVar6;
    *(undefined1 **)(param_1 + 0x19) = &LAB_01103938;
    *(undefined4 *)(param_1 + 0x15) = 0;
    *(undefined1 *)((int)param_1 + 0x29) = 0;
    *(double **)((int)param_1 + 0x24) = pdVar6;
    *(uint **)(param_1 + 3) = puVar7;
    *(double **)((int)param_1 + 0x1c) = pdVar3;
    *(double **)(param_1 + 4) = pdVar8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01863a0c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01863a0c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0xf4)) {
    case 0:
      puVar7 = *(uint **)(param_1 + 0x1d);
      pdVar3 = *(double **)((int)param_1 + 0xec);
      puVar5 = *(uint **)(param_1 + 0x1e);
      goto LAB_008afa1c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01863a9c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01863a9c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0xe1)) {
    case 0:
      uVar9 = *(undefined1 *)((int)param_1 + 0xe2);
      puVar7 = *(uint **)((int)param_1 + 0xd4);
      pdVar3 = *(double **)(param_1 + 0x1b);
      puVar5 = *(uint **)((int)param_1 + 0xdc);
      goto LAB_008afa3c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018639ec);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018639ec);
    }
  }
  iVar2 = FUN_0081351c(param_1 + 2,param_2);
  if (iVar2 == 2) {
    *(undefined1 *)((int)param_1 + 0x104) = 3;
    *(undefined1 *)((int)param_1 + 0xf4) = 3;
    *(undefined1 *)((int)param_1 + 0xe1) = 3;
    return 1;
  }
  FUN_008b42e8(param_1 + 2);
  *(undefined1 *)((int)param_1 + 0xf4) = 1;
  *(undefined1 *)((int)param_1 + 0xe1) = 1;
LAB_008afae8:
  *(undefined1 *)((int)param_1 + 0x104) = 1;
  return 0;
}

