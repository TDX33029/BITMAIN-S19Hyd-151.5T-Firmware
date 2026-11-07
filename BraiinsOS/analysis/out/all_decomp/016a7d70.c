// FUN_016a7d70 @ 016a7d70 size=960 calls_out=4 calls_in=2
// strings: 

void FUN_016a7d70(undefined4 param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
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
  
  uVar14 = 0;
  FUN_015f3b0c(&local_40,0);
  local_4c = (code *)0x0;
  local_50 = (uint *)0x0;
  local_60 = local_40;
  uStack_5c = local_3c;
  uStack_58 = local_38;
  local_48 = 0;
  FUN_015f3c24(&local_40,&local_60,&local_50);
  uVar9 = local_38;
  iVar13 = local_30;
  if ((local_40 & 1) != 0) {
    if (local_30 == 0) {
      uVar9 = -local_38;
      iVar13 = 0;
      local_34 = -(local_34 + (local_38 != 0));
    }
    else {
      uVar9 = ~local_38;
      iVar13 = (int)&DAT_3b9aca00 - local_30;
      local_34 = ~local_34;
    }
  }
  uVar15 = FUN_01846048(uVar9,local_34,0x15180,0);
  uVar4 = (uint)uVar15;
  uVar9 = uVar9 + uVar4 * -0x15180;
  uVar5 = 0xffffd4f7;
  if ((int)uVar9 < 0) {
    uVar5 = 0xffffd4f6;
  }
  iVar3 = FUN_01846048(uVar5 + uVar4,(int)((ulonglong)uVar15 >> 0x20) - (uint)!CARRY4(uVar5,uVar4),
                       0x23ab1,0);
  uVar5 = uVar5 + uVar4 + iVar3 * -0x23ab1;
  uVar4 = uVar5;
  if ((int)uVar5 < 0) {
    uVar4 = uVar5 + 0x23ab1;
  }
  uVar10 = uVar4 / 0x8eac;
  if (uVar4 - 0x23ab0 < 0x8eac) {
    uVar10 = 3;
  }
  iVar6 = uVar10 * -0x8eac + uVar4;
  uVar4 = iVar6 / 0x5b5;
  if (iVar6 - 0x8eadU < 0x5b5) {
    uVar4 = 0x18;
  }
  uVar12 = uVar4 * -0x5b5 + iVar6;
  iVar6 = (int)(((ulonglong)uVar12 << 0x20) + (longlong)(int)uVar12 * -0x4c73064f >> 0x20);
  uVar7 = (iVar6 >> 8) - (iVar6 >> 0x1f);
  if (uVar12 - 0x5b4 < 0x16d) {
    uVar7 = 3;
  }
  uVar12 = uVar7 * -0x16d + uVar12;
  if ((int)uVar12 < 0x1f) {
    cVar11 = '\0';
  }
  else {
    uVar14 = 0;
    if (uVar12 < 0x3d) {
      uVar12 = uVar12 - 0x1f;
      cVar11 = '\x01';
    }
    else if (uVar12 < 0x5c) {
      uVar12 = uVar12 - 0x3d;
      cVar11 = '\x02';
    }
    else if (uVar12 < 0x7a) {
      uVar12 = uVar12 - 0x5c;
      cVar11 = '\x03';
    }
    else if (uVar12 < 0x99) {
      uVar12 = uVar12 - 0x7a;
      cVar11 = '\x04';
    }
    else if (uVar12 < 0xb8) {
      uVar12 = uVar12 - 0x99;
      cVar11 = '\x05';
    }
    else if (uVar12 < 0xd6) {
      uVar12 = uVar12 - 0xb8;
      cVar11 = '\x06';
    }
    else if (uVar12 < 0xf5) {
      uVar12 = uVar12 - 0xd6;
      cVar11 = '\a';
    }
    else if (uVar12 < 0x113) {
      uVar12 = uVar12 - 0xf5;
      cVar11 = '\b';
    }
    else if (uVar12 >> 1 < 0x99) {
      uVar12 = uVar12 - 0x113;
      cVar11 = '\t';
    }
    else {
      if (uVar12 < 0x151) {
        uVar12 = uVar12 - 0x132;
        cVar11 = '\n';
      }
      else {
        if (0xb6 < uVar12 >> 1) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(0xc,0xc,&DAT_018ae6f4);
        }
        uVar12 = uVar12 - 0x151;
        cVar11 = '\v';
      }
      cVar11 = cVar11 + -0xc;
      uVar14 = 1;
    }
  }
  if ((int)uVar9 < 0) {
    uVar9 = uVar9 + 0x15180;
  }
  lVar1 = (longlong)(iVar3 + ((int)uVar5 >> 0x1f)) * 400 + (ulonglong)(uVar10 * 100) +
          CONCAT44(((int)uVar4 >> 0x1f) << 2 | uVar4 >> 0x1e,uVar4 * 4);
  uVar4 = (uint)lVar1;
  uVar5 = uVar4 + uVar7;
  uVar8 = ((uint)((ulonglong)uVar9 * 0x88888889 >> 0x20) & 0x1fffff) >> 5;
  uVar10 = uVar5 + uVar14;
  local_40 = uVar10 + 2000;
  local_3c = (int)((ulonglong)lVar1 >> 0x20) + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar4,uVar7) +
             (uint)CARRY4(uVar5,uVar14) + (uint)(0xfffff82f < uVar10);
  cVar2 = (char)(uVar9 / 0x3c);
  local_30 = CONCAT31(local_30._1_3_,(char)uVar9 + (cVar2 * '\x10' - (char)(uVar9 / 0x3c)) * -4);
  local_4c = FUN_016a55a4;
  local_34 = CONCAT13(cVar2 + ((char)(uVar8 / 0x3c) * '\x10' - (char)(uVar8 / 0x3c)) * -4,
                      CONCAT12((char)(uVar9 / 0xe10),CONCAT11((char)uVar12 + '\x01',cVar11 + '\x03')
                              ));
  local_50 = &local_40;
  local_38 = iVar13;
  (**(code **)(param_2 + 0x14))(param_1,&DAT_00590e71,&local_50);
  return;
}

