// FUN_008082f8 @ 008082f8 size=312 calls_out=2 calls_in=1
// strings: 

void FUN_008082f8(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  uint *puVar19;
  
  puVar19 = (uint *)FUN_016d38c8(4,1);
  if (puVar19 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,4);
  }
  bVar1 = *param_2;
  bVar2 = param_2[0x11];
  bVar3 = param_2[0xb];
  bVar4 = param_2[1];
  bVar5 = param_2[10];
  bVar6 = param_2[0x10];
  *param_1 = 4;
  param_1[1] = puVar19;
  param_1[2] = 4;
  param_1[4] = 4;
  bVar7 = param_2[9];
  bVar8 = param_2[2];
  bVar9 = param_2[8];
  bVar10 = param_2[3];
  bVar11 = param_2[7];
  bVar12 = param_2[5];
  bVar13 = param_2[4];
  bVar14 = param_2[0xe];
  bVar15 = param_2[6];
  bVar16 = param_2[0xf];
  bVar17 = param_2[0xd];
  bVar18 = param_2[0xc];
  param_1[3] = 0x18;
  *puVar19 = (uint)bVar17 | (uint)bVar18 << 4 |
             (((uint)bVar4 << 6 | (uint)bVar1 << 7 | (uint)bVar8 << 5 | (uint)bVar10 << 4) & 0xff |
             (uint)bVar14) << 8 |
             (((uint)bVar12 << 6 | (uint)bVar13 << 7 | (uint)bVar15 << 5 | (bVar16 & 7) << 2 |
              (uint)bVar11 << 1) & 0xff | (uint)bVar9) << 0x10 |
             (bVar2 & 3 | (uint)bVar7 << 7 | (bVar6 & 7) << 4 | (uint)bVar5 << 3 | (uint)bVar3 << 2)
             << 0x18;
  return;
}

