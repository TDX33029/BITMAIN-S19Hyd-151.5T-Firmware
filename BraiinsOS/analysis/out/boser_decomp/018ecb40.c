// FUN_018ecb40 @ 018ecb40 size=192 calls_out=4 calls_in=1
// strings: 

void FUN_018ecb40(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  int local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar3 = FUN_0192fac8(param_2,4);
  if (((uint *)uVar3 == (uint *)0x0) || ((int)((ulonglong)uVar3 >> 0x20) != 4)) {
    *(undefined1 *)param_1 = 0xc;
    param_1[1] = "u32";
    param_1[2] = 3;
  }
  else {
    uVar2 = *(uint *)uVar3;
    FUN_01935dac(&local_28,param_2);
    if (local_28 == 1) {
      *param_1 = uStack_24;
      param_1[1] = local_20;
      param_1[2] = local_1c;
    }
    else {
      puVar1 = (undefined4 *)thunk_FUN_01be5118(0x14);
      if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x14);
      }
      *puVar1 = 1;
      puVar1[1] = 1;
      puVar1[2] = uStack_24;
      puVar1[3] = local_20;
      puVar1[4] = local_1c;
      param_1[1] = puVar1;
      param_1[2] = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                   uVar2 >> 0x18;
      *(undefined1 *)param_1 = 0x18;
    }
  }
  return;
}

