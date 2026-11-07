// FUN_01258404 @ 01258404 size=312 calls_out=3 calls_in=1
// strings: 

void FUN_01258404(undefined4 *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  bool bVar3;
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
  
  puVar2 = param_1;
  if (param_3 == 0x13) {
    puVar2 = (undefined4 *)(uint)*param_2;
  }
  if (param_3 == 0x13 && puVar2 == (undefined4 *)0x75) {
    bVar1 = param_2[1];
    bVar3 = bVar1 == 0x73;
    if (bVar3) {
      bVar1 = param_2[2];
    }
    if (bVar3 && bVar1 == 0x65) {
      bVar1 = param_2[3];
      bVar3 = bVar1 == 0x5f;
      if (bVar3) {
        bVar1 = param_2[4];
      }
      if (bVar3 && bVar1 == 99) {
        bVar1 = param_2[5];
        bVar3 = bVar1 == 0x6f;
        if (bVar3) {
          bVar1 = param_2[6];
        }
        if (bVar3 && bVar1 == 0x6e) {
          bVar1 = param_2[7];
          bVar3 = bVar1 == 0x66;
          if (bVar3) {
            bVar1 = param_2[8];
          }
          if (bVar3 && bVar1 == 0x69) {
            bVar1 = param_2[9];
            bVar3 = bVar1 == 0x67;
            if (bVar3) {
              bVar1 = param_2[10];
            }
            if (bVar3 && bVar1 == 0x5f) {
              bVar1 = param_2[0xb];
              bVar3 = bVar1 == 0x66;
              if (bVar3) {
                bVar1 = param_2[0xc];
              }
              if (bVar3 && bVar1 == 0x61) {
                bVar1 = param_2[0xd];
                bVar3 = bVar1 == 0x6c;
                if (bVar3) {
                  bVar1 = param_2[0xe];
                }
                if (bVar3 && bVar1 == 0x6c) {
                  bVar1 = param_2[0xf];
                  bVar3 = bVar1 == 0x62;
                  if (bVar3) {
                    bVar1 = param_2[0x10];
                  }
                  if (bVar3 && bVar1 == 0x61) {
                    bVar1 = param_2[0x11];
                    bVar3 = bVar1 == 99;
                    if (bVar3) {
                      bVar1 = param_2[0x12];
                    }
                    if (bVar3 && bVar1 == 0x6b) {
                      *param_1 = 2;
                      return;
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
  FUN_006643f0(&local_54);
  FUN_0123bfbc(&local_48,local_50,local_4c,&DAT_01c24f50,1);
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

