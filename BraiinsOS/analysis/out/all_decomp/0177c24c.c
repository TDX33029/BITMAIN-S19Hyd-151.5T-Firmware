// FUN_0177c24c @ 0177c24c size=1420 calls_out=4 calls_in=1
// strings: align_pointer | /aws-lc/crypto/poly1305/../internal.h | ((uintptr_t)ptr & (alignment - 1)) == 0 | align_pointer | /aws-lc/crypto/poly1305/../internal.h | ((uintptr_t)ptr & (alignment - 1)) == 0

undefined8 FUN_0177c24c(int param_1,uint *param_2)

{
  code *pcVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint local_1c;
  
  uVar4 = DAT_018ddaf8;
  local_1c = DAT_018ddaf8;
  uVar3 = param_1 + (-param_1 & 0x3fU);
  if ((uVar3 & 0x3f) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("((uintptr_t)ptr & (alignment - 1)) == 0","/aws-lc/crypto/poly1305/../internal.h",
                 0xa6,"align_pointer");
  }
  if ((DAT_018dfe48 & 1) != 0) {
    uVar4 = param_1 + (-param_1 & 0x3fU);
    if ((uVar4 & 0x3f) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2c94("((uintptr_t)ptr & (alignment - 1)) == 0","/aws-lc/crypto/poly1305/../internal.h"
                   ,0xa6,"align_pointer");
    }
    if ((param_2 <= &uStack_20 || &local_1c <= param_2) &&
       ((&uStack_20 <= param_2 || (param_2 + 1 <= &uStack_20)))) {
      puVar9 = (uint *)((int)param_2 + 3);
      uVar3 = *param_2;
      *(uint *)(param_1 + (-param_1 & 0x3fU)) = uVar3 & 0x3ffffff;
      *(uint *)(uVar4 + 4) = uVar3 & 0x3ffffff;
      if ((puVar9 <= &uStack_24 || &uStack_20 <= puVar9) &&
         ((&uStack_24 <= puVar9 || ((uint *)((int)param_2 + 7U) <= &uStack_24)))) {
        puVar9 = (uint *)((int)param_2 + 6);
        uVar3 = *(uint *)((int)param_2 + 3) >> 2 & 0x3ffff03;
        *(uint *)(uVar4 + 8) = uVar3;
        *(uint *)(uVar4 + 0xc) = uVar3;
        if ((puVar9 <= &uStack_28 || &uStack_24 <= puVar9) &&
           ((&uStack_28 <= puVar9 || ((uint *)((int)param_2 + 10U) <= &uStack_28)))) {
          puVar9 = (uint *)((int)param_2 + 9);
          uVar3 = *(uint *)((int)param_2 + 6) >> 4 & 0x3ffc0ff;
          *(uint *)(uVar4 + 0x10) = uVar3;
          *(uint *)(uVar4 + 0x14) = uVar3;
          if ((puVar9 <= &uStack_2c || &uStack_28 <= puVar9) &&
             ((&uStack_2c <= puVar9 || ((uint *)((int)param_2 + 0xdU) <= &uStack_2c)))) {
            puVar9 = param_2 + 3;
            uVar3 = *(uint *)((int)param_2 + 9) >> 6 & 0x3f03fff;
            *(uint *)(uVar4 + 0x18) = uVar3;
            *(uint *)(uVar4 + 0x1c) = uVar3;
            if ((&uStack_2c <= puVar9 || puVar9 <= &uStack_30) &&
               ((puVar2 = param_2 + 4, &uStack_30 <= puVar9 || (puVar2 <= &uStack_30)))) {
              uVar3 = (param_2[3] & 0xfffffff) >> 8;
              *(uint *)(uVar4 + 0x20) = uVar3;
              *(uint *)(uVar4 + 0x24) = uVar3;
              FUN_016dd606(uVar4 + 0x30,0,0x28);
              FUN_01783148(uVar4 + 0x90,uVar4,uVar4);
              FUN_01783148(uVar4 + 0xc0,uVar4 + 0x90,uVar4 + 0x90,&DAT_0044ff00);
              puVar9 = (uint *)(uVar4 + 0x194);
              if (puVar9 < puVar2) {
                if ((uint *)(uVar4 + 0x1a4) <= puVar2) {
LAB_0177d82c:
                  uVar5 = param_2[5];
                  uVar3 = param_2[6];
                  uVar6 = param_2[7];
                  *(uint *)(uVar4 + 0x194) = param_2[4];
                  *(uint *)(uVar4 + 0x198) = uVar5;
                  *(uint *)(uVar4 + 0x19c) = uVar3;
                  *(uint *)(uVar4 + 0x1a0) = uVar6;
                  *(undefined4 *)(uVar4 + 400) = 0;
                  if (local_1c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
                    FUN_016d2b78();
                  }
                  return 0;
                }
              }
              else if ((puVar9 == puVar2) || (param_2 + 8 <= puVar9)) goto LAB_0177d82c;
            }
          }
        }
      }
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0,0x177d8a8);
    (*pcVar1)();
  }
  if ((param_2 <= &uStack_20 || &local_1c <= param_2) &&
     ((puVar9 = param_2 + 1, &uStack_20 <= param_2 || (puVar9 <= &uStack_20)))) {
    uVar6 = *param_2;
    if ((puVar9 <= &uStack_24 || &uStack_20 <= puVar9) &&
       ((puVar2 = param_2 + 2, &uStack_24 <= puVar9 || (puVar2 <= &uStack_24)))) {
      uVar5 = param_2[1];
      if ((&uStack_24 <= puVar2 || puVar2 <= &uStack_28) &&
         ((puVar9 = param_2 + 3, &uStack_28 <= puVar2 || (puVar9 <= &uStack_28)))) {
        uVar8 = param_2[2];
        if ((&uStack_28 <= puVar9 || puVar9 <= &uStack_2c) &&
           ((puVar2 = param_2 + 4, &uStack_2c <= puVar9 || (puVar2 <= &uStack_2c)))) {
          uVar7 = param_2[3];
          *(uint *)(param_1 + (-param_1 & 0x3fU)) = uVar6 & 0x3ffffff;
          uVar6 = ((uVar5 & 0xfffff) << 6 | uVar6 >> 0x1a) & 0xffffff03;
          *(uint *)(uVar3 + 4) = uVar6;
          *(uint *)(uVar3 + 0x14) = uVar6 * 5;
          uVar6 = ((uVar8 & 0x3fff) << 0xc | uVar5 >> 0x14) & 0xffffc0ff;
          *(uint *)(uVar3 + 8) = uVar6;
          *(uint *)(uVar3 + 0x18) = uVar6 * 5;
          uVar5 = (uVar7 & 0xfffffff) >> 8;
          puVar9 = (uint *)(uVar3 + 0x4c);
          *(uint *)(uVar3 + 0x10) = uVar5;
          uVar6 = ((uVar7 & 0xff) << 0x12 | uVar8 >> 0xe) & 0xfff03fff;
          *(uint *)(uVar3 + 0xc) = uVar6;
          *(uint *)(uVar3 + 0x20) = uVar5 * 5;
          *(uint *)(uVar3 + 0x1c) = uVar6 * 5;
          *(undefined4 *)(uVar3 + 0x24) = 0;
          *(undefined4 *)(uVar3 + 0x28) = 0;
          *(undefined4 *)(uVar3 + 0x2c) = 0;
          *(undefined4 *)(uVar3 + 0x30) = 0;
          *(undefined4 *)(uVar3 + 0x34) = 0;
          *(undefined4 *)(uVar3 + 0x48) = 0;
          if (puVar9 < puVar2) {
            if ((uint *)(uVar3 + 0x5c) <= puVar2) goto LAB_0177c428;
          }
          else if ((puVar9 <= puVar2) || (param_2 + 8 <= puVar9)) {
LAB_0177c428:
            uVar5 = param_2[7];
            uVar8 = param_2[5];
            uVar6 = param_2[6];
            *(uint *)(uVar3 + 0x4c) = param_2[4];
            *(uint *)(uVar3 + 0x58) = uVar5;
            *(uint *)(uVar3 + 0x50) = uVar8;
            *(uint *)(uVar3 + 0x54) = uVar6;
            if (uVar4 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
              FUN_016d2b78();
            }
            return 0;
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x177c494);
  (*pcVar1)();
}

