// FUN_01a0fa3c @ 01a0fa3c size=548 calls_out=7 calls_in=0
// strings: internal error: entered unreachable code

void FUN_01a0fa3c(int param_1,undefined4 param_2)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined1 *unaff_r4;
  undefined4 *puVar7;
  undefined8 uVar8;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x34)) {
  case 0:
    *(undefined1 *)(param_1 + 100) = 0;
    puVar7 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    *(undefined4 **)(param_1 + 0x38) = puVar7;
LAB_01a0fab4:
    *(undefined1 *)(param_1 + 0x60) = 0;
    *(undefined4 **)(param_1 + 0x3c) = puVar7;
LAB_01a0fac4:
    uVar6 = *puVar7;
    *(undefined1 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = uVar6;
    *(undefined4 *)(param_1 + 0x58) = uVar6;
    *(undefined4 **)(param_1 + 0x40) = puVar7 + 1;
    *(undefined4 *)(param_1 + 0x44) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d29cb0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d29cb0);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 100)) {
    case 0:
      puVar7 = *(undefined4 **)(param_1 + 0x38);
      goto LAB_01a0fab4;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d2b400);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d2b400);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x60)) {
    case 0:
      puVar7 = *(undefined4 **)(param_1 + 0x3c);
      goto LAB_01a0fac4;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d2b410);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d2b410);
    }
    break;
  case 4:
    iVar4 = *(int *)(param_1 + 0x3c);
    goto LAB_01a0fb98;
  }
  unaff_r4 = (undefined1 *)(param_1 + 100);
  bVar3 = FUN_019f9bc4(param_1 + 0x40,param_2);
  if (bVar3 == 2) {
    puVar7 = (undefined4 *)&DAT_00000003;
    *(undefined1 *)(param_1 + 0x60) = 3;
    *unaff_r4 = 3;
  }
  else {
    FUN_0193c3cc(param_1 + 0x40);
    if ((bVar3 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b420);
    }
    puVar7 = *(undefined4 **)(param_1 + 0x3c);
    uVar6 = *puVar7;
    *(undefined1 *)(param_1 + 100) = 1;
    *(undefined1 *)(param_1 + 0x60) = 1;
    *(undefined4 **)(param_1 + 0x30) = puVar7 + 6;
    *(undefined4 *)(param_1 + 0x2c) = uVar6;
    *(undefined4 **)(param_1 + 0x28) = puVar7 + 1;
    unaff_r4 = *(undefined1 **)(param_1 + 0x1c);
    uVar8 = (**(code **)(puVar7[7] + 0x10))(puVar7[6]);
    iVar4 = (int)((ulonglong)uVar8 >> 0x20);
    *(undefined8 *)(param_1 + 0x38) = uVar8;
LAB_01a0fb98:
    iVar4 = (**(code **)(iVar4 + 0xc))(*(undefined4 *)(param_1 + 0x38),param_2);
    if (iVar4 == 0) {
      FUN_01139b38(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
      FUN_019f8c54(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
      piVar5 = *(int **)(param_1 + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar5;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar4 + -1;
      puVar7 = (undefined4 *)&DAT_00000001;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        goto LAB_01a0fe44;
      }
    }
    else {
      puVar7 = (undefined4 *)&SUB_00000004;
    }
  }
  *puVar7 = unaff_r4;
LAB_01a0fe44:
                    /* WARNING: Does not return */
  pcVar2 = (code *)software_udf(0xe9,0x1a0fe44);
  (*pcVar2)();
}

