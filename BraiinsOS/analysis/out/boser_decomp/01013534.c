// FUN_01013534 @ 01013534 size=268 calls_out=1 calls_in=2
// strings: 

void FUN_01013534(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  bool bVar26;
  
  uVar13 = param_2[0xb];
  uVar3 = param_2[-9];
  uVar25 = param_2[10];
  uVar23 = (uint)((int)uVar13 >> 0x1f) >> 1 ^ uVar13;
  uVar24 = ((uint)((byte)((int)uVar13 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar13 >> 0x1f) >> 1) ^
           uVar25;
  uVar4 = (uint)((int)uVar3 >> 0x1f) >> 1 ^ uVar3;
  bVar26 = uVar24 < (((uint)((byte)((int)uVar3 >> 0x1f) & 1) << 0x1f |
                     (uint)((int)uVar3 >> 0x1f) >> 1) ^ param_2[-10]);
  if ((int)(uVar23 - (uVar4 + bVar26)) < 0 !=
      (SBORROW4(uVar23,uVar4) != SBORROW4(uVar23 - uVar4,(uint)bVar26))) {
    uVar1 = *param_2;
    uVar5 = param_2[1];
    uVar9 = param_2[2];
    uVar14 = param_2[3];
    uVar19 = param_2[4];
    uVar2 = param_2[5];
    uVar6 = param_2[6];
    uVar10 = param_2[7];
    uVar15 = param_2[8];
    uVar20 = param_2[9];
    uVar7 = param_2[0xc];
    uVar11 = param_2[0xd];
    uVar16 = param_2[0xe];
    uVar21 = param_2[0xf];
    uVar8 = param_2[0x10];
    uVar12 = param_2[0x11];
    uVar17 = param_2[0x12];
    uVar22 = param_2[0x13];
    do {
      puVar18 = param_2;
      param_2 = puVar18 + -0x14;
      FUN_01bed4e2(puVar18,param_2,0x50);
      if (param_2 == param_1) break;
      uVar3 = puVar18[-0x1d];
      uVar4 = (uint)((int)uVar3 >> 0x1f) >> 1 ^ uVar3;
      bVar26 = uVar24 < (((uint)((byte)((int)uVar3 >> 0x1f) & 1) << 0x1f |
                         (uint)((int)uVar3 >> 0x1f) >> 1) ^ puVar18[-0x1e]);
    } while ((int)(uVar23 - (uVar4 + bVar26)) < 0 !=
             (SBORROW4(uVar23,uVar4) != SBORROW4(uVar23 - uVar4,(uint)bVar26)));
    puVar18[-0x14] = uVar1;
    puVar18[-0x13] = uVar5;
    puVar18[-0x12] = uVar9;
    puVar18[-0x11] = uVar14;
    puVar18[-0x10] = uVar19;
    puVar18[-0xf] = uVar2;
    puVar18[-0xe] = uVar6;
    puVar18[-0xd] = uVar10;
    puVar18[-0xc] = uVar15;
    puVar18[-0xb] = uVar20;
    puVar18[-10] = uVar25;
    puVar18[-9] = uVar13;
    puVar18[-8] = uVar7;
    puVar18[-7] = uVar11;
    puVar18[-6] = uVar16;
    puVar18[-5] = uVar21;
    puVar18[-4] = uVar8;
    puVar18[-3] = uVar12;
    puVar18[-2] = uVar17;
    puVar18[-1] = uVar22;
  }
  return;
}

