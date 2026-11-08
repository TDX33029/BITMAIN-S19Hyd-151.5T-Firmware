// FUN_00b3297c @ 00b3297c size=740 calls_out=13 calls_in=2
// strings: internal error: entered unreachable code: datetimes should only be serialized as structs; not maps

undefined4 FUN_00b3297c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 *local_260;
  undefined2 local_25c;
  undefined1 *local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined1 *local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  int local_238;
  undefined1 auStack_234 [28];
  int local_218;
  undefined1 auStack_214 [76];
  undefined1 *local_1c8;
  undefined4 local_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  int local_1b8;
  undefined1 auStack_1b4 [108];
  undefined1 *local_148 [21];
  int local_f4;
  int local_e0;
  undefined1 auStack_dc [68];
  undefined1 *local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  
  local_260 = &local_26c;
  local_25c = 1;
  local_264 = 0;
  local_268 = 1;
  local_26c = 0;
  FUN_01a436e0(&local_1c8,&local_260,0);
  if (local_1b8 == -0x7fffffff) {
    local_98 = local_1c8;
    uStack_94 = local_1c4;
    uStack_90 = uStack_1c0;
    local_258 = local_1c8;
    local_254 = local_1c4;
    local_250 = uStack_1c0;
LAB_00b32bb0:
    uVar8 = local_268;
    uVar5 = local_26c;
    if (local_258 == &DAT_80000005) {
      uVar3 = FUN_00adaf40(param_2,param_3,local_268,local_264);
      FUN_019bb7e0(uVar5,uVar8);
      return uVar3;
    }
    puVar6 = local_258;
    uVar5 = local_254;
    uVar8 = local_250;
  }
  else {
    local_98 = local_1c8;
    uStack_94 = local_1c4;
    uStack_90 = uStack_1c0;
    uStack_8c = uStack_1bc;
    FUN_01bed4e2(auStack_234,auStack_1b4,0x6c);
    local_248 = local_98;
    uStack_244 = uStack_94;
    uStack_240 = uStack_90;
    uStack_23c = uStack_8c;
    puVar12 = (uint *)*param_1;
    local_238 = local_1b8;
    iVar11 = param_1[3];
    puVar10 = puVar12 + 1;
    uVar7 = ~*puVar12 & 0x80808080;
    puVar4 = &local_1c4;
    do {
      while( true ) {
        if (iVar11 == 0) {
          FUN_01bed4e2(&local_1c8,&local_248,0x80);
          FUN_01a41954(&local_258,&local_1c8);
          goto LAB_00b32bb0;
        }
        puVar9 = puVar10;
        if (uVar7 == 0) {
          do {
            puVar10 = puVar9 + 1;
            uVar7 = *puVar9;
            puVar12 = puVar12 + -0x28;
            puVar9 = puVar10;
          } while ((uVar7 & 0x80808080) == 0x80808080);
          uVar7 = uVar7 & 0x80808080 ^ 0x80808080;
        }
        uVar1 = (uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                              (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3;
        FUN_01272dac(&local_1c8,&local_248,puVar12 + uVar1 * -10 + -10);
        if (local_1c8 != &DAT_80000005) {
          puVar6 = local_1c8;
          goto LAB_00b32c0c;
        }
        if (local_238 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100("internal error: entered unreachable code: datetimes should only be serialized as structs, not maps"
                       ,0xc5,&DAT_01d2bdec);
        }
        FUN_01a3d52c(local_148,puVar12 + uVar1 * -10 + -6);
        iVar2 = local_218;
        iVar11 = iVar11 + -1;
        uVar7 = uVar7 - 1 & uVar7;
        if (local_f4 == 8) break;
        local_218 = -0x80000000;
        if (iVar2 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d2bdfc);
        }
        local_e0 = iVar2;
        FUN_01bed4e2(auStack_dc,auStack_214,0x44);
        FUN_01bed4e2(&uStack_90,local_148,0x68);
        local_98 = (undefined1 *)0x1;
        FUN_01a4b734(&local_1c8,&local_248,&local_e0,&local_98);
        if (local_1c8 != (undefined1 *)0x4) {
          FUN_00b383b0(&local_1c8);
        }
      }
    } while (local_148[0] == &DAT_80000005);
    puVar4 = (undefined4 *)((uint)local_148 | 4);
    puVar6 = local_148[0];
LAB_00b32c0c:
    uVar5 = *puVar4;
    uVar8 = puVar4[1];
    FUN_0126ef74(&local_248);
  }
  FUN_019bb7e0(local_26c,local_268);
  local_1c8 = puVar6;
  local_1c4 = uVar5;
  uStack_1c0 = uVar8;
  uVar5 = FUN_01274a84(&local_1c8);
  return uVar5;
}

