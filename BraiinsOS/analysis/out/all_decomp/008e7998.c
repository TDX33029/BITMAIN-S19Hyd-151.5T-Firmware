// FUN_008e7998 @ 008e7998 size=644 calls_out=9 calls_in=1
// strings: 

void FUN_008e7998(uint *param_1,int param_2,undefined4 *param_3)

{
  bool bVar1;
  char cVar2;
  undefined *puVar3;
  char *pcVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  undefined8 uVar8;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  uVar8 = thunk_FUN_016de0ee(param_1,0x40);
  iVar5 = (int)uVar8 + (int)((ulonglong)uVar8 >> 0x20);
  if (*(char *)(iVar5 + 0x38) == '\x01') {
LAB_008e79ec:
    cVar7 = *(char *)(iVar5 + 0x31);
    cVar6 = *(char *)(iVar5 + 0x30);
    cVar2 = cVar7;
    if (cVar6 == '\x01') {
      if (cVar7 == '\0') {
        FUN_016455a4(*param_3,param_3[1]);
        *(undefined1 *)param_1 = 10;
        return;
      }
      cVar2 = cVar7 + -1;
    }
    *(char *)(iVar5 + 0x31) = cVar2;
  }
  else {
    cVar6 = '\0';
    cVar7 = '\0';
    if (*(char *)(iVar5 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar5,FUN_01626eac);
      *(undefined1 *)(iVar5 + 0x38) = 1;
      goto LAB_008e79ec;
    }
  }
  FUN_008e693c(&local_48,param_2 + 0x70,param_2 + 0x20);
  if ((local_48 & 0xff) == 9) {
    DataMemoryBarrier(0xb);
    if (*(uint *)(param_2 + 0x94) != *(uint *)(param_2 + 0x90) >> 1) {
      puVar3 = &DAT_018ac108;
LAB_008e7c0c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00412a7f,0x30,puVar3);
    }
    goto LAB_008e7b68;
  }
  if ((local_48 & 0xff) == 10) {
    FUN_0163e1c0(param_2 + 0x40,param_3);
    FUN_008e693c(&local_48,param_2 + 0x70,param_2 + 0x20);
    if ((local_48 & 0xff) == 9) {
      DataMemoryBarrier(0xb);
      if (*(uint *)(param_2 + 0x94) != *(uint *)(param_2 + 0x90) >> 1) {
        puVar3 = &DAT_018ac0f8;
        goto LAB_008e7c0c;
      }
LAB_008e7b68:
      *(undefined1 *)param_1 = 9;
      return;
    }
    if ((local_48 & 0xff) == 10) {
      if ((*(char *)(param_2 + 0x7c) != '\x01') ||
         (DataMemoryBarrier(0xb), *(uint *)(param_2 + 0x94) != *(uint *)(param_2 + 0x90) >> 1)) {
        *(undefined1 *)param_1 = 10;
        if (cVar6 != '\0') {
          if (*(char *)(iVar5 + 0x38) != '\x01') {
            if (*(char *)(iVar5 + 0x38) == '\x02') {
              return;
            }
            FUN_015e8e6c(iVar5,FUN_01655ec4);
            *(undefined1 *)(iVar5 + 0x38) = 1;
          }
          *(char *)(iVar5 + 0x31) = cVar7;
          *(undefined1 *)(iVar5 + 0x30) = 1;
        }
        return;
      }
      goto LAB_008e7b68;
    }
    pcVar4 = (char *)(param_2 + 0x80);
    local_38 = local_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    if (*pcVar4 == '\0') {
      bVar1 = (bool)hasExclusiveAccess(pcVar4);
      if (!bVar1) goto LAB_008e7bcc;
      *pcVar4 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_008e7bcc:
      FUN_01280da8(pcVar4);
    }
    FUN_0128236c(pcVar4);
    FUN_0163af68(pcVar4,1,pcVar4);
    goto LAB_008e7bec;
  }
  pcVar4 = (char *)(param_2 + 0x80);
  local_38 = local_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  if (*pcVar4 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar4);
    if (!bVar1) goto LAB_008e7b30;
    *pcVar4 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_008e7b30:
    FUN_01280da8(pcVar4);
  }
  FUN_0128236c(pcVar4);
  FUN_0163af68(pcVar4,1,pcVar4);
LAB_008e7bec:
  *param_1 = local_48;
  param_1[1] = uStack_44;
  param_1[2] = uStack_40;
  param_1[3] = uStack_3c;
  return;
}

