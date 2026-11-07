// FUN_015e9968 @ 015e9968 size=300 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_015e9968(uint *param_1,int param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint uVar8;
  undefined1 local_2c [4];
  uint local_28;
  
  if (param_3 != 0) {
    puVar7 = &DAT_018aeaf8;
    do {
      while (uVar2 = FUN_016e034e(2,param_2,param_3), uVar2 != 0xffffffff) {
        local_28 = uVar2;
        local_2c[0] = 4;
        if (uVar2 == 0) goto LAB_015e9a0c;
        if (param_3 < uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar2,param_3,param_3,&DAT_018aab58);
        }
        param_2 = param_2 + uVar2;
        param_3 = param_3 - uVar2;
        if (param_3 == 0) {
          return 0;
        }
      }
      puVar1 = (uint *)FUN_016d2bc8();
      local_2c[0] = 0;
      local_28 = *puVar1;
      if (*puVar1 != 4) {
        puVar7 = (uint *)local_2c;
LAB_015e9a0c:
        uVar2 = *puVar7;
        uVar3 = 0;
        if ((uVar2 & 0xff) != 4) {
          uVar8 = puVar7[1];
          if (((char)*param_1 != '\x04') && ((char)*param_1 == '\x03')) {
            puVar5 = (undefined4 *)param_1[1];
            uVar3 = *puVar5;
            puVar6 = (undefined4 *)puVar5[1];
            pcVar4 = (code *)*puVar6;
            if (pcVar4 != (code *)0x0) {
              (*pcVar4)(uVar3);
            }
            if (puVar6[1] != 0) {
              thunk_FUN_016d3fb4(uVar3);
            }
            thunk_FUN_016d3fb4(puVar5);
          }
          uVar3 = 1;
          *param_1 = uVar2;
          param_1[1] = uVar8;
        }
        return uVar3;
      }
    } while (param_3 != 0);
  }
  return 0;
}

