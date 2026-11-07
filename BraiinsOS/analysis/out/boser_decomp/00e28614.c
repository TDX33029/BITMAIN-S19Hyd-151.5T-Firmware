// FUN_00e28614 @ 00e28614 size=692 calls_out=3 calls_in=0
// strings: target_temperature | hot_temperature | dangerous_temperature | target_temperature | hot_temperature | dangerous_temperature

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00e2878c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00e28614(int *param_1,undefined4 *param_2,uint param_3,undefined4 param_4,uint param_5,
                 undefined4 param_6,uint param_7,undefined4 param_8,int param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 in_d0;
  undefined4 uVar5;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int local_a8;
  int local_a4;
  undefined1 auStack_a0 [96];
  
  uVar5 = (undefined4)((ulonglong)in_d0 >> 0x20);
  if ((param_3 & 1) == 0) {
LAB_00e28684:
    if ((param_5 & 1) != 0) {
      FUN_00e291a4(&local_a8,param_9 + 0x48,"hot_temperature",0xf);
      if (local_a8 != 3 || local_a4 != 0) goto LAB_00e288ac;
      param_2[4] = 1;
      param_2[5] = 0;
      *(undefined8 *)(param_2 + 6) = in_d1;
    }
    if ((param_7 & 1) != 0) {
      FUN_00e291a4(&local_a8,param_9 + 0x90,"dangerous_temperature",0x15);
      if (local_a8 != 3 || local_a4 != 0) goto LAB_00e288ac;
      param_2[8] = 1;
      param_2[9] = 0;
      *(undefined8 *)(param_2 + 10) = in_d2;
    }
    uVar6 = *(undefined8 *)(param_2 + 6);
    uVar2 = param_2[4];
    uVar1 = param_2[5];
    uVar3 = *param_2;
    uVar4 = param_2[1];
    uVar7 = *(undefined8 *)(param_2 + 2);
    FUN_00e2923c((int)uVar7,uVar5,(int)uVar6,&local_a8,uVar1,uVar3,uVar4);
    if (local_a8 == 3 && local_a4 == 0) {
      uVar8 = *(undefined8 *)(param_2 + 10);
      FUN_00e2923c((int)uVar7,uVar5,(int)uVar8,&local_a8,"dangerous_temperature",uVar3,uVar4);
      if (local_a8 == 3 && local_a4 == 0) {
        FUN_00e2923c((int)uVar6,uVar5,(int)uVar8,&local_a8,"hot_temperature",uVar2,uVar1);
        if (local_a8 == 3 && local_a4 == 0) {
          FUN_01bed4e2(param_1 + 2,param_2,0x48);
          local_a4 = 0;
          local_a8 = 3;
          goto LAB_00e288b4;
        }
      }
    }
  }
  else {
    FUN_00e291a4(&local_a8,param_9,"target_temperature",0x12);
    if (local_a8 == 3 && local_a4 == 0) {
      *param_2 = 1;
      param_2[1] = 0;
      *(undefined8 *)(param_2 + 2) = in_d0;
      goto LAB_00e28684;
    }
  }
LAB_00e288ac:
  FUN_01bed4e2(param_1 + 2,auStack_a0,0x60);
LAB_00e288b4:
  *param_1 = local_a8;
  param_1[1] = local_a4;
  return;
}

