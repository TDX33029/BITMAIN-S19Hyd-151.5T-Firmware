// FUN_00d3fca8 @ 00d3fca8 size=776 calls_out=10 calls_in=2
// strings: 

undefined4 FUN_00d3fca8(byte *param_1,undefined4 *param_2)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int *piVar5;
  int *extraout_r2;
  uint uVar6;
  int *piVar7;
  int iVar8;
  byte bVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined8 uVar12;
  
  uVar12 = thunk_FUN_016de0ee(param_1,0x40);
  iVar8 = (int)uVar12 + (int)((ulonglong)uVar12 >> 0x20);
  if (*(char *)(iVar8 + 0x38) != '\x01') {
    if (*(char *)(iVar8 + 0x38) == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_015f853c(&DAT_018ae900);
    }
    FUN_015e8e6c(iVar8,FUN_00bacf28);
    *(undefined1 *)(iVar8 + 0x38) = 1;
  }
  cVar2 = *(char *)(iVar8 + 0x30);
  bVar11 = cVar2 == '\x01';
  if (bVar11) {
    cVar2 = *(char *)(iVar8 + 0x31);
  }
  if (bVar11 && cVar2 == '\0') {
    FUN_016455a4(*(undefined4 *)*extraout_r2,((undefined4 *)*extraout_r2)[1]);
  }
  else {
    if ((*(uint *)(iVar8 + 0x24) & 1) == 0) {
      uVar12 = FUN_0164e918();
      if ((uint)uVar12 < 2) {
        uVar12 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),1);
      }
    }
    else {
      uVar12 = CONCAT44(*(undefined4 *)(iVar8 + 0x28),*(undefined4 *)(iVar8 + 0x2c));
    }
    uVar4 = (uint)((ulonglong)uVar12 >> 0x20);
    uVar6 = (uint)uVar12;
    uVar4 = uVar4 ^ uVar4 << 0x11;
    *(uint *)(iVar8 + 0x28) = uVar6;
    *(undefined4 *)(iVar8 + 0x24) = 1;
    puVar10 = param_2 + 2;
    uVar4 = uVar6 >> 0x10 ^ uVar4 >> 7 ^ uVar6 ^ uVar4;
    *(uint *)(iVar8 + 0x2c) = uVar4;
    bVar3 = *param_1;
    if ((int)(uVar4 + uVar6) < 0) {
      bVar9 = bVar3 & 2;
      if ((bVar3 & 2) == 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_2 + 4)) {
        case 0:
          piVar5 = *(int **)param_2[1];
          do {
            iVar8 = *piVar5;
            bVar11 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar11);
          *piVar5 = iVar8 + 1;
          if (iVar8 < 0) goto LAB_00d3ffcc;
          piVar7 = piVar5 + 0xd;
          DataMemoryBarrier(0xb);
          do {
            iVar8 = *piVar7;
            bVar11 = (bool)hasExclusiveAccess(piVar7);
          } while (!bVar11);
          *piVar7 = iVar8 + 1;
          DataMemoryBarrier(0xb);
          param_2[2] = piVar5;
          param_2[3] = iVar8;
          break;
        case 1:
          goto switchD_00d3fdac_caseD_1;
        case 2:
          goto switchD_00d3fdac_caseD_2;
        }
        iVar8 = FUN_016af5f0(puVar10,extraout_r2);
        if (iVar8 == 0) goto LAB_00d3ff10;
        *(undefined1 *)(param_2 + 4) = 3;
        bVar3 = *param_1;
      }
      if ((bVar3 & 1) == 0) {
        iVar8 = FUN_016af5f0(*param_2,extraout_r2);
        if (iVar8 == 0) {
LAB_00d3ff70:
          *param_1 = *param_1 | 1;
          return 2;
        }
      }
      else if (bVar9 == 2) {
        return 4;
      }
    }
    else {
      bVar9 = bVar3 & 1;
      if ((bVar3 & 1) == 0) {
        iVar8 = FUN_016af5f0(*param_2,extraout_r2);
        if (iVar8 == 0) goto LAB_00d3ff70;
        bVar3 = *param_1;
      }
      if ((bVar3 & 2) == 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_2 + 4)) {
        case 0:
          piVar5 = *(int **)param_2[1];
          do {
            iVar8 = *piVar5;
            bVar11 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar11);
          *piVar5 = iVar8 + 1;
          if (iVar8 < 0) {
LAB_00d3ffcc:
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xfdee,0xd3ffcc);
            (*pcVar1)();
          }
          piVar7 = piVar5 + 0xd;
          DataMemoryBarrier(0xb);
          do {
            iVar8 = *piVar7;
            bVar11 = (bool)hasExclusiveAccess(piVar7);
          } while (!bVar11);
          *piVar7 = iVar8 + 1;
          DataMemoryBarrier(0xb);
          param_2[2] = piVar5;
          param_2[3] = iVar8;
        case 3:
          iVar8 = FUN_016af5f0(puVar10,extraout_r2);
          if (iVar8 != 0) {
            *(undefined1 *)(param_2 + 4) = 3;
            return 5;
          }
          break;
        case 1:
switchD_00d3fdac_caseD_1:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_0187715c);
        case 2:
switchD_00d3fdac_caseD_2:
                    /* WARNING: Subroutine does not return */
          FUN_00fb7cc0(&DAT_0187715c);
        }
LAB_00d3ff10:
        FUN_016af0b0(puVar10);
        piVar5 = (int *)*puVar10;
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar5;
          bVar11 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar11);
        *piVar5 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f4138(*puVar10);
        }
        *(undefined1 *)(param_2 + 4) = 1;
        *param_1 = *param_1 | 2;
        return 1;
      }
      if (bVar9 == 1) {
        return 4;
      }
    }
  }
  return 5;
}

