// FUN_019ea9e4 @ 019ea9e4 size=232 calls_out=4 calls_in=2
// strings: inner has gone away | inner has gone away

void FUN_019ea9e4(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar3 = *param_2;
  if (uVar3 == 3) {
    uVar3 = param_2[1];
    puVar2 = param_2 + 1;
    if (uVar3 == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("inner has gone away",0x13,&DAT_01d28e44);
    }
  }
  else {
    puVar2 = param_2;
    if (uVar3 == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("inner has gone away",0x13,&DAT_01d299c0);
    }
  }
  if (uVar3 == 0) {
    if (puVar2[3] == 0xffffffff) {
      uVar5 = FUN_01bea704(puVar2[2],9);
    }
    else {
      uVar5 = FUN_01be6c3c(0x1a8,puVar2[3],9,0,0);
    }
    uVar3 = (uint)((ulonglong)uVar5 >> 0x20);
    if ((int)uVar5 == -1) {
      puVar2 = (uint *)FUN_01be3244();
      uVar4 = 0;
      uVar3 = *puVar2 >> 8;
      uVar1 = *puVar2 << 0x18;
      goto LAB_019eaa84;
    }
  }
  uVar1 = 0;
  uVar4 = 4;
  *(undefined1 *)(param_2 + 0xb) = 0;
LAB_019eaa84:
  *param_1 = uVar4;
  param_1[1] = uVar3 << 8 | uVar1 >> 0x18;
  return;
}

