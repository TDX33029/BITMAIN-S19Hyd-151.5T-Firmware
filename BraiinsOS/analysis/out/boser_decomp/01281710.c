// FUN_01281710 @ 01281710 size=204 calls_out=4 calls_in=4
// strings: 

void FUN_01281710(undefined4 *param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 local_2c [4];
  uint local_28;
  
  if (param_4 != 0) {
    do {
      uVar1 = FUN_01bf053e(param_2,param_3,param_4);
      if (uVar1 == 0xffffffff) {
        puVar2 = (uint *)FUN_01be3244();
        local_2c[0] = 0;
        local_28 = *puVar2;
        if (*puVar2 != 4) {
          puVar4 = (undefined4 *)local_2c;
          goto LAB_012817b8;
        }
        FUN_0069603c(local_2c);
      }
      else {
        local_28 = uVar1;
        local_2c[0] = 4;
        puVar4 = &DAT_01d2e7c8;
        if (uVar1 == 0) {
LAB_012817b8:
          uVar3 = puVar4[1];
          *param_1 = *puVar4;
          param_1[1] = uVar3;
          return;
        }
        if (param_4 < uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar1,param_4,param_4,&DAT_01d2e7d0);
        }
        param_3 = param_3 + uVar1;
        param_4 = param_4 - uVar1;
      }
    } while (param_4 != 0);
  }
  *(undefined1 *)param_1 = 4;
  return;
}

