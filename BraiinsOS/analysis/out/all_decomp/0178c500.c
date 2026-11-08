// FUN_0178c500 @ 0178c500 size=180 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_0178c500(int param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int extraout_r1;
  int extraout_r1_00;
  int iVar3;
  int extraout_r2;
  int iVar4;
  undefined4 uVar5;
  int extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar6;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 extraout_s0;
  undefined1 extraout_var [12];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 extraout_s0_00;
  undefined1 extraout_var_00 [12];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 in_q2 [16];
  uint uVar11;
  
  auVar10._8_8_ = SUB168((undefined1  [16])0x0,8);
  auVar10._0_8_ = 0x5b5b5b5b5b5b5b5b;
  uVar11 = *(uint *)(auVar10 << 0x40 | auVar10);
  auVar8._8_8_ = SUB168((undefined1  [16])0x0,8);
  auVar8._0_8_ = 0x6363636363636363;
  auVar10 = *(undefined1 (*) [16])(auVar8 << 0x40 | auVar8);
  iVar3 = *(int *)(param_2 + 0xf0) + 1;
  *(int *)(param_1 + 0xf0) = iVar3;
  puVar1 = (undefined8 *)FUN_0178c330(param_1,param_2 + 0x10,iVar3,&DAT_0178bb10);
  auVar7._4_12_ = extraout_var;
  auVar7._0_4_ = extraout_s0;
  auVar8 = vrev(auVar7,1);
  *puVar1 = auVar8._0_8_;
  puVar1[1] = auVar8._8_8_;
  iVar3 = extraout_r1;
  iVar4 = extraout_r2;
  uVar5 = extraout_r3;
  while( true ) {
    puVar2 = puVar1 + 2;
    VectorTableLookup(iVar4,puVar2,2);
    VectorTableLookup(uVar5,puVar2,2);
    if (iVar4 == 1) break;
    uVar5 = VectorTableLookup(unaff_r8,puVar2,2);
    VectorTableLookup(unaff_r9,puVar2,2);
    uVar6 = VectorTableLookup(unaff_r8,uVar5,2);
    VectorTableLookup(unaff_r9,uVar5,2);
    uVar5 = VectorTableLookup(unaff_r8,uVar6,2);
    uVar6 = VectorTableLookup(unaff_r9,uVar6,2);
    puVar1 = (undefined8 *)FUN_0178c330(in_q2._0_4_ ^ uVar11,puVar2,iVar3 + 0x10,uVar5,uVar6);
    auVar9._4_12_ = extraout_var_00;
    auVar9._0_4_ = extraout_s0_00;
    auVar8 = vrev(auVar9,1);
    *puVar1 = auVar8._0_8_;
    puVar1[1] = auVar8._8_8_;
    iVar3 = extraout_r1_00;
    iVar4 = extraout_r2_00;
    uVar5 = extraout_r3_00;
  }
  auVar10 = vrev(in_q2 ^ auVar10,1);
  *puVar2 = auVar10._0_8_;
  puVar1[3] = auVar10._8_8_;
  return 0;
}

