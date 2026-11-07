// FUN_01b0704c @ 01b0704c size=484 calls_out=13 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_dsa.c

undefined4 FUN_01b0704c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (*(int *)(param_1 + 8) == 0) {
    FUN_01b053d4(0xe,0,0x43,"/aws-lc/crypto/evp_extra/p_dsa.c",0x3b);
    return 0;
  }
  iVar2 = FUN_01b01f38();
  if ((iVar2 == 0) || (iVar3 = FUN_01b479ac(param_2,iVar2), iVar3 == 0)) {
    FUN_01b01f88(iVar2);
    return 0;
  }
  iVar2 = FUN_01b47ee0(param_2,*(undefined4 *)(param_1 + 8));
  if (iVar2 == 0) {
    return 0;
  }
  puVar4 = *(undefined4 **)(param_2 + 8);
  iVar2 = FUN_01b032a8();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_01b2e788();
  if ((iVar2 == 0) || ((iVar3 = puVar4[4], iVar3 == 0 && (iVar3 = FUN_01b2adb8(), iVar3 == 0)))) {
    iVar3 = 0;
LAB_01b027c8:
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_01b524c8(iVar3,1,puVar4[1]);
    if ((iVar5 == 0) || ((iVar5 = puVar4[3], iVar5 == 0 && (iVar5 = FUN_01b2adb8(), iVar5 == 0))))
    goto LAB_01b027c8;
    iVar1 = FUN_01b355d8(puVar4 + 0xd,puVar4 + 5,*puVar4,iVar2);
    if ((iVar1 != 0) &&
       (iVar1 = FUN_01b36698(iVar5,puVar4[2],iVar3,*puVar4,iVar2,puVar4[0xd]), iVar1 != 0)) {
      uVar6 = 1;
      puVar4[4] = iVar3;
      puVar4[3] = iVar5;
      goto LAB_01b0286c;
    }
  }
  uVar6 = 0;
LAB_01b0286c:
  if (puVar4[3] == 0) {
    FUN_01b1f904(iVar5);
  }
  if (puVar4[4] == 0) {
    FUN_01b1f904(iVar3);
  }
  FUN_01b2e7c8(iVar2);
  return uVar6;
}

