// FUN_01b36f98 @ 01b36f98 size=344 calls_out=8 calls_in=1
// strings: 

undefined4 FUN_01b36f98(int param_1,uint *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  FUN_01b2e894(param_5);
  iVar1 = FUN_01b2e970(param_5);
  if (iVar1 != 0) {
    iVar2 = FUN_01b36698(iVar1,param_3,*(undefined4 *)(param_1 + 4),param_4 + 0x14,param_5,param_4);
    if ((iVar2 != 0) && (iVar2 = FUN_01b331cc(iVar1,iVar1,param_4,param_5), iVar2 != 0)) {
      uVar3 = FUN_01b2e6d4(iVar1,*(undefined4 *)(param_1 + 8));
      uVar4 = FUN_01b2e6d4(iVar1,*(undefined4 *)(param_1 + 0xc));
      uVar3 = -(uVar3 | uVar4);
      uVar4 = 1;
      while (((int)uVar4 < *(int *)(param_1 + 0x10) &&
             (uVar5 = FUN_01b0c688(*(uint *)(param_1 + 0x14) ^ uVar4), (uVar5 & ~uVar3) == 0))) {
        iVar2 = FUN_01b33010(iVar1,iVar1,iVar1,param_4,param_5);
        if (iVar2 == 0) goto LAB_01b36fdc;
        iVar2 = FUN_01b2e6d4(iVar1,*(undefined4 *)(param_1 + 0xc));
        uVar3 = uVar3 | -iVar2;
        uVar5 = FUN_01b2e6d4(iVar1,*(undefined4 *)(param_1 + 8));
        if ((uVar5 & ~uVar3) != 0) break;
        uVar4 = uVar4 + 1;
      }
      *param_2 = uVar3 & 1;
      uVar6 = 1;
      goto LAB_01b36fe0;
    }
  }
LAB_01b36fdc:
  uVar6 = 0;
LAB_01b36fe0:
  FUN_01b2ebbc(param_5);
  return uVar6;
}

