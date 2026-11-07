// FUN_01b7a2e0 @ 01b7a2e0 size=296 calls_out=0 calls_in=2
// strings: 

undefined8
FUN_01b7a2e0(undefined4 param_1,undefined4 param_2,undefined1 (*param_3) [16],undefined4 param_4)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 uVar4;
  undefined4 unaff_r6;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  int iVar12;
  undefined4 in_r12;
  undefined4 unaff_lr;
  bool bVar13;
  undefined1 in_q0 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 in_q9 [16];
  
  auVar16._8_8_ = 0xcabae09052227808;
  auVar16._0_8_ = 0xc2b2e8985a2a7000;
  auVar17._8_8_ = 0xcd80b1fcb0fdcc81;
  auVar17._0_8_ = 0x4c01307d317c4d00;
  uVar18 = *(undefined8 *)*param_3;
  uVar19 = *(undefined8 *)(*param_3 + 8);
  VectorShiftRight(in_q0,4);
  uVar2 = VectorTableLookup(param_3,unaff_r4,2);
  uVar3 = VectorTableLookup(param_4,unaff_r4,2);
  uVar4 = VectorTableLookup(param_1,unaff_r6,2);
  VectorTableLookup(param_2,unaff_r6,2);
  auVar14 = in_q0 & in_q9 ^ *param_3 ^ auVar16;
  bVar13 = *(int *)param_3[0xf] == 0;
  while( true ) {
    auVar15 = VectorShiftRight(auVar14,4);
    VectorTableLookup(uVar2,unaff_r6,2);
    iVar12 = VectorTableLookup(uVar3,unaff_r6,2);
    uVar5 = VectorTableLookup(param_1,uVar4,2);
    uVar6 = VectorTableLookup(param_2,uVar4,2);
    uVar8 = VectorTableLookup(uVar2,uVar4,2);
    pauVar10 = (undefined1 (*) [16])VectorTableLookup(uVar3,uVar4,2);
    auVar1._8_8_ = uVar19;
    auVar1._0_8_ = uVar18;
    uVar4 = VectorTableLookup(uVar5,uVar4,2);
    uVar5 = VectorTableLookup(uVar6,uVar4,2);
    uVar6 = VectorTableLookup(uVar8,uVar4,2);
    uVar8 = VectorTableLookup(pauVar10,uVar4,2);
    uVar18 = *(undefined8 *)*pauVar10;
    uVar19 = *(undefined8 *)(*pauVar10 + 8);
    if (bVar13) break;
    uVar7 = VectorTableLookup(uVar4,iVar12 + 0x40,2);
    uVar9 = VectorTableLookup(uVar5,iVar12 + 0x40,2);
    param_1 = VectorTableLookup(uVar6,uVar7,2);
    param_2 = VectorTableLookup(uVar8,uVar7,2);
    pauVar11 = (undefined1 (*) [16])VectorTableLookup(uVar4,unaff_lr,2);
    VectorTableLookup(uVar5,unaff_lr,2);
    uVar4 = VectorTableLookup(uVar6,in_r12,2);
    VectorTableLookup(uVar8,in_r12,2);
    unaff_r6 = VectorTableLookup(uVar2,param_1,2);
    VectorTableLookup(uVar3,param_1,2);
    auVar16 = auVar16 ^ auVar14 & in_q9 ^ auVar15 ^ *pauVar10;
    VectorTableLookup(uVar7,param_1,2);
    VectorTableLookup(uVar9,param_1,2);
    auVar17 = auVar17 ^ auVar1 ^ auVar15 ^ auVar16;
    iVar12 = VectorTableLookup(uVar2,unaff_r6,2);
    VectorTableLookup(uVar3,unaff_r6,2);
    auVar14 = *pauVar10 ^ auVar17 ^ *pauVar11;
    bVar13 = iVar12 == 1;
  }
  VectorTableLookup(uVar4,uVar2,2);
  VectorTableLookup(uVar5,uVar2,2);
  uVar4 = VectorTableLookup(uVar6,param_1,2);
  VectorTableLookup(uVar8,param_1,2);
  uVar2 = VectorTableLookup(uVar2,uVar4,2);
  uVar3 = VectorTableLookup(uVar3,uVar4,2);
  return CONCAT44(uVar3,uVar2);
}

