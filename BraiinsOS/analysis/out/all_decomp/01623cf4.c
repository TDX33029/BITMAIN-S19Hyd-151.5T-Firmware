// FUN_01623cf4 @ 01623cf4 size=204 calls_out=3 calls_in=2
// strings: 

void FUN_01623cf4(undefined4 *param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 local_28 [4];
  uint local_24;
  
  if (param_4 != 0) {
    do {
      while (uVar2 = FUN_016e034e(param_2,param_3,param_4), uVar2 != 0xffffffff) {
        local_24 = uVar2;
        local_28[0] = 4;
        puVar4 = &DAT_018aeaf8;
        if (uVar2 == 0) {
LAB_01623d9c:
          uVar3 = puVar4[1];
          *param_1 = *puVar4;
          param_1[1] = uVar3;
          return;
        }
        if (param_4 < uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar2,param_4,param_4,&DAT_018aeb00);
        }
        param_3 = param_3 + uVar2;
        param_4 = param_4 - uVar2;
        if (param_4 == 0) goto LAB_01623d88;
      }
      puVar1 = (uint *)FUN_016d2bc8();
      local_28[0] = 0;
      local_24 = *puVar1;
      if (*puVar1 != 4) {
        puVar4 = (undefined4 *)local_28;
        goto LAB_01623d9c;
      }
    } while (param_4 != 0);
  }
LAB_01623d88:
  *(undefined1 *)param_1 = 4;
  return;
}

