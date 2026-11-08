// FUN_019d2860 @ 019d2860 size=712 calls_out=1 calls_in=0
// strings: 

void FUN_019d2860(undefined4 *param_1,char param_2,byte *param_3,uint param_4)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  bool bVar8;
  
  if (param_2 == '\x02') {
    if ((param_4 != 0) && (*param_3 - 0x30 < 10)) {
      pbVar2 = param_3 + param_4;
      uVar4 = 1;
      pbVar7 = param_3;
      uVar5 = param_4;
      do {
        uVar5 = uVar5 - 1;
        pbVar7 = pbVar7 + 1;
        if (uVar5 == 0) {
          uVar5 = 0;
          goto LAB_019d2a88;
        }
        if (9 < *pbVar7 - 0x30) goto LAB_019d2968;
        bVar8 = uVar4 < 3;
        uVar4 = uVar4 + 1;
      } while (bVar8);
      pbVar7 = param_3 + 4;
      uVar5 = param_4 - 4;
LAB_019d2968:
      pbVar2 = pbVar7;
      uVar4 = param_4 - uVar5;
      if (param_4 < uVar5) goto LAB_019d2b1c;
      param_4 = uVar4;
LAB_019d2a88:
      if (pbVar2 != (byte *)0x0) {
        uVar4 = 0;
        do {
          if (param_4 == 0) {
            *param_1 = pbVar2;
            param_1[1] = uVar5;
            param_1[2] = uVar4;
            return;
          }
          uVar1 = (uint)((ulonglong)uVar4 * 10);
          if ((int)((ulonglong)uVar4 * 10 >> 0x20) != 0) break;
          param_4 = param_4 - 1;
          uVar6 = *param_3 - 0x30 & 0xff;
          uVar4 = uVar1 + uVar6;
          param_3 = param_3 + 1;
        } while (!CARRY4(uVar1,uVar6));
      }
    }
  }
  else if (param_2 == '\x01') {
    uVar4 = 0;
    uVar5 = 0;
    do {
      if ((param_4 == uVar4) || (9 < param_3[uVar4] - 0x30)) goto LAB_019d2ac4;
      uVar4 = uVar4 + 1;
      bVar8 = uVar5 < 3;
      uVar5 = uVar5 + 1;
    } while (bVar8);
    if (param_4 < 4) {
      uVar4 = 4;
LAB_019d2b1c:
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar4,param_4,&DAT_01d28c64);
    }
    if (param_3 + 4 != (byte *)0x0) {
      iVar3 = 0;
      uVar5 = 0;
      do {
        if (iVar3 == 4) {
          *param_1 = param_3 + 4;
          param_1[1] = param_4 - 4;
          param_1[2] = uVar5;
          return;
        }
        uVar4 = (uint)((ulonglong)uVar5 * 10);
        if ((int)((ulonglong)uVar5 * 10 >> 0x20) != 0) break;
        pbVar7 = param_3 + iVar3;
        iVar3 = iVar3 + 1;
        uVar1 = *pbVar7 - 0x30 & 0xff;
        uVar5 = uVar4 + uVar1;
      } while (!CARRY4(uVar4,uVar1));
    }
  }
  else {
    pbVar7 = param_3 + param_4;
    pbVar2 = param_3 + 3;
    uVar5 = param_4;
    uVar4 = 0;
    do {
      uVar1 = 0;
      if (uVar5 == 0) goto LAB_019d29d4;
      if (*param_3 != 0x20) {
        uVar1 = uVar5;
        pbVar7 = param_3;
        goto LAB_019d29d4;
      }
      param_3 = param_3 + 1;
      uVar5 = uVar5 - 1;
      bVar8 = uVar4 < 2;
      uVar4 = uVar4 + 1;
    } while (bVar8);
    uVar1 = param_4 - 3;
    pbVar7 = pbVar2;
LAB_019d29d4:
    uVar4 = 0;
    pbVar2 = pbVar7;
    uVar5 = uVar1;
    if ((param_4 - uVar1 & 0xff) == 4) {
      iVar3 = 0;
    }
    else {
      uVar6 = 0;
      do {
        if ((uVar5 == 0) || (9 < *pbVar2 - 0x30)) goto LAB_019d2ac4;
        uVar6 = uVar6 + 1;
        pbVar2 = pbVar2 + 1;
        uVar5 = uVar5 - 1;
      } while ((uVar6 & 0xff) < (4 - (param_4 - uVar1) & 0xff));
      iVar3 = uVar1 - uVar5;
      if (uVar1 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,iVar3,uVar1,&DAT_01d28c54);
      }
    }
    do {
      if (iVar3 == 0) {
        *param_1 = pbVar2;
        param_1[1] = uVar5;
        param_1[2] = uVar4;
        return;
      }
      uVar1 = (uint)((ulonglong)uVar4 * 10);
      if ((int)((ulonglong)uVar4 * 10 >> 0x20) != 0) break;
      iVar3 = iVar3 + -1;
      uVar6 = *pbVar7 - 0x30 & 0xff;
      uVar4 = uVar1 + uVar6;
      pbVar7 = pbVar7 + 1;
    } while (!CARRY4(uVar1,uVar6));
  }
LAB_019d2ac4:
  *param_1 = 0;
  return;
}

