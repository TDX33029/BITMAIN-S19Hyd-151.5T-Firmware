// FUN_0173f9dc @ 0173f9dc size=268 calls_out=6 calls_in=0
// strings: 

undefined8 FUN_0173f9dc(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_0177a9c0(0x4d0);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0173dbd0(puVar1 + 2);
    *(undefined4 **)(param_1 + 0x14) = puVar1;
    puVar3 = *(undefined4 **)(param_2 + 0x14);
    iVar2 = puVar3[0x132];
    *puVar1 = *puVar3;
    if ((iVar2 == 0) || (iVar2 = FUN_0173d144(puVar1 + 0x132,puVar3 + 0x132), iVar2 != 0)) {
      iVar2 = FUN_0173f97c(puVar1 + 2,puVar3 + 2);
      if (iVar2 != 0) {
        return 1;
      }
      FUN_0173dc48(puVar1 + 2);
      FUN_0177aafc(puVar1[0x132]);
      FUN_0177aafc(puVar1);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    else {
      FUN_0173dc48(puVar1 + 2);
      FUN_0177aafc(puVar1);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  return 0;
}

