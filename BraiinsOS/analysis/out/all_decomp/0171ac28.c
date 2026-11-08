// FUN_0171ac28 @ 0171ac28 size=304 calls_out=3 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/bn/montgomery.c

undefined8 FUN_0171ac28(undefined4 param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  
  iVar6 = *(int *)(param_5 + 0x18);
  if ((iVar6 != param_2) || (param_4 != iVar6 * 2)) {
    FUN_016e9cd0(3,0,0x42,"/aws-lc/crypto/fipsmodule/bn/montgomery.c",0xe2);
    return 0;
  }
  uVar11 = *(undefined4 *)(param_5 + 0x14);
  if (iVar6 == 0) {
    iVar3 = 0;
    iVar5 = 0;
  }
  else {
    iVar3 = iVar6 * 4;
    iVar7 = 0;
    iVar10 = *(int *)(param_5 + 0x28);
    iVar5 = 0;
    puVar8 = (uint *)(param_3 + iVar6);
    piVar9 = param_3;
    do {
      iVar7 = iVar7 + 1;
      iVar1 = FUN_01718b54(piVar9,uVar11,iVar6,*piVar9 * iVar10);
      uVar4 = *puVar8;
      uVar2 = uVar4 + iVar1 + iVar5;
      *puVar8 = uVar2;
      if (uVar4 != uVar2) {
        iVar5 = 1;
      }
      if (uVar4 < uVar2) {
        iVar5 = 0;
      }
      puVar8 = puVar8 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar6 != iVar7);
  }
  FUN_0171ab40(param_1,(int)param_3 + iVar3,iVar5,uVar11,iVar6);
  return 1;
}

