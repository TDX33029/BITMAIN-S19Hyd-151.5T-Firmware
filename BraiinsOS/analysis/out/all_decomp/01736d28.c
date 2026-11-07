// FUN_01736d28 @ 01736d28 size=364 calls_out=4 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ec/ec.c | /aws-lc/crypto/fipsmodule/ec/ec.c

void FUN_01736d28(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined4 extraout_r1_00;
  undefined1 *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined1 auStack_a4 [68];
  undefined1 auStack_60 [68];
  uint local_1c;
  
  local_1c = DAT_018ddaf8;
  if (*(int *)*param_1 == 0) {
    FUN_016e9cd0(0xf,0,0x42,"/aws-lc/crypto/fipsmodule/ec/ec.c",0x26d);
    uVar2 = extraout_r1;
  }
  else {
    iVar1 = FUN_01736960(param_1,*param_2,0);
    if (iVar1 == 0) {
      if (param_3 == 0) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = auStack_a4;
      }
      if (param_4 == 0) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        puVar4 = auStack_60;
      }
      uVar6 = (**(code **)*param_1)(param_1,param_2 + 1,puVar3,puVar4);
      uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if ((int)uVar6 != 0) {
        if (param_3 != 0) {
          uVar6 = FUN_0172ea24(param_1,param_3,auStack_a4);
          uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
          if ((int)uVar6 == 0) goto LAB_01736e28;
        }
        if (param_4 == 0) {
          bVar5 = true;
        }
        else {
          uVar6 = FUN_0172ea24(param_1,param_4,auStack_60);
          uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
          bVar5 = (int)uVar6 != 0;
        }
        goto LAB_01736e2c;
      }
    }
    else {
      FUN_016e9cd0(0xf,0,0x6a,"/aws-lc/crypto/fipsmodule/ec/ec.c",0x271);
      uVar2 = extraout_r1_00;
    }
  }
LAB_01736e28:
  bVar5 = false;
LAB_01736e2c:
  if ((local_1c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(bVar5,uVar2,local_1c ^ DAT_018ddaf8,0);
  }
  return;
}

