// FUN_0126555c @ 0126555c size=192 calls_out=3 calls_in=1
// strings: 

void FUN_0126555c(undefined4 *param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 local_28 [4];
  uint local_24;
  
  if (param_4 != 0) {
    do {
      uVar1 = FUN_01bf053e(param_2,param_3,param_4);
      if (uVar1 == 0xffffffff) {
        puVar2 = (uint *)FUN_01be3244();
        local_28[0] = 0;
        local_24 = *puVar2;
        if (*puVar2 != 4) {
          puVar4 = (undefined4 *)local_28;
          goto LAB_012655f8;
        }
      }
      else {
        local_24 = uVar1;
        local_28[0] = 4;
        puVar4 = &DAT_01d2e7c8;
        if (uVar1 == 0) {
LAB_012655f8:
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

