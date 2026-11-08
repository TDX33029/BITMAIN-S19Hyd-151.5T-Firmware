// FUN_019adfac @ 019adfac size=424 calls_out=9 calls_in=7
// strings: 

void FUN_019adfac(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  undefined1 uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 local_1c0;
  undefined4 *local_1bc;
  uint local_1b8 [4];
  uint local_1a8;
  undefined4 *local_1a4;
  int local_34;
  undefined4 local_30;
  
  if (param_3 >> 7 < 3) {
    FUN_01bed4e2(local_1b8,param_2,param_3);
    *(undefined1 *)((int)local_1b8 + param_3) = 0;
    FUN_012fbc58(&local_34,local_1b8,param_3 + 1);
    if (local_34 != 1) {
      local_1bc = (undefined4 *)FUN_01be2d48(local_30);
LAB_019ae04c:
      puVar3 = local_1bc;
      if (local_1bc == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)FUN_01be3244();
        uVar4 = *puVar3;
        *(undefined1 *)(param_1 + 1) = 0;
        uVar5 = 1;
        param_1[2] = uVar4;
      }
      else {
        uVar6 = 1;
        if ((param_3 != 0) && (uVar6 = FUN_01298504(param_3,1), uVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,param_3);
        }
        FUN_01bed4e2(uVar6,param_2,param_3);
        local_1a4 = puVar3;
        local_1b8[1] = 1;
        local_1b8[0] = 1;
        local_1b8[2] = param_3;
        local_1b8[3] = uVar6;
        local_1a8 = param_3;
        puVar2 = (uint *)thunk_FUN_01be5118(0x18);
        if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x18);
        }
        *puVar2 = local_1b8[0];
        puVar2[1] = local_1b8[1];
        puVar2[2] = local_1b8[2];
        puVar2[3] = local_1b8[3];
        puVar2[4] = local_1a8;
        puVar2[5] = (uint)local_1a4;
        uVar5 = 0;
        *(undefined1 *)(param_1 + 2) = 0;
        param_1[1] = puVar2;
      }
      goto LAB_019ae130;
    }
    local_1c0 = 0;
    local_1bc = &DAT_01d27a70;
    uVar1 = 2;
  }
  else {
    FUN_019ae178(&local_1c0,param_2,param_3);
    uVar1 = (undefined1)local_1c0;
    if ((local_1c0 & 0xff) == 4) goto LAB_019ae04c;
  }
  *(undefined2 *)((int)param_1 + 5) = local_1c0._1_2_;
  uVar5 = 1;
  *(undefined1 *)((int)param_1 + 7) = local_1c0._3_1_;
  param_1[2] = local_1bc;
  *(undefined1 *)(param_1 + 1) = uVar1;
LAB_019ae130:
  *param_1 = uVar5;
  return;
}

