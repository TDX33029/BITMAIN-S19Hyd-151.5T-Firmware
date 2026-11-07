// FUN_01903790 @ 01903790 size=332 calls_out=3 calls_in=0
// strings: 

void FUN_01903790(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int local_48 [5];
  int local_34;
  int iStack_30;
  int iStack_2c;
  
  (**(code **)(param_5 + 0x10))(local_48,param_4,param_6,param_7,&DAT_00523a3e);
  piVar4 = (int *)((uint)local_48 | 4);
  iVar5 = *piVar4;
  puVar6 = (undefined1 *)piVar4[1];
  uVar7 = piVar4[2];
  uVar8 = piVar4[3];
  if (local_48[0] == -0x7fffffd7) {
    if (uVar7 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar8,uVar7,uVar7,&DAT_01d250a8);
    }
    FUN_019038fc(param_2,param_3,0x30,puVar6 + uVar8,uVar7 - uVar8,param_8,param_9,param_10,param_11
                );
    puVar3 = puVar6;
    for (; iVar1 = iVar5, puVar2 = puVar6, uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    FUN_0134bd64(iVar5,puVar6);
    *param_1 = -0x7fffffd7;
  }
  else {
    param_1[5] = local_34;
    param_1[6] = iStack_30;
    param_1[7] = iStack_2c;
    param_1[1] = iVar5;
    param_1[2] = (int)puVar6;
    param_1[3] = uVar7;
    param_1[4] = uVar8;
    *param_1 = local_48[0];
  }
  return;
}

