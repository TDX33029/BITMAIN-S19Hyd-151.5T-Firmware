// FUN_00c7c180 @ 00c7c180 size=604 calls_out=9 calls_in=2
// strings: 

void FUN_00c7c180(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar5;
  undefined1 uVar6;
  uint *puVar7;
  undefined *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  undefined8 uVar13;
  
  if (*param_1 != 1) {
    return;
  }
  uVar3 = (&switchD_00c7c1ac::switchdataD_00c7c1b0)[*(byte *)(param_1 + 3)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_1 + 3)) {
  case 0:
    piVar9 = (int *)param_1[1];
    param_1[2] = (int)piVar9;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018a6a6c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018a6a6c);
  case 3:
    piVar9 = (int *)param_1[2];
  }
  uVar13 = thunk_FUN_016de0ee(uVar3,0x40);
  iVar10 = (int)uVar13 + (int)((ulonglong)uVar13 >> 0x20);
  if (*(char *)(iVar10 + 0x38) == '\x01') {
LAB_00c7c21c:
    cVar12 = *(char *)(iVar10 + 0x31);
    cVar4 = *(char *)(iVar10 + 0x30);
    cVar2 = cVar12;
    if (cVar4 != '\x01') {
LAB_00c7c23c:
      *(char *)(iVar10 + 0x31) = cVar2;
      goto LAB_00c7c240;
    }
    if (cVar12 != '\0') {
      cVar2 = cVar12 + -1;
      goto LAB_00c7c23c;
    }
    FUN_016455a4(*param_2,param_2[1]);
    goto LAB_00c7c3ac;
  }
  cVar4 = '\0';
  cVar12 = '\0';
  if (*(char *)(iVar10 + 0x38) != '\x02') {
    FUN_015e8e6c(iVar10,FUN_00bacf28);
    *(undefined1 *)(iVar10 + 0x38) = 1;
    goto LAB_00c7c21c;
  }
LAB_00c7c240:
  iVar11 = *piVar9;
  FUN_00c740e8(iVar11 + 0x70,iVar11 + 0x20);
  if ((extraout_r1 & 0xff) == 2) {
    DataMemoryBarrier(0xb);
    if (1 < *(uint *)(iVar11 + 0x80)) {
      puVar8 = &DAT_018ac108;
LAB_00c7c3c4:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00412a7f,0x30,puVar8);
    }
LAB_00c7c34c:
    uVar5 = 2;
  }
  else {
    if ((extraout_r1 & 0xff) == 3) {
      FUN_0163e1c0(iVar11 + 0x40,param_2);
      FUN_00c740e8(iVar11 + 0x70,iVar11 + 0x20);
      if ((extraout_r1_00 & 0xff) == 2) {
        DataMemoryBarrier(0xb);
        if (1 < *(uint *)(iVar11 + 0x80)) {
          puVar8 = &DAT_018ac0f8;
          goto LAB_00c7c3c4;
        }
      }
      else {
        if ((extraout_r1_00 & 0xff) != 3) {
          puVar7 = (uint *)(iVar11 + 0x80);
          DataMemoryBarrier(0xb);
          do {
            uVar3 = *puVar7;
            bVar1 = (bool)hasExclusiveAccess(puVar7);
          } while (!bVar1);
          *puVar7 = uVar3 - 2;
          uVar5 = extraout_r1_00;
          goto LAB_00c7c370;
        }
        if ((*(char *)(iVar11 + 0x7c) != '\x01') ||
           (DataMemoryBarrier(0xb), 1 < *(uint *)(iVar11 + 0x80))) {
          if (cVar4 != '\0') {
            if (*(char *)(iVar10 + 0x38) != '\x01') {
              if (*(char *)(iVar10 + 0x38) == '\x02') goto LAB_00c7c3ac;
              FUN_015e8e6c(iVar10,FUN_01655ec4);
              *(undefined1 *)(iVar10 + 0x38) = 1;
            }
            *(char *)(iVar10 + 0x31) = cVar12;
            *(undefined1 *)(iVar10 + 0x30) = 1;
          }
LAB_00c7c3ac:
          uVar6 = 3;
          uVar5 = 3;
          goto LAB_00c7c380;
        }
      }
      goto LAB_00c7c34c;
    }
    puVar7 = (uint *)(iVar11 + 0x80);
    DataMemoryBarrier(0xb);
    do {
      uVar3 = *puVar7;
      bVar1 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar1);
    *puVar7 = uVar3 - 2;
    uVar5 = extraout_r1;
LAB_00c7c370:
    if (uVar3 < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_015bef44();
    }
    uVar5 = uVar5 & 1;
  }
  uVar6 = 1;
LAB_00c7c380:
  *(undefined1 *)(param_1 + 3) = uVar6;
  if (uVar5 != 3) {
    *param_1 = 0;
  }
  return;
}

