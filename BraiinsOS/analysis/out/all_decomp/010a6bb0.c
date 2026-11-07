// FUN_010a6bb0 @ 010a6bb0 size=384 calls_out=2 calls_in=7
// strings: 

void FUN_010a6bb0(undefined4 *param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  undefined2 uVar5;
  uint uVar6;
  int local_40;
  int local_3c;
  undefined4 local_34;
  int local_30;
  uint uStack_2c;
  undefined4 uStack_28;
  uint local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  uStack_28 = 0;
  local_1c = 1;
  local_34 = 0x3a;
  local_20 = 0x3a;
  local_30 = param_2;
  uStack_2c = param_3;
  local_24 = param_3;
  FUN_010a67d0(&local_40,&local_34);
  if (local_40 != 1) {
    *param_1 = 0;
    return;
  }
  uVar3 = local_3c + 1;
  if (local_3c != -1) {
    if (uVar3 < param_3) {
      if (*(char *)(param_2 + uVar3) < -0x40) {
LAB_010a6c24:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(param_2,param_3,uVar3,param_3,&DAT_0188458c);
      }
    }
    else if (param_3 != uVar3) goto LAB_010a6c24;
  }
  param_3 = param_3 - uVar3;
  if (param_3 != 0) {
    pbVar1 = (byte *)(param_2 + uVar3);
    if (param_3 == 1) {
      bVar2 = *pbVar1;
      if (bVar2 == 0x2b || bVar2 == 0x2d) goto LAB_010a6d20;
    }
    else {
      bVar2 = *pbVar1;
    }
    uVar3 = param_3;
    pbVar4 = pbVar1;
    if (bVar2 == 0x2b) {
      pbVar4 = pbVar1 + 1;
      uVar3 = param_3 - 1;
    }
    uVar6 = 0;
    uVar5 = 0;
    if (uVar3 < 5) {
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        bVar2 = *pbVar4;
        if (9 < bVar2 - 0x30) goto LAB_010a6d20;
        pbVar4 = pbVar4 + 1;
        uVar6 = (bVar2 - 0x30) + uVar6 * 10;
        uVar5 = (undefined2)uVar6;
      }
LAB_010a6cc8:
      *(undefined2 *)(param_1 + 2) = uVar5;
      *param_1 = pbVar1;
      param_1[1] = param_3;
      return;
    }
    do {
      uVar5 = (undefined2)uVar6;
      if (uVar3 == 0) goto LAB_010a6cc8;
      uVar6 = (uVar6 & 0xffff) * 4 + (uVar6 & 0xffff);
      if (uVar6 >> 0xf != 0) break;
      if (9 < *pbVar4 - 0x30) break;
      uVar6 = (uVar6 * 2 & 0xffff) + (*pbVar4 - 0x30 & 0xffff);
      uVar3 = uVar3 - 1;
      pbVar4 = pbVar4 + 1;
    } while (uVar6 >> 0x10 == 0);
  }
LAB_010a6d20:
  *param_1 = 0;
  return;
}

