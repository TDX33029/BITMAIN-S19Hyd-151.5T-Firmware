// FUN_019a7368 @ 019a7368 size=284 calls_out=5 calls_in=2
// strings: 

void FUN_019a7368(uint *param_1,undefined4 *param_2,int param_3,uint param_4)

{
  undefined4 *puVar1;
  uint extraout_r2;
  uint extraout_r2_00;
  uint uVar2;
  int unaff_r4;
  uint *puVar3;
  undefined8 uVar4;
  undefined1 local_28 [4];
  
  puVar3 = (uint *)local_28;
  if (param_2[4] != 0) {
    FUN_01306fc8(&DAT_01d280d0);
    *(int *)(unaff_r4 + 0x10) = *(int *)(unaff_r4 + 0x10) + 1;
                    /* WARNING: Subroutine does not return */
    FUN_01be040c();
  }
  param_2[4] = 0xffffffff;
  puVar1 = param_2;
  if (param_4 != 0) {
    do {
      uVar4 = FUN_01bf053e(2,param_3,param_4);
      puVar1 = (undefined4 *)((ulonglong)uVar4 >> 0x20);
      uVar2 = (uint)uVar4;
      if (uVar2 == 0xffffffff) {
        puVar1 = (undefined4 *)FUN_01be3244();
        puVar1 = (undefined4 *)*puVar1;
        local_28[0] = 0;
        if (puVar1 != (undefined4 *)0x4) {
          uVar2 = extraout_r2;
          goto LAB_019a7424;
        }
      }
      else {
        local_28[0] = 4;
        if (uVar2 == 0) {
          puVar1 = &DAT_01d2e7b8;
          uVar2 = extraout_r2_00;
          puVar3 = &DAT_01d2e7c8;
LAB_019a7424:
          if (puVar1 == (undefined4 *)0x9) {
            uVar2 = *puVar3 & 0xff;
          }
          if (puVar1 == (undefined4 *)0x9 && uVar2 == 0) {
            *(undefined1 *)param_1 = 4;
          }
          else {
            *param_1 = *puVar3;
            param_1[1] = (uint)puVar1;
          }
          goto LAB_019a7440;
        }
        if (param_4 < uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar2,param_4,param_4,&DAT_01d27754);
        }
        param_3 = param_3 + uVar2;
        param_4 = param_4 - uVar2;
      }
    } while (param_4 != 0);
  }
  *param_1 = 4;
  param_1[1] = (uint)puVar1;
LAB_019a7440:
  param_2[4] = param_2[4] + 1;
  return;
}

