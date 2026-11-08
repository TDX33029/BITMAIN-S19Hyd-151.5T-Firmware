// FUN_01631008 @ 01631008 size=508 calls_out=1 calls_in=0
// strings: 

void FUN_01631008(undefined4 *param_1,char param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint unaff_r4;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 == '\x02') {
    if ((param_4 != 0) && (*param_3 - 0x30 < 10)) {
      pbVar7 = param_3 + 1;
      uVar6 = param_4 - 1;
      uVar5 = 0;
      if (uVar6 == 0) {
        iVar8 = 1;
        uVar6 = 0;
      }
      else {
        if (param_3[1] - 0x30 < 10) {
          uVar6 = param_4 - 2;
          pbVar7 = param_3 + 2;
        }
        iVar8 = param_4 - uVar6;
        if (param_4 < uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,iVar8,param_4,&DAT_018ac390);
        }
      }
      do {
        if (iVar8 == 0) {
          *param_1 = pbVar7;
          param_1[1] = uVar6;
          param_1[2] = uVar5;
          return;
        }
        uVar2 = (uint)((ulonglong)uVar5 * 10);
        if ((int)((ulonglong)uVar5 * 10 >> 0x20) != 0) break;
        iVar8 = iVar8 + -1;
        uVar3 = *param_3 - 0x30 & 0xff;
        uVar5 = uVar2 + uVar3;
        param_3 = param_3 + 1;
      } while (!CARRY4(uVar2,uVar3));
    }
  }
  else if (param_2 == '\x01') {
    if ((1 < param_4) && (bVar1 = *param_3, 0xf5 < (byte)(bVar1 - 0x3a))) {
      bVar9 = (byte *)0xfffffffd < param_3;
      pbVar7 = param_3 + 2;
      if (pbVar7 != (byte *)0x0) {
        param_3 = (byte *)(uint)param_3[1];
        unaff_r4 = (uint)(param_3 + -0x3a) & 0xff;
        bVar9 = 0xf4 < unaff_r4;
      }
      if (bVar9 && (pbVar7 != (byte *)0x0 && unaff_r4 != 0xf5)) {
        *param_1 = pbVar7;
        param_1[1] = param_4 - 2;
        param_1[2] = ((uint)(param_3 + -0x30) & 0xff) + (uint)(byte)(bVar1 * '\n' + 0x20);
        return;
      }
    }
  }
  else {
    uVar6 = 0;
    if (param_4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = param_4;
      if (*param_3 == 0x20) {
        param_3 = param_3 + 1;
        uVar5 = param_4 - 1;
      }
    }
    uVar4 = 0;
    uVar2 = (uVar5 - param_4) + 2;
    uVar3 = uVar2 & 0xff;
    iVar8 = uVar5 - uVar3;
    do {
      if (uVar3 <= (uVar4 & 0xff)) {
        if (uVar5 < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar3,uVar5,&DAT_018ac380);
        }
        uVar6 = 0;
        pbVar7 = param_3;
        goto LAB_01631160;
      }
      if (uVar5 == uVar6) break;
      pbVar7 = param_3 + uVar6;
      uVar6 = uVar6 + 1;
      uVar4 = uVar4 + 1;
    } while (*pbVar7 - 0x30 < 10);
  }
  goto LAB_016311d8;
  while( true ) {
    uVar3 = uVar3 - 1;
    uVar4 = *pbVar7 - 0x30 & 0xff;
    uVar6 = uVar5 + uVar4;
    pbVar7 = pbVar7 + 1;
    if (CARRY4(uVar5,uVar4)) break;
LAB_01631160:
    if (uVar3 == 0) {
      *param_1 = param_3 + (uVar2 & 0xff);
      param_1[1] = iVar8;
      param_1[2] = uVar6;
      return;
    }
    uVar5 = (uint)((ulonglong)uVar6 * 10);
    if ((int)((ulonglong)uVar6 * 10 >> 0x20) != 0) break;
  }
LAB_016311d8:
  *param_1 = 0;
  return;
}

