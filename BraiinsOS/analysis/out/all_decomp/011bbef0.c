// FUN_011bbef0 @ 011bbef0 size=244 calls_out=1 calls_in=1
// strings: 

void FUN_011bbef0(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  
  puVar6 = param_1 + 3;
  iVar7 = 0;
  do {
    uVar11 = puVar6[-1];
    uVar9 = puVar6[1];
    uVar10 = puVar6[2];
    uVar2 = uVar11;
    if (uVar10 < uVar11) {
      uVar2 = uVar10;
    }
    uVar2 = FUN_016dd50a(uVar9,puVar6[-2],uVar2);
    if (uVar2 == 0) {
      uVar2 = uVar10 - uVar11;
    }
    if (0x7fffffff < uVar2) {
      uVar3 = *puVar6;
      iVar1 = iVar7;
      do {
        iVar8 = iVar1;
        puVar4 = (undefined4 *)((int)param_1 + iVar8);
        puVar4[3] = *puVar4;
        puVar4[4] = puVar4[1];
        puVar4[5] = puVar4[2];
        if (iVar8 == 0) {
          puVar4 = param_1;
          goto LAB_011bbf1c;
        }
        uVar11 = *(uint *)((int)param_1 + iVar8 + -4);
        uVar2 = uVar11;
        if (uVar10 < uVar11) {
          uVar2 = uVar10;
        }
        iVar5 = FUN_016dd50a(uVar9,*(undefined4 *)((int)param_1 + iVar8 + -8),uVar2);
        if (iVar5 == 0) {
          iVar5 = uVar10 - uVar11;
        }
        iVar1 = iVar8 + -0xc;
      } while (iVar5 < 0);
      puVar4 = (undefined4 *)((int)param_1 + iVar8);
LAB_011bbf1c:
      *puVar4 = uVar3;
      *(undefined4 *)((int)param_1 + iVar8 + 4) = uVar9;
      *(uint *)((int)param_1 + iVar8 + 8) = uVar10;
    }
    puVar6 = puVar6 + 3;
    iVar7 = iVar7 + 0xc;
    if (puVar6 == param_1 + param_2 * 3) {
      return;
    }
  } while( true );
}

