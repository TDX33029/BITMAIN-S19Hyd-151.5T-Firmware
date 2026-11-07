// FUN_01243858 @ 01243858 size=376 calls_out=3 calls_in=1
// strings: 

void FUN_01243858(undefined4 *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  bool bVar4;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (param_3 == 0x11) {
    if (*param_2 == 0x66) {
      bVar1 = param_2[1];
      bVar4 = bVar1 == 0x69;
      if (bVar4) {
        bVar1 = param_2[2];
      }
      if (bVar4 && bVar1 == 0x78) {
        bVar1 = param_2[3];
        bVar4 = bVar1 == 0x65;
        if (bVar4) {
          bVar1 = param_2[4];
        }
        if (bVar4 && bVar1 == 100) {
          bVar1 = param_2[5];
          bVar4 = bVar1 == 0x5f;
          if (bVar4) {
            bVar1 = param_2[6];
          }
          if (bVar4 && bVar1 == 0x73) {
            bVar1 = param_2[7];
            bVar4 = bVar1 == 0x68;
            if (bVar4) {
              bVar1 = param_2[8];
            }
            if (bVar4 && bVar1 == 0x61) {
              bVar1 = param_2[9];
              bVar4 = bVar1 == 0x72;
              if (bVar4) {
                bVar1 = param_2[10];
              }
              if (bVar4 && bVar1 == 0x65) {
                bVar1 = param_2[0xb];
                bVar4 = bVar1 == 0x5f;
                if (bVar4) {
                  bVar1 = param_2[0xc];
                }
                if (bVar4 && bVar1 == 0x72) {
                  bVar1 = param_2[0xd];
                  bVar4 = bVar1 == 0x61;
                  if (bVar4) {
                    bVar1 = param_2[0xe];
                  }
                  if (bVar4 && bVar1 == 0x74) {
                    bVar1 = param_2[0xf];
                    bVar4 = bVar1 == 0x69;
                    if (bVar4) {
                      bVar1 = param_2[0x10];
                    }
                    if (bVar4 && bVar1 == 0x6f) {
                      *param_1 = 2;
                      uVar2 = 1;
                      goto LAB_012439c8;
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
    puVar3 = param_1;
    if (param_3 == 5) {
      puVar3 = (undefined4 *)(uint)*param_2;
    }
    if (param_3 == 5 && puVar3 == (undefined4 *)0x71) {
      bVar1 = param_2[1];
      bVar4 = bVar1 == 0x75;
      if (bVar4) {
        bVar1 = param_2[2];
      }
      if (bVar4 && bVar1 == 0x6f) {
        bVar1 = param_2[3];
        bVar4 = bVar1 == 0x74;
        if (bVar4) {
          bVar1 = param_2[4];
        }
        if (bVar4 && bVar1 == 0x61) {
          *param_1 = 2;
          uVar2 = 0;
LAB_012439c8:
          *(undefined1 *)(param_1 + 1) = uVar2;
          return;
        }
      }
    }
  }
  FUN_006643f0(&local_54);
  FUN_0123c0e0(&local_48,local_50,local_4c,&DAT_01c24ccc,2);
  *param_1 = local_48;
  param_1[1] = uStack_44;
  param_1[2] = uStack_40;
  param_1[3] = uStack_3c;
  param_1[4] = uStack_38;
  param_1[5] = uStack_34;
  param_1[6] = local_30;
  param_1[7] = uStack_2c;
  param_1[8] = uStack_28;
  param_1[9] = uStack_24;
  param_1[10] = uStack_20;
  param_1[0xb] = uStack_1c;
  if (local_54 != -0x80000000) {
    FUN_019bb7e0(local_54,local_50);
  }
  return;
}

