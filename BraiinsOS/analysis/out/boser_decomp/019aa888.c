// FUN_019aa888 @ 019aa888 size=1220 calls_out=13 calls_in=2
// strings: assertion failed: self.height > 0 | internal error: entered unreachable code: the thread info setup logic isn't recursive

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_019aa888(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  char local_65;
  int local_64 [3];
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  uint local_30;
  
  if (param_1 != 0) {
    uVar4 = FUN_01be65d0(0x33);
    iVar7 = DAT_01d51a9c;
    if (uVar4 < 0x2001) {
      uVar4 = 0x2000;
    }
    local_54 = 2;
    local_58 = 0;
    local_50 = uVar4;
    FUN_01bea926(&local_58,0);
    FUN_01be6d98(param_1 - iVar7,uVar4 + iVar7);
  }
  uVar4 = FUN_01be3244();
  do {
    if (DAT_01d51a88 != 0) {
      ClearExclusiveLocal();
      FUN_0197ade4(&DAT_01d51a88);
      goto LAB_019aa924;
    }
    bVar1 = (bool)hasExclusiveAccess(0x1d51a88);
  } while (!bVar1);
  DAT_01d51a88 = 1;
  DataMemoryBarrier(0xb);
LAB_019aa924:
  uVar9 = 0;
  if ((DAT_01d51b08 & 0x7fffffff) != 0) {
    uVar9 = FUN_0197ac0c();
    uVar9 = uVar9 ^ 1;
  }
  do {
    cVar2 = DAT_01d51a8c;
    if (DAT_01d51a90 != 0) {
      do {
        ClearExclusiveLocal();
        if (DAT_01d51a90 == uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100("internal error: entered unreachable code: the thread info setup logic isn\'t recursive"
                       ,0xab,&DAT_01d278ec);
        }
        FUN_01bf036a();
        while (DAT_01d51a90 == 0) {
          bVar1 = (bool)hasExclusiveAccess(0x1d51a90);
          if (bVar1) goto LAB_019aa9a0;
        }
      } while( true );
    }
    bVar1 = (bool)hasExclusiveAccess(0x1d51a90);
  } while (!bVar1);
LAB_019aa9a0:
  DataMemoryBarrier(0xb);
  if (DAT_01d51a7c == 0) {
LAB_019aac00:
    DataMemoryBarrier(0xb);
    DAT_01d51a90 = 0;
    if (cVar2 == '\0') {
      if (((uVar9 == 0) && ((DAT_01d51b08 & 0x7fffffff) != 0)) &&
         (iVar7 = FUN_0197ac0c(), iVar7 == 0)) {
        DAT_01d51a8c = '\x01';
      }
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(0x1d51a88);
        iVar7 = DAT_01d51a88;
      } while (!bVar1);
    }
    else {
      if (((uVar9 == 0) && ((DAT_01d51b08 & 0x7fffffff) != 0)) &&
         (iVar7 = FUN_0197ac0c(), iVar7 == 0)) {
        DAT_01d51a8c = '\x01';
      }
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(0x1d51a88);
        iVar7 = DAT_01d51a88;
      } while (!bVar1);
    }
    DAT_01d51a88 = 0;
    if (iVar7 == 2) {
      FUN_01be6c3c(0xf0,&DAT_01d51a88,0x81,1);
      return;
    }
    return;
  }
  iVar7 = DAT_01d51a7c;
  iVar11 = DAT_01d51a80;
  do {
    uVar12 = (uint)*(ushort *)(iVar7 + 0x13a);
    iVar8 = uVar12 << 2;
    iVar3 = 0x43;
    do {
      iVar10 = iVar3;
      if (iVar8 == 0) goto LAB_019aaa28;
      uVar5 = *(uint *)(iVar7 + iVar10 * 4);
      iVar8 = iVar8 + -4;
      bVar13 = uVar4 < uVar5;
      bVar1 = !bVar13 && uVar4 != uVar5;
      iVar3 = iVar10 + 1;
    } while ((char)(bVar1 - bVar13) == '\x01');
    if (bVar1 == bVar13) {
      local_64[2] = iVar10 + -0x43;
      local_65 = '\0';
      DAT_01d51a90 = uVar4;
      if (iVar11 == 0) {
        local_64[1] = 0;
        local_64[0] = iVar7;
        FUN_019aaec8(&local_58,local_64,&local_65);
        uVar4 = local_44;
        uVar12 = local_48;
      }
      else {
        local_64[0] = *(int *)(iVar7 + local_64[2] * 4 + 0x140);
        if (iVar11 != 1) {
          iVar7 = 1;
          do {
            iVar7 = iVar7 + 1;
            local_64[0] = *(int *)(local_64[0] + (uint)*(ushort *)(local_64[0] + 0x13a) * 4 + 0x140)
            ;
          } while (iVar11 != iVar7);
        }
        local_64[1] = 0;
        local_64[2] = *(ushort *)(local_64[0] + 0x13a) - 1;
        FUN_019aaec8(&local_58,local_64,&local_65);
        iVar7 = local_38;
        if (*(ushort *)(local_38 + 0x13a) <= local_30) {
          do {
            local_38 = *(int *)(iVar7 + 0x108);
            local_30 = (uint)*(ushort *)(iVar7 + 0x138);
            iVar7 = local_38;
          } while (*(ushort *)(local_38 + 0x13a) <= local_30);
        }
        *(undefined4 *)(local_38 + local_30 * 4 + 0x10c) = local_58;
        puVar6 = (uint *)(local_38 + local_30 * 0x18);
        *puVar6 = local_50;
        uVar12 = puVar6[2];
        uVar4 = puVar6[3];
        puVar6[1] = local_4c;
        puVar6[2] = local_48;
        puVar6[3] = local_44;
        puVar6[4] = local_40;
        puVar6[5] = local_3c;
      }
      DAT_01d51a84 = DAT_01d51a84 + -1;
      if (local_65 == '\x01') {
        if (DAT_01d51a7c == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d27ef4);
        }
        if (DAT_01d51a80 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: self.height > 0",0x21,&DAT_01d27f34);
        }
        DAT_01d51a80 = DAT_01d51a80 + -1;
        DAT_01d51a7c = *(int *)(DAT_01d51a7c + 0x140);
        *(undefined4 *)(DAT_01d51a7c + 0x108) = 0;
        thunk_FUN_01be4678();
      }
      if (uVar12 != 0 && uVar4 != 0) {
        thunk_FUN_01be4678(uVar12);
      }
      goto LAB_019aac00;
    }
    uVar12 = iVar10 - 0x43;
LAB_019aaa28:
    if (iVar11 == 0) goto LAB_019aac00;
    iVar11 = iVar11 + -1;
    iVar7 = *(int *)(iVar7 + uVar12 * 4 + 0x140);
  } while( true );
}

