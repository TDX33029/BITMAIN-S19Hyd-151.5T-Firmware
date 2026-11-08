// FUN_019ba5b8 @ 019ba5b8 size=432 calls_out=5 calls_in=1
// strings: 

void FUN_019ba5b8(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  byte bVar5;
  uint *extraout_r1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_lr;
  undefined8 uVar10;
  undefined1 auStackY_a8 [128];
  
  uVar10 = thunk_FUN_01bee35a(param_1,0x238);
  puVar4 = (uint *)((int)uVar10 + (int)((ulonglong)uVar10 >> 0x20));
  uVar6 = *puVar4;
  uVar7 = puVar4[1];
  if (uVar6 == 0 && uVar7 == 0) {
    ClearExclusiveLocal();
    uVar8 = DAT_01d51ab8;
    uVar9 = DAT_01d51abc;
    do {
      uVar3 = DAT_01d51abc;
      uVar2 = DAT_01d51ab8;
      uVar6 = uVar8 + 1;
      uVar7 = uVar9 + (0xfffffffe < uVar8);
      if (CARRY4(uVar9,(uint)(0xfffffffe < uVar8))) {
        FUN_019a7340();
        param_2 = extraout_r1;
        goto LAB_014d1fa4;
      }
      if (DAT_01d51ab8 == uVar8 && DAT_01d51abc == uVar9) {
        bVar1 = (bool)hasExclusiveAccess(0x1d51ab8);
        if (bVar1) {
          DAT_01d51ab8 = uVar6;
          DAT_01d51abc = uVar7;
        }
        bVar5 = 0;
        if (bVar1) {
          bVar5 = 0xff;
        }
      }
      else {
        bVar5 = 0;
        ClearExclusiveLocal();
      }
      uVar8 = uVar2;
      uVar9 = uVar3;
    } while (!(bool)(bVar5 & 1));
    *puVar4 = uVar6;
    puVar4[1] = uVar7;
  }
  ClearExclusiveLocal();
  if (uVar6 == *param_2 && uVar7 == param_2[1]) {
    uVar6 = param_2[3] + 1;
    if (param_2[3] == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_00526837,0x26,&DAT_01d27c2c);
    }
  }
  else {
    puVar4 = param_2 + 2;
    do {
      if (*puVar4 != 0) {
        ClearExclusiveLocal();
        FUN_0197ade4();
        goto LAB_019ba6bc;
      }
      bVar1 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar1);
    *puVar4 = 1;
    DataMemoryBarrier(0xb);
LAB_019ba6bc:
    do {
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = uVar6;
    param_2[1] = uVar7;
    uVar6 = 1;
  }
  param_2[3] = uVar6;
  FUN_019a7f74(param_1,param_2);
  uVar6 = param_2[3];
  param_2[3] = uVar6 - 1;
  if (uVar6 - 1 == 0) {
    do {
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = 0;
    param_2[1] = 0;
    param_2 = param_2 + 2;
    DataMemoryBarrier(0xb);
    do {
      uVar6 = *param_2;
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = 0;
    if (uVar6 == 2) {
LAB_014d1fa4:
      software_interrupt(0);
      FUN_01be3b5a(param_2,0x81,1,param_5,param_4,auStackY_a8 + 0x9c,unaff_r4,unaff_r5,unaff_r6,
                   unaff_lr,0xf0);
      return;
    }
  }
  return;
}

