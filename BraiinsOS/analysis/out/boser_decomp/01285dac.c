// FUN_01285dac @ 01285dac size=376 calls_out=2 calls_in=1
// strings: 

void FUN_01285dac(int *param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_5 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00475db0,0x1c,&DAT_01c25c38);
  }
  if (param_3 < param_4) {
    *param_1 = 0;
    uVar3 = 4;
LAB_01285dd8:
    *(undefined1 *)(param_1 + 1) = uVar3;
  }
  else {
    uVar5 = 0;
    uVar9 = 0;
    for (uVar4 = 0; param_5 != uVar4 && param_3 != uVar4; uVar4 = uVar4 + 1) {
      uVar7 = *(byte *)(param_2 + uVar4) - 0x30 & 0xff;
      if (9 < uVar7) {
        if (uVar4 < param_4) {
          *param_1 = 0;
          uVar3 = 3;
          goto LAB_01285dd8;
        }
        if (uVar4 < param_3) {
          if (-0x41 < *(char *)(param_2 + uVar4)) {
LAB_01285ed4:
            *param_1 = (int)(param_2 + uVar4);
            param_1[1] = param_3 - uVar4;
            goto LAB_01285e84;
          }
        }
        else if (param_3 == uVar4) goto LAB_01285ed4;
        uVar2 = 0x1c263a0;
        goto LAB_01285f10;
      }
      uVar8 = (uint)((ulonglong)uVar5 * 10);
      lVar1 = (longlong)(int)uVar9 * 10 + ((ulonglong)uVar5 * 10 >> 0x20);
      uVar6 = (uint)lVar1;
      uVar5 = (uint)((ulonglong)lVar1 >> 0x20);
      if (uVar5 != (int)uVar6 >> 0x1f || (int)(uVar5 ^ uVar6) < 0) {
LAB_01285efc:
        uVar3 = 0;
        *param_1 = 0;
        goto LAB_01285dd8;
      }
      uVar5 = uVar8 + uVar7;
      uVar9 = uVar6 + CARRY4(uVar8,uVar7);
      if ((int)((uVar6 ^ uVar9) & ~uVar6) < 0) goto LAB_01285efc;
    }
    uVar4 = param_5;
    if (param_3 < param_5) {
      uVar4 = param_3;
    }
    if (((param_5 < param_3) && (uVar4 != 0)) && (*(char *)(param_2 + uVar4) < -0x40)) {
      uVar2 = 0x1c26390;
LAB_01285f10:
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(param_2,param_3,uVar4,param_3,uVar2);
    }
    *param_1 = param_2 + uVar4;
    param_1[1] = param_3 - uVar4;
LAB_01285e84:
    param_1[2] = uVar5;
    param_1[3] = uVar9;
  }
  return;
}

