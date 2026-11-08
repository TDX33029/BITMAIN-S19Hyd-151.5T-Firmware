// FUN_006b37f4 @ 006b37f4 size=744 calls_out=10 calls_in=2
// strings: 

undefined8 FUN_006b37f4(int param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined *puVar9;
  int *piVar10;
  int *piVar11;
  undefined1 auStack_d88 [80];
  uint local_d38;
  undefined4 local_d34;
  int *local_d2c;
  undefined1 auStack_d08 [104];
  short local_ca0;
  int local_c9c;
  undefined4 local_c98;
  short local_c7c;
  int local_c78;
  undefined4 local_c74;
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
  
  FUN_006b3c20(auStack_d88,param_1);
  piVar7 = *(int **)(param_1 + 0x80);
  do {
    iVar3 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar3 + 1;
  if (-1 < iVar3) {
    piVar11 = *(int **)(param_1 + 0x88);
    uVar4 = *(undefined4 *)(param_1 + 0x84);
    do {
      iVar3 = *piVar11;
      bVar2 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar2);
    *piVar11 = iVar3 + 1;
    if (-1 < iVar3) {
      piVar10 = *(int **)(param_1 + 0x90);
      uVar5 = *(undefined4 *)(param_1 + 0x8c);
      do {
        iVar3 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar3 + 1;
      if (-1 < iVar3) {
        piVar8 = *(int **)(param_1 + 0x94);
        do {
          iVar3 = *piVar8;
          bVar2 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar2);
        *piVar8 = iVar3 + 1;
        if (-1 < iVar3) {
          FUN_006b3ef8(auStack_d08,param_2);
          local_bc0 = *param_2;
          if (local_bc0 == -0x80000000) {
            iVar3 = param_2[1];
            puVar9 = (undefined *)param_2[2];
            FUN_006a7ac0(auStack_d08);
            if (local_ca0 != 2) {
              iVar6 = 0;
              if (local_ca0 != 0) {
                iVar6 = local_c9c;
              }
              if (local_ca0 != 0 && iVar6 != 0) {
                thunk_FUN_016d3fb4(local_c98);
              }
              iVar6 = 0;
              if (local_c7c != 0) {
                iVar6 = local_c78;
              }
              if (local_c7c != 0 && iVar6 != 0) {
                thunk_FUN_016d3fb4(local_c74);
              }
            }
            DataMemoryBarrier(0xb);
            do {
              iVar6 = *piVar8;
              bVar2 = (bool)hasExclusiveAccess(piVar8);
            } while (!bVar2);
            *piVar8 = iVar6 + -1;
            if (iVar6 == 1) {
              DataMemoryBarrier(0xb);
              FUN_00aaaeec(piVar8);
            }
            DataMemoryBarrier(0xb);
            do {
              iVar6 = *piVar10;
              bVar2 = (bool)hasExclusiveAccess(piVar10);
            } while (!bVar2);
            *piVar10 = iVar6 + -1;
            if (iVar6 == 1) {
              DataMemoryBarrier(0xb);
              FUN_00aaaeec(piVar10);
            }
            DataMemoryBarrier(0xb);
            do {
              iVar6 = *piVar11;
              bVar2 = (bool)hasExclusiveAccess(piVar11);
            } while (!bVar2);
            *piVar11 = iVar6 + -1;
            if (iVar6 == 1) {
              DataMemoryBarrier(0xb);
              FUN_0063c510(piVar11,uVar5);
            }
            DataMemoryBarrier(0xb);
            do {
              iVar6 = *piVar7;
              bVar2 = (bool)hasExclusiveAccess(piVar7);
            } while (!bVar2);
            *piVar7 = iVar6 + -1;
            if (iVar6 == 1) {
              DataMemoryBarrier(0xb);
              FUN_0063c510(piVar7,uVar4);
            }
            DataMemoryBarrier(0xb);
            do {
              iVar6 = *local_d2c;
              bVar2 = (bool)hasExclusiveAccess(local_d2c);
            } while (!bVar2);
            *local_d2c = iVar6 + -1;
            if (iVar6 == 1) {
              DataMemoryBarrier(0xb);
              FUN_01089b40(local_d2c);
            }
            if ((local_d38 & 0x7fffffff) != 0) {
              thunk_FUN_016d3fb4(local_d34);
            }
          }
          else {
            FUN_016dd1aa(auStack_c40,auStack_d88,0x80);
            FUN_016dd1aa(auStack_b00,auStack_d08,0xc0);
            local_c48 = 1;
            local_c44 = 0;
            FUN_016dd1aa(auStack_bbc,param_2 + 1,0xbc);
            local_a28 = 0;
            local_a40 = piVar7;
            local_a3c = uVar4;
            local_a38 = piVar11;
            local_a34 = uVar5;
            local_a30 = piVar10;
            local_a2c = piVar8;
            iVar3 = thunk_FUN_016d4a50(0xc20);
            if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(8,0xc20);
            }
            FUN_016dd1aa(iVar3,&local_c48,0xc20);
            puVar9 = &UNK_018588f4;
          }
          return CONCAT44(puVar9,iVar3);
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x6b3ad8);
  (*pcVar1)();
}

