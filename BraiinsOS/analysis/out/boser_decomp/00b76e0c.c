// FUN_00b76e0c @ 00b76e0c size=112 calls_out=3 calls_in=4
// strings: 

void FUN_00b76e0c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar2 = FUN_01203294(param_1,param_2,&DAT_01c1f9bc);
  puVar1 = *(undefined4 **)*(undefined4 *)uVar2;
  *(undefined4 *)*(undefined4 *)uVar2 = 0;
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d293f0);
  }
  if (*(char *)((int)((ulonglong)uVar2 >> 0x20) + 4) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_019b06e8();
  }
  (*(code *)*puVar1)(&local_38);
  *puVar1 = local_38;
  puVar1[1] = uStack_34;
  puVar1[2] = uStack_30;
  puVar1[3] = uStack_2c;
  puVar1[4] = uStack_28;
  puVar1[5] = uStack_24;
                    /* WARNING: Could not recover jumptable at 0x00b76e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0xb76e1c)();
  return;
}

