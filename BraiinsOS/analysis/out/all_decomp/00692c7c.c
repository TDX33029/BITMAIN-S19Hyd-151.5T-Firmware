// FUN_00692c7c @ 00692c7c size=1084 calls_out=13 calls_in=5
// strings: 

undefined4 FUN_00692c7c(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  int *local_60;
  code *local_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int *local_48;
  uint local_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  uint local_2c;
  int local_28;
  
  do {
    if (*param_1 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_1);
      goto LAB_00692cac;
    }
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
LAB_00692cac:
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    if ((char)param_1[1] == '\0') {
      uVar10 = 0;
LAB_00692d14:
      piVar4 = param_1 + 2;
      do {
        if (*param_2 != 0) {
          ClearExclusiveLocal();
          FUN_015bf680(param_2);
          goto LAB_00692d40;
        }
        bVar2 = (bool)hasExclusiveAccess(param_2);
      } while (!bVar2);
      *param_2 = 1;
      DataMemoryBarrier(0xb);
LAB_00692d40:
      uVar8 = 0;
      if ((DAT_018dd988 & 0x7fffffff) == 0) {
        cVar1 = (char)param_2[1];
      }
      else {
        uVar8 = FUN_015bf3f8();
        uVar8 = uVar8 ^ 1;
        cVar1 = (char)param_2[1];
      }
      if (cVar1 != '\0') {
        uVar10 = local_44 >> 8;
        local_44 = CONCAT31((int3)uVar10,(char)uVar8);
        local_48 = param_2;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_48,&DAT_01858790,&DAT_018a5b7c);
      }
      if ((char)param_1[0x32] == '\x03') {
        FUN_015e79d4(&local_60,0xb,&DAT_00408fa7,0x2a);
        FUN_0102e79c(&local_48,&local_60);
        local_60 = local_48;
        local_5c = (code *)local_44;
        iStack_58 = local_40;
        iStack_54 = iStack_3c;
        iStack_50 = iStack_38;
        iStack_4c = iStack_34;
        param_1[0x32] = (int)local_48;
        param_1[0x33] = local_44;
        param_1[0x34] = local_40;
        param_1[0x35] = iStack_3c;
        param_1[0x36] = iStack_38;
        param_1[0x37] = iStack_34;
      }
      uVar12 = param_1[0x60];
      piVar5 = param_1 + 0x56;
      if (uVar12 != 0) {
        uVar9 = 0;
        do {
          if ((uint)param_1[0x5c] <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018a6b80);
          }
          iVar7 = param_1[0x5b] + uVar9 * 0xc;
          local_40 = *(int *)(iVar7 + 4);
          local_44 = *(uint *)(iVar7 + 8);
          local_48 = piVar5;
          local_2c = local_44;
          local_28 = local_40;
          if ((((uint)param_1[100] <= local_44) ||
              (piVar6 = (int *)(param_1[99] + local_44 * 0xf8), *piVar6 == 3 && piVar6[1] == 0)) ||
             (piVar6[0x35] != local_40)) {
            local_5c = FUN_0101a4ac;
            local_60 = &local_28;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_00599806,&local_60,&DAT_01882550);
          }
          puVar11 = (undefined1 *)piVar6[6];
          FUN_01017d84();
          FUN_0075746c(param_1 + 0x3c,param_2 + 2,&local_48);
          FUN_0101d80c(param_1 + 0x3c,&local_48,piVar4);
          FUN_0102e068(piVar4,&local_48,puVar11 != &DAT_3b9aca00);
          if ((uint)param_1[0x60] >= uVar12) {
            uVar9 = uVar9 + 1;
          }
          uVar12 = uVar12 - ((uint)param_1[0x60] < uVar12);
        } while (uVar9 < uVar12);
      }
      FUN_0102b338(param_1 + 0xe,param_3,piVar5,piVar4);
      if (((uVar8 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
        *(undefined1 *)(param_2 + 1) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *param_2;
        bVar2 = (bool)hasExclusiveAccess(param_2);
      } while (!bVar2);
      *param_2 = 0;
      if (iVar7 == 2) {
        FUN_016d6968(0xf0,param_2,0x81,1);
      }
      if (((uVar10 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
        *(undefined1 *)(param_1 + 1) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *param_1;
        bVar2 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar2);
      *param_1 = 0;
      uVar3 = 0;
      goto joined_r0x00692f54;
    }
LAB_00692cd0:
    if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  else {
    uVar10 = FUN_015bf3f8();
    if ((char)param_1[1] == '\0') {
      uVar10 = uVar10 ^ 1;
      goto LAB_00692d14;
    }
    if (uVar10 != 0) goto LAB_00692cd0;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 0;
  uVar3 = 1;
joined_r0x00692f54:
  if (iVar7 == 2) {
    FUN_016d6968(0xf0,param_1,0x81,1);
    return uVar3;
  }
  return uVar3;
}

