// FUN_0132b9b0 @ 0132b9b0 size=436 calls_out=1 calls_in=4
// strings: 

void FUN_0132b9b0(undefined4 *param_1,int param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  uVar7 = param_4;
  if (param_4 < param_3) {
    do {
      uVar4 = *(byte *)(param_2 + uVar7) - 0x3a;
      if (uVar4 < 0xfffffff6) goto LAB_0132b9e4;
      uVar7 = uVar7 + 1;
    } while (param_3 != uVar7);
    uVar7 = param_3;
LAB_0132b9e4:
    if ((uVar7 < param_4) || ((param_4 != 0 && (*(char *)(param_2 + param_4) < -0x40))))
    goto LAB_0132bb44;
    if (uVar7 == 0) goto LAB_0132ba4c;
    if (0xfffffff5 < uVar4) goto LAB_0132ba3c;
    if (*(char *)(param_2 + uVar7) < -0x40) goto LAB_0132bb44;
  }
  else if (param_4 == 0) {
LAB_0132ba4c:
    uVar7 = 0;
  }
  else {
    if (param_4 != param_3) goto LAB_0132bb44;
LAB_0132ba3c:
    if (uVar7 != param_3) {
LAB_0132bb44:
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(param_2,param_3,param_4,uVar7,&DAT_01ce60ec);
    }
    uVar7 = param_3;
  }
  uVar4 = uVar7 - param_4;
  if (uVar4 == 0) {
    uVar8 = 0;
  }
  else {
    pbVar1 = (byte *)(param_2 + param_4);
    if (uVar4 == 1) {
      bVar3 = *pbVar1;
      uVar8 = 0;
      if ((bVar3 == 0x2b) || (bVar3 == 0x2d)) goto LAB_0132bb30;
    }
    else {
      bVar3 = *pbVar1;
    }
    if (bVar3 == 0x2b) {
      pbVar1 = pbVar1 + 1;
      uVar4 = uVar4 - 1;
    }
    if (uVar4 < 9) {
      if (uVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar8 = 0;
        uVar5 = 0;
        do {
          bVar3 = *pbVar1;
          if (9 < bVar3 - 0x30) goto LAB_0132bb30;
          pbVar1 = pbVar1 + 1;
          uVar4 = uVar4 - 1;
          uVar5 = (bVar3 - 0x30) + uVar5 * 10;
        } while (uVar4 != 0);
      }
LAB_0132bb24:
      uVar8 = 1;
      param_1[1] = uVar7;
      param_1[2] = uVar5;
    }
    else {
      uVar5 = 0;
      uVar8 = 0;
      do {
        if (uVar4 == 0) goto LAB_0132bb24;
        uVar6 = (uint)((ulonglong)uVar5 * 10);
        if ((int)((ulonglong)uVar5 * 10 >> 0x20) != 0) {
          uVar8 = 0;
          break;
        }
        uVar2 = *pbVar1 - 0x30;
        uVar5 = uVar2 + uVar6;
        if (9 < uVar2) break;
        uVar4 = uVar4 - 1;
        pbVar1 = pbVar1 + 1;
      } while (!CARRY4(uVar2,uVar6));
    }
  }
LAB_0132bb30:
  *param_1 = uVar8;
  return;
}

