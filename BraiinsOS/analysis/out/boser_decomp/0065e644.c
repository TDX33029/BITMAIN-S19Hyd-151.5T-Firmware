// FUN_0065e644 @ 0065e644 size=1364 calls_out=3 calls_in=0
// strings: invalid match span

undefined4 FUN_0065e644(int param_1,uint *param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int local_34;
  uint local_30;
  
  uVar7 = *param_2;
  uVar8 = param_2[1];
  *param_3 = 0;
  if (uVar8 < uVar7) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x28) == 0) || ((char)param_2[4] != '\0')) {
    if (param_3[4] == 1) {
      uVar6 = param_3[5];
      if (param_3[6] == 0) {
        uVar7 = param_3[8];
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x14);
        uVar1 = (uVar6 >> (*(uint *)(param_1 + 0x3c) & 0x1f)) - 2;
        if (uVar5 <= uVar1) goto LAB_0065eb5c;
        uVar4 = param_3[7];
        iVar2 = *(int *)(param_1 + 0x10) + uVar1 * 0xc;
        if (uVar4 < *(uint *)(iVar2 + 8)) goto LAB_0065e744;
        param_3[6] = 0;
        uVar7 = param_3[8] + 1;
        *param_3 = 0;
        param_3[8] = uVar7;
      }
    }
    else {
      if ((char)param_2[4] == '\0') {
        uVar6 = *(uint *)(param_1 + 0x150);
        if (uVar6 == 0) goto LAB_0065e8b4;
      }
      else {
        uVar6 = *(uint *)(param_1 + 0x154);
        if (uVar6 == 0) {
          uVar3 = 0;
          goto LAB_0065e8b8;
        }
      }
      if (uVar6 <= *(uint *)(param_1 + 0x14c)) {
        uVar5 = *(uint *)(param_1 + 0x14);
        uVar4 = param_3[7];
        uVar1 = (uVar6 >> (*(uint *)(param_1 + 0x3c) & 0x1f)) - 2;
        if (param_3[6] == 0) {
          uVar4 = 0;
        }
        if (uVar5 <= uVar1) {
LAB_0065eb5c:
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar1,uVar5,&DAT_01d09170);
        }
        iVar2 = *(int *)(param_1 + 0x10) + uVar1 * 0xc;
        if (uVar4 < *(uint *)(iVar2 + 8)) {
LAB_0065e870:
          uVar6 = *(uint *)(param_1 + 0x20);
          uVar8 = *(uint *)(*(int *)(iVar2 + 4) + uVar4 * 4);
          param_3[6] = 1;
          param_3[7] = uVar4 + 1;
          if (uVar6 <= uVar8) {
LAB_0065eb6c:
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar8,uVar6,&DAT_01d09140);
          }
          uVar6 = *(uint *)(*(int *)(param_1 + 0x1c) + uVar8 * 4);
          if (uVar7 < uVar6) {
LAB_0065eb04:
                    /* WARNING: Subroutine does not return */
            FUN_012fb100("invalid match span",0x25,&DAT_01d08fa8);
          }
          *param_3 = 1;
          param_3[1] = uVar7 - uVar6;
          param_3[2] = uVar7;
LAB_0065eaf4:
          param_3[3] = uVar8;
          return 0;
        }
      }
      param_3[4] = 1;
      param_3[5] = uVar6;
      param_3[6] = 0;
      param_3[8] = uVar7;
      *param_3 = 0;
    }
    if (uVar7 < uVar8) {
      uVar1 = param_2[3];
      uVar5 = param_2[2];
      uVar4 = uVar1;
      if (uVar1 < uVar7) {
        uVar4 = uVar7;
      }
      do {
        if (uVar4 == uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar4,uVar1,&DAT_01c03ca8);
        }
        uVar6 = uVar6 + *(byte *)(param_1 + 0x40 + (uint)*(byte *)(uVar5 + uVar7));
        if (*(uint *)(param_1 + 8) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar6,*(uint *)(param_1 + 8),&DAT_01d09130);
        }
        uVar6 = *(uint *)(*(int *)(param_1 + 4) + uVar6 * 4);
        if (uVar6 <= *(uint *)(param_1 + 0x148)) {
          param_3[4] = 1;
          param_3[5] = uVar6;
          if (uVar6 == 0) {
            return 0;
          }
          if (uVar6 <= *(uint *)(param_1 + 0x14c)) goto LAB_0065ea78;
        }
        uVar7 = uVar7 + 1;
        param_3[8] = uVar7;
      } while (uVar8 != uVar7);
    }
  }
  else {
    if (param_3[4] == 1) {
      uVar6 = param_3[5];
      if (param_3[6] == 0) {
        uVar7 = param_3[8];
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x14);
        uVar1 = (uVar6 >> (*(uint *)(param_1 + 0x3c) & 0x1f)) - 2;
        if (uVar5 <= uVar1) goto LAB_0065eb5c;
        uVar4 = param_3[7];
        iVar2 = *(int *)(param_1 + 0x10) + uVar1 * 0xc;
        if (uVar4 < *(uint *)(iVar2 + 8)) {
LAB_0065e744:
          iVar2 = *(int *)(iVar2 + 4);
          param_3[7] = uVar4 + 1;
          uVar7 = param_3[8];
          uVar8 = *(uint *)(iVar2 + uVar4 * 4);
          uVar6 = *(uint *)(param_1 + 0x20);
          param_3[6] = 1;
          if (uVar6 <= uVar8) goto LAB_0065eb6c;
          goto LAB_0065ead0;
        }
        param_3[6] = 0;
        uVar7 = param_3[8] + 1;
        *param_3 = 0;
        param_3[8] = uVar7;
      }
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x150);
      if (uVar6 == 0) {
LAB_0065e8b4:
        uVar3 = 1;
LAB_0065e8b8:
        uVar3 = FUN_00660e80(uVar3);
        return uVar3;
      }
      if (uVar6 <= *(uint *)(param_1 + 0x14c)) {
        uVar5 = *(uint *)(param_1 + 0x14);
        uVar4 = param_3[7];
        uVar1 = (uVar6 >> (*(uint *)(param_1 + 0x3c) & 0x1f)) - 2;
        if (param_3[6] == 0) {
          uVar4 = 0;
        }
        if (uVar5 <= uVar1) goto LAB_0065eb5c;
        iVar2 = *(int *)(param_1 + 0x10) + uVar1 * 0xc;
        if (uVar4 < *(uint *)(iVar2 + 8)) goto LAB_0065e870;
      }
      param_3[4] = 1;
      param_3[5] = uVar6;
      param_3[6] = 0;
      param_3[8] = uVar7;
      *param_3 = 0;
    }
    if (uVar7 < uVar8) {
      uVar4 = param_2[2];
      uVar1 = param_2[3];
      do {
        if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar7,uVar1,&DAT_01c03ca8);
        }
        uVar6 = uVar6 + *(byte *)(param_1 + 0x40 + (uint)*(byte *)(uVar4 + uVar7));
        if (*(uint *)(param_1 + 8) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar6,*(uint *)(param_1 + 8),&DAT_01d09130);
        }
        uVar6 = *(uint *)(*(int *)(param_1 + 4) + uVar6 * 4);
        if (*(uint *)(param_1 + 0x148) < uVar6) {
          uVar5 = uVar7 + 1;
        }
        else {
          param_3[4] = 1;
          param_3[5] = uVar6;
          if (uVar6 == 0) {
            return 0;
          }
          if (uVar6 <= *(uint *)(param_1 + 0x14c)) goto LAB_0065ea78;
          (**(code **)(*(int *)(param_1 + 0x2c) + 0x10))
                    (&local_34,
                     *(int *)(param_1 + 0x28) +
                     (*(int *)(*(int *)(param_1 + 0x2c) + 8) - 1U & 0xfffffff8) + 8,uVar4,uVar1,
                     uVar7,uVar8);
          if (local_34 == 0) {
            return 0;
          }
          uVar5 = local_30;
          if (local_30 <= uVar7) {
            uVar5 = uVar7 + 1;
          }
        }
        param_3[8] = uVar5;
        uVar7 = uVar5;
      } while (uVar5 < uVar8);
    }
  }
  param_3[4] = 1;
  param_3[5] = uVar6;
  return 0;
LAB_0065ea78:
  uVar8 = *(uint *)(param_1 + 0x3c);
  param_3[6] = 1;
  param_3[7] = 1;
  uVar8 = (uVar6 >> (uVar8 & 0x1f)) - 2;
  if (*(uint *)(param_1 + 0x14) <= uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar8,*(uint *)(param_1 + 0x14),&DAT_01d09150);
  }
  iVar2 = *(int *)(param_1 + 0x10) + uVar8 * 0xc;
  if (*(int *)(iVar2 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(0,0,&DAT_01d09160);
  }
  uVar6 = *(uint *)(param_1 + 0x20);
  uVar8 = **(uint **)(iVar2 + 4);
  if (uVar6 <= uVar8) goto LAB_0065eb6c;
LAB_0065ead0:
  uVar7 = uVar7 + 1;
  uVar6 = *(uint *)(*(int *)(param_1 + 0x1c) + uVar8 * 4);
  if (uVar7 < uVar6) goto LAB_0065eb04;
  *param_3 = 1;
  param_3[1] = uVar7 - uVar6;
  param_3[2] = uVar7;
  goto LAB_0065eaf4;
}

