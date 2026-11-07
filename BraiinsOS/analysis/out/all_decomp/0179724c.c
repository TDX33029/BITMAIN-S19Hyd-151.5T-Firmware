// FUN_0179724c @ 0179724c size=1144 calls_out=8 calls_in=2
// strings: 

uint FUN_0179724c(undefined1 *param_1,int param_2,undefined1 *param_3,uint param_4,uint param_5,
                 uint param_6,undefined4 param_7,int param_8,uint param_9,uint *param_10,
                 uint *param_11,uint param_12)

{
  byte *pbVar1;
  bool bVar2;
  uint *puVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  uint *puVar13;
  int iVar14;
  int *piVar15;
  uint *puVar16;
  uint *puVar17;
  uint local_30;
  int local_2c;
  
  puVar3 = param_11;
  puVar17 = param_10;
  local_2c = DAT_018ddaf8;
  uVar10 = -param_8 & 3;
  if ((param_9 < uVar10) || (param_9 - uVar10 < 0x1b04)) {
    uVar10 = 0xffffffbe;
    goto LAB_017972d0;
  }
  if (param_2 == 0 || param_4 == 0) goto LAB_017972cc;
  if (0x20000 < param_4) {
    uVar10 = 0xffffffb8;
    goto LAB_017972d0;
  }
  if (0xc < param_6) {
    uVar10 = 0xffffffd4;
    goto LAB_017972d0;
  }
  if (0xff < param_5) {
    uVar10 = 0xffffffd2;
    goto LAB_017972d0;
  }
  if (param_5 == 0) {
    param_5 = 0xff;
  }
  if (param_6 == 0) {
    param_6 = 0xb;
  }
  uVar6 = (param_12 & 7) >> 2;
  if (param_11 == (uint *)0x0) {
    uVar6 = 0;
  }
  if ((uVar6 != 0) && (*param_11 == 2)) goto LAB_017975b0;
  iVar14 = param_8 + uVar10;
  uVar10 = (param_12 & 0xf) >> 3;
  if (param_4 < 0xa000) {
    uVar10 = 0;
  }
  if (uVar10 == 0) {
LAB_017973a0:
    iVar11 = iVar14 + 0x804;
    uVar10 = FUN_01794f44(iVar14,&param_5,param_3,param_4,iVar11,0x1000);
    if (0xffffff88 < uVar10) goto LAB_017972d0;
    if (param_4 == uVar10) {
      uVar10 = 1;
      *param_1 = *param_3;
      goto LAB_017972d0;
    }
    if (uVar10 <= (param_4 >> 7) + 4) goto LAB_017972cc;
    if (puVar3 != (uint *)0x0) {
      uVar10 = *puVar3;
      if (uVar10 == 1) {
        if (param_5 <= *(byte *)((int)puVar17 + 1)) {
          bVar2 = false;
          piVar15 = (int *)(iVar14 + -4);
          iVar8 = 0;
          puVar13 = puVar17;
          do {
            puVar13 = puVar13 + 1;
            iVar8 = iVar8 + 1;
            piVar15 = piVar15 + 1;
            bVar2 = (bool)(bVar2 | (*piVar15 != 0 && (*puVar13 & 0xff) == 0));
          } while (iVar8 <= (int)param_5);
          uVar10 = uVar6;
          if (!bVar2) goto joined_r0x01797688;
        }
        *puVar3 = 0;
      }
      else if (uVar6 != 0) {
joined_r0x01797688:
        if (uVar10 != 0) goto LAB_017975b0;
      }
    }
    puVar13 = (uint *)(iVar14 + 0x400);
    uVar4 = FUN_01797084(param_6,param_4,param_5,iVar11,0x1300,puVar13,iVar14,param_12);
    uVar6 = param_5;
    uVar10 = FUN_0179635c(puVar13,iVar14,param_5,uVar4,iVar11,0x1300);
    if (0xffffff88 < uVar10) goto LAB_017972d0;
    uVar10 = FUN_01795bc8(param_1,param_2,puVar13,uVar6,uVar10,iVar11,0x2ec);
    if (0xffffff88 < uVar10) goto LAB_017972d0;
    if (puVar3 == (uint *)0x0) {
      if (uVar10 + 0xc < param_4) {
LAB_01797544:
        if (puVar17 != (uint *)0x0) {
          FUN_016dd1aa(puVar17,puVar13,0x404);
        }
        puVar7 = param_1 + uVar10;
        puVar17 = puVar13;
        goto LAB_01797574;
      }
    }
    else {
      if (*puVar3 != 0) {
        if (-1 < (int)param_5) {
          piVar12 = (int *)(iVar14 + -4);
          piVar5 = (int *)(iVar14 + param_5 * 4);
          uVar6 = 0;
          piVar15 = piVar12;
          puVar16 = puVar17;
          do {
            puVar16 = puVar16 + 1;
            piVar15 = piVar15 + 1;
            uVar6 = *piVar15 * (*puVar16 & 0xff) + uVar6;
          } while (piVar5 != piVar15);
          uVar9 = 0;
          do {
            pbVar1 = (byte *)(piVar12 + 0x102);
            piVar12 = piVar12 + 1;
            uVar9 = *piVar12 * (uint)*pbVar1 + uVar9;
          } while (piVar5 != piVar12);
          if ((uVar10 + (uVar9 >> 3) < uVar6 >> 3) && (uVar10 + 0xc < param_4)) goto LAB_01797538;
        }
LAB_017975b0:
        puVar7 = param_1;
LAB_01797574:
        uVar9 = FUN_017959e8(param_1,puVar7,param_1 + param_2,param_3,param_4,param_7,puVar17);
        goto LAB_01797580;
      }
      if (uVar10 + 0xc < param_4) {
LAB_01797538:
        *puVar3 = 0;
        goto LAB_01797544;
      }
    }
LAB_017972cc:
    uVar10 = 0;
  }
  else {
    local_30 = param_5;
    uVar10 = FUN_01794d04(iVar14,&local_30,param_3,0x1000);
    if (0xffffff88 < uVar10) goto LAB_017972d0;
    local_30 = param_5;
    uVar9 = FUN_01794d04(iVar14,&local_30,param_3 + (param_4 - 0x1000),0x1000);
    if (uVar9 < 0xffffff89) {
      if (uVar10 + uVar9 < 0x45) goto LAB_017972cc;
      goto LAB_017973a0;
    }
LAB_01797580:
    uVar10 = uVar9;
  }
LAB_017972d0:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar10;
}

