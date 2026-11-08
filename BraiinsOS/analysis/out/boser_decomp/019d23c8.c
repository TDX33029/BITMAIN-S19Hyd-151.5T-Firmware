// FUN_019d23c8 @ 019d23c8 size=196 calls_out=4 calls_in=2
// strings: 

void FUN_019d23c8(undefined4 *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 local_28 [4];
  uint local_24;
  
  if (param_3 != 0) {
    do {
      uVar1 = FUN_01bf053e(2,param_2,param_3);
      if (uVar1 == 0xffffffff) {
        puVar2 = (uint *)FUN_01be3244();
        local_28[0] = 0;
        local_24 = *puVar2;
        if (*puVar2 != 4) {
          puVar4 = (undefined4 *)local_28;
          goto LAB_019d2468;
        }
        FUN_0069d8a4(0);
      }
      else {
        local_24 = uVar1;
        local_28[0] = 4;
        puVar4 = &DAT_01d2e7c8;
        if (uVar1 == 0) {
LAB_019d2468:
          uVar3 = puVar4[1];
          *param_1 = *puVar4;
          param_1[1] = uVar3;
          return;
        }
        if (param_3 < uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar1,param_3,param_3,&DAT_01d2e7d0);
        }
        param_2 = param_2 + uVar1;
        param_3 = param_3 - uVar1;
      }
    } while (param_3 != 0);
  }
  *(undefined1 *)param_1 = 4;
  return;
}

