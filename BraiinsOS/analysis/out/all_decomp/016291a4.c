// FUN_016291a4 @ 016291a4 size=1152 calls_out=2 calls_in=1
// strings: 

void FUN_016291a4(undefined4 *param_1,uint param_2,int *param_3,undefined4 param_4)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int local_34;
  
  uVar1 = param_2;
  if ((char)param_3[0xe] == '\x01') {
    if (param_3[3] != 0) {
      uVar4 = param_3[4] ^ 0x70736575;
      uVar8 = param_3[7] ^ 0x646f7261;
      uVar1 = param_3[6] ^ 0x6e646f6d;
      uVar19 = uVar1 + uVar4;
      uVar18 = uVar8 + (param_3[5] ^ 0x736f6d65U) + (uint)CARRY4(uVar1,uVar4);
      uVar5 = (uVar1 << 0xd | uVar8 >> 0x13) ^ uVar19;
      uVar1 = (uVar8 << 0xd | uVar1 >> 0x13) ^ uVar18;
      uVar4 = param_3[6] ^ param_2 ^ 0x79746573;
      uVar6 = param_3[7] ^ 0x70656462;
      uVar8 = param_3[4] ^ 0x6e657261;
      uVar9 = uVar4 + uVar8;
      uVar12 = uVar6 + (param_3[5] ^ 0x6c796765U) + (uint)CARRY4(uVar4,uVar8);
      uVar8 = (uVar4 << 0x10 | uVar6 >> 0x10) ^ uVar9;
      uVar21 = uVar12 + uVar1 + (uint)CARRY4(uVar9,uVar5);
      uVar12 = (uVar6 << 0x10 | uVar4 >> 0x10) ^ uVar12;
      uVar6 = uVar12 + uVar19 + (uint)CARRY4(uVar8,uVar18);
      uVar19 = uVar9 + uVar5 ^ (uVar5 << 0x11 | uVar1 >> 0xf);
      uVar4 = uVar8 + uVar18 ^ param_2;
      uVar11 = uVar21 ^ (uVar1 << 0x11 | uVar5 >> 0xf);
      uVar20 = uVar4 + uVar19;
      uVar15 = (uVar6 ^ 0x4000000) + uVar11 + (uint)CARRY4(uVar4,uVar19);
      uVar1 = uVar15 ^ (uVar11 << 0xd | uVar19 >> 0x13);
      uVar18 = (uVar8 << 0x15 | uVar12 >> 0xb) ^ uVar8 + uVar18;
      uVar21 = uVar21 ^ 0xff;
      uVar6 = (uVar12 << 0x15 | uVar8 >> 0xb) ^ uVar6;
      uVar13 = uVar18 + uVar21;
      uVar12 = uVar20 ^ (uVar19 << 0xd | uVar11 >> 0x13);
      uVar4 = uVar6 + uVar9 + uVar5 + (uint)CARRY4(uVar18,uVar21);
      uVar19 = uVar1 + uVar4 + (uint)CARRY4(uVar12,uVar13);
      uVar21 = uVar19 ^ (uVar1 << 0x11 | uVar12 >> 0xf);
      uVar9 = uVar12 + uVar13 ^ (uVar12 << 0x11 | uVar1 >> 0xf);
      uVar4 = (uVar6 << 0x10 | uVar18 >> 0x10) ^ uVar4;
      uVar8 = (uVar18 << 0x10 | uVar6 >> 0x10) ^ uVar13;
      uVar6 = uVar8 + uVar15;
      uVar5 = uVar4 + uVar20 + (uint)CARRY4(uVar8,uVar15);
      uVar11 = uVar21 + uVar5 + (uint)CARRY4(uVar9,uVar6);
      uVar1 = (uVar21 << 0xd | uVar9 >> 0x13) ^ uVar11;
      uVar18 = (uVar9 << 0xd | uVar21 >> 0x13) ^ uVar9 + uVar6;
      uVar5 = (uVar4 << 0x15 | uVar8 >> 0xb) ^ uVar5;
      uVar4 = (uVar8 << 0x15 | uVar4 >> 0xb) ^ uVar6;
      uVar21 = uVar4 + uVar19;
      uVar8 = uVar5 + uVar12 + uVar13 + (uint)CARRY4(uVar4,uVar19);
      uVar19 = (uVar5 << 0x10 | uVar4 >> 0x10) ^ uVar8;
      uVar4 = (uVar4 << 0x10 | uVar5 >> 0x10) ^ uVar21;
      uVar13 = uVar1 + uVar8 + (uint)CARRY4(uVar18,uVar21);
      uVar5 = uVar4 + uVar11;
      uVar6 = uVar19 + uVar9 + uVar6 + (uint)CARRY4(uVar4,uVar11);
      uVar8 = (uVar4 << 0x15 | uVar19 >> 0xb) ^ uVar5;
      uVar12 = (uVar1 << 0x11 | uVar18 >> 0xf) ^ uVar13;
      uVar9 = uVar8 + uVar13;
      uVar19 = (uVar19 << 0x15 | uVar4 >> 0xb) ^ uVar6;
      uVar1 = (uVar18 << 0x11 | uVar1 >> 0xf) ^ uVar18 + uVar21;
      uVar21 = uVar19 + uVar18 + uVar21 + (uint)CARRY4(uVar8,uVar13);
      uVar4 = (uVar12 << 0xd | uVar1 >> 0x13) ^ uVar12 + uVar6 + (uint)CARRY4(uVar1,uVar5);
      uVar1 = (uVar1 << 0xd | uVar12 >> 0x13) ^ uVar1 + uVar5;
      iVar17 = *param_3;
      uVar4 = ((uVar9 ^ uVar19 >> 0x10) << 0x15 | ((uVar19 << 0x10 | uVar8 >> 0x10) ^ uVar21) >> 0xb
              ) ^ (uVar1 << 0x11 | uVar4 >> 0xf) ^ uVar4 + uVar21 + (uint)CARRY4(uVar1,uVar9) ^
              uVar1 + uVar9;
      uVar1 = uVar4 >> 0x19;
      local_34 = 0;
      while( true ) {
        uVar4 = param_3[1] & uVar4;
        uVar21 = *(uint *)(iVar17 + uVar4);
        uVar8 = uVar21 ^ uVar1 * 0x1010101;
        uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
        while (uVar8 != 0) {
          uVar5 = uVar8 >> 8;
          uVar6 = uVar8 >> 0x10;
          uVar12 = uVar8 >> 0x18;
          uVar18 = uVar8 << 0x18;
          uVar8 = uVar8 - 1 & uVar8;
          uVar5 = uVar4 + ((uint)LZCOUNT(uVar18 | (uVar5 & 0xff) << 0x10 | (uVar6 & 0xff) << 8 |
                                         uVar12) >> 3) & param_3[1];
          if (param_2 == *(uint *)(iVar17 + -8 + uVar5 * -8)) {
            uVar1 = *(uint *)(iVar17 + uVar5 * -8 + -4);
            goto LAB_016294fc;
          }
        }
        if ((uVar21 & 0x80808080 & uVar21 << 1) != 0) break;
        local_34 = local_34 + 4;
        uVar4 = uVar4 + local_34;
      }
    }
  }
  else {
LAB_016294fc:
    if ((uVar1 < (uint)param_3[0xb]) && (*(int *)(param_3[10] + uVar1 * 0x28) != 2)) {
      piVar2 = (int *)FUN_01628e10(param_3,param_2,param_4);
      if (*piVar2 == 1) {
        iVar16 = piVar2[1];
        iVar17 = FUN_01628e10(param_3,param_2,param_4);
        uVar7 = *(undefined4 *)(iVar17 + 8);
        uVar10 = *(undefined4 *)(iVar17 + 0xc);
        iVar17 = FUN_01628e10(param_3,iVar16,param_4);
        *(undefined4 *)(iVar17 + 8) = uVar7;
        *(undefined4 *)(iVar17 + 0xc) = uVar10;
      }
      iVar17 = FUN_01628e10(param_3,param_2,param_4);
      if (*(int *)(iVar17 + 8) == 1) {
        uVar14 = *(undefined4 *)(iVar17 + 0xc);
        puVar3 = (undefined4 *)FUN_01628e10(param_3,param_2,param_4);
        uVar10 = *puVar3;
        uVar7 = puVar3[1];
        param_1 = (undefined4 *)FUN_01628e10(param_3,uVar14,param_4);
        *param_1 = uVar10;
      }
      else {
        puVar3 = (undefined4 *)FUN_01628e10(param_3,param_2,param_4);
        uVar7 = puVar3[1];
        *param_1 = *puVar3;
      }
      param_1[1] = uVar7;
      puVar3 = (undefined4 *)FUN_01628e10(param_3,param_2,param_4);
      *puVar3 = 0;
      iVar17 = FUN_01628e10(param_3,param_2,param_4);
      *(undefined4 *)(iVar17 + 8) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa464(&DAT_00412e5d,0x26,param_4);
}

