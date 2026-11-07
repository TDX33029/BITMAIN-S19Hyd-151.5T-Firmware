// FUN_008fc050 @ 008fc050 size=368 calls_out=3 calls_in=1
// strings: 

void FUN_008fc050(undefined4 *param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
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
  
  if (param_3 == 4) {
    cVar1 = *param_2;
    bVar3 = cVar1 == 'a';
    if (bVar3) {
      cVar1 = param_2[1];
    }
    bVar4 = bVar3 && cVar1 == 'u';
    if (bVar3 && cVar1 == 'u') {
      bVar4 = param_2[2] == 't';
    }
    bVar3 = false;
    if (bVar4) {
      bVar3 = param_2[3] == 'o';
    }
    if (bVar3) {
      *param_1 = 2;
      uVar2 = 0;
LAB_008fc0e4:
      *(undefined1 *)(param_1 + 1) = uVar2;
      return;
    }
  }
  else if (param_3 == 6) {
    cVar1 = *param_2;
    bVar3 = cVar1 == 'm';
    if (bVar3) {
      cVar1 = param_2[1];
    }
    if (bVar3 && cVar1 == 'a') {
      cVar1 = param_2[2];
      bVar3 = cVar1 == 'n';
      if (bVar3) {
        cVar1 = param_2[3];
      }
      if (bVar3 && cVar1 == 'u') {
        cVar1 = param_2[4];
        bVar3 = cVar1 == 'a';
        if (bVar3) {
          cVar1 = param_2[5];
        }
        if (bVar3 && cVar1 == 'l') {
          *param_1 = 2;
          uVar2 = 1;
          goto LAB_008fc0e4;
        }
      }
    }
  }
  else if (param_3 == 8) {
    cVar1 = *param_2;
    bVar3 = cVar1 == 'd';
    if (bVar3) {
      cVar1 = param_2[1];
    }
    if (bVar3 && cVar1 == 'i') {
      cVar1 = param_2[2];
      bVar3 = cVar1 == 's';
      if (bVar3) {
        cVar1 = param_2[3];
      }
      if (bVar3 && cVar1 == 'a') {
        cVar1 = param_2[4];
        bVar3 = cVar1 == 'b';
        if (bVar3) {
          cVar1 = param_2[5];
        }
        if (bVar3 && cVar1 == 'l') {
          cVar1 = param_2[6];
          bVar3 = cVar1 == 'e';
          if (bVar3) {
            cVar1 = param_2[7];
          }
          if (bVar3 && cVar1 == 'd') {
            uVar2 = 2;
            *param_1 = 2;
            goto LAB_008fc0e4;
          }
        }
      }
    }
  }
  FUN_006008c8(&local_54);
  FUN_00924538(&local_48,local_50,local_4c,&DAT_01867958,3);
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

