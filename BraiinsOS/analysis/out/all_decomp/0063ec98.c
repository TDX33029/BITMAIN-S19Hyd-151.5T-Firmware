// FUN_0063ec98 @ 0063ec98 size=1052 calls_out=9 calls_in=1
// strings: 

void FUN_0063ec98(int param_1,uint *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  uint *local_28;
  int local_24;
  
  if (param_1 != 0) {
    if (param_1 == 1) {
      puVar16 = param_2 + 0x20;
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar16;
        bVar2 = (bool)hasExclusiveAccess(puVar16);
      } while (!bVar2);
      *puVar16 = uVar5 - 1;
      DataMemoryBarrier(0xb);
      if (uVar5 != 1) {
        return;
      }
      puVar16 = param_2 + 8;
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar16;
        bVar2 = (bool)hasExclusiveAccess(puVar16);
      } while (!bVar2);
      *puVar16 = uVar5 | 1;
      DataMemoryBarrier(0xb);
      if ((uVar5 & 1) == 0) {
        FUN_0063da44(param_2 + 0x10);
      }
      puVar16 = param_2 + 0x22;
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar16;
        bVar2 = (bool)hasExclusiveAccess(puVar16);
      } while (!bVar2);
      *(char *)puVar16 = '\x01';
      DataMemoryBarrier(0xb);
      if ((char)uVar5 == '\0') {
        return;
      }
      uVar6 = param_2[8];
      uVar5 = param_2[1];
      for (uVar15 = *param_2 & 0xfffffffe; uVar15 != (uVar6 & 0xfffffffe); uVar15 = uVar15 + 2) {
        uVar7 = (uVar15 & 0x3f) >> 1;
        if (uVar7 == 0x1f) {
          uVar7 = *(uint *)(uVar5 + 0x2e8);
          thunk_FUN_016d3fb4(uVar5);
        }
        else {
          pcVar8 = (char *)(uVar5 + uVar7 * 0x18);
          uVar7 = uVar5;
          if (*pcVar8 == '\0') {
            FUN_0063f17c(*(undefined4 *)(pcVar8 + 4));
          }
        }
        uVar5 = uVar7;
      }
      if (uVar5 != 0) {
        thunk_FUN_016d3fb4(uVar5);
      }
      FUN_0063d94c(param_2 + 0x12);
    }
    else {
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *param_2;
        bVar2 = (bool)hasExclusiveAccess(param_2);
      } while (!bVar2);
      *param_2 = uVar5 - 1;
      DataMemoryBarrier(0xb);
      if (uVar5 != 1) {
        return;
      }
      puVar16 = param_2 + 2;
      do {
        if (*puVar16 != 0) {
          ClearExclusiveLocal();
          FUN_015bf680(puVar16);
          goto LAB_0063eeb4;
        }
        bVar2 = (bool)hasExclusiveAccess(puVar16);
      } while (!bVar2);
      *puVar16 = 1;
      DataMemoryBarrier(0xb);
