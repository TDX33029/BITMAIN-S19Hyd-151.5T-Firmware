// FUN_0143fde8 @ 0143fde8 size=544 calls_out=8 calls_in=2
// strings: 

void FUN_0143fde8(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  bool bVar1;
  char cVar2;
  uint *puVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  undefined8 uVar9;
  uint local_d0 [43];
  
  uVar9 = thunk_FUN_016de0ee(param_1,0x40);
  iVar6 = (int)uVar9 + (int)((ulonglong)uVar9 >> 0x20);
  if (*(char *)(iVar6 + 0x38) == '\x01') {
LAB_0143fe3c:
    cVar8 = *(char *)(iVar6 + 0x31);
    cVar7 = *(char *)(iVar6 + 0x30);
    cVar2 = cVar8;
    if (cVar7 == '\x01') {
      if (cVar8 == '\0') {
        FUN_016455a4(*param_3,param_3[1]);
        *param_1 = 5;
        param_1[1] = 0;
        return;
      }
      cVar2 = cVar8 + -1;
    }
    *(char *)(iVar6 + 0x31) = cVar2;
  }
  else {
    cVar7 = '\0';
    cVar8 = '\0';
    if (*(char *)(iVar6 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar6,FUN_009948a0);
      *(undefined1 *)(iVar6 + 0x38) = 1;
      goto LAB_0143fe3c;
    }
  }
  FUN_01405abc(local_d0,param_2 + 0x70,param_2 + 0x20);
  if ((local_d0[0] & 7) == 4) {
    DataMemoryBarrier(0xb);
    if (1 < *(uint *)(param_2 + 0x80)) {
      puVar5 = &DAT_018ac108;
LAB_0143fff8:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00412a7f,0x30,puVar5);
    }
  }
  else {
    if (local_d0[0] != 5) {
      puVar3 = (uint *)(param_2 + 0x80);
      DataMemoryBarrier(0xb);
      do {
        uVar4 = *puVar3;
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = uVar4 - 2;
LAB_0143ffb0:
      if (uVar4 < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_015bef44();
      }
      FUN_016dd1aa(param_1,local_d0,0xa8);
      return;
    }
    FUN_0163e1c0(param_2 + 0x40,param_3);
    FUN_01405abc(local_d0,param_2 + 0x70,param_2 + 0x20);
    if ((local_d0[0] & 7) == 4) {
      DataMemoryBarrier(0xb);
      if (1 < *(uint *)(param_2 + 0x80)) {
        puVar5 = &DAT_018ac0f8;
        goto LAB_0143fff8;
      }
    }
    else {
      if (local_d0[0] != 5) {
        puVar3 = (uint *)(param_2 + 0x80);
        DataMemoryBarrier(0xb);
        do {
          uVar4 = *puVar3;
          bVar1 = (bool)hasExclusiveAccess(puVar3);
        } while (!bVar1);
        *puVar3 = uVar4 - 2;
        goto LAB_0143ffb0;
      }
      if ((*(char *)(param_2 + 0x7c) != '\x01') ||
         (DataMemoryBarrier(0xb), 1 < *(uint *)(param_2 + 0x80))) {
        *param_1 = 5;
        param_1[1] = 0;
        if (cVar7 != '\0') {
          if (*(char *)(iVar6 + 0x38) != '\x01') {
            if (*(char *)(iVar6 + 0x38) == '\x02') {
              return;
            }
            FUN_015e8e6c(iVar6,FUN_01655ec4);
            *(undefined1 *)(iVar6 + 0x38) = 1;
          }
          *(char *)(iVar6 + 0x31) = cVar8;
          *(undefined1 *)(iVar6 + 0x30) = 1;
        }
        return;
      }
    }
  }
  *param_1 = 4;
  param_1[1] = 0;
  return;
}

