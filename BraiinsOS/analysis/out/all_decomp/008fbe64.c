// FUN_008fbe64 @ 008fbe64 size=428 calls_out=3 calls_in=1
// strings: 

void FUN_008fbe64(undefined4 *param_1,char *param_2,undefined4 param_3)

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
  
  switch(param_3) {
  case 3:
    if (*param_2 == 'u') {
      cVar1 = param_2[1];
      bVar4 = cVar1 == 'r';
      if (bVar4) {
        cVar1 = param_2[2];
      }
      if (bVar4 && cVar1 == 'l') {
        *param_1 = 2;
        uVar2 = 1;
LAB_008fbf50:
        *(undefined1 *)(param_1 + 1) = uVar2;
        return;
      }
    }
    break;
  case 4:
    cVar1 = *param_2;
    bVar4 = cVar1 == 'u';
    if (bVar4) {
      cVar1 = param_2[1];
    }
    if (bVar4 && cVar1 == 's') {
      cVar1 = param_2[2];
      bVar4 = cVar1 == 'e';
      if (bVar4) {
        cVar1 = param_2[3];
      }
      if (bVar4 && cVar1 == 'r') {
        uVar2 = 2;
        *param_1 = 2;
        goto LAB_008fbf50;
      }
    }
    break;
  case 7:
    cVar1 = *param_2;
    bVar4 = cVar1 == 'e';
    if (bVar4) {
      cVar1 = param_2[1];
    }
    bVar3 = bVar4 && cVar1 == 'n';
    if (bVar4 && cVar1 == 'n') {
      bVar3 = param_2[2] == 'a';
    }
    if (bVar3) {
      cVar1 = param_2[3];
      bVar4 = cVar1 == 'b';
      if (bVar4) {
        cVar1 = param_2[4];
      }
      if (bVar4 && cVar1 == 'l') {
        cVar1 = param_2[5];
        bVar4 = cVar1 == 'e';
        if (bVar4) {
          cVar1 = param_2[6];
        }
        if (bVar4 && cVar1 == 'd') {
          *param_1 = 2;
          uVar2 = 0;
          goto LAB_008fbf50;
        }
      }
    }
    break;
  case 8:
    cVar1 = *param_2;
    bVar4 = cVar1 == 'p';
    if (bVar4) {
      cVar1 = param_2[1];
    }
    if (bVar4 && cVar1 == 'a') {
      cVar1 = param_2[2];
      bVar4 = cVar1 == 's';
      if (bVar4) {
        cVar1 = param_2[3];
      }
      if (bVar4 && cVar1 == 's') {
        cVar1 = param_2[4];
        bVar4 = cVar1 == 'w';
        if (bVar4) {
          cVar1 = param_2[5];
        }
        if (bVar4 && cVar1 == 'o') {
          cVar1 = param_2[6];
          bVar4 = cVar1 == 'r';
          if (bVar4) {
            cVar1 = param_2[7];
          }
          if (bVar4 && cVar1 == 'd') {
            *param_1 = 2;
            uVar2 = 3;
            goto LAB_008fbf50;
          }
        }
      }
    }
  }
  FUN_006008c8(&local_54);
  FUN_00924444(&local_48,local_50,local_4c,&DAT_01867988,4);
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

