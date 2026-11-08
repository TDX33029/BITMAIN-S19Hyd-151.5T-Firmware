// FUN_01753cec @ 01753cec size=420 calls_out=13 calls_in=0
// strings: 

int FUN_01753cec(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1[5];
  iVar1 = FUN_01753bbc();
  if ((iVar1 == 0) && (puVar4[1] == 0)) {
    iVar1 = FUN_017141d0();
    puVar4[1] = iVar1;
    if ((iVar1 == 0) || (iVar1 = FUN_01714a30(iVar1,0x10001), iVar1 == 0)) goto LAB_01753e58;
  }
  iVar1 = FUN_017530f0();
  if (iVar1 == 0) {
LAB_01753e58:
    FUN_0171e3cc(0);
    return 0;
  }
  if (param_1[7] == 0) {
    iVar2 = 0;
LAB_01753d54:
    iVar3 = FUN_01753bbc();
    if (((iVar3 != 0) || (iVar3 = FUN_01753a74(iVar1,*puVar4,puVar4[1],iVar2), iVar3 != 0)) &&
       ((iVar3 = FUN_01753bbc(), iVar3 == 0 ||
        (iVar3 = FUN_01753ab4(iVar1,*puVar4,iVar2), iVar3 != 0)))) {
      if (*(int *)*param_1 == 0x390) {
        iVar3 = param_1[5];
        iVar3 = FUN_0177f34c(*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x10),
                             *(undefined4 *)(iVar3 + 0x14),iVar1 + 0x24);
        if (iVar3 == 0) goto LAB_01753e08;
        if (*(int *)*param_1 != 0x390) goto LAB_01753dac;
        iVar3 = FUN_0173aef0(param_2,0x390,iVar1);
      }
      else {
LAB_01753dac:
        iVar3 = FUN_0173a7a8(param_2,iVar1);
      }
      FUN_0171e3cc(iVar2);
      if (iVar3 != 0) {
        return iVar3;
      }
      goto LAB_01753e0c;
    }
  }
  else {
    iVar2 = FUN_0171e3b4();
    if (iVar2 != 0) {
      FUN_0173c0e4(iVar2,param_1);
      goto LAB_01753d54;
    }
  }
LAB_01753e08:
  FUN_0171e3cc(iVar2);
LAB_01753e0c:
  FUN_0174ff8c(iVar1);
  return 0;
}

