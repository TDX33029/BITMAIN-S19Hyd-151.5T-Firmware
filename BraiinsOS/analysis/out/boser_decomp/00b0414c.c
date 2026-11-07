// FUN_00b0414c @ 00b0414c size=816 calls_out=10 calls_in=0
// strings: mdns_enabledevent open/boser/boser/src/api/grpc/authentication.rs:113open/boser/boser/src/api/grpc/authentication.rs | mdns_enabledevent open/boser/boser/src/api/grpc/authentication.rs:113open/boser/boser/src/api/grpc/authentication.rs

int FUN_00b0414c(int *param_1,int param_2,int param_3,uint *param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *extraout_r2;
  int *extraout_r2_00;
  int *piVar7;
  int *extraout_r2_01;
  int *extraout_r2_02;
  uint *extraout_r3;
  uint *extraout_r3_00;
  uint *extraout_r3_01;
  uint *extraout_r3_02;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  uint local_98;
  int *local_80;
  int *local_7c;
  uint *puStack_78;
  uint *local_74;
  uint local_70;
  uint *local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint local_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar2 = *param_1;
  piVar6 = (int *)(iVar2 + 8);
  if (*piVar6 == 0) {
    bVar15 = (bool)hasExclusiveAccess(piVar6);
    if (bVar15) {
      *piVar6 = 0x3fffffff;
      DataMemoryBarrier(0xb);
      piVar7 = piVar6;
      puStack_78 = param_4;
      goto LAB_00b04194;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_019ae2e0(piVar6);
  piVar7 = extraout_r2_01;
  puStack_78 = extraout_r3_01;
LAB_00b04194:
  local_98 = 0;
  if ((DAT_01d51b08 & 0x7fffffff) != 0) {
    local_98 = FUN_0197ac0c();
    local_98 = local_98 ^ 1;
    piVar7 = extraout_r2_02;
    puStack_78 = extraout_r3_02;
  }
  if (*(char *)(iVar2 + 0x10) != '\0') {
    local_7c = (int *)CONCAT31(local_7c._1_3_,(char)local_98);
    local_80 = piVar6;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_0056c7a8,0x20,&local_80,&DAT_01c10bd8,&DAT_01c10aa8);
  }
  if (param_3 != 0) {
    puVar11 = (undefined4 *)(param_2 + 4);
    param_3 = param_3 * 0xc;
    do {
      if (puVar11[1] == 0xc) {
        iVar3 = thunk_FUN_01bed842(*puVar11,
                                   "mdns_enabledevent open/boser/boser/src/api/grpc/authentication.rs:113open/boser/boser/src/api/grpc/authentication.rs"
                                   ,0xc);
        piVar7 = extraout_r2_00;
        puStack_78 = extraout_r3_00;
        if (iVar3 == 0) {
          *(undefined1 *)(iVar2 + 0x21) = 2;
        }
      }
      else if ((puVar11[1] == 0x10) &&
              (iVar3 = thunk_FUN_01bed842(*puVar11,&DAT_00569338,0x10), piVar7 = extraout_r2,
              puStack_78 = extraout_r3, iVar3 == 0)) {
        *(undefined1 *)(iVar2 + 0x20) = 2;
      }
      puVar11 = puVar11 + 3;
      param_3 = param_3 + -0xc;
    } while (param_3 != 0);
  }
  puVar8 = (uint *)*param_4;
  uVar5 = param_4[1];
  uVar14 = param_4[3];
  if (uVar5 == 0) {
    local_80 = (int *)0x0;
  }
  else {
    local_80 = (int *)0x8;
    puStack_78 = puVar8 + uVar5 * -10 + -10;
    piVar7 = (int *)(uVar5 * 0x29 + 0x2d);
  }
  puVar10 = puVar8 + 1;
  uVar4 = ~*puVar8 & 0x80808080;
  local_68 = (int)puVar8 + uVar5 + 1;
  puVar11 = (undefined4 *)((uint)&local_60 | 4);
  local_7c = piVar7;
  local_74 = puVar8;
  local_70 = uVar4;
  local_6c = puVar10;
  local_64 = uVar14;
  while (uVar14 != 0) {
    uVar5 = uVar4;
    puVar9 = puVar10;
    if (uVar4 == 0) {
      do {
        puVar10 = puVar9 + 1;
        uVar5 = *puVar9;
        puVar8 = puVar8 + -0x28;
        puVar9 = puVar10;
      } while ((uVar5 & 0x80808080) == 0x80808080);
      uVar5 = uVar5 & 0x80808080 ^ 0x80808080;
      local_74 = puVar8;
      local_6c = puVar10;
    }
    uVar4 = uVar5 - 1 & uVar5;
    uVar5 = (uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8
                          | uVar5 >> 0x18) >> 3;
    uVar14 = uVar14 - 1;
    uVar12 = puVar8[uVar5 * -10 + -10];
    uVar13 = puVar8[uVar5 * -10 + -9];
    local_60 = puVar8[uVar5 * -10 + -7];
    uStack_5c = puVar8[uVar5 * -10 + -6];
    uStack_58 = puVar8[uVar5 * -10 + -5];
    local_54 = puVar8[uVar5 * -10 + -4];
    uStack_50 = puVar8[uVar5 * -10 + -3];
    uStack_4c = puVar8[uVar5 * -10 + -2];
    uStack_48 = puVar8[uVar5 * -10 + -1];
    local_70 = uVar4;
    if (uVar12 == 0x80000000) goto LAB_00b043e0;
    local_40 = *puVar11;
    uStack_3c = puVar11[1];
    uStack_38 = puVar11[2];
    uStack_34 = puVar11[3];
    uStack_30 = puVar11[4];
    uStack_2c = puVar11[5];
    bVar15 = (char)local_40 == '\x01';
    if (bVar15) {
      local_40._1_1_ = (undefined1)((uint)local_40 >> 8);
      uVar1 = local_40._1_1_;
      if (puVar8[uVar5 * -10 + -8] == 0xc) {
        iVar3 = thunk_FUN_01bed842(uVar13,
                                   "mdns_enabledevent open/boser/boser/src/api/grpc/authentication.rs:113open/boser/boser/src/api/grpc/authentication.rs"
                                   ,0xc);
        if (iVar3 == 0) {
          *(undefined1 *)(iVar2 + 0x21) = uVar1;
        }
      }
      else if ((puVar8[uVar5 * -10 + -8] == 0x10) &&
              (iVar3 = thunk_FUN_01bed842(uVar13,&DAT_00569338,0x10), iVar3 == 0)) {
        *(undefined1 *)(iVar2 + 0x20) = uVar1;
      }
    }
    FUN_00e0febc(&local_40);
    FUN_019bb7e0(uVar12,uVar13);
  }
  uVar14 = 0;
LAB_00b043e0:
  local_64 = uVar14;
  FUN_01ada55c(&local_80);
  iVar2 = FUN_00b04520(iVar2 + 0x14);
  FUN_01ac2a34(piVar6,local_98);
  if (iVar2 == 0) {
    FUN_00b047e8(param_1);
  }
  return iVar2;
}

