// FUN_00603b2c @ 00603b2c size=904 calls_out=1 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

int FUN_00603b2c(int *param_1,int param_2,uint param_3)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int local_30;
  int *local_2c;
  undefined1 *local_28;
  
  puVar10 = (undefined4 *)param_1[2];
  bVar9 = *(byte *)(param_1 + 3);
  iVar13 = 0;
  iVar3 = *param_1;
  uVar15 = 0;
  iVar4 = param_1[1];
  uVar14 = 0;
joined_r0x00603bb0:
  do {
    uVar2 = uVar15;
    if (uVar15 <= param_3) {
      uVar6 = param_3 - uVar15;
      iVar11 = param_2 + uVar15;
      uVar2 = param_3;
      if (uVar6 < 8) {
        if (param_3 != uVar15) {
          uVar12 = 0;
          do {
            if (*(char *)(iVar11 + uVar12) == '\n') goto joined_r0x00603c74;
            uVar12 = uVar12 + 1;
          } while (uVar6 != uVar12);
        }
      }
      else {
        uVar8 = (iVar11 + 3U & 0xfffffffc) - iVar11;
        if (uVar8 == 0) {
          uVar8 = 0;
          goto LAB_00603c84;
        }
        uVar12 = 0;
        do {
          if (*(char *)(iVar11 + uVar12) == '\n') goto joined_r0x00603c74;
          uVar12 = uVar12 + 1;
        } while (uVar8 != uVar12);
        for (; uVar8 <= uVar6 - 8; uVar8 = uVar8 + 8) {
LAB_00603c84:
          uVar5 = *(uint *)(iVar11 + uVar8);
          uVar12 = ((uint *)(iVar11 + uVar8))[1] ^ 0xa0a0a0a;
          if (((0x1010100 - (uVar5 ^ 0xa0a0a0a) | uVar5) & 0x80808080 &
              (0x1010100 - uVar12 | uVar12)) != 0x80808080) break;
        }
        if (uVar6 != uVar8) {
          iVar7 = 0;
LAB_00603cfc:
          if (*(char *)(iVar11 + uVar8 + iVar7) != '\n') break;
          uVar12 = iVar7 + uVar8;
joined_r0x00603c74:
          uVar12 = uVar12 + uVar15;
          uVar15 = uVar12 + 1;
          if ((uVar12 < param_3) && (*(char *)(param_2 + uVar12) == '\n')) {
            uVar1 = false;
            uVar2 = uVar15;
            goto joined_r0x00603d4c;
          }
          goto joined_r0x00603bb0;
        }
      }
    }
joined_r0x00603d70:
    uVar1 = true;
    uVar12 = param_3;
    uVar15 = uVar2;
    uVar2 = uVar14;
joined_r0x00603d4c:
    if ((bVar9 & 1) == 0) {
      *(undefined1 *)(param_1 + 3) = 1;
      if (iVar3 == 0) {
        iVar11 = (**(code **)(puVar10[1] + 0xc))
                           (*puVar10,&DAT_00567348,4,*(code **)(puVar10[1] + 0xc),iVar4);
      }
      else {
        local_28 = &LAB_00fac484;
        local_2c = &local_30;
        local_30 = iVar4;
        iVar11 = FUN_00fa948c(*puVar10,puVar10[1],&DAT_0033d858,&local_2c);
      }
      if (iVar11 != 0) {
        return 1;
      }
    }
    else if (iVar13 != 0) {
      iVar11 = (**(code **)(puVar10[1] + 0x10))(*puVar10,10);
      if (iVar11 != 0) {
        return 1;
      }
      if (iVar3 == 0) {
        iVar11 = (**(code **)(puVar10[1] + 0xc))(*puVar10,&DAT_00567348,4);
      }
      else {
        iVar11 = (**(code **)(puVar10[1] + 0xc))(*puVar10,&DAT_0033d863,7);
      }
      if (iVar11 != 0) {
        return 1;
      }
    }
    iVar13 = iVar13 + 1;
    iVar11 = (**(code **)(puVar10[1] + 0xc))(*puVar10,param_2 + uVar14,uVar12 - uVar14);
    bVar9 = 1;
    uVar14 = uVar2;
    if (iVar11 != 0 || (bool)uVar1) {
      return iVar11;
    }
  } while( true );
  iVar7 = iVar7 + 1;
  if ((param_3 - uVar8) - uVar15 == iVar7) goto joined_r0x00603d70;
  goto LAB_00603cfc;
}

