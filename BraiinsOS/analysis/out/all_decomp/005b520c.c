// FUN_005b520c @ 005b520c size=552 calls_out=3 calls_in=1
// strings: 

void FUN_005b520c(undefined4 *param_1,uint param_2,int *param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  int local_2c;
  
  uVar6 = param_2;
  if ((char)param_3[0xe] == '\x01') {
    if (param_3[3] != 0) {
      uVar4 = FUN_00c4fb58(param_3[4],param_3[5],param_3[6],param_3[7],param_2);
      uVar6 = uVar4 >> 0x19;
      iVar10 = *param_3;
      local_2c = 0;
      while( true ) {
        uVar4 = param_3[1] & uVar4;
        uVar11 = *(uint *)(iVar10 + uVar4);
        uVar5 = uVar11 ^ uVar6 * 0x1010101;
        uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
        while (uVar5 != 0) {
          uVar15 = uVar5 >> 8;
          uVar1 = uVar5 >> 0x10;
          uVar2 = uVar5 >> 0x18;
          uVar3 = uVar5 << 0x18;
          uVar5 = uVar5 - 1 & uVar5;
          uVar15 = uVar4 + ((uint)LZCOUNT(uVar3 | (uVar15 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 |
                                          uVar2) >> 3) & param_3[1];
          if (param_2 == *(uint *)(iVar10 + -8 + uVar15 * -8)) {
            uVar6 = *(uint *)(iVar10 + uVar15 * -8 + -4);
            goto LAB_005b5310;
          }
        }
        if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) break;
        local_2c = local_2c + 4;
        uVar4 = uVar4 + local_2c;
      }
    }
  }
  else {
LAB_005b5310:
    if ((uVar6 < (uint)param_3[0xb]) && (*(int *)(param_3[10] + uVar6 * 0x28) != 2)) {
      piVar7 = (int *)FUN_005bbe4c(param_3,param_2,param_4);
      if (*piVar7 == 1) {
        iVar9 = piVar7[1];
        iVar10 = FUN_005bbe4c(param_3,param_2,param_4);
        uVar12 = *(undefined4 *)(iVar10 + 8);
        uVar14 = *(undefined4 *)(iVar10 + 0xc);
        iVar10 = FUN_005bbe4c(param_3,iVar9,param_4);
        *(undefined4 *)(iVar10 + 8) = uVar12;
        *(undefined4 *)(iVar10 + 0xc) = uVar14;
      }
      iVar10 = FUN_005bbe4c(param_3,param_2,param_4);
      if (*(int *)(iVar10 + 8) == 1) {
        uVar14 = *(undefined4 *)(iVar10 + 0xc);
        puVar8 = (undefined4 *)FUN_005bbe4c(param_3,param_2,param_4);
        uVar13 = *puVar8;
        uVar12 = puVar8[1];
        param_1 = (undefined4 *)FUN_005bbe4c(param_3,uVar14,param_4);
        *param_1 = uVar13;
      }
      else {
        puVar8 = (undefined4 *)FUN_005bbe4c(param_3,param_2,param_4);
        uVar12 = puVar8[1];
        *param_1 = *puVar8;
      }
      param_1[1] = uVar12;
      puVar8 = (undefined4 *)FUN_005bbe4c(param_3,param_2,param_4);
      *puVar8 = 0;
      iVar10 = FUN_005bbe4c(param_3,param_2,param_4);
      *(undefined4 *)(iVar10 + 8) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa464(&DAT_00412e5d,0x26,param_4);
}

