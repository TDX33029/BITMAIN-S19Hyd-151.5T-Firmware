// FUN_018ed6b4 @ 018ed6b4 size=280 calls_out=4 calls_in=3
// strings: 

void FUN_018ed6b4(undefined4 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar6 = FUN_0192fac8(param_2,1);
  if (((byte *)uVar6 == (byte *)0x0) || ((int)((ulonglong)uVar6 >> 0x20) != 1)) {
    uVar2 = 2;
    *(undefined1 *)(param_1 + 1) = 0xc;
    puVar1 = &DAT_005239af;
    *param_1 = 1;
  }
  else {
    uVar5 = (uint)*(byte *)uVar6;
    if (uVar5 < 0x21) {
      uVar6 = FUN_0192fac8(param_2,uVar5);
      uVar3 = (uint)((ulonglong)uVar6 >> 0x20);
      if ((int)uVar6 != 0) {
        FUN_01bed93e(&local_40,0,0x20);
        if (uVar3 < uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar5,uVar3,&DAT_01d233e0);
        }
        FUN_01bed4e2(&local_40,(int)uVar6,uVar5);
        param_1[1] = local_40;
        param_1[2] = uStack_3c;
        param_1[3] = uStack_38;
        param_1[4] = uStack_34;
        param_1[5] = local_30;
        param_1[6] = uStack_2c;
        param_1[7] = uStack_28;
        param_1[8] = uStack_24;
        *param_1 = 0;
        param_1[9] = uVar5;
        return;
      }
      uVar4 = 0xc;
    }
    else {
      uVar4 = 0xf;
    }
    puVar1 = &DAT_00520f2d;
    uVar2 = 9;
    *(undefined1 *)(param_1 + 1) = uVar4;
    *param_1 = 1;
  }
  param_1[2] = puVar1;
  param_1[3] = uVar2;
  return;
}

