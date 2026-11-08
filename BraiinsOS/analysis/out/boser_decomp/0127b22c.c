// FUN_0127b22c @ 0127b22c size=464 calls_out=3 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0127b22c(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uStack_40;
  int local_38;
  
  uVar3 = FUN_01a308e4(param_1[4],param_1[5],param_1[6],param_1[7]);
  if (param_1[2] == 0) {
    FUN_01278e64(param_1,param_1 + 4);
  }
  puVar6 = (uint *)*param_1;
  uVar9 = param_1[1];
  bVar2 = false;
  local_38 = 0;
  uVar7 = uVar3;
  do {
    uVar7 = uVar9 & uVar7;
    uVar8 = *(uint *)((int)puVar6 + uVar7);
    uVar4 = uVar8 ^ (uVar3 >> 0x19) * 0x1010101;
    uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
    while (uVar4 != 0) {
      iVar5 = thunk_FUN_01bed842(param_2,puVar6 + (uVar7 + ((uint)LZCOUNT(uVar4 << 0x18 |
                                                                          (uVar4 >> 8 & 0xff) <<
                                                                          0x10 | (uVar4 >> 0x10 &
                                                                                 0xff) << 8 |
                                                                          uVar4 >> 0x18) >> 3) &
                                                  uVar9) * -4 + -4,0x10);
      uVar4 = uVar4 - 1 & uVar4;
      if (iVar5 == 0) {
        return;
      }
    }
    uVar4 = uVar8 & 0x80808080;
    if (bVar2) {
LAB_0127b338:
      if ((uVar4 & uVar8 << 1) != 0) {
        uVar7 = (uint)*(char *)((int)puVar6 + uStack_40);
        if (-1 < (int)uVar7) {
          uVar7 = *puVar6 & 0x80808080;
          uVar4 = LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8
                          | uVar7 >> 0x18);
          uVar7 = (uint)*(byte *)((int)puVar6 + (uVar4 >> 3));
          uStack_40 = uVar4 >> 3;
        }
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)puVar6 + uStack_40) = bVar1;
        param_1[2] = param_1[2] - (uVar7 & 1);
        param_1[3] = param_1[3] + 1;
        *(byte *)((int)puVar6 + (uVar9 & uStack_40 - 4) + 4) = bVar1;
        FUN_01bed4e2(puVar6 + uStack_40 * -4 + -4,param_2,0x10);
        return;
      }
      bVar2 = true;
    }
    else {
      if (uVar4 != 0) {
        uStack_40 = uVar7 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                           (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) &
                    uVar9;
        goto LAB_0127b338;
      }
      bVar2 = false;
    }
    local_38 = local_38 + 4;
    uVar7 = local_38 + uVar7;
  } while( true );
}

