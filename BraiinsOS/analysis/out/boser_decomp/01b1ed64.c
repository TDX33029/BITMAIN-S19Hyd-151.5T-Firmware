// FUN_01b1ed64 @ 01b1ed64 size=324 calls_out=1 calls_in=0
// strings: 

undefined8 FUN_01b1ed64(uint *param_1,uint *param_2,uint *param_3)

{
  code *pcVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uStack_24;
  uint uStack_20;
  uint local_1c;
  
  uVar2 = DAT_01d53560;
  local_1c = DAT_01d53560;
  puVar3 = param_2;
  while (((((puVar3 <= &uStack_24 || &uStack_20 <= puVar3 &&
            (((puVar4 = puVar3 + 1, &uStack_24 <= puVar3 || (puVar4 <= &uStack_24)) &&
             (&local_1c <= param_3 || param_3 <= &uStack_20)))) &&
           ((&uStack_20 <= param_3 || (param_3 + 1 <= &uStack_20)))) &&
          ((&uStack_24 <= param_1 || (param_1 + 1 <= &uStack_24)))) &&
         (param_1 <= &uStack_24 || &uStack_20 <= param_1))) {
    *param_1 = *param_3 ^ *puVar3;
    param_1 = param_1 + 1;
    puVar3 = puVar4;
    param_3 = param_3 + 1;
    if (puVar4 == param_2 + 4) {
      if (uVar2 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
        FUN_01be31f4();
      }
      return 0;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x1b1edc4);
  (*pcVar1)();
}

