// FUN_0095a804 @ 0095a804 size=324 calls_out=3 calls_in=1
// strings: 

void FUN_0095a804(undefined4 *param_1,byte *param_2,int param_3,uint param_4)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint local_54;
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
  
  bVar2 = param_3 == 0x13;
  if (bVar2) {
    param_4 = (uint)*param_2;
  }
  bVar3 = bVar2 && param_4 == 0x75;
  if (bVar2 && param_4 == 0x75) {
    bVar3 = param_2[1] == 0x73;
  }
  bVar2 = false;
  if (bVar3) {
    bVar2 = param_2[2] == 0x65;
  }
  if (bVar2) {
    bVar1 = param_2[3];
    bVar2 = bVar1 == 0x5f;
    if (bVar2) {
      bVar1 = param_2[4];
    }
    if (bVar2 && bVar1 == 99) {
      bVar1 = param_2[5];
      bVar2 = bVar1 == 0x6f;
      if (bVar2) {
        bVar1 = param_2[6];
      }
      if (bVar2 && bVar1 == 0x6e) {
        bVar1 = param_2[7];
        bVar2 = bVar1 == 0x66;
        if (bVar2) {
          bVar1 = param_2[8];
        }
        if (bVar2 && bVar1 == 0x69) {
          bVar1 = param_2[9];
          bVar2 = bVar1 == 0x67;
          if (bVar2) {
            bVar1 = param_2[10];
          }
          if (bVar2 && bVar1 == 0x5f) {
            bVar1 = param_2[0xb];
            bVar2 = bVar1 == 0x66;
            if (bVar2) {
              bVar1 = param_2[0xc];
            }
            if (bVar2 && bVar1 == 0x61) {
              bVar1 = param_2[0xd];
              bVar2 = bVar1 == 0x6c;
              if (bVar2) {
                bVar1 = param_2[0xe];
              }
              if (bVar2 && bVar1 == 0x6c) {
                bVar1 = param_2[0xf];
                bVar2 = bVar1 == 0x62;
                if (bVar2) {
                  bVar1 = param_2[0x10];
                }
                if (bVar2 && bVar1 == 0x61) {
                  bVar1 = param_2[0x11];
                  bVar2 = bVar1 == 99;
                  if (bVar2) {
                    bVar1 = param_2[0x12];
                  }
                  if (bVar2 && bVar1 == 0x6b) {
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
  FUN_006008c8(&local_54);
  FUN_00924444(&local_48,local_50,local_4c,&DAT_018682d0,1);
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
  if ((local_54 & 0x7fffffff) == 0) {
    return;
  }
  thunk_FUN_016d3fb4(local_50);
  return;
}

