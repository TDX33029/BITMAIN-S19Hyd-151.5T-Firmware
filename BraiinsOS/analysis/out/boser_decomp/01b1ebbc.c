// FUN_01b1ebbc @ 01b1ebbc size=384 calls_out=0 calls_in=2
// strings: 

int FUN_01b1ebbc(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(param_1 + 8) == 0) {
      if ((((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 0x10) == 0)) &&
          (*(int *)(param_1 + 0x14) == 0)) &&
         ((*(int *)(param_1 + 0x18) == 0 && (*(int *)(param_1 + 0x1c) == 0)))) {
        bVar2 = *(int *)(param_1 + 0x20) == 0;
        if (bVar2) {
          param_1 = 4;
        }
LAB_01b1ec20:
        if (!bVar2) {
          param_1 = 5;
        }
        return param_1;
      }
    }
    else if (*(int *)(param_1 + 0xc) == 0) {
      if (((*(int *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 0x14) == 0)) &&
         ((*(int *)(param_1 + 0x18) == 0 && (*(int *)(param_1 + 0x1c) == 0)))) {
        bVar2 = *(int *)(param_1 + 0x20) == 0;
        if (bVar2) {
          param_1 = 0;
        }
        goto LAB_01b1ec20;
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x14);
      if (*(int *)(param_1 + 0x10) == 0) {
        if (((iVar1 == 0) && (*(int *)(param_1 + 0x18) == 0)) && (*(int *)(param_1 + 0x1c) == 0)) {
          bVar2 = *(int *)(param_1 + 0x20) == 0;
          if (bVar2) {
            param_1 = 1;
          }
          goto LAB_01b1ec20;
        }
      }
      else if (iVar1 != 0) {
        if (((*(int *)(param_1 + 0x18) == 0) && (*(int *)(param_1 + 0x1c) == 0)) &&
           (*(int *)(param_1 + 0x20) == 0)) {
          return 2;
        }
        if (((iVar1 != 0) && (*(int *)(param_1 + 0x18) != 0)) && (*(int *)(param_1 + 0x1c) != 0)) {
          if (*(int *)(param_1 + 0x20) == 0) {
            iVar1 = 5;
          }
          else {
            iVar1 = 3;
          }
          return iVar1;
        }
      }
    }
  }
  return 5;
}

