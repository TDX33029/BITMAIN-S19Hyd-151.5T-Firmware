// FUN_014e5448 @ 014e5448 size=524 calls_out=3 calls_in=1
// strings: 

void FUN_014e5448(undefined2 *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  bool bVar5;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_3 == 0xb) {
    if (*param_2 == 100) {
      bVar1 = param_2[1];
      bVar5 = bVar1 == 0x65;
      if (bVar5) {
        bVar1 = param_2[2];
      }
      if (bVar5 && bVar1 == 0x73) {
        bVar1 = param_2[3];
        bVar5 = bVar1 == 99;
        if (bVar5) {
          bVar1 = param_2[4];
        }
        if (bVar5 && bVar1 == 0x72) {
          bVar1 = param_2[5];
          bVar5 = bVar1 == 0x69;
          if (bVar5) {
            bVar1 = param_2[6];
          }
          if (bVar5 && bVar1 == 0x70) {
            bVar1 = param_2[7];
            bVar5 = bVar1 == 0x74;
            if (bVar5) {
              bVar1 = param_2[8];
            }
            if (bVar5 && bVar1 == 0x69) {
              bVar1 = param_2[9];
              bVar5 = bVar1 == 0x6f;
              if (bVar5) {
                bVar1 = param_2[10];
              }
              if (bVar5 && bVar1 == 0x6e) {
                uVar2 = 0x200;
LAB_014e564c:
                *param_1 = uVar2;
                return;
              }
            }
          }
        }
      }
    }
  }
  else if (param_3 == 0xc) {
    bVar1 = *param_2;
    bVar5 = bVar1 == 0x72;
    if (bVar5) {
      bVar1 = param_2[1];
    }
    if (bVar5 && bVar1 == 0x65) {
      bVar1 = param_2[2];
      bVar5 = bVar1 == 0x6c;
      if (bVar5) {
        bVar1 = param_2[3];
      }
      if (bVar5 && bVar1 == 0x65) {
        bVar1 = param_2[4];
        bVar5 = bVar1 == 0x61;
        if (bVar5) {
          bVar1 = param_2[5];
        }
        if (bVar5 && bVar1 == 0x73) {
          bVar1 = param_2[6];
          bVar5 = bVar1 == 0x65;
          if (bVar5) {
            bVar1 = param_2[7];
          }
          if (bVar5 && bVar1 == 0x5f) {
            bVar1 = param_2[8];
            bVar5 = bVar1 == 100;
            if (bVar5) {
              bVar1 = param_2[9];
            }
            if (bVar5 && bVar1 == 0x61) {
              bVar1 = param_2[10];
              bVar5 = bVar1 == 0x74;
              if (bVar5) {
                bVar1 = param_2[0xb];
              }
              if (bVar5 && bVar1 == 0x65) {
                uVar2 = 0x100;
                goto LAB_014e564c;
              }
            }
          }
        }
      }
    }
  }
  else {
    puVar3 = param_1;
    if (param_3 == 0xf) {
      puVar3 = (undefined2 *)(uint)*param_2;
    }
    if (param_3 == 0xf && puVar3 == (undefined2 *)&DAT_00000074) {
      bVar1 = param_2[1];
      bVar5 = bVar1 == 0x6f;
      if (bVar5) {
        bVar1 = param_2[2];
      }
      if (bVar5 && bVar1 == 0x6f) {
        bVar1 = param_2[3];
        bVar5 = bVar1 == 0x6c;
        if (bVar5) {
          bVar1 = param_2[4];
        }
        if (bVar5 && bVar1 == 0x62) {
          bVar1 = param_2[5];
          bVar5 = bVar1 == 0x6f;
          if (bVar5) {
            bVar1 = param_2[6];
          }
          if (bVar5 && bVar1 == 0x78) {
            bVar1 = param_2[7];
            bVar5 = bVar1 == 0x5f;
            if (bVar5) {
              bVar1 = param_2[8];
            }
            if (bVar5 && bVar1 == 0x76) {
              bVar1 = param_2[9];
              bVar5 = bVar1 == 0x65;
              if (bVar5) {
                bVar1 = param_2[10];
              }
              if (bVar5 && bVar1 == 0x72) {
                bVar1 = param_2[0xb];
                bVar5 = bVar1 == 0x73;
                if (bVar5) {
                  bVar1 = param_2[0xc];
                }
                if (bVar5 && bVar1 == 0x69) {
                  bVar1 = param_2[0xd];
                  bVar5 = bVar1 == 0x6f;
                  if (bVar5) {
                    bVar1 = param_2[0xe];
                  }
                  if (bVar5 && bVar1 == 0x6e) {
                    uVar2 = 0;
                    goto LAB_014e564c;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_006643f0(&local_1c);
  uVar4 = FUN_014dedb0(local_18,local_14,&DAT_01cfa19c,3);
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)(param_1 + 2) = uVar4;
  if (local_1c != -0x80000000) {
    FUN_019bb7e0(local_1c,local_18);
  }
  return;
}

