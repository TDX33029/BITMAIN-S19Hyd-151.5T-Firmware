// FUN_0181c908 @ 0181c908 size=352 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_0181c908(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  
  iVar7 = *(int *)(param_1 + 0x1450);
  iVar3 = *(int *)(param_1 + 0xb60);
  if (iVar7 < 2) {
    iVar6 = 1;
LAB_0181c9e0:
    *(int *)(param_1 + iVar6 * 4 + 0xb5c) = iVar3;
    return 0;
  }
  uVar1 = *(ushort *)(param_2 + iVar3 * 4);
  iVar5 = 2;
  iVar6 = 1;
  do {
    iVar9 = param_1 + iVar5 * 4;
    iVar4 = *(int *)(iVar9 + 0xb5c);
    uVar2 = *(ushort *)(param_2 + iVar4 * 4);
    if (iVar5 < iVar7) {
      iVar9 = *(int *)(iVar9 + 0xb60);
      iVar10 = iVar5 + 1;
      uVar8 = *(ushort *)(param_2 + iVar9 * 4);
      if (uVar2 <= uVar8) {
        if (uVar8 != uVar2) goto LAB_0181c9b0;
        if (*(byte *)(param_1 + iVar4 + 0x1458) < *(byte *)(param_1 + iVar9 + 0x1458)) {
          iVar9 = iVar4;
          iVar10 = iVar5;
          uVar8 = uVar2;
        }
        else {
          uVar8 = uVar2;
        }
      }
    }
    else {
LAB_0181c9b0:
      iVar9 = iVar4;
      iVar10 = iVar5;
      uVar8 = uVar2;
    }
    if ((uVar1 < uVar8) ||
       ((uVar1 == uVar8 &&
        (*(byte *)(param_1 + iVar3 + 0x1458) <= *(byte *)(param_1 + iVar9 + 0x1458)))))
    goto LAB_0181c9e0;
    iVar5 = iVar10 * 2;
    *(int *)(param_1 + (iVar6 + 0x2d6) * 4 + 4) = iVar9;
    if (iVar7 < iVar5) {
      *(int *)(param_1 + iVar10 * 4 + 0xb5c) = iVar3;
      return 0;
    }
    iVar6 = iVar10;
  } while( true );
}

