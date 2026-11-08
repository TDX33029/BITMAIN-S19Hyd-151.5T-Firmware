// FUN_014bee4c @ 014bee4c size=208 calls_out=3 calls_in=1
// strings: 

void FUN_014bee4c(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  undefined4 *local_28;
  undefined4 **local_24;
  
  DataMemoryBarrier(0xb);
  if (DAT_01d4ebd8 != 0) {
    local_24 = &local_28;
    local_28 = &DAT_01d4ebd8;
    FUN_019a768c(&DAT_01d4ebd8,1,&local_24,&DAT_01cf9bb0,&DAT_01d293e0);
  }
  if (DAT_01d4ebe4 != 0) {
    iVar4 = DAT_01d4ebe4 * 0xc;
    puVar3 = DAT_01d4ebe0;
    do {
      uVar5 = *(undefined2 *)(puVar3 + 2);
      uVar6 = FUN_01297c64(uVar5);
      if (((int)((ulonglong)uVar6 >> 0x20) == param_3) &&
         (iVar1 = thunk_FUN_01bed842((int)uVar6,param_2,param_3), iVar1 == 0)) {
        uVar2 = puVar3[1];
        *param_1 = *puVar3;
        param_1[1] = uVar2;
        goto LAB_014beedc;
      }
      puVar3 = puVar3 + 3;
      iVar4 = iVar4 + -0xc;
    } while (iVar4 != 0);
  }
  uVar5 = 0x255;
  *(undefined1 *)param_1 = 7;
LAB_014beedc:
  *(undefined2 *)(param_1 + 2) = uVar5;
  return;
}

