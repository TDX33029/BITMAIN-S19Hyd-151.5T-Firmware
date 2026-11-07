// FUN_01107964 @ 01107964 size=408 calls_out=4 calls_in=1
// strings: BUG: Time went backwards | BUG: Time overflowed; hello from the past!

void FUN_01107964(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  longlong lVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  undefined *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  FUN_015f3b0c(&local_38,0);
  local_44 = 0;
  local_48 = 0;
  local_58 = local_38;
  uStack_54 = local_34;
  uStack_50 = local_30;
  local_40 = 0;
  FUN_015f3c24(&local_38,&local_58,&local_48);
  if ((local_38 & 1) == 0) {
    uVar5 = (uint)((ulonglong)local_30 * 1000);
    lVar2 = (ulonglong)local_2c * 1000 + ((ulonglong)local_30 * 1000 >> 0x20);
    uVar9 = (uint)lVar2;
    uVar12 = (uint)((ulonglong)lVar2 >> 0x20);
    local_28 = local_28 / 1000000;
    bVar1 = CARRY4(uVar9,(uint)CARRY4(uVar5,local_28));
    uVar9 = uVar9 + CARRY4(uVar5,local_28);
    if (-(uint)CARRY4(uVar12,(uint)bVar1) < (uint)(-(uVar12 + bVar1) < (uint)(uVar9 < 0x80000000)))
    {
      if (param_2[2] != 0) {
        iVar6 = param_2[1];
        iVar10 = iVar6 + param_2[2] * 0x3c;
        do {
          uVar12 = *(uint *)(iVar6 + 0x2c);
          if (*(uint *)(iVar6 + 0x28) < uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,uVar12,*(uint *)(iVar6 + 0x28),&DAT_01890578);
          }
          if (uVar12 != 0) {
            puVar14 = *(undefined4 **)(iVar6 + 0x24);
            puVar13 = puVar14 + uVar12 * 0x14;
            do {
              *puVar14 = 1;
              puVar14[1] = 0;
              puVar14[2] = uVar5 + local_28;
              puVar14[3] = uVar9;
              puVar14 = puVar14 + 0x14;
            } while (puVar14 != puVar13);
          }
          iVar6 = iVar6 + 0x3c;
        } while (iVar6 != iVar10);
      }
      uVar4 = param_2[1];
      uVar7 = param_2[2];
      *param_1 = *param_2;
      param_1[1] = uVar4;
      param_1[2] = uVar7;
      return;
    }
    uVar4 = 0x2a;
    puVar8 = &DAT_01886bb0;
    puVar11 = &DAT_01886c80;
    pcVar3 = "BUG: Time overflowed, hello from the past!";
  }
  else {
    puVar8 = &DAT_01886ba0;
    puVar11 = &DAT_01886c70;
    local_34 = local_2c;
    pcVar3 = "BUG: Time went backwards";
    uVar4 = 0x18;
    local_38 = local_30;
    local_30 = local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb74f8(pcVar3,uVar4,&local_38,puVar11,puVar8);
}

