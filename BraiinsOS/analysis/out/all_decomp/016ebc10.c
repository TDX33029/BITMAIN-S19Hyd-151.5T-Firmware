// FUN_016ebc10 @ 016ebc10 size=584 calls_out=13 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_dsa.c

undefined4 FUN_016ebc10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  if (*(int *)(param_1 + 8) == 0) {
    FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/evp_extra/p_dsa.c",0x3b);
    return 0;
  }
  iVar3 = FUN_016e64c4();
  if ((iVar3 == 0) || (iVar4 = FUN_0173a954(param_2), iVar4 == 0)) {
    FUN_016e6514(iVar3);
    return 0;
  }
  iVar3 = FUN_0173b180(param_2,*(undefined4 *)(param_1 + 8));
  if (iVar3 == 0) {
    return 0;
  }
  puVar5 = *(undefined4 **)(param_2 + 8);
  iVar3 = FUN_016e7aac();
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_017184a8();
  if ((iVar3 == 0) || ((iVar4 = puVar5[4], iVar4 == 0 && (iVar4 = FUN_017141d0(), iVar4 == 0)))) {
    iVar4 = 0;
LAB_016e7040:
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0174b144(iVar4,1,puVar5[1]);
    if ((iVar1 == 0) || ((iVar1 = puVar5[3], iVar1 == 0 && (iVar1 = FUN_017141d0(), iVar1 == 0))))
    goto LAB_016e7040;
    iVar2 = FUN_017205f4(puVar5 + 0xd,puVar5 + 5,*puVar5,iVar3);
    if ((iVar2 != 0) &&
       (iVar2 = FUN_01721bd8(iVar1,puVar5[2],iVar4,*puVar5,iVar3,puVar5[0xd]), iVar2 != 0)) {
      uVar6 = 1;
      puVar5[4] = iVar4;
      puVar5[3] = iVar1;
      goto LAB_016e6ffc;
    }
  }
  if (puVar5[3] == 0) {
    FUN_017046e0(iVar1);
  }
  if (puVar5[4] == 0) {
    FUN_017046e0(iVar4);
  }
  uVar6 = 0;
LAB_016e6ffc:
  FUN_017184e8(iVar3);
  return uVar6;
}

