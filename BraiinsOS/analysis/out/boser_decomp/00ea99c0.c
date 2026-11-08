// FUN_00ea99c0 @ 00ea99c0 size=1280 calls_out=8 calls_in=3
// strings: SSE field value cannot contain newlines or carriage returns | Called `EventBuilder::data` multiple times

void FUN_00ea99c0(int *param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  bool bVar16;
  uint local_2c;
  uint local_28;
  
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Called `EventBuilder::data` multiple times",0x55,&DAT_01c1809c);
  }
  puVar14 = (uint *)param_3[1];
  uVar10 = param_3[2];
  puVar15 = puVar14;
LAB_00ea9a00:
  if (puVar15 == (uint *)0x0) {
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 1;
    iVar5 = param_2[1];
    iVar8 = param_2[2];
    iVar9 = param_2[3];
    iVar12 = param_2[4];
    *param_1 = *param_2;
    param_1[1] = iVar5;
    param_1[2] = iVar8;
    param_1[3] = iVar9;
    param_1[4] = iVar12;
    FUN_019bb7e0(*param_3,puVar14);
    return;
  }
  uVar3 = uVar10;
  if (uVar10 != 0) {
    puVar11 = puVar15;
    if (uVar10 < 4) {
      uVar2 = 0;
      do {
        if (*(char *)((int)puVar15 + uVar2) == '\n') goto LAB_00ea9ae0;
        uVar2 = uVar2 + 1;
      } while (uVar10 != uVar2);
LAB_00ea9ad8:
      puVar13 = (uint *)0x0;
      goto LAB_00ea9b08;
    }
    if ((~(0x1010100 - (*puVar15 ^ 0xa0a0a0a) | *puVar15) & 0x80808080) != 0) {
      uVar2 = 0;
      do {
        if (*(char *)((int)puVar15 + uVar2) == '\n') goto LAB_00ea9ae0;
        uVar2 = uVar2 + 1;
      } while (uVar10 != uVar2);
      goto LAB_00ea9ad8;
    }
    puVar4 = (uint *)((int)puVar15 + uVar10);
    uVar2 = 4 - ((uint)puVar15 & 3);
    if (8 < uVar10) {
      for (puVar6 = (uint *)((int)puVar15 + uVar2); puVar6 <= puVar4 + -2; puVar6 = puVar6 + 2) {
        uVar2 = ~(0x1010100 - (*puVar6 ^ 0xa0a0a0a) | *puVar6);
        bVar16 = (uVar2 & 0x80808080) != 0;
        if (!bVar16) {
          uVar2 = ~(0x1010100 - (puVar6[1] ^ 0xa0a0a0a) | puVar6[1]);
        }
        if (bVar16 || (uVar2 & 0x80808080) != 0) break;
      }
      puVar13 = (uint *)0x0;
      if (puVar6 < puVar4) {
        do {
          if ((char)*puVar6 == '\n') goto LAB_00ea9ae4;
          puVar6 = (uint *)((int)puVar6 + 1);
        } while (puVar6 != puVar4);
        goto LAB_00ea9ad8;
      }
      goto LAB_00ea9b08;
    }
    if (uVar2 < uVar10) {
      uVar2 = (uint)puVar15 & 3 | 0xfffffffc;
      do {
        if (*(char *)((int)puVar15 - uVar2) == '\n') {
          puVar6 = (uint *)((int)puVar15 - uVar2);
          goto LAB_00ea9ae4;
        }
        uVar2 = uVar2 - 1;
      } while (uVar10 + uVar2 != 0);
      goto LAB_00ea9ad8;
    }
    puVar13 = (uint *)0x0;
    goto LAB_00ea9b44;
  }
  puVar13 = (uint *)0x0;
  uVar2 = uVar10;
  goto LAB_00ea9cc0;
LAB_00ea9ae0:
  puVar6 = (uint *)((int)puVar15 + uVar2);
