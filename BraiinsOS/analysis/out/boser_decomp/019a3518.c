// FUN_019a3518 @ 019a3518 size=244 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_019a3518(uint *param_1,int param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 local_28 [4];
  uint local_24;
  
  if (param_3 != 0) {
    do {
      while (uVar2 = FUN_01bf053e(2,param_2,param_3), uVar2 != 0xffffffff) {
        local_24 = uVar2;
        local_28[0] = 4;
        puVar1 = &DAT_01d2e7c8;
        if (uVar2 == 0) goto LAB_019a35bc;
        if (param_3 < uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar2,param_3,param_3,&DAT_01d27754);
        }
        param_2 = param_2 + uVar2;
        param_3 = param_3 - uVar2;
        if (param_3 == 0) {
          return 0;
        }
      }
      puVar1 = (uint *)FUN_01be3244();
      local_28[0] = 0;
      local_24 = *puVar1;
      if (*puVar1 != 4) {
        puVar1 = (uint *)local_28;
LAB_019a35bc:
        uVar2 = *puVar1;
        uVar3 = 0;
        if ((uVar2 & 0xff) != 4) {
          uVar4 = puVar1[1];
          if ((char)*param_1 != '\x04') {
            FUN_0197acb4(param_1);
          }
          uVar3 = 1;
          *param_1 = uVar2;
          param_1[1] = uVar4;
        }
        return uVar3;
      }
    } while (param_3 != 0);
  }
  return 0;
}

