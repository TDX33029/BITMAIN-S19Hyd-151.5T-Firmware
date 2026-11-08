// FUN_015f1df4 @ 015f1df4 size=588 calls_out=8 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x015f1eb8) */

void FUN_015f1df4(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  char local_39;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  
  cVar1 = *(char *)*param_1;
  *(char *)*param_1 = '\0';
  if (cVar1 != '\x01') {
LAB_015f201c:
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ab09c);
  }
  local_39 = '\0';
  DataMemoryBarrier(0xb);
  if (DAT_018d9080 != 0) {
    FUN_015f20a0(&local_39);
  }
  if (local_39 == '\0') {
    uVar7 = thunk_FUN_016de0ee(0,0x240);
    puVar3 = (uint *)((int)uVar7 + (int)((ulonglong)uVar7 >> 0x20));
    uVar5 = *puVar3;
    uVar6 = puVar3[1];
    if (uVar5 == 0 && uVar6 == 0) {
      ClearExclusiveLocal();
      do {
        uVar5 = DAT_018dd9a8 + 1;
        uVar6 = DAT_018dd9ac + (0xfffffffe < DAT_018dd9a8);
        if (CARRY4(DAT_018dd9ac,(uint)(0xfffffffe < DAT_018dd9a8))) {
          FUN_015ee8c8();
          goto LAB_015f201c;
        }
        bVar2 = (bool)hasExclusiveAccess(0x18dd9a8);
      } while (!bVar2);
      DAT_018dd9a8 = uVar5;
      DAT_018dd9ac = uVar6;
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
    }
    ClearExclusiveLocal();
    if (uVar5 == DAT_018d9058 && uVar6 == DAT_018d905c) {
      iVar4 = DAT_018d9064 + 1;
      if (DAT_018d9064 == -1) goto LAB_015f1f98;
    }
    else {
      do {
        if (DAT_018d9060 != 0) {
          ClearExclusiveLocal();
          FUN_015f22a4(DAT_018dd970);
          return;
        }
        bVar2 = (bool)hasExclusiveAccess(0x18d9060);
      } while (!bVar2);
      DAT_018d9060 = 1;
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(0x18d9058);
      } while (!bVar2);
      iVar4 = 1;
      DAT_018d9058 = uVar5;
      DAT_018d905c = uVar6;
    }
    local_2c = local_2c & 0xffffff00;
    local_30 = 0;
    local_34 = 1;
    local_38 = 0;
    DAT_018d9064 = iVar4;
    if (DAT_018d9068 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb715c(&DAT_018aab68);
    }
    DAT_018d9068 = -1;
    FUN_015f2180(&DAT_018d906c);
    iVar4 = DAT_018d9060;
    DAT_018d9068 = DAT_018d9068 + 1;
    DAT_018d9064 = DAT_018d9064 + -1;
    DAT_018d906c = local_38;
    DAT_018d9070 = local_34;
    DAT_018d9074 = local_30;
    DAT_018d9078 = local_2c;
    if (DAT_018d9064 == 0) {
      do {
        bVar2 = (bool)hasExclusiveAccess(0x18d9058);
      } while (!bVar2);
      DAT_018d9058 = 0;
      DAT_018d905c = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(0x18d9060);
      } while (!bVar2);
      DAT_018d9060 = 0;
      if (iVar4 == 2) {
        FUN_016d6968(0xf0,&DAT_018d9060,0x81,1);
        FUN_015f22a4(DAT_018dd970);
        return;
      }
    }
  }
LAB_015f1f98:
  FUN_015f22a4(DAT_018dd970);
  return;
}

