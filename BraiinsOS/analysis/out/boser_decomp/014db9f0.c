// FUN_014db9f0 @ 014db9f0 size=376 calls_out=3 calls_in=1
// strings: 

void FUN_014db9f0(undefined2 *param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  bool bVar4;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_3 == 9) {
    if (*param_2 == 'E') {
      cVar1 = param_2[1];
      bVar4 = cVar1 == 'n';
      if (bVar4) {
        cVar1 = param_2[2];
      }
      if (bVar4 && cVar1 == 'd') {
        cVar1 = param_2[3];
        bVar4 = cVar1 == 'O';
        if (bVar4) {
          cVar1 = param_2[4];
        }
        if (bVar4 && cVar1 == 'f') {
          cVar1 = param_2[5];
          bVar4 = cVar1 == 'L';
          if (bVar4) {
            cVar1 = param_2[6];
          }
          if (bVar4 && cVar1 == 'i') {
            cVar1 = param_2[7];
            bVar4 = cVar1 == 'f';
            if (bVar4) {
              cVar1 = param_2[8];
            }
            if (bVar4 && cVar1 == 'e') {
              uVar2 = 0x200;
              goto LAB_014dba54;
            }
          }
        }
      }
    }
  }
  else if (param_3 == 8) {
    cVar1 = *param_2;
    bVar4 = cVar1 == 'O';
    if (bVar4) {
      cVar1 = param_2[1];
    }
    if (bVar4 && cVar1 == 'u') {
      cVar1 = param_2[2];
      bVar4 = cVar1 == 't';
      if (bVar4) {
        cVar1 = param_2[3];
      }
      if (bVar4 && cVar1 == 'd') {
        cVar1 = param_2[4];
        bVar4 = cVar1 == 'a';
        if (bVar4) {
          cVar1 = param_2[5];
        }
        if (bVar4 && cVar1 == 't') {
          cVar1 = param_2[6];
          bVar4 = cVar1 == 'e';
          if (bVar4) {
            cVar1 = param_2[7];
          }
          if (bVar4 && cVar1 == 'd') {
            uVar2 = 0x100;
            goto LAB_014dba54;
          }
        }
      }
    }
  }
  else if (param_3 == 6) {
    cVar1 = *param_2;
    bVar4 = cVar1 == 'A';
    if (bVar4) {
      cVar1 = param_2[1];
    }
    if (bVar4 && cVar1 == 'c') {
      cVar1 = param_2[2];
      bVar4 = cVar1 == 't';
      if (bVar4) {
        cVar1 = param_2[3];
      }
      if (bVar4 && cVar1 == 'i') {
        cVar1 = param_2[4];
        bVar4 = cVar1 == 'v';
        if (bVar4) {
          cVar1 = param_2[5];
        }
        if (bVar4 && cVar1 == 'e') {
          uVar2 = 0;
LAB_014dba54:
          *param_1 = uVar2;
          return;
        }
      }
    }
  }
  FUN_006643f0(&local_1c);
  uVar3 = FUN_014dee68(local_18,local_14,&DAT_01cfa04c,3);
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)(param_1 + 2) = uVar3;
  if (local_1c != -0x80000000) {
    FUN_019bb7e0(local_1c,local_18);
  }
  return;
}

