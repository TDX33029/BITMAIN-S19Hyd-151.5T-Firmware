// FUN_01714f80 @ 01714f80 size=356 calls_out=2 calls_in=5
// strings: 

undefined4 FUN_01714f80(uint *param_1,uint param_2,byte *param_3,uint param_4)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  bool bVar7;
  uint uStack_18;
  uint local_14;
  
  uVar2 = DAT_018ddaf8;
  local_14 = DAT_018ddaf8;
  if (param_2 * 4 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c24();
  }
  if (3 < param_4) {
    puVar4 = param_1;
    puVar5 = (uint *)(param_3 + (param_4 - 4));
    do {
      if ((puVar5 < &local_14 && &uStack_18 < puVar5) ||
         ((puVar5 < &uStack_18 && (&uStack_18 < puVar5 + 1)))) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0,0x17150dc);
        (*pcVar1)();
      }
      uVar6 = *puVar5;
      param_4 = param_4 - 4;
      param_2 = param_2 - 1;
      param_1 = puVar4 + 1;
      *puVar4 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                uVar6 >> 0x18;
      puVar4 = param_1;
      puVar5 = puVar5 + -1;
    } while (3 < param_4);
  }
  puVar4 = param_1;
  if (param_4 != 0) {
    uVar6 = (uint)*param_3;
    if (param_4 != 1) {
      bVar7 = param_4 == 3;
      if (bVar7) {
        param_4 = (uint)param_3[2];
      }
      uVar6 = (uint)CONCAT11(*param_3,param_3[1]);
      if (bVar7) {
        uVar6 = param_4 | uVar6 << 8;
      }
    }
    param_2 = param_2 - 1;
    puVar4 = param_1 + 1;
    *param_1 = uVar6;
  }
  if ((param_2 & 0x3fffffff) == 0) {
    if (uVar2 == DAT_018ddaf8) {
      return 0;
    }
  }
  else if (uVar2 == DAT_018ddaf8) {
    uVar3 = FUN_016dd606(puVar4,0);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_016d2b78();
}

