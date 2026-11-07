// FUN_01ae7098 @ 01ae7098 size=572 calls_out=2 calls_in=2
// strings: internal error: entered unreachable code | internal error: entered unreachable code

undefined8 FUN_01ae7098(int param_1,uint param_2,uint param_3,char *param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  
  uVar8 = 1;
  iVar1 = FUN_01ae67a8(param_1,param_2,1,1);
  uVar3 = 0x10;
  if (iVar1 != 0) {
    iVar1 = FUN_01ae67a8(param_4,param_5,param_3,0);
    param_3 = param_3 & 0xff;
    if (iVar1 == 0) {
      uVar3 = 0x10;
      if (param_3 == 2) {
        uVar3 = 0x12;
      }
    }
    else {
      uVar4 = 0;
      if (param_3 != 0) {
        if (param_3 != 2) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d30190);
        }
        uVar4 = 0;
        if (param_5 < param_2) {
          if (param_5 == 0) {
            uVar8 = 0;
            uVar3 = 1;
            goto LAB_01ae718c;
          }
          if (*param_4 != '.') {
            uVar4 = param_2 + ~param_5;
            if (param_2 < uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d301a0);
            }
            uVar3 = 0;
            uVar8 = 0;
            if ((param_2 <= uVar4) || (*(char *)(param_1 + uVar4) != '.')) goto LAB_01ae718c;
          }
          uVar4 = param_2 - param_5;
        }
      }
      if ((uVar4 < param_2) && (*(char *)(param_1 + uVar4) == '*')) {
        if (param_5 != 0) {
          uVar4 = uVar4 + 1;
          uVar10 = 0;
          do {
            uVar9 = uVar10 + 1;
            if ((uVar9 < param_5) && (param_4[uVar10 + 1] == '.')) {
              uVar10 = uVar10 + 1;
              goto LAB_01ae7198;
            }
            uVar10 = uVar9;
          } while (param_5 != uVar9);
        }
LAB_01ae7174:
        uVar3 = 0;
      }
      else {
        uVar10 = 0;
LAB_01ae7198:
        iVar7 = param_2 - uVar4;
        pbVar12 = (byte *)(param_1 + uVar4);
        iVar1 = 0;
        if (uVar4 <= param_2) {
          iVar1 = param_2 - uVar4;
        }
        iVar5 = uVar10 + param_2;
        uVar9 = iVar5 - uVar4;
        do {
          if (iVar1 == 0 || param_5 == uVar10) goto LAB_01ae7174;
          uVar2 = (uint)(byte)param_4[uVar10];
          uVar6 = (uint)*pbVar12;
          if (uVar2 - 0x41 < 0x1a) {
            uVar2 = uVar2 | 0x20;
          }
          uVar3 = 0;
          uVar11 = uVar6;
          if (uVar6 - 0x41 < 0x1a) {
            uVar11 = uVar6 | 0x20;
          }
          if (uVar11 != uVar2) goto LAB_01ae7178;
          iVar1 = iVar1 + -1;
          pbVar12 = pbVar12 + 1;
          uVar10 = uVar10 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        uVar3 = 0x10;
        uVar8 = 1;
        if (uVar6 == 0x2e) goto LAB_01ae718c;
        if (uVar9 != param_5) {
          if (param_3 != 2) {
            uVar3 = 0;
            uVar8 = 0;
            if ((param_5 <= uVar9) || (param_4[uVar9] != '.')) goto LAB_01ae718c;
            uVar9 = iVar5 + ~uVar4 + 2;
          }
          uVar3 = 0;
          uVar8 = 0;
          if (uVar9 != param_5) goto LAB_01ae718c;
        }
        uVar3 = 1;
      }
LAB_01ae7178:
      uVar8 = 0;
    }
  }
LAB_01ae718c:
  return CONCAT44(uVar3,uVar8);
}

