// FUN_0110e108 @ 0110e108 size=392 calls_out=6 calls_in=3
// strings: PublicKeystruct Ed25519PublicKeyFormatstruct Ed25519SignatureFormat | PublicKeystruct Ed25519PublicKeyFormatstruct Ed25519SignatureFormat | Invalid ed25519-primitive bytes

void FUN_0110e108(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint *puVar15;
  uint local_180;
  int local_17c;
  undefined4 *local_178;
  int local_174;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined *local_cc;
  undefined1 local_c8;
  undefined1 auStack_c0 [152];
  undefined4 uStack_28;
  int iStack_24;
  
  local_d8 = *param_2;
  local_d4 = param_2[1];
  local_d0 = param_2[2];
  local_cc = &DAT_0038a37e;
  local_c8 = 0;
  FUN_0110ed6c(&local_180,&local_d8);
  if (local_180 == 1) {
    param_1[2] = local_178;
    *param_1 = 1;
    param_1[1] = local_17c;
    param_1[3] = local_174;
    return;
  }
  if (local_174 == 0x20) {
    uVar13 = *local_178;
    uVar14 = local_178[1];
    FUN_00fcde48(&local_180,local_178);
    if ((local_180 & 1) != 0) {
      FUN_016dd1aa(auStack_c0,&local_178,0xa0);
      FUN_016dd1aa(&local_d8,local_178 + 2,0x18);
      param_1[2] = uVar13;
      param_1[3] = uVar14;
      FUN_016dd1aa(param_1 + 4,&local_d8,0xb8);
      *param_1 = 0;
      goto joined_r0x0110e1e8;
    }
    puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x28);
    if (puVar4 == (undefined4 *)0x0) goto LAB_0110e284;
    *puVar4 = 0;
  }
  else {
    puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x28);
    if (puVar4 == (undefined4 *)0x0) {
LAB_0110e284:
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x28);
    }
    *puVar4 = 2;
    puVar4[1] = 0x20;
    puVar4[2] = "PublicKeystruct Ed25519PublicKeyFormatstruct Ed25519SignatureFormat";
    puVar4[3] = 9;
  }
  thunk_FUN_016d3fb4();
  param_1[3] = 0x1f;
  param_1[2] = "Invalid ed25519-primitive bytes";
  param_1[1] = 8;
  *param_1 = 1;
joined_r0x0110e1e8:
  if (local_17c == 0) {
    return;
  }
  if (local_178 == (undefined4 *)0x0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar12 = *(byte *)((int)local_178 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar6 = uVar8 - 0x10, uVar8 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar8 = (uint)(*(byte *)((int)local_178 + -3) >> 5);
  iVar11 = *(int *)(iVar5 + 8) + 0x10;
  iVar9 = iVar6 * uVar12 + iVar6 + -4;
  iVar6 = iVar11 + iVar9;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar8 = *(uint *)(iVar6 + -4);
    if (uVar8 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar6 - (int)local_178) < uVar8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar6 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar11 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar5 + 0x14);
  uVar8 = 1 << uVar12;
  *(undefined1 *)((int)local_178 + -3) = 0xff;
  *(undefined2 *)((int)local_178 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar5 + 0x10);
    uVar7 = *(uint *)(iVar5 + 0xc) | uVar10;
    if ((uVar8 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar10 == 0) || (uVar7 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar12);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar13 = *puVar4;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar4 = uVar13;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar8 + uVar10;
      return;
    }
    puVar15 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar7 = *puVar15;
      if (uVar10 != uVar7) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar8 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar7) {
      return;
    }
  } while( true );
}

