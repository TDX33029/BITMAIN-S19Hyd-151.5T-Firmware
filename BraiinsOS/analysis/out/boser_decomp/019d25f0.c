// FUN_019d25f0 @ 019d25f0 size=612 calls_out=1 calls_in=0
// strings: 

void FUN_019d25f0(undefined4 *param_1,char param_2,byte *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  bool bVar8;
  
  if (param_2 == '\x02') {
    if ((param_4 != 0) && (*param_3 - 0x30 < 10)) {
      pbVar7 = param_3 + 1;
      uVar3 = param_4 - 1;
      uVar1 = 0;
      if (uVar3 == 0) {
        iVar2 = 1;
        uVar3 = 0;
      }
      else {
        if (*pbVar7 - 0x30 < 10) {
          uVar3 = param_4 - 2;
        }
        iVar2 = param_4 - uVar3;
        if (param_4 < uVar3) goto LAB_019d2848;
        if (*pbVar7 - 0x30 < 10) {
          pbVar7 = param_3 + 2;
        }
        if (pbVar7 == (byte *)0x0) goto LAB_019d27ec;
      }
      do {
        if (iVar2 == 0) {
          *param_1 = pbVar7;
          param_1[1] = uVar3;
          goto LAB_019d27fc;
        }
        uVar5 = (uint)((ulonglong)uVar1 * 10);
        if ((int)((ulonglong)uVar1 * 10 >> 0x20) != 0) break;
        iVar2 = iVar2 + -1;
        uVar4 = *param_3 - 0x30 & 0xff;
        uVar1 = uVar5 + uVar4;
        param_3 = param_3 + 1;
      } while (!CARRY4(uVar5,uVar4));
    }
  }
  else if (param_2 == '\x01') {
    uVar1 = 1;
    uVar3 = 0;
    do {
      if ((param_4 == uVar3) || (9 < param_3[uVar3] - 0x30)) goto LAB_019d27ec;
      uVar3 = uVar3 + 1;
      bVar8 = uVar1 != 0;
      uVar1 = 0;
    } while (bVar8);
    if (param_4 < 2) {
      iVar2 = 2;
LAB_019d2848:
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,iVar2,param_4,&DAT_01d28c64);
    }
    if (param_3 + 2 != (byte *)0x0) {
      iVar2 = 0;
      do {
        if (iVar2 == 2) {
          *param_1 = param_3 + 2;
          param_1[1] = param_4 - 2;
          param_1[2] = uVar1;
          return;
        }
        uVar3 = (uint)((ulonglong)uVar1 * 10);
        if ((int)((ulonglong)uVar1 * 10 >> 0x20) != 0) break;
        pbVar7 = param_3 + iVar2;
        iVar2 = iVar2 + 1;
        uVar5 = *pbVar7 - 0x30 & 0xff;
        uVar1 = uVar3 + uVar5;
      } while (!CARRY4(uVar3,uVar5));
    }
  }
  else {
    uVar3 = 0;
    if (param_4 == 0) {
      uVar1 = 0;
    }
    else if (*param_3 == 0x20) {
      param_3 = param_3 + 1;
      uVar1 = param_4 - 1;
    }
    else {
      uVar1 = param_4;
    }
    uVar5 = uVar1;
    pbVar7 = param_3;
    if ((param_4 - uVar1 & 0xff) != 2) {
      do {
        if ((uVar5 == 0) || (9 < *pbVar7 - 0x30)) goto LAB_019d27ec;
        uVar3 = uVar3 + 1;
        pbVar7 = pbVar7 + 1;
        uVar5 = uVar5 - 1;
      } while ((uVar3 & 0xff) < (2 - (param_4 - uVar1) & 0xff));
      uVar3 = uVar1 - uVar5;
      if (uVar1 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar3,uVar1,&DAT_01d28c54);
      }
    }
    uVar1 = 0;
    do {
      if (uVar3 == 0) {
        *param_1 = pbVar7;
        param_1[1] = uVar5;
LAB_019d27fc:
        param_1[2] = uVar1;
        return;
      }
      uVar4 = (uint)((ulonglong)uVar1 * 10);
      if ((int)((ulonglong)uVar1 * 10 >> 0x20) != 0) break;
      uVar3 = uVar3 - 1;
      uVar6 = *param_3 - 0x30 & 0xff;
      uVar1 = uVar4 + uVar6;
      param_3 = param_3 + 1;
    } while (!CARRY4(uVar4,uVar6));
  }
LAB_019d27ec:
  *param_1 = 0;
  return;
}

