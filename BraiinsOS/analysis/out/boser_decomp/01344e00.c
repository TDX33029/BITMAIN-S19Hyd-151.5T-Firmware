// FUN_01344e00 @ 01344e00 size=848 calls_out=9 calls_in=1
// strings: 

uint FUN_01344e00(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined8 uVar17;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  uVar13 = *(uint *)(param_1 + 0x20);
  uVar16 = 0;
  uVar11 = *(uint *)(param_1 + 0x24);
  iVar15 = 0;
  piVar2 = (int *)(param_1 + 0x1c);
  uVar12 = uVar11;
  if (uVar11 < uVar13) {
    iVar7 = 0;
    cVar1 = *(char *)(param_1 + 0x28);
    iVar3 = *piVar2;
    do {
      uVar14 = (uint)*(byte *)(iVar3 + uVar12);
      if (uVar14 == 0x25) {
        if (uVar13 - (uVar12 + 1) < 2) {
          return uVar12;
        }
        pbVar6 = (byte *)(iVar3 + uVar12 + 1);
        if (((&DAT_00451b67)[pbVar6[1]] & (&DAT_00451b67)[*pbVar6]) == 0) {
          return uVar12;
        }
        uVar12 = uVar12 + 3;
      }
      else if (cVar1 == '\0') {
        uVar17 = FUN_013453b4(iVar3,uVar13,uVar12);
        iVar4 = (int)uVar17;
        iVar5 = FUN_0134399c(&DAT_00451a64,iVar4);
        if (iVar5 == 0) break;
        iVar5 = iVar7 + 1;
        if (iVar4 == 0x3a) {
          uVar16 = uVar12;
        }
        uVar12 = (int)((ulonglong)uVar17 >> 0x20) + uVar12;
        if (iVar4 == 0x3a) {
          iVar7 = iVar5;
          iVar15 = iVar5;
        }
      }
      else {
        if ((&DAT_00451961)[uVar14] == '\0') break;
        if (uVar14 == 0x3a) {
          iVar15 = iVar7 + 1;
          iVar7 = iVar7 + 1;
          uVar16 = uVar12;
        }
        uVar12 = uVar12 + 1;
      }
    } while (uVar12 < uVar13);
  }
  *(uint *)(param_1 + 0x24) = uVar12;
  if ((uVar12 < uVar13) && (*(char *)(*piVar2 + uVar12) == '@')) {
    uVar11 = uVar12 + 1;
    *(uint *)(param_1 + 0x24) = uVar11;
    FUN_013454b0(&local_30,piVar2);
    if ((local_2c & 0xff) != 3) {
      return local_30;
    }
    bVar9 = (byte)local_30;
    if ((byte)local_30 == 4) {
      puVar10 = &UNK_0045175b;
      if (*(char *)(param_1 + 0x28) == '\0') {
        puVar10 = &DAT_0045185e;
      }
      uVar12 = FUN_013449ac(piVar2);
      FUN_01344ce0(&local_30,piVar2,puVar10);
      if ((local_2c & 0xff) != 3) {
        return local_30;
      }
      bVar9 = (byte)local_30 & 1;
      if ((local_30 & 1) != 0) {
        bVar9 = 3;
      }
      if ((uVar12 & 1) == 0) {
        bVar9 = 3;
      }
    }
    uVar12 = *(uint *)(param_1 + 0x24);
  }
  else {
    if (uVar12 != uVar11) {
      if (iVar15 != 0) {
        if (iVar15 != 1) {
          return uVar16;
        }
        uVar14 = uVar16;
        while (uVar8 = uVar14 + 1, uVar8 < uVar12) {
          if (uVar13 <= uVar8) {
            uVar12 = uVar16 + 1;
            if (uVar16 + 1 < uVar13) {
              uVar12 = uVar13;
            }
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar12,uVar13,&DAT_01ce6afc);
          }
          pbVar6 = (byte *)(*piVar2 + 1 + uVar14);
          uVar14 = uVar8;
          if (9 < *pbVar6 - 0x30) {
            return uVar8;
          }
        }
        uVar12 = uVar16;
      }
      if ((uVar12 < uVar11) || (uVar13 < uVar12)) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar11,uVar12,uVar13,&DAT_01ce6aec);
      }
      bVar9 = 0;
      local_2c = uVar12 - uVar11;
      local_28 = 0;
      local_30 = *piVar2 + uVar11;
      uVar16 = FUN_013449ac(&local_30);
      if (local_28 < local_2c) {
        bVar9 = 3;
      }
      if ((uVar16 & 1) == 0) {
        bVar9 = 3;
      }
      goto LAB_013450fc;
    }
    FUN_013454b0(&local_30,piVar2);
    if ((local_2c & 0xff) != 3) {
      return local_30;
    }
    uVar12 = *(uint *)(param_1 + 0x24);
    bVar9 = (byte)local_30;
    if ((byte)local_30 == 4) {
      bVar9 = 3;
      uVar11 = uVar12;
      goto LAB_013450fc;
    }
  }
  FUN_01345634(piVar2);
LAB_013450fc:
  *(uint *)(param_1 + 0x10) = uVar11;
  *(byte *)(param_1 + 0x18) = bVar9;
  *(uint *)(param_1 + 0x14) = uVar12;
  uVar12 = FUN_01345170(param_1,1);
  return uVar12;
}

