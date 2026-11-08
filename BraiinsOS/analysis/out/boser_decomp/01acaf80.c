// FUN_01acaf80 @ 01acaf80 size=492 calls_out=1 calls_in=5
// strings: 

void FUN_01acaf80(int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (param_1 != 0) {
    if (param_3 == 0x25) {
      local_1c = param_5;
      local_20 = param_4;
      puVar1 = (undefined1 *)FUN_01ac9ff4(&local_20);
      puVar2 = (undefined1 *)FUN_01ac9ff4(&local_20);
      if (puVar1 != &DAT_00110000 && puVar2 != &DAT_00110000) {
        puVar4 = puVar1 + -0x30;
        bVar7 = (undefined1 *)0x9 < puVar4;
        bVar6 = puVar4 == (undefined1 *)0xa;
        if (bVar7) {
          puVar4 = (undefined1 *)(((uint)puVar1 & 0xffffffdf) - 0x41);
          bVar6 = puVar4 == (undefined1 *)0x5;
        }
        if ((!bVar7 || puVar4 < (undefined1 *)0x5) || bVar6) {
          if (puVar2 + -0x30 < (undefined1 *)0xa) {
            return;
          }
          if (((uint)puVar2 & 0x1fffdf) - 0x41 < 6) {
            return;
          }
        }
      }
      (**(code **)(param_2 + 0x14))(param_1,8);
    }
    else {
      uVar3 = (param_3 & 0x1fffdf) - 0x41;
      bVar6 = 0x19 < uVar3;
      if (bVar6) {
        uVar3 = param_3 - 0x30;
      }
      if (((bVar6 && 9 < uVar3) &&
          (((0x1f < param_3 - 0x21 || ((1 << (param_3 - 0x21 & 0xff) & 0xd6007fe9U) == 0)) &&
           (param_3 != 0x5f && param_3 != 0x7e)))) && (0xd75f < param_3 - 0xa0)) {
        uVar3 = param_3 - 0xe000;
        uVar5 = 0x1dd0;
        bVar6 = 0x1dcf < uVar3;
        if (bVar6) {
          uVar5 = 0x20e;
          uVar3 = param_3 - 0xfdf0;
        }
        if (bVar6 && uVar5 <= uVar3) {
          uVar3 = param_3 - 0x10000;
          bVar6 = 0xfffd < uVar3;
          if (bVar6) {
            uVar3 = param_3 - 0x20000;
          }
          if (bVar6 && 0xfffd < uVar3) {
            uVar3 = param_3 - 0x30000;
            bVar6 = 0xfffd < uVar3;
            if (bVar6) {
              uVar3 = param_3 - 0x40000;
            }
            if (bVar6 && 0xfffd < uVar3) {
              uVar3 = param_3 - 0x50000;
              bVar6 = 0xfffd < uVar3;
              if (bVar6) {
                uVar3 = param_3 - 0x60000;
              }
              if (bVar6 && 0xfffd < uVar3) {
                uVar3 = param_3 - 0x70000;
                bVar6 = 0xfffd < uVar3;
                if (bVar6) {
                  uVar3 = param_3 - 0x80000;
                }
                if (bVar6 && 0xfffd < uVar3) {
                  uVar3 = param_3 - 0x90000;
                  bVar6 = 0xfffd < uVar3;
                  if (bVar6) {
                    uVar3 = param_3 - 0xa0000;
                  }
                  if (bVar6 && 0xfffd < uVar3) {
                    uVar3 = param_3 - 0xb0000;
                    bVar6 = 0xfffd < uVar3;
                    if (bVar6) {
                      uVar3 = param_3 - 0xc0000;
                    }
                    if (bVar6 && 0xfffd < uVar3) {
                      uVar5 = param_3 - 0xd0000;
                      uVar3 = 0xfffe;
                      bVar6 = 0xfffd < uVar5;
                      if (bVar6) {
                        uVar5 = param_3 - 0xe1000;
                        uVar3 = 0xeffe;
                      }
                      if (bVar6 && uVar3 <= uVar5) {
                        uVar3 = param_3 - 0xf0000;
                        bVar6 = 0xfffd < uVar3;
                        if (bVar6) {
                          uVar3 = param_3 - 0x100000;
                        }
                        if (bVar6 && 0xfffd < uVar3) {
                    /* WARNING: Could not recover jumptable at 0x01acb168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (**(code **)(param_2 + 0x14))(param_1,6);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

