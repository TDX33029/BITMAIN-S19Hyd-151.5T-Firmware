// FUN_01689b00 @ 01689b00 size=496 calls_out=3 calls_in=1
// strings: assertion failed: self.height > 0

void FUN_01689b00(undefined1 *param_1,int *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  char local_49;
  int local_48 [3];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  uint local_28;
  
  iVar12 = *param_2;
  if (iVar12 == 0) {
LAB_01689c58:
    uVar3 = 0;
LAB_01689ccc:
    *param_1 = uVar3;
    return;
  }
  iVar11 = param_2[1];
  iVar4 = iVar11;
  local_48[0] = iVar12;
  do {
    uVar5 = (uint)*(ushort *)(local_48[0] + 0x8a);
    iVar6 = uVar5 << 2;
    iVar2 = 0x17;
    do {
      local_48[2] = iVar2;
      if (iVar6 == 0) goto LAB_01689b7c;
      uVar9 = *(uint *)(local_48[0] + local_48[2] * 4);
      iVar6 = iVar6 + -4;
      bVar13 = param_3 < uVar9;
      bVar1 = !bVar13 && param_3 != uVar9;
      iVar2 = local_48[2] + 1;
    } while ((char)(bVar1 - bVar13) == '\x01');
    if (bVar1 == bVar13) {
      local_48[2] = local_48[2] + -0x17;
      local_49 = '\0';
      if (iVar4 == 0) {
        local_48[1] = 0;
        FUN_0167c688(&local_3c,local_48,&local_49);
        uVar7 = local_34;
        uVar10 = local_38;
      }
      else {
        local_48[0] = *(int *)(local_48[0] + local_48[2] * 4 + 0x8c);
        if (iVar4 != 1) {
          iVar6 = 1;
          do {
            iVar6 = iVar6 + 1;
            local_48[0] = *(int *)(local_48[0] + (uint)*(ushort *)(local_48[0] + 0x8a) * 4 + 0x8c);
          } while (iVar4 != iVar6);
        }
        local_48[1] = 0;
        local_48[2] = *(ushort *)(local_48[0] + 0x8a) - 1;
        FUN_0167c688(&local_3c,local_48,&local_49);
        iVar4 = local_30;
        if (*(ushort *)(local_30 + 0x8a) <= local_28) {
          do {
            local_30 = *(int *)(iVar4 + 0x58);
            local_28 = (uint)*(ushort *)(iVar4 + 0x88);
            iVar4 = local_30;
          } while (*(ushort *)(local_30 + 0x8a) <= local_28);
        }
        *(undefined4 *)(local_30 + local_28 * 4 + 0x5c) = local_3c;
        puVar8 = (undefined4 *)(local_30 + local_28 * 8);
        uVar10 = *puVar8;
        uVar7 = puVar8[1];
        *puVar8 = local_38;
        puVar8[1] = local_34;
      }
      param_2[2] = param_2[2] + -1;
      if (local_49 == '\x01') {
        if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: self.height > 0",0x21,&DAT_01d2ff00);
        }
        iVar4 = *(int *)(iVar12 + 0x8c);
        *param_2 = iVar4;
        param_2[1] = iVar11 + -1;
        *(undefined4 *)(iVar4 + 0x58) = 0;
        thunk_FUN_01be4678(iVar12);
      }
      uVar3 = 1;
      *(undefined4 *)(param_1 + 1) = uVar10;
      *(undefined4 *)(param_1 + 5) = uVar7;
      goto LAB_01689ccc;
    }
    uVar5 = local_48[2] - 0x17;
LAB_01689b7c:
    if (iVar4 == 0) goto LAB_01689c58;
    iVar4 = iVar4 + -1;
    local_48[0] = *(int *)(local_48[0] + uVar5 * 4 + 0x8c);
  } while( true );
}

