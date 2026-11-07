// FUN_00feb674 @ 00feb674 size=212 calls_out=3 calls_in=1
// strings: 

void FUN_00feb674(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4,ushort param_5,
                 ushort param_6,undefined4 param_7,undefined4 *param_8,int param_9,
                 undefined4 param_10)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined8 uVar4;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined1 *local_28;
  undefined2 *local_24;
  
  uVar4 = CONCAT44(unaff_r9,unaff_r8);
  local_28 = (undefined1 *)&local_30;
  if ((~param_5 & param_6) == 0) {
    local_30 = param_1;
    uStack_2c = param_2;
    if (*param_3 - 1U < 2) {
      local_24 = &DAT_0132b6a0;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005831bf,&local_28,param_10);
    }
    iVar3 = *param_4;
    if (iVar3 != 0) {
      iVar1 = 0x14;
      if (iVar3 != 1) {
        iVar1 = 0xc;
      }
      uVar4 = (**(code **)(param_4[2] + iVar1))(param_4[1]);
    }
    FUN_00feb758(param_3);
    *param_3 = iVar3;
    *(undefined8 *)(param_3 + 1) = uVar4;
    puVar2 = param_8 + param_9 * 2;
    do {
      FUN_0070adb4(param_7,*param_8,param_8[1]);
      param_8 = param_8 + 2;
    } while (param_8 != puVar2);
  }
  return;
}

