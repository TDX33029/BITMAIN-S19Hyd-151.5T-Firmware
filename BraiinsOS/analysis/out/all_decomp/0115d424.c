// FUN_0115d424 @ 0115d424 size=440 calls_out=4 calls_in=2
// strings: 

void FUN_0115d424(uint *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  uint local_f8;
  uint local_f4;
  int *local_e8;
  int *piStack_e4;
  undefined4 uStack_e0;
  int *local_dc;
  int *local_d8;
  undefined1 auStack_d0 [172];
  
  uVar8 = *(uint *)(param_2 + 8);
  iVar11 = uVar8 * 0xc0;
  if (0xaaaaaa < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  if (iVar11 == 0) {
    local_f4 = 8;
    local_f8 = 0;
  }
  else {
    puVar9 = *(undefined4 **)(param_2 + 4);
    local_f4 = thunk_FUN_016d4a50(iVar11);
    if (local_f4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,iVar11);
    }
    local_f8 = uVar8;
    if (uVar8 != 0) {
      puVar10 = puVar9;
      iVar11 = 0;
      uVar12 = uVar8;
      do {
        if (puVar10 == puVar9 + uVar8 * 0x30) break;
        uVar12 = uVar12 - 1;
        piVar3 = (int *)*puVar10;
        do {
          iVar4 = *piVar3;
          bVar2 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar2);
        *piVar3 = iVar4 + 1;
        if (iVar4 < 0) {
LAB_0115d5cc:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x115d5cc);
          (*pcVar1)();
        }
        piVar5 = (int *)puVar10[1];
        do {
          iVar4 = *piVar5;
          bVar2 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar2);
        *piVar5 = iVar4 + 1;
        if (iVar4 < 0) goto LAB_0115d5cc;
        piVar6 = (int *)puVar10[4];
        uVar13 = puVar10[2];
        if (piVar6 != (int *)0x0) {
          do {
            iVar4 = *piVar6;
            bVar2 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar2);
          *piVar6 = iVar4 + 1;
          if (iVar4 < 0) goto LAB_0115d5cc;
        }
        piVar7 = (int *)puVar10[3];
        do {
          iVar4 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar4 + 1;
        if (iVar4 < 0) goto LAB_0115d5cc;
        local_e8 = piVar3;
        piStack_e4 = piVar5;
        uStack_e0 = uVar13;
        local_dc = piVar7;
        local_d8 = piVar6;
        FUN_0115d604(auStack_d0,puVar10 + 6);
        FUN_016dd1aa(local_f4 + iVar11 * 0xc0,&local_e8,0xc0);
        puVar10 = puVar10 + 0x30;
        iVar11 = iVar11 + 1;
      } while (uVar12 != 0);
    }
  }
  *param_1 = local_f8;
  param_1[1] = local_f4;
  param_1[2] = uVar8;
  return;
}

