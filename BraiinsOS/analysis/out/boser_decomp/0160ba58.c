// FUN_0160ba58 @ 0160ba58 size=688 calls_out=5 calls_in=2
// strings: 

void FUN_0160ba58(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  undefined4 local_80;
  uint local_7c;
  int local_78;
  undefined4 uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  int local_68;
  undefined4 local_64;
  uint local_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [16];
  undefined4 local_48 [4];
  undefined1 auStack_38 [20];
  
  if (*(char *)(param_2 + 0x8c) != '\0') {
    *(undefined1 *)param_1 = 0xf;
    return;
  }
  piVar6 = *(int **)(param_2 + 0x84);
  do {
    iVar2 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar2 + 1;
  if (iVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xfdee,0x160bd04);
    (*pcVar5)();
  }
  piVar8 = piVar6 + 2;
  do {
    if ((char)*piVar8 != '\0') {
      ClearExclusiveLocal();
      *(undefined1 *)param_1 = 10;
      goto LAB_0160bb60;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar1);
  *(char *)piVar8 = '\x01';
  DataMemoryBarrier(0xb);
  FUN_0160df90(&local_80,piVar6 + 0x14);
  if ((char)local_80 != '\x0e') {
    *param_1 = local_80;
    param_1[1] = local_7c;
    param_1[2] = local_78;
    param_1[3] = uStack_74;
    param_1[4] = uStack_70;
    param_1[5] = uStack_6c;
    DataMemoryBarrier(0xb);
    *(char *)piVar8 = '\0';
LAB_0160bb60:
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0160ea2c(piVar6);
      return;
    }
    return;
  }
  iVar2 = 0;
  if (piVar6[0x25] != -0x80000000) {
    iVar2 = piVar6[0x26];
  }
  FUN_0160e168(&local_80,piVar6 + 0x14,piVar6[0x29],piVar6[0x2a],iVar2,piVar6[0x27]);
  if ((char)local_80 == '\x0e') {
    if ((char)local_7c == '\x02') {
      *(undefined1 *)param_1 = 0x10;
    }
    else {
      local_68 = local_78;
      local_64 = uStack_74;
      local_60 = uStack_70;
      uStack_5c = uStack_6c;
      uVar3 = piVar6[0x22];
      uVar7 = piVar6[0x20];
      uVar9 = piVar6[0x21];
      uVar4 = uVar3 + uStack_70;
      piVar6[0x22] = uVar4;
      uVar3 = piVar6[0x23] + (uint)CARRY4(uVar3,uStack_70);
      piVar6[0x23] = uVar3;
      if (uVar9 <= uVar3 && (uint)(uVar4 <= uVar7) <= uVar9 - uVar3) {
        if (piVar6[0x25] == -0x80000000) {
          local_48[0] = 0x80000000;
        }
        else {
          FUN_006666fc(local_48,piVar6[0x26],piVar6[0x27]);
        }
        uVar3 = local_60;
        FUN_01bed4e2((uint)auStack_58 | 3,local_48,0xc);
        *(undefined1 *)param_1 = 7;
        FUN_01bed4e2((undefined1 *)((int)param_1 + 1),auStack_58,0xf);
        param_1[4] = uVar7;
        pcVar5 = *(code **)(local_68 + 0x10);
        param_1[5] = uVar9;
        (*pcVar5)(&uStack_5c,local_64,uVar3);
        DataMemoryBarrier(0xb);
        *(char *)piVar8 = '\0';
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar6;
          bVar1 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar1);
        *piVar6 = iVar2 + -1;
        goto LAB_0160bbc0;
      }
      if ((local_7c & 1) != 0) {
        *(undefined1 *)(param_2 + 0x8c) = 1;
        *(undefined1 *)(piVar6 + 0x2b) = 1;
      }
      FUN_01bed4e2((uint)auStack_38 | 3,&local_78,0x10);
      *(undefined1 *)param_1 = 0xe;
      FUN_01bed4e2((undefined1 *)((int)param_1 + 1),auStack_38,0x13);
    }
  }
  else {
    *param_1 = local_80;
    param_1[1] = local_7c;
    param_1[2] = local_78;
    param_1[3] = uStack_74;
    param_1[4] = uStack_70;
    param_1[5] = uStack_6c;
  }
  DataMemoryBarrier(0xb);
  *(char *)piVar8 = '\0';
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar2 + -1;
LAB_0160bbc0:
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0160ea2c(piVar6);
  }
  return;
}

