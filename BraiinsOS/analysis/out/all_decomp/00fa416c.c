// FUN_00fa416c @ 00fa416c size=372 calls_out=2 calls_in=1
// strings: 

longlong FUN_00fa416c(undefined4 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint unaff_r5;
  longlong *plVar9;
  int iVar10;
  undefined4 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  
  plVar6 = (longlong *)param_1[1];
  if ((longlong *)*param_1 == plVar6) {
    return (ulonglong)unaff_r5 << 0x20;
  }
  iVar7 = param_1[3];
  iVar8 = param_1[4];
  uVar3 = param_1[2];
  plVar12 = (longlong *)*param_1;
LAB_00fa41cc:
  lVar1 = *plVar12;
  uVar11 = *(undefined4 *)((int)plVar12 + 4);
  plVar13 = plVar12 + 1;
  *param_1 = plVar13;
  iVar4 = FUN_00f9b1f0(uVar3,(int)lVar1,uVar11,&DAT_0056a778);
  plVar9 = plVar12;
  if (iVar4 != 0) {
    lVar2 = *plVar12;
    plVar9 = *(longlong **)((int)plVar12 + 4);
    lVar1 = *plVar12;
    iVar4 = *(int *)(iVar7 + 0x48);
    iVar10 = *(int *)(iVar7 + 0x4c) * 0x134;
    do {
      if (iVar10 == 0) {
        return lVar1;
      }
      if (*(longlong **)(iVar4 + 0x118) == plVar9) {
        uVar11 = *(undefined4 *)(iVar4 + 0x114);
        iVar5 = thunk_FUN_016dd50a(uVar11,(int)lVar2,plVar9);
        if (iVar5 == 0) goto code_r0x00fa424c;
      }
      iVar4 = iVar4 + 0x134;
      iVar10 = iVar10 + -0x134;
    } while( true );
  }
  goto LAB_00fa41b4;
code_r0x00fa424c:
  if ((*(byte *)(iVar4 + 0x11c) & 4) == 0) {
    iVar10 = *(int *)(iVar8 + 4);
    puVar14 = (undefined4 *)(iVar10 + 0xc);
    iVar4 = *(int *)(iVar8 + 8) * 0x14;
    while( true ) {
      if (iVar4 == 0) {
        return lVar1;
      }
      if ((*(longlong **)(iVar10 + 0x10) == plVar9) &&
         (iVar5 = thunk_FUN_016dd50a(*puVar14,uVar11,plVar9), iVar5 == 0)) break;
      iVar10 = iVar10 + 0x14;
      iVar4 = iVar4 + -0x14;
      puVar14 = puVar14 + 5;
    }
  }
LAB_00fa41b4:
  plVar12 = plVar13;
  if (plVar13 == plVar6) {
    return ZEXT48(plVar9) << 0x20;
  }
  goto LAB_00fa41cc;
}

