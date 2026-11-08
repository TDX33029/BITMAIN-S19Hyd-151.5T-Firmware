// FUN_01714044 @ 01714044 size=304 calls_out=3 calls_in=2
// strings: 

int FUN_01714044(undefined4 param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  int extraout_r2;
  undefined4 *puVar11;
  undefined1 (*pauVar12) [16];
  int iVar13;
  int extraout_r12;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if ((param_2 & 0xffffffbf) != 0x80 && param_2 != 0x100) {
    return -2;
  }
  if ((DAT_018dfe48 & 4) == 0) {
    if ((DAT_018dfe48 & 1) == 0) {
      iVar13 = FUN_01711bf8();
      return iVar13;
    }
    iVar13 = (param_2 >> 5) + 5;
    *(int *)(param_3 + 0xf0) = iVar13;
    iVar13 = FUN_0178c100(param_1,param_2,param_3 + 0x10 + iVar13 * 0x10,1);
    return iVar13;
  }
  iVar13 = FUN_01783f80();
  if (iVar13 == 0) {
    puVar11 = (undefined4 *)(extraout_r2 + -0xf0);
    puVar8 = puVar11 + extraout_r12 * 4;
    uVar1 = *(undefined4 *)(extraout_r2 + -0xec);
    uVar2 = *(undefined4 *)(extraout_r2 + -0xe8);
    uVar3 = *(undefined4 *)(extraout_r2 + -0xe4);
    uVar4 = *puVar8;
    uVar5 = puVar8[1];
    uVar6 = puVar8[2];
    uVar7 = puVar8[3];
    *puVar8 = *puVar11;
    puVar8[1] = uVar1;
    puVar8[2] = uVar2;
    puVar8[3] = uVar3;
    *puVar11 = uVar4;
    *(undefined4 *)(extraout_r2 + -0xec) = uVar5;
    *(undefined4 *)(extraout_r2 + -0xe8) = uVar6;
    *(undefined4 *)(extraout_r2 + -0xe4) = uVar7;
    pauVar12 = (undefined1 (*) [16])(extraout_r2 + -0xe0);
    pauVar10 = (undefined1 (*) [16])(puVar8 + -4);
    do {
      pauVar9 = pauVar10;
      auVar14 = AESInvMixColumns(*pauVar12);
      auVar15 = AESInvMixColumns(*pauVar9);
      *(longlong *)*pauVar9 = auVar14._0_8_;
      *(longlong *)(*pauVar9 + 8) = auVar14._8_8_;
      pauVar10 = pauVar9 + -1;
      *(longlong *)*pauVar12 = auVar15._0_8_;
      *(longlong *)(*pauVar12 + 8) = auVar15._8_8_;
      pauVar12 = pauVar12 + 1;
    } while (pauVar12 < pauVar10);
    auVar14 = AESInvMixColumns(*pauVar12);
    *(longlong *)*pauVar10 = auVar14._0_8_;
    *(longlong *)(pauVar9[-1] + 8) = auVar14._8_8_;
    iVar13 = 0;
  }
  return iVar13;
}

