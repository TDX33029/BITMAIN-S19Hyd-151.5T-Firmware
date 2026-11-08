// FUN_017436cc @ 017436cc size=3460 calls_out=1 calls_in=1
// strings: 

void FUN_017436cc(int param_1,undefined4 param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint *puVar1;
  byte *pbVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint *extraout_r1;
  uint *puVar5;
  uint *extraout_r1_00;
  uint *extraout_r1_01;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  uint *puVar9;
  byte *pbVar10;
  code *pcVar11;
  code *pcVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  code *pcVar16;
  uint *puVar17;
  uint *local_7c;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c [2];
  
  local_2c[0] = DAT_018ddaf8;
  pbVar10 = (byte *)((int)param_5 + *(uint *)(param_1 + 0x38));
  uVar8 = *(int *)(param_1 + 0x3c) + (uint)CARRY4((uint)param_5,*(uint *)(param_1 + 0x38));
  puVar4 = (uint *)(0xf - (uVar8 + (pbVar10 >= &DAT_ffffffe1)));
  if (0xe < uVar8 && (uint)(pbVar10 < &DAT_ffffffe1) <= 0xf - uVar8) {
    uVar3 = 0;
    goto LAB_017441b8;
  }
  *(byte **)(param_1 + 0x38) = pbVar10;
  pcVar16 = *(code **)(param_1 + 0x150);
  pcVar11 = *(code **)(param_1 + 0x158);
  pcVar12 = *(code **)(param_1 + 0x154);
  *(uint *)(param_1 + 0x3c) = uVar8;
  if (*(int *)(param_1 + 0x164) != 0) {
    (*pcVar16)(param_1 + 0x40,param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x164) = 0;
    puVar4 = extraout_r1;
  }
  puVar13 = *(uint **)(param_1 + 0x160);
  if (puVar13 == (uint *)0x0) {
LAB_017437ec:
    puVar13 = (uint *)(param_1 + 0xc);
    if ((puVar13 < &uStack_50 && &uStack_54 < puVar13) ||
       ((puVar4 = (uint *)0x0, puVar13 < &uStack_54 &&
        (puVar4 = (uint *)(param_1 + 0x10), &uStack_54 < puVar4)))) {
LAB_0174444c:
                    /* WARNING: Does not return */
      pcVar11 = (code *)software_udf(0,0x174444c);
      (*pcVar11)();
    }
    uVar8 = *(uint *)(param_1 + 0xc);
    uVar8 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
            uVar8 >> 0x18;
    if ((uint *)0xbff < param_5) {
      puVar5 = (uint *)(param_1 + 0x10);
      puVar14 = (uint *)(param_1 + 0x14);
      puVar1 = (uint *)(param_1 + 0x18);
      puVar17 = (uint *)(param_1 + 0x1c);
      do {
        uVar15 = uVar8 + 0xc0;
        local_7c = param_4;
        while( true ) {
          uVar8 = uVar8 + 1;
          (*pcVar11)(param_1,puVar5,param_2);
          if ((((((&uStack_50 < puVar5 && puVar13 < &uStack_50) ||
                 (puVar13 < &uStack_4c && &uStack_50 < puVar13)) ||
                (*(uint *)(param_1 + 0xc) =
                      uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8
                      | uVar8 >> 0x18, &uStack_44 < param_3 && param_3 < &uStack_40)) ||
               ((param_3 < &uStack_44 && (&uStack_44 < param_3 + 1)))) ||
              ((&uStack_40 < puVar5 && puVar5 < &uStack_3c ||
               ((puVar5 < &uStack_40 && (&uStack_40 < puVar14)))))) ||
             (((local_7c < &uStack_3c && (&uStack_3c < local_7c + 1)) ||
              (&uStack_3c < local_7c && local_7c < &uStack_38)))) goto LAB_0174444c;
          *local_7c = *param_3 ^ *(uint *)(param_1 + 0x10);
          puVar4 = param_3 + 1;
          if (((&uStack_44 < puVar4 && puVar4 < &uStack_40) ||
              (((puVar4 < &uStack_44 && (&uStack_44 < param_3 + 2)) ||
               (&uStack_40 < puVar14 && puVar14 < &uStack_3c)))) ||
             ((puVar14 < &uStack_40 && (&uStack_40 < puVar1)))) goto LAB_0174444c;
          puVar9 = local_7c + 1;
          if (((puVar9 < &uStack_3c) && (&uStack_3c < local_7c + 2)) ||
             (&uStack_3c < puVar9 && puVar9 < &uStack_38)) goto LAB_0174444c;
          *puVar9 = *puVar4 ^ *(uint *)(param_1 + 0x14);
          puVar4 = param_3 + 2;
          if (((&uStack_44 < puVar4 && puVar4 < &uStack_40) ||
              ((puVar4 < &uStack_44 && (&uStack_44 < param_3 + 3)))) ||
             ((&uStack_40 < puVar1 && puVar1 < &uStack_3c ||
              ((puVar1 < &uStack_40 && (&uStack_40 < puVar17)))))) goto LAB_0174444c;
          puVar9 = local_7c + 2;
          if (((puVar9 < &uStack_3c) && (&uStack_3c < local_7c + 3)) ||
             (&uStack_3c < puVar9 && puVar9 < &uStack_38)) goto LAB_0174444c;
          *puVar9 = *puVar4 ^ *(uint *)(param_1 + 0x18);
          puVar4 = param_3 + 3;
          if (((puVar4 < &uStack_40 && &uStack_44 < puVar4) ||
              (((puVar4 < &uStack_44 && (&uStack_44 < param_3 + 4)) ||
               (puVar17 < &uStack_3c && &uStack_40 < puVar17)))) ||
             ((puVar17 < &uStack_40 && (&uStack_40 < (uint *)(param_1 + 0x20))))) goto LAB_0174444c;
          puVar9 = local_7c + 3;
          if (((puVar9 < &uStack_3c) && (&uStack_3c < local_7c + 4)) ||
             (puVar9 < &uStack_38 && &uStack_3c < puVar9)) goto LAB_0174444c;
          param_4 = local_7c + 4;
          param_3 = param_3 + 4;
          *puVar9 = *puVar4 ^ *(uint *)(param_1 + 0x1c);
          if (uVar8 == uVar15) break;
          local_7c = param_4;
        }
        (*pcVar12)(param_1 + 0x40,param_1 + 0x50,local_7c + -0x2fc,0xc00);
        param_5 = param_5 + -0x300;
        puVar4 = extraout_r1_00;
      } while ((uint *)0xbff < param_5);
    }
    uVar15 = (uint)param_5 & 0xfffffff0;
    if (uVar15 != 0) {
      puVar5 = (uint *)(param_1 + 0x10);
      puVar1 = (uint *)(param_1 + 0x14);
      puVar4 = (uint *)(param_1 + 0x18);
      puVar14 = (uint *)(param_1 + 0x1c);
      do {
        uVar8 = uVar8 + 1;
        (*pcVar11)(param_1,puVar5,param_2);
        if (((((puVar13 < &uStack_4c && &uStack_4c < puVar5) ||
              (&uStack_4c < puVar13 && puVar13 < &uStack_48)) ||
             ((*(uint *)(param_1 + 0xc) =
                    uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
                    uVar8 >> 0x18, &uStack_38 < param_3 && param_3 < &uStack_34 ||
              ((((param_3 < &uStack_38 && (&uStack_38 < param_3 + 1)) ||
                (&uStack_34 < puVar5 && puVar5 < &uStack_30)) ||
               ((puVar5 < &uStack_34 && (&uStack_34 < puVar1)))))))) ||
            ((param_4 < &uStack_30 && (&uStack_30 < param_4 + 1)))) ||
           (&uStack_30 < param_4 && param_4 < local_2c)) goto LAB_0174444c;
        *param_4 = *param_3 ^ *(uint *)(param_1 + 0x10);
        puVar17 = param_3 + 1;
        if (((&uStack_38 < puVar17 && puVar17 < &uStack_34) ||
            ((puVar17 < &uStack_38 && (&uStack_38 < param_3 + 2)))) ||
           ((&uStack_34 < puVar1 && puVar1 < &uStack_30 ||
            ((puVar1 < &uStack_34 && (&uStack_34 < puVar4)))))) goto LAB_0174444c;
        puVar9 = param_4 + 1;
        if (((puVar9 < &uStack_30) && (&uStack_30 < param_4 + 2)) ||
           (&uStack_30 < puVar9 && puVar9 < local_2c)) goto LAB_0174444c;
        *puVar9 = *puVar17 ^ *(uint *)(param_1 + 0x14);
        puVar17 = param_3 + 2;
        if (((&uStack_38 < puVar17 && puVar17 < &uStack_34) ||
            (((puVar17 < &uStack_38 && (&uStack_38 < param_3 + 3)) ||
             (&uStack_34 < puVar4 && puVar4 < &uStack_30)))) ||
           ((puVar4 < &uStack_34 && (&uStack_34 < puVar14)))) goto LAB_0174444c;
        puVar9 = param_4 + 2;
        if (((puVar9 < &uStack_30) && (&uStack_30 < param_4 + 3)) ||
           (&uStack_30 < puVar9 && puVar9 < local_2c)) goto LAB_0174444c;
        *puVar9 = *puVar17 ^ *(uint *)(param_1 + 0x18);
        puVar17 = param_3 + 3;
        if (((&uStack_38 < puVar17 && puVar17 < &uStack_34) ||
            ((puVar17 < &uStack_38 && (&uStack_38 < param_3 + 4)))) ||
           ((&uStack_34 < puVar14 && puVar14 < &uStack_30 ||
            ((puVar14 < &uStack_34 && (&uStack_34 < (uint *)(param_1 + 0x20)))))))
        goto LAB_0174444c;
        puVar9 = param_4 + 3;
        if (((puVar9 < &uStack_30) && (&uStack_30 < param_4 + 4)) ||
           (puVar9 < local_2c && &uStack_30 < puVar9)) goto LAB_0174444c;
        *puVar9 = *puVar17 ^ *(uint *)(param_1 + 0x1c);
        param_4 = param_4 + 4;
        param_3 = param_3 + 4;
        param_5 = param_5 + -4;
      } while (&DAT_0000000f < param_5);
      (*pcVar12)(param_1 + 0x40,param_1 + 0x50,(int)param_4 - uVar15);
      puVar4 = extraout_r1_01;
    }
    if (param_5 != (uint *)0x0) {
      puVar1 = (uint *)(param_1 + 0x10);
      (*pcVar11)(param_1,puVar1,param_2);
      puVar4 = &uStack_48;
      uVar8 = uVar8 + 1;
      if ((puVar13 < puVar4 && puVar4 < puVar1) || (puVar4 < puVar13 && puVar13 < &uStack_44))
      goto LAB_0174444c;
      *(uint *)(param_1 + 0xc) =
           uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
           uVar8 >> 0x18;
      pbVar10 = (byte *)((int)param_5 + -1);
      if (pbVar10 < (byte *)0x3) {
        bVar7 = (byte)*param_3 ^ *(byte *)(param_1 + 0x10);
        *(byte *)param_4 = bVar7;
        *(byte *)(param_1 + 0x40) = bVar7 ^ *(byte *)(param_1 + 0x40);
        if (pbVar10 != (byte *)0x0) goto LAB_01744228;
      }
      else {
        pbVar6 = (byte *)((param_1 + 0x3f) - (int)param_3);
        if ((byte *)0x2 < pbVar6) {
          pbVar6 = (byte *)((int)param_4 + (-1 - (int)param_3));
        }
        puVar4 = (uint *)(uint)((byte *)0x2 < pbVar6);
        if ((byte *)0x2 < pbVar6 && (param_4 + 1 <= puVar1 || (uint *)(param_1 + 0x44) <= param_4))
        {
          uVar8 = *param_3 ^ *(uint *)(param_1 + 0x10);
          *param_4 = uVar8;
          *(uint *)(param_1 + 0x40) = uVar8 ^ *(uint *)(param_1 + 0x40);
          puVar4 = (uint *)&DAT_00000001;
          if ((uint)param_5 >> 2 != 1) {
            uVar8 = param_3[1] ^ *(uint *)(param_1 + 0x14);
            param_4[1] = uVar8;
            puVar4 = *(uint **)(param_1 + 0x44);
            *(uint *)(param_1 + 0x44) = uVar8 ^ (uint)puVar4;
            if ((uint)param_5 >> 2 == 3) {
              uVar8 = param_3[2] ^ *(uint *)(param_1 + 0x18);
              param_4[2] = uVar8;
              puVar4 = *(uint **)(param_1 + 0x48);
              *(uint *)(param_1 + 0x48) = uVar8 ^ (uint)puVar4;
            }
          }
          if (((uint)param_5 & 3) != 0) {
            pbVar6 = (byte *)((uint)param_5 & 0xfffffffc);
            bVar7 = *(byte *)((int)param_3 + (int)pbVar6) ^ pbVar6[param_1 + 0x10];
            *(byte *)((int)param_4 + (int)pbVar6) = bVar7;
            bVar7 = bVar7 ^ pbVar6[param_1 + 0x40];
            pbVar6[param_1 + 0x40] = bVar7;
            puVar4 = (uint *)(uint)bVar7;
            if (pbVar10 != pbVar6) {
              pbVar2 = pbVar6 + 1;
              puVar4 = (uint *)(pbVar2 + param_1);
              bVar7 = *(byte *)((int)param_3 + (int)pbVar2) ^ (byte)puVar4[4];
              *(byte *)((int)param_4 + (int)pbVar2) = bVar7;
              *(byte *)(puVar4 + 0x10) = bVar7 ^ (byte)puVar4[0x10];
              if ((int)pbVar10 - (int)pbVar6 != 1) {
                pbVar6 = pbVar6 + 2;
                puVar4 = (uint *)(pbVar6 + param_1);
                bVar7 = *(byte *)((int)param_3 + (int)pbVar6) ^ (byte)puVar4[4];
                *(byte *)((int)param_4 + (int)pbVar6) = bVar7;
                *(byte *)(puVar4 + 0x10) = bVar7 ^ (byte)puVar4[0x10];
              }
            }
          }
        }
        else {
          bVar7 = (byte)*param_3 ^ *(byte *)(param_1 + 0x10);
          *(byte *)param_4 = bVar7;
          *(byte *)(param_1 + 0x40) = bVar7 ^ *(byte *)(param_1 + 0x40);
LAB_01744228:
          bVar7 = *(byte *)(param_1 + 0x11) ^ *(byte *)((int)param_3 + 1);
          *(byte *)((int)param_4 + 1) = bVar7;
          *(byte *)(param_1 + 0x41) = bVar7 ^ *(byte *)(param_1 + 0x41);
          if (param_5 != (uint *)&SUB_00000002) {
            bVar7 = *(byte *)(param_1 + 0x12) ^ *(byte *)((int)param_3 + 2);
            *(byte *)((int)param_4 + 2) = bVar7;
            *(byte *)(param_1 + 0x42) = bVar7 ^ *(byte *)(param_1 + 0x42);
            puVar4 = param_5;
            if (param_5 != (uint *)0x3) {
              bVar7 = *(byte *)((int)param_3 + 3) ^ *(byte *)(param_1 + 0x13);
              *(byte *)((int)param_4 + 3) = bVar7;
              *(byte *)(param_1 + 0x43) = bVar7 ^ *(byte *)(param_1 + 0x43);
              if (param_5 != (uint *)&DAT_00000004) {
                bVar7 = (byte)param_3[1] ^ *(byte *)(param_1 + 0x14);
                *(byte *)(param_4 + 1) = bVar7;
                *(byte *)(param_1 + 0x44) = bVar7 ^ *(byte *)(param_1 + 0x44);
                if (param_5 != (uint *)&DAT_00000005) {
                  bVar7 = *(byte *)((int)param_3 + 5) ^ *(byte *)(param_1 + 0x15);
                  *(byte *)((int)param_4 + 5) = bVar7;
                  *(byte *)(param_1 + 0x45) = bVar7 ^ *(byte *)(param_1 + 0x45);
                  if (param_5 != (uint *)&DAT_00000006) {
                    bVar7 = *(byte *)((int)param_3 + 6) ^ *(byte *)(param_1 + 0x16);
                    *(byte *)((int)param_4 + 6) = bVar7;
                    *(byte *)(param_1 + 0x46) = bVar7 ^ *(byte *)(param_1 + 0x46);
                    if (param_5 != (uint *)&DAT_00000007) {
                      bVar7 = *(byte *)((int)param_3 + 7) ^ *(byte *)(param_1 + 0x17);
                      *(byte *)((int)param_4 + 7) = bVar7;
                      *(byte *)(param_1 + 0x47) = bVar7 ^ *(byte *)(param_1 + 0x47);
                      if (param_5 != (uint *)&DAT_00000008) {
                        bVar7 = (byte)param_3[2] ^ *(byte *)(param_1 + 0x18);
                        *(byte *)(param_4 + 2) = bVar7;
                        *(byte *)(param_1 + 0x48) = bVar7 ^ *(byte *)(param_1 + 0x48);
                        if (param_5 != (uint *)&DAT_00000009) {
                          bVar7 = *(byte *)((int)param_3 + 9) ^ *(byte *)(param_1 + 0x19);
                          *(byte *)((int)param_4 + 9) = bVar7;
                          *(byte *)(param_1 + 0x49) = bVar7 ^ *(byte *)(param_1 + 0x49);
                          if (param_5 != (uint *)&DAT_0000000a) {
                            bVar7 = *(byte *)((int)param_3 + 10) ^ *(byte *)(param_1 + 0x1a);
                            *(byte *)((int)param_4 + 10) = bVar7;
                            *(byte *)(param_1 + 0x4a) = bVar7 ^ *(byte *)(param_1 + 0x4a);
                            if (param_5 != (uint *)&DAT_0000000b) {
                              bVar7 = *(byte *)((int)param_3 + 0xb) ^ *(byte *)(param_1 + 0x1b);
                              *(byte *)((int)param_4 + 0xb) = bVar7;
                              *(byte *)(param_1 + 0x4b) = bVar7 ^ *(byte *)(param_1 + 0x4b);
                              if (param_5 != (uint *)&DAT_0000000c) {
                                bVar7 = (byte)param_3[3] ^ *(byte *)(param_1 + 0x1c);
                                *(byte *)(param_4 + 3) = bVar7;
                                *(byte *)(param_1 + 0x4c) = bVar7 ^ *(byte *)(param_1 + 0x4c);
                                if (param_5 != (uint *)&DAT_0000000d) {
                                  bVar7 = *(byte *)((int)param_3 + 0xd) ^ *(byte *)(param_1 + 0x1d);
                                  *(byte *)((int)param_4 + 0xd) = bVar7;
                                  *(byte *)(param_1 + 0x4d) = bVar7 ^ *(byte *)(param_1 + 0x4d);
                                  if (param_5 != (uint *)&DAT_0000000e) {
                                    bVar7 = *(byte *)(param_1 + 0x1e) ^
                                            *(byte *)((int)param_3 + 0xe);
                                    *(byte *)((int)param_4 + 0xe) = bVar7;
                                    *(byte *)(param_1 + 0x4e) = bVar7 ^ *(byte *)(param_1 + 0x4e);
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (param_5 != (uint *)0x0) {
      puVar1 = puVar13;
      puVar5 = param_4;
      puVar14 = param_3;
      do {
        param_3 = (uint *)((int)puVar14 + 1);
        puVar13 = (uint *)((uint)((int)puVar1 + 1) & 0xf);
        bVar7 = (byte)*puVar14 ^ *(byte *)((int)puVar1 + param_1 + 0x10);
        param_4 = (uint *)((int)puVar5 + 1);
        *(byte *)puVar5 = bVar7;
        puVar4 = (uint *)(uint)(puVar13 != (uint *)0x0);
        param_5 = (uint *)((int)param_5 + -1);
        *(byte *)((int)puVar1 + param_1 + 0x40) = bVar7 ^ *(byte *)((int)puVar1 + param_1 + 0x40);
        if (param_5 == (uint *)0x0) {
          puVar17 = (uint *)0x0;
        }
        else {
          puVar17 = puVar4;
        }
        puVar1 = puVar13;
        puVar5 = param_4;
        puVar14 = param_3;
      } while (puVar17 != (uint *)0x0);
      if (puVar13 == (uint *)0x0) {
        (*pcVar16)(param_1 + 0x40,param_1 + 0x50);
        goto LAB_017437ec;
      }
    }
    param_5 = puVar13;
  }
  uVar3 = 1;
  *(uint **)(param_1 + 0x160) = param_5;
LAB_017441b8:
  if ((local_2c[0] ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar3,puVar4,local_2c[0] ^ DAT_018ddaf8,0);
  }
  return;
}

