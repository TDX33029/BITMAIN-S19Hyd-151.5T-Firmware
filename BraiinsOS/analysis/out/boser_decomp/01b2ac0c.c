// FUN_01b2ac0c @ 01b2ac0c size=336 calls_out=4 calls_in=1
// strings: 

int FUN_01b2ac0c(undefined4 param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  uint uVar12;
  int extraout_r2;
  undefined4 *puVar13;
  undefined1 (*pauVar14) [16];
  int extraout_r12;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar17;
  
  if ((param_2 & 0xffffffbf) != 0x80 && param_2 != 0x100) {
    return -2;
  }
  uVar17 = FUN_01b0c6d4();
  uVar12 = (uint)((ulonglong)uVar17 >> 0x20);
  if ((int)uVar17 == 0) {
    if ((DAT_01d532f0 & 1) == 0) {
      iVar8 = FUN_01b2a350(param_1);
      return iVar8;
    }
    iVar8 = (uVar12 >> 5) + 5;
    *(int *)(param_3 + 0xf0) = iVar8;
    iVar8 = FUN_01b7a780(param_1,uVar12,param_3 + 0x10 + iVar8 * 0x10,1);
    return iVar8;
  }
  iVar8 = FUN_01b72600(param_1,uVar12,param_3);
  if (iVar8 == 0) {
    puVar13 = (undefined4 *)(extraout_r2 + -0xf0);
    puVar9 = puVar13 + extraout_r12 * 4;
    uVar1 = *(undefined4 *)(extraout_r2 + -0xec);
    uVar2 = *(undefined4 *)(extraout_r2 + -0xe8);
    uVar3 = *(undefined4 *)(extraout_r2 + -0xe4);
    uVar4 = *puVar9;
    uVar5 = puVar9[1];
    uVar6 = puVar9[2];
    uVar7 = puVar9[3];
    *puVar9 = *puVar13;
    puVar9[1] = uVar1;
    puVar9[2] = uVar2;
    puVar9[3] = uVar3;
    *puVar13 = uVar4;
    *(undefined4 *)(extraout_r2 + -0xec) = uVar5;
    *(undefined4 *)(extraout_r2 + -0xe8) = uVar6;
    *(undefined4 *)(extraout_r2 + -0xe4) = uVar7;
    pauVar14 = (undefined1 (*) [16])(extraout_r2 + -0xe0);
    pauVar11 = (undefined1 (*) [16])(puVar9 + -4);
    do {
      pauVar10 = pauVar11;
      auVar15 = AESInvMixColumns(*pauVar14);
      auVar16 = AESInvMixColumns(*pauVar10);
      *(longlong *)*pauVar10 = auVar15._0_8_;
      *(longlong *)(*pauVar10 + 8) = auVar15._8_8_;
      pauVar11 = pauVar10 + -1;
      *(longlong *)*pauVar14 = auVar16._0_8_;
      *(longlong *)(*pauVar14 + 8) = auVar16._8_8_;
      pauVar14 = pauVar14 + 1;
    } while (pauVar14 < pauVar11);
    auVar15 = AESInvMixColumns(*pauVar14);
    *(longlong *)*pauVar11 = auVar15._0_8_;
    *(longlong *)(pauVar10[-1] + 8) = auVar15._8_8_;
    iVar8 = 0;
  }
  return iVar8;
}

