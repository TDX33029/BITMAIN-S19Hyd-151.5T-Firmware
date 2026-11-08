// FUN_0076af44 @ 0076af44 size=608 calls_out=9 calls_in=2
// strings: 

undefined8 FUN_0076af44(int param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined1 auStack_d88 [128];
  undefined1 auStack_d08 [192];
  undefined4 local_c48;
  undefined4 local_c44;
  undefined1 auStack_c40 [128];
  int local_bc0;
  undefined1 auStack_bbc [188];
  undefined1 auStack_b00 [192];
  int *local_a40;
  undefined4 local_a3c;
  int *local_a38;
  undefined4 local_a34;
  int *local_a30;
  int *local_a2c;
  undefined1 local_a28;
  
  FUN_0074ad08(auStack_d88,param_1);
  piVar6 = *(int **)(param_1 + 0x80);
  do {
    iVar3 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = iVar3 + 1;
  if (-1 < iVar3) {
    uVar5 = *(undefined4 *)(param_1 + 0x84);
    piVar10 = *(int **)(param_1 + 0x88);
    do {
      iVar3 = *piVar10;
      bVar2 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar2);
    *piVar10 = iVar3 + 1;
    if (-1 < iVar3) {
      uVar7 = *(undefined4 *)(param_1 + 0x8c);
      piVar11 = *(int **)(param_1 + 0x90);
      do {
        iVar3 = *piVar11;
        bVar2 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar2);
      *piVar11 = iVar3 + 1;
      if (-1 < iVar3) {
        piVar9 = *(int **)(param_1 + 0x94);
        do {
          iVar3 = *piVar9;
          bVar2 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar2);
        *piVar9 = iVar3 + 1;
        if (-1 < iVar3) {
          FUN_00761ec0(auStack_d08,param_2);
          local_bc0 = *param_2;
          if (local_bc0 == -0x80000000) {
            iVar3 = param_2[1];
            puVar8 = (undefined4 *)param_2[2];
            FUN_0075d5b4(auStack_d08);
            DataMemoryBarrier(0xb);
            do {
              iVar4 = *piVar9;
              bVar2 = (bool)hasExclusiveAccess(piVar9);
            } while (!bVar2);
            *piVar9 = iVar4 + -1;
            if (iVar4 == 1) {
              DataMemoryBarrier(0xb);
              FUN_01a38efc(piVar9);
            }
            DataMemoryBarrier(0xb);
            do {
              iVar4 = *piVar11;
              bVar2 = (bool)hasExclusiveAccess(piVar11);
            } while (!bVar2);
            *piVar11 = iVar4 + -1;
            if (iVar4 == 1) {
              DataMemoryBarrier(0xb);
              FUN_01a38efc(piVar11);
            }
            DataMemoryBarrier(0xb);
            do {
              iVar4 = *piVar10;
              bVar2 = (bool)hasExclusiveAccess(piVar10);
            } while (!bVar2);
            *piVar10 = iVar4 + -1;
            if (iVar4 == 1) {
              DataMemoryBarrier(0xb);
              FUN_00795ca8(piVar10,uVar7);
            }
            DataMemoryBarrier(0xb);
            do {
              iVar4 = *piVar6;
              bVar2 = (bool)hasExclusiveAccess(piVar6);
            } while (!bVar2);
            *piVar6 = iVar4 + -1;
            if (iVar4 == 1) {
              DataMemoryBarrier(0xb);
              FUN_00795ca8(piVar6,uVar5);
            }
            FUN_0074b190(auStack_d88);
          }
          else {
            FUN_01bed4e2(auStack_c40,auStack_d88,0x80);
            FUN_01bed4e2(auStack_b00,auStack_d08,0xc0);
            local_c48 = 1;
            local_c44 = 0;
            FUN_01bed4e2(auStack_bbc,param_2 + 1,0xbc);
            local_a28 = 0;
            local_a40 = piVar6;
            local_a3c = uVar5;
            local_a38 = piVar10;
            local_a34 = uVar7;
            local_a30 = piVar11;
            local_a2c = piVar9;
            iVar3 = thunk_FUN_01be5118(0xc20);
            if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(8,0xc20);
            }
            FUN_01bed4e2(iVar3,&local_c48,0xc20);
            puVar8 = &DAT_01c087ac;
          }
          return CONCAT44(puVar8,iVar3);
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x76b1a0);
  (*pcVar1)();
}