LAB_00ea9ae4:
  uVar3 = (int)puVar6 - (int)puVar15;
  if (uVar10 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_0053349c,0x13,&DAT_01c06cc4);
  }
  iVar5 = uVar10 - uVar3;
  if (uVar10 == uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(1,iVar5,iVar5,&DAT_01c06cd4);
  }
  puVar13 = (uint *)((int)puVar15 + uVar3 + 1);
  uVar10 = uVar3;
  uVar3 = iVar5 - 1;
LAB_00ea9b08:
  uVar2 = uVar10;
  if (uVar10 != 0) {
    if (uVar10 < 4) {
      do {
        if ((char)*puVar11 == '\n' || (char)*puVar11 == '\r') goto LAB_00ea9df0;
        puVar11 = (uint *)((int)puVar11 + 1);
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    else {
      puVar4 = (uint *)((int)puVar15 + uVar10);
LAB_00ea9b44:
      uVar7 = *puVar15;
      uVar2 = uVar10;
      if (((~(0x1010100 - (uVar7 ^ 0xd0d0d0d) | uVar7) & 0x80808080) == 0) &&
         ((~(0x1010100 - (uVar7 ^ 0xa0a0a0a) | uVar7) & 0x80808080) == 0)) {
        puVar11 = (uint *)((uint)puVar15 & 0xfffffffc);
        do {
          puVar11 = puVar11 + 1;
          if (puVar4 + -1 < puVar11) break;
          uVar10 = *puVar11;
          bVar16 = (~(0x1010100 - (uVar10 ^ 0xd0d0d0d) | uVar10) & 0x80808080) == 0;
          if (bVar16) {
            uVar10 = ~(0x1010100 - (uVar10 ^ 0xa0a0a0a) | uVar10);
          }
        } while (bVar16 && (uVar10 & 0x80808080) == 0);
        if (puVar11 < puVar4) {
          do {
            if ((char)*puVar11 == '\n' || (char)*puVar11 == '\r') goto LAB_00ea9df0;
            puVar11 = (uint *)((int)puVar11 + 1);
          } while (puVar11 != puVar4);
        }
      }
      else {
        do {
          if ((char)*puVar11 == '\n' || (char)*puVar11 == '\r') {
LAB_00ea9df0:
            local_28 = (int)puVar11 - (int)puVar15;
            local_2c = 1;
            FUN_01307a30(&local_2c,"","SSE field value cannot contain newlines or carriage returns",
                         &DAT_01c180ac);
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xfdee,0xea9ec8);
            (*pcVar1)();
          }
          puVar11 = (uint *)((int)puVar11 + 1);
        } while (puVar11 != puVar4);
      }
    }
  }
LAB_00ea9cc0:
  uVar10 = uVar3;
  iVar5 = param_2[1];
  if ((uint)(param_2[2] - iVar5) < 4) {
    FUN_01283c9c(param_2,4);
    iVar5 = param_2[1];
    local_28 = param_2[2] - iVar5;
    *(undefined4 *)(*param_2 + iVar5) = 0x61746164;
    if (local_28 < 4) {
      local_2c = 4;
      goto LAB_00ea9e68;
    }
  }
  else {
    *(undefined4 *)(*param_2 + iVar5) = 0x61746164;
  }
  param_2[1] = iVar5 + 4;
  local_2c._0_1_ = 0x3a;
  FUN_01284394(param_2,&local_2c,1);
  local_2c = CONCAT31(local_2c._1_3_,0x20);
  FUN_01284394(param_2,&local_2c,1);
  iVar5 = param_2[1];
  local_28 = param_2[2] - iVar5;
  if (local_28 < uVar2) {
    FUN_01283c9c(param_2,uVar2);
    iVar5 = param_2[1];
    local_28 = param_2[2] - iVar5;
  }
  FUN_01bed4e2(*param_2 + iVar5,puVar15,uVar2);
  if (uVar2 <= local_28) {
    param_2[1] = iVar5 + uVar2;
    local_2c = CONCAT31(local_2c._1_3_,10);
    FUN_01284394(param_2,&local_2c,1);
    puVar15 = puVar13;
    goto LAB_00ea9a00;
  }
  local_2c = uVar2;
LAB_00ea9e68:
                    /* WARNING: Subroutine does not return */
  FUN_01284540(&local_2c);
}

