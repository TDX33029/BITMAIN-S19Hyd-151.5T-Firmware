// FUN_00f09ed8 @ 00f09ed8 size=360 calls_out=4 calls_in=1
// strings: a UUID string | examples | internal error: entered unreachable code

/* WARNING: Removing unreachable block (ram,0x0096ad8c) */
/* WARNING: Removing unreachable block (ram,0x0096ac48) */

int FUN_00f09ed8(char *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined4 *local_30;
  int *local_2c;
  int iStack_28;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  piVar8 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar4 = 1;
    iVar1 = *piVar8;
    pcVar5 = ",";
    do {
      uVar7 = *(uint *)(iVar1 + 4);
      uVar2 = uVar7 ^ 0x7fffffff;
      if (uVar4 < uVar2) {
        uVar2 = uVar4;
      }
      FUN_01284394(iVar1,pcVar5,uVar2);
      if (uVar7 == 0x7fffffff) goto LAB_00f0a010;
      pcVar5 = pcVar5 + uVar2;
      uVar4 = uVar4 - uVar2;
    } while (uVar4 != 0);
  }
  iVar1 = *piVar8;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,iVar1,"examples",8);
  if ((char)local_30 == '\x04') {
    uVar4 = 1;
    iVar1 = *piVar8;
    pcVar5 = ":";
    do {
      uVar7 = *(uint *)(iVar1 + 4);
      uVar2 = uVar7 ^ 0x7fffffff;
      if (uVar4 < uVar2) {
        uVar2 = uVar4;
      }
      FUN_01284394(iVar1,pcVar5,uVar2);
      if (uVar7 == 0x7fffffff) goto LAB_00f0a010;
      pcVar5 = pcVar5 + uVar2;
      uVar4 = uVar4 - uVar2;
    } while (uVar4 != 0);
    iVar9 = *(int *)(param_2 + 4);
    uVar4 = 1;
    iVar1 = *(int *)(param_2 + 8);
    iVar6 = *piVar8;
    puVar3 = &DAT_0053340d;
    iStack_28 = iVar9 + iVar1 * 0x18;
    local_2c = piVar8;
    do {
      uVar7 = *(uint *)(iVar6 + 4);
      uVar2 = uVar7 ^ 0x7fffffff;
      if (uVar4 < uVar2) {
        uVar2 = uVar4;
      }
      FUN_01284394(iVar6,puVar3,uVar2);
      piVar8 = local_2c;
      if (uVar7 == 0x7fffffff) goto LAB_0096ad60;
      puVar3 = puVar3 + uVar2;
      uVar4 = uVar4 - uVar2;
    } while (uVar4 != 0);
    if (iVar1 == 0) {
      uVar4 = 1;
      pcVar5 = "]";
      do {
        uVar7 = *(uint *)(iVar6 + 4);
        uVar2 = uVar7 ^ 0x7fffffff;
        if (uVar4 < uVar2) {
          uVar2 = uVar4;
        }
        FUN_01284394(iVar6,pcVar5,uVar2);
        if (uVar7 == 0x7fffffff) goto LAB_0096ad60;
        pcVar5 = pcVar5 + uVar2;
        uVar4 = uVar4 - uVar2;
      } while (uVar4 != 0);
    }
    else {
      iVar1 = 0x100;
      local_30 = &DAT_01d2e7b8;
      do {
        if (iVar1 != 0x100) {
          uVar4 = 1;
          pcVar5 = ",";
          do {
            uVar7 = *(uint *)(iVar6 + 4);
            uVar2 = uVar7 ^ 0x7fffffff;
            if (uVar4 < uVar2) {
              uVar2 = uVar4;
            }
            FUN_01284394(iVar6,pcVar5,uVar2);
            if (uVar7 == 0x7fffffff) goto LAB_0096ad70;
            pcVar5 = pcVar5 + uVar2;
            uVar4 = uVar4 - uVar2;
          } while (uVar4 != 0);
        }
        iVar1 = FUN_0096addc(iVar9,piVar8);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar9 = iVar9 + 0x18;
        iVar1 = 0x200;
      } while (iVar9 != iStack_28);
      uVar4 = 1;
      pcVar5 = "]";
      do {
        uVar7 = *(uint *)(iVar6 + 4);
        uVar2 = uVar7 ^ 0x7fffffff;
        if (uVar4 < uVar2) {
          uVar2 = uVar4;
        }
        FUN_01284394(iVar6,pcVar5,uVar2);
        if (uVar7 == 0x7fffffff) goto LAB_0096ad70;
        pcVar5 = pcVar5 + uVar2;
        uVar4 = uVar4 - uVar2;
      } while (uVar4 != 0);
    }
    return 0;
  }
LAB_00f0a01c:
  iVar1 = FUN_01966f50(local_30,local_2c);
  return iVar1;
LAB_00f0a010:
  local_30 = (undefined4 *)0x2;
  local_2c = &DAT_01d2e7b8;
  goto LAB_00f0a01c;
LAB_0096ad60:
  local_30 = &DAT_01d2e7b8;
LAB_0096ad70:
  iVar1 = FUN_01966f50(2,local_30);
  return iVar1;
}

