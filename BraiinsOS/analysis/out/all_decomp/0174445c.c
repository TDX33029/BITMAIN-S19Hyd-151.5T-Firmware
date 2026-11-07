// FUN_0174445c @ 0174445c size=3436 calls_out=1 calls_in=1
// strings: 

void FUN_0174445c(int param_1,undefined4 param_2,uint *param_3,uint *param_4,uint *param_5)

{
  byte bVar1;
  byte bVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint *extraout_r1;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  byte *pbVar9;
  code *pcVar10;
  code *pcVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  byte *pbVar15;
  code *pcVar16;
  uint *puVar17;
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
  pbVar9 = (byte *)((int)param_5 + *(uint *)(param_1 + 0x38));
  uVar7 = *(int *)(param_1 + 0x3c) + (uint)CARRY4((uint)param_5,*(uint *)(param_1 + 0x38));
  puVar5 = (uint *)(0xf - (uVar7 + (pbVar9 >= &DAT_ffffffe1)));
  if (0xe < uVar7 && (uint)(pbVar9 < &DAT_ffffffe1) <= 0xf - uVar7) {
    uVar4 = 0;
    goto LAB_01744f30;
  }
  *(byte **)(param_1 + 0x38) = pbVar9;
  pcVar16 = *(code **)(param_1 + 0x150);
  pcVar10 = *(code **)(param_1 + 0x158);
  pcVar11 = *(code **)(param_1 + 0x154);
  *(uint *)(param_1 + 0x3c) = uVar7;
  if (*(int *)(param_1 + 0x164) != 0) {
    (*pcVar16)(param_1 + 0x40,param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x164) = 0;
    puVar5 = extraout_r1;
  }
  puVar12 = *(uint **)(param_1 + 0x160);
  if (puVar12 == (uint *)0x0) {
LAB_0174457c:
    puVar12 = (uint *)(param_1 + 0xc);
    if ((puVar12 < &uStack_50 && &uStack_54 < puVar12) ||
       ((puVar5 = (uint *)0x0, puVar12 < &uStack_54 &&
        (puVar5 = (uint *)(param_1 + 0x10), &uStack_54 < puVar5)))) {
LAB_017451c4:
                    /* WARNING: Does not return */
      pcVar10 = (code *)software_udf(0,0x17451c4);
      (*pcVar10)();
    }
    uVar7 = *(uint *)(param_1 + 0xc);
    uVar7 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
            uVar7 >> 0x18;
    if ((uint *)0xbff < param_5) {
      puVar6 = (uint *)(param_1 + 0x10);
      puVar13 = (uint *)(param_1 + 0x14);
      puVar3 = (uint *)(param_1 + 0x18);
      puVar17 = (uint *)(param_1 + 0x1c);
      do {
        (*pcVar11)(param_1 + 0x40,param_1 + 0x50,param_3,0xc00);
        puVar14 = param_4 + 0x300;
        do {
          uVar7 = uVar7 + 1;
          (*pcVar10)(param_1,puVar6,param_2);
          if ((((((&uStack_50 < puVar6 && puVar12 < &uStack_50) ||
                 (puVar12 < &uStack_4c && &uStack_50 < puVar12)) ||
                (*(uint *)(param_1 + 0xc) =
                      uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8
                      | uVar7 >> 0x18, &uStack_44 < param_3 && param_3 < &uStack_40)) ||
               ((param_3 < &uStack_44 && (&uStack_44 < param_3 + 1)))) ||
              ((&uStack_40 < puVar6 && puVar6 < &uStack_3c ||
               ((puVar6 < &uStack_40 && (&uStack_40 < puVar13)))))) ||
             (((param_4 < &uStack_3c && (&uStack_3c < param_4 + 1)) ||
              (&uStack_3c < param_4 && param_4 < &uStack_38)))) goto LAB_017451c4;
          *param_4 = *param_3 ^ *(uint *)(param_1 + 0x10);
          puVar5 = param_3 + 1;
          if (((&uStack_44 < puVar5 && puVar5 < &uStack_40) ||
              (((puVar5 < &uStack_44 && (&uStack_44 < param_3 + 2)) ||
               (&uStack_40 < puVar13 && puVar13 < &uStack_3c)))) ||
             ((puVar13 < &uStack_40 && (&uStack_40 < puVar3)))) goto LAB_017451c4;
          puVar8 = param_4 + 1;
          if (((puVar8 < &uStack_3c) && (&uStack_3c < param_4 + 2)) ||
             (&uStack_3c < puVar8 && puVar8 < &uStack_38)) goto LAB_017451c4;
          *puVar8 = *puVar5 ^ *(uint *)(param_1 + 0x14);
          puVar5 = param_3 + 2;
          if (((&uStack_44 < puVar5 && puVar5 < &uStack_40) ||
              ((puVar5 < &uStack_44 && (&uStack_44 < param_3 + 3)))) ||
             ((&uStack_40 < puVar3 && puVar3 < &uStack_3c ||
              ((puVar3 < &uStack_40 && (&uStack_40 < puVar17)))))) goto LAB_017451c4;
          puVar8 = param_4 + 2;
          if (((puVar8 < &uStack_3c) && (&uStack_3c < param_4 + 3)) ||
             (&uStack_3c < puVar8 && puVar8 < &uStack_38)) goto LAB_017451c4;
          *puVar8 = *puVar5 ^ *(uint *)(param_1 + 0x18);
          puVar5 = param_3 + 3;
          if (((puVar5 < &uStack_40 && &uStack_44 < puVar5) ||
              (((puVar5 < &uStack_44 && (&uStack_44 < param_3 + 4)) ||
               (&uStack_40 < puVar17 && puVar17 < &uStack_3c)))) ||
             ((puVar17 < &uStack_40 && (&uStack_40 < (uint *)(param_1 + 0x20))))) goto LAB_017451c4;
          puVar8 = param_4 + 3;
          if (((puVar8 < &uStack_3c) && (&uStack_3c < param_4 + 4)) ||
             (puVar5 = (uint *)(*puVar5 ^ *(uint *)(param_1 + 0x1c)),
             &uStack_3c < puVar8 && puVar8 < &uStack_38)) goto LAB_017451c4;
          param_4 = param_4 + 4;
          param_3 = param_3 + 4;
          *puVar8 = (uint)puVar5;
        } while (param_4 != puVar14);
        param_5 = param_5 + -0x300;
      } while ((uint *)0xbff < param_5);
    }
    if (((uint)param_5 & 0xfffffff0) != 0) {
      (*pcVar11)(param_1 + 0x40,param_1 + 0x50,param_3);
      puVar5 = (uint *)(param_1 + 0x10);
      puVar13 = (uint *)(param_1 + 0x14);
      puVar6 = (uint *)(param_1 + 0x18);
      puVar3 = (uint *)(param_1 + 0x1c);
      do {
        (*pcVar10)(param_1,puVar5,param_2);
        uVar7 = uVar7 + 1;
        if (((((&uStack_4c < puVar5 && puVar12 < &uStack_4c) ||
              (&uStack_4c < puVar12 && puVar12 < &uStack_48)) ||
             ((*(uint *)(param_1 + 0xc) =
                    uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                    uVar7 >> 0x18, &uStack_38 < param_3 && param_3 < &uStack_34 ||
              ((((param_3 < &uStack_38 && (&uStack_38 < param_3 + 1)) ||
                (&uStack_34 < puVar5 && puVar5 < &uStack_30)) ||
               ((puVar5 < &uStack_34 && (&uStack_34 < puVar13)))))))) ||
            ((param_4 < &uStack_30 && (&uStack_30 < param_4 + 1)))) ||
           (&uStack_30 < param_4 && param_4 < local_2c)) goto LAB_017451c4;
        *param_4 = *param_3 ^ *(uint *)(param_1 + 0x10);
        puVar17 = param_3 + 1;
        if (((&uStack_38 < puVar17 && puVar17 < &uStack_34) ||
            ((puVar17 < &uStack_38 && (&uStack_38 < param_3 + 2)))) ||
           ((&uStack_34 < puVar13 && puVar13 < &uStack_30 ||
            ((puVar13 < &uStack_34 && (&uStack_34 < puVar6)))))) goto LAB_017451c4;
        puVar14 = param_4 + 1;
        if (((puVar14 < &uStack_30) && (&uStack_30 < param_4 + 2)) ||
           (&uStack_30 < puVar14 && puVar14 < local_2c)) goto LAB_017451c4;
        *puVar14 = *puVar17 ^ *(uint *)(param_1 + 0x14);
        puVar17 = param_3 + 2;
        if (((&uStack_38 < puVar17 && puVar17 < &uStack_34) ||
            (((puVar17 < &uStack_38 && (&uStack_38 < param_3 + 3)) ||
             (&uStack_34 < puVar6 && puVar6 < &uStack_30)))) ||
           ((puVar6 < &uStack_34 && (&uStack_34 < puVar3)))) goto LAB_017451c4;
        puVar14 = param_4 + 2;
        if (((puVar14 < &uStack_30) && (&uStack_30 < param_4 + 3)) ||
           (&uStack_30 < puVar14 && puVar14 < local_2c)) goto LAB_017451c4;
        *puVar14 = *puVar17 ^ *(uint *)(param_1 + 0x18);
        puVar17 = param_3 + 3;
        if (((puVar17 < &uStack_34 && &uStack_38 < puVar17) ||
            ((puVar17 < &uStack_38 && (&uStack_38 < param_3 + 4)))) ||
           ((&uStack_34 < puVar3 && puVar3 < &uStack_30 ||
            ((puVar3 < &uStack_34 && (&uStack_34 < (uint *)(param_1 + 0x20))))))) goto LAB_017451c4;
        puVar14 = param_4 + 3;
        if (((puVar14 < &uStack_30) && (&uStack_30 < param_4 + 4)) ||
           (&uStack_30 < puVar14 && puVar14 < local_2c)) goto LAB_017451c4;
        *puVar14 = *puVar17 ^ *(uint *)(param_1 + 0x1c);
        param_4 = param_4 + 4;
        param_3 = param_3 + 4;
        param_5 = param_5 + -4;
      } while (&DAT_0000000f < param_5);
    }
    if (param_5 != (uint *)0x0) {
      (*pcVar10)(param_1,(uint *)(param_1 + 0x10),param_2);
      uVar7 = uVar7 + 1;
      if ((&uStack_48 < (uint *)(param_1 + 0x10) && puVar12 < &uStack_48) ||
         (puVar5 = &uStack_44, puVar12 < puVar5 && &uStack_48 < puVar12)) goto LAB_017451c4;
      *(uint *)(param_1 + 0xc) =
           uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
           uVar7 >> 0x18;
      pbVar9 = (byte *)((int)param_5 + -1);
      if (pbVar9 < (byte *)0x3) {
        uVar7 = *param_3;
        *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) ^ (byte)uVar7;
        *(byte *)param_4 = (byte)uVar7 ^ *(byte *)(param_1 + 0x10);
        if (pbVar9 != (byte *)0x0) goto LAB_01744fa0;
      }
      else {
        pbVar15 = (byte *)((param_1 + 0x3f) - (int)param_3);
        if ((byte *)0x2 < pbVar15) {
          pbVar15 = (byte *)((int)param_4 + (-1 - (int)param_3));
        }
        puVar5 = (uint *)((int)param_4 + (-0x11 - param_1));
        if (puVar5 < &DAT_00000033 || pbVar15 < (byte *)0x3) {
          uVar7 = *param_3;
          *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) ^ (byte)uVar7;
          *(byte *)param_4 = (byte)uVar7 ^ *(byte *)(param_1 + 0x10);
LAB_01744fa0:
          bVar1 = *(byte *)((int)param_3 + 1);
          *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) ^ bVar1;
          *(byte *)((int)param_4 + 1) = bVar1 ^ *(byte *)(param_1 + 0x11);
          if (param_5 != (uint *)&SUB_00000002) {
            bVar1 = *(byte *)((int)param_3 + 2);
            *(byte *)(param_1 + 0x42) = *(byte *)(param_1 + 0x42) ^ bVar1;
            *(byte *)((int)param_4 + 2) = bVar1 ^ *(byte *)(param_1 + 0x12);
            puVar5 = param_5;
            if (param_5 != (uint *)0x3) {
              bVar1 = *(byte *)((int)param_3 + 3);
              *(byte *)(param_1 + 0x43) = *(byte *)(param_1 + 0x43) ^ bVar1;
              *(byte *)((int)param_4 + 3) = bVar1 ^ *(byte *)(param_1 + 0x13);
              if (param_5 != (uint *)&DAT_00000004) {
                uVar7 = param_3[1];
                *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) ^ (byte)uVar7;
                *(byte *)(param_4 + 1) = (byte)uVar7 ^ *(byte *)(param_1 + 0x14);
                if (param_5 != (uint *)&DAT_00000005) {
                  bVar1 = *(byte *)((int)param_3 + 5);
                  *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) ^ bVar1;
                  *(byte *)((int)param_4 + 5) = bVar1 ^ *(byte *)(param_1 + 0x15);
                  if (param_5 != (uint *)&DAT_00000006) {
                    bVar1 = *(byte *)((int)param_3 + 6);
                    *(byte *)(param_1 + 0x46) = *(byte *)(param_1 + 0x46) ^ bVar1;
                    *(byte *)((int)param_4 + 6) = bVar1 ^ *(byte *)(param_1 + 0x16);
                    if (param_5 != (uint *)&DAT_00000007) {
                      bVar1 = *(byte *)((int)param_3 + 7);
                      *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) ^ bVar1;
                      *(byte *)((int)param_4 + 7) = bVar1 ^ *(byte *)(param_1 + 0x17);
                      if (param_5 != (uint *)&DAT_00000008) {
                        uVar7 = param_3[2];
                        *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) ^ (byte)uVar7;
                        *(byte *)(param_4 + 2) = (byte)uVar7 ^ *(byte *)(param_1 + 0x18);
                        if (param_5 != (uint *)&DAT_00000009) {
                          bVar1 = *(byte *)((int)param_3 + 9);
                          *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) ^ bVar1;
                          *(byte *)((int)param_4 + 9) = bVar1 ^ *(byte *)(param_1 + 0x19);
                          if (param_5 != (uint *)&DAT_0000000a) {
                            bVar1 = *(byte *)((int)param_3 + 10);
                            *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) ^ bVar1;
                            *(byte *)((int)param_4 + 10) = bVar1 ^ *(byte *)(param_1 + 0x1a);
                            if (param_5 != (uint *)&DAT_0000000b) {
                              bVar1 = *(byte *)((int)param_3 + 0xb);
                              *(byte *)(param_1 + 0x4b) = *(byte *)(param_1 + 0x4b) ^ bVar1;
                              *(byte *)((int)param_4 + 0xb) = bVar1 ^ *(byte *)(param_1 + 0x1b);
                              if (param_5 != (uint *)&DAT_0000000c) {
                                uVar7 = param_3[3];
                                *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x4c) ^ (byte)uVar7;
                                *(byte *)(param_4 + 3) = (byte)uVar7 ^ *(byte *)(param_1 + 0x1c);
                                if (param_5 != (uint *)&DAT_0000000d) {
                                  bVar1 = *(byte *)((int)param_3 + 0xd);
                                  *(byte *)(param_1 + 0x4d) = *(byte *)(param_1 + 0x4d) ^ bVar1;
                                  *(byte *)((int)param_4 + 0xd) = bVar1 ^ *(byte *)(param_1 + 0x1d);
                                  if (param_5 != (uint *)&DAT_0000000e) {
                                    bVar1 = *(byte *)((int)param_3 + 0xe);
                                    puVar5 = (uint *)(uint)*(byte *)(param_1 + 0x1e);
                                    *(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) ^ bVar1;
                                    *(byte *)((int)param_4 + 0xe) =
                                         bVar1 ^ *(byte *)(param_1 + 0x1e);
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
          uVar7 = *param_3;
          *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) ^ uVar7;
          puVar5 = *(uint **)(param_1 + 0x10);
          *param_4 = uVar7 ^ (uint)puVar5;
          if ((uint)param_5 >> 2 != 1) {
            uVar7 = param_3[1];
            *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) ^ uVar7;
            puVar5 = *(uint **)(param_1 + 0x14);
            param_4[1] = uVar7 ^ (uint)puVar5;
            if ((uint)param_5 >> 2 == 3) {
              uVar7 = param_3[2];
              *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) ^ uVar7;
              puVar5 = *(uint **)(param_1 + 0x18);
              param_4[2] = uVar7 ^ (uint)puVar5;
            }
          }
          if (((uint)param_5 & 3) != 0) {
            pbVar15 = (byte *)((uint)param_5 & 0xfffffffc);
            bVar1 = *(byte *)((int)param_3 + (int)pbVar15);
            pbVar15[param_1 + 0x40] = pbVar15[param_1 + 0x40] ^ bVar1;
            bVar1 = bVar1 ^ pbVar15[param_1 + 0x10];
            *(byte *)((int)param_4 + (int)pbVar15) = bVar1;
            puVar5 = (uint *)(uint)bVar1;
            if (pbVar9 != pbVar15) {
              puVar5 = (uint *)(pbVar15 + 1);
              bVar1 = *(byte *)((int)param_3 + (int)puVar5);
              *(byte *)((int)puVar5 + param_1 + 0x40) =
                   *(byte *)((int)puVar5 + param_1 + 0x40) ^ bVar1;
              *(byte *)((int)param_4 + (int)puVar5) =
                   bVar1 ^ *(byte *)((int)puVar5 + param_1 + 0x10);
              if ((int)pbVar9 - (int)pbVar15 != 1) {
                pbVar15 = pbVar15 + 2;
                bVar1 = *(byte *)((int)param_3 + (int)pbVar15);
                pbVar15[param_1 + 0x40] = pbVar15[param_1 + 0x40] ^ bVar1;
                bVar2 = pbVar15[param_1 + 0x10];
                *(byte *)((int)param_4 + (int)pbVar15) = bVar1 ^ bVar2;
                puVar5 = (uint *)(uint)bVar2;
              }
            }
          }
        }
      }
    }
  }
  else {
    if (param_5 != (uint *)0x0) {
      puVar3 = puVar12;
      puVar6 = param_4;
      puVar13 = param_3;
      do {
        param_3 = (uint *)((int)puVar13 + 1);
        uVar7 = *puVar13;
        puVar12 = (uint *)((uint)((int)puVar3 + 1) & 0xf);
        param_4 = (uint *)((int)puVar6 + 1);
        *(byte *)puVar6 = *(byte *)((int)puVar3 + param_1 + 0x10) ^ (byte)uVar7;
        puVar5 = (uint *)(uint)(puVar12 != (uint *)0x0);
        param_5 = (uint *)((int)param_5 + -1);
        *(byte *)((int)puVar3 + param_1 + 0x40) =
             (byte)uVar7 ^ *(byte *)((int)puVar3 + param_1 + 0x40);
        if (param_5 == (uint *)0x0) {
          puVar17 = (uint *)0x0;
        }
        else {
          puVar17 = puVar5;
        }
        puVar3 = puVar12;
        puVar6 = param_4;
        puVar13 = param_3;
      } while (puVar17 != (uint *)0x0);
      if (puVar12 == (uint *)0x0) {
        (*pcVar16)(param_1 + 0x40,param_1 + 0x50);
        goto LAB_0174457c;
      }
    }
    param_5 = puVar12;
  }
  uVar4 = 1;
  *(uint **)(param_1 + 0x160) = param_5;
LAB_01744f30:
  if ((local_2c[0] ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar4,puVar5,local_2c[0] ^ DAT_018ddaf8,0);
  }
  return;
}

