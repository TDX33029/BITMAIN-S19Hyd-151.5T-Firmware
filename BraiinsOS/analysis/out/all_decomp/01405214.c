// FUN_01405214 @ 01405214 size=1016 calls_out=9 calls_in=0
// strings: 

void FUN_01405214(char *param_1,code *param_2,undefined4 *param_3)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  int *extraout_r3;
  int *extraout_r3_00;
  int *extraout_r3_01;
  int *piVar4;
  int *extraout_r3_02;
  int *extraout_r3_03;
  int iVar5;
  int *piVar6;
  int *piVar7;
  byte bVar8;
  uint uVar9;
  int *piVar10;
  char cVar11;
  uint uVar12;
  undefined8 uVar13;
  uint local_5c;
  undefined4 local_58;
  code *local_54;
  int *local_50;
  int *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  int *local_28;
  
  iVar5 = *(int *)param_2;
  piVar7 = (int *)((int)param_2 + 8);
  piVar10 = (int *)*piVar7;
  bVar8 = (byte)&local_50;
  piVar6 = (int *)(iVar5 + 8);
  do {
    if (*piVar6 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar6);
      goto LAB_01405260;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = 1;
  DataMemoryBarrier(0xb);
LAB_01405260:
  local_5c = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar11 = *(char *)(iVar5 + 0xc);
  }
  else {
    local_5c = FUN_015bf3f8();
    local_5c = local_5c ^ 1;
    cVar11 = *(char *)(iVar5 + 0xc);
  }
  if (cVar11 != '\0') {
    uVar12 = (uint)local_54 >> 8;
    local_54 = (code *)CONCAT31((int3)uVar12,(char)local_5c);
    local_58 = (int **)piVar6;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_58,&DAT_018a4108,&DAT_018a5afc);
  }
  FUN_0102bab0(&local_58,iVar5 + 0x40);
  pcVar2 = local_54;
  uVar12 = (uint)local_58 & 0xff;
  if (uVar12 == 3) {
    if (*(int *)(iVar5 + 0xf0) != 0) {
      cVar11 = '\x03';
      bVar8 = 5;
      piVar4 = extraout_r3;
      goto joined_r0x01405410;
    }
    if (piVar10 != (int *)0x0) {
      local_2c = *(int **)((int)param_2 + 0xc);
      local_28 = *(int **)((int)param_2 + 0x10);
      if (((*(int **)(iVar5 + 0x198) <= local_2c) ||
          (param_2 = (code *)(*(int *)(iVar5 + 0x194) + (int)local_2c * 0xf8),
          *(int *)param_2 == 3 && *(int *)((int)param_2 + 4) == 0)) ||
         (*(int **)((int)param_2 + 0xd4) != local_28)) {
        local_58 = &local_28;
        local_54 = FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00599806,&local_58,&DAT_01882550);
      }
      if ((char)*(int *)((int)param_2 + 0xec) != '\0') {
        uVar13 = (**(code **)*param_3)(param_3[1]);
        local_4c = extraout_r3_00;
        if (*(int *)((int)param_2 + 0x40) != 0) {
          (**(code **)(*(int *)((int)param_2 + 0x40) + 0xc))(*(int *)((int)param_2 + 0x44));
          local_4c = extraout_r3_01;
        }
        *(undefined8 *)((int)param_2 + 0x40) = uVar13;
        cVar11 = '\x06';
        goto LAB_01405458;
      }
    }
    piVar4 = extraout_r3;
    if (((local_5c == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar3 = FUN_015bf3f8(), piVar4 = extraout_r3_03, iVar3 == 0)) {
      *(undefined1 *)(iVar5 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = 0;
    if (iVar5 != 2) goto LAB_01405558;
    cVar11 = '\x05';
LAB_01405534:
    FUN_016d6968(0xf0,piVar6,0x81,1);
  }
  else {
    uVar9 = (uint)local_58._1_1_;
    local_3c = local_44;
    local_40 = local_48;
    piVar4 = local_4c;
    param_2 = local_54;
    bVar8 = local_58._1_1_;
    piVar10 = local_50;
    if (uVar12 == 0) {
      cVar11 = '\0';
    }
    else if (uVar12 == 1) {
      cVar11 = '\x01';
      local_38 = local_48;
      local_34 = local_44;
    }
    else {
      if (local_54 == (code *)&DAT_80000000) {
        local_2c = (int *)CONCAT31(CONCAT21(local_2c._2_2_,local_58._1_1_),1);
      }
      else {
        local_54 = (code *)local_50;
        local_58 = (int **)pcVar2;
        local_50 = local_4c;
        FUN_01650c14(&local_2c,uVar9,&local_58);
        local_4c = extraout_r3_02;
        piVar10 = local_28;
      }
      uVar13 = CONCAT44(piVar10,uVar9);
      cVar11 = '\x04';
      param_2 = (code *)local_2c;
LAB_01405458:
      piVar10 = (int *)((ulonglong)uVar13 >> 0x20);
      bVar8 = (byte)uVar13;
      piVar4 = local_4c;
    }
joined_r0x01405410:
    if (((local_5c == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar3 = FUN_015bf3f8(), iVar3 == 0)) {
      *(undefined1 *)(iVar5 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = 0;
    if (iVar5 == 2) goto LAB_01405534;
  }
  if (cVar11 != '\x05') {
    if (cVar11 != '\x06') {
      *(code **)(param_1 + 4) = param_2;
      *(int **)(param_1 + 8) = piVar10;
      *(int **)(param_1 + 0xc) = piVar4;
      *(undefined4 *)(param_1 + 0x10) = local_38;
      *(undefined4 *)(param_1 + 0x14) = local_34;
      param_1[1] = bVar8;
    }
    *param_1 = cVar11;
    return;
  }
LAB_01405558:
  piVar10 = (int *)*piVar7;
  if (piVar10 != (int *)0x0) {
    FUN_0102c440(piVar7);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar10;
      bVar1 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar1);
    *piVar10 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0102a7d0(*piVar7);
    }
  }
  *piVar7 = 0;
  *param_1 = '\x05';
  return;
}

