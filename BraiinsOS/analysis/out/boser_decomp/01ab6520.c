// FUN_01ab6520 @ 01ab6520 size=712 calls_out=4 calls_in=2
// strings: 

void FUN_01ab6520(undefined4 param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  undefined8 uVar14;
  uint local_60;
  undefined4 uStack_5c;
  uint uStack_58;
  uint *local_50;
  code *local_4c;
  undefined4 local_48;
  uint local_40;
  int local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  
  uVar9 = 0;
  FUN_019ac130(&local_40,0);
  local_4c = (code *)0x0;
  local_50 = (uint *)0x0;
  local_60 = local_40;
  uStack_5c = local_3c;
  uStack_58 = local_38;
  local_48 = 0;
  FUN_019ac248(&local_40,&local_60,&local_50);
  uVar10 = local_38;
  iVar12 = local_30;
  if ((local_40 & 1) != 0) {
    if (local_30 == 0) {
      uVar10 = -local_38;
      iVar12 = 0;
      local_34 = -(local_34 + (local_38 != 0));
    }
    else {
      uVar10 = ~local_38;
      iVar12 = (int)&DAT_3b9aca00 - local_30;
      local_34 = ~local_34;
    }
  }
  uVar14 = FUN_01bf0fb0(uVar10,local_34,0x15180,0);
  uVar3 = (uint)uVar14;
  uVar10 = uVar10 + uVar3 * -0x15180;
  uVar7 = 0xffffd4f7;
  if ((int)uVar10 < 0) {
    uVar7 = 0xffffd4f6;
  }
  iVar2 = FUN_01bf0fb0(uVar7 + uVar3,(int)((ulonglong)uVar14 >> 0x20) - (uint)!CARRY4(uVar7,uVar3),
                       0x23ab1,0);
  uVar7 = uVar7 + uVar3 + iVar2 * -0x23ab1;
  uVar3 = uVar7;
  if ((int)uVar7 < 0) {
    uVar3 = uVar7 + 0x23ab1;
  }
  iVar8 = (int)(((ulonglong)uVar3 << 0x20) + (longlong)(int)uVar3 * -0x1a537e05 >> 0x20);
  iVar8 = (iVar8 >> 0xf) - (iVar8 >> 0x1f);
  if (uVar3 - 0x23ab0 < 0x8eac) {
    iVar8 = 3;
  }
  iVar4 = iVar8 * -0x8eac + uVar3;
  uVar3 = iVar4 / 0x5b5;
  if (iVar4 - 0x8eadU < 0x5b5) {
    uVar3 = 0x18;
  }
  uVar5 = uVar3 * -0x5b5 + iVar4;
  iVar4 = (int)(((ulonglong)uVar5 << 0x20) + (longlong)(int)uVar5 * -0x4c73064f >> 0x20);
  uVar11 = (iVar4 >> 8) - (iVar4 >> 0x1f);
  if (uVar5 - 0x5b4 < 0x16d) {
    uVar11 = 3;
  }
  iVar4 = uVar11 * -0x16d + uVar5;
  do {
    pcVar6 = &DAT_00531608 + uVar9;
    if (iVar4 < *pcVar6) {
      lVar1 = (longlong)(iVar2 + ((int)uVar7 >> 0x1f)) * 400 + (longlong)(iVar8 * 100) +
              CONCAT44(((int)uVar3 >> 0x1f) << 2 | uVar3 >> 0x1e,uVar3 * 4);
      uVar3 = (uint)lVar1;
      uVar7 = uVar3 + uVar11;
      if ((int)uVar10 < 0) {
        uVar10 = uVar10 + 0x15180;
      }
      uVar5 = uVar9;
      if (9 < uVar9) {
        uVar5 = uVar9 + 0xf4;
      }
      bVar13 = 0xfffff82f < uVar7;
      if (9 < uVar9) {
        bVar13 = 0xfffff82e < uVar7;
      }
      local_3c = (int)((ulonglong)lVar1 >> 0x20) + ((int)uVar11 >> 0x1f) +
                 (uint)CARRY4(uVar3,uVar11) + (uint)bVar13;
      local_40 = uVar7 + 2000;
      if (9 < uVar9) {
        local_40 = uVar7 + 0x7d1;
      }
      uVar9 = uVar10 / 0x3c;
      local_30 = CONCAT31(local_30._1_3_,
                          (char)uVar10 + ((char)uVar9 * '\x10' - (char)(uVar10 / 0x3c)) * -4);
      local_4c = FUN_01ab67f8;
      local_34 = CONCAT13((char)uVar9 + ((char)(uVar9 / 0x3c) * '\x10' - (char)(uVar9 / 0x3c)) * -4,
                          CONCAT12((char)(uVar10 / 0xe10),
                                   CONCAT11((char)iVar4 + '\x01',(char)uVar5 + '\x03')));
      local_50 = &local_40;
      local_38 = iVar12;
      (**(code **)(param_2 + 0x14))(param_1,&DAT_00590e5f,&local_50);
      return;
    }
    uVar9 = uVar9 + 1;
    iVar4 = iVar4 - *pcVar6;
  } while (uVar9 != 0xc);
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(0xc,0xc,&DAT_01d2eda4);
}

