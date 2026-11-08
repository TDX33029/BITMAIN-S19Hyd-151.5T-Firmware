// FUN_01445734 @ 01445734 size=1052 calls_out=11 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01445734(int *param_1,int *param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint local_78;
  int *local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int *local_50;
  uint local_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  uint local_34;
  int local_30;
  int *local_2c;
  code *local_28;
  
  do {
    if (*param_1 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_1);
      goto LAB_01445764;
    }
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
LAB_01445764:
  local_78 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = (char)param_1[1];
  }
  else {
    local_78 = FUN_015bf3f8();
    local_78 = local_78 ^ 1;
    cVar1 = (char)param_1[1];
  }
  if (cVar1 != '\0') {
    local_4c._1_3_ = (undefined3)(local_4c >> 8);
    local_4c = CONCAT31(local_4c._1_3_,(char)local_78);
    local_50 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_50,&DAT_018a4108,&DAT_018a59cc);
  }
  local_68 = (int *)*param_3;
  iStack_64 = param_3[1];
  iStack_60 = param_3[2];
  iStack_5c = param_3[3];
  iStack_58 = param_3[4];
  iStack_54 = param_3[5];
  do {
    if (*param_2 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_2);
      goto LAB_014457c4;
    }
    bVar2 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar2);
  *param_2 = 1;
  DataMemoryBarrier(0xb);
LAB_014457c4:
  uVar5 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = (char)param_2[1];
  }
  else {
    uVar5 = FUN_015bf3f8();
    uVar5 = uVar5 ^ 1;
    cVar1 = (char)param_2[1];
  }
  if (cVar1 != '\0') {
    local_4c._1_3_ = (undefined3)(local_4c >> 8);
    local_4c = CONCAT31(local_4c._1_3_,(char)uVar5);
    local_50 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_50,&DAT_018a40f8,&DAT_018a5b2c);
  }
  uVar6 = param_1[0x60];
  if (uVar6 != 0) {
    uVar8 = 0;
    local_2c = &local_30;
    do {
      if ((uint)param_1[0x5c] <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018a6b80);
      }
      iVar3 = param_1[0x5b] + uVar8 * 0xc;
      local_4c = *(uint *)(iVar3 + 8);
      local_48 = *(int *)(iVar3 + 4);
      local_50 = param_1 + 0x56;
      local_34 = local_4c;
      local_30 = local_48;
      if ((((uint)param_1[100] <= local_4c) ||
          (piVar4 = (int *)(param_1[99] + local_4c * 0xf8), *piVar4 == 3 && piVar4[1] == 0)) ||
         (piVar4[0x35] != local_48)) {
        local_28 = FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00599806,&local_2c,&DAT_01882550);
      }
      puVar7 = (undefined1 *)piVar4[6];
      FUN_01015d2c(&local_68);
      FUN_0140f4a0(param_1 + 0x3c,param_2 + 2,&local_50);
      FUN_0101d80c(param_1 + 0x3c,&local_50,param_1 + 2);
      FUN_0102e068(param_1 + 2,&local_50,puVar7 != &DAT_3b9aca00);
      if ((uint)param_1[0x60] >= uVar6) {
        uVar8 = uVar8 + 1;
      }
      uVar6 = uVar6 - ((uint)param_1[0x60] < uVar6);
    } while (uVar8 < uVar6);
  }
  local_50 = local_68;
  local_4c = iStack_64;
  local_48 = iStack_60;
  iStack_44 = iStack_5c;
  iStack_40 = iStack_58;
  iStack_3c = iStack_54;
  cVar1 = (char)param_1[0x32];
  if (cVar1 != '\x03' && cVar1 != '\0') {
    if (cVar1 == '\x01') {
      (**(code **)(param_1[0x34] + 0x10))(param_1 + 0x37,param_1[0x35],param_1[0x36]);
    }
    else if ((param_1[0x33] & 0x7fffffffU) != 0) {
      thunk_FUN_016d3fb4(param_1[0x34]);
    }
  }
  param_1[0x32] = (int)local_50;
  param_1[0x33] = local_4c;
  param_1[0x34] = local_48;
  param_1[0x35] = iStack_44;
  param_1[0x36] = iStack_40;
  param_1[0x37] = iStack_3c;
  if (((uVar5 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar3 = FUN_015bf3f8(), iVar3 == 0))
  {
    *(undefined1 *)(param_2 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *param_2;
    bVar2 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar2);
  *param_2 = 0;
  if (iVar3 == 2) {
    FUN_016d6968(0xf0,param_2,0x81,1);
  }
  if (((local_78 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar3 = FUN_015bf3f8(), iVar3 == 0)) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 0;
  if (iVar3 == 2) {
    FUN_016d6968(0xf0,param_1,0x81,1);
    return;
  }
  return;
}

