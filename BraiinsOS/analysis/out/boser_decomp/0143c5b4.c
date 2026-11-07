// FUN_0143c5b4 @ 0143c5b4 size=496 calls_out=3 calls_in=1
// strings: 

int FUN_0143c5b4(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  bool bVar25;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [16];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar5 = FUN_01a756a0();
  uVar6 = param_1[0xe];
  uVar7 = param_1[0x10];
  uVar8 = param_1[0x12];
  uVar15 = param_1[0xf];
  uVar9 = param_1[0x13];
  uVar10 = param_1[0x14];
  uVar16 = *(undefined4 *)((int)param_1 + 0x76);
  uVar1 = *(undefined1 *)((int)param_1 + 0x75);
  bVar25 = *(char *)((int)param_1 + 0x7a) == '\x01';
  uVar2 = *(undefined1 *)(param_1 + 0x1d);
  if (bVar25) {
    FUN_01bed4e2(auStack_40,(int)param_1 + 0x7b,0x10);
  }
  uVar11 = param_1[10];
  uVar12 = param_1[0xb];
  uVar13 = param_1[0xc];
  uVar14 = param_1[0xd];
  uVar3 = *(undefined1 *)(param_1 + 0x23);
  uVar4 = *(undefined1 *)((int)param_1 + 0x8b);
  if (param_1[0x1a] == -0x80000000) {
    local_30 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_30,param_1[0x1b],param_1[0x1c]);
  }
  uVar24 = param_1[0x16];
  uVar22 = param_1[0x17];
  uVar23 = param_1[0x18];
  puVar20 = (undefined4 *)((uint)&local_50 | 4);
  *puVar20 = local_30;
  puVar20[1] = uStack_2c;
  puVar20[2] = uStack_28;
  uVar17 = param_1[1];
  uVar18 = param_1[2];
  uVar19 = param_1[3];
  uVar21 = param_1[4];
  *(undefined4 *)(iVar5 + 8) = *param_1;
  *(undefined4 *)(iVar5 + 0xc) = uVar17;
  *(undefined4 *)(iVar5 + 0x10) = uVar18;
  *(undefined4 *)(iVar5 + 0x14) = uVar19;
  *(undefined4 *)(iVar5 + 0x18) = uVar21;
  uVar17 = param_1[6];
  uVar18 = param_1[7];
  uVar19 = param_1[8];
  uVar21 = param_1[9];
  *(undefined4 *)(iVar5 + 0x1c) = param_1[5];
  *(undefined4 *)(iVar5 + 0x20) = uVar17;
  *(undefined4 *)(iVar5 + 0x24) = uVar18;
  *(undefined4 *)(iVar5 + 0x28) = uVar19;
  *(undefined4 *)(iVar5 + 0x2c) = uVar21;
  *(undefined4 *)(iVar5 + 0x40) = uVar6;
  *(undefined4 *)(iVar5 + 0x44) = uVar15;
  *(undefined4 *)(iVar5 + 0x50) = uVar8;
  *(undefined4 *)(iVar5 + 0x60) = uVar24;
  *(undefined4 *)(iVar5 + 0x54) = uVar9;
  *(undefined4 *)(iVar5 + 100) = uVar22;
  *(undefined4 *)(iVar5 + 0x30) = uVar11;
  *(undefined4 *)(iVar5 + 0x34) = uVar12;
  *(undefined4 *)(iVar5 + 0x38) = uVar13;
  *(undefined4 *)(iVar5 + 0x3c) = uVar14;
  *(undefined4 *)(iVar5 + 0x48) = uVar7;
  *(undefined4 *)(iVar5 + 0x58) = uVar10;
  *(undefined4 *)(iVar5 + 0x68) = uVar23;
  *(undefined4 *)(iVar5 + 0x6c) = local_50;
  *(undefined4 *)(iVar5 + 0x70) = uStack_4c;
  *(undefined4 *)(iVar5 + 0x74) = uStack_48;
  *(undefined4 *)(iVar5 + 0x78) = uStack_44;
  *(bool *)(iVar5 + 0x82) = bVar25;
  *(undefined4 *)(iVar5 + 0x7e) = uVar16;
  *(undefined1 *)(iVar5 + 0x7d) = uVar1;
  *(undefined1 *)(iVar5 + 0x7c) = uVar2;
  FUN_01bed4e2(iVar5 + 0x83,auStack_40,0x10);
  *(undefined1 *)(iVar5 + 0x94) = uVar3;
  *(undefined1 *)(iVar5 + 0x93) = uVar4;
  return iVar5;
}

