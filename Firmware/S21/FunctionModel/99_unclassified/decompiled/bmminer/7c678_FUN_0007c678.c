// FUN_0007c678 @ 0007c678  size=704  callers=3
// program: bmminer


undefined4 FUN_0007c678(int param_1,undefined4 param_2)

{
  int iVar1;
  char *__s1;
  
  FUN_0007db54(param_1 + 0x28);
  if (*(int *)(param_1 + 0x3c) == 0x100) {
    FUN_0007baec(param_1);
  }
  do {
    do {
      iVar1 = FUN_0007b8dc(param_1,param_2);
    } while (iVar1 == 0x20);
  } while (((iVar1 == 9) || (iVar1 == 10)) || (iVar1 == 0xd));
  if (iVar1 == -1) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  else if (iVar1 == -2) {
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  }
  else {
    FUN_0007b910(param_1,iVar1);
    if ((((iVar1 == 0x7b) || (iVar1 == 0x7d)) ||
        ((iVar1 == 0x5b || ((iVar1 == 0x5d || (iVar1 == 0x3a)))))) || (iVar1 == 0x2c)) {
      *(int *)(param_1 + 0x3c) = iVar1;
    }
    else if (iVar1 == 0x22) {
      FUN_0007bc64(param_1,param_2);
    }
    else if (((iVar1 < 0x30) || (0x39 < iVar1)) && (iVar1 != 0x2d)) {
      if (((0x40 < iVar1) && (iVar1 < 0x5b)) || ((0x60 < iVar1 && (iVar1 < 0x7b)))) {
LAB_0007c81c:
        do {
          iVar1 = FUN_0007b94c(param_1,param_2);
          if (0x40 < iVar1) {
            if (iVar1 < 0x5b) goto LAB_0007c81c;
          }
          if ((iVar1 < 0x61) || (0x7a < iVar1)) goto LAB_0007c85c;
        } while( true );
      }
      FUN_0007ba68(param_1);
      *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
    }
    else {
      FUN_0007c2d0(param_1,iVar1,param_2);
    }
  }
LAB_0007c924:
  return *(undefined4 *)(param_1 + 0x3c);
LAB_0007c85c:
  FUN_0007b9d8(param_1,iVar1);
  __s1 = (char *)FUN_0007db90(param_1 + 0x28);
  iVar1 = strcmp(__s1,"true");
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0x103;
  }
  else {
    iVar1 = strcmp(__s1,"false");
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x3c) = 0x104;
    }
    else {
      iVar1 = strcmp(__s1,"null");
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x3c) = 0x105;
      }
      else {
        *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
      }
    }
  }
  goto LAB_0007c924;
}

