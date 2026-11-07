// FUN_01ab8994 @ 01ab8994 size=140 calls_out=1 calls_in=4
// strings: 

undefined4 FUN_01ab8994(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  puVar1 = (undefined4 *)FUN_0181cdf4(param_1 + 0xc,&DAT_00568658);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
    (**(code **)(puVar1[1] + 0xc))(&local_20,uVar2);
    if ((local_20 != -0x19dba75b || iStack_18 != 0xec869bf) ||
        (iStack_1c != -0x5dec2a7 || iStack_14 != -0x2046ba12)) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

