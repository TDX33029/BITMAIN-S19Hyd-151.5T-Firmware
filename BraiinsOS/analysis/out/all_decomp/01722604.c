// FUN_01722604 @ 01722604 size=368 calls_out=7 calls_in=1
// strings: 

undefined4 FUN_01722604(int param_1,uint *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  FUN_017185b4(param_5);
  iVar1 = FUN_017186b0(param_5);
  if (iVar1 != 0) {
    iVar2 = FUN_01721bd8(iVar1,param_3,*(undefined4 *)(param_1 + 4),param_4 + 0x14,param_5,param_4);
    if ((iVar2 != 0) && (iVar2 = FUN_0171decc(iVar1,iVar1,param_4,param_5), iVar2 != 0)) {
      uVar3 = FUN_017182bc(iVar1,*(undefined4 *)(param_1 + 8));
      uVar4 = FUN_017182bc(iVar1,*(undefined4 *)(param_1 + 0xc));
      uVar3 = -(uVar3 | uVar4);
      if (1 < *(int *)(param_1 + 0x10)) {
        uVar4 = 1;
        while (uVar5 = *(uint *)(param_1 + 0x14) ^ uVar4,
              (~uVar3 & (int)(uVar5 - 1 & ~uVar5) >> 0x1f) == 0) {
          iVar2 = FUN_0171dce4(iVar1,iVar1,iVar1,param_4,param_5);
          if (iVar2 == 0) goto LAB_01722664;
          uVar4 = uVar4 + 1;
          iVar2 = FUN_017182bc(iVar1,*(undefined4 *)(param_1 + 0xc));
          uVar3 = uVar3 | -iVar2;
          uVar5 = FUN_017182bc(iVar1,*(undefined4 *)(param_1 + 8));
          if (((uVar5 & ~uVar3) != 0) || (*(int *)(param_1 + 0x10) <= (int)uVar4)) break;
        }
      }
      uVar6 = 1;
      *param_2 = uVar3 & 1;
      goto LAB_01722668;
    }
  }
LAB_01722664:
  uVar6 = 0;
LAB_01722668:
  FUN_01718904(param_5);
  return uVar6;
}

