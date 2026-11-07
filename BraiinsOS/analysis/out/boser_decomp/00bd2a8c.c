// FUN_00bd2a8c @ 00bd2a8c size=384 calls_out=5 calls_in=9
// strings: internal error: entered unreachable code

void FUN_00bd2a8c(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xd)) {
  case 0:
    iVar3 = *(int *)*param_2;
    *(undefined1 *)(param_2 + 0xc) = 0;
    puVar4 = (undefined4 *)(iVar3 + 8);
    param_2[1] = puVar4;
LAB_00bd2b00:
    param_2[2] = puVar4;
    *(undefined1 *)(param_2 + 0xb) = 0;
LAB_00bd2b14:
    uVar6 = *puVar4;
    *(undefined1 *)(param_2 + 10) = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = uVar6;
    param_2[9] = uVar6;
    param_2[3] = puVar4 + 1;
    param_2[4] = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1f1a0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1f1a0);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xc)) {
    case 0:
      puVar4 = (undefined4 *)param_2[1];
      goto LAB_00bd2b00;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d2b400);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d2b400);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xb)) {
    case 0:
      puVar4 = (undefined4 *)param_2[2];
      goto LAB_00bd2b14;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d2b410);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d2b410);
    }
  }
  bVar1 = FUN_019f9bc4(param_2 + 3,param_3);
  if (bVar1 == 2) {
    *(undefined1 *)(param_2 + 0xc) = 3;
    *(undefined1 *)(param_2 + 0xb) = 3;
  }
  else {
    FUN_0193c3cc(param_2 + 3);
    if ((bVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b420);
    }
    piVar5 = (int *)param_2[2];
    param_1[2] = (int)(piVar5 + 6);
    iVar3 = *piVar5;
    uVar2 = 1;
    *(undefined1 *)(param_2 + 0xb) = 1;
    *param_1 = (int)(piVar5 + 1);
    param_1[1] = iVar3;
    *(undefined1 *)(param_2 + 0xc) = 1;
    if (piVar5 + 1 != (int *)0x0) goto LAB_00bd2ba4;
  }
  *param_1 = 0;
  uVar2 = 3;
LAB_00bd2ba4:
  *(undefined1 *)(param_2 + 0xd) = uVar2;
  return;
}

