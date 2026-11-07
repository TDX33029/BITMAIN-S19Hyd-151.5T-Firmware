// FUN_015f22a4 @ 015f22a4 size=1112 calls_out=13 calls_in=2
// strings: internal error: entered unreachable code: the thread info setup logic isn't recursive

void FUN_015f22a4(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
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
    uVar4 = FUN_016d636c(0x33);
    iVar5 = DAT_018dd974;
    local_54 = 2;
    local_58 = 0;
    if (uVar4 < 0x2001) {
      uVar4 = 0x2000;
    }
    local_50 = uVar4;
    FUN_016da6ea(&local_58,0);
    FUN_016d6ac4(param_1 - iVar5,uVar4 + iVar5);
  }
  uVar4 = FUN_016d2bc8();
  do {
    if (DAT_018dd990 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(&DAT_018dd990);
      goto LAB_015f233c;
    }
    bVar1 = (bool)hasExclusiveAccess(0x18dd990);
  } while (!bVar1);
  DAT_018dd990 = 1;
  DataMemoryBarrier(0xb);
LAB_015f233c:
  uVar10 = 0;
  if ((DAT_018dd988 & 0x7fffffff) != 0) {
    uVar10 = FUN_015bf3f8();
    uVar10 = uVar10 ^ 1;
  }
  do {
    cVar2 = DAT_018dd994;
    if (DAT_018dd96c != 0) {
      do {
        ClearExclusiveLocal();
        if (DAT_018dd96c == uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478("internal error: entered unreachable code: the thread info setup logic isn\'t recursive"
                       ,0xab,&DAT_018aacc0);
        }
        FUN_016e0196();
        while (DAT_018dd96c == 0) {
          bVar1 = (bool)hasExclusiveAccess(0x18dd96c);
          if (bVar1) goto LAB_015f23a8;
        }
      } while( true );
    }
    bVar1 = (bool)hasExclusiveAccess(0x18dd96c);
  } while (!bVar1);
LAB_015f23a8:
  DataMemoryBarrier(0xb);
  if (DAT_018dd960 == 0) {
LAB_015f25b8:
    DataMemoryBarrier(0xb);
    DAT_018dd96c = 0;
    if (cVar2 == '\0') {
      if (((uVar10 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
        DAT_018dd994 = '\x01';
      }
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(0x18dd990);
        iVar5 = DAT_018dd990;
      } while (!bVar1);
    }
    else {
      if (((uVar10 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
        DAT_018dd994 = '\x01';
      }
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(0x18dd990);
        iVar5 = DAT_018dd990;
      } while (!bVar1);
    }
    DAT_018dd990 = 0;
    if (iVar5 == 2) {
      FUN_016d6968(0xf0,&DAT_018dd990,0x81,1);
      return;
    }
    return;
  }
  iVar5 = DAT_018dd964;
  iVar6 = DAT_018dd960;
  do {
    uVar12 = (uint)*(ushort *)(iVar6 + 0x13a);
    iVar7 = uVar12 << 2;
    iVar3 = 0x43;
    do {
      iVar9 = iVar3;
      if (iVar7 == 0) goto LAB_015f2420;
      uVar8 = *(uint *)(iVar6 + iVar9 * 4);
      iVar7 = iVar7 + -4;
      bVar13 = uVar4 < uVar8;
      bVar1 = !bVar13 && uVar4 != uVar8;
      iVar3 = iVar9 + 1;
    } while ((char)(bVar1 - bVar13) == '\x01');
    if (bVar1 == bVar13) {
      local_64[2] = iVar9 + -0x43;
      local_65 = '\0';
      DAT_018dd96c = uVar4;
      if (iVar5 == 0) {
        local_64[1] = 0;
        local_64[0] = iVar6;
        FUN_015f284c(&local_58,local_64,&local_65);
        uVar4 = local_48;
        uVar12 = local_44;
      }
      else {
        local_64[0] = *(int *)(iVar6 + local_64[2] * 4 + 0x140);
        if (iVar5 != 1) {
          iVar6 = 1;
          do {
            iVar6 = iVar6 + 1;
            local_64[0] = *(int *)(local_64[0] + (uint)*(ushort *)(local_64[0] + 0x13a) * 4 + 0x140)
            ;
          } while (iVar5 != iVar6);
        }
        local_64[1] = 0;
        local_64[2] = *(ushort *)(local_64[0] + 0x13a) - 1;
        FUN_015f284c(&local_58,local_64,&local_65);
        if (local_30 < *(ushort *)(local_38 + 0x13a)) {
          iVar5 = local_38;
        }
        else {
          do {
            iVar5 = *(int *)(local_38 + 0x108);
            local_30 = (uint)*(ushort *)(local_38 + 0x138);
            local_38 = iVar5;
          } while (*(ushort *)(iVar5 + 0x13a) <= local_30);
        }
        *(undefined4 *)(iVar5 + local_30 * 4 + 0x10c) = local_58;
        puVar11 = (uint *)(iVar5 + local_30 * 0x18);
        *puVar11 = local_50;
        uVar4 = puVar11[2];
        uVar12 = puVar11[3];
        puVar11[1] = local_4c;
        puVar11[2] = local_48;
        puVar11[3] = local_44;
        puVar11[4] = local_40;
        puVar11[5] = local_3c;
      }
      DAT_018dd968 = DAT_018dd968 + -1;
      if (local_65 == '\x01') {
        if (DAT_018dd960 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018ab2f8);
        }
        if (DAT_018dd964 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00410b17,0x21,&DAT_018ab338);
        }
        DAT_018dd960 = *(int *)(DAT_018dd960 + 0x140);
        DAT_018dd964 = DAT_018dd964 + -1;
        *(undefined4 *)(DAT_018dd960 + 0x108) = 0;
        thunk_FUN_016d3fb4();
      }
      if (uVar4 != 0 && uVar12 != 0) {
        thunk_FUN_016d3fb4(uVar4);
      }
      goto LAB_015f25b8;
    }
    uVar12 = iVar9 - 0x43;
LAB_015f2420:
    if (iVar5 == 0) goto LAB_015f25b8;
    iVar5 = iVar5 + -1;
    iVar6 = *(int *)(iVar6 + uVar12 * 4 + 0x140);
  } while( true );
}

