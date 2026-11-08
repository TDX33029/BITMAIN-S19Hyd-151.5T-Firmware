// FUN_01ab8a24 @ 01ab8a24 size=140 calls_out=1 calls_in=6
// strings: 

undefined4 FUN_01ab8a24(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  puVar1 = (undefined4 *)FUN_0181cdf4(param_1 + 0xc,&DAT_0056ac88);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
    (**(code **)(puVar1[1] + 0xc))(&local_20,uVar2);
    if ((local_20 != -0x4f9810a8 || iStack_18 != -0x52955d18) ||
        (iStack_1c != 0x6a483073 || iStack_14 != -0x69c5773d)) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

