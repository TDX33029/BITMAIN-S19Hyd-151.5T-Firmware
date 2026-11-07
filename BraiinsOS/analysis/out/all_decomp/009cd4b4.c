// FUN_009cd4b4 @ 009cd4b4 size=508 calls_out=4 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x009cd5dc) */

void FUN_009cd4b4(undefined4 *param_1,int param_2,uint *param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined4 *puVar15;
  
  puVar15 = (undefined4 *)(param_2 + 8);
  piVar14 = *(int **)(param_2 + 8);
  DataMemoryBarrier(0xb);
  if ((undefined4 *)piVar14[1] == (undefined4 *)0x0) {
LAB_009cd638:
    puVar13 = puVar15;
    piVar11 = piVar14;
LAB_009cd63c:
    uVar6 = 2;
    if ((undefined1 *)*piVar11 == &DAT_0041319b) {
      *param_1 = 0;
      return;
    }
LAB_009cd680:
    param_1[1] = puVar13;
    param_1[2] = piVar11;
    *param_1 = uVar6;
    return;
  }
  uVar3 = *param_3;
  uVar7 = param_3[1];
  puVar12 = puVar15;
  puVar10 = (undefined4 *)piVar14[1];
LAB_009cd50c:
  do {
    puVar13 = puVar10;
    piVar11 = (int *)*puVar13;
    DataMemoryBarrier(0xb);
    puVar10 = (undefined4 *)piVar11[1];
    if (((uint)puVar10 & 1) == 0) {
      uVar4 = *(uint *)*piVar11;
      uVar8 = ((uint *)*piVar11)[1];
      cVar2 = (uVar3 >= uVar4 && uVar3 != uVar4) - (uVar3 < uVar4);
      if (uVar3 == uVar4) {
        cVar2 = (uVar7 >= uVar8 && uVar7 != uVar8) - (uVar7 < uVar8);
      }
      if (cVar2 != '\x01') {
        if (cVar2 != '\0') {
          param_1[1] = puVar12;
          param_1[2] = piVar14;
          *param_1 = 2;
          return;
        }
        uVar6 = 1;
        goto LAB_009cd680;
      }
      puVar12 = puVar13;
      piVar14 = piVar11;
      if (puVar10 == (undefined4 *)0x0) goto LAB_009cd63c;
      goto LAB_009cd50c;
    }
    iVar9 = *piVar14;
    piVar5 = (int *)thunk_FUN_016d4a50(8);
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,8);
    }
    *piVar5 = iVar9;
    piVar5[1] = (uint)puVar10 & 0xfffffffe;
    if ((int *)*puVar12 == piVar14) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar12);
        if (bVar1) {
          *puVar12 = piVar5;
          FUN_009cd7cc(param_4,1,piVar14);
          FUN_009cd7cc(param_4,2,puVar13);
          FUN_009cd7cc(param_4,1,piVar11);
          puVar13 = puVar12;
          piVar14 = piVar5;
          piVar11 = piVar5;
          puVar10 = (undefined4 *)piVar5[1];
          if ((undefined4 *)piVar5[1] != (undefined4 *)0x0) goto LAB_009cd50c;
          goto LAB_009cd63c;
        }
      } while ((int *)*puVar12 == piVar14);
    }
    ClearExclusiveLocal();
    thunk_FUN_016d3fb4();
    piVar14 = (int *)*puVar15;
    DataMemoryBarrier(0xb);
    puVar12 = puVar15;
    puVar10 = (undefined4 *)piVar14[1];
    if ((undefined4 *)piVar14[1] == (undefined4 *)0x0) goto LAB_009cd638;
  } while( true );
}

