// FUN_012b95d0 @ 012b95d0 size=320 calls_out=4 calls_in=1
// strings: 

undefined8 FUN_012b95d0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *unaff_r4;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  puVar5 = (undefined4 *)param_1[1];
  uVar1 = 0;
  if ((undefined4 *)*param_1 != puVar5) {
    iVar2 = param_1[2];
    iVar6 = param_1[3];
    iVar7 = param_1[4];
    puVar9 = (undefined4 *)*param_1;
    do {
      uVar1 = *puVar9;
      uVar8 = puVar9[1];
      puVar11 = puVar9 + 2;
      *param_1 = puVar11;
      iVar3 = FUN_012b1930(iVar2 + 0x20,uVar1,uVar8);
      if (iVar3 != 0) {
        iVar3 = FUN_012bf928(iVar3,"");
        if (iVar3 != 0) {
          uVar1 = *puVar9;
          unaff_r4 = (undefined4 *)puVar9[1];
          iVar3 = FUN_012a4878(*(undefined4 *)(iVar6 + 0x48),*(undefined4 *)(iVar6 + 0x4c),uVar1,
                               unaff_r4);
          if (iVar3 == 0) goto LAB_012b96fc;
          puVar9 = unaff_r4;
          if ((*(byte *)(iVar3 + 0x11c) & 4) == 0) {
            uVar8 = *(undefined4 *)(iVar3 + 0x114);
            iVar10 = *(int *)(iVar3 + 0x118);
            puVar9 = *(undefined4 **)(iVar7 + 4);
            puVar12 = puVar9 + 3;
            iVar3 = *(int *)(iVar7 + 8) * 0x14;
            do {
              if (iVar3 == 0) goto LAB_012b96fc;
              if (puVar9[4] == iVar10) {
                iVar4 = thunk_FUN_01bed842(*puVar12,uVar8,iVar10);
                if (iVar4 == 0) break;
              }
              puVar9 = puVar9 + 5;
              iVar3 = iVar3 + -0x14;
              puVar12 = puVar12 + 5;
            } while( true );
          }
        }
      }
      unaff_r4 = puVar9;
      puVar9 = puVar11;
    } while (puVar11 != puVar5);
    uVar1 = 0;
  }
LAB_012b96fc:
  return CONCAT44(unaff_r4,uVar1);
}

