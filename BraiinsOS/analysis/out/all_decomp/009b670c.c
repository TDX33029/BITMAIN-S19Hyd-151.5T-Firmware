// FUN_009b670c @ 009b670c size=160 calls_out=5 calls_in=12
// strings: 

/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_009b670c(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [12];
  undefined4 *local_20;
  undefined4 *local_1c;
  
  uVar3 = *(undefined4 *)(param_1 + 0xa4);
  uVar4 = *(undefined4 *)(param_1 + 0xa8);
  uStack_34 = uVar3;
  uStack_30 = uVar4;
  uVar1 = FUN_0092f7cc(uVar3,uVar4);
  uVar1 = uVar1 & 0xff;
  uVar2 = uVar1;
  if (uVar1 == 0x29) {
    uVar2 = FUN_0093a570(uVar3,uVar4);
    uVar2 = uVar2 & 0xff;
    if (uVar2 == 5) {
      local_20 = &uStack_34;
      local_1c = &DAT_0157d360;
      FUN_00600d2c(auStack_2c,&DAT_0057dbd7,&local_20);
      uVar3 = FUN_009337e4(auStack_2c);
      FUN_009b67b0(param_1,uVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return CONCAT44(uVar2,(uint)(uVar1 == 0x29));
}

