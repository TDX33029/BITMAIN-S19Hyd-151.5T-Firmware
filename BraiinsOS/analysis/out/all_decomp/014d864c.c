// FUN_014d864c @ 014d864c size=824 calls_out=6 calls_in=3
// strings: received plaintext buffer full | message buffer full

/* WARNING: Removing unreachable block (ram,0x014d88fc) */

void FUN_014d864c(char *param_1,int param_2,undefined4 param_3,code *param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  char local_2c;
  undefined2 local_2b;
  char local_29;
  int local_28;
  
  if (*(int *)(param_2 + 0x1d8) == 1) {
    uVar4 = *(uint *)(param_2 + 0x1ec);
    uVar10 = *(uint *)(param_2 + 0x1dc);
    if (uVar4 == 0) {
      if (uVar10 <= (uint)-*(int *)(param_2 + 0x1f0) && -uVar10 != *(int *)(param_2 + 0x1f0))
      goto LAB_014d8728;
    }
    else {
      uVar6 = *(uint *)(param_2 + 0x1e0);
      uVar11 = 0;
      uVar12 = *(uint *)(param_2 + 0x1e8);
      uVar2 = uVar6;
      if (uVar12 < uVar6) {
        uVar2 = 0;
      }
      uVar5 = uVar12 - uVar2;
      uVar7 = uVar6 - uVar5;
      iVar8 = uVar4 - uVar7;
      if (uVar4 < uVar7 || iVar8 == 0) {
        uVar6 = uVar5 + uVar4;
      }
      iVar9 = 0;
      if (uVar4 >= uVar7 && iVar8 != 0) {
        uVar11 = iVar8 * 0xc;
      }
      if (uVar6 != uVar5) {
        iVar8 = ((uVar6 - uVar5) * 0xc >> 2) * -0x55555555;
        piVar3 = (int *)(uVar12 * 0xc + uVar2 * -0xc + *(int *)(param_2 + 0x1e4) + 8);
        do {
          iVar8 = iVar8 + -1;
          iVar9 = *piVar3 + iVar9;
          piVar3 = piVar3 + 3;
        } while (iVar8 != 0);
      }
      if (uVar11 != 0) {
        iVar8 = (uVar11 >> 2) * -0x55555555;
        piVar3 = (int *)(*(int *)(param_2 + 0x1e4) + 8);
        do {
          iVar8 = iVar8 + -1;
          iVar9 = *piVar3 + iVar9;
          piVar3 = piVar3 + 3;
        } while (iVar8 != 0);
      }
      if (uVar10 < (uint)(iVar9 - *(int *)(param_2 + 0x1f0))) {
LAB_014d8728:
        FUN_015e79d4(param_1,0x28,"received plaintext buffer full",0x1e);
        return;
      }
    }
  }
  if (*(char *)(param_2 + 599) != '\0') {
    *param_1 = '\x04';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    return;
  }
  uVar4 = 0xffff;
  uVar10 = *(uint *)(param_2 + 0x2ac);
  if (*(int *)(param_2 + 0x268) == 0) {
    uVar4 = 0x4805;
  }
  if (uVar10 < uVar4) {
    uVar11 = *(uint *)(param_2 + 0x2a8);
    uVar2 = uVar10 + 0x1000;
    if (uVar4 <= uVar10 + 0x1000) {
      uVar2 = uVar4;
    }
    if (uVar11 < uVar2) {
      uVar2 = uVar2 - uVar11;
      if (*(int *)(param_2 + 0x2a0) - uVar11 < uVar2) {
        FUN_0154e5f8(param_2 + 0x2a0,uVar11,uVar2,1,1);
        uVar11 = *(uint *)(param_2 + 0x2a8);
        iVar8 = *(int *)(param_2 + 0x2a4);
        puVar1 = (undefined1 *)(iVar8 + uVar11);
      }
      else {
        iVar8 = *(int *)(param_2 + 0x2a4);
        puVar1 = (undefined1 *)(iVar8 + uVar11);
      }
      if (1 < uVar2) {
        FUN_016dd606(puVar1,0,uVar2 - 1);
        uVar11 = (uVar2 - 1) + uVar11;
        puVar1 = (undefined1 *)(iVar8 + uVar11);
      }
      *puVar1 = 0;
      uVar10 = *(uint *)(param_2 + 0x2ac);
      *(uint *)(param_2 + 0x2a8) = uVar11 + 1;
      uVar2 = uVar11 + 1;
    }
    else if ((uVar10 == 0) || (uVar4 < uVar11)) {
      *(uint *)(param_2 + 0x2a8) = uVar2;
      if (uVar2 < *(uint *)(param_2 + 0x2a0)) {
        iVar8 = thunk_FUN_016d4ea4(*(undefined4 *)(param_2 + 0x2a4),uVar2);
        if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,uVar2);
        }
        *(uint *)(param_2 + 0x2a0) = uVar2;
        *(int *)(param_2 + 0x2a4) = iVar8;
      }
    }
    else {
      uVar2 = uVar11;
    }
    if (uVar2 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar10,uVar2,uVar2,&DAT_018a8c10);
    }
    (*param_4)(&local_2c,param_3,*(int *)(param_2 + 0x2a4) + uVar10,uVar2 - uVar10);
    if (local_2c != '\x04') {
      param_1[3] = local_29;
      *(undefined2 *)(param_1 + 1) = local_2b;
      *(int *)(param_1 + 4) = local_28;
      *param_1 = local_2c;
      return;
    }
    *(int *)(param_1 + 4) = local_28;
    *(uint *)(param_2 + 0x2ac) = uVar10 + local_28;
    *param_1 = '\x04';
  }
  else {
    FUN_015e79d4(param_1,0x15,"message buffer full",0x13);
    local_28 = *(int *)(param_1 + 4);
    if (*param_1 != '\x04') {
      return;
    }
  }
  if (local_28 == 0) {
    *(undefined1 *)(param_2 + 600) = 1;
  }
  return;
}

