// FUN_019d2b34 @ 019d2b34 size=660 calls_out=1 calls_in=0
// strings: 

void FUN_019d2b34(undefined4 *param_1,char param_2,byte *param_3,uint param_4)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  bool bVar8;
  uint uVar9;
  
  if (param_2 == '\x02') {
    if ((param_4 != 0) && (*param_3 - 0x30 < 10)) {
      pbVar7 = param_3 + 1;
      uVar9 = param_4 - 1;
      uVar3 = 0;
      if (uVar9 == 0) {
        iVar4 = 1;
        uVar9 = 0;
      }
      else {
        if (*pbVar7 - 0x30 < 10) {
          uVar9 = param_4 - 2;
        }
        iVar4 = param_4 - uVar9;
        if (param_4 < uVar9) goto LAB_019d2dbc;
        if (*pbVar7 - 0x30 < 10) {
          pbVar7 = param_3 + 2;
        }
        if (pbVar7 == (byte *)0x0) goto LAB_019d2d68;
      }
      do {
        if (iVar4 == 0) {
          *(char *)(param_1 + 2) = (char)uVar3;
          goto LAB_019d2d80;
        }
        uVar5 = (uVar3 & 0xff) * 4 + (uVar3 & 0xff);
        if (uVar5 >> 7 != 0) break;
        iVar4 = iVar4 + -1;
        uVar3 = ((uint)*param_3 + uVar5 * 2) - 0x30;
        param_3 = param_3 + 1;
      } while ((uVar5 * 2 & 0xff) <= (uVar3 & 0xff));
    }
  }
  else if (param_2 == '\x01') {
    pbVar7 = param_3 + 2;
    uVar9 = param_4 - 2;
    uVar3 = 0;
    bVar2 = true;
    do {
      bVar8 = bVar2;
      if ((param_4 == uVar3) || (9 < param_3[uVar3] - 0x30)) goto LAB_019d2d68;
      uVar3 = uVar3 + 1;
      bVar2 = false;
    } while (bVar8);
    if (param_4 < 2) {
      iVar4 = 2;
LAB_019d2dbc:
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,iVar4,param_4,&DAT_01d28c64);
    }
    if (pbVar7 != (byte *)0x0) {
      iVar4 = 0;
      uVar3 = 0;
      do {
        if (iVar4 == 2) {
          *(char *)(param_1 + 2) = (char)uVar3;
LAB_019d2d80:
          *param_1 = pbVar7;
          param_1[1] = uVar9;
          return;
        }
        uVar5 = (uVar3 & 0xff) * 4 + (uVar3 & 0xff);
        if (uVar5 >> 7 != 0) break;
        pbVar1 = param_3 + iVar4;
        iVar4 = iVar4 + 1;
        uVar3 = ((uint)*pbVar1 + uVar5 * 2) - 0x30;
      } while ((uVar5 * 2 & 0xff) <= (uVar3 & 0xff));
    }
  }
  else {
    uVar3 = 0;
    if (param_4 == 0) {
      uVar9 = 0;
    }
    else if (*param_3 == 0x20) {
      param_3 = param_3 + 1;
      uVar9 = param_4 - 1;
    }
    else {
      uVar9 = param_4;
    }
    uVar5 = uVar9;
    pbVar7 = param_3;
    if ((param_4 - uVar9 & 0xff) != 2) {
      do {
        if ((uVar5 == 0) || (9 < *pbVar7 - 0x30)) goto LAB_019d2d68;
        uVar3 = uVar3 + 1;
        pbVar7 = pbVar7 + 1;
        uVar5 = uVar5 - 1;
      } while ((uVar3 & 0xff) < (2 - (param_4 - uVar9) & 0xff));
      uVar3 = uVar9 - uVar5;
      if (uVar9 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar3,uVar9,&DAT_01d28c54);
      }
    }
    uVar9 = 0;
    do {
      if (uVar3 == 0) {
        *param_1 = pbVar7;
        *(char *)(param_1 + 2) = (char)uVar9;
        param_1[1] = uVar5;
        return;
      }
      uVar6 = (uVar9 & 0xff) * 4 + (uVar9 & 0xff);
      if (uVar6 >> 7 != 0) break;
      uVar3 = uVar3 - 1;
      uVar9 = ((uint)*param_3 + uVar6 * 2) - 0x30;
      param_3 = param_3 + 1;
    } while ((uVar6 * 2 & 0xff) <= (uVar9 & 0xff));
  }
LAB_019d2d68:
  *param_1 = 0;
  return;
}

