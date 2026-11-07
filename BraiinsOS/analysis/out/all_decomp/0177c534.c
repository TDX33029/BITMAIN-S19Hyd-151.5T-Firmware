// FUN_0177c534 @ 0177c534 size=2364 calls_out=5 calls_in=1
// strings: align_pointer | /aws-lc/crypto/poly1305/../internal.h | ((uintptr_t)ptr & (alignment - 1)) == 0 | align_pointer | /aws-lc/crypto/poly1305/../internal.h | ((uintptr_t)ptr & (alignment - 1)) == 0

undefined8 FUN_0177c534(int param_1,undefined4 *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  int local_2c;
  
  uVar5 = -param_1 & 0x3f;
  uVar6 = param_1 + uVar5;
  if ((uVar6 & 0x3f) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("((uintptr_t)ptr & (alignment - 1)) == 0","/aws-lc/crypto/poly1305/../internal.h",
                 0xa6,"align_pointer");
  }
  if (param_3 == (undefined1 *)0x0) {
    return 0;
  }
  if ((DAT_018dfe48 & 1) == 0) {
    iVar4 = *(int *)(uVar6 + 0x48);
    if (iVar4 == 0) {
      if ((undefined1 *)0xf < param_3) goto LAB_0177c734;
    }
    else {
      puVar2 = (undefined1 *)(0x10 - iVar4);
      if (param_3 <= (undefined1 *)(0x10 - iVar4)) {
        puVar2 = param_3;
      }
      if (puVar2 != (undefined1 *)0x0) {
        if (puVar2 + -1 < (undefined1 *)0x6) {
          *(undefined1 *)(uVar6 + iVar4 + 0x38) = *(undefined1 *)param_2;
          if ((puVar2 != (undefined1 *)0x1) &&
             (*(undefined1 *)(uVar6 + iVar4 + 0x39) = *(undefined1 *)((int)param_2 + 1),
             puVar2 != (undefined1 *)0x2)) goto LAB_0177c7dc;
        }
        else {
          iVar1 = uVar5 + 0x38 + iVar4;
          iVar9 = param_1 + iVar1;
          if ((iVar9 - (int)param_2) - 1U < 3) {
            *(undefined1 *)(uVar6 + iVar4 + 0x38) = *(undefined1 *)param_2;
            *(undefined1 *)(uVar6 + iVar4 + 0x39) = *(undefined1 *)((int)param_2 + 1);
LAB_0177c7dc:
            iVar1 = uVar6 + iVar4;
            *(undefined1 *)(iVar1 + 0x3a) = *(undefined1 *)((int)param_2 + 2);
            if ((((((puVar2 != (undefined1 *)0x3) &&
                   (*(undefined1 *)(iVar1 + 0x3b) = *(undefined1 *)((int)param_2 + 3),
                   puVar2 != (undefined1 *)0x4)) &&
                  (*(undefined1 *)(iVar1 + 0x3c) = *(undefined1 *)(param_2 + 1),
                  puVar2 != (undefined1 *)0x5)) &&
                 (((*(undefined1 *)(iVar1 + 0x3d) = *(undefined1 *)((int)param_2 + 5),
                   puVar2 != (undefined1 *)0x6 &&
                   (*(undefined1 *)(iVar1 + 0x3e) = *(undefined1 *)((int)param_2 + 6),
                   puVar2 != (undefined1 *)0x7)) &&
                  ((*(undefined1 *)(iVar1 + 0x3f) = *(undefined1 *)((int)param_2 + 7),
                   puVar2 != (undefined1 *)0x8 &&
                   ((*(undefined1 *)(iVar1 + 0x40) = *(undefined1 *)(param_2 + 2),
                    puVar2 != (undefined1 *)0x9 &&
                    (*(undefined1 *)(iVar1 + 0x41) = *(undefined1 *)((int)param_2 + 9),
                    puVar2 != (undefined1 *)0xa)))))))) &&
                (*(undefined1 *)(iVar1 + 0x42) = *(undefined1 *)((int)param_2 + 10),
                puVar2 != (undefined1 *)0xb)) &&
               ((((*(undefined1 *)(iVar1 + 0x43) = *(undefined1 *)((int)param_2 + 0xb),
                  puVar2 != (undefined1 *)0xc &&
                  (*(undefined1 *)(iVar1 + 0x44) = *(undefined1 *)(param_2 + 3),
                  puVar2 != (undefined1 *)0xd)) &&
                 (*(undefined1 *)(iVar1 + 0x45) = *(undefined1 *)((int)param_2 + 0xd),
                 puVar2 != (undefined1 *)0xe)) &&
                (*(undefined1 *)(iVar1 + 0x46) = *(undefined1 *)((int)param_2 + 0xe),
                puVar2 != (undefined1 *)0xf)))) {
              *(undefined1 *)(iVar1 + 0x47) = *(undefined1 *)((int)param_2 + 0xf);
            }
          }
          else {
            *(undefined4 *)(param_1 + iVar1) = *param_2;
            uVar7 = (uint)puVar2 >> 2;
            if (uVar7 == 1) {
              puVar10 = (undefined1 *)0x5;
              *(undefined1 *)(uVar6 + iVar4 + 0x3c) = *(undefined1 *)(param_2 + 1);
              uVar7 = 4;
LAB_0177c638:
              puVar8 = (undefined1 *)(uVar7 + 2);
              puVar10[uVar6 + iVar4 + 0x38] = *(undefined1 *)((int)param_2 + (int)puVar10);
              if (puVar8 < puVar2) {
                puVar8[uVar6 + iVar4 + 0x38] = *(undefined1 *)((int)param_2 + (int)puVar8);
              }
            }
            else {
              *(undefined4 *)(iVar9 + 4) = param_2[1];
              if ((uVar7 != 2) && (*(undefined4 *)(iVar9 + 8) = param_2[2], uVar7 != 3)) {
                *(undefined4 *)(iVar9 + 0xc) = param_2[3];
              }
              if (((uint)puVar2 & 3) != 0) {
                uVar7 = (uint)puVar2 & 0xfffffffc;
                puVar10 = (undefined1 *)(uVar7 + 1);
                *(undefined1 *)(uVar6 + iVar4 + uVar7 + 0x38) =
                     *(undefined1 *)((int)param_2 + uVar7);
                if (puVar10 < puVar2) goto LAB_0177c638;
              }
            }
          }
        }
      }
      param_3 = param_3 + -(int)puVar2;
      param_2 = (undefined4 *)((int)param_2 + (int)puVar2);
      *(undefined1 **)(uVar6 + 0x48) = puVar2 + iVar4;
      if (puVar2 + iVar4 == (undefined1 *)0x10) {
        FUN_0177bda8(uVar6,uVar6 + 0x38);
        *(undefined4 *)(uVar6 + 0x48) = 0;
      }
      if ((undefined1 *)0xf < param_3) {
LAB_0177c734:
        uVar7 = (uint)param_3 & 0xfffffff0;
        FUN_0177bda8(uVar6,param_2);
        param_3 = (undefined1 *)((uint)param_3 & 0xf);
        param_2 = (undefined4 *)((int)param_2 + uVar7);
      }
      if (param_3 == (undefined1 *)0x0) {
        return 0;
      }
    }
    if (param_3 + -1 < (undefined1 *)0x6) {
      *(undefined1 *)(uVar6 + 0x38) = *(undefined1 *)param_2;
      if ((param_3 == (undefined1 *)0x1) ||
         (*(undefined1 *)(uVar6 + 0x39) = *(undefined1 *)((int)param_2 + 1),
         param_3 == (undefined1 *)0x2)) goto LAB_0177c714;
    }
    else {
      iVar4 = param_1 + uVar5 + 0x38;
      if (2 < (uint)((iVar4 + -1) - (int)param_2)) {
        *(undefined4 *)(param_1 + uVar5 + 0x38) = *param_2;
        if ((uint)param_3 >> 2 == 1) {
          puVar2 = (undefined1 *)0x5;
          uVar5 = 4;
          *(undefined1 *)(uVar6 + 0x3c) = *(undefined1 *)(param_2 + 1);
        }
        else {
          *(undefined4 *)(iVar4 + 4) = param_2[1];
          if ((uint)param_3 >> 2 == 3) {
            *(undefined4 *)(iVar4 + 8) = param_2[2];
          }
          if (((uint)param_3 & 3) == 0) goto LAB_0177c714;
          uVar5 = (uint)param_3 & 0xfffffffc;
          puVar2 = (undefined1 *)(uVar5 + 1);
          *(undefined1 *)(uVar6 + uVar5 + 0x38) = *(undefined1 *)((int)param_2 + uVar5);
          if (param_3 <= puVar2) goto LAB_0177c714;
        }
        puVar10 = (undefined1 *)(uVar5 + 2);
        puVar2[uVar6 + 0x38] = *(undefined1 *)((int)param_2 + (int)puVar2);
        if (puVar10 < param_3) {
          puVar10[uVar6 + 0x38] = *(undefined1 *)((int)param_2 + (int)puVar10);
        }
        goto LAB_0177c714;
      }
      *(undefined1 *)(uVar6 + 0x38) = *(undefined1 *)param_2;
      *(undefined1 *)(uVar6 + 0x39) = *(undefined1 *)((int)param_2 + 1);
    }
    *(undefined1 *)(uVar6 + 0x3a) = *(undefined1 *)((int)param_2 + 2);
    if ((((param_3 != (undefined1 *)0x3) &&
         (*(undefined1 *)(uVar6 + 0x3b) = *(undefined1 *)((int)param_2 + 3),
         param_3 != (undefined1 *)0x4)) &&
        (*(undefined1 *)(uVar6 + 0x3c) = *(undefined1 *)(param_2 + 1), param_3 != (undefined1 *)0x5)
        ) && ((((*(undefined1 *)(uVar6 + 0x3d) = *(undefined1 *)((int)param_2 + 5),
                param_3 != (undefined1 *)0x6 &&
                (*(undefined1 *)(uVar6 + 0x3e) = *(undefined1 *)((int)param_2 + 6),
                param_3 != (undefined1 *)0x7)) &&
               ((*(undefined1 *)(uVar6 + 0x3f) = *(undefined1 *)((int)param_2 + 7),
                param_3 != (undefined1 *)0x8 &&
                ((*(undefined1 *)(uVar6 + 0x40) = *(undefined1 *)(param_2 + 2),
                 param_3 != (undefined1 *)0x9 &&
                 (*(undefined1 *)(uVar6 + 0x41) = *(undefined1 *)((int)param_2 + 9),
                 param_3 != (undefined1 *)0xa)))))) &&
              ((*(undefined1 *)(uVar6 + 0x42) = *(undefined1 *)((int)param_2 + 10),
               param_3 != (undefined1 *)0xb &&
               (((*(undefined1 *)(uVar6 + 0x43) = *(undefined1 *)((int)param_2 + 0xb),
                 param_3 != (undefined1 *)0xc &&
                 (*(undefined1 *)(uVar6 + 0x44) = *(undefined1 *)(param_2 + 3),
                 param_3 != (undefined1 *)0xd)) &&
                (*(undefined1 *)(uVar6 + 0x45) = *(undefined1 *)((int)param_2 + 0xd),
                param_3 == (undefined1 *)0xf)))))))) {
      *(undefined1 *)(uVar6 + 0x46) = *(undefined1 *)((int)param_2 + 0xe);
    }
LAB_0177c714:
    *(undefined1 **)(uVar6 + 0x48) = param_3;
    return 0;
  }
  uVar6 = -param_1 & 0x3f;
  uVar5 = param_1 + uVar6;
  if ((uVar5 & 0x3f) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("((uintptr_t)ptr & (alignment - 1)) == 0","/aws-lc/crypto/poly1305/../internal.h",
                 0xa6,"align_pointer");
  }
  iVar4 = *(int *)(uVar5 + 400);
  iVar1 = uVar5 + 0x30;
  if (iVar4 == 0) {
LAB_0177da58:
    if ((undefined1 *)0x20 < param_3) {
LAB_0177da70:
      do {
        puVar2 = param_3;
        if ((undefined1 *)0xfffff < param_3) {
          puVar2 = (undefined1 *)0x100000;
        }
        iVar4 = FUN_01782d10(iVar1,uVar5 + 0x90,param_2,puVar2);
        param_3 = param_3 + (iVar4 - (int)puVar2);
        param_2 = (undefined4 *)((int)param_2 + ((int)puVar2 - iVar4));
      } while ((undefined1 *)0x20 < param_3);
    }
    if (param_3 == (undefined1 *)0x0) {
      return 0;
    }
  }
  else {
    puVar2 = (undefined1 *)(0x20 - iVar4);
    if (param_3 <= (undefined1 *)(0x20 - iVar4)) {
      puVar2 = param_3;
    }
    if (puVar2 == (undefined1 *)0x0) goto LAB_0177da3c;
    if (puVar2 + -1 < (undefined1 *)0x6) {
LAB_0177dcd0:
      puVar8 = (undefined1 *)((int)param_2 + -1);
      puVar11 = puVar8 + (int)puVar2;
      puVar10 = (undefined1 *)(uVar5 + iVar4 + 0x16f);
      do {
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
        *puVar10 = *puVar8;
      } while (puVar8 != puVar11);
    }
    else {
      iVar9 = uVar6 + 0x170 + iVar4;
      iVar3 = param_1 + iVar9;
      if ((iVar3 - (int)param_2) - 1U < 3) goto LAB_0177dcd0;
      *(undefined4 *)(param_1 + iVar9) = *param_2;
      uVar7 = (uint)puVar2 >> 2;
      if (uVar7 == 1) {
        puVar10 = (undefined1 *)0x5;
        *(undefined1 *)(uVar5 + iVar4 + 0x174) = *(undefined1 *)(param_2 + 1);
        uVar7 = 4;
LAB_0177da18:
        local_2c = uVar5 + iVar4;
        puVar8 = (undefined1 *)(uVar7 + 2);
        puVar10[local_2c + 0x170] = *(undefined1 *)((int)param_2 + (int)puVar10);
        if (puVar8 < puVar2) {
          puVar8[local_2c + 0x170] = *(undefined1 *)((int)param_2 + (int)puVar8);
        }
      }
      else {
        *(undefined4 *)(iVar3 + 4) = param_2[1];
        if ((((uVar7 != 2) && (*(undefined4 *)(iVar3 + 8) = param_2[2], uVar7 != 3)) &&
            ((*(undefined4 *)(iVar3 + 0xc) = param_2[3], uVar7 != 4 &&
             ((*(undefined4 *)(iVar3 + 0x10) = param_2[4], uVar7 != 5 &&
              (*(undefined4 *)(iVar3 + 0x14) = param_2[5], uVar7 != 6)))))) &&
           (*(undefined4 *)(iVar3 + 0x18) = param_2[6], uVar7 != 7)) {
          *(undefined4 *)(iVar3 + 0x1c) = param_2[7];
        }
        if (((uint)puVar2 & 3) != 0) {
          uVar7 = (uint)puVar2 & 0xfffffffc;
          puVar10 = (undefined1 *)(uVar7 + 1);
          *(undefined1 *)(uVar5 + iVar4 + uVar7 + 0x170) = *(undefined1 *)((int)param_2 + uVar7);
          if (puVar10 < puVar2) goto LAB_0177da18;
        }
      }
    }
LAB_0177da3c:
    param_3 = param_3 + -(int)puVar2;
    param_2 = (undefined4 *)((int)param_2 + (int)puVar2);
    *(undefined1 **)(uVar5 + 400) = puVar2 + iVar4;
    if (puVar2 + iVar4 != (undefined1 *)0x20) goto LAB_0177da58;
    if (param_3 == (undefined1 *)0x0) {
      return 0;
    }
    FUN_01783148(iVar1,iVar1,uVar5 + 0x90,&DAT_0044ff00);
    FUN_0177ce8c(uVar5 + 0x60,uVar5 + 0x170,0x20);
    *(int *)(uVar5 + 0x30) = *(int *)(uVar5 + 0x30) + *(int *)(uVar5 + 0x60);
    *(int *)(uVar5 + 0x34) = *(int *)(uVar5 + 0x34) + *(int *)(uVar5 + 100);
    *(int *)(uVar5 + 0x38) = *(int *)(uVar5 + 0x38) + *(int *)(uVar5 + 0x68);
    *(int *)(uVar5 + 0x3c) = *(int *)(uVar5 + 0x3c) + *(int *)(uVar5 + 0x6c);
    *(int *)(uVar5 + 0x40) = *(int *)(uVar5 + 0x40) + *(int *)(uVar5 + 0x70);
    *(int *)(uVar5 + 0x44) = *(int *)(uVar5 + 0x44) + *(int *)(uVar5 + 0x74);
    *(int *)(uVar5 + 0x48) = *(int *)(uVar5 + 0x48) + *(int *)(uVar5 + 0x78);
    *(int *)(uVar5 + 0x4c) = *(int *)(uVar5 + 0x4c) + *(int *)(uVar5 + 0x7c);
    *(int *)(uVar5 + 0x50) = *(int *)(uVar5 + 0x50) + *(int *)(uVar5 + 0x80);
    *(int *)(uVar5 + 0x54) = *(int *)(uVar5 + 0x54) + *(int *)(uVar5 + 0x84);
    *(undefined4 *)(uVar5 + 400) = 0;
    if ((undefined1 *)0x20 < param_3) goto LAB_0177da70;
  }
  if (param_3 + -1 < (undefined1 *)0x6) {
LAB_0177dca4:
    puVar10 = (undefined1 *)((int)param_2 + -1);
    puVar2 = (undefined1 *)(uVar5 + 0x16f);
    do {
      puVar8 = puVar10 + (2 - (int)param_2);
      puVar10 = puVar10 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar10;
    } while (puVar8 < param_3);
    *(undefined1 **)(uVar5 + 400) = param_3;
    return 0;
  }
  iVar4 = param_1 + uVar6 + 0x170;
  if ((uint)((iVar4 + -1) - (int)param_2) < 3) goto LAB_0177dca4;
  *(undefined4 *)(param_1 + uVar6 + 0x170) = *param_2;
  uVar6 = (uint)param_3 >> 2;
  if (uVar6 == 1) {
    uVar6 = 4;
    puVar2 = (undefined1 *)0x5;
    *(undefined1 *)(uVar5 + 0x174) = *(undefined1 *)(param_2 + 1);
  }
  else {
    *(undefined4 *)(iVar4 + 4) = param_2[1];
    if (((((uVar6 != 2) && (*(undefined4 *)(iVar4 + 8) = param_2[2], uVar6 != 3)) &&
         (*(undefined4 *)(iVar4 + 0xc) = param_2[3], uVar6 != 4)) &&
        ((*(undefined4 *)(iVar4 + 0x10) = param_2[4], uVar6 != 5 &&
         (*(undefined4 *)(iVar4 + 0x14) = param_2[5], uVar6 != 6)))) &&
       (*(undefined4 *)(iVar4 + 0x18) = param_2[6], uVar6 == 8)) {
      *(undefined4 *)(iVar4 + 0x1c) = param_2[7];
      goto LAB_0177db58;
    }
    uVar6 = (uint)param_3 & 0xfffffffc;
    if (((uint)param_3 & 3) == 0) goto LAB_0177db58;
    *(undefined1 *)(uVar5 + uVar6 + 0x170) = *(undefined1 *)((int)param_2 + uVar6);
    puVar2 = (undefined1 *)(uVar6 + 1);
    if (param_3 <= puVar2) goto LAB_0177db58;
  }
  puVar10 = (undefined1 *)(uVar6 + 2);
  puVar2[uVar5 + 0x170] = *(undefined1 *)((int)param_2 + (int)puVar2);
  if (puVar10 < param_3) {
    puVar10[uVar5 + 0x170] = *(undefined1 *)((int)param_2 + (int)puVar10);
    *(undefined1 **)(uVar5 + 400) = param_3;
    return 0;
  }
LAB_0177db58:
  *(undefined1 **)(uVar5 + 400) = param_3;
  return 0;
}

