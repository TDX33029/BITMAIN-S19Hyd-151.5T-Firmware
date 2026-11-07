// FUN_01287ea0 @ 01287ea0 size=1080 calls_out=1 calls_in=2
// strings: 

void FUN_01287ea0(uint *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint local_100 [18];
  uint local_b8 [18];
  uint local_70 [19];
  
  local_100[1] = param_1[1];
  local_100[2] = param_1[2];
  local_100[3] = param_1[3];
  bVar2 = (byte)local_100[3];
  bVar3 = (byte)(local_100[3] >> 8);
  bVar4 = (byte)(local_100[3] >> 0x10);
  bVar1 = (byte)(local_100[3] >> 0x18);
  local_100[0xc] =
       (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) << 1 |
                       bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                    bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18 |
       (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1) << 1 |
                       bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                    bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
       (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1) << 1 |
                       bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                    bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
       (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) << 1 |
                       bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                    bVar1 >> 6 & 1) << 1 | bVar1 >> 7);
  bVar2 = (byte)local_100[1];
  bVar3 = (byte)(local_100[1] >> 8);
  bVar4 = (byte)(local_100[1] >> 0x10);
  bVar1 = (byte)(local_100[1] >> 0x18);
  local_100[10] =
       (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) << 1 |
                       bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                    bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18 |
       (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1) << 1 |
                       bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                    bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
       (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1) << 1 |
                       bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                    bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
       (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) << 1 |
                       bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                    bVar1 >> 6 & 1) << 1 | bVar1 >> 7);
  local_100[0] = *param_1;
  local_100[5] = local_100[3] ^ local_100[2];
  local_100[4] = local_100[1] ^ local_100[0];
  bVar2 = (byte)local_100[2];
  bVar3 = (byte)(local_100[2] >> 8);
  bVar4 = (byte)(local_100[2] >> 0x10);
  bVar1 = (byte)(local_100[2] >> 0x18);
  local_100[0xb] =
       (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) << 1 |
                       bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                    bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18 |
       (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1) << 1 |
                       bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                    bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
       (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1) << 1 |
                       bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                    bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
       (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) << 1 |
                       bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                    bVar1 >> 6 & 1) << 1 | bVar1 >> 7);
  local_100[0xe] = local_100[0xc] ^ local_100[0xb];
  local_100[6] = local_100[2] ^ local_100[0];
  local_100[7] = local_100[3] ^ local_100[1];
  bVar2 = (byte)local_100[0];
  bVar3 = (byte)(local_100[0] >> 8);
  bVar4 = (byte)(local_100[0] >> 0x10);
  bVar1 = (byte)(local_100[0] >> 0x18);
  local_100[9] = (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) << 1 |
                                 bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1
                              | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18 |
                 (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1) << 1 |
                                 bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1
                              | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                 (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1) << 1 |
                                 bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1
                              | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                 (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) << 1 |
                                 bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1
                              | bVar1 >> 6 & 1) << 1 | bVar1 >> 7);
  local_100[8] = local_100[7] ^ local_100[6];
  local_100[0xf] = local_100[0xb] ^ local_100[9];
  local_100[0x10] = local_100[0xc] ^ local_100[10];
  local_100[0x11] = local_100[0x10] ^ local_100[0xf];
  local_100[0xd] = local_100[10] ^ local_100[9];
  local_b8[1] = param_1[5] ^ param_2[1];
  bVar2 = (byte)local_b8[1];
  bVar3 = (byte)(local_b8[1] >> 8);
  bVar4 = (byte)(local_b8[1] >> 0x10);
  bVar1 = (byte)(local_b8[1] >> 0x18);
  local_b8[10] = (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) << 1 |
                                 bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1
                              | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18 |
                 (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1) << 1 |
                                 bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1
                              | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                 (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1) << 1 |
                                 bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1
                              | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                 (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) << 1 |
                                 bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1
                              | bVar1 >> 6 & 1) << 1 | bVar1 >> 7);
  local_b8[0] = param_1[4] ^ *param_2;
  local_b8[2] = param_1[6] ^ param_2[2];
  bVar2 = (byte)local_b8[0];
  bVar3 = (byte)(local_b8[0] >> 8);
  bVar4 = (byte)(local_b8[0] >> 0x10);
  bVar1 = (byte)(local_b8[0] >> 0x18);
  local_b8[9] = (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) << 1 |
                                bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                             bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18 |
                (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1) << 1 |
                                bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                             bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1) << 1 |
                                bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                             bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) << 1 |
                                bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                             bVar1 >> 6 & 1) << 1 | bVar1 >> 7);
  local_b8[3] = param_1[7] ^ param_2[3];
  bVar2 = (byte)local_b8[3];
  bVar3 = (byte)(local_b8[3] >> 8);
  bVar4 = (byte)(local_b8[3] >> 0x10);
  bVar1 = (byte)(local_b8[3] >> 0x18);
  local_b8[0xc] =
       (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) << 1 |
                       bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                    bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18 |
       (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1) << 1 |
                       bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                    bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
       (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1) << 1 |
                       bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                    bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
       (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) << 1 |
                       bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                    bVar1 >> 6 & 1) << 1 | bVar1 >> 7);
  bVar2 = (byte)local_b8[2];
  bVar3 = (byte)(local_b8[2] >> 8);
  bVar4 = (byte)(local_b8[2] >> 0x10);
  bVar1 = (byte)(local_b8[2] >> 0x18);
  local_b8[0xb] =
       (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) << 1 |
                       bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                    bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18 |
       (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1) << 1 |
                       bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                    bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
       (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1) << 1 |
                       bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                    bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
       (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) << 1 |
                       bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                    bVar1 >> 6 & 1) << 1 | bVar1 >> 7);
  local_b8[0x10] = local_b8[0xc] ^ local_b8[10];
  local_b8[0xf] = local_b8[0xb] ^ local_b8[9];
  local_b8[0x11] = local_b8[0x10] ^ local_b8[0xf];
  local_b8[0xe] = local_b8[0xc] ^ local_b8[0xb];
  local_b8[0xd] = local_b8[10] ^ local_b8[9];
  local_b8[6] = local_b8[2] ^ local_b8[0];
  local_b8[7] = local_b8[3] ^ local_b8[1];
  local_b8[8] = local_b8[7] ^ local_b8[6];
  local_b8[5] = local_b8[3] ^ local_b8[2];
  local_b8[4] = local_b8[1] ^ local_b8[0];
  iVar13 = 0;
  FUN_016dd606(local_70,0,0x48);
  do {
    uVar10 = local_100[iVar13];
    uVar16 = local_b8[iVar13];
    uVar14 = uVar10 & 0x11111111;
    uVar17 = uVar10 & 0x22222222;
    uVar15 = uVar16 & 0x11111111;
    uVar9 = uVar16 & 0x22222222;
    uVar11 = uVar16 & 0x88888888;
    uVar12 = uVar10 & 0x44444444;
    uVar10 = uVar10 & 0x88888888;
    uVar16 = uVar16 & 0x44444444;
    local_70[iVar13] =
         (uVar15 * uVar14 ^ uVar11 * uVar17 ^ uVar16 * uVar12 ^ uVar9 * uVar10) & 0x11111111 |
         (uVar9 * uVar14 ^ uVar15 * uVar17 ^ uVar11 * uVar12 ^ uVar16 * uVar10) & 0x22222222 |
         (uVar16 * uVar14 ^ uVar9 * uVar17 ^ uVar15 * uVar12 ^ uVar11 * uVar10) & 0x44444444 |
         (uVar11 * uVar14 ^ uVar16 * uVar17 ^ uVar9 * uVar12 ^ uVar15 * uVar10) & 0x88888888;
    iVar13 = iVar13 + 1;
  } while (iVar13 != 0x12);
  uVar9 = local_70[2] ^ local_70[5] ^ local_70[3];
  uVar10 = local_70[0xc] ^ local_70[0xb] ^ local_70[10] ^ local_70[0x10];
  bVar3 = (byte)uVar10;
  bVar4 = (byte)(uVar10 >> 8);
  bVar5 = (byte)(uVar10 >> 0x10);
  bVar1 = (byte)(uVar10 >> 0x18);
  local_70[4] = local_70[4] ^ local_70[1] ^ local_70[0];
  bVar6 = (byte)local_70[9];
  bVar7 = (byte)(local_70[9] >> 8);
  bVar8 = (byte)(local_70[9] >> 0x10);
  bVar2 = (byte)(local_70[9] >> 0x18);
  uVar12 = local_70[4] ^
           ((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 | bVar6 >> 2 & 1) << 1 |
                            bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                         bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x18 |
            (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 | bVar7 >> 2 & 1) << 1 |
                            bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1 |
                         bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 0x10 |
            (uint)(byte)((((((((bVar8 & 1) << 1 | bVar8 >> 1 & 1) << 1 | bVar8 >> 2 & 1) << 1 |
                            bVar8 >> 3 & 1) << 1 | bVar8 >> 4 & 1) << 1 | bVar8 >> 5 & 1) << 1 |
                         bVar8 >> 6 & 1) << 1 | bVar8 >> 7) << 8 |
           (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) << 1 |
                           bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                        bVar2 >> 6 & 1) << 1)) >> 1;
  local_70[0xd] = local_70[0xd] ^ local_70[10] ^ local_70[9];
  bVar6 = (byte)local_70[0xd];
  bVar7 = (byte)(local_70[0xd] >> 8);
  bVar8 = (byte)(local_70[0xd] >> 0x10);
  bVar2 = (byte)(local_70[0xd] >> 0x18);
  uVar11 = local_70[1] ^ local_70[0] ^
           ((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 | bVar6 >> 2 & 1) << 1 |
                            bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                         bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x18 |
            (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 | bVar7 >> 2 & 1) << 1 |
                            bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1 |
                         bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 0x10 |
            (uint)(byte)((((((((bVar8 & 1) << 1 | bVar8 >> 1 & 1) << 1 | bVar8 >> 2 & 1) << 1 |
                            bVar8 >> 3 & 1) << 1 | bVar8 >> 4 & 1) << 1 | bVar8 >> 5 & 1) << 1 |
                         bVar8 >> 6 & 1) << 1 | bVar8 >> 7) << 8 |
           (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) << 1 |
                           bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                        bVar2 >> 6 & 1) << 1)) >> 1 ^ local_70[2] ^ local_70[6];
  param_1[5] = uVar11 << 0x1f ^ uVar11 << 0x1e ^ uVar11 << 0x19 ^
               uVar12 >> 2 ^ uVar12 >> 1 ^ uVar12 >> 7 ^
               uVar9 ^ ((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1)
                                         << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                      bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                        0x18 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                                bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                              bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                            bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                        (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1)
                                         << 1 | bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 |
                                      bVar5 >> 5 & 1) << 1 | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8
                       | (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1
                                          ) << 1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                       bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1)) >> 1 ^ uVar12;
  uVar16 = local_70[0xb] ^ local_70[0xe] ^ local_70[0xc];
  uVar10 = local_70[0xd] ^ local_70[0xf] ^ local_70[0x11] ^ local_70[0x10] ^ uVar16;
  bVar3 = (byte)uVar16;
  bVar4 = (byte)(uVar16 >> 8);
  bVar5 = (byte)(uVar16 >> 0x10);
  bVar1 = (byte)(uVar16 >> 0x18);
  bVar6 = (byte)uVar10;
  bVar7 = (byte)(uVar10 >> 8);
  bVar8 = (byte)(uVar10 >> 0x10);
  bVar2 = (byte)(uVar10 >> 0x18);
  param_1[4] = uVar12 << 0x1f ^ uVar12 << 0x1e ^ uVar12 << 0x19 ^
               local_70[0] >> 2 ^ local_70[0] >> 1 ^ local_70[0] >> 7 ^
               local_70[2] ^
               ((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 | bVar6 >> 2 & 1) << 1 |
                                bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                             bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x18 |
                (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 | bVar7 >> 2 & 1) << 1 |
                                bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1 |
                             bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 0x10 |
                (uint)(byte)((((((((bVar8 & 1) << 1 | bVar8 >> 1 & 1) << 1 | bVar8 >> 2 & 1) << 1 |
                                bVar8 >> 3 & 1) << 1 | bVar8 >> 4 & 1) << 1 | bVar8 >> 5 & 1) << 1 |
                             bVar8 >> 6 & 1) << 1 | bVar8 >> 7) << 8 |
               (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) << 1 |
                               bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                            bVar2 >> 6 & 1) << 1)) >> 1 ^ local_70[3] ^ local_70[1] ^ local_70[7] ^
               local_70[0];
  local_70[0xf] = local_70[0xb] ^ local_70[10] ^ local_70[9] ^ local_70[0xf];
  bVar6 = (byte)local_70[0xf];
  bVar7 = (byte)(local_70[0xf] >> 8);
  bVar8 = (byte)(local_70[0xf] >> 0x10);
  bVar2 = (byte)(local_70[0xf] >> 0x18);
  uVar9 = local_70[8] ^
          ((uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 | bVar6 >> 2 & 1) << 1 |
                           bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                        bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 0x18 |
           (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1) << 1 | bVar7 >> 2 & 1) << 1 |
                           bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1) << 1 | bVar7 >> 5 & 1) << 1 |
                        bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 0x10 |
           (uint)(byte)((((((((bVar8 & 1) << 1 | bVar8 >> 1 & 1) << 1 | bVar8 >> 2 & 1) << 1 |
                           bVar8 >> 3 & 1) << 1 | bVar8 >> 4 & 1) << 1 | bVar8 >> 5 & 1) << 1 |
                        bVar8 >> 6 & 1) << 1 | bVar8 >> 7) << 8 |
          (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) << 1 |
                          bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                       bVar2 >> 6 & 1) << 1)) >> 1 ^ local_70[6] ^ local_70[7] ^ local_70[4] ^ uVar9
  ;
  param_1[6] = uVar9 << 0x1f ^ uVar9 << 0x1e ^ uVar9 << 0x19 ^
               uVar11 >> 2 ^ uVar11 >> 1 ^ uVar11 >> 7 ^
               local_70[3] ^
               ((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1) << 1 |
                                bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                             bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x18 |
                (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1) << 1 |
                                bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                             bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10 |
                (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1) << 1 |
                                bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                             bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 8 |
               (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) << 1 |
                               bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                            bVar1 >> 6 & 1) << 1)) >> 1 ^ uVar11;
  bVar2 = (byte)local_70[0xc];
  bVar3 = (byte)(local_70[0xc] >> 8);
  bVar4 = (byte)(local_70[0xc] >> 0x10);
  bVar1 = (byte)(local_70[0xc] >> 0x18);
  uVar9 = local_70[0] << 0x1f ^ local_70[0] << 0x1e ^ local_70[0] << 0x19 ^ uVar9;
  param_1[7] = uVar9 >> 2 ^ uVar9 >> 1 ^ uVar9 >> 7 ^
               ((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) << 1 |
                                bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                             bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18 |
                (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1) << 1 |
                                bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                             bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10 |
                (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1) << 1 |
                                bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                             bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
               (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) << 1 |
                               bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                            bVar1 >> 6 & 1) << 1)) >> 1 ^ uVar9;
  return;
}

