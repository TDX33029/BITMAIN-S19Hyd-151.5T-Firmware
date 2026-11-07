// FUN_017581dc @ 017581dc size=452 calls_out=6 calls_in=2
// strings: 

undefined8 FUN_017581dc(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint local_258;
  uint local_254;
  byte local_240 [4];
  undefined3 local_23c;
  undefined1 local_239;
  undefined1 auStack_1b0 [388];
  int local_2c;
  
  puVar5 = (undefined4 *)(param_1 + 0x338);
  local_2c = DAT_018ddaf8;
  FUN_01757774(auStack_1b0,0x88,&PTR_018bc3f4,0);
  FUN_01757884(auStack_1b0,param_2,0x30);
  FUN_01757d10(local_240,auStack_1b0,0x88);
  uVar4 = 0xcf;
  local_258 = (uint)local_240[1] << 8 | (uint)local_240[2] << 0x10 | (uint)local_240[0] |
              (uint)local_240[3] << 0x18;
  local_254 = CONCAT13(local_239,local_23c);
  FUN_016dd606(param_1,0,0x400);
  iVar2 = 8;
LAB_017582c8:
  do {
    if (iVar2 == 0x88) {
      FUN_01757d10(local_240,auStack_1b0);
      uVar3 = (uint)local_240[0];
      if (uVar4 < uVar3) {
        uVar3 = (uint)local_240[1];
        iVar2 = 2;
        if (uVar4 < uVar3) goto LAB_017582b8;
      }
      else {
        iVar2 = 1;
      }
    }
    else {
LAB_017582b8:
      uVar3 = (uint)local_240[iVar2];
      iVar2 = iVar2 + 1;
      if (uVar4 < uVar3) goto LAB_017582c8;
    }
    uVar4 = uVar4 + 1;
    uVar1 = local_258 & 1;
    puVar5 = puVar5 + 1;
    *puVar5 = *(undefined4 *)(param_1 + uVar3 * 4);
    local_258 = local_258 >> 1 | local_254 << 0x1f;
    local_254 = local_254 >> 1;
    *(uint *)(param_1 + uVar3 * 4) = uVar1 * -2 + 1;
    if (puVar5 == (undefined4 *)(param_1 + 0x3fc)) {
      FUN_0177aaa0(local_240,0x88);
      FUN_0177aaa0(&local_258,8);
      if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2b78();
      }
      return 0;
    }
  } while( true );
}