LAB_0063eeb4:
      uVar5 = 0;
      if ((DAT_018dd988 & 0x7fffffff) == 0) {
        cVar1 = (char)param_2[3];
      }
      else {
        uVar5 = FUN_015bf3f8();
        uVar5 = uVar5 ^ 1;
        cVar1 = (char)param_2[3];
      }
      if (cVar1 != '\0') {
        uVar15 = (uint)local_24 >> 8;
        local_24 = CONCAT31((int3)uVar15,(char)uVar5);
        local_28 = puVar16;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_28,&DAT_01857c28,&DAT_01883df0);
      }
      if ((char)param_2[0x10] == '\0') {
        *(undefined1 *)(param_2 + 0x10) = 1;
        FUN_006396e8(param_2 + 4);
        FUN_006396e8(param_2 + 10);
      }
      if (((uVar5 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar9 = FUN_015bf3f8(), iVar9 == 0)) {
        *(undefined1 *)(param_2 + 3) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar16;
        bVar2 = (bool)hasExclusiveAccess(puVar16);
      } while (!bVar2);
      *puVar16 = 0;
      if (uVar5 == 2) {
        FUN_016d6968(0xf0,puVar16,0x81,1);
      }
      puVar16 = param_2 + 0x11;
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar16;
        bVar2 = (bool)hasExclusiveAccess(puVar16);
      } while (!bVar2);
      *(char *)puVar16 = '\x01';
      DataMemoryBarrier(0xb);
      if ((char)uVar5 == '\0') {
        return;
      }
      FUN_0063d94c(param_2 + 4);
      FUN_0063d94c(param_2 + 10);
    }
    goto LAB_0063f024;
  }
  puVar16 = param_2 + 0x28;
  DataMemoryBarrier(0xb);
  do {
    uVar5 = *puVar16;
    bVar2 = (bool)hasExclusiveAccess(puVar16);
  } while (!bVar2);
  *puVar16 = uVar5 - 1;
  DataMemoryBarrier(0xb);
  if (uVar5 != 1) {
    return;
  }
  puVar16 = param_2 + 8;
  DataMemoryBarrier(0xb);
  do {
    uVar5 = *puVar16;
    bVar2 = (bool)hasExclusiveAccess(puVar16);
  } while (!bVar2);
  *puVar16 = uVar5 | param_2[0x12];
  DataMemoryBarrier(0xb);
  if ((param_2[0x12] & uVar5) == 0) {
    FUN_0063da44(param_2 + 0x13);
    FUN_0063da44(param_2 + 0x1c);
  }
  puVar16 = param_2 + 0x2a;
  DataMemoryBarrier(0xb);
  do {
    uVar5 = *puVar16;
    bVar2 = (bool)hasExclusiveAccess(puVar16);
  } while (!bVar2);
  *(char *)puVar16 = '\x01';
  DataMemoryBarrier(0xb);
  if ((char)uVar5 == '\0') {
    return;
  }
  uVar5 = param_2[0x12] - 1;
  uVar15 = uVar5 & *param_2;
  uVar5 = uVar5 & param_2[8];
  if (uVar15 < uVar5) {
    uVar5 = uVar5 - uVar15;
joined_r0x0063ef90:
    if (uVar5 != 0) {
      uVar6 = param_2[0x10];
      iVar9 = param_2[0x25] + uVar15 * 0x18;
      do {
        uVar7 = uVar6;
        if (uVar15 < uVar6) {
          uVar7 = 0;
        }
        if (*(char *)(iVar9 + uVar7 * -0x18) == '\0') {
          FUN_0063f17c(*(undefined4 *)(iVar9 + uVar7 * -0x18 + 4));
        }
        uVar15 = uVar15 + 1;
        iVar9 = iVar9 + 0x18;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  else {
    if (uVar5 < uVar15) {
      uVar5 = (uVar5 - uVar15) + param_2[0x10];
      goto joined_r0x0063ef90;
    }
    if ((param_2[8] & ~param_2[0x12]) != *param_2) {
      uVar5 = param_2[0x10];
      goto joined_r0x0063ef90;
    }
  }
  if (param_2[0x26] != 0) {
    thunk_FUN_016d3fb4(param_2[0x25]);
  }
  FUN_0063d94c(param_2 + 0x15);
  FUN_0063d94c(param_2 + 0x1e);
LAB_0063f024:
  if (param_2 == (uint *)0x0) {
    return;
  }
  iVar9 = FUN_016d3bc8();
  uVar5 = *(byte *)((int)param_2 + -3) & 0x1f;
  if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
     (uVar15 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar11 = uVar15 - 0x10, uVar15 == 0)) {
    iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar15 = (uint)(*(byte *)((int)param_2 + -3) >> 5);
  iVar14 = *(int *)(iVar9 + 8) + 0x10;
  iVar13 = iVar11 * uVar5 + iVar11 + -4;
  iVar11 = iVar14 + iVar13;
  if (4 < uVar15) {
    if (uVar15 != 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar3)();
    }
    uVar15 = *(uint *)(iVar11 + -4);
    if (uVar15 < 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar3)();
    }
    if (*(char *)(iVar11 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar3)();
    }
  }
  if ((uint)(iVar11 - (int)param_2) < uVar15) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar3)();
  }
  if (*(char *)(iVar11 - uVar15) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar3)();
  }
  if (*(char *)(iVar14 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar3)();
  }
  bVar4 = *(byte *)(iVar9 + 0x14);
  uVar15 = 1 << uVar5;
  *(undefined1 *)((int)param_2 + -3) = 0xff;
  *(undefined2 *)((int)param_2 + -2) = 0;
  do {
    uVar7 = *(uint *)(iVar9 + 0x10);
    uVar6 = *(uint *)(iVar9 + 0xc) | uVar7;
    if ((uVar15 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar3)();
    }
    if ((uVar7 == 0) || (uVar6 + uVar15 == (2 << (bVar4 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar9,uVar5);
      FUN_016dddc0(&DAT_018ddd48);
      if (local_24 == 0) {
        return;
      }
      puVar10 = (undefined4 *)FUN_016d2bc8();
      uVar12 = *puVar10;
      FUN_016d6ac4(local_28,local_24);
      *puVar10 = uVar12;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar9 + 0x10) = uVar15 + uVar7;
      return;
    }
    puVar16 = (uint *)(iVar9 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar6 = *puVar16;
      if (uVar7 != uVar6) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar2);
    *puVar16 = uVar15 + uVar7;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar7 == uVar6) {
      return;
    }
  } while( true );
}

