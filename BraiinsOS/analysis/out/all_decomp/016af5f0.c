// FUN_016af5f0 @ 016af5f0 size=1600 calls_out=5 calls_in=2
// strings: Some Trigger/Listener has panicked

bool FUN_016af5f0(int *param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined8 uVar26;
  uint local_54;
  int *local_2c;
  undefined1 local_28;
  
  iVar22 = *param_1;
  DataMemoryBarrier(0xb);
  if (*(char *)(iVar22 + 0x38) != '\0') {
    return false;
  }
  piVar12 = (int *)(iVar22 + 8);
  do {
    if (*piVar12 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar12);
      goto LAB_016af644;
    }
    bVar3 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar3);
  *piVar12 = 1;
  DataMemoryBarrier(0xb);
LAB_016af644:
  uVar14 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(iVar22 + 0xc);
  }
  else {
    uVar14 = FUN_015bf3f8();
    uVar14 = uVar14 ^ 1;
    cVar1 = *(char *)(iVar22 + 0xc);
  }
  if (cVar1 != '\0') {
    local_28 = (undefined1)uVar14;
    local_2c = piVar12;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("Some Trigger/Listener has panicked",0x22,&local_2c,&DAT_018aea3c,&DAT_018aea5c);
  }
  cVar1 = *(char *)(iVar22 + 0x38);
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    uVar4 = param_1[1];
    uVar26 = (*(code *)**(undefined4 **)*param_2)(((undefined4 *)*param_2)[1]);
    uVar13 = *(uint *)(iVar22 + 0x2c);
    uVar9 = *(uint *)(iVar22 + 0x20);
    local_54 = *(uint *)(iVar22 + 0x24);
    uVar15 = *(uint *)(iVar22 + 0x28);
    uVar7 = uVar13 ^ 0x646f7261;
    uVar17 = uVar15 ^ 0x6e646f6d;
    uVar5 = uVar17 + (uVar9 ^ 0x70736575);
    uVar20 = (uVar17 << 0xd | uVar7 >> 0x13) ^ uVar5;
    uVar23 = uVar7 + (local_54 ^ 0x736f6d65) + (uint)CARRY4(uVar17,uVar9 ^ 0x70736575);
    uVar18 = (uVar7 << 0xd | uVar17 >> 0x13) ^ uVar23;
    uVar7 = uVar13 ^ 0x70656462;
    uVar10 = uVar15 ^ uVar4 ^ 0x79746573;
    uVar11 = uVar10 + (uVar9 ^ 0x6e657261);
    uVar17 = uVar7 + (local_54 ^ 0x6c796765) + (uint)CARRY4(uVar10,uVar9 ^ 0x6e657261);
    uVar24 = uVar18 + uVar17 + (uint)CARRY4(uVar20,uVar11);
    uVar16 = uVar24 ^ (uVar18 << 0x11 | uVar20 >> 0xf);
    uVar17 = (uVar7 << 0x10 | uVar10 >> 0x10) ^ uVar17;
    uVar7 = (uVar10 << 0x10 | uVar7 >> 0x10) ^ uVar11;
    uVar10 = uVar7 + uVar23 ^ uVar4;
    uVar5 = uVar17 + uVar5 + (uint)CARRY4(uVar7,uVar23);
    uVar19 = uVar20 + uVar11 ^ (uVar20 << 0x11 | uVar18 >> 0xf);
    uVar25 = uVar10 + uVar19;
    uVar21 = (uVar5 ^ 0x4000000) + uVar16 + (uint)CARRY4(uVar10,uVar19);
    uVar18 = uVar21 ^ (uVar16 << 0xd | uVar19 >> 0x13);
    uVar19 = uVar25 ^ (uVar19 << 0xd | uVar16 >> 0x13);
    uVar5 = (uVar17 << 0x15 | uVar7 >> 0xb) ^ uVar5;
    uVar17 = (uVar7 << 0x15 | uVar17 >> 0xb) ^ uVar7 + uVar23;
    uVar24 = uVar24 ^ 0xff;
    uVar10 = uVar24 + uVar17;
    uVar7 = uVar20 + uVar11 + uVar5 + (uint)CARRY4(uVar24,uVar17);
    uVar23 = uVar18 + uVar7 + (uint)CARRY4(uVar19,uVar10);
    uVar16 = uVar23 ^ (uVar18 << 0x11 | uVar19 >> 0xf);
    uVar18 = uVar19 + uVar10 ^ (uVar19 << 0x11 | uVar18 >> 0xf);
    uVar7 = uVar7 ^ (uVar5 << 0x10 | uVar17 >> 0x10);
    uVar17 = uVar10 ^ (uVar17 << 0x10 | uVar5 >> 0x10);
    uVar11 = uVar17 + uVar21;
    uVar24 = uVar7 + uVar25 + (uint)CARRY4(uVar17,uVar21);
    uVar20 = uVar16 + uVar24 + (uint)CARRY4(uVar18,uVar11);
    uVar5 = (uVar16 << 0xd | uVar18 >> 0x13) ^ uVar20;
    uVar16 = (uVar18 << 0xd | uVar16 >> 0x13) ^ uVar18 + uVar11;
    uVar24 = (uVar7 << 0x15 | uVar17 >> 0xb) ^ uVar24;
    uVar7 = (uVar17 << 0x15 | uVar7 >> 0xb) ^ uVar11;
    uVar17 = uVar7 + uVar23;
    uVar10 = uVar24 + uVar19 + uVar10 + (uint)CARRY4(uVar7,uVar23);
    uVar19 = uVar5 + uVar10 + (uint)CARRY4(uVar16,uVar17);
    uVar10 = (uVar24 << 0x10 | uVar7 >> 0x10) ^ uVar10;
    uVar21 = (uVar5 << 0x11 | uVar16 >> 0xf) ^ uVar19;
    uVar7 = (uVar7 << 0x10 | uVar24 >> 0x10) ^ uVar17;
    uVar24 = uVar7 + uVar20;
    uVar11 = uVar10 + uVar18 + uVar11 + (uint)CARRY4(uVar7,uVar20);
    uVar18 = (uVar10 << 0x15 | uVar7 >> 0xb) ^ uVar11;
    uVar10 = (uVar7 << 0x15 | uVar10 >> 0xb) ^ uVar24;
    uVar7 = uVar10 + uVar19;
    uVar5 = (uVar16 << 0x11 | uVar5 >> 0xf) ^ uVar16 + uVar17;
    uVar16 = uVar18 + uVar16 + uVar17 + (uint)CARRY4(uVar10,uVar19);
    uVar17 = (uVar21 << 0xd | uVar5 >> 0x13) ^ uVar21 + uVar11 + (uint)CARRY4(uVar5,uVar24);
    uVar5 = (uVar5 << 0xd | uVar21 >> 0x13) ^ uVar5 + uVar24;
    if (*(int *)(iVar22 + 0x18) == 0) {
      FUN_016ae580(iVar22 + 0x10,uVar15,uVar9,local_54,uVar15,uVar13);
    }
    uVar24 = *(uint *)(iVar22 + 0x14);
    uVar7 = (uVar5 << 0x11 | uVar17 >> 0xf) ^
            ((uVar18 >> 0x10 ^ uVar7) << 0x15 | ((uVar18 << 0x10 | uVar10 >> 0x10) ^ uVar16) >> 0xb)
            ^ uVar17 + uVar16 + (uint)CARRY4(uVar5,uVar7) ^ uVar5 + uVar7;
    puVar6 = *(uint **)(iVar22 + 0x10);
    bVar3 = false;
    iVar8 = 0;
    uVar5 = uVar7;
    do {
      uVar5 = uVar24 & uVar5;
      uVar9 = *(uint *)((int)puVar6 + uVar5);
      uVar17 = uVar9 ^ (uVar7 >> 0x19) * 0x1010101;
      uVar17 = ~uVar17 & 0x80808080 & uVar17 + 0xfefefeff;
      while (uVar17 != 0) {
        uVar10 = uVar17 >> 8;
        uVar11 = uVar17 >> 0x10;
        uVar13 = uVar17 >> 0x18;
        uVar18 = uVar17 << 0x18;
        uVar17 = uVar17 - 1 & uVar17;
        uVar10 = uVar5 + ((uint)LZCOUNT(uVar18 | (uVar10 & 0xff) << 0x10 | (uVar11 & 0xff) << 8 |
                                        uVar13) >> 3) & uVar24;
        if (uVar4 == puVar6[uVar10 * -3 + -3]) {
          uVar4 = puVar6[uVar10 * -3 + -2];
          *(undefined8 *)(puVar6 + uVar10 * -3 + -2) = uVar26;
          (**(code **)(uVar4 + 0xc))(puVar6[uVar10 * -3 + -1]);
          goto joined_r0x016afb80;
        }
      }
      uVar17 = uVar9 & 0x80808080;
      if (bVar3) {
LAB_016afa10:
        if ((uVar17 & uVar9 << 1) != 0) goto LAB_016afb00;
        bVar3 = true;
      }
      else {
        if (uVar17 != 0) {
          local_54 = uVar5 + ((uint)LZCOUNT((uVar9 & 0x80) << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                            (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3) &
                     uVar24;
          goto LAB_016afa10;
        }
        bVar3 = false;
      }
      iVar8 = iVar8 + 4;
      uVar5 = iVar8 + uVar5;
    } while( true );
  }
joined_r0x016afb80:
  if (((uVar14 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar8 = FUN_015bf3f8(), iVar8 == 0))
  {
    *(undefined1 *)(iVar22 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar22 = *piVar12;
    bVar3 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar3);
  *piVar12 = 0;
  if (iVar22 == 2) {
    FUN_016d6968(0xf0,piVar12,0x81,1);
    return cVar1 == '\0';
  }
  return cVar1 == '\0';
LAB_016afb00:
  uVar5 = (uint)*(char *)((int)puVar6 + local_54);
  if (-1 < (int)uVar5) {
    uVar5 = *puVar6 & 0x80808080;
    local_54 = LZCOUNT((*puVar6 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                       (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18);
    uVar5 = (uint)*(byte *)((int)puVar6 + (local_54 >> 3));
    local_54 = local_54 >> 3;
  }
  *(uint *)(iVar22 + 0x18) = *(int *)(iVar22 + 0x18) - (uVar5 & 1);
  *(int *)(iVar22 + 0x1c) = *(int *)(iVar22 + 0x1c) + 1;
  bVar2 = (byte)(uVar7 >> 0x19);
  *(byte *)((int)puVar6 + local_54) = bVar2;
  *(byte *)((int)puVar6 + (local_54 - 4 & uVar24) + 4) = bVar2;
  puVar6[local_54 * -3 + -2] = (uint)uVar26;
  puVar6[local_54 * -3 + -3] = uVar4;
  puVar6[local_54 * -3 + -1] = (uint)((ulonglong)uVar26 >> 0x20);
  goto joined_r0x016afb80;
}

