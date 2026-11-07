// FUN_00aebcb0 @ 00aebcb0 size=392 calls_out=8 calls_in=1
// strings: 

void FUN_00aebcb0(int param_1)

{
  char cVar1;
  bool bVar2;
  
  switch(*(undefined1 *)(param_1 + 0xc88)) {
  case 0:
    goto switchD_00aebccc_caseD_0;
  default:
    return;
  case 3:
    cVar1 = *(char *)(param_1 + 0xd04);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xd01);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00accc50(param_1 + 0xc94);
    }
    break;
  case 4:
    cVar1 = *(char *)(param_1 + 0xcf8);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xcec);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00a07b4c(param_1 + 0xc90);
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0xc99) == '\x04') {
      FUN_00af50c4(param_1 + 0xca0);
      *(undefined1 *)(param_1 + 0xc98) = 0;
    }
    else if (*(char *)(param_1 + 0xc99) == '\x03') {
      FUN_00af0ad8(param_1 + 0xca0);
    }
    break;
  case 6:
    cVar1 = *(char *)(param_1 + 0xce0);
    if (cVar1 == '\x05') {
      FUN_00a07b4c(param_1 + 0xd08);
LAB_00aebe24:
      *(undefined1 *)(param_1 + 0xce1) = 0;
LAB_00aebe2c:
      *(undefined1 *)(param_1 + 0xce2) = 0;
    }
    else {
      if (cVar1 == '\x04') {
        if (*(char *)(param_1 + 0xd0c) == '\x03') {
          if (*(int *)(param_1 + 0xd04) != 0) {
            FUN_00c81a4c(*(int *)(param_1 + 0xd04),*(undefined4 *)(param_1 + 0xd08),1);
          }
          if (*(int *)(param_1 + 0xcf8) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xcfc));
          }
          *(undefined1 *)(param_1 + 0xd0d) = 0;
        }
        else if ((*(char *)(param_1 + 0xd0c) == '\0') && (*(int *)(param_1 + 0xce8) != 0)) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xcec));
        }
        goto LAB_00aebe24;
      }
      if (cVar1 == '\x03') {
        if (*(char *)(param_1 + 0xd65) == '\x03') {
          cVar1 = *(char *)(param_1 + 0xd5c);
          bVar2 = cVar1 == '\x03';
          if (bVar2) {
            cVar1 = *(char *)(param_1 + 0xd59);
          }
          if (bVar2 && cVar1 == '\x03') {
            FUN_00accc50(param_1 + 0xcec);
          }
        }
        goto LAB_00aebe2c;
      }
    }
    FUN_00ad20e4(param_1 + 0xd68);
  }
  param_1 = param_1 + 0x638;
switchD_00aebccc_caseD_0:
  FUN_00aefea0(param_1);
  return;
}

