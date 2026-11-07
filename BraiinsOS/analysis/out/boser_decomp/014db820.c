// FUN_014db820 @ 014db820 size=416 calls_out=3 calls_in=1
// strings: 

void FUN_014db820(undefined2 *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  bool bVar4;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  switch(param_3) {
  case 5:
    if (*param_2 == 't') {
      cVar1 = param_2[1];
      bVar4 = cVar1 == 'i';
      if (bVar4) {
        cVar1 = param_2[2];
      }
      if (bVar4 && cVar1 == 't') {
        cVar1 = param_2[3];
        bVar4 = cVar1 == 'l';
        if (bVar4) {
          cVar1 = param_2[4];
        }
        if (bVar4 && cVar1 == 'e') {
          uVar2 = 0x100;
LAB_014db9c8:
          *param_1 = uVar2;
          return;
        }
      }
    }
    break;
  case 6:
    cVar1 = *param_2;
    bVar4 = cVar1 == 's';
    if (bVar4) {
      cVar1 = param_2[1];
    }
    if (bVar4 && cVar1 == 't') {
      cVar1 = param_2[2];
      bVar4 = cVar1 == 'a';
      if (bVar4) {
        cVar1 = param_2[3];
      }
      if (bVar4 && cVar1 == 't') {
        cVar1 = param_2[4];
        bVar4 = cVar1 == 'u';
        if (bVar4) {
          cVar1 = param_2[5];
        }
        if (bVar4 && cVar1 == 's') {
          uVar2 = 0;
          goto LAB_014db9c8;
        }
      }
    }
    break;
  case 7:
    if (*param_2 == 'v') {
      cVar1 = param_2[1];
      bVar4 = cVar1 == 'e';
      if (bVar4) {
        cVar1 = param_2[2];
      }
      if (bVar4 && cVar1 == 'r') {
        cVar1 = param_2[3];
        bVar4 = cVar1 == 's';
        if (bVar4) {
          cVar1 = param_2[4];
        }
        if (bVar4 && cVar1 == 'i') {
          cVar1 = param_2[5];
          bVar4 = cVar1 == 'o';
          if (bVar4) {
            cVar1 = param_2[6];
          }
          if (bVar4 && cVar1 == 'n') {
            uVar2 = 0x200;
            goto LAB_014db9c8;
          }
        }
      }
    }
    break;
  case 8:
    cVar1 = *param_2;
    bVar4 = cVar1 == 'r';
    if (bVar4) {
      cVar1 = param_2[1];
    }
    if (bVar4 && cVar1 == 'e') {
      cVar1 = param_2[2];
      bVar4 = cVar1 == 'l';
      if (bVar4) {
        cVar1 = param_2[3];
      }
      if (bVar4 && cVar1 == 'e') {
        cVar1 = param_2[4];
        bVar4 = cVar1 == 'a';
        if (bVar4) {
          cVar1 = param_2[5];
        }
        if (bVar4 && cVar1 == 's') {
          cVar1 = param_2[6];
          bVar4 = cVar1 == 'e';
          if (bVar4) {
            cVar1 = param_2[7];
          }
          if (bVar4 && cVar1 == 's') {
            uVar2 = 0x300;
            goto LAB_014db9c8;
          }
        }
      }
    }
  }
  FUN_006643f0(&local_1c);
  uVar3 = FUN_014dedb0(local_18,local_14,&DAT_01cfa064,4);
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)(param_1 + 2) = uVar3;
  if (local_1c != -0x80000000) {
    FUN_019bb7e0(local_1c,local_18);
  }
  return;
}

