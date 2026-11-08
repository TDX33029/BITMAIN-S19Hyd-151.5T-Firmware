// FUN_01898524 @ 01898524 size=588 calls_out=5 calls_in=3
// strings: InvalidEncoding | PublicKeyIsMissing | VersionNotSupported | WrongAlgorithm | InvalidEncoding | InvalidEncoding

void FUN_01898524(undefined8 *param_1,undefined4 param_2,int param_3,int *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 uVar8;
  byte bVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined8 local_30;
  uint local_28;
  
  puVar5 = (undefined4 *)*param_4;
  local_34 = 0;
  bVar1 = *(byte *)(param_4 + 1);
  bVar9 = *(byte *)((int)param_4 + 5);
  local_3c = param_2;
  local_38 = param_3;
  local_30 = FUN_01898838(&local_3c,0x30);
  if ((int)local_30 == 0) {
    uVar8 = 0xf;
    pcVar6 = "InvalidEncoding";
    goto LAB_0189862c;
  }
  uVar10 = *puVar5;
  iVar11 = puVar5[1];
  local_28 = 0;
  uVar12 = FUN_01899080(&local_30);
  pcVar7 = "InvalidEncoding";
  if (((byte *)uVar12 != (byte *)0x0) && ((int)((ulonglong)uVar12 >> 0x20) == 1)) {
    uVar8 = 0x13;
    bVar2 = *(byte *)uVar12;
    pcVar6 = "VersionNotSupported";
    if (1 < bVar2) goto LAB_0189862c;
    uVar12 = FUN_01898838(&local_30,0x30);
    if ((int)uVar12 != 0) {
      uVar8 = 0xe;
      pcVar6 = "WrongAlgorithm";
      if ((int)((ulonglong)uVar12 >> 0x20) != iVar11) goto LAB_0189862c;
      iVar11 = thunk_FUN_01bed842((int)uVar12,uVar10,iVar11);
      if (iVar11 != 0) goto LAB_0189862c;
      if ((bVar2 & 1) == 0) {
        bVar9 = 2;
        uVar8 = 0x13;
        pcVar6 = "VersionNotSupported";
        if (1 < bVar1) goto LAB_0189862c;
      }
      else {
        uVar8 = 0x13;
        pcVar6 = "VersionNotSupported";
        if (1 < bVar1 - 1) goto LAB_0189862c;
        bVar9 = bVar9 & 1;
      }
      uVar12 = FUN_01898838(&local_30,4);
      if ((int)uVar12 == 0) {
LAB_0189874c:
        uVar8 = 0xf;
        pcVar6 = pcVar7;
      }
      else {
        uVar4 = local_30._4_4_;
        uVar3 = local_30;
        if ((local_28 < local_30._4_4_) &&
           (uVar4 = (uint)local_30, *(char *)((uint)local_30 + local_28) == -0x60)) {
          uVar13 = FUN_01898838(&local_30,0xa0);
          uVar4 = (uint)((ulonglong)uVar13 >> 0x20);
          uVar3 = local_30;
          if ((int)uVar13 == 0) goto LAB_0189874c;
        }
        local_30._4_4_ = (uint)((ulonglong)uVar3 >> 0x20);
        local_30._0_4_ = (uint)uVar3;
        if (bVar9 == 2) {
          lVar14 = (ulonglong)uVar4 << 0x20;
        }
        else {
          if (local_28 == local_30._4_4_) {
            uVar8 = 0x12;
            pcVar6 = "PublicKeyIsMissing";
            goto LAB_0189862c;
          }
          local_30 = uVar3;
          if ((((bVar9 & 1) == 0) || (local_30._4_4_ <= local_28)) ||
             (*(char *)((uint)local_30 + local_28) != -0x5f)) {
            lVar14 = FUN_018990e0(0x81,&local_30);
          }
          else {
            lVar14 = FUN_01899124(&local_30);
          }
          if ((int)lVar14 == 0) goto LAB_0189874c;
        }
        uVar8 = 0xf;
        pcVar6 = pcVar7;
        if (local_28 == local_30._4_4_) {
          if (local_34 == local_38) {
            *param_1 = uVar12;
            param_1[1] = lVar14;
            return;
          }
          *(undefined4 *)param_1 = 0;
          *(char **)((int)param_1 + 4) = "InvalidEncoding";
          *(undefined4 *)(param_1 + 1) = 0xf;
          return;
        }
      }
      goto LAB_0189862c;
    }
  }
  uVar8 = 0xf;
  pcVar6 = pcVar7;
LAB_0189862c:
  *(undefined4 *)param_1 = 0;
  *(char **)((int)param_1 + 4) = pcVar6;
  *(undefined4 *)(param_1 + 1) = uVar8;
  return;
}

