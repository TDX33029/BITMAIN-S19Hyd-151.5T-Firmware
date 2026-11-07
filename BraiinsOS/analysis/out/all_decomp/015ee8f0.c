// FUN_015ee8f0 @ 015ee8f0 size=272 calls_out=4 calls_in=3
// strings: 

void FUN_015ee8f0(uint *param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  uint extraout_r2;
  uint extraout_r2_00;
  uint uVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined1 local_28 [4];
  
  puVar4 = (uint *)local_28;
  if (*(int *)(param_2 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_018ab4fc);
  }
  *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
  uVar3 = param_2;
  if (param_4 != 0) {
    do {
      while (uVar5 = FUN_016e034e(2,param_3,param_4), uVar3 = (uint)((ulonglong)uVar5 >> 0x20),
            uVar1 = (uint)uVar5, uVar1 == 0xffffffff) {
        puVar2 = (undefined4 *)FUN_016d2bc8();
        puVar2 = (undefined4 *)*puVar2;
        local_28[0] = 0;
        if (puVar2 != (undefined4 *)0x4) {
          uVar3 = extraout_r2;
LAB_015ee9b0:
          if (puVar2 == (undefined4 *)0x9) {
            uVar3 = *puVar4 & 0xff;
          }
          if (puVar2 == (undefined4 *)0x9 && uVar3 == 0) {
            *(undefined1 *)param_1 = 4;
          }
          else {
            *param_1 = *puVar4;
            param_1[1] = (uint)puVar2;
          }
          goto LAB_015ee9cc;
        }
        uVar3 = 4;
        if (param_4 == 0) goto LAB_015ee994;
      }
      local_28[0] = 4;
      if (uVar1 == 0) {
        puVar2 = &DAT_018aeae8;
        uVar3 = extraout_r2_00;
        puVar4 = &DAT_018aeaf8;
        goto LAB_015ee9b0;
      }
      if (param_4 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar1,param_4,param_4,&DAT_018aab58);
      }
      param_3 = param_3 + uVar1;
      param_4 = param_4 - uVar1;
    } while (param_4 != 0);
  }
LAB_015ee994:
  *param_1 = 4;
  param_1[1] = uVar3;
LAB_015ee9cc:
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  return;
}

