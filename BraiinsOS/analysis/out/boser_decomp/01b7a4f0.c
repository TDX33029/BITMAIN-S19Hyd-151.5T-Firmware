// FUN_01b7a4f0 @ 01b7a4f0 size=364 calls_out=0 calls_in=1
// strings: 

undefined4
FUN_01b7a4f0(undefined4 param_1,undefined4 param_2,undefined1 (*param_3) [16],undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 unaff_r6;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  undefined4 in_r12;
  undefined4 unaff_lr;
  bool bVar10;
  undefined1 in_q0 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 in_q2 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 in_q9 [16];
  
  iVar6 = *(int *)param_3[0xf];
  puVar9 = &DAT_01b7a180 + ((iVar6 << 4 ^ 0x30U) & 0x30);
  auVar11 = VectorShiftRight(in_q0,4);
  VectorTableLookup(param_3,iVar6,2);
  VectorTableLookup(param_4,iVar6,2);
  uVar1 = VectorTableLookup(param_1,0x1b7a130,2);
  uVar2 = VectorTableLookup(param_2,0x1b7a130,2);
  auVar14 = in_q2 ^ *param_3;
  auVar11 = auVar11 ^ auVar14;
  bVar10 = iVar6 == 0;
  auVar15 = *param_3;
  while( true ) {
    auVar13 = auVar11 & in_q9;
    auVar12 = VectorShiftRight(auVar11,4);
    uVar3 = VectorTableLookup(param_3,unaff_r6,2);
    VectorTableLookup(param_4,unaff_r6,2);
    uVar4 = VectorTableLookup(uVar1,uVar3,2);
    uVar5 = VectorTableLookup(uVar2,uVar3,2);
    uVar7 = VectorTableLookup(param_3,uVar3,2);
    uVar8 = VectorTableLookup(param_4,uVar3,2);
    auVar11 = auVar15 ^ auVar14;
    uVar3 = VectorTableLookup(uVar4,uVar3,2);
    uVar4 = VectorTableLookup(uVar5,uVar3,2);
    unaff_r6 = VectorTableLookup(uVar7,uVar3,2);
    uVar5 = VectorTableLookup(uVar8,uVar3,2);
    auVar14 = auVar14 ^ auVar13 ^ auVar12;
    if (bVar10) break;
    uVar7 = VectorTableLookup(uVar3,uVar7,2);
    VectorTableLookup(uVar4,uVar7,2);
    VectorTableLookup(unaff_r6,0x1b7a4b0,2);
    VectorTableLookup(uVar5,0x1b7a4b0,2);
    uVar7 = VectorTableLookup(uVar3,in_r12,2);
    VectorTableLookup(uVar4,in_r12,2);
    VectorTableLookup(0x1b7a4d0,uVar1,2);
    VectorTableLookup(puVar9,uVar1,2);
    VectorTableLookup(unaff_r6,unaff_lr,2);
    VectorTableLookup(uVar5,unaff_lr,2);
    uVar7 = VectorTableLookup(uVar3,uVar7,2);
    VectorTableLookup(uVar4,uVar7,2);
    VectorTableLookup(0x1b7a4f0,uVar1,2);
    VectorTableLookup(puVar9,uVar1,2);
    VectorTableLookup(unaff_r6,0x1b7a4f0,2);
    VectorTableLookup(uVar5,0x1b7a4f0,2);
    iVar6 = VectorTableLookup(uVar3,in_r12,2);
    VectorTableLookup(uVar4,in_r12,2);
    VectorTableLookup(0x1b7a4f0,uVar1,2);
    VectorTableLookup(puVar9,uVar1,2);
    param_3 = (undefined1 (*) [16])VectorTableLookup(unaff_r6,unaff_lr,2);
    param_4 = VectorTableLookup(uVar5,unaff_lr,2);
    bVar10 = iVar6 == 1;
    auVar15 = auVar11;
  }
  VectorTableLookup(uVar3,param_3,2);
  VectorTableLookup(uVar4,param_3,2);
  uVar2 = VectorTableLookup(unaff_r6,uVar3,2);
  VectorTableLookup(uVar5,uVar3,2);
  uVar1 = VectorTableLookup(uVar3,uVar2,2);
  VectorTableLookup(uVar4,uVar2,2);
  return uVar1;
}

