// FUN_012257c4 @ 012257c4 size=356 calls_out=3 calls_in=1
// strings: 

void FUN_012257c4(undefined4 *param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
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
  
  if (param_3 == 8) {
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
            goto LAB_0122581c;
          }
        }
      }
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
          goto LAB_0122581c;
        }
      }
    }
  }
  else if (param_3 == 4) {
    cVar1 = *param_2;
    bVar3 = cVar1 == 'a';
    if (bVar3) {
      cVar1 = param_2[1];
    }
    if (bVar3 && cVar1 == 'u') {
      cVar1 = param_2[2];
      bVar3 = cVar1 == 't';
      if (bVar3) {
        cVar1 = param_2[3];
      }
      if (bVar3 && cVar1 == 'o') {
        *param_1 = 2;
        uVar2 = 0;
LAB_0122581c:
        *(undefined1 *)(param_1 + 1) = uVar2;
        return;
      }
    }
  }
  FUN_006643f0(&local_54);
  FUN_0123c0e0(&local_48,local_50,local_4c,&DAT_01c24b54,3);
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

