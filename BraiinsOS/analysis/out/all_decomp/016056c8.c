// FUN_016056c8 @ 016056c8 size=392 calls_out=6 calls_in=6
// strings: 

void FUN_016056c8(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  short *psVar8;
  int *piVar9;
  undefined1 uVar10;
  uint local_30;
  int local_2c;
  
  uVar7 = 0;
  if (*(char *)(param_2 + 1) == '\0') {
    piVar3 = (int *)FUN_016d2bc8();
    piVar9 = (int *)*param_2;
    uVar10 = 0;
    do {
      while( true ) {
        *piVar3 = 0;
        piVar4 = (int *)FUN_016d2700(piVar9[5]);
        if (piVar4 == (int *)0x0) {
          local_2c = *piVar3;
          *(undefined1 *)(param_2 + 1) = 1;
          if (local_2c == 0) {
            *param_1 = 0;
            param_1[1] = 0;
            return;
          }
          iVar5 = 0;
          local_30 = local_30 & 0xffffff00;
          goto LAB_016057ec;
        }
        psVar8 = (short *)((int)piVar4 + 0x13);
        iVar5 = FUN_016dd8a2(psVar8);
        if (iVar5 == 1) break;
        if (iVar5 != 2) {
          local_2c = *piVar4;
          param_2 = (undefined4 *)piVar4[1];
          uVar10 = *(undefined1 *)((int)piVar4 + 0x12);
          if (iVar5 != -1) goto LAB_016057a4;
          iVar5 = 1;
          local_30 = 0;
          goto LAB_016057b8;
        }
        if (*psVar8 != 0x2e2e) goto LAB_01605754;
      }
    } while (*(char *)psVar8 == '.');
LAB_01605754:
    local_2c = *piVar4;
    param_2 = (undefined4 *)piVar4[1];
    uVar10 = *(undefined1 *)((int)piVar4 + 0x12);
LAB_016057a4:
    local_30 = iVar5 + 1;
    iVar5 = thunk_FUN_016d4a50(local_30);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(1,local_30);
    }
LAB_016057b8:
    FUN_016dd1aa(iVar5,psVar8,local_30);
    do {
      iVar6 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar6 + 1;
    if (iVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1605840);
      (*pcVar1)();
    }
LAB_016057ec:
    param_1[3] = local_30;
    uVar7 = 1;
    param_1[4] = local_2c;
    param_1[8] = piVar9;
    *(undefined1 *)(param_1 + 6) = uVar10;
    param_1[2] = iVar5;
    param_1[5] = param_2;
  }
  *param_1 = uVar7;
  param_1[1] = 0;
  return;
}

