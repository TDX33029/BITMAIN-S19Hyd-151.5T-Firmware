// FUN_006bb984 @ 006bb984 size=852 calls_out=6 calls_in=2
// strings: Hash table capacity overflow

uint FUN_006bb984(int *param_1,uint param_2,undefined4 param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint local_68;
  undefined4 local_5c;
  undefined4 *local_58;
  int *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint *local_48;
  uint uStack_44;
  int local_40;
  int local_3c;
  uint *local_38;
  uint local_34;
  int local_30;
  undefined4 local_2c;
  
  local_68 = param_1[3];
  local_58 = &local_5c;
  uVar3 = local_68 + param_2;
  local_5c = param_3;
  if (CARRY4(local_68,param_2)) {
LAB_006bbcc0:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1724);
  }
  uVar6 = param_1[1];
  if (7 < uVar6) {
    uVar6 = (uVar6 + 1 & 0xfffffff8) - (uVar6 + 1 >> 3);
  }
  if (uVar6 >> 1 < uVar3) {
    if (uVar3 < uVar6 + 1) {
      uVar3 = uVar6 + 1;
    }
    if (uVar3 < 0xf) {
      iVar11 = (uVar3 & 8) + 8;
      if (uVar3 < 4) {
        iVar11 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_006bbcc0;
      iVar11 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      iVar11 = (0xffffffffU >> LZCOUNT((iVar11 + (uVar3 * 8 - iVar11 >> 1) >> 2) - 1)) + 1;
    }
    FUN_01412c2c(&local_38,0x18,4,iVar11);
    uVar3 = local_34;
    puVar9 = local_38;
    if (local_38 == (uint *)0x0) {
      return local_34;
    }
    FUN_01bed93e(local_38,0xff,local_34 + 5);
    local_3c = local_2c;
    local_48 = puVar9;
    uStack_44 = uVar3;
    local_40 = local_30;
    local_50 = 0x18;
    iVar11 = 0;
    local_4c = 4;
    local_54 = param_1 + 4;
    if (local_68 != 0) {
      puVar13 = (uint *)*param_1;
      iVar11 = 0;
      uVar6 = ~*puVar13 & 0x80808080;
      do {
        if (uVar6 == 0) {
          do {
            puVar13 = puVar13 + 1;
            iVar11 = iVar11 + 4;
          } while ((*puVar13 & 0x80808080) == 0x80808080);
          uVar6 = *puVar13 & 0x80808080 ^ 0x80808080;
        }
        iVar12 = 0;
        uVar7 = iVar11 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                        (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3);
        iVar4 = *param_1 + uVar7 * -0x18;
        local_34 = *(uint *)(iVar4 + -0xc);
        local_38 = *(uint **)(iVar4 + -0x10);
        uVar5 = 0x84222325;
        do {
          pbVar1 = (byte *)((int)&local_38 + iVar12);
          iVar12 = iVar12 + 1;
          uVar5 = (uVar5 ^ *pbVar1) * 0x1b3;
        } while (iVar12 != 8);
        uVar10 = uVar3 & uVar5;
        uVar8 = *(uint *)((int)puVar9 + uVar10) & 0x80808080;
        if (uVar8 == 0) {
          iVar4 = 4;
          do {
            uVar10 = uVar10 + iVar4;
            iVar4 = iVar4 + 4;
            uVar10 = uVar10 & uVar3;
            uVar8 = *(uint *)((int)puVar9 + uVar10) & 0x80808080;
          } while (uVar8 == 0);
        }
        uVar8 = uVar10 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                        (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) & uVar3;
        if (-1 < *(char *)((int)puVar9 + uVar8)) {
          uVar8 = *puVar9 & 0x80808080;
          uVar8 = (uint)LZCOUNT((*puVar9 & 0x80) << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3;
        }
        bVar2 = (byte)(uVar5 >> 0x19);
        *(byte *)((int)puVar9 + uVar8) = bVar2;
        uVar6 = uVar6 - 1 & uVar6;
        *(byte *)((int)puVar9 + (uVar8 - 4 & uVar3) + 4) = bVar2;
        local_68 = local_68 - 1;
        FUN_01bed4e2(puVar9 + ~uVar8 * 6,*param_1 + ~uVar7 * 0x18,0x18);
      } while (local_68 != 0);
      iVar11 = param_1[3];
    }
    local_3c = iVar11;
    local_40 = local_30 - iVar11;
    iVar11 = 0;
    do {
      puVar9 = (uint *)param_1[iVar11];
      param_1[iVar11] = (int)(&local_48)[iVar11];
      iVar4 = iVar11 + 1;
      (&local_48)[iVar11] = puVar9;
      iVar11 = iVar4;
    } while (iVar4 != 4);
    FUN_016660b8(&local_54);
  }
  else {
    FUN_006b4ae4(param_1,&local_58,FUN_006bbcf0,0x18,&LAB_006bbce8);
  }
  return 0x80000001;
}

