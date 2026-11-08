// FUN_01429b04 @ 01429b04 size=480 calls_out=5 calls_in=7
// strings: 

void FUN_01429b04(undefined4 *param_1)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 auStack_68 [24];
  undefined4 local_50;
  int local_4c;
  int iStack_48;
  undefined4 uStack_44;
  int local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_34;
  int local_30;
  undefined2 local_2c;
  
  local_50 = 0;
  local_4c = 0x18;
  iStack_48 = 0;
  uStack_44 = 0;
  FUN_0141e078(&local_74);
  FUN_0141c42c(auStack_68,local_6c,local_74,local_70);
  bVar2 = false;
  local_78 = 0;
  do {
    iVar3 = FUN_0141ea00(auStack_68);
    if (iVar3 == 0) {
      *param_1 = local_78;
      param_1[1] = 0;
      param_1[2] = local_88;
      param_1[3] = local_8c;
      return;
    }
    local_4c = *(int *)(iVar3 + 4);
    iStack_48 = *(int *)(iVar3 + 8);
    iVar3 = 0;
    while (iStack_48 != iVar3) {
      pbVar1 = (byte *)(local_4c + iVar3);
      iVar3 = iVar3 + 1;
      if ((*pbVar1 != 9) && (0x5e < *pbVar1 - 0x20)) goto LAB_01429cac;
    }
    local_2c = 1;
    local_34 = 0;
    local_38 = 1;
    local_3c = 0x2c;
    uStack_44 = 0;
    local_50 = 0x2c;
    local_40 = iStack_48;
    local_30 = iStack_48;
    while (iVar3 = FUN_014379b8(&local_50), iVar3 != 0) {
      uVar10 = FUN_013245a0();
      if ((int)((ulonglong)uVar10 >> 0x20) == 0) goto LAB_01429cac;
      uVar4 = 0;
      uVar6 = 0;
      while( true ) {
        iVar3 = (int)((ulonglong)uVar10 >> 0x20);
        if (iVar3 == 0) break;
        uVar9 = *(byte *)uVar10 - 0x30 & 0xff;
        if (9 < uVar9) goto LAB_01429cac;
        uVar5 = (uint)((ulonglong)uVar4 * 10);
        uVar8 = (uint)((ulonglong)uVar4 * 10 >> 0x20);
        uVar4 = (uint)((ulonglong)uVar6 * 10);
        uVar7 = uVar8 + uVar4;
        if ((int)((ulonglong)uVar6 * 10 >> 0x20) != 0 || CARRY4(uVar8,uVar4)) goto LAB_01429cac;
        uVar4 = uVar5 + uVar9;
        uVar10 = CONCAT44(iVar3 + -1,(byte *)uVar10 + 1);
        uVar6 = uVar7 + CARRY4(uVar5,uVar9);
        if (CARRY4(uVar7,(uint)CARRY4(uVar5,uVar9))) goto LAB_01429cac;
      }
      if (bVar2) {
        bVar2 = true;
        if (local_80 != uVar4 || local_84 != uVar6) {
LAB_01429cac:
          *param_1 = 0;
          param_1[1] = 0;
          return;
        }
      }
      else {
        local_78 = 1;
        bVar2 = true;
        local_8c = uVar6;
        local_88 = uVar4;
        local_84 = uVar6;
        local_80 = uVar4;
      }
    }
  } while( true );
}

