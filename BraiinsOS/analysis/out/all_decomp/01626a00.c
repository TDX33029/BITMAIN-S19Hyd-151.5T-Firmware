// FUN_01626a00 @ 01626a00 size=596 calls_out=7 calls_in=2
// strings: 

void FUN_01626a00(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  uint *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  undefined8 uVar9;
  uint local_38;
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  uVar9 = thunk_FUN_016de0ee(param_1,0x40);
  iVar7 = (int)uVar9 + (int)((ulonglong)uVar9 >> 0x20);
  if (*(char *)(iVar7 + 0x38) == '\x01') {
LAB_01626a54:
    cVar8 = *(char *)(iVar7 + 0x31);
    cVar3 = *(char *)(iVar7 + 0x30);
    cVar2 = cVar8;
    if (cVar3 == '\x01') {
      if (cVar8 == '\0') {
        FUN_016455a4(*param_3,param_3[1]);
        *param_1 = 2;
        param_1[1] = 0;
        return;
      }
      cVar2 = cVar8 + -1;
    }
    *(char *)(iVar7 + 0x31) = cVar2;
  }
  else {
    cVar3 = '\0';
    cVar8 = '\0';
    if (*(char *)(iVar7 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar7,FUN_01626eac);
      *(undefined1 *)(iVar7 + 0x38) = 1;
      goto LAB_01626a54;
    }
  }
  FUN_01625e40(&local_38,param_2 + 0x70,param_2 + 0x20);
  if (local_38 == 2 && local_34 == 0) {
    FUN_0163e1c0(param_2 + 0x40,param_3);
    FUN_01625e40(&local_38,param_2 + 0x70,param_2 + 0x20);
    if (local_38 == 2 && local_34 == 0) {
      if ((*(char *)(param_2 + 0x7c) != '\x01') ||
         (DataMemoryBarrier(0xb), 1 < *(uint *)(param_2 + 0x80))) {
        *param_1 = 2;
        param_1[1] = 0;
        if (cVar3 == '\0') {
          return;
        }
        if (*(char *)(iVar7 + 0x38) != '\x01') {
          if (*(char *)(iVar7 + 0x38) == '\x02') {
            return;
          }
          FUN_015e8e6c(iVar7,FUN_01655ec4);
          *(undefined1 *)(iVar7 + 0x38) = 1;
        }
        *(char *)(iVar7 + 0x31) = cVar8;
        *(undefined1 *)(iVar7 + 0x30) = 1;
        return;
      }
    }
    else {
      if ((local_38 & 1) == 0) {
        puVar4 = (uint *)(param_2 + 0x80);
        DataMemoryBarrier(0xb);
        do {
          uVar6 = *puVar4;
          bVar1 = (bool)hasExclusiveAccess(puVar4);
        } while (!bVar1);
        *puVar4 = uVar6 - 2;
        goto LAB_01626bcc;
      }
      DataMemoryBarrier(0xb);
      if (1 < *(uint *)(param_2 + 0x80)) {
        puVar5 = &DAT_018ac0f8;
        goto LAB_01626c18;
      }
    }
  }
  else {
    if ((local_38 & 1) == 0) {
      puVar4 = (uint *)(param_2 + 0x80);
      DataMemoryBarrier(0xb);
      do {
        uVar6 = *puVar4;
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *puVar4 = uVar6 - 2;
LAB_01626bcc:
      if (uVar6 < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_015bef44();
      }
      param_1[2] = local_30;
      *param_1 = 1;
      param_1[1] = 0;
      param_1[3] = uStack_2c;
      return;
    }
    DataMemoryBarrier(0xb);
    if (1 < *(uint *)(param_2 + 0x80)) {
      puVar5 = &DAT_018ac108;
LAB_01626c18:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00412a7f,0x30,puVar5);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

