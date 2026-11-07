// FUN_0177ca24 @ 0177ca24 size=2200 calls_out=5 calls_in=1
// strings: align_pointer | /aws-lc/crypto/poly1305/../internal.h | ((uintptr_t)ptr & (alignment - 1)) == 0 | align_pointer | /aws-lc/crypto/poly1305/../internal.h | ((uintptr_t)ptr & (alignment - 1)) == 0

undefined8 FUN_0177ca24(int param_1,uint *param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c [2];
  
  local_2c[0] = DAT_018ddaf8;
  uVar6 = param_1 + (-param_1 & 0x3fU);
  if ((uVar6 & 0x3f) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("((uintptr_t)ptr & (alignment - 1)) == 0","/aws-lc/crypto/poly1305/../internal.h",
                 0xa6,"align_pointer");
  }
  if ((DAT_018dfe48 & 1) != 0) {
    uVar6 = param_1 + (-param_1 & 0x3fU);
    if ((uVar6 & 0x3f) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2c94("((uintptr_t)ptr & (alignment - 1)) == 0","/aws-lc/crypto/poly1305/../internal.h"
                   ,0xa6,"align_pointer");
    }
    iVar7 = uVar6 + 0x60;
    FUN_01783148(uVar6 + 0x30,uVar6 + 0x30,uVar6 + 0x90,&DAT_0044ff00);
    if (*(uint *)(uVar6 + 400) < 0x11) {
      if (*(uint *)(uVar6 + 400) != 0) {
        FUN_0177ce8c(iVar7,uVar6 + 0x170);
        *(undefined4 *)(uVar6 + 4) = 1;
        *(undefined4 *)(uVar6 + 0xc) = 0;
        *(undefined4 *)(uVar6 + 0x14) = 0;
        *(undefined4 *)(uVar6 + 0x1c) = 0;
        *(undefined4 *)(uVar6 + 0x24) = 0;
        FUN_01783148(uVar6 + 0x30,uVar6 + 0x30,uVar6,iVar7);
      }
    }
    else {
      FUN_0177ce8c(iVar7,uVar6 + 0x170);
      *(undefined4 *)(uVar6 + 0x94) = *(undefined4 *)(uVar6 + 4);
      *(undefined4 *)(uVar6 + 0x9c) = *(undefined4 *)(uVar6 + 0xc);
      *(undefined4 *)(uVar6 + 0xa4) = *(undefined4 *)(uVar6 + 0x14);
      *(undefined4 *)(uVar6 + 0xac) = *(undefined4 *)(uVar6 + 0x1c);
      *(undefined4 *)(uVar6 + 0xb4) = *(undefined4 *)(uVar6 + 0x24);
      FUN_01783148(uVar6 + 0x30,uVar6 + 0x30,uVar6 + 0x90,iVar7);
    }
    uVar2 = *(int *)(uVar6 + 0x30) + *(int *)(uVar6 + 0x34);
    uVar5 = *(int *)(uVar6 + 0x38) + *(int *)(uVar6 + 0x3c) + (uVar2 >> 0x1a);
    uVar13 = *(int *)(uVar6 + 0x40) + *(int *)(uVar6 + 0x44) + (uVar5 >> 0x1a);
    uVar4 = *(int *)(uVar6 + 0x48) + *(int *)(uVar6 + 0x4c) + (uVar13 >> 0x1a);
    uVar3 = *(int *)(uVar6 + 0x50) + *(int *)(uVar6 + 0x54) + (uVar4 >> 0x1a);
    uVar2 = (uVar3 >> 0x1a) * 5 + (uVar2 & 0x3ffffff);
    uVar5 = (uVar5 & 0x3ffffff) + (uVar2 >> 0x1a);
    uVar9 = (uVar13 & 0x3ffffff) + (uVar5 >> 0x1a);
    uVar4 = (uVar4 & 0x3ffffff) + (uVar9 >> 0x1a);
    uVar13 = (uVar3 & 0x3ffffff) + (uVar4 >> 0x1a);
    uVar2 = (-(uVar13 >> 0x1a) & 5) + (uVar2 & 0x3ffffff);
    uVar5 = (uVar5 & 0x3ffffff) + (uVar2 >> 0x1a);
    local_44 = uVar5 & 0x3ffffff;
    uVar17 = (uVar9 & 0x3ffffff) + (uVar5 >> 0x1a);
    local_48 = uVar17 & 0x3ffffff;
    uVar3 = (uVar4 & 0x3ffffff) + (uVar17 >> 0x1a);
    uVar19 = (uVar13 & 0x3ffffff) + (uVar3 >> 0x1a);
    uVar2 = ((int)(uVar19 * 0x20) >> 0x1f & 5U) + (uVar2 & 0x3ffffff);
    local_4c = uVar19 & 0x3ffffff;
    uVar10 = uVar2 + 5;
    uVar15 = local_44 + (uVar10 >> 0x1a);
    uVar16 = (uVar17 & 0x3ffffff) + (uVar15 >> 0x1a);
    uVar13 = (uVar3 & 0x3ffffff) + (uVar16 >> 0x1a);
    uVar9 = (uVar19 & 0x3ffffff) + (uVar13 >> 0x1a);
    uVar4 = uVar9 >> 0x1a;
    if (uVar4 != 0) {
      uVar2 = uVar10 & 0x3ffffff;
    }
    *(uint *)(uVar6 + 0x30) = uVar2;
    uVar5 = local_44 ^ ((uVar5 ^ uVar15) & 0x3ffffff) * uVar4;
    uVar10 = local_48 ^ ((uVar17 ^ uVar16) & 0x3ffffff) * uVar4;
    uVar3 = uVar3 & 0x3ffffff ^ ((uVar3 ^ uVar13) & 0x3ffffff) * uVar4;
    uVar13 = local_4c ^ ((uVar19 ^ uVar9) & 0x3ffffff) * uVar4;
    *(uint *)(uVar6 + 0x38) = uVar5;
    *(uint *)(uVar6 + 0x40) = uVar10;
    *(uint *)(uVar6 + 0x48) = uVar3;
    *(uint *)(uVar6 + 0x50) = uVar13;
    FUN_0177ce8c(iVar7,uVar6 + 0x194,0x10);
    iVar12 = uVar5 + *(int *)(uVar6 + 0x68);
    uVar4 = *(uint *)(uVar6 + 0x80) ^ 0x1000000;
    uVar2 = uVar2 + *(int *)(uVar6 + 0x60);
    iVar18 = uVar10 + *(int *)(uVar6 + 0x70);
    *(uint *)(uVar6 + 0x80) = uVar4;
    iVar8 = uVar3 + *(int *)(uVar6 + 0x78);
    iVar7 = uVar4 + uVar13;
    *(int *)(uVar6 + 0x50) = iVar7;
    *(uint *)(uVar6 + 0x30) = uVar2;
    *(int *)(uVar6 + 0x38) = iVar12;
    *(int *)(uVar6 + 0x40) = iVar18;
    *(int *)(uVar6 + 0x48) = iVar8;
    if ((&uStack_3c <= param_2) || (param_2 + 1 <= &uStack_3c)) {
      uVar6 = iVar12 + (uVar2 >> 0x1a);
      if (&uStack_38 <= param_2 || param_2 <= &uStack_3c) {
        puVar14 = param_2 + 1;
        *param_2 = (uVar2 & 0x3ffffff) + uVar6 * 0x4000000;
        if ((&uStack_38 <= puVar14) || (param_2 + 2 <= &uStack_38)) {
          uVar4 = iVar18 + (uVar6 >> 0x1a);
          if (&uStack_34 <= puVar14 || puVar14 <= &uStack_38) {
            param_2[1] = uVar4 * 0x100000 + ((uVar6 & 0x3ffffff) >> 6);
            puVar14 = param_2 + 2;
            if ((&uStack_34 <= puVar14) || (param_2 + 3 <= &uStack_34)) {
              uVar6 = iVar8 + (uVar4 >> 0x1a);
              if (puVar14 <= &uStack_34 || &uStack_30 <= puVar14) {
                param_2[2] = uVar6 * 0x4000 + ((uVar4 & 0x3ffffff) >> 0xc);
                puVar14 = param_2 + 3;
                if (((&uStack_30 <= puVar14) || (param_2 + 4 <= &uStack_30)) &&
                   (puVar14 <= &uStack_30 || local_2c <= puVar14)) {
                  param_2[3] = ((uVar6 & 0x3ffffff) >> 0x12) + (iVar7 + (uVar6 >> 0x1a)) * 0x100;
                  if (local_2c[0] != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
                    FUN_016d2b78();
                  }
                  return 0;
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0,0x177e1ac);
    (*pcVar1)();
  }
  if (*(int *)(uVar6 + 0x48) != 0) {
    FUN_0177bda8(uVar6,uVar6 + 0x38);
  }
  puVar14 = (uint *)(uVar6 + 0x4c);
  uVar4 = *(int *)(uVar6 + 0x28) + (*(uint *)(uVar6 + 0x24) >> 0x1a);
  uVar16 = uVar4 & 0x3ffffff;
  uVar4 = *(int *)(uVar6 + 0x2c) + (uVar4 >> 0x1a);
  uVar15 = uVar4 & 0x3ffffff;
  uVar4 = *(int *)(uVar6 + 0x30) + (uVar4 >> 0x1a);
  uVar9 = uVar4 & 0x3ffffff;
  uVar19 = *(int *)(uVar6 + 0x34) + (uVar4 >> 0x1a);
  uVar20 = (uVar19 >> 0x1a) * 5 + (*(uint *)(uVar6 + 0x24) & 0x3ffffff);
  uVar13 = uVar20 + 5;
  uVar17 = uVar16 + (uVar13 >> 0x1a);
  uVar2 = uVar15 + (uVar17 >> 0x1a);
  uVar3 = uVar9 + (uVar2 >> 0x1a);
  uVar5 = (uVar19 | 0xfc000000) + (uVar3 >> 0x1a);
  uVar4 = (int)uVar5 >> 0x1f;
  uVar10 = 0xffffffff - uVar4;
  uVar13 = uVar13 & uVar10 & 0x3ffffff | uVar20 & uVar4;
  uVar2 = uVar2 & uVar10 & 0x3ffffff | uVar15 & uVar4;
  uVar15 = uVar17 & uVar10 & 0x3ffffff | uVar16 & uVar4;
  uVar3 = uVar3 & uVar10 & 0x3ffffff | uVar9 & uVar4;
  uVar4 = uVar4 & uVar19 & 0x3ffffff | uVar10 & uVar5;
  *(uint *)(uVar6 + 0x24) = uVar13;
  *(uint *)(uVar6 + 0x28) = uVar15;
  *(uint *)(uVar6 + 0x2c) = uVar2;
  *(uint *)(uVar6 + 0x30) = uVar3;
  *(uint *)(uVar6 + 0x34) = uVar4;
  if ((puVar14 <= &uStack_30 || local_2c <= puVar14) &&
     ((puVar11 = (uint *)(uVar6 + 0x50), &uStack_30 <= puVar14 || (puVar11 <= &uStack_30)))) {
    uVar5 = *(uint *)(uVar6 + 0x4c);
    if ((&uStack_30 <= puVar11 || puVar11 <= &uStack_34) &&
       ((puVar14 = (uint *)(uVar6 + 0x54), &uStack_34 <= puVar11 || (puVar14 <= &uStack_34)))) {
      uVar9 = *(uint *)(uVar6 + 0x50);
      if ((puVar14 <= &uStack_38 || &uStack_34 <= puVar14) &&
         ((puVar11 = (uint *)(uVar6 + 0x58), &uStack_38 <= puVar14 || (puVar11 <= &uStack_38)))) {
        uVar10 = *(uint *)(uVar6 + 0x54);
        if ((&uStack_38 <= puVar11 || puVar11 <= &uStack_3c) &&
           ((&uStack_3c <= puVar11 || ((uint *)(uVar6 + 0x5c) <= &uStack_3c)))) {
          iVar7 = *(int *)(uVar6 + 0x58);
          if ((&uStack_40 <= param_2) || (param_2 + 1 <= &uStack_40)) {
            uVar13 = uVar13 | uVar15 << 0x1a;
            if (&uStack_3c <= param_2 || param_2 <= &uStack_40) {
              puVar14 = param_2 + 1;
              *param_2 = uVar13 + uVar5;
              if ((&local_44 <= puVar14) || (param_2 + 2 <= &local_44)) {
                uVar15 = uVar2 << 0x14 | uVar15 >> 6;
                uVar16 = uVar15 + uVar9;
                uVar6 = (uint)CARRY4(uVar13,uVar5);
                uVar5 = (uint)CARRY4(uVar15,uVar9) + (uint)CARRY4(uVar6,uVar16);
                if (&uStack_40 <= puVar14 || puVar14 <= &local_44) {
                  puVar14 = param_2 + 2;
                  param_2[1] = uVar6 + uVar16;
                  if ((&local_48 <= puVar14) || (param_2 + 3 <= &local_48)) {
                    uVar6 = uVar3 << 0xe | uVar2 >> 0xc;
                    uVar2 = uVar6 + uVar10;
                    if (&local_44 <= puVar14 || puVar14 <= &local_48) {
                      puVar14 = param_2 + 3;
                      param_2[2] = uVar5 + uVar2;
                      if (((&local_4c <= puVar14) || (param_2 + 4 <= &local_4c)) &&
                         (puVar14 <= &local_4c || &local_48 <= puVar14)) {
                        param_2[3] = (uint)CARRY4(uVar6,uVar10) + (uint)CARRY4(uVar5,uVar2) +
                                     (uVar4 << 8 | uVar3 >> 0x12) + iVar7;
                        if (local_2c[0] != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
                          FUN_016d2b78();
                        }
                        return 0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x177cda4);
  (*pcVar1)();
}

