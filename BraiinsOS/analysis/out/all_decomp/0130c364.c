// FUN_0130c364 @ 0130c364 size=904 calls_out=5 calls_in=10
// strings: 

void FUN_0130c364(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = 0;
  if (*(char *)(param_1 + 0xc) == '\x01') {
    uVar1 = *(uint *)(param_1 + 8);
    iVar10 = 1;
    if (0x7f < uVar1) {
      iVar10 = 2;
      if (0x3fff < uVar1) {
        iVar10 = 3;
      }
      if ((0x1fffff < uVar1) && (iVar10 = 5, uVar1 < 0x10000000)) {
        iVar10 = 4;
      }
    }
    iVar10 = uVar1 + iVar10 + 1;
  }
  uVar6 = *(uint *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x1c);
  if (uVar1 <= uVar6) {
    if (uVar1 != 0) {
      iVar8 = *(int *)(param_1 + 0x14);
      iVar7 = uVar1 * 0x28;
      do {
        uVar1 = FUN_0130ca20(iVar8);
        iVar3 = 1;
        if (0x7f < uVar1) {
          iVar3 = 2;
          if (0x3fff < uVar1) {
            iVar3 = 3;
          }
          if ((0x1fffff < uVar1) && (iVar3 = 5, uVar1 < 0x10000000)) {
            iVar3 = 4;
          }
        }
        iVar8 = iVar8 + 0x28;
        iVar7 = iVar7 + -0x28;
        iVar10 = iVar10 + uVar1 + iVar3 + 1;
      } while (iVar7 != 0);
    }
    if (*(char *)(param_1 + 0x44) == '\x01') {
      iVar7 = *(int *)(param_1 + 0x40);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01890768);
      }
      uVar6 = *(uint *)(iVar7 + 8);
      uVar1 = *(uint *)(iVar7 + 0xc);
      if (uVar6 < uVar1) goto LAB_0130c6d0;
      iVar8 = 0;
      if (*(char *)(iVar7 + 0x18) != '\x02') {
        iVar8 = 2;
      }
      if (*(char *)(iVar7 + 0x19) != '\x02') {
        iVar8 = iVar8 + 2;
      }
      if (uVar1 != 0) {
        iVar9 = *(int *)(iVar7 + 4);
        iVar3 = uVar1 * 0x78;
        do {
          uVar1 = FUN_012fa894(iVar9);
          iVar4 = 1;
          if (0x7f < uVar1) {
            iVar4 = 2;
            if (0x3fff < uVar1) {
              iVar4 = 3;
            }
            if ((0x1fffff < uVar1) && (iVar4 = 5, uVar1 < 0x10000000)) {
              iVar4 = 4;
            }
          }
          iVar9 = iVar9 + 0x78;
          iVar3 = iVar3 + -0x78;
          iVar8 = iVar8 + uVar1 + iVar4 + 2;
        } while (iVar3 != 0);
      }
      iVar3 = FUN_01337c54(*(undefined4 *)(iVar7 + 0x10));
      uVar1 = iVar3 + iVar8;
      iVar8 = 1;
      *(uint *)(iVar7 + 0x14) = uVar1;
      if (0x7f < uVar1) {
        iVar8 = 2;
        if (0x3fff < uVar1) {
          iVar8 = 3;
        }
        if ((0x1fffff < uVar1) && (iVar8 = 5, uVar1 < 0x10000000)) {
          iVar8 = 4;
        }
      }
      iVar10 = iVar10 + uVar1 + iVar8 + 1;
    }
    uVar6 = *(uint *)(param_1 + 0x28);
    uVar1 = *(uint *)(param_1 + 0x2c);
    if (uVar1 <= uVar6) {
      if (uVar1 != 0) {
        iVar7 = *(int *)(param_1 + 0x24);
        puVar5 = (uint *)(iVar7 + 0xc);
        do {
          iVar8 = 0;
          if (puVar5[-3] == 1) {
            uVar6 = puVar5[-2];
            iVar8 = 2;
            if (0x7f < uVar6) {
              iVar8 = 3;
            }
            if (0x3fff < uVar6) {
              iVar8 = 4;
              if (0x1fffff < uVar6) {
                iVar8 = 5;
              }
              if ((0xfffffff < uVar6) && (iVar8 = 0xb, uVar6 < 0x80000000)) {
                iVar8 = 6;
              }
            }
          }
          if (puVar5[-1] == 1) {
            uVar6 = *puVar5;
            iVar3 = 2;
            if (0x7f < uVar6) {
              iVar3 = 3;
            }
            if (0x3fff < uVar6) {
              iVar3 = 4;
              if (0x1fffff < uVar6) {
                iVar3 = 5;
              }
              if ((0xfffffff < uVar6) && (iVar3 = 0xb, uVar6 < 0x80000000)) {
                iVar3 = 6;
              }
            }
            iVar8 = iVar3 + iVar8;
          }
          iVar3 = FUN_01337c54(puVar5[1]);
          uVar6 = iVar3 + iVar8;
          iVar8 = 1;
          puVar5[2] = uVar6;
          if (0x7f < uVar6) {
            iVar8 = 2;
            if (0x3fff < uVar6) {
              iVar8 = 3;
            }
            if ((0x1fffff < uVar6) && (iVar8 = 5, uVar6 < 0x10000000)) {
              iVar8 = 4;
            }
          }
          iVar10 = iVar10 + uVar6 + iVar8 + 1;
          puVar2 = puVar5 + 3;
          puVar5 = puVar5 + 6;
        } while (puVar2 != (uint *)(iVar7 + uVar1 * 0x18));
      }
      uVar6 = *(uint *)(param_1 + 0x38);
      uVar1 = *(uint *)(param_1 + 0x3c);
      if (uVar1 <= uVar6) {
        if (uVar1 != 0) {
          iVar7 = uVar1 * 0xc;
          puVar5 = (uint *)(*(int *)(param_1 + 0x34) + 8);
          do {
            uVar1 = *puVar5;
            iVar8 = 1;
            if (0x7f < uVar1) {
              iVar8 = 2;
              if (0x3fff < uVar1) {
                iVar8 = 3;
              }
              if ((0x1fffff < uVar1) && (iVar8 = 5, uVar1 < 0x10000000)) {
                iVar8 = 4;
              }
            }
            iVar7 = iVar7 + -0xc;
            iVar10 = uVar1 + iVar8 + iVar10 + 1;
            puVar5 = puVar5 + 3;
          } while (iVar7 != 0);
        }
        iVar7 = FUN_01337c54(*(undefined4 *)(param_1 + 0x48));
        *(int *)(param_1 + 0x4c) = iVar7 + iVar10;
        return;
      }
    }
  }
LAB_0130c6d0:
                    /* WARNING: Subroutine does not return */
  FUN_00faa36c(0,uVar1,uVar6,&DAT_01890988);
}

