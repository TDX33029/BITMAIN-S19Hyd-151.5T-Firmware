// FUN_016a0564 @ 016a0564 size=412 calls_out=1 calls_in=4
// strings: 

bool FUN_016a0564(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (param_2 != 0) {
    uVar8 = *(undefined4 *)(param_3 + 0x14);
    uVar6 = *(uint *)(param_3 + 0x18);
    if ((*(byte *)(param_3 + 0x3c) & 1) == 0) {
      param_2 = param_2 * 0x1c;
      do {
        if ((param_1[4] == 0x80000000) ||
           ((param_1[6] <= uVar6 && (iVar1 = thunk_FUN_016dd50a(param_1[5],uVar8), iVar1 == 0)))) {
LAB_016a06e0:
          return *param_1 <= *(uint *)(param_3 + 8);
        }
        param_1 = param_1 + 7;
        param_2 = param_2 + -0x1c;
      } while (param_2 != 0);
    }
    else {
      puVar2 = param_1 + param_2 * 7;
      iVar1 = *(int *)(param_3 + 0x20);
      iVar12 = *(int *)(param_3 + 0x1c);
      do {
        if ((param_1[4] == 0x80000000) ||
           ((param_1[6] <= uVar6 && (iVar9 = thunk_FUN_016dd50a(param_1[5],uVar8), iVar9 == 0)))) {
          if (param_1[3] == 0) goto LAB_016a06e0;
          uVar13 = param_1[2];
          uVar10 = uVar13 + param_1[3] * 0xc;
          while (iVar1 != 0) {
            uVar5 = *(undefined4 *)(uVar13 + 4);
            iVar7 = *(int *)(uVar13 + 8);
            iVar11 = 0;
            iVar9 = iVar1 << 3;
            while ((puVar3 = (undefined4 *)(iVar12 + iVar11 * 8), puVar3[1] != iVar7 ||
                   (iVar4 = thunk_FUN_016dd50a(*puVar3,uVar5,iVar7), iVar4 != 0))) {
              iVar11 = iVar11 + 1;
              iVar9 = iVar9 + -8;
              if (iVar9 == 0) goto LAB_016a0608;
            }
            if (iVar12 == 0) break;
            uVar13 = uVar13 + 0xc;
            if (uVar13 == uVar10) goto LAB_016a06e0;
          }
        }
LAB_016a0608:
        param_1 = param_1 + 7;
      } while (param_1 != puVar2);
    }
  }
  return false;
}

