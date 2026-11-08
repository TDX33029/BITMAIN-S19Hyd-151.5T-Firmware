// FUN_00c313b0 @ 00c313b0 size=1148 calls_out=9 calls_in=1
// strings: a Display implementation returned an error unexpectedly | a Display implementation returned an error unexpectedly

undefined4 FUN_00c313b0(undefined4 ***param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ***pppuVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  undefined1 auStack_74 [12];
  undefined4 ****local_68;
  code *local_64;
  undefined4 ****local_60;
  undefined1 *local_5c;
  undefined4 ***local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 ***local_48;
  int local_44;
  int local_40;
  undefined4 ****local_38;
  undefined4 *local_34;
  int local_30;
  undefined4 **local_28;
  
  DataMemoryBarrier(0xb);
  iVar8 = DAT_018db054;
  if (DAT_018db068 != 0) {
    local_38 = (undefined4 ****)&DAT_018db048;
    local_68 = &local_38;
    FUN_015eedc4(&DAT_018db068,1,&local_68,&DAT_01873450,&DAT_018ac9b8);
    iVar8 = DAT_018db054;
  }
  DAT_018db054 = iVar8;
  if (iVar8 != 0) {
    uVar1 = *DAT_018db048;
    puVar5 = DAT_018db048;
    puVar7 = DAT_018db048;
    while( true ) {
      puVar7 = puVar7 + 1;
      if ((uVar1 & 0x80808080) != 0x80808080) break;
      uVar1 = *puVar7;
      puVar5 = puVar5 + -8;
    }
    uVar1 = uVar1 & 0x80808080 ^ 0x80808080;
    local_60 = (undefined4 ****)0x0;
    local_64 = (code *)0x1;
    local_68 = (undefined4 ****)0x0;
    local_48 = (undefined4 ***)
               (&PTR_DAT_018b0de4)
               [*(byte *)((int)puVar5 +
                         (-8 - (LZCOUNT(uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 |
                                        (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18) & 0x38U)))];
    local_38 = &local_48;
    local_34 = (undefined4 *)&LAB_00640850;
    iVar2 = FUN_00fa948c(&local_68,&DAT_01870f94,&DAT_00590e71,&local_38);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_28,
                   &DAT_01870fac,&DAT_018af130);
    }
    if (local_68 != (undefined4 ****)0x80000000) {
      iVar8 = iVar8 + -1;
      local_54 = local_68;
      local_50 = local_64;
      uStack_4c = local_60;
      pppuVar4 = (undefined4 ***)(iVar8 * 2);
      uVar3 = 0;
      if ((int)pppuVar4 < 0) {
LAB_00c31538:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar3,pppuVar4);
      }
      if (pppuVar4 == (undefined4 ***)0x0) {
        local_44 = 1;
        pppuVar4 = (undefined4 ***)0x0;
      }
      else {
        local_44 = thunk_FUN_016d4a50(pppuVar4);
        if (local_44 == 0) {
          uVar3 = 1;
          goto LAB_00c31538;
        }
      }
      local_68 = &local_54;
      local_40 = 0;
      local_64 = (code *)&DAT_006043a8;
      local_48 = pppuVar4;
      iVar2 = FUN_00fa948c(&local_48,&DAT_01870f94,&DAT_00590e71,&local_68);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_28,&DAT_01870fac,&DAT_01871390);
      }
      uVar1 = uVar1 - 1 & uVar1;
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        puVar6 = puVar7;
        if (uVar1 == 0) {
          do {
            puVar7 = puVar6 + 1;
            uVar1 = *puVar6;
            puVar5 = puVar5 + -8;
            puVar6 = puVar7;
          } while ((uVar1 & 0x80808080) == 0x80808080);
          uVar1 = uVar1 & 0x80808080 ^ 0x80808080;
        }
        local_30 = 0;
        local_38 = (undefined4 ****)0x0;
        local_34 = (undefined4 *)0x1;
        local_28 = (undefined4 **)
                   (&PTR_DAT_018b0e08)
                   [*(byte *)((int)puVar5 +
                             (-8 - (LZCOUNT(uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 |
                                            (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18) & 0x38U)))]
        ;
        local_64 = (code *)&LAB_00640850;
        local_68 = (undefined4 ****)&local_28;
        iVar2 = FUN_00fa948c(&local_38,&DAT_01870f94,&DAT_00590e71,&local_68);
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_28,
                       &DAT_01870fac,&DAT_018af130);
        }
        local_68 = local_38;
        local_64 = (code *)local_34;
        local_60 = (undefined4 ****)local_30;
        if ((uint)((int)local_48 - local_40) < 2) {
          FUN_00d653ec(&local_48,local_40,2,1,1);
        }
        *(undefined2 *)(local_44 + local_40) = 0x202c;
        local_40 = local_40 + 2;
        local_34 = &DAT_006043a8;
        local_38 = &local_68;
        iVar2 = FUN_00fa948c(&local_48,&DAT_01870f94,&DAT_00590e71,&local_38);
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_28,&DAT_01870fac,&DAT_018713a0);
        }
        if (local_68 != (undefined4 ****)0x0) {
          thunk_FUN_016d3fb4(local_64);
        }
        uVar1 = uVar1 - 1 & uVar1;
      }
      local_38 = (undefined4 ****)local_48;
      local_34 = (undefined4 *)local_44;
      local_30 = local_40;
      if (local_54 != (undefined4 ***)0x0) {
        thunk_FUN_016d3fb4(local_50);
      }
      goto LAB_00c314ac;
    }
  }
  local_30 = 0;
  local_34 = (undefined4 *)0x1;
  local_38 = (undefined4 ****)0x0;
LAB_00c314ac:
  local_60 = &local_38;
  local_5c = &LAB_00787c90;
  local_64 = FUN_006407f8;
  local_68 = (undefined4 ****)param_1;
  FUN_00600d2c(auStack_74,&DAT_0056e186,&local_68);
  uVar3 = FUN_00c6b484(auStack_74);
  if (local_38 != (undefined4 ****)0x0) {
    thunk_FUN_016d3fb4(local_34);
  }
  return uVar3;
}

