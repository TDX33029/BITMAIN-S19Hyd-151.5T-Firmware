// FUN_0171d13c @ 0171d13c size=340 calls_out=6 calls_in=1
// strings: 

undefined4
FUN_0171d13c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  iVar5 = param_3[1];
  iVar7 = param_2[1];
  FUN_017185b4(param_4);
  puVar1 = (undefined4 *)FUN_017186b0(param_4);
  if (puVar1 != (undefined4 *)0x0) {
    if (iVar5 < iVar7) {
      iVar4 = iVar7;
    }
    else {
      iVar4 = iVar5;
    }
    iVar2 = FUN_0171464c(param_1,iVar4);
    if ((iVar2 != 0) && (iVar2 = FUN_0171464c(puVar1,iVar4), iVar2 != 0)) {
      uVar9 = *puVar1;
      uVar8 = iVar7 - iVar5;
      uVar6 = *param_2;
      uVar10 = *param_3;
      if (iVar5 < iVar7) {
        iVar2 = iVar5;
      }
      else {
        iVar2 = iVar7;
      }
      uVar11 = *param_1;
      iVar3 = FUN_0171b6f8(uVar9,uVar6,uVar10,iVar2,uVar8);
      FUN_0171b6f8(uVar11,uVar10,uVar6,iVar2,iVar5 - iVar7);
      FUN_01714e04(uVar11,-iVar3,uVar11,uVar9,
                   ((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f)) + iVar2);
      uVar6 = 1;
      param_1[1] = iVar4;
      goto LAB_0171d1b0;
    }
  }
  uVar6 = 0;
LAB_0171d1b0:
  FUN_01718904(param_4);
  return uVar6;
}

