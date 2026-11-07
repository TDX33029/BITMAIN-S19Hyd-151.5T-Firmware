// FUN_01745930 @ 01745930 size=1896 calls_out=2 calls_in=1
// strings: 

void FUN_01745930(int param_1,undefined4 param_2,uint *param_3,uint *param_4,uint param_5,
                 code *param_6)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint *extraout_r1;
  uint *extraout_r1_00;
  uint *extraout_r1_01;
  uint *extraout_r1_02;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  code *pcVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  code *pcVar13;
  uint *puVar14;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c [2];
  
  local_2c[0] = DAT_018ddaf8;
  uVar7 = param_5 + *(uint *)(param_1 + 0x38);
  uVar5 = *(int *)(param_1 + 0x3c) + (uint)CARRY4(param_5,*(uint *)(param_1 + 0x38));
  puVar4 = (uint *)(0xf - (uVar5 + (uVar7 >= 0xffffffe1)));
  if (0xe < uVar5 && (uint)(uVar7 < 0xffffffe1) <= 0xf - uVar5) {
    uVar3 = 0;
    goto LAB_01745d0c;
  }
  *(uint *)(param_1 + 0x38) = uVar7;
  pcVar13 = *(code **)(param_1 + 0x150);
  pcVar8 = *(code **)(param_1 + 0x154);
  *(uint *)(param_1 + 0x3c) = uVar5;
  if (*(int *)(param_1 + 0x164) != 0) {
    (*pcVar13)(param_1 + 0x40,param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x164) = 0;
    puVar4 = extraout_r1;
  }
  uVar5 = *(uint *)(param_1 + 0x160);
  if (uVar5 != 0) {
    puVar14 = param_3;
    puVar12 = param_4;
    if (param_5 != 0) {
      do {
        iVar2 = param_1 + uVar5;
        param_3 = (uint *)((int)puVar14 + 1);
        uVar7 = *puVar14;
        uVar5 = uVar5 + 1 & 0xf;
        param_4 = (uint *)((int)puVar12 + 1);
        *(byte *)puVar12 = *(byte *)(iVar2 + 0x10) ^ (byte)uVar7;
        puVar4 = (uint *)(uint)(uVar5 != 0);
        param_5 = param_5 - 1;
        *(byte *)(iVar2 + 0x40) = (byte)uVar7 ^ *(byte *)(iVar2 + 0x40);
        if (param_5 == 0) {
          puVar6 = (uint *)0x0;
        }
        else {
          puVar6 = puVar4;
        }
        puVar14 = param_3;
        puVar12 = param_4;
      } while (puVar6 != (uint *)0x0);
      if (uVar5 == 0) {
        (*pcVar13)(param_1 + 0x40,param_1 + 0x50);
        goto LAB_01745a40;
      }
    }
    uVar3 = 1;
    *(uint *)(param_1 + 0x160) = uVar5;
    goto LAB_01745d0c;
  }
