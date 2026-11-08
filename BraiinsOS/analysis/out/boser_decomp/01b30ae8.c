// FUN_01b30ae8 @ 01b30ae8 size=268 calls_out=3 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/bn/montgomery.c

undefined4 FUN_01b30ae8(undefined4 param_1,int param_2,int *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  
  iVar4 = *(int *)(param_5 + 0x18);
  if ((iVar4 == param_2) && (param_4 == iVar4 * 2)) {
    iVar7 = 0;
    uVar1 = *(undefined4 *)(param_5 + 0x14);
    iVar5 = *(int *)(param_5 + 0x28);
    iVar6 = 0;
    piVar8 = param_3;
    puVar10 = (uint *)(param_3 + iVar4);
    while (iVar7 != iVar4) {
      piVar9 = piVar8 + 1;
      iVar7 = iVar7 + 1;
      iVar2 = FUN_01b2ee10(piVar8,uVar1,iVar4,*piVar8 * iVar5);
      uVar12 = *puVar10;
      uVar3 = uVar12 + iVar6 + iVar2;
      puVar11 = puVar10 + 1;
      *puVar10 = uVar3;
      if (uVar12 != uVar3) {
        iVar6 = 1;
      }
      piVar8 = piVar9;
      puVar10 = puVar11;
      if (uVar12 < uVar3) {
        iVar6 = 0;
      }
    }
    FUN_01b30a00(param_1,param_3 + iVar4,iVar6,uVar1,iVar7);
    uVar1 = 1;
  }
  else {
    FUN_01b053d4(3,0,0x42,"/aws-lc/crypto/fipsmodule/bn/montgomery.c",0xe2);
    uVar1 = 0;
  }
  return uVar1;
}

