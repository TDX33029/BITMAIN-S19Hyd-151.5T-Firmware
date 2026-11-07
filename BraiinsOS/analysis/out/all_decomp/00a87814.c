// FUN_00a87814 @ 00a87814 size=2484 calls_out=11 calls_in=1
// strings: 

void FUN_00a87814(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint extraout_r1;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  uint local_2c;
  int *local_28;
  byte local_24;
  
  iVar5 = *param_1;
  uVar6 = param_1[1];
  *param_1 = 1;
  param_1[1] = 2;
  if (iVar5 == 1) {
    local_2c = uVar6;
    if (uVar6 == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb3aac(1,&DAT_00414ca0,&local_2c,0);
    }
    DataMemoryBarrier(0xb);
    *(uint *)(param_1[2] + 0x2f8) = uVar6;
    iVar5 = *param_1;
    goto joined_r0x00a87858;
  }
  if ((char)param_1[3] == '\0') {
    uVar7 = thunk_FUN_016de0ee(0,0x230);
    piVar2 = (int *)((int)uVar7 + (int)((ulonglong)uVar7 >> 0x20));
    iVar5 = param_1[2];
    if ((char)piVar2[1] == '\0') {
      do {
        bVar1 = (bool)hasExclusiveAccess(0x18d912c);
      } while (!bVar1);
      if (DAT_018d912c == 0) {
        DAT_018d912c = DAT_018d912c + 1;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_0038c190,0x57,&DAT_0188a500);
      }
      iVar3 = DAT_018d912c + 1;
      *piVar2 = DAT_018d912c;
      DAT_018d912c = iVar3;
      *(undefined1 *)(piVar2 + 1) = 1;
      iVar3 = *(int *)(iVar5 + 0x304);
    }
    else {
      iVar3 = *(int *)(iVar5 + 0x304);
    }
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb7c58(&DAT_0188af58);
    }
    FUN_0184606c(*piVar2);
    piVar2 = (int *)(*(int *)(iVar5 + 0x300) + extraout_r1 * 0x40);
    do {
      if (*piVar2 != 0) {
        ClearExclusiveLocal();
        local_2c = 1;
        local_24 = 2;
        goto LAB_00a87970;
      }
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = 1;
    DataMemoryBarrier(0xb);
    uVar4 = 0;
    if ((DAT_018dd988 & 0x7fffffff) != 0) {
      uVar4 = FUN_015bf3f8();
      uVar4 = uVar4 ^ 1;
    }
    local_2c = (uint)*(byte *)(piVar2 + 1);
    local_24 = (byte)uVar4;
    local_28 = piVar2;
    if (local_2c != 0) {
      local_2c = 1;
      if (((uVar4 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar3 = FUN_015bf3f8(), iVar3 == 0)) {
        *(undefined1 *)(piVar2 + 1) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = 0;
      if (iVar3 == 2) {
        FUN_016d6968(0xf0,piVar2,0x81,1);
      }
LAB_00a87970:
      uVar4 = *(uint *)(iVar5 + 0x304);
      if (uVar4 <= extraout_r1) goto LAB_00a88180;
      piVar2 = (int *)(*(int *)(iVar5 + 0x300) + extraout_r1 * 0x40);
      do {
        if (*piVar2 != 0) {
          ClearExclusiveLocal();
          local_2c = 1;
          local_24 = 2;
          goto LAB_00a87a40;
        }
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = 1;
      DataMemoryBarrier(0xb);
      uVar4 = 0;
      if ((DAT_018dd988 & 0x7fffffff) != 0) {
        uVar4 = FUN_015bf3f8();
        uVar4 = uVar4 ^ 1;
      }
      local_2c = (uint)*(byte *)(piVar2 + 1);
      local_24 = (byte)uVar4;
      local_28 = piVar2;
      if (local_2c == 0) goto LAB_00a87ec8;
      local_2c = 1;
      if (((uVar4 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar3 = FUN_015bf3f8(), iVar3 == 0)) {
        *(undefined1 *)(piVar2 + 1) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = 0;
      if (iVar3 == 2) {
        FUN_016d6968(0xf0,piVar2,0x81,1);
      }
LAB_00a87a40:
      uVar4 = *(uint *)(iVar5 + 0x304);
      if (uVar4 <= extraout_r1) goto LAB_00a88180;
      piVar2 = (int *)(*(int *)(iVar5 + 0x300) + extraout_r1 * 0x40);
      do {
        if (*piVar2 != 0) {
          ClearExclusiveLocal();
          local_2c = 1;
          local_24 = 2;
          goto LAB_00a87b10;
        }
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = 1;
      DataMemoryBarrier(0xb);
      uVar4 = 0;
      if ((DAT_018dd988 & 0x7fffffff) != 0) {
        uVar4 = FUN_015bf3f8();
        uVar4 = uVar4 ^ 1;
      }
      local_2c = (uint)*(byte *)(piVar2 + 1);
      local_24 = (byte)uVar4;
      local_28 = piVar2;
      if (local_2c == 0) goto LAB_00a87ec8;
      local_2c = 1;
      if (((uVar4 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar3 = FUN_015bf3f8(), iVar3 == 0)) {
        *(undefined1 *)(piVar2 + 1) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = 0;
      if (iVar3 == 2) {
        FUN_016d6968(0xf0,piVar2,0x81,1);
      }
LAB_00a87b10:
      uVar4 = *(uint *)(iVar5 + 0x304);
      if (uVar4 <= extraout_r1) goto LAB_00a88180;
      piVar2 = (int *)(*(int *)(iVar5 + 0x300) + extraout_r1 * 0x40);
      do {
        if (*piVar2 != 0) {
          ClearExclusiveLocal();
          local_2c = 1;
          local_24 = 2;
          goto LAB_00a87be0;
        }
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = 1;
      DataMemoryBarrier(0xb);
      uVar4 = 0;
      if ((DAT_018dd988 & 0x7fffffff) != 0) {
        uVar4 = FUN_015bf3f8();
        uVar4 = uVar4 ^ 1;
      }
      local_2c = (uint)*(byte *)(piVar2 + 1);
      local_24 = (byte)uVar4;
      local_28 = piVar2;
      if (local_2c == 0) goto LAB_00a87ec8;
      local_2c = 1;
      if (((uVar4 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar3 = FUN_015bf3f8(), iVar3 == 0)) {
        *(undefined1 *)(piVar2 + 1) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = 0;
      if (iVar3 == 2) {
        FUN_016d6968(0xf0,piVar2,0x81,1);
      }
LAB_00a87be0:
      uVar4 = *(uint *)(iVar5 + 0x304);
      if (uVar4 <= extraout_r1) goto LAB_00a88180;
      FUN_00c37a38(&local_2c,*(int *)(iVar5 + 0x300) + extraout_r1 * 0x40);
      piVar2 = local_28;
      uVar4 = (uint)local_24;
      if (local_2c != 1) goto LAB_00a87ec8;
      if (uVar4 == 2) {
LAB_00a87c58:
        uVar4 = *(uint *)(iVar5 + 0x304);
      }
      else {
        if ((((local_24 & 1) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar3 = FUN_015bf3f8(), iVar3 == 0)) {
          *(undefined1 *)(piVar2 + 1) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = 0;
        if (iVar3 != 2) goto LAB_00a87c58;
        FUN_016d6968(0xf0,piVar2,0x81,1);
        uVar4 = *(uint *)(iVar5 + 0x304);
      }
      if (uVar4 <= extraout_r1) goto LAB_00a88180;
      FUN_00c37a38(&local_2c,*(int *)(iVar5 + 0x300) + extraout_r1 * 0x40);
      piVar2 = local_28;
      uVar4 = (uint)local_24;
      if (local_2c != 1) goto LAB_00a87ec8;
      if (uVar4 == 2) {
LAB_00a87cd0:
        uVar4 = *(uint *)(iVar5 + 0x304);
      }
      else {
        if ((((local_24 & 1) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar3 = FUN_015bf3f8(), iVar3 == 0)) {
          *(undefined1 *)(piVar2 + 1) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = 0;
        if (iVar3 != 2) goto LAB_00a87cd0;
        FUN_016d6968(0xf0,piVar2,0x81,1);
        uVar4 = *(uint *)(iVar5 + 0x304);
      }
      if (uVar4 <= extraout_r1) goto LAB_00a88180;
      FUN_00c37a38(&local_2c,*(int *)(iVar5 + 0x300) + extraout_r1 * 0x40);
      piVar2 = local_28;
      uVar4 = (uint)local_24;
      if (local_2c != 1) goto LAB_00a87ec8;
      if (uVar4 == 2) {
LAB_00a87d48:
        uVar4 = *(uint *)(iVar5 + 0x304);
      }
      else {
        if ((((local_24 & 1) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar3 = FUN_015bf3f8(), iVar3 == 0)) {
          *(undefined1 *)(piVar2 + 1) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = 0;
        if (iVar3 != 2) goto LAB_00a87d48;
        FUN_016d6968(0xf0,piVar2,0x81,1);
        uVar4 = *(uint *)(iVar5 + 0x304);
      }
      if (uVar4 <= extraout_r1) goto LAB_00a88180;
      FUN_00c37a38(&local_2c,*(int *)(iVar5 + 0x300) + extraout_r1 * 0x40);
      piVar2 = local_28;
      uVar4 = (uint)local_24;
      if (local_2c != 1) goto LAB_00a87ec8;
      if (uVar4 == 2) {
LAB_00a87dc0:
        uVar4 = *(uint *)(iVar5 + 0x304);
      }
      else {
        if ((((local_24 & 1) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar3 = FUN_015bf3f8(), iVar3 == 0)) {
          *(undefined1 *)(piVar2 + 1) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = 0;
        if (iVar3 != 2) goto LAB_00a87dc0;
        FUN_016d6968(0xf0,piVar2,0x81,1);
        uVar4 = *(uint *)(iVar5 + 0x304);
      }
      if (uVar4 <= extraout_r1) goto LAB_00a88180;
      FUN_00c37a38(&local_2c,*(int *)(iVar5 + 0x300) + extraout_r1 * 0x40);
      piVar2 = local_28;
      uVar4 = (uint)local_24;
      if (local_2c != 1) goto LAB_00a87ec8;
      if (uVar4 == 2) {
LAB_00a87e38:
        uVar4 = *(uint *)(iVar5 + 0x304);
      }
      else {
        if ((((local_24 & 1) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar3 = FUN_015bf3f8(), iVar3 == 0)) {
          *(undefined1 *)(piVar2 + 1) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = 0;
        if (iVar3 != 2) goto LAB_00a87e38;
        FUN_016d6968(0xf0,piVar2,0x81,1);
        uVar4 = *(uint *)(iVar5 + 0x304);
      }
      if (uVar4 <= extraout_r1) {
LAB_00a88180:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(extraout_r1,uVar4,&DAT_0188af68);
      }
      FUN_00c37a38(&local_2c,*(int *)(iVar5 + 0x300) + extraout_r1 * 0x40);
      piVar2 = local_28;
      uVar4 = (uint)local_24;
      if (local_2c == 1) {
        if (uVar4 != 2) {
          if ((((local_24 & 1) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
             (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
            *(undefined1 *)(piVar2 + 1) = 1;
          }
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar2;
            bVar1 = (bool)hasExclusiveAccess(piVar2);
          } while (!bVar1);
          *piVar2 = 0;
          if (iVar5 == 2) {
            FUN_016d6968(0xf0,piVar2,0x81,1);
          }
        }
        goto LAB_00a8786c;
      }
    }
LAB_00a87ec8:
    piVar2 = local_28;
    iVar5 = local_28[4];
    if (iVar5 == local_28[2]) {
      FUN_010002b8();
    }
    *(uint *)(piVar2[3] + iVar5 * 4) = uVar6;
    piVar2[4] = iVar5 + 1;
    if ((((uVar4 & 1) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
      *(undefined1 *)(piVar2 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = 0;
    if (iVar5 == 2) {
      FUN_016d6968(0xf0,piVar2,0x81,1);
      iVar5 = *param_1;
      goto joined_r0x00a87858;
    }
  }
  else {
LAB_00a8786c:
    FUN_00a88288(uVar6);
  }
  iVar5 = *param_1;
joined_r0x00a87858:
  if (iVar5 == 0) {
    FUN_00a88288(param_1[1]);
    return;
  }
  return;
}

