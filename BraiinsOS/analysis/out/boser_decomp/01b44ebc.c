// FUN_01b44ebc @ 01b44ebc size=360 calls_out=4 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ec/ec.c | /aws-lc/crypto/fipsmodule/ec/ec.c

void FUN_01b44ebc(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined1 auStack_ac [68];
  undefined1 auStack_68 [68];
  uint local_24;
  
  local_24 = DAT_01d53560;
  if (*(int *)*param_1 == 0) {
    uVar7 = 0x26d;
    uVar2 = 0x42;
LAB_01b44f20:
    FUN_01b053d4(0xf,0,uVar2,"/aws-lc/crypto/fipsmodule/ec/ec.c",uVar7);
    uVar2 = extraout_r1;
  }
  else {
    iVar1 = FUN_01b44b4c(param_1,*param_2,0);
    if (iVar1 != 0) {
      uVar7 = 0x271;
      uVar2 = 0x6a;
      goto LAB_01b44f20;
    }
    if (param_3 == 0) {
      puVar3 = (undefined1 *)0x0;
    }
    else {
      puVar3 = auStack_ac;
    }
    if (param_4 == 0) {
      puVar4 = (undefined1 *)0x0;
    }
    else {
      puVar4 = auStack_68;
    }
    uVar6 = (**(code **)*param_1)(param_1,param_2 + 1,puVar3,puVar4);
    uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 != 0) {
      if (param_3 != 0) {
        uVar6 = FUN_01b3eaa4(param_1,param_3,auStack_ac);
        uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if ((int)uVar6 == 0) goto LAB_01b44f28;
      }
      if (param_4 == 0) {
        bVar5 = true;
      }
      else {
        uVar6 = FUN_01b3eaa4(param_1,param_4,auStack_68);
        uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
        bVar5 = (int)uVar6 != 0;
      }
      goto LAB_01b44f2c;
    }
  }
LAB_01b44f28:
  bVar5 = false;
LAB_01b44f2c:
  if ((local_24 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(bVar5,uVar2,local_24 ^ DAT_01d53560,0);
  }
  return;
}

