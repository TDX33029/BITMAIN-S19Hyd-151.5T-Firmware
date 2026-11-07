// FUN_01789f40 @ 01789f40 size=212 calls_out=0 calls_in=3
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01789f40(undefined1 (*param_1) [16],undefined1 (*param_2) [16],int param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  auVar5 = *param_1;
  auVar6 = param_1[1];
  pauVar2 = param_2 + param_3 * 4;
  do {
    auVar7 = *param_2;
    pauVar3 = param_2 + 1;
    pauVar1 = param_2 + 2;
    pauVar4 = param_2 + 3;
    param_2 = param_2 + 4;
    auVar7 = vrev(auVar7,1);
    auVar10 = vrev(*pauVar3,1);
    auVar11 = vrev(*pauVar1,1);
    auVar12 = vrev(*pauVar4,1);
    auVar13 = VectorAdd(_DAT_01788420,auVar7,4);
    auVar8 = SHA256ScheduleUpdate0(auVar7,auVar10);
    auVar7 = SHA256hash(auVar5,auVar6,auVar13,1);
    auVar13 = SHA256hash(auVar6,auVar5,auVar13,0);
    auVar9 = SHA256ScheduleUpdate1(auVar8,auVar11,auVar12);
    auVar14 = VectorAdd(_DAT_01788430,auVar10,4);
    auVar10 = SHA256ScheduleUpdate0(auVar10,auVar11);
    auVar8 = SHA256hash(auVar7,auVar13,auVar14,1);
    auVar13 = SHA256hash(auVar13,auVar7,auVar14,0);
    auVar10 = SHA256ScheduleUpdate1(auVar10,auVar12,auVar9);
    auVar14 = VectorAdd(_DAT_01788440,auVar11,4);
    auVar11 = SHA256ScheduleUpdate0(auVar11,auVar12);
    auVar7 = SHA256hash(auVar8,auVar13,auVar14,1);
    auVar13 = SHA256hash(auVar13,auVar8,auVar14,0);
    auVar11 = SHA256ScheduleUpdate1(auVar11,auVar9,auVar10);
    auVar14 = VectorAdd(_DAT_01788450,auVar12,4);
    auVar12 = SHA256ScheduleUpdate0(auVar12,auVar9);
    auVar8 = SHA256hash(auVar7,auVar13,auVar14,1);
    auVar13 = SHA256hash(auVar13,auVar7,auVar14,0);
    auVar12 = SHA256ScheduleUpdate1(auVar12,auVar10,auVar11);
    auVar14 = VectorAdd(_DAT_01788460,auVar9,4);
    auVar9 = SHA256ScheduleUpdate0(auVar9,auVar10);
    auVar7 = SHA256hash(auVar8,auVar13,auVar14,1);
    auVar13 = SHA256hash(auVar13,auVar8,auVar14,0);
    auVar9 = SHA256ScheduleUpdate1(auVar9,auVar11,auVar12);
    auVar14 = VectorAdd(_DAT_01788470,auVar10,4);
    auVar10 = SHA256ScheduleUpdate0(auVar10,auVar11);
    auVar8 = SHA256hash(auVar7,auVar13,auVar14,1);
    auVar13 = SHA256hash(auVar13,auVar7,auVar14,0);
    auVar10 = SHA256ScheduleUpdate1(auVar10,auVar12,auVar9);
    auVar14 = VectorAdd(_DAT_01788480,auVar11,4);
    auVar11 = SHA256ScheduleUpdate0(auVar11,auVar12);
    auVar7 = SHA256hash(auVar8,auVar13,auVar14,1);
    auVar13 = SHA256hash(auVar13,auVar8,auVar14,0);
    auVar11 = SHA256ScheduleUpdate1(auVar11,auVar9,auVar10);
    auVar14 = VectorAdd(_DAT_01788490,auVar12,4);
    auVar12 = SHA256ScheduleUpdate0(auVar12,auVar9);
    auVar8 = SHA256hash(auVar7,auVar13,auVar14,1);
    auVar13 = SHA256hash(auVar13,auVar7,auVar14,0);
    auVar12 = SHA256ScheduleUpdate1(auVar12,auVar10,auVar11);
    auVar14 = VectorAdd(_DAT_017884a0,auVar9,4);
    auVar9 = SHA256ScheduleUpdate0(auVar9,auVar10);
    auVar7 = SHA256hash(auVar8,auVar13,auVar14,1);
    auVar13 = SHA256hash(auVar13,auVar8,auVar14,0);
    auVar9 = SHA256ScheduleUpdate1(auVar9,auVar11,auVar12);
    auVar14 = VectorAdd(_UNK_017884b0,auVar10,4);
    auVar10 = SHA256ScheduleUpdate0(auVar10,auVar11);
    auVar8 = SHA256hash(auVar7,auVar13,auVar14,1);
    auVar13 = SHA256hash(auVar13,auVar7,auVar14,0);
    auVar10 = SHA256ScheduleUpdate1(auVar10,auVar12,auVar9);
    auVar14 = VectorAdd(_UNK_017884c0,auVar11,4);
    auVar11 = SHA256ScheduleUpdate0(auVar11,auVar12);
    auVar7 = SHA256hash(auVar8,auVar13,auVar14,1);
    auVar13 = SHA256hash(auVar13,auVar8,auVar14,0);
    auVar11 = SHA256ScheduleUpdate1(auVar11,auVar9,auVar10);
    auVar14 = VectorAdd(_UNK_017884d0,auVar12,4);
    auVar12 = SHA256ScheduleUpdate0(auVar12,auVar9);
    auVar8 = SHA256hash(auVar7,auVar13,auVar14,1);
    auVar13 = SHA256hash(auVar13,auVar7,auVar14,0);
    auVar12 = SHA256ScheduleUpdate1(auVar12,auVar10,auVar11);
    auVar9 = VectorAdd(_UNK_017884e0,auVar9,4);
    auVar7 = SHA256hash(auVar8,auVar13,auVar9,1);
    auVar13 = SHA256hash(auVar13,auVar8,auVar9,0);
    auVar9 = VectorAdd(_UNK_017884f0,auVar10,4);
    auVar8 = SHA256hash(auVar7,auVar13,auVar9,1);
    auVar13 = SHA256hash(auVar13,auVar7,auVar9,0);
    auVar9 = VectorAdd(_UNK_01788500,auVar11,4);
    auVar7 = SHA256hash(auVar8,auVar13,auVar9,1);
    auVar13 = SHA256hash(auVar13,auVar8,auVar9,0);
    auVar9 = VectorAdd(_UNK_01788510,auVar12,4);
    auVar8 = SHA256hash(auVar7,auVar13,auVar9,1);
    auVar7 = SHA256hash(auVar13,auVar7,auVar9,0);
    auVar5 = VectorAdd(auVar8,auVar5,4);
    auVar6 = VectorAdd(auVar7,auVar6,4);
  } while (param_2 != pauVar2);
  *(longlong *)*param_1 = auVar5._0_8_;
  *(longlong *)(*param_1 + 8) = auVar5._8_8_;
  *(longlong *)param_1[1] = auVar6._0_8_;
  *(longlong *)(param_1[1] + 8) = auVar6._8_8_;
  return;
}

