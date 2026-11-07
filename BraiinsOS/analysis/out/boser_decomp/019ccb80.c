// FUN_019ccb80 @ 019ccb80 size=336 calls_out=6 calls_in=1
// strings: 

void FUN_019ccb80(uint *param_1,uint *param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint local_30;
  uint local_2c;
  
  uVar1 = *param_2;
  if (uVar1 - param_2[2] < param_4) {
    FUN_019cccd8(&local_30,param_2);
    if ((char)local_30 != '\x04') {
      *param_1 = local_30;
      param_1[1] = local_2c;
      return;
    }
    uVar1 = *param_2;
  }
  if (param_4 < uVar1) {
    uVar1 = param_2[2];
    FUN_01bed4e2(param_2[1] + uVar1,param_3,param_4);
    param_2[2] = uVar1 + param_4;
    *(undefined1 *)param_1 = 4;
  }
  else {
    uVar1 = param_2[4];
    *(undefined1 *)(param_2 + 3) = 1;
    if (param_4 != 0) {
      do {
        uVar2 = FUN_01be9b18(uVar1,param_3,param_4,0x4000);
        if (uVar2 == 0xffffffff) {
          puVar3 = (uint *)FUN_01be3244();
          local_30 = local_30 & 0xffffff00;
          local_2c = *puVar3;
          if (*puVar3 != 4) {
            puVar3 = &local_30;
            goto LAB_019ccca4;
          }
          FUN_0069d8a4(0);
        }
        else {
          local_2c = uVar2;
          local_30 = CONCAT31(local_30._1_3_,4);
          puVar3 = &DAT_01d2e7c8;
          if (uVar2 == 0) {
LAB_019ccca4:
            uVar1 = puVar3[1];
            *param_1 = *puVar3;
            param_1[1] = uVar1;
            goto LAB_019cccac;
          }
          if (param_4 < uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(uVar2,param_4,param_4,&DAT_01d2e7d0);
          }
          param_3 = param_3 + uVar2;
          param_4 = param_4 - uVar2;
        }
      } while (param_4 != 0);
    }
    *(undefined1 *)param_1 = 4;
LAB_019cccac:
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}

