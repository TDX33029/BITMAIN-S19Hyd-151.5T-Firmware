// FUN_01782124 @ 01782124 size=400 calls_out=5 calls_in=2
// strings: 

void FUN_01782124(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  uint local_18;
  undefined4 local_14;
  
  if (*(char *)(param_1 + 0x413) != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x400) == 0) {
    return;
  }
  FUN_01780ca8(&local_18,param_1);
  if ((local_18 & 0xff) == 4) {
    uVar3 = *(uint *)(param_1 + 0x404);
    if (uVar3 == 0) {
      return;
    }
    if (3 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar3,3,&DAT_01d1a430);
    }
    pcVar6 = *(char **)(param_1 + 0x40c);
    uVar5 = (uVar3 / 3) * 4;
    if (uVar3 % 3 != 0) {
      if (*pcVar6 == '\0') {
        uVar2 = 3;
        if (uVar3 % 3 == 1) {
          uVar2 = 2;
        }
        uVar5 = uVar2 | uVar5;
      }
      else {
        uVar5 = uVar5 + 4;
      }
    }
    uVar3 = FUN_00735f14(pcVar6,param_1 + 0x410,uVar3,param_1,uVar5);
    if (*pcVar6 == '\x01') {
      if (uVar5 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar3,uVar5,uVar5,&DAT_01d1d444);
      }
      uVar2 = -uVar3 & 3;
      if (uVar2 != 0) {
        iVar1 = uVar5 - uVar3;
        puVar4 = (undefined1 *)(param_1 + uVar3);
        iVar7 = iVar1;
        do {
          if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(iVar1,iVar1,&DAT_01c07988);
          }
          *puVar4 = 0x3d;
          iVar7 = iVar7 + -1;
          uVar2 = uVar2 - 1;
          puVar4 = puVar4 + 1;
        } while (uVar2 != 0);
      }
    }
    *(uint *)(param_1 + 0x408) = uVar5;
    FUN_01780ca8(&local_18,param_1);
    if ((local_18 & 0xff) == 4) {
      *(undefined4 *)(param_1 + 0x404) = 0;
      return;
    }
  }
  if ((local_18 & 0xff) == 4) {
    return;
  }
  FUN_0069263c(local_18,local_14);
  return;
}

