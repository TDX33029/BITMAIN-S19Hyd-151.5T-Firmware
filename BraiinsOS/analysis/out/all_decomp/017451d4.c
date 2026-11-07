// FUN_017451d4 @ 017451d4 size=1872 calls_out=2 calls_in=1
// strings: 

void FUN_017451d4(int param_1,undefined4 param_2,uint *param_3,uint *param_4,uint param_5,
                 code *param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint *extraout_r1;
  uint *extraout_r1_00;
  uint *extraout_r1_01;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  code *pcVar8;
  uint *puVar9;
  code *pcVar10;
  uint *puVar11;
  uint *puVar12;
  bool bVar13;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c [2];
  
  local_2c[0] = DAT_018ddaf8;
  uVar7 = param_5 + *(uint *)(param_1 + 0x38);
  uVar5 = *(int *)(param_1 + 0x3c) + (uint)CARRY4(param_5,*(uint *)(param_1 + 0x38));
  puVar3 = (uint *)(0xf - (uVar5 + (uVar7 >= 0xffffffe1)));
  if (0xe < uVar5 && (uint)(uVar7 < 0xffffffe1) <= 0xf - uVar5) {
    uVar2 = 0;
    goto LAB_017455b0;
  }
  *(uint *)(param_1 + 0x38) = uVar7;
  pcVar10 = *(code **)(param_1 + 0x150);
  pcVar8 = *(code **)(param_1 + 0x154);
  *(uint *)(param_1 + 0x3c) = uVar5;
  if (*(int *)(param_1 + 0x164) != 0) {
    (*pcVar10)(param_1 + 0x40,param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x164) = 0;
    puVar3 = extraout_r1;
  }
  uVar5 = *(uint *)(param_1 + 0x160);
  if (uVar5 != 0) {
    puVar11 = param_4;
    puVar9 = param_3;
    if (param_5 != 0) {
      do {
        iVar1 = param_1 + uVar5;
        param_3 = (uint *)((int)puVar9 + 1);
        uVar5 = uVar5 + 1 & 0xf;
        bVar4 = (byte)*puVar9 ^ *(byte *)(iVar1 + 0x10);
        param_4 = (uint *)((int)puVar11 + 1);
        *(byte *)puVar11 = bVar4;
        puVar3 = (uint *)(uint)(uVar5 != 0);
        param_5 = param_5 - 1;
        *(byte *)(iVar1 + 0x40) = bVar4 ^ *(byte *)(iVar1 + 0x40);
        if (param_5 == 0) {
          puVar12 = (uint *)0x0;
        }
        else {
          puVar12 = puVar3;
        }
        puVar11 = param_4;
        puVar9 = param_3;
      } while (puVar12 != (uint *)0x0);
      if (uVar5 == 0) {
        (*pcVar10)(param_1 + 0x40,param_1 + 0x50);
        goto LAB_017452e4;
      }
    }
    uVar2 = 1;
    *(uint *)(param_1 + 0x160) = uVar5;
    goto LAB_017455b0;
  }
LAB_017452e4:
  puVar11 = (uint *)(param_1 + 0xc);
  if ((puVar11 < &uStack_38 && &uStack_3c < puVar11) ||
     ((puVar3 = (uint *)0x0, puVar11 < &uStack_3c &&
      (puVar3 = (uint *)(param_1 + 0x10), &uStack_3c < puVar3)))) goto LAB_0174591c;
  uVar5 = *(uint *)(param_1 + 0xc);
  uVar5 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
  if (0xbff < param_5) {
    if (puVar11 < &uStack_34 && &uStack_38 < puVar11) {
      (*param_6)(param_3,param_4,0xc0,param_2,param_1);
      goto LAB_0174591c;
    }
    do {
      (*param_6)(param_3,param_4,0xc0,param_2,param_1);
      if ((puVar11 < &uStack_38) && (&uStack_38 < (uint *)(param_1 + 0x10))) goto LAB_0174591c;
      uVar5 = uVar5 + 0xc0;
      *(uint *)(param_1 + 0xc) =
           uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
           uVar5 >> 0x18;
      param_5 = param_5 - 0xc00;
      param_3 = param_3 + 0x300;
      (*pcVar8)(param_1 + 0x40,param_1 + 0x50,param_4,0xc00);
      param_4 = param_4 + 0x300;
      puVar3 = extraout_r1_00;
    } while (0xbff < param_5);
  }
  uVar7 = param_5 & 0xfffffff0;
  puVar9 = param_4;
  if (uVar7 != 0) {
    (*param_6)(param_3,param_4,param_5 >> 4,param_2,param_1);
    if ((puVar11 < &uStack_34) && (&uStack_34 < (uint *)(param_1 + 0x10))) goto LAB_0174591c;
    uVar5 = uVar5 + (param_5 >> 4);
    if (puVar11 < &uStack_30 && &uStack_34 < puVar11) goto LAB_0174591c;
    param_3 = (uint *)((int)param_3 + uVar7);
    param_5 = param_5 - uVar7;
    puVar9 = (uint *)((int)param_4 + uVar7);
    *(uint *)(param_1 + 0xc) =
         uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
         uVar5 >> 0x18;
    (*pcVar8)(param_1 + 0x40,param_1 + 0x50,param_4,uVar7);
    puVar3 = extraout_r1_01;
  }
  if (param_5 == 0) goto LAB_017455a0;
  puVar12 = (uint *)(param_1 + 0x10);
  uVar5 = uVar5 + 1;
  (**(code **)(param_1 + 0x158))(param_1,puVar12,param_2);
  if ((&uStack_30 < puVar12 && puVar11 < &uStack_30) || (&uStack_30 < puVar11 && puVar11 < local_2c)
     ) {
LAB_0174591c:
                    /* WARNING: Does not return */
    pcVar8 = (code *)software_udf(0,0x174591c);
    (*pcVar8)();
  }
  *(uint *)(param_1 + 0xc) =
       uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18
  ;
  if (0x10 < param_5) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c24();
  }
  puVar3 = (uint *)(param_5 - 1);
  if (puVar3 < (uint *)0x3) {
    bVar4 = (byte)*param_3 ^ *(byte *)(param_1 + 0x10);
    *(byte *)puVar9 = bVar4;
    *(byte *)(param_1 + 0x40) = bVar4 ^ *(byte *)(param_1 + 0x40);
    if (puVar3 != (uint *)0x0) goto LAB_017456c0;
  }
  else {
    pbVar6 = (byte *)((param_1 + 0x3f) - (int)param_3);
    if ((byte *)0x2 < pbVar6) {
      pbVar6 = (byte *)((int)puVar9 + (-1 - (int)param_3));
    }
    if (pbVar6 < (byte *)0x3 || puVar12 < puVar9 + 1 && puVar9 < (uint *)(param_1 + 0x44)) {
      bVar4 = (byte)*param_3 ^ *(byte *)(param_1 + 0x10);
      *(byte *)puVar9 = bVar4;
      *(byte *)(param_1 + 0x40) = bVar4 ^ *(byte *)(param_1 + 0x40);
LAB_017456c0:
      bVar4 = *(byte *)((int)param_3 + 1) ^ *(byte *)(param_1 + 0x11);
      *(byte *)((int)puVar9 + 1) = bVar4;
      *(byte *)(param_1 + 0x41) = bVar4 ^ *(byte *)(param_1 + 0x41);
      if (param_5 != 2) {
        bVar4 = *(byte *)((int)param_3 + 2) ^ *(byte *)(param_1 + 0x12);
        *(byte *)((int)puVar9 + 2) = bVar4;
        *(byte *)(param_1 + 0x42) = bVar4 ^ *(byte *)(param_1 + 0x42);
        if (param_5 != 3) {
          bVar4 = *(byte *)((int)param_3 + 3) ^ *(byte *)(param_1 + 0x13);
          *(byte *)((int)puVar9 + 3) = bVar4;
          *(byte *)(param_1 + 0x43) = bVar4 ^ *(byte *)(param_1 + 0x43);
          if (param_5 != 4) {
            bVar4 = (byte)param_3[1] ^ *(byte *)(param_1 + 0x14);
            *(byte *)(puVar9 + 1) = bVar4;
            *(byte *)(param_1 + 0x44) = bVar4 ^ *(byte *)(param_1 + 0x44);
            if (param_5 != 5) {
              bVar4 = *(byte *)((int)param_3 + 5) ^ *(byte *)(param_1 + 0x15);
              *(byte *)((int)puVar9 + 5) = bVar4;
              *(byte *)(param_1 + 0x45) = bVar4 ^ *(byte *)(param_1 + 0x45);
              if (param_5 != 6) {
                bVar4 = *(byte *)((int)param_3 + 6) ^ *(byte *)(param_1 + 0x16);
                *(byte *)((int)puVar9 + 6) = bVar4;
                *(byte *)(param_1 + 0x46) = bVar4 ^ *(byte *)(param_1 + 0x46);
                if (param_5 != 7) {
                  bVar4 = *(byte *)((int)param_3 + 7) ^ *(byte *)(param_1 + 0x17);
                  *(byte *)((int)puVar9 + 7) = bVar4;
                  *(byte *)(param_1 + 0x47) = bVar4 ^ *(byte *)(param_1 + 0x47);
                  if (param_5 != 8) {
                    bVar4 = (byte)param_3[2] ^ *(byte *)(param_1 + 0x18);
                    *(byte *)(puVar9 + 2) = bVar4;
                    *(byte *)(param_1 + 0x48) = bVar4 ^ *(byte *)(param_1 + 0x48);
                    if (param_5 != 9) {
                      bVar4 = *(byte *)((int)param_3 + 9) ^ *(byte *)(param_1 + 0x19);
                      *(byte *)((int)puVar9 + 9) = bVar4;
                      *(byte *)(param_1 + 0x49) = bVar4 ^ *(byte *)(param_1 + 0x49);
                      if (param_5 != 10) {
                        bVar4 = *(byte *)((int)param_3 + 10) ^ *(byte *)(param_1 + 0x1a);
                        *(byte *)((int)puVar9 + 10) = bVar4;
                        *(byte *)(param_1 + 0x4a) = bVar4 ^ *(byte *)(param_1 + 0x4a);
                        if (param_5 != 0xb) {
                          bVar4 = *(byte *)((int)param_3 + 0xb) ^ *(byte *)(param_1 + 0x1b);
                          *(byte *)((int)puVar9 + 0xb) = bVar4;
                          *(byte *)(param_1 + 0x4b) = bVar4 ^ *(byte *)(param_1 + 0x4b);
                          if (param_5 != 0xc) {
                            bVar4 = (byte)param_3[3] ^ *(byte *)(param_1 + 0x1c);
                            *(byte *)(puVar9 + 3) = bVar4;
                            *(byte *)(param_1 + 0x4c) = bVar4 ^ *(byte *)(param_1 + 0x4c);
                            if (param_5 != 0xd) {
                              bVar4 = *(byte *)((int)param_3 + 0xd) ^ *(byte *)(param_1 + 0x1d);
                              *(byte *)((int)puVar9 + 0xd) = bVar4;
                              *(byte *)(param_1 + 0x4d) = bVar4 ^ *(byte *)(param_1 + 0x4d);
                              if (param_5 != 0xe) {
                                bVar4 = *(byte *)((int)param_3 + 0xe) ^ *(byte *)(param_1 + 0x1e);
                                *(byte *)((int)puVar9 + 0xe) = bVar4;
                                *(byte *)(param_1 + 0x4e) = bVar4 ^ *(byte *)(param_1 + 0x4e);
                                if (param_5 != 0xf) {
                                  bVar4 = *(byte *)(param_1 + 0x1f) ^ *(byte *)((int)param_3 + 0xf);
                                  *(byte *)((int)puVar9 + 0xf) = bVar4;
                                  *(byte *)(param_1 + 0x4f) = bVar4 ^ *(byte *)(param_1 + 0x4f);
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
      uVar5 = param_5 >> 2;
      uVar7 = *param_3 ^ *(uint *)(param_1 + 0x10);
      *puVar9 = uVar7;
      *(uint *)(param_1 + 0x40) = uVar7 ^ *(uint *)(param_1 + 0x40);
      if (uVar5 != 1) {
        uVar7 = param_3[1] ^ *(uint *)(param_1 + 0x14);
        puVar9[1] = uVar7;
        *(uint *)(param_1 + 0x44) = uVar7 ^ *(uint *)(param_1 + 0x44);
        if (uVar5 != 2) {
          uVar7 = param_3[2] ^ *(uint *)(param_1 + 0x18);
          puVar9[2] = uVar7;
          *(uint *)(param_1 + 0x48) = uVar7 ^ *(uint *)(param_1 + 0x48);
          if (uVar5 == 4) {
            uVar5 = param_3[3] ^ *(uint *)(param_1 + 0x1c);
            puVar9[3] = uVar5;
            *(uint *)(param_1 + 0x4c) = uVar5 ^ *(uint *)(param_1 + 0x4c);
            goto LAB_017455a0;
          }
        }
      }
      uVar5 = param_5 & 0xfffffffc;
      puVar3 = (uint *)((int)puVar3 - uVar5);
      if ((param_5 & 3) != 0) {
        iVar1 = param_1 + uVar5;
        bVar4 = *(byte *)((int)param_3 + uVar5) ^ *(byte *)(iVar1 + 0x10);
        *(byte *)((int)puVar9 + uVar5) = bVar4;
        *(byte *)(iVar1 + 0x40) = bVar4 ^ *(byte *)(iVar1 + 0x40);
        if (puVar3 != (uint *)0x0) {
          iVar1 = uVar5 + 1;
          bVar13 = puVar3 != (uint *)&DAT_00000001;
          puVar3 = (uint *)(param_1 + iVar1);
          bVar4 = *(byte *)((int)param_3 + iVar1) ^ (byte)puVar3[4];
          *(byte *)((int)puVar9 + iVar1) = bVar4;
          *(byte *)(puVar3 + 0x10) = bVar4 ^ (byte)puVar3[0x10];
          if (bVar13) {
            iVar1 = uVar5 + 2;
            puVar3 = (uint *)(param_1 + iVar1);
            bVar4 = *(byte *)((int)param_3 + iVar1) ^ (byte)puVar3[4];
            *(byte *)((int)puVar9 + iVar1) = bVar4;
            *(byte *)(puVar3 + 0x10) = bVar4 ^ (byte)puVar3[0x10];
          }
        }
      }
    }
  }
LAB_017455a0:
  uVar2 = 1;
  *(uint *)(param_1 + 0x160) = param_5;
LAB_017455b0:
  if ((local_2c[0] ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,puVar3,local_2c[0] ^ DAT_018ddaf8,0);
  }
  return;
}

