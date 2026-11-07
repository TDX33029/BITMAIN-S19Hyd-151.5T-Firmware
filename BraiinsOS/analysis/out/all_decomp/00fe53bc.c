// FUN_00fe53bc @ 00fe53bc size=476 calls_out=1 calls_in=4
// strings: 

void FUN_00fe53bc(undefined4 *param_1,int param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = param_4;
  if (param_4 < param_3) {
    do {
      uVar4 = *(byte *)(param_2 + uVar7) - 0x3a;
      if (uVar4 < 0xfffffff6) goto LAB_00fe53f0;
      uVar7 = uVar7 + 1;
    } while (param_3 != uVar7);
    uVar7 = param_3;
LAB_00fe53f0:
    if ((uVar7 < param_4) || ((param_4 != 0 && (*(char *)(param_2 + param_4) < -0x40))))
    goto LAB_00fe5578;
    if (uVar7 != 0) {
      if (uVar4 < 0xfffffff6) {
        if (*(char *)(param_2 + uVar7) < -0x40) goto LAB_00fe5578;
        goto LAB_00fe5464;
      }
      goto LAB_00fe5448;
    }
    uVar7 = 0;
    uVar4 = -param_4;
  }
  else if (param_4 == 0) {
    uVar7 = 0;
LAB_00fe5464:
    uVar4 = uVar7 - param_4;
  }
  else {
    if (param_4 != param_3) goto LAB_00fe5578;
LAB_00fe5448:
    if (uVar7 != param_3) {
LAB_00fe5578:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(param_2,param_3,param_4,uVar7,&DAT_01881758);
    }
    uVar4 = param_3 - param_4;
    uVar7 = param_3;
  }
  if (uVar4 == 0) {
    *param_1 = 0;
    return;
  }
  pbVar1 = (byte *)(param_2 + param_4);
  if (uVar4 == 1) {
    bVar3 = *pbVar1;
    if (bVar3 == 0x2b || bVar3 == 0x2d) goto LAB_00fe548c;
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
      uVar5 = 0;
      do {
        bVar3 = *pbVar1;
        if (9 < bVar3 - 0x30) goto LAB_00fe548c;
        pbVar1 = pbVar1 + 1;
        uVar4 = uVar4 - 1;
        uVar5 = (bVar3 - 0x30) + uVar5 * 10;
      } while (uVar4 != 0);
    }
LAB_00fe5550:
    param_1[1] = uVar7;
    param_1[2] = uVar5;
    *param_1 = 1;
    return;
  }
  uVar5 = 0;
  do {
    if (uVar4 == 0) goto LAB_00fe5550;
    uVar6 = (uint)((ulonglong)uVar5 * 10);
    if ((int)((ulonglong)uVar5 * 10 >> 0x20) != 0) {
      *param_1 = 0;
      return;
    }
    uVar2 = *pbVar1 - 0x30;
    uVar5 = uVar2 + uVar6;
    if (9 < uVar2) break;
    uVar4 = uVar4 - 1;
    pbVar1 = pbVar1 + 1;
  } while (!CARRY4(uVar2,uVar6));
LAB_00fe548c:
  *param_1 = 0;
  return;
}