LAB_01745a40:
  puVar14 = (uint *)(param_1 + 0xc);
  if ((puVar14 < &uStack_38 && &uStack_3c < puVar14) ||
     ((puVar4 = (uint *)0x0, puVar14 < &uStack_3c &&
      (puVar4 = (uint *)(param_1 + 0x10), &uStack_3c < puVar4)))) goto LAB_01746090;
  uVar5 = *(uint *)(param_1 + 0xc);
  uVar5 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
  if (0xbff < param_5) {
    if (puVar14 < &uStack_34 && &uStack_38 < puVar14) {
      (*pcVar8)(param_1 + 0x40,param_1 + 0x50,param_3,0xc00);
      (*param_6)(param_3,param_4,0xc0,param_2,param_1);
      goto LAB_01746090;
    }
    do {
      (*pcVar8)(param_1 + 0x40,param_1 + 0x50,param_3,0xc00);
      (*param_6)(param_3,param_4,0xc0,param_2,param_1);
      if ((puVar14 < &uStack_38) && (&uStack_38 < (uint *)(param_1 + 0x10))) goto LAB_01746090;
      uVar5 = uVar5 + 0xc0;
      param_5 = param_5 - 0xc00;
      param_4 = param_4 + 0x300;
      param_3 = param_3 + 0x300;
      *(uint *)(param_1 + 0xc) =
           uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18;
      puVar4 = extraout_r1_00;
    } while (0xbff < param_5);
  }
  uVar7 = param_5 & 0xfffffff0;
  if (uVar7 != 0) {
    (*pcVar8)(param_1 + 0x40,param_1 + 0x50,param_3,uVar7);
    (*param_6)(param_3,param_4,param_5 >> 4,param_2,param_1);
    if ((puVar14 < &uStack_34) && (&uStack_34 < (uint *)(param_1 + 0x10))) goto LAB_01746090;
    uVar5 = uVar5 + (param_5 >> 4);
    if (puVar14 < &uStack_30 && &uStack_34 < puVar14) goto LAB_01746090;
    param_4 = (uint *)((int)param_4 + uVar7);
    param_3 = (uint *)((int)param_3 + uVar7);
    param_5 = param_5 - uVar7;
    *(uint *)(param_1 + 0xc) =
         uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
         uVar5 >> 0x18;
    puVar4 = extraout_r1_01;
  }
  if (param_5 == 0) goto LAB_01745cfc;
  uVar5 = uVar5 + 1;
  (**(code **)(param_1 + 0x158))(param_1,(uint *)(param_1 + 0x10),param_2);
  if ((&uStack_30 < (uint *)(param_1 + 0x10) && puVar14 < &uStack_30) ||
     (&uStack_30 < puVar14 && puVar14 < local_2c)) {
LAB_01746090:
                    /* WARNING: Does not return */
    pcVar8 = (code *)software_udf(0,0x1746090);
    (*pcVar8)();
  }
  *(uint *)(param_1 + 0xc) =
       uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18
  ;
  if (0x10 < param_5) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c24();
  }
  uVar5 = param_5 - 1;
  if (uVar5 < 3) {
    uVar7 = *param_3;
    *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) ^ (byte)uVar7;
    *(byte *)param_4 = (byte)uVar7 ^ *(byte *)(param_1 + 0x10);
    puVar4 = extraout_r1_02;
    if (uVar5 != 0) goto LAB_01745e1c;
  }
  else {
    pbVar9 = (byte *)((int)param_4 + (-1 - (int)param_3));
    if ((byte *)0x2 < pbVar9) {
      pbVar9 = (byte *)((param_1 + 0x3f) - (int)param_3);
    }
    puVar4 = (uint *)((int)param_4 + (-0x11 - param_1));
    if (puVar4 < &DAT_00000033 || pbVar9 < (byte *)0x3) {
      uVar5 = *param_3;
      *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) ^ (byte)uVar5;
      *(byte *)param_4 = (byte)uVar5 ^ *(byte *)(param_1 + 0x10);
LAB_01745e1c:
      bVar1 = *(byte *)((int)param_3 + 1);
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) ^ bVar1;
      *(byte *)((int)param_4 + 1) = bVar1 ^ *(byte *)(param_1 + 0x11);
      if (param_5 != 2) {
        bVar1 = *(byte *)((int)param_3 + 2);
        *(byte *)(param_1 + 0x42) = *(byte *)(param_1 + 0x42) ^ bVar1;
        *(byte *)((int)param_4 + 2) = bVar1 ^ *(byte *)(param_1 + 0x12);
        if (param_5 != 3) {
          bVar1 = *(byte *)((int)param_3 + 3);
          *(byte *)(param_1 + 0x43) = *(byte *)(param_1 + 0x43) ^ bVar1;
          *(byte *)((int)param_4 + 3) = bVar1 ^ *(byte *)(param_1 + 0x13);
          if (param_5 != 4) {
            uVar5 = param_3[1];
            *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) ^ (byte)uVar5;
            *(byte *)(param_4 + 1) = (byte)uVar5 ^ *(byte *)(param_1 + 0x14);
            if (param_5 != 5) {
              bVar1 = *(byte *)((int)param_3 + 5);
              *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) ^ bVar1;
              *(byte *)((int)param_4 + 5) = bVar1 ^ *(byte *)(param_1 + 0x15);
              if (param_5 != 6) {
                bVar1 = *(byte *)((int)param_3 + 6);
                *(byte *)(param_1 + 0x46) = *(byte *)(param_1 + 0x46) ^ bVar1;
                *(byte *)((int)param_4 + 6) = bVar1 ^ *(byte *)(param_1 + 0x16);
                if (param_5 != 7) {
                  bVar1 = *(byte *)((int)param_3 + 7);
                  *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) ^ bVar1;
                  *(byte *)((int)param_4 + 7) = bVar1 ^ *(byte *)(param_1 + 0x17);
                  if (param_5 != 8) {
                    uVar5 = param_3[2];
                    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) ^ (byte)uVar5;
                    *(byte *)(param_4 + 2) = (byte)uVar5 ^ *(byte *)(param_1 + 0x18);
                    if (param_5 != 9) {
                      bVar1 = *(byte *)((int)param_3 + 9);
                      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) ^ bVar1;
                      *(byte *)((int)param_4 + 9) = bVar1 ^ *(byte *)(param_1 + 0x19);
                      if (param_5 != 10) {
                        bVar1 = *(byte *)((int)param_3 + 10);
                        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) ^ bVar1;
                        *(byte *)((int)param_4 + 10) = bVar1 ^ *(byte *)(param_1 + 0x1a);
                        if (param_5 != 0xb) {
                          bVar1 = *(byte *)((int)param_3 + 0xb);
                          *(byte *)(param_1 + 0x4b) = *(byte *)(param_1 + 0x4b) ^ bVar1;
                          *(byte *)((int)param_4 + 0xb) = bVar1 ^ *(byte *)(param_1 + 0x1b);
                          if (param_5 != 0xc) {
                            uVar5 = param_3[3];
                            *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x4c) ^ (byte)uVar5;
                            *(byte *)(param_4 + 3) = (byte)uVar5 ^ *(byte *)(param_1 + 0x1c);
                            if (param_5 != 0xd) {
                              bVar1 = *(byte *)((int)param_3 + 0xd);
                              *(byte *)(param_1 + 0x4d) = *(byte *)(param_1 + 0x4d) ^ bVar1;
                              *(byte *)((int)param_4 + 0xd) = bVar1 ^ *(byte *)(param_1 + 0x1d);
                              if (param_5 != 0xe) {
                                bVar1 = *(byte *)((int)param_3 + 0xe);
                                *(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) ^ bVar1;
                                *(byte *)((int)param_4 + 0xe) = bVar1 ^ *(byte *)(param_1 + 0x1e);
                                if (param_5 != 0xf) {
                                  bVar1 = *(byte *)((int)param_3 + 0xf);
                                  puVar4 = (uint *)(uint)*(byte *)(param_1 + 0x1f);
                                  *(byte *)(param_1 + 0x4f) = *(byte *)(param_1 + 0x4f) ^ bVar1;
                                  *(byte *)((int)param_4 + 0xf) = bVar1 ^ *(byte *)(param_1 + 0x1f);
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
      uVar10 = *param_3;
      uVar7 = param_5 >> 2;
      *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) ^ uVar10;
      puVar4 = *(uint **)(param_1 + 0x10);
      *param_4 = uVar10 ^ (uint)puVar4;
      if (uVar7 != 1) {
        uVar10 = param_3[1];
        *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) ^ uVar10;
        puVar4 = *(uint **)(param_1 + 0x14);
        param_4[1] = uVar10 ^ (uint)puVar4;
        if (uVar7 != 2) {
          uVar10 = param_3[2];
          *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) ^ uVar10;
          puVar4 = *(uint **)(param_1 + 0x18);
          param_4[2] = uVar10 ^ (uint)puVar4;
          if (uVar7 == 4) {
            uVar5 = param_3[3];
            puVar4 = *(uint **)(param_1 + 0x1c);
            *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) ^ uVar5;
            param_4[3] = uVar5 ^ (uint)puVar4;
            goto LAB_01745cfc;
          }
        }
      }
      uVar7 = param_5 & 0xfffffffc;
      if ((param_5 & 3) != 0) {
        iVar2 = param_1 + uVar7;
        bVar1 = *(byte *)((int)param_3 + uVar7);
        *(byte *)(iVar2 + 0x40) = *(byte *)(iVar2 + 0x40) ^ bVar1;
        puVar4 = (uint *)(uint)*(byte *)(iVar2 + 0x10);
        *(byte *)((int)param_4 + uVar7) = bVar1 ^ *(byte *)(iVar2 + 0x10);
        if (uVar5 != uVar7) {
          puVar4 = (uint *)(uVar7 + 1);
          bVar1 = *(byte *)((int)param_3 + (int)puVar4);
          *(byte *)((int)puVar4 + param_1 + 0x40) = *(byte *)((int)puVar4 + param_1 + 0x40) ^ bVar1;
          *(byte *)((int)param_4 + (int)puVar4) = bVar1 ^ *(byte *)((int)puVar4 + param_1 + 0x10);
          if (uVar5 - uVar7 != 1) {
            iVar11 = uVar7 + 2;
            iVar2 = param_1 + iVar11;
            bVar1 = *(byte *)((int)param_3 + iVar11);
            *(byte *)(iVar2 + 0x40) = *(byte *)(iVar2 + 0x40) ^ bVar1;
            puVar4 = (uint *)(uint)*(byte *)(iVar2 + 0x10);
            *(byte *)((int)param_4 + iVar11) = bVar1 ^ *(byte *)(iVar2 + 0x10);
          }
        }
      }
    }
  }
LAB_01745cfc:
  uVar3 = 1;
  *(uint *)(param_1 + 0x160) = param_5;
LAB_01745d0c:
  if ((local_2c[0] ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar3,puVar4,local_2c[0] ^ DAT_018ddaf8,0);
  }
  return;
}

