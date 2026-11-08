// FUN_005b6090 @ 005b6090 size=1012 calls_out=2 calls_in=3
// strings: 

undefined4 FUN_005b6090(int param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined4 local_24 [3];
  
  cVar5 = *(char *)(param_1 + 0x2d);
  cVar1 = *(char *)(param_1 + 0x2c);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  if (cVar1 != '\x01') {
    pcVar2 = *(char **)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x1c) != 0) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
      cVar5 = *pcVar2;
      iVar6 = *(int *)(param_1 + 0x24) + 1;
      *(char **)(param_1 + 0x18) = pcVar2 + 1;
      if (cVar5 == '\n') {
        *(int *)(param_1 + 0x28) = iVar6 + *(int *)(param_1 + 0x28);
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        iVar6 = 0;
      }
      *(int *)(param_1 + 0x24) = iVar6;
      if (*(int *)(param_1 + 0xc) != -0x80000000) {
        iVar6 = *(int *)(param_1 + 0x14);
        if (iVar6 == *(int *)(param_1 + 0xc)) goto LAB_005b6334;
        goto LAB_005b60c8;
      }
      goto LAB_005b613c;
    }
LAB_005b62f8:
    *(char **)(param_1 + 0x18) = pcVar2;
    uVar3 = *(undefined4 *)(param_1 + 0x20);
    uVar4 = *(undefined4 *)(param_1 + 0x24);
    local_24[0] = 5;
    goto LAB_005b6304;
  }
  if (*(int *)(param_1 + 0xc) != -0x80000000) {
    iVar6 = *(int *)(param_1 + 0x14);
    if (iVar6 == *(int *)(param_1 + 0xc)) {
LAB_005b6334:
      FUN_006029c0(param_1 + 0xc);
    }
LAB_005b60c8:
    *(char *)(*(int *)(param_1 + 0x10) + iVar6) = cVar5;
    *(int *)(param_1 + 0x14) = iVar6 + 1;
  }
LAB_005b613c:
  if (cVar5 == *param_2) {
    cVar5 = *(char *)(param_1 + 0x2d);
    cVar1 = *(char *)(param_1 + 0x2c);
    *(undefined1 *)(param_1 + 0x2c) = 0;
    if (cVar1 == '\0') {
      pcVar2 = *(char **)(param_1 + 0x18);
      if (*(int *)(param_1 + 0x1c) == 0) goto LAB_005b62f8;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
      cVar5 = *pcVar2;
      iVar6 = *(int *)(param_1 + 0x24) + 1;
      *(char **)(param_1 + 0x18) = pcVar2 + 1;
      if (cVar5 == '\n') {
        *(int *)(param_1 + 0x28) = iVar6 + *(int *)(param_1 + 0x28);
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        iVar6 = 0;
      }
      *(int *)(param_1 + 0x24) = iVar6;
      if (*(int *)(param_1 + 0xc) != -0x80000000) {
        iVar6 = *(int *)(param_1 + 0x14);
        if (iVar6 == *(int *)(param_1 + 0xc)) goto LAB_005b63e8;
        goto LAB_005b6178;
      }
    }
    else if (*(int *)(param_1 + 0xc) != -0x80000000) {
      iVar6 = *(int *)(param_1 + 0x14);
      if (iVar6 == *(int *)(param_1 + 0xc)) {
LAB_005b63e8:
        FUN_006029c0(param_1 + 0xc);
      }
LAB_005b6178:
      *(char *)(*(int *)(param_1 + 0x10) + iVar6) = cVar5;
      *(int *)(param_1 + 0x14) = iVar6 + 1;
    }
    if (cVar5 == param_2[1]) {
      cVar5 = *(char *)(param_1 + 0x2d);
      cVar1 = *(char *)(param_1 + 0x2c);
      *(undefined1 *)(param_1 + 0x2c) = 0;
      if (cVar1 == '\0') {
        pcVar2 = *(char **)(param_1 + 0x18);
        if (*(int *)(param_1 + 0x1c) == 0) goto LAB_005b62f8;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
        cVar5 = *pcVar2;
        iVar6 = *(int *)(param_1 + 0x24) + 1;
        *(char **)(param_1 + 0x18) = pcVar2 + 1;
        if (cVar5 == '\n') {
          *(int *)(param_1 + 0x28) = iVar6 + *(int *)(param_1 + 0x28);
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          iVar6 = 0;
        }
        *(int *)(param_1 + 0x24) = iVar6;
        if (*(int *)(param_1 + 0xc) != -0x80000000) {
          iVar6 = *(int *)(param_1 + 0x14);
          if (iVar6 == *(int *)(param_1 + 0xc)) goto LAB_005b641c;
          goto LAB_005b6228;
        }
      }
      else if (*(int *)(param_1 + 0xc) != -0x80000000) {
        iVar6 = *(int *)(param_1 + 0x14);
        if (iVar6 == *(int *)(param_1 + 0xc)) {
LAB_005b641c:
          FUN_006029c0(param_1 + 0xc);
        }
LAB_005b6228:
        *(char *)(*(int *)(param_1 + 0x10) + iVar6) = cVar5;
        *(int *)(param_1 + 0x14) = iVar6 + 1;
      }
      if (cVar5 == param_2[2]) {
        if (param_3 == 3) {
          return 0;
        }
        cVar5 = *(char *)(param_1 + 0x2d);
        cVar1 = *(char *)(param_1 + 0x2c);
        *(undefined1 *)(param_1 + 0x2c) = 0;
        if (cVar1 == '\0') {
          pcVar2 = *(char **)(param_1 + 0x18);
          if (*(int *)(param_1 + 0x1c) == 0) goto LAB_005b62f8;
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
          cVar5 = *pcVar2;
          *(char **)(param_1 + 0x18) = pcVar2 + 1;
          iVar6 = *(int *)(param_1 + 0x24) + 1;
          if (cVar5 == '\n') {
            *(int *)(param_1 + 0x28) = iVar6 + *(int *)(param_1 + 0x28);
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            iVar6 = 0;
          }
          *(int *)(param_1 + 0x24) = iVar6;
          if (*(int *)(param_1 + 0xc) != -0x80000000) {
            iVar6 = *(int *)(param_1 + 0x14);
            if (iVar6 == *(int *)(param_1 + 0xc)) goto LAB_005b6458;
            goto LAB_005b62e0;
          }
        }
        else if (*(int *)(param_1 + 0xc) != -0x80000000) {
          iVar6 = *(int *)(param_1 + 0x14);
          if (iVar6 == *(int *)(param_1 + 0xc)) {
LAB_005b6458:
            FUN_006029c0(param_1 + 0xc);
          }
LAB_005b62e0:
          *(char *)(*(int *)(param_1 + 0x10) + iVar6) = cVar5;
          *(int *)(param_1 + 0x14) = iVar6 + 1;
        }
        if (cVar5 == param_2[3]) {
          return 0;
        }
      }
    }
  }
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  local_24[0] = 9;
LAB_005b6304:
  uVar3 = FUN_0157c50c(local_24,uVar3,uVar4);
  return uVar3;
}

