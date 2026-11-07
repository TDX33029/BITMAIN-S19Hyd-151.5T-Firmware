// FUN_00702a70 @ 00702a70 size=600 calls_out=2 calls_in=2
// strings: 

void FUN_00702a70(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint local_48;
  
  piVar3 = (int *)thunk_FUN_016d4a50(0xc);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined1 *)(piVar3 + 2) = 0;
  local_48 = local_48 & 0xffffff00;
  *piVar3 = 1;
  piVar3[1] = 1;
  piVar4 = (int *)thunk_FUN_016d4a50(0x2c);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x2c);
  }
  *piVar4 = 1;
  piVar4[1] = 1;
  piVar4[2] = 0;
  piVar4[3] = 0;
  piVar4[4] = local_48;
  piVar4[5] = 0;
  piVar4[6] = 4;
  piVar4[7] = 0;
  piVar4[8] = 0;
  piVar4[9] = 0;
  piVar4[10] = 0;
  do {
    iVar5 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar5 + 1;
  if (-1 < iVar5) {
    do {
      iVar5 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar5 + 1;
    if (-1 < iVar5) {
      puVar6 = (undefined4 *)thunk_FUN_016d4a50(8);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,8);
      }
      *(undefined1 *)(puVar6 + 1) = 0;
      *puVar6 = 0;
      puVar7 = (undefined4 *)thunk_FUN_016d4a50(8);
      if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,8);
      }
      *puVar7 = 0;
      puVar7[1] = 0;
      piVar8 = (int *)thunk_FUN_016d4a50(0x30);
      if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x30);
      }
      *piVar8 = 1;
      piVar8[1] = 1;
      piVar8[2] = (int)puVar6;
      piVar8[3] = (int)puVar6;
      piVar8[4] = (int)puVar7;
      piVar8[5] = (int)puVar7;
      piVar8[6] = 1;
      piVar8[7] = -0x80000000;
      piVar8[8] = 1;
      piVar8[9] = 0;
      piVar8[10] = 0;
      piVar8[0xb] = 0;
      do {
        iVar5 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = iVar5 + 1;
      if (-1 < iVar5) {
        puVar6 = (undefined4 *)thunk_FUN_016d4a50(0x1c);
        if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x1c);
        }
        *puVar6 = 1;
        puVar6[1] = 1;
        *(undefined1 *)(puVar6 + 6) = 0;
        puVar6[4] = 0;
        *(undefined1 *)(puVar6 + 3) = 0;
        puVar6[2] = 0;
        *(undefined1 *)(param_1 + 0xd) = 0;
        param_1[0x11] = 0;
        param_1[0x12] = 4;
        param_1[0x13] = 0;
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x16] = piVar8;
        param_1[0x17] = piVar4;
        *(undefined1 *)(param_1 + 0x10) = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[5] = 0;
        param_1[6] = 4;
        param_1[7] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = piVar3;
        param_1[0xb] = piVar8;
        param_1[0xc] = puVar6;
        *(undefined1 *)(param_1 + 4) = 0;
        *param_1 = piVar3;
        param_1[1] = piVar4;
        param_1[2] = 0;
        param_1[3] = 0;
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x702cd4);
  (*pcVar1)();
}

