// FUN_013e7b54 @ 013e7b54 size=888 calls_out=6 calls_in=1
// strings: 

undefined4 FUN_013e7b54(uint *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  int *local_28;
  
  if (param_1[2] == 0) {
    if (*param_1 == 0) {
      FUN_014016f4(param_1);
    }
    puVar4 = (undefined4 *)param_1[1];
    uVar11 = param_1[5];
    uVar10 = param_1[3];
    param_1[2] = 1;
    *puVar4 = 0;
    puVar4[1] = 4;
    puVar4[2] = 0;
    if (uVar11 == uVar10) {
      FUN_014014b4(param_1 + 3);
    }
    uVar10 = uVar11 + 1;
    param_1[5] = uVar10;
    *(undefined4 *)(param_1[4] + uVar11 * 4) = 0;
  }
  else {
    uVar10 = param_1[5];
  }
  if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(0,0,&DAT_01895000);
  }
  local_28 = (int *)param_1[4];
  if (*local_28 != 0) {
    return 1;
  }
  if (param_3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    uVar6 = param_1[2];
    pbVar13 = param_2;
    do {
      if (uVar6 <= uVar11) goto LAB_013e7e7c;
      uVar3 = param_1[1];
      pbVar14 = pbVar13 + 1;
      bVar1 = *pbVar13;
      iVar5 = uVar3 + uVar11 * 0xc;
      uVar7 = *(uint *)(iVar5 + 8);
      if (uVar7 == 0) {
        uVar7 = *param_1;
        uVar8 = 0;
joined_r0x013e7ce0:
        if (uVar6 == uVar7) {
          FUN_014016f4(param_1);
          uVar3 = param_1[1];
          uVar10 = param_1[5];
        }
        uVar7 = uVar6 + 1;
        uVar9 = param_1[3];
        param_1[2] = uVar7;
        puVar4 = (undefined4 *)(uVar3 + uVar6 * 0xc);
        *puVar4 = 0;
        puVar4[1] = 4;
        puVar4[2] = 0;
        if (uVar10 == uVar9) {
          FUN_014014b4(param_1 + 3);
          uVar7 = param_1[2];
        }
        local_28 = (int *)param_1[4];
        local_28[uVar10] = 0;
        uVar10 = uVar10 + 1;
        param_1[5] = uVar10;
        if (uVar7 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar11,uVar7,&DAT_01895030);
        }
        puVar12 = (uint *)(param_1[1] + uVar11 * 0xc);
        uVar11 = puVar12[2];
        if (uVar11 < uVar8) {
          FUN_006028a4(uVar8,uVar11,&DAT_01895040);
LAB_013e7e7c:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar11,uVar6,&DAT_01895010);
        }
        if (uVar11 == *puVar12) {
          FUN_01401514(puVar12);
          pbVar13 = (byte *)(puVar12[1] + uVar8 * 8);
        }
        else {
          pbVar13 = (byte *)(puVar12[1] + uVar8 * 8);
        }
        if (uVar8 < uVar11) {
          FUN_016dd52c(pbVar13 + 8,pbVar13,(uVar11 - uVar8) * 8);
        }
        *(uint *)(pbVar13 + 4) = uVar6;
        *pbVar13 = bVar1;
        puVar12[2] = uVar11 + 1;
        uVar11 = uVar6;
      }
      else {
        iVar5 = *(int *)(iVar5 + 4);
        uVar8 = 0;
        if (uVar7 != 1) {
          uVar8 = 0;
          do {
            uVar9 = uVar8 + (uVar7 >> 1);
            uVar7 = uVar7 - (uVar7 >> 1);
            if (bVar1 < *(byte *)(iVar5 + uVar9 * 8)) {
              uVar9 = uVar8;
            }
            uVar8 = uVar9;
          } while (1 < uVar7);
        }
        bVar2 = *(byte *)(iVar5 + uVar8 * 8);
        if (bVar2 != bVar1) {
          if (bVar2 < bVar1) {
            uVar8 = uVar8 + 1;
          }
          uVar7 = *param_1;
          goto joined_r0x013e7ce0;
        }
        uVar11 = *(uint *)(iVar5 + uVar8 * 8 + 4);
        if (uVar10 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar11,uVar10,&DAT_01895020);
        }
        uVar7 = uVar6;
        if (local_28[uVar11] != 0) {
          return 1;
        }
      }
      uVar6 = uVar7;
      pbVar13 = pbVar14;
    } while (pbVar14 != param_2 + param_3);
  }
  uVar6 = param_1[6];
  param_1[6] = uVar6 + 1;
  if (uVar10 <= uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar11,uVar10,&DAT_01895050);
  }
  local_28[uVar11] = uVar6;
  return 0;
}

