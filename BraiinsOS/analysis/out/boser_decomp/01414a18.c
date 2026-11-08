// FUN_01414a18 @ 01414a18 size=344 calls_out=6 calls_in=3
// strings: 

void FUN_01414a18(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iStack_7c;
  int iStack_78;
  int local_74;
  uint local_70;
  uint *local_6c;
  undefined1 *local_68;
  uint *local_64;
  undefined1 *local_60;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 *local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  iVar2 = 0;
  uVar3 = CONCAT44(param_3 + 0x589c0000,1);
  if (0xde0b6b3 < param_4 || param_4 + 0xf21f494d < (uint)(0xa763ffff < param_3)) {
    iVar2 = 0x14;
    uVar3 = thunk_FUN_01be5118(0x14,param_3 + 0x589c0000);
    if ((int)uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x14);
    }
  }
  iStack_7c = (int)uVar3;
  iStack_78 = 0;
  local_70 = 1;
  local_74 = iVar2;
  uVar3 = FUN_01415f98(&local_6c,(int)((ulonglong)uVar3 >> 0x20),param_3,param_4);
  FUN_01284394(&iStack_7c,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  uVar1 = local_70;
  if ((local_70 & 1) == 0) {
    local_38 = &DAT_01d2e520;
  }
  else {
    local_3c = iStack_78 + (local_70 >> 5);
    local_40 = iStack_7c - (local_70 >> 5);
    local_44 = local_74 + (local_70 >> 5);
    FUN_01283524(&local_38,&local_44);
    local_28 = uVar1 >> 5;
    if (local_30 < uVar1 >> 5) {
      local_64 = &local_24;
      local_24 = local_30;
      local_60 = &LAB_01a6a304;
      local_68 = &LAB_01a6a304;
      local_6c = &local_28;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005ac267,&local_6c,&DAT_01d2e534);
    }
    iStack_78 = local_30 - local_28;
    iStack_7c = local_34 + local_28;
    local_70 = local_2c;
  }
  *param_1 = local_38;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[1] = iStack_7c;
  param_1[2] = iStack_78;
  param_1[3] = local_70;
  return;
}

